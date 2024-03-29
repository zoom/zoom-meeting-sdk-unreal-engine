// Copyright : All rights reserved by Zoom Video Communications 2022-

#pragma once

#include "ZoomUESDKDef.h"
#include "setting_service_interface.h"
BEGIN_ZOOM_SDK_UE_NAMESPACE
/**
 *
 */
class ZOOMMEETINGSDK_API AudioSettingContext {
public:
  ~AudioSettingContext() = default;
  AudioSettingContext(const AudioSettingContext &other) = delete;
  AudioSettingContext(AudioSettingContext &&other) noexcept = delete;
  AudioSettingContext &operator=(const AudioSettingContext &other) = delete;
  AudioSettingContext &operator=(AudioSettingContext &&other) noexcept = delete;

  // Static function to create an object of IAudioSettingContext.
  static AudioSettingContext *Create();

  // Implementation of the required methods.
  IList<ISpeakerInfo *> *GetSpeakerList();
  SDKError GetSpeakerVol(FLOAT &value);
  SDKError EnableAutoAdjustMic(bool bEnable);
  SDKError SelectMic(const wchar_t *deviceId, const wchar_t *deviceName);
  SDKError SetMicVol(FLOAT &value);
  SDKError SetSpeakerVol(FLOAT &value);
  SDKError UseDefaultSystemMic();
  SDKError UseDefaultSystemSpeaker();

private:
  AudioSettingContext() = default;
  bool Init();
  IAudioSettingContext *audio_setting_context;
};
END_ZOOM_SDK_UE_NAMESPACE