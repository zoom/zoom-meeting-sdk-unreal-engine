// Copyright : All rights reserved by Zoom Video Communications 2022-

#pragma once

#include "ZoomUESDKDef.h"
#include "meeting_service_components/meeting_audio_interface.h"
BEGIN_ZOOM_SDK_UE_NAMESPACE

/**
 * Wrapper around IMeetingAudioController.
 * Check
 * https://marketplacefront.zoom.us/sdk/meeting/windows/class_i_meeting_audio_controller.html
 * for interface definition.
 */
class ZOOMMEETINGSDK_API MeetingAudioController {
public:
  ~MeetingAudioController() = default;
  MeetingAudioController(const MeetingAudioController &other) = delete;
  MeetingAudioController(MeetingAudioController &&other) noexcept = delete;
  MeetingAudioController &
  operator=(const MeetingAudioController &other) = delete;
  MeetingAudioController &
  operator=(MeetingAudioController &&other) noexcept = delete;

  // Static function to create an object of IMeetingAudioController.
  static MeetingAudioController *Create();

  // Implementation of the required methods.
  SDKError MuteAudio(unsigned int userid, bool allowUnmuteBySelf = true);
  bool CanUnMuteBySelf();
  SDKError UnMuteAudio(unsigned int userid);

private:
  MeetingAudioController() = default;

  // Initializes MeetingAudioController.
  //
  // Returns true if initialization succeeds.
  bool Init();

  IMeetingAudioController *meeting_audio_controller = nullptr;
};
END_ZOOM_SDK_UE_NAMESPACE