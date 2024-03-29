// Copyright : All rights reserved by Zoom Video Communications 2022-

#include "UserManager.h"

#include "Chaos/Pair.h"
#include "MeetingParticipantsController.h"
#include "MeetingParticipantsCtrlEvent.h"
#include "SDKInterfaceWrap.h"
#include "ZoomMeetingSDKEventHandler.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE

UserManager *UserManager::Create() {
  TUniquePtr<UserManager> um(new UserManager());
  if (um->Init()) {
    return um.Release();
  }

  return nullptr;
}

UserManager::UserManager() {}
UserManager::~UserManager() { ClearAll(); }

bool UserManager::Init() {
  ClearAll();

  _meeting_participant_ctrl.Reset(MeetingParticipantsController::Create());
  UE_LOG(ZoomMeetingSDKLog, Display, TEXT("UserManager::Init: Initializing"));
  if (_meeting_participant_ctrl.Get()) {
    _meeting_participant_ctrl_event.Reset(
        MeetingParticipantsCtrlEvent::Create());
    _meeting_participant_ctrl->SetEvent(_meeting_participant_ctrl_event.Get());
    return true;
  }
  return false;
}

void UserManager::ClearAll() {
  _current_users.Reset();

  if (!_user_video_renderer.IsEmpty()) {
    for (const auto &elem : _user_video_renderer) {
      delete elem.Value;
    }
    _user_video_renderer.Reset();
  }

  if (!_user_share_renderer.IsEmpty()) {
    for (const auto &elem : _user_share_renderer) {
      delete elem.Value;
    }
    _user_share_renderer.Reset();
  }
}

bool UserManager::AddNewUser(unsigned int user_id) {
  if (_current_users.Contains(user_id)) {
    UE_LOG(ZoomMeetingSDKLog, Error,
           TEXT("UserManager::AddNewUser: %d already present!"), user_id);
    return false;
  }
  auto *iuser_info = _meeting_participant_ctrl->GetUserByUserID(user_id);
  if (iuser_info == nullptr) {
    UE_LOG(ZoomMeetingSDKLog, Error,
           TEXT("UserManager::AddNewUser: Unable to get user: %d"), user_id);
    return false;
  }

  UE_LOG(ZoomMeetingSDKLog, Display,
         TEXT("UserManager::AddNewUser: added user: %d"), user_id);
  _current_users.Add(user_id);
  return true;
}

bool UserManager::RemoveUser(unsigned int user_id) {
  auto num_removed = _current_users.Remove(user_id);

  if (num_removed == 0) {
    UE_LOG(ZoomMeetingSDKLog, Error,
           TEXT("UserManager::RemoveUser: Unable to remove user: %d"), user_id);
    return false;
  }

  if (_user_video_renderer.Contains(user_id)) {
    UE_LOG(
        ZoomMeetingSDKLog, Display,
        TEXT("UserManager::RemoveUser: deleting video renderer for user: %d"),
        user_id);
    // Remove the video renderer.
    delete _user_video_renderer[user_id];
    _user_video_renderer.Remove(user_id);
  }

  if (_user_share_renderer.Contains(user_id)) {
    UE_LOG(
        ZoomMeetingSDKLog, Display,
        TEXT("UserManager::RemoveUser: deleting share renderer for user: %d"),
        user_id);
    // Remove the video renderer.
    delete _user_share_renderer[user_id];
    _user_share_renderer.Remove(user_id);
  }

  UE_LOG(ZoomMeetingSDKLog, Display,
         TEXT("UserManager::RemoveUser: removed user: %d"), user_id);
  return true;
}

bool UserManager::ChangeUserName(unsigned int user_id, FString new_user_name) {
  return ChangeUserNameNoLock(user_id, new_user_name);
}

bool UserManager::ChangeUsersNames(IList<unsigned int> *lst_user_ids) {
  bool ret_val = true;
  FString empty_str = "";

  for (int i = 0; i < lst_user_ids->GetCount(); ++i) {
    if (!ChangeUserNameNoLock(lst_user_ids->GetItem(i), empty_str)) {
      ret_val = false;
    }
  }

  return ret_val;
}

bool UserManager::ChangeUserNameNoLock(unsigned int user_id,
                                       FString new_user_name) {
  if (!_current_users.Contains(user_id)) {
    UE_LOG(ZoomMeetingSDKLog, Error,
           TEXT("UserManager::ChangeUserName: %d not found!"), user_id);
    return false;
  }

  auto *iuser_info = _meeting_participant_ctrl->GetUserByUserID(user_id);
  if (iuser_info == nullptr) {
    UE_LOG(ZoomMeetingSDKLog, Error,
           TEXT("UserManager::ChangeUserName: Unable to get user: %d"),
           user_id);
    return false;
  }

  UE_LOG(ZoomMeetingSDKLog, Display,
         TEXT("UserManager::ChangeUserName: updated user name: %d"), user_id);

  return true;
}

bool UserManager::GetUserInfo(unsigned int user_id, UserInfo *user_info) const {
  if (!_current_users.Contains(user_id)) {
    UE_LOG(ZoomMeetingSDKLog, Error,
           TEXT("UserManager::GetUserInfo: %d not found!"), user_id);
    return false;
  }

  auto *iuser_info = _meeting_participant_ctrl->GetUserByUserID(user_id);
  if (iuser_info) {
    UserInfo(iuser_info).ShallowCopyTo(user_info);
    return true;
  }
  UE_LOG(ZoomMeetingSDKLog, Error,
         TEXT("UserManager::GetUserInfo: %d user info not found!"), user_id);
  return false;
}

TArray<UserInfo> UserManager::GetAllUsers() const {
  TArray<UserInfo> ret_users_info;

  auto *lst_user_ids = _meeting_participant_ctrl->GetParticipantList();
  if (!lst_user_ids) {
    UE_LOG(ZoomMeetingSDKLog, Error,
           TEXT("UserManager::GetAllUsers: no users in the participant list."));
    return ret_users_info;
  }

  UE_LOG(ZoomMeetingSDKLog, Display,
         TEXT("UserManager::GetAllUsers: num users: %d."),
         lst_user_ids->GetCount());

  for (int i = 0; i < lst_user_ids->GetCount(); ++i) {
    auto user_id = lst_user_ids->GetItem(i);
    auto *iuser_info = _meeting_participant_ctrl->GetUserByUserID(user_id);
    if (!iuser_info) {
      UE_LOG(ZoomMeetingSDKLog, Error,
             TEXT("UserManager::GetAllUsers: unable to get user info for user: "
                  "%d."),
             user_id);
      continue;
    }
    ret_users_info.Add(UserInfo(iuser_info));
  }

  return ret_users_info;
}

ZoomSDKRenderer *
UserManager::GetZoomSDKRenderer(unsigned int user_id,
                                ZoomSDKRawDataType raw_data_type) {
  if (!_current_users.Contains(user_id)) {
    UE_LOG(ZoomMeetingSDKLog, Error,
           TEXT("UserManager::GetZoomSDKRenderer user id: %d not present!"),
           user_id);
    return nullptr;
  }

  if (raw_data_type == RAW_DATA_TYPE_VIDEO) {
    return GetZoomSDKRendererFromMap(user_id, _user_video_renderer);
  } else {
    return GetZoomSDKRendererFromMap(user_id, _user_share_renderer);
  }

  return nullptr;
}

ZoomSDKRenderer *UserManager::GetZoomSDKRendererFromMap(
    unsigned int user_id, TMap<unsigned int, ZoomSDKRenderer *> &renderer_map) {
  if (!renderer_map.Contains(user_id)) {
    UE_LOG(ZoomMeetingSDKLog, Display,
           TEXT("UserManager::GetZoomSDKRenderer user id: %d creating new "
                "ZoomSDKRenderer!"),
           user_id);
    renderer_map.Add(user_id, ZoomSDKRenderer::Create());
  }

  return renderer_map[user_id];
}

bool UserManager::IsOutputRendererInUse(
    UTextureRenderTarget2D *renderTarget) const {
  // Parse all the user video renderer's and check to see if its same as the
  // param passed.

  if (!_user_video_renderer.IsEmpty()) {
    for (const auto &elem : _user_video_renderer) {
      if (elem.Value->isSubscribed() &&
          renderTarget == elem.Value->GetOutputRenderer()) {
        return true;
      }
    }
  }

  if (!_user_share_renderer.IsEmpty()) {
    for (const auto &elem : _user_share_renderer) {
      if (elem.Value->isSubscribed() &&
          renderTarget == elem.Value->GetOutputRenderer()) {
        return true;
      }
    }
  }

  return false;
}

bool UserManager::IsUserSubscribed(unsigned int user_id,
                                   ZoomSDKRawDataType raw_data_type) const {
  if (!_current_users.Contains(user_id)) {
    UE_LOG(ZoomMeetingSDKLog, Error,
           TEXT("UserManager::IsUserSubscribed user id: %d not present!"),
           user_id);
    return false;
  }
  if (raw_data_type == RAW_DATA_TYPE_VIDEO) {
    if (!_user_video_renderer.Contains(user_id)) {
      UE_LOG(ZoomMeetingSDKLog, Error,
             TEXT("UserManager::IsUserSubscribed user id: %d is not subscribed "
                  "for video."),
             user_id);
      return false;
    }
  } else {
    if (!_user_share_renderer.Contains(user_id)) {
      UE_LOG(ZoomMeetingSDKLog, Error,
             TEXT("UserManager::IsUserSubscribed user id: %d is not subscribed "
                  "to share."),
             user_id);
      return false;
    }
  }

  UE_LOG(ZoomMeetingSDKLog, Display,
         TEXT("UserManager::IsUserSubscribed user id: %d video is subscribed."),
         user_id);

  return _user_video_renderer[user_id]->isSubscribed();
}

void UserManager::PrintDebugInfo() const {
  UE_LOG(ZoomMeetingSDKLogDebugInfo, Display, TEXT("UserManager: Begin"));
  UE_LOG(ZoomMeetingSDKLogDebugInfo, Display,
         TEXT("Number of participants: %d"), _current_users.Num());
  UE_LOG(ZoomMeetingSDKLogDebugInfo, Display,
         TEXT("Number of videos being rendered: %d"),
         _user_video_renderer.Num());

  for (const auto &elem : _user_video_renderer) {
    if (!elem.Value->IsRendererAvailable()) {
      continue;
    }

    UserInfo ui;
    GetUserInfo(elem.Key, &ui);
    auto *user_name = ui.GetUserNameW();
    if (user_name) {
      UE_LOG(ZoomMeetingSDKLogDebugInfo, Display,
             TEXT("User: %s (%d), Resolution: %s"), user_name, elem.Key,
             *ZoomSDKResolutionToString(elem.Value->GetResolution()));
    } else {
      UE_LOG(ZoomMeetingSDKLogDebugInfo, Display,
             TEXT("User: <no-user-name> (%d), Resolution: %s"), elem.Key,
             *ZoomSDKResolutionToString(elem.Value->GetResolution()));
    }
  }

  UE_LOG(ZoomMeetingSDKLogDebugInfo, Display,
         TEXT("Number of shares being rendered: %d"),
         _user_share_renderer.Num());
  for (const auto &elem : _user_share_renderer) {
    if (!elem.Value->IsRendererAvailable()) {
      continue;
    }

    UserInfo ui;
    GetUserInfo(elem.Key, &ui);
    auto *user_name = ui.GetUserNameW();
    if (user_name) {
      UE_LOG(ZoomMeetingSDKLogDebugInfo, Display,
             TEXT("User: %s (%d), Resolution: %s"), user_name, elem.Key,
             *ZoomSDKResolutionToString(elem.Value->GetResolution()));
    } else {
      UE_LOG(ZoomMeetingSDKLogDebugInfo, Display,
             TEXT("User: <no-user-name> (%d), Resolution: %s"), elem.Key,
             *ZoomSDKResolutionToString(elem.Value->GetResolution()));
    }
  }
  UE_LOG(ZoomMeetingSDKLogDebugInfo, Display, TEXT("UserManager: End"));
}

END_ZOOM_SDK_UE_NAMESPACE