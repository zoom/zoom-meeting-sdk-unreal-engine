// Copyright : All rights reserved by Zoom Video Communications 2022-

#include "AudioSettingContextEvent.h"
#include "SDKInterfaceWrap.h"
#include "SDKUtils.h"
#include "ZoomMeetingSDKBPLibrary.h"
#include "ZoomMeetingSDKEventHandler.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE
IAudioSettingContextEvent *AudioSettingContextEvent::Create() {
  return new AudioSettingContextEvent();
}

void AudioSettingContextEvent::onComputerMicDeviceChanged(
    IList<IMicInfo *> *pNewMicList) {
  UE_LOG(ZoomMeetingSDKLog, Display, TEXT("onComputerMicDeviceChanged"));
}

void AudioSettingContextEvent::onComputerSpeakerDeviceChanged(
    IList<ISpeakerInfo *> *pNewSpeakerList) {
  UE_LOG(ZoomMeetingSDKLog, Display, TEXT("onComputerSpeakerDeviceChanged"));
}

void AudioSettingContextEvent::onDefaultMicDeviceChanged(
    const wchar_t *deviceId, const wchar_t *deviceName) {
  UE_LOG(ZoomMeetingSDKLog, Display, TEXT("onDefaultMicDeviceChanged"));

  UZoomMeetingSDKEventHandler::GetInstance()->onDefaultMicDeviceChanged(
      deviceId, deviceName);
}

void AudioSettingContextEvent::onDefaultSpeakerDeviceChanged(
    const wchar_t *deviceId, const wchar_t *deviceName) {
  UE_LOG(ZoomMeetingSDKLog, Display, TEXT("onDefaultSpeakerDeviceChanged"));

  UZoomMeetingSDKEventHandler::GetInstance()->onDefaultSpeakerDeviceChanged(
      deviceId, deviceName);
}
END_ZOOM_SDK_UE_NAMESPACE