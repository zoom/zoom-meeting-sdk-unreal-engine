// Copyright : All rights reserved by Zoom Video Communications 2022-

#include "AudioSettingContext.h"
#include "SDKInterfaceWrap.h"
BEGIN_ZOOM_SDK_UE_NAMESPACE

AudioSettingContext *AudioSettingContext::Create() {
  std::unique_ptr<AudioSettingContext> audio_setting_context(
      new AudioSettingContext());
  if (audio_setting_context->Init()) {
    audio_setting_context.release();
  }
  return nullptr;
}

bool AudioSettingContext::Init() {
  audio_setting_context =
      SDKInterfaceWrap::GetInst().GetSettingService()->GetAudioSettings();
  return (audio_setting_context == nullptr) ? false : true;
}

IList<ISpeakerInfo *> *AudioSettingContext::GetSpeakerList() {
  return audio_setting_context->GetSpeakerList();
}

SDKError AudioSettingContext::GetSpeakerVol(FLOAT &value) {
  return audio_setting_context->GetSpeakerVol(value);
}

SDKError AudioSettingContext::EnableAutoAdjustMic(bool bEnable) {
  return audio_setting_context->EnableAutoAdjustMic(bEnable);
}

SDKError AudioSettingContext::SelectMic(const wchar_t *deviceId,
                                        const wchar_t *deviceName) {
  return audio_setting_context->SelectMic(deviceId, deviceName);
}

SDKError AudioSettingContext::SetMicVol(FLOAT &value) {
  return audio_setting_context->SetMicVol(value);
}

SDKError AudioSettingContext::SetSpeakerVol(FLOAT &value) {
  return audio_setting_context->SetSpeakerVol(value);
}

SDKError AudioSettingContext::UseDefaultSystemMic() {
  return audio_setting_context->UseDefaultSystemMic();
}

SDKError AudioSettingContext::UseDefaultSystemSpeaker() {
  return audio_setting_context->UseDefaultSystemSpeaker();
}
END_ZOOM_SDK_UE_NAMESPACE
