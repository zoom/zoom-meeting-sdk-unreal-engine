// Copyright : All rights reserved by Zoom Video Communications 2022-

#include "MeetingParticipantsCtrlEvent.h"

#include "SDKInterfaceWrap.h"
#include "SDKUtils.h"
#include "ZoomMeetingSDKEventHandler.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE

IMeetingParticipantsCtrlEvent *MeetingParticipantsCtrlEvent::Create() {
  return new MeetingParticipantsCtrlEvent();
}

void MeetingParticipantsCtrlEvent::onCoHostChangeNotification(
    unsigned int userId, bool isCoHost) {
  UZoomMeetingSDKEventHandler::GetInstance()->onCoHostChangeNotification(
      userId, isCoHost);
}

void MeetingParticipantsCtrlEvent::onHostChangeNotification(
    unsigned int userId) {
  UZoomMeetingSDKEventHandler::GetInstance()->onHostChangeNotification(userId);
}

void MeetingParticipantsCtrlEvent::onUserJoin(IList<unsigned int> *lstUserID,
                                              const wchar_t *strUserList) {
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("MeetingParticipantsCtrlEvent::onUserJoin triggered"));
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("MeetingParticipantsCtrlEvent::onUserJoin: Num users: %d"),
         lstUserID->GetCount());
  auto *um = SDKInterfaceWrap::GetInst().GetUserManager();

  for (int i = 0; i < lstUserID->GetCount(); ++i) {
    auto userId = lstUserID->GetItem(i);
    UE_LOG(BPZoomMeetingSDKLog, Display,
           TEXT("MeetingParticipantsCtrlEvent::onUserJoin: New userId: %d"),
           userId);
    if (um->AddNewUser(userId)) {
      UZoomMeetingSDKEventHandler::GetInstance()->onUserJoin(userId);
    }
  }
}

void MeetingParticipantsCtrlEvent::onUserLeft(IList<unsigned int> *lstUserID,
                                              const wchar_t *strUserList) {
  auto *um = SDKInterfaceWrap::GetInst().GetUserManager();

  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("MeetingParticipantsCtrlEvent::onUserLeft triggered"));
  for (int i = 0; i < lstUserID->GetCount(); ++i) {
    auto userId = lstUserID->GetItem(i);
    UE_LOG(
        BPZoomMeetingSDKLog, Display,
        TEXT("MeetingParticipantsCtrlEvent::onUserLeft: Removing userId: %d"),
        userId);
    if (um->RemoveUser(lstUserID->GetItem(i))) {
      UZoomMeetingSDKEventHandler::GetInstance()->onUserLeft(userId);
    }
  }
}

void MeetingParticipantsCtrlEvent::onUserNameChanged(unsigned int userId,
                                                     const wchar_t *userName) {
  auto *um = SDKInterfaceWrap::GetInst().GetUserManager();
  if (um->ChangeUserName(userId, userName)) {
    UZoomMeetingSDKEventHandler::GetInstance()->onUserNameChanged(
        userId, FString(userName));
  }
}

void MeetingParticipantsCtrlEvent::onUserNamesChanged(
    IList<unsigned int> *lstUserID) {
  auto *um = SDKInterfaceWrap::GetInst().GetUserManager();
  um->ChangeUsersNames(lstUserID);
}

void MeetingParticipantsCtrlEvent::onLowOrRaiseHandStatusChanged(
    bool bLow, unsigned int userid) {
  UZoomMeetingSDKEventHandler::GetInstance()->onLowOrRaiseHandStatusChanged(
      bLow, userid);
}
void MeetingParticipantsCtrlEvent::onAllHandsLowered() {
  UZoomMeetingSDKEventHandler::GetInstance()->onAllHandsLowered();
}

// Other methods.
void MeetingParticipantsCtrlEvent::onInvalidReclaimHostkey() {}
void MeetingParticipantsCtrlEvent::onLocalRecordingStatusChanged(
    unsigned int user_id, RecordingStatus status) {}
void MeetingParticipantsCtrlEvent::onAllowParticipantsRenameNotification(
    bool bAllow) {}
void MeetingParticipantsCtrlEvent::onAllowParticipantsUnmuteSelfNotification(
    bool bAllow) {}
void MeetingParticipantsCtrlEvent::onAllowParticipantsStartVideoNotification(
    bool bAllow) {}
void MeetingParticipantsCtrlEvent::
    onAllowParticipantsShareWhiteBoardNotification(bool bAllow) {}

void MeetingParticipantsCtrlEvent::onRequestLocalRecordingPrivilegeChanged(
    LocalRecordingRequestPrivilegeStatus status) {}
void MeetingParticipantsCtrlEvent::onInMeetingUserAvatarPathUpdated(
    unsigned int userID) {}
void MeetingParticipantsCtrlEvent::onParticipantProfilePictureStatusChange(
    bool bHidden) {}

END_ZOOM_SDK_UE_NAMESPACE