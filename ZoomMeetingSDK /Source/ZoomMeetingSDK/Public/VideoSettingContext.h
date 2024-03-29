// Copyright : All rights reserved by Zoom Video Communications 2022-

#pragma once

#include "ZoomUESDKDef.h"
#include "setting_service_interface.h"
BEGIN_ZOOM_SDK_UE_NAMESPACE

/**
 * Wrapper around IVideoSettingContext.
 * Check
 * https://marketplacefront.zoom.us/sdk/meeting/windows/class_i_video_setting_context.html
 * for interface definition.
 */
class ZOOMMEETINGSDK_API VideoSettingContext {
public:
  ~VideoSettingContext() = default;
  VideoSettingContext(const VideoSettingContext &other) = delete;
  VideoSettingContext(VideoSettingContext &&other) noexcept = delete;
  VideoSettingContext &operator=(const VideoSettingContext &other) = delete;
  VideoSettingContext &operator=(VideoSettingContext &&other) noexcept = delete;

  // Static function to create an object of IVideoSettingContext.
  static VideoSettingContext *Create();

  // Implementation of the required methods.
  SDKError EnableHDVideo(bool bEnable);
  bool IsSpotlightSelfEnabled();
  SDKError SelectCamera(const wchar_t *deviceId);

private:
  VideoSettingContext() = default;

  // Initializes VideoSettingContext.
  //
  // Returns true if initialization was successful.
  bool Init();

  // Pointer to IVideoSettingContext.
  IVideoSettingContext *m_video_setting_context;
};
END_ZOOM_SDK_UE_NAMESPACE