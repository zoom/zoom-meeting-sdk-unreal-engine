// Copyright : All rights reserved by Zoom Video Communications 2022-

#pragma once

#include "ZoomUESDKDef.h"
#include "customized_ui/customized_immersive.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE
/**
 * Wrapper around ICustomImmersiveControler.
 * Check
 * https://marketplacefront.zoom.us/sdk/meeting/windows/class_i_custom_immersive_controller.html
 * for interface definitions.
 */
class ZOOMMEETINGSDK_API CustomImmersiveController {
public:
  CustomImmersiveController();
  ~CustomImmersiveController();

  // Static function to create an object of CustomImmersiveController.
  static CustomImmersiveController *Create();

  // Implementation of the required methods.
  bool isSupportImmersive();

private:
  // Initalize the ICustomImmersiveController.
  //
  // Returns true if initialization was success.
  bool Init();

  ICustomImmersiveController *custom_immersive_controller;
};
END_ZOOM_SDK_UE_NAMESPACE