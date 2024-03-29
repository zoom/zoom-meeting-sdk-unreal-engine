// Copyright : All rights reserved by Zoom Video Communications 2022-

#include "VideoSettingContextEvent.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE

IVideoSettingContextEvent *VideoSettingContextEvent::Create() {
  return new VideoSettingContextEvent();
}

void VideoSettingContextEvent::onComputerCamDeviceChanged(
    IList<ICameraInfo *> *pNewCameraList) {}

void VideoSettingContextEvent::onDefaultCamDeviceChanged(
    const wchar_t *deviceId, const wchar_t *deviceName) {}

END_ZOOM_SDK_UE_NAMESPACE