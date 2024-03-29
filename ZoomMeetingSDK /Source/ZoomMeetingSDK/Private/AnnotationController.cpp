// Copyright : All rights reserved by Zoom Video Communications 2022-

#include "AnnotationController.h"

#include "SDKInterfaceWrap.h"
#include "SDKUtils.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE
AnnotationController *AnnotationController::Create() {
  TUniquePtr<AnnotationController> annotation_controller(
      new AnnotationController());
  if (annotation_controller->Init()) {
    return annotation_controller.Release();
  }
  return nullptr;
}
AnnotationController::AnnotationController() : annotation_controller(nullptr) {}

AnnotationController::~AnnotationController() {}

bool AnnotationController::Init() {
  annotation_controller = SDKInterfaceWrap::GetInst().GetAnnotationController();
  if (annotation_controller == nullptr) {
    return false;
  }
  return true;
}

bool AnnotationController::IsAnnotationDisable() {
  return annotation_controller->IsAnnotationDisable();
}

END_ZOOM_SDK_UE_NAMESPACE