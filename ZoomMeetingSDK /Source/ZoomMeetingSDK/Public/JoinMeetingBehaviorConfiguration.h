// Copyright : All rights reserved by Zoom Video Communications 2022-

#pragma once

#include "ZoomUESDKDef.h"
#include "meeting_service_components/meeting_configuration_interface.h"
BEGIN_ZOOM_SDK_UE_NAMESPACE

/**
 * Wrapper around IJoinMeetingBehaviorConfiguration.
 * Check
 * https://marketplacefront.zoom.us/sdk/meeting/windows/class_i_join_meeting_behavior_configuration.html
 * for interface definition.
 */
class ZOOMMEETINGSDK_API JoinMeetingBehaviorConfiguration {
public:
  ~JoinMeetingBehaviorConfiguration() = default;
  JoinMeetingBehaviorConfiguration(
      const JoinMeetingBehaviorConfiguration &other) = delete;
  JoinMeetingBehaviorConfiguration(
      JoinMeetingBehaviorConfiguration &&other) noexcept = delete;
  JoinMeetingBehaviorConfiguration &
  operator=(const JoinMeetingBehaviorConfiguration &other) = delete;
  JoinMeetingBehaviorConfiguration &
  operator=(JoinMeetingBehaviorConfiguration &&other) noexcept = delete;

  // Static function to create an object of IJoinMeetingBehaviorConfiguration.
  static JoinMeetingBehaviorConfiguration *Create();

  // Implementation of the required methods.
  void EnableForceAutoStartMyVideoWhenJoinMeeting(bool bEnable);
  void EnableForceAutoStopMyVideoWhenJoinMeeting(bool bEnable);

private:
  JoinMeetingBehaviorConfiguration() = default;

  // Initializes JoinMeetingBehaviorConfiguration.
  //
  // Returns true if initialization suceeds.
  bool Init();

  IJoinMeetingBehaviorConfiguration *join_meeting_behavior_configuration;
};
END_ZOOM_SDK_UE_NAMESPACE