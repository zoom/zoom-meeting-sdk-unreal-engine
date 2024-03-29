// Copyright : All rights reserved by Zoom Video Communications 2022-

#pragma once

#include "ZoomUESDKDef.h"
#include "zoom_sdk_util_define.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE
/**
 * Wrapper around ICameraController
 * Check
 * https://marketplacefront.zoom.us/sdk/meeting/windows/class_i_camera_controller.html
 * for interface definitions.
 *
 * Note: The name CameraController is defined elsewhere within Unreal Engine
 * (UE), and UE wouldn't let us create a class with the same name. Hence this
 * file is named ZoomCameraController.
 */
class ZOOMMEETINGSDK_API CameraController {
public:
  ~CameraController();

  CameraController(const CameraController &other) = delete;
  CameraController(CameraController &&other) noexcept = delete;
  CameraController &operator=(const CameraController &other) = delete;
  CameraController &operator=(CameraController &&other) noexcept = delete;

  // Static function to create an object of CameraController.
  static CameraController *Create();

  bool IsValid();

  SDKError BeginTurnLeft();
  SDKError ContinueTurnLeft();
  SDKError EndTurnLeft();

  SDKError BeginTurnRight();
  SDKError ContinueTurnRight();
  SDKError EndTurnRight();

  SDKError BeginTurnUp();
  SDKError ContinueTurnUp();
  SDKError EndTurnUp();

  SDKError BeginTurnDown();
  SDKError ContinueTurnDown();
  SDKError EndTurnDown();

  SDKError BeginZoomIn();
  SDKError ContinueZoomIn();
  SDKError EndZoomIn();

  SDKError BeginZoomOut();
  SDKError ContinueZoomOut();
  SDKError EndZoomOut();

  // Used to determine whether the camera can be controlled or not
  SDKError CanControlCamera(bool &bCan);

private:
  CameraController();
  // Initializes AuthService.
  //
  // Returns true if initialization was successful.
  bool Init();

  ICameraController *camera_controller = nullptr;
};
END_ZOOM_SDK_UE_NAMESPACE