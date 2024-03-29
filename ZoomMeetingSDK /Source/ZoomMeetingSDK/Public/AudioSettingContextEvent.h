// Copyright : All rights reserved by Zoom Video Communications 2022-

#pragma once

#include "ZoomMeetingSDKBPLibrary.h"
#include "ZoomUESDKDef.h"
#include "setting_service_interface.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE
/**
 *
 */
class ZOOMMEETINGSDK_API AudioSettingContextEvent
    : public IAudioSettingContextEvent {
public:
  ~AudioSettingContextEvent() = default;
  AudioSettingContextEvent(const AudioSettingContextEvent &other) = delete;
  AudioSettingContextEvent(AudioSettingContextEvent &&other) noexcept = delete;
  AudioSettingContextEvent &
  operator=(const AudioSettingContextEvent &other) = delete;
  AudioSettingContextEvent &
  operator=(AudioSettingContextEvent &&other) noexcept = delete;

  // Static function to create an object of IAudioSettingContextEvent.
  static IAudioSettingContextEvent *Create();

  // Implementation of the required methods.
  void onComputerMicDeviceChanged(IList<IMicInfo *> *pNewMicList) override;
  void onComputerSpeakerDeviceChanged(
      IList<ISpeakerInfo *> *pNewSpeakerList) override;
  void onDefaultMicDeviceChanged(const wchar_t *deviceId,
                                 const wchar_t *deviceName) override;
  void onDefaultSpeakerDeviceChanged(const wchar_t *deviceId,
                                     const wchar_t *deviceName) override;

private:
  AudioSettingContextEvent() = default;
};
END_ZOOM_SDK_UE_NAMESPACE