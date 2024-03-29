// Copyright : All rights reserved by Zoom Video Communications 2022-

#include "JoinMeetingBehaviorConfiguration.h"
#include "SDKInterfaceWrap.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE
JoinMeetingBehaviorConfiguration *JoinMeetingBehaviorConfiguration::Create() {
  TUniquePtr<JoinMeetingBehaviorConfiguration>
      join_meeting_behavior_configuration(
          new JoinMeetingBehaviorConfiguration());
  if (join_meeting_behavior_configuration->Init()) {
    return join_meeting_behavior_configuration.Release();
  }
  return nullptr;
}

bool JoinMeetingBehaviorConfiguration::Init() {
  join_meeting_behavior_configuration =
      SDKInterfaceWrap::GetInst().GetMeetingConfiguration();
  return (join_meeting_behavior_configuration) ? true : false;
}

void JoinMeetingBehaviorConfiguration::
    EnableForceAutoStartMyVideoWhenJoinMeeting(bool bEnable) {
  join_meeting_behavior_configuration
      ->EnableForceAutoStartMyVideoWhenJoinMeeting(bEnable);
}

void JoinMeetingBehaviorConfiguration::
    EnableForceAutoStopMyVideoWhenJoinMeeting(bool bEnable) {
  join_meeting_behavior_configuration
      ->EnableForceAutoStopMyVideoWhenJoinMeeting(bEnable);
}

END_ZOOM_SDK_UE_NAMESPACE