// Copyright : All rights reserved by Zoom Video Communications 2022-

#pragma once

#include "ZoomUESDKDef.h"
#include "meeting_service_components/meeting_ui_ctrl_interface.h"
BEGIN_ZOOM_SDK_UE_NAMESPACE

/**
 * Wrapper around IMeetingUIController.
 * Check
 * https://marketplacefront.zoom.us/sdk/meeting/windows/class_i_video_setting_context.html
 * for interface definition.
 */
class ZOOMMEETINGSDK_API MeetingUIController {
public:
  ~MeetingUIController() = default;
  MeetingUIController(const MeetingUIController &other) = delete;
  MeetingUIController(MeetingUIController &&other) noexcept = delete;
  MeetingUIController &operator=(const MeetingUIController &other) = delete;
  MeetingUIController &operator=(MeetingUIController &&other) noexcept = delete;

  // Static function to create an object of IMeetingUIController.
  static MeetingUIController *Create();

  // Implementation of the required methods.
  SDKError SetMeetingTopic(const wchar_t *meetingtopic);
  SDKError SetCustomizedPollingUrl(const wchar_t *URL, bool bCreate);
  SDKError CanSwapToShowShareViewOrVideo(bool &bCan);

private:
  MeetingUIController() = default;

  // Initializes MeetingUIController.
  //
  // Returns true if initialization was successful.
  bool Init();

  IMeetingUIController *meeting_ui_controller = nullptr;
};
END_ZOOM_SDK_UE_NAMESPACE