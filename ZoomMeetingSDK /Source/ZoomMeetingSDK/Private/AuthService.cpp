// Copyright : All rights reserved by Zoom Video Communications 2022-

#include "AuthService.h"

#include "SDKInterfaceWrap.h"
#include "SDKUtils.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE
AuthService *AuthService::Create() {
  TUniquePtr<AuthService> auth_service(new AuthService());
  if (auth_service->Init()) {
    return auth_service.Release();
  }

  return nullptr;
}

AuthService::AuthService() : auth_service(nullptr) {}
AuthService::~AuthService() {}

bool AuthService::Init() {
  auth_service = SDKInterfaceWrap::GetInst().GetAuthService();
  if (auth_service == nullptr) {
    return false;
  }
  return true;
}

SDKError AuthService::LogOut() { return auth_service->LogOut(); }

SDKError AuthService::SDKAuth(AuthContext &authContext) {
  return auth_service->SDKAuth(authContext);
}

AuthResult AuthService::GetAuthResult() {
  return auth_service->GetAuthResult();
}

END_ZOOM_SDK_UE_NAMESPACE