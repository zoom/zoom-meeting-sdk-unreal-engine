// Copyright : All rights reserved by Zoom Video Communications 2022-

#pragma once

#include "ZoomUESDKDef.h"
#include "meeting_service_components\meeting_remote_ctrl_interface.h"
BEGIN_ZOOM_SDK_UE_NAMESPACE

/**
 * Wrapper around IMeetingRemoteController.
 * Check
 * https://marketplacefront.zoom.us/sdk/meeting/windows/class_i_meeting_remote_controller.html
 * for interface definition.
 */
class ZOOMMEETINGSDK_API MeetingRemoteController {
public:
  ~MeetingRemoteController();
  MeetingRemoteController(const MeetingRemoteController &other) = delete;
  MeetingRemoteController(MeetingRemoteController &&other) noexcept = delete;
  MeetingRemoteController &
  operator=(const MeetingRemoteController &other) = delete;
  MeetingRemoteController &
  operator=(MeetingRemoteController &&other) noexcept = delete;

  // Static function to create an object of MeetingRemoteController.
  static MeetingRemoteController *Create();

  // Implementation of the required methods.
  SDKError CanRequestControl(unsigned int userId);

private:
  MeetingRemoteController();

  // Initializes MeetingRemoteController.
  //
  // Returns true if initialization was successful.
  bool Init();

  IMeetingRemoteController *meeting_remote_controller;
};
END_ZOOM_SDK_UE_NAMESPACE