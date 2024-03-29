// Copyright : All rights reserved by Zoom Video Communications 2022-

#pragma once

#include "ZoomUESDKDef.h"
#include "meeting_service_components/meeting_audio_interface.h"
BEGIN_ZOOM_SDK_UE_NAMESPACE

/**
 * Wrapper around IUserAudioStatus.
 * Check
 * https://marketplacefront.zoom.us/sdk/meeting/windows/class_i_user_audio_status.html
 * for interface definition.
 */
class ZOOMMEETINGSDK_API UserAudioStatus {
public:
  ~UserAudioStatus() = default;
  UserAudioStatus(const UserAudioStatus &other) = delete;
  UserAudioStatus(UserAudioStatus &&other) noexcept = delete;
  UserAudioStatus &operator=(const UserAudioStatus &other) = delete;
  UserAudioStatus &operator=(UserAudioStatus &&other) noexcept = delete;

  // Static function to create an object of IUserAudioStatus.
  static IUserAudioStatus *Create();

  // Implementation of the required methods.
  unsigned int GetUserId();

private:
  UserAudioStatus() = default;
};
END_ZOOM_SDK_UE_NAMESPACE