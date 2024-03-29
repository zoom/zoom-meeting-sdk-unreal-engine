// Copyright : All rights reserved by Zoom Video Communications 2022-

#pragma once

#include "ZoomUESDKDef.h"
#include "setting_service_interface.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE
/**
 * Wrapper around IVideoSettingContextEvent.
 * Check
 * https://marketplacefront.zoom.us/sdk/meeting/windows/class_i_video_setting_context_event.html
 * for interface definition.
 */
class ZOOMMEETINGSDK_API VideoSettingContextEvent
    : public IVideoSettingContextEvent {
public:
  ~VideoSettingContextEvent() = default;
  VideoSettingContextEvent(const VideoSettingContextEvent &other) = delete;
  VideoSettingContextEvent(VideoSettingContextEvent &&other) noexcept = delete;
  VideoSettingContextEvent &
  operator=(const VideoSettingContextEvent &other) = delete;
  VideoSettingContextEvent &
  operator=(VideoSettingContextEvent &&other) noexcept = delete;

  // Static function to create an object of IVideoSettingContextEvent.
  static IVideoSettingContextEvent *Create();

  // Methods to override.
  void
  onComputerCamDeviceChanged(IList<ICameraInfo *> *pNewCameraList) override;
  void onDefaultCamDeviceChanged(const wchar_t *deviceId,
                                 const wchar_t *deviceName) override;

private:
  VideoSettingContextEvent() = default;
};
END_ZOOM_SDK_UE_NAMESPACE