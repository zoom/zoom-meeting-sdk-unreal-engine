// Copyright : All rights reserved by Zoom Video Communications 2022-

#include "AuthServiceEvent.h"

#include "SDKInterfaceWrap.h"
#include "SDKUtils.h"
#include "ZoomMeetingSDKBPLibrary.h"
#include "ZoomMeetingSDKEventHandler.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE
IAuthServiceEvent *AuthServiceEvent::Create() { return new AuthServiceEvent(); }

void AuthServiceEvent::onLogout() {
  UE_LOG(ZoomMeetingSDKLog, Display, TEXT("Logged out."));

  UZoomMeetingSDKEventHandler::GetInstance()->onLogout();
}
void AuthServiceEvent::onAuthenticationReturn(AuthResult ret) {
  FString ret_str = AuthResultToString(ret);
  UE_LOG(ZoomMeetingSDKLog, Display, TEXT("onAuthenticationReturn: %s"),
         *ret_str);

  UZoomMeetingSDKEventHandler::GetInstance()->onAuthenticationReturn(*ret_str);
}

void AuthServiceEvent::onLoginReturnWithReason(LOGINSTATUS ret,
                                               IAccountInfo *pAccountInfo,
                                               LoginFailReason reason) {
  auto ret_str = LOGINSTATUSToString(ret);
  auto reason_str = LoginFailReasonToString(reason);

  UE_LOG(ZoomMeetingSDKLog, Display,
         TEXT("onLoginReturnWithReason LOGINSTATUS: %s"),
         *LOGINSTATUSToString(ret));
  UE_LOG(ZoomMeetingSDKLog, Display,
         TEXT("onLoginReturnWithReason LoginFailReason: %s"),
         *LoginFailReasonToString(reason));

  UZoomMeetingSDKEventHandler::GetInstance()->onLoginReturn(ret_str,
                                                            reason_str);
}

// No implementations required as of now.
void AuthServiceEvent::onZoomIdentityExpired() {
  UE_LOG(ZoomMeetingSDKLog, Display, TEXT("onZoomIdentityExpired"));
}
void AuthServiceEvent::onZoomAuthIdentityExpired() {
  UE_LOG(ZoomMeetingSDKLog, Display, TEXT("onZoomAuthIdentityExpired"));
}
void AuthServiceEvent::onNotificationServiceStatus(
    SDKNotificationServiceStatus status) {
  UE_LOG(ZoomMeetingSDKLog, Display, TEXT("onNotificationServiceStatus: %d"),
         status);
}
void AuthServiceEvent::onNotificationServiceStatus(
    SDKNotificationServiceStatus status, SDKNotificationServiceError error) {
  UE_LOG(ZoomMeetingSDKLog, Display, TEXT("onNotificationServiceStatus: %d"),
         status);
}

END_ZOOM_SDK_UE_NAMESPACE