// Copyright : All rights reserved by Zoom Video Communications 2022-

#pragma once

#include "ZoomUESDKDef.h"
#include "meeting_service_interface.h"
BEGIN_ZOOM_SDK_UE_NAMESPACE

/**
 * Wrapper around IMeetingInfo.
 * Check
 * https://marketplacefront.zoom.us/sdk/meeting/windows/class_i_meeting_info.html
 * for interface definition.
 */
class ZOOMMEETINGSDK_API MeetingInfo {
public:
  ~MeetingInfo() = default;
  MeetingInfo(const MeetingInfo &other) = delete;
  MeetingInfo(MeetingInfo &&other) noexcept = delete;
  MeetingInfo &operator=(const MeetingInfo &other) = delete;
  MeetingInfo &operator=(MeetingInfo &&other) noexcept = delete;

  // Static function to create an object of IMeetingInfo.
  static MeetingInfo *Create();

  // Implementation of the required methods.
  const wchar_t *GetJoinMeetingUrl();
  const wchar_t *GetMeetingID();

private:
  MeetingInfo();

  // Initializes MeetingInfo.
  //
  // Returns true if initialization succeeds.
  bool Init();

  IMeetingInfo *meeting_info;
};
END_ZOOM_SDK_UE_NAMESPACE