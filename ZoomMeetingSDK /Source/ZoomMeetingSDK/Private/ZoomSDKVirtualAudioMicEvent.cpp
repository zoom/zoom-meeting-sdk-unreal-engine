// Copyright : All rights reserved by Zoom Video Communications 2022-

#include "ZoomSDKVirtualAudioMicEvent.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE
IZoomSDKVirtualAudioMicEvent *ZoomSDKVirtualAudioMicEvent::Create() {
  return new ZoomSDKVirtualAudioMicEvent();
}

ZoomSDKVirtualAudioMicEvent::ZoomSDKVirtualAudioMicEvent() {}
ZoomSDKVirtualAudioMicEvent::~ZoomSDKVirtualAudioMicEvent() {}

void ZoomSDKVirtualAudioMicEvent::onMicInitialize(
    IZoomSDKAudioRawDataSender *pSender) {}

void ZoomSDKVirtualAudioMicEvent::onMicStartSend() {}

void ZoomSDKVirtualAudioMicEvent::onMicStopSend() {}

void ZoomSDKVirtualAudioMicEvent::onMicUninitialized() {}

END_ZOOM_SDK_UE_NAMESPACE