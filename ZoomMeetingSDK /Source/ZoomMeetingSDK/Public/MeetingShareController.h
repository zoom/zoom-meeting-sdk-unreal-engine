// Copyright : All rights reserved by Zoom Video Communications 2022-

#pragma once

#include "ZoomUESDKDef.h"
#include "meeting_service_components\meeting_sharing_interface.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE

/**
 * Wrapper around IMeetingShareController.
 * Check
 * https://marketplacefront.zoom.us/sdk/meeting/windows/class_i_meeting_share_controller.html
 * for interface definition.
 */

class ZOOMMEETINGSDK_API MeetingShareController {
public:
  ~MeetingShareController() = default;
  MeetingShareController(const MeetingShareController &other) = delete;
  MeetingShareController(MeetingShareController &&other) noexcept = delete;
  MeetingShareController &
  operator=(const MeetingShareController &other) = delete;
  MeetingShareController &
  operator=(MeetingShareController &&other) noexcept = delete;

  // Static function to create an object of MeetingShareController.
  static MeetingShareController *Create();

  bool CanStartShare();
  SDKError CanSwitchToShareNextCamera(bool &bCan);
  SDKError StartShareCamera();

private:
  MeetingShareController();

  // Initializes MeetingShareController.
  //
  // Returns true if initialization was successful.
  bool Init();

  IMeetingShareController *meeting_service_controller = nullptr;
};
END_ZOOM_SDK_UE_NAMESPACE