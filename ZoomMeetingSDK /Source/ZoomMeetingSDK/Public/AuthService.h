// Copyright : All rights reserved by Zoom Video Communications 2022-

#pragma once

#include "ZoomUESDKDef.h"
#include "auth_service_interface.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE

/**
 * Wrapper around IAuthService.
 * Check
 * https://marketplacefront.zoom.us/sdk/meeting/windows/class_i_auth_service.html
 * for interface definition.
 */
class ZOOMMEETINGSDK_API AuthService {
public:
  ~AuthService();
  AuthService(const AuthService &other) = delete;
  AuthService(AuthService &&other) noexcept = delete;
  AuthService &operator=(const AuthService &other) = delete;
  AuthService &operator=(AuthService &&other) noexcept = delete;

  // Static function to create an object of AuthService.
  static AuthService *Create();

  // Implementation of the required methods.
  SDKError LogOut();
  SDKError SDKAuth(AuthContext &authContext);
  AuthResult GetAuthResult();

private:
  AuthService();

  // Initializes AuthService.
  //
  // Returns true if initialization was successful.
  bool Init();

  IAuthService *auth_service;
};
END_ZOOM_SDK_UE_NAMESPACE