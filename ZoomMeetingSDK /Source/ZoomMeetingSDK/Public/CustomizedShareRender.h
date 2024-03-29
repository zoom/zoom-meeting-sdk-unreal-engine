// Copyright : All rights reserved by Zoom Video Communications 2022-

#pragma once

#include "ZoomUESDKDef.h"
#include "customized_ui/customized_share_render.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE

/**
 * Wrapper around ICustomizedShareRender.
 * Check
 * https://marketplacefront.zoom.us/sdk/meeting/windows/class_i_customized_share_render.html
 * for interface definition.
 */
class ZOOMMEETINGSDK_API CustomizedShareRender {
public:
  ~CustomizedShareRender() = default;
  CustomizedShareRender(const CustomizedShareRender &other) = delete;
  CustomizedShareRender(CustomizedShareRender &&other) noexcept = delete;
  CustomizedShareRender &operator=(const CustomizedShareRender &other) = delete;
  CustomizedShareRender &
  operator=(CustomizedShareRender &&other) noexcept = delete;

  // Static function to create an object of ICustomizedShareRender.
  static ICustomizedShareRender *Create();

  // Implementation of the required methods.
  unsigned int GetUserID();

private:
  CustomizedShareRender() = default;
};
END_ZOOM_SDK_UE_NAMESPACE