// Copyright : All rights reserved by Zoom Video Communications 2022-

#pragma once

#include "ZoomUESDKDef.h"
#include "meeting_service_components/meeting_audio_interface.h"
#include "meeting_service_components/meeting_participants_ctrl_interface.h"
#include "meeting_service_components/meeting_waiting_room_interface.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE

/**
 * Wrapper around ZOOM_SDK_NAMESPACE::IMeetingWaitingRoomController
 * Check
 * https://marketplacefront.zoom.us/sdk/meeting/windows/class_i_meeting_waiting_room_controller.html
 * for interface definitions.
 */
class ZOOMMEETINGSDK_API MeetingWaitingRoomController {
public:
  ~MeetingWaitingRoomController() = default;

  MeetingWaitingRoomController(const MeetingWaitingRoomController &other) =
      delete;
  MeetingWaitingRoomController(MeetingWaitingRoomController &&other) noexcept =
      delete;
  MeetingWaitingRoomController &
  operator=(const MeetingWaitingRoomController &other) = delete;
  MeetingWaitingRoomController &
  operator=(MeetingWaitingRoomController &&other) noexcept = delete;

  // Static function to create an object of IMeetingWaitingRoomController.
  static MeetingWaitingRoomController *Create();

  // Implementations of required methods.
  SDKError AdmitAllToMeeting();
  SDKError AdmitToMeeting(unsigned int userid);
  IList<unsigned int> *GetWaitingRoomLst();
  SDKError PutInWaitingRoom(unsigned int userid);
  IUserInfo *GetWaitingRoomUserInfoByID(unsigned int userid);

private:
  MeetingWaitingRoomController() = default;

  // Initializes MeetingWaitingRoomController.
  //
  // Returns true if initialization was successful.
  bool Init();

  IMeetingWaitingRoomController *meeting_waiting_room_controller = nullptr;
};

END_ZOOM_SDK_UE_NAMESPACE