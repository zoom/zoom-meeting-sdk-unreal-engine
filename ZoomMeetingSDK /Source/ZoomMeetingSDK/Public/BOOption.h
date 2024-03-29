// Copyright : All rights reserved by Zoom Video Communications 2022-

#pragma once

#include "ZoomUESDKDef.h"
#include "meeting_service_components/meeting_breakout_rooms_interface_v2.h"
BEGIN_ZOOM_SDK_UE_NAMESPACE

/**
 *
 */
class ZOOMMEETINGSDK_API BOOption {
public:
  ~BOOption() = default;
  BOOption(const BOOption &other) = delete;
  BOOption(BOOption &&other) noexcept = delete;
  BOOption &operator=(const BOOption &other) = delete;
  BOOption &operator=(BOOption &&other) noexcept = delete;

  // Static function to create an BOOption object.
  static BOOption *Create();

  // Implementation of the required methods.

private:
  BOOption() = default;
  BOOption *bo_option;
};
END_ZOOM_SDK_UE_NAMESPACE