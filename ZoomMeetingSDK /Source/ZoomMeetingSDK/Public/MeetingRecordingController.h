// Copyright : All rights reserved by Zoom Video Communications 2022-

#pragma once

#include "ZoomUESDKDef.h"
#include "meeting_service_components/meeting_recording_interface.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE
/**
 * Wrapper around IMeetingRecordingController
 * Check
 * https://marketplacefront.zoom.us/sdk/meeting/windows/class_i_meeting_recording_controller.html
 * for interface definitions.
 */
class ZOOMMEETINGSDK_API MeetingRecordingController {
public:
  ~MeetingRecordingController() = default;
  MeetingRecordingController(const MeetingRecordingController &other) = delete;
  MeetingRecordingController(MeetingRecordingController &&other) noexcept =
      delete;
  MeetingRecordingController &
  operator=(const MeetingRecordingController &other) = delete;
  MeetingRecordingController &
  operator=(MeetingRecordingController &&other) noexcept = delete;

  // Static function to create an object of MeetingRecordingController.
  static MeetingRecordingController *Create();

  // Implementations of required methods.
  SDKError AllowLocalRecording(unsigned int userid);
  SDKError CanAllowDisAllowLocalRecording();
  SDKError DisAllowLocalRecording(unsigned int userid);
  SDKError CanStartRecording(bool cloud_recording, unsigned int userid);
  SDKError StartRawRecording();
  SDKError StopRawRecording();
  SDKError RequestLocalRecordingPrivilege();

private:
  MeetingRecordingController() = default;

  // Initializes MeetingUIController.
  //
  // Returns true if initialization was successful.
  bool Init();

  IMeetingRecordingController *meeting_recording_controller = nullptr;
};
END_ZOOM_SDK_UE_NAMESPACE