// Copyright : All rights reserved by Zoom Video Communications 2022-

#pragma once

#include "ZoomUESDKDef.h"
#include "meeting_service_interface.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE
/**
 * Wrapper around IMeetingService.
 * Check
 * https://marketplacefront.zoom.us/sdk/meeting/windows/class_i_meeting_service.html
 * for interface definition.
 */
class ZOOMMEETINGSDK_API MeetingService {
public:
  ~MeetingService() = default;
  MeetingService(const MeetingService &other) = delete;
  MeetingService(MeetingService &&other) noexcept = delete;
  MeetingService &operator=(const MeetingService &other) = delete;
  MeetingService &operator=(MeetingService &&other) noexcept = delete;

  // Static function to create an object of MeetingService.
  static MeetingService *Create();

  // Implementation of the required methods.
  SDKError Start(StartParam &startParam);
  SDKError Join(JoinParam &joinParam);
  SDKError Leave(LeaveMeetingCmd leaveCmd);
  IMeetingBOController *GetMeetingBOController();

private:
  MeetingService() = default;

  // Initializes MeetingService.
  //
  // Returns true if initialization was successful.
  bool Init();

  IMeetingService *meeting_service = nullptr;
};
END_ZOOM_SDK_UE_NAMESPACE