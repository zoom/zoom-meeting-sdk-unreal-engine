// Copyright : All rights reserved by Zoom Video Communications 2022-

#pragma once

#include "ZoomUESDKDef.h"
#include "meeting_service_components/meeting_video_interface.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE
/**
 * Wrapper around ZOOM_SDK_NAMESPACE::IMeetingVideoController,
 * Check
 * https://marketplacefront.zoom.us/sdk/meeting/windows/class_i_meeting_video_controller.html
 * for interface definition.
 */
class ZOOMMEETINGSDK_API MeetingVideoController {
public:
  ~MeetingVideoController() = default;

  MeetingVideoController(const MeetingVideoController &other) = delete;
  MeetingVideoController(MeetingVideoController &&other) noexcept = delete;
  MeetingVideoController &
  operator=(const MeetingVideoController &other) = delete;
  MeetingVideoController &
  operator=(MeetingVideoController &&other) noexcept = delete;

  // Static function to create an object of IMeetingVideoController.
  static MeetingVideoController *Create();

  // Implementations of required methods.
  SDKError AskAttendeeToStartVideo(unsigned int userid);
  SDKError CanAskAttendeeToStartVideo(unsigned int userid);
  IList<unsigned int> *GetSpotlightedUserList();
  SDKError MuteVideo();
  SDKError SpotlightVideo(unsigned int userid);
  SDKError StopAttendeeVideo(unsigned int userid);
  SDKError UnSpotlightAllVideos();
  SDKError UnSpotlightVideo(unsigned int userid);

  SDKError CanStopAttendeeVideo(unsigned int userid);
  SDKError CanPinToFirstView(unsigned int userid, PinResult &result);
  SDKError CanPinToSecondView(unsigned int userid, PinResult &result);
  SDKError CanSpotlight(unsigned int userid, SpotlightResult &result);
  SDKError CanUnSpotlight(unsigned int userid, SpotlightResult &result);
  SDKError UnmuteVideo();

private:
  MeetingVideoController() = default;

  // Initializes MeetingUIController.
  //
  // Returns true if initialization was successful.
  bool Init();

  IMeetingVideoController *meeting_video_controller = nullptr;
};
END_ZOOM_SDK_UE_NAMESPACE