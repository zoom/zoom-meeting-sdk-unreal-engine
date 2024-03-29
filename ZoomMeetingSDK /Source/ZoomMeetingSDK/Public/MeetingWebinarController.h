// Copyright : All rights reserved by Zoom Video Communications 2022-

#pragma once

#include "ZoomUESDKDef.h"
#include "meeting_service_components/meeting_webinar_interface.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE
/**
 * Wrapper around IMeetingWebinarController
 * Check
 * https://marketplacefront.zoom.us/sdk/meeting/windows/class_i_meeting_webinar_controller.html
 * for interface definitions.
 */
class ZOOMMEETINGSDK_API MeetingWebinarController {
public:
  ~MeetingWebinarController() = default;

  MeetingWebinarController(const MeetingWebinarController &other) = delete;
  MeetingWebinarController(MeetingWebinarController &&other) noexcept = delete;
  MeetingWebinarController &
  operator=(const MeetingWebinarController &other) = delete;
  MeetingWebinarController &
  operator=(MeetingWebinarController &&other) noexcept = delete;

  // Static function to create an object of IMeetingWebinarController.
  static MeetingWebinarController *Create();

  // Implementations of required methods.
  SDKError AllowAttendeeTalk(unsigned int userid);
  SDKError AllowPanelistStartVideo();
  SDKError DepromptPanelist2Attendee(unsigned int userid);
  SDKError DisallowAttendeeTalk(unsigned int userid);
  SDKError DisallowPanelistStartVideo();
  WebinarMeetingStatus *GetWebinarMeetingStatus();
  SDKError PromptAttendee2Panelist(unsigned int userid);

private:
  MeetingWebinarController() = default;

  // Initializes MeetingWebinarController.
  //
  // Returns true if initialization was successful.
  bool Init();

  IMeetingWebinarController *meeting_webinar_controller = nullptr;
};
END_ZOOM_SDK_UE_NAMESPACE