// Copyright : All rights reserved by Zoom Video Communications 2022-

#pragma once

#include "ZoomUESDKDef.h"
#include "meeting_service_components/meeting_configuration_interface.h"
BEGIN_ZOOM_SDK_UE_NAMESPACE

/**
 * Wrapper around IMeetingConfiguration
 * Check
 * https://marketplacefront.zoom.us/sdk/meeting/windows/class_i_meeting_configuration.html
 * for interface definition.
 */
class ZOOMMEETINGSDK_API MeetingConfiguration {
public:
  ~MeetingConfiguration() = default;
  MeetingConfiguration(const MeetingConfiguration &other) = delete;
  MeetingConfiguration(MeetingConfiguration &&other) noexcept = delete;
  MeetingConfiguration &operator=(const MeetingConfiguration &other) = delete;
  MeetingConfiguration &
  operator=(MeetingConfiguration &&other) noexcept = delete;

  // Static function to create an object of IMeetingConfiguration.
  static MeetingConfiguration *Create();

  // Implementation of the required methods.
  void EnableAutoAdjustMicVolumeWhenJoinAudio(bool bEnable);
  void EnableAutoAdjustSpeakerVolumeWhenJoinAudio(bool bEnable);

private:
  MeetingConfiguration();

  // Initializes MeetingConfiguration.
  //
  // Returns true if initialization succeeds.
  bool Init();

  IMeetingConfiguration *meeting_config;
};
END_ZOOM_SDK_UE_NAMESPACE