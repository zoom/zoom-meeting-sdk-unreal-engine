// Copyright : All rights reserved by Zoom Video Communications 2022-

#pragma once

#include "ZoomUESDKDef.h"
#include "meeting_service_components/meeting_participants_ctrl_interface.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE

/**
 * Wrapper around IUserInfo.
 * Check
 * https://marketplacefront.zoom.us/sdk/meeting/windows/class_i_user_info.html
 * for interface definition.
 */
class ZOOMMEETINGSDK_API UserInfo {
public:
  UserInfo();
  UserInfo(IUserInfo *user_info);
  UserInfo(const UserInfo &other);
  ~UserInfo();

  // Implementation of the required methods.
  unsigned int GetUserID();
  const wchar_t *GetUserName();
  UserRole GetUserRole();
  FString GetUserRoleAsString();
  WebinarAttendeeStatus *GetWebinarAttendeeStauts();
  bool IsHost();
  bool IsInWaitingRoom();
  bool IsTalking();
  bool IsVideoOn();
  bool IsRaiseHand();
  int GetAudioVoiceLevel();
  bool IsMySelf();

  // Do a shallow copy of this object to the object passed.
  void ShallowCopyTo(UserInfo *copy_to) const {
    copy_to->_user_info = _user_info;
  }

  // Do a shallow copy of this object to the object passed.
  void ShallowCopyFrom(const UserInfo *copy_from) {
    _user_info = copy_from->_user_info;
  }

  void UpdateIUserInfo(IUserInfo *user_info) {
    // TODO: Figure out if we need to free the previous user_info pointer.
    _user_info = user_info;
  }

private:
  // Initialize the UserInfo object.
  //
  // Returns true if the initialization was successful.
  bool Init(IUserInfo *user_info);

  // Pointer to the user information.
  // Note: Currently this pointer is not free-ed. Need to figure out this would
  // cause memory leak and free it up if need up.
  IUserInfo *_user_info;
};
END_ZOOM_SDK_UE_NAMESPACE