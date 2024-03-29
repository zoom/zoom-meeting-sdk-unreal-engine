// Copyright : All rights reserved by Zoom Video Communications 2022-

#include "ZoomCameraController.h"

#include "SDKInterfaceWrap.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE
CameraController *CameraController::Create() {
  TUniquePtr<CameraController> cc(new CameraController());
  if (cc->Init()) {
    return cc.Release();
  }

  return nullptr;
}

CameraController::CameraController() : camera_controller(nullptr) {}
CameraController::~CameraController() {}

bool CameraController::Init() {
  camera_controller = SDKInterfaceWrap::GetInst().GetCameraController();
  if (camera_controller == nullptr) {
    return false;
  }
  return true;
}

bool CameraController::IsValid() { return camera_controller->IsValid(); }

SDKError CameraController::BeginTurnLeft() {
  return camera_controller->BeginTurnLeft();
}
SDKError CameraController::ContinueTurnLeft() {
  return camera_controller->ContinueTurnLeft();
}
SDKError CameraController::EndTurnLeft() {
  return camera_controller->EndTurnLeft();
}

SDKError CameraController::BeginTurnRight() {
  return camera_controller->BeginTurnRight();
}
SDKError CameraController::ContinueTurnRight() {
  return camera_controller->ContinueTurnRight();
}
SDKError CameraController::EndTurnRight() {
  return camera_controller->EndTurnRight();
}

SDKError CameraController::BeginTurnUp() {
  return camera_controller->BeginTurnUp();
}
SDKError CameraController::ContinueTurnUp() {
  return camera_controller->ContinueTurnUp();
}
SDKError CameraController::EndTurnUp() {
  return camera_controller->EndTurnUp();
}

SDKError CameraController::BeginTurnDown() {
  return camera_controller->BeginTurnDown();
}
SDKError CameraController::ContinueTurnDown() {
  return camera_controller->ContinueTurnDown();
}
SDKError CameraController::EndTurnDown() {
  return camera_controller->EndTurnDown();
}

SDKError CameraController::BeginZoomIn() {
  return camera_controller->BeginZoomIn();
}
SDKError CameraController::ContinueZoomIn() {
  return camera_controller->ContinueZoomIn();
}
SDKError CameraController::EndZoomIn() {
  return camera_controller->EndZoomIn();
}

SDKError CameraController::BeginZoomOut() {
  return camera_controller->BeginZoomOut();
}
SDKError CameraController::ContinueZoomOut() {
  return camera_controller->ContinueZoomOut();
}
SDKError CameraController::EndZoomOut() {
  return camera_controller->EndZoomOut();
}

SDKError CameraController::CanControlCamera(bool &bCan) {
  return camera_controller->CanControlCamera(bCan);
}
END_ZOOM_SDK_UE_NAMESPACE