// Copyright : All rights reserved by Zoom Video Communications 2022-

#include "CustomImmersiveController.h"
#include "SDKInterfaceWrap.h"
#include "SDKUtils.h"
#include "customized_ui/customized_immersive.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE
CustomImmersiveController *CustomImmersiveController::Create() {
  TUniquePtr<CustomImmersiveController> custom_immersive_controller(
      new CustomImmersiveController());
  if (custom_immersive_controller->Init()) {
    return custom_immersive_controller.Release();
  }
  return nullptr;
}

CustomImmersiveController::CustomImmersiveController()
    : custom_immersive_controller(nullptr) {}
CustomImmersiveController::~CustomImmersiveController() {}

bool CustomImmersiveController::Init() {
  custom_immersive_controller =
      SDKInterfaceWrap::GetInst().GetMeetingImmersiveControler();
  if (custom_immersive_controller == nullptr) {
    return false;
  }
  return true;
}

bool CustomImmersiveController::isSupportImmersive() {
  bool isSupported = false;
  auto err = custom_immersive_controller->isSupportImmersive(isSupported);
  return isSupported;
}

END_ZOOM_SDK_UE_NAMESPACE