// Copyright : All rights reserved by Zoom Video Communications 2022-

#pragma once

#include "ZoomUESDKDef.h"
#include "meeting_service_components/meeting_annotation_interface.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE
/**
 * Wrapper around IAnnotationController.
 * Check
 * https://marketplacefront.zoom.us/sdk/meeting/windows/class_i_annotation_controller.html
 * for interface definition.
 */
class ZOOMMEETINGSDK_API AnnotationController {
public:
  AnnotationController();
  ~AnnotationController();

  // Static function to create an object of AnnotationController.
  static AnnotationController *Create();

  // Implementation of the required methods.
  bool IsAnnotationDisable();

private:
  // Initialize AnnotationController.
  //
  // Return true if the initialization was successful.
  bool Init();

  IAnnotationController *annotation_controller;
};
END_ZOOM_SDK_UE_NAMESPACE