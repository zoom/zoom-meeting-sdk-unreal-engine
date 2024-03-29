// Copyright : All rights reserved by Zoom Video Communications 2022-

#pragma once

#include "ZoomUESDKDef.h"
#include "meeting_service_components/meeting_audio_interface.h"
#include "meeting_service_components/meeting_participants_ctrl_interface.h"
#include "meeting_service_components/meeting_waiting_room_interface.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE

/**
 * Wrapper around ZOOM_SDK_NAMESPACE::IMeetingParticipantsController.
 * Check
 * https://marketplacefront.zoom.us/sdk/meeting/windows/class_i_meeting_participants_controller.html
 * for interface definition.
 */
class ZOOMMEETINGSDK_API MeetingParticipantsController {
public:
  ~MeetingParticipantsController() = default;

  MeetingParticipantsController(const MeetingParticipantsController &other) =
      delete;
  MeetingParticipantsController(
      MeetingParticipantsController &&other) noexcept = delete;
  MeetingParticipantsController &
  operator=(const MeetingParticipantsController &other) = delete;
  MeetingParticipantsController &
  operator=(MeetingParticipantsController &&other) noexcept = delete;

  // Static function to create an object of IMeetingParticipantsController.
  static MeetingParticipantsController *Create();

  // Implementations of required methods
  IList<unsigned int> *GetParticipantList();
  IUserInfo *GetUserByUserID(unsigned int userid);
  IUserInfo *GetMySelfUser();
  SDKError LowerAllHands(bool forWebinarAttendees);
  SDKError ChangeUserName(const unsigned int userid, const wchar_t *userName,
                          bool bSaveUserName);
  SDKError LowerHand(unsigned int userid);
  SDKError RaiseHand();
  SDKError MakeHost(unsigned int userid);
  SDKError CanbeCohost(unsigned int userid);
  SDKError AssignCoHost(unsigned int userid);
  SDKError RevokeCoHost(unsigned int userid);
  SDKError ExpelUser(unsigned int userid);
  SDKError ReclaimHost();
  SDKError CanReclaimHost(bool &bCanReclaimHost);
  SDKError ReclaimHostByHostKey(const wchar_t *host_key);
  SDKError AllowParticipantsToRename(bool bAllow);
  bool IsParticipantsRenameAllowed();
  SDKError AllowParticipantsToUnmuteSelf(bool bAllow);
  bool IsParticipantsUnmuteSelfAllowed();
  SDKError AskAllToUnmute();
  SDKError AllowParticipantsToChat(bool bAllow);
  bool IsParticipantAllowedToChat();
  SDKError SetEvent(IMeetingParticipantsCtrlEvent *pEvent);

private:
  MeetingParticipantsController() = default;

  // Initializes MeetingParticipantsController.
  //
  // Returns true if initialization was successful.
  bool Init();

  IMeetingParticipantsController *meeting_participants_controller = nullptr;
};

END_ZOOM_SDK_UE_NAMESPACE
