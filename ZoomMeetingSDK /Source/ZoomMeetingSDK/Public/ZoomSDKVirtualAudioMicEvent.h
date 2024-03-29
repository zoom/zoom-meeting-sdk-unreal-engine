// Copyright : All rights reserved by Zoom Video Communications 2022-

#pragma once

#include "ZoomUESDKDef.h"
#include "rawdata/rawdata_audio_helper_interface.h"
BEGIN_ZOOM_SDK_UE_NAMESPACE

/**
 * Wrapper around IZoomSDKVirtualAudioMicEvent.
 * Check
 * https://marketplacefront.zoom.us/sdk/meeting/windows/class_i_zoom_s_d_k_virtual_audio_mic_event.html
 * for interface definition.
 */
class ZOOMMEETINGSDK_API ZoomSDKVirtualAudioMicEvent
    : public IZoomSDKVirtualAudioMicEvent {
public:
  ~ZoomSDKVirtualAudioMicEvent();
  ZoomSDKVirtualAudioMicEvent(const ZoomSDKVirtualAudioMicEvent &other) =
      delete;
  ZoomSDKVirtualAudioMicEvent(ZoomSDKVirtualAudioMicEvent &&other) noexcept =
      delete;
  ZoomSDKVirtualAudioMicEvent &
  operator=(const ZoomSDKVirtualAudioMicEvent &other) = delete;
  ZoomSDKVirtualAudioMicEvent &
  operator=(ZoomSDKVirtualAudioMicEvent &&other) noexcept = delete;

  // Static function to create an object of IZoomSDKVirtualAudioMicEvent.
  static IZoomSDKVirtualAudioMicEvent *Create();

  // Methods to override.
  void onMicInitialize(IZoomSDKAudioRawDataSender *pSender) override;
  void onMicStartSend() override;
  void onMicStopSend() override;
  void onMicUninitialized() override;

private:
  ZoomSDKVirtualAudioMicEvent();
};
END_ZOOM_SDK_UE_NAMESPACE