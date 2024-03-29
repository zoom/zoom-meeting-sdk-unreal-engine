// Copyright : All rights reserved by Zoom Video Communications 2022-

#pragma once

#include "ZoomUESDKDef.h"
#include "direct_share_helper_interface.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE
/**
 * Wrapper around IDirectShareServiceHelper.
 * Check
 * https://marketplacefront.zoom.us/sdk/meeting/windows/class_i_direct_share_service_helper_event.html
 * for interface definition.
 */
class ZOOMMEETINGSDK_API DirectShareServiceHelper {
public:
  DirectShareServiceHelper();
  ~DirectShareServiceHelper();

  // Static function to create an object of DirectShareServiceHelper.
  static DirectShareServiceHelper *Create();

  // Implementation of the required methods.
  SDKError CanStartDirectShare();

private:
  // Initializes DirectShareServiceHelper.
  //
  // Returns true if initialization was successful.
  bool Init();

  IDirectShareServiceHelper *direct_share_helper;
};
END_ZOOM_SDK_UE_NAMESPACE