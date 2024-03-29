// Copyright : All rights reserved by Zoom Video Communications 2022-

#pragma once

#include "ZoomUESDKDef.h"
#include "meeting_service_components/meeting_live_stream_interface.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE

/**
 * Wrapper around IMeetingLiveStreamController.
 * Check
 * https://marketplacefront.zoom.us/sdk/meeting/windows/class_i_meeting_live_stream_controller.html
 * for interface definition.
 */
class ZOOMMEETINGSDK_API MeetingLiveStreamController {
public:
  ~MeetingLiveStreamController();

  MeetingLiveStreamController(const MeetingLiveStreamController &other) =
      delete;
  MeetingLiveStreamController(MeetingLiveStreamController &&other) noexcept =
      delete;
  MeetingLiveStreamController &
  operator=(const MeetingLiveStreamController &other) = delete;
  MeetingLiveStreamController &
  operator=(MeetingLiveStreamController &&other) noexcept = delete;

  // Static function to create an object of MeetingLiveStreamController.
  static MeetingLiveStreamController *Create();

  // Implementation of the required methods.
  SDKError CanStartLiveStream();
  SDKError CanStartRawLiveStream();

private:
  MeetingLiveStreamController();

  // Initializes MeetingLiveStreamController.
  //
  // Returns true if initialization was successful.
  bool Init();

  IMeetingLiveStreamController *meeting_live_stream_controller = nullptr;
};
END_ZOOM_SDK_UE_NAMESPACE