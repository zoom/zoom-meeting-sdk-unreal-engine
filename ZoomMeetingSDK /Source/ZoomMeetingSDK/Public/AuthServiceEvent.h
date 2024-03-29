// Copyright : All rights reserved by Zoom Video Communications 2022-

#pragma once

#include "ZoomMeetingSDKBPLibrary.h"
#include "ZoomUESDKDef.h"
#include "auth_service_interface.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE
/**
 * Wrapper around IAuthServiceEvent
 * Check
 * https://marketplacefront.zoom.us/sdk/meeting/windows/class_i_auth_service_event.html
 * for interface definitions.
 */
class ZOOMMEETINGSDK_API AuthServiceEvent : public IAuthServiceEvent {
public:
  ~AuthServiceEvent() = default;
  AuthServiceEvent(const AuthServiceEvent &other) = delete;
  AuthServiceEvent(AuthServiceEvent &&other) noexcept = delete;
  AuthServiceEvent &operator=(const AuthServiceEvent &other) = delete;
  AuthServiceEvent &operator=(AuthServiceEvent &&other) noexcept = delete;

  // Static function to create an object of IAuthServiceEvent.
  static IAuthServiceEvent *Create();

  // Implementation of the required methods.
  void onLogout() override;
  void onAuthenticationReturn(AuthResult ret) override;
  void onLoginReturnWithReason(LOGINSTATUS ret, IAccountInfo *pAccountInfo,
                               LoginFailReason reason) override;

  // As of now, we don't need to implement these methods.
  void onZoomIdentityExpired() override;
  void onZoomAuthIdentityExpired() override;
  void
  onNotificationServiceStatus(SDKNotificationServiceStatus status) override;
  void onNotificationServiceStatus(SDKNotificationServiceStatus status,
                                   SDKNotificationServiceError error) override;

private:
  AuthServiceEvent() = default;
};
END_ZOOM_SDK_UE_NAMESPACE