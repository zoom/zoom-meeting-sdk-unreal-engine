// Copyright : All rights reserved by Zoom Video Communications 2022-

#pragma once

#include "ZoomUESDKDef.h"
#include "setting_service_interface.h"
BEGIN_ZOOM_SDK_UE_NAMESPACE
/**
 *
 */
class ZOOMMEETINGSDK_API ShareSettingContext {
public:
  ~ShareSettingContext() = default;
  ShareSettingContext(const ShareSettingContext &other) = delete;
  ShareSettingContext(ShareSettingContext &&other) noexcept = delete;
  ShareSettingContext &operator=(const ShareSettingContext &other) = delete;
  ShareSettingContext &operator=(ShareSettingContext &&other) noexcept = delete;

  // Static function to create an object of IMeetingWebinarController.
  static ShareSettingContext *Create();

  // Override the required methods.
  SDKError EnableGreenBorderWhenShare(bool bEnable);
  SDKError EnableAccelerateGPUWhenShare(bool bEnable);

private:
  ShareSettingContext() = default;

  // Initializes ShareSettingContext.
  //
  // Returns true if initialization was successful.
  bool Init();

  IShareSettingContext *share_setting_context = nullptr;
};
END_ZOOM_SDK_UE_NAMESPACE