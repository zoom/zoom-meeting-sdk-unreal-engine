// Copyright : All rights reserved by Zoom Video Communications 2022-

#pragma once

#include "ZoomMeetingSDKEventHandler.h"
#include "ZoomUESDKDef.h"
#include "meeting_service_components/meeting_participants_ctrl_interface.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE

/**
 * Wrapper around IMeetingParticipantsCtrlEvent.
 * Check
 * https://marketplacefront.zoom.us/sdk/meeting/windows/class_i_meeting_participants_ctrl_event.html
 * for interface definition.
 */
class ZOOMMEETINGSDK_API MeetingParticipantsCtrlEvent
    : IMeetingParticipantsCtrlEvent {
public:
  ~MeetingParticipantsCtrlEvent() = default;
  MeetingParticipantsCtrlEvent(const MeetingParticipantsCtrlEvent &other) =
      delete;
  MeetingParticipantsCtrlEvent(MeetingParticipantsCtrlEvent &&other) noexcept =
      delete;
  MeetingParticipantsCtrlEvent &
  operator=(const MeetingParticipantsCtrlEvent &other) = delete;
  MeetingParticipantsCtrlEvent &
  operator=(MeetingParticipantsCtrlEvent &&other) noexcept = delete;

  // Static function to create an object of IMeetingParticipantsCtrlEvent.
  static IMeetingParticipantsCtrlEvent *Create();

  // Implementation of the required methods.
  void onCoHostChangeNotification(unsigned int userId, bool isCoHost) override;
  void onHostChangeNotification(unsigned int userId) override;
  void onUserJoin(IList<unsigned int> *lstUserID,
                  const wchar_t *strUserList = nullptr) override;
  void onUserLeft(IList<unsigned int> *lstUserID,
                  const wchar_t *strUserList = nullptr) override;
  void onUserNameChanged(unsigned int userId, const wchar_t *userName);
  void onUserNamesChanged(IList<unsigned int> *lstUserID) override;
  void onLowOrRaiseHandStatusChanged(bool bLow, unsigned int userid) override;
  void onAllHandsLowered() override;

  // Other methods.
  void onInvalidReclaimHostkey() override;
  void onLocalRecordingStatusChanged(unsigned int user_id,
                                     RecordingStatus status) override;
  void onAllowParticipantsRenameNotification(bool bAllow) override;

  void onAllowParticipantsUnmuteSelfNotification(bool bAllow) override;

  void onAllowParticipantsStartVideoNotification(bool bAllow) override;

  void onAllowParticipantsShareWhiteBoardNotification(bool bAllow) override;

  void onRequestLocalRecordingPrivilegeChanged(
      LocalRecordingRequestPrivilegeStatus status) override;
  void onInMeetingUserAvatarPathUpdated(unsigned int userID) override;
  void onParticipantProfilePictureStatusChange(bool bHidden) override;

private:
  MeetingParticipantsCtrlEvent() = default;
};
END_ZOOM_SDK_UE_NAMESPACE