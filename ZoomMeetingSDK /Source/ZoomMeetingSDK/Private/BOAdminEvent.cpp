// Copyright : All rights reserved by Zoom Video Communications 2022-

#include "BOAdminEvent.h"

#include "SDKInterfaceWrap.h"
#include "SDKUtils.h"
#include "ZoomMeetingSDKEventHandler.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE
IBOAdminEvent *BOAdminEvent::Create() { return new BOAdminEvent(); }

void BOAdminEvent::onHelpRequestReceived(const wchar_t *strUserID) {
  UE_LOG(ZoomMeetingSDKLog, Display, TEXT("onHelpRequestReceived: %s"),
         strUserID);
}

void BOAdminEvent::onBOEndTimerUpdated(int remaining, bool isTimesUpNotice) {
  UE_LOG(ZoomMeetingSDKLog, Display, TEXT("onBOEndTimerUpdated: %d"),
         remaining);

  UZoomMeetingSDKEventHandler::GetInstance()->OnBOEndTimerUpdated(
      remaining, isTimesUpNotice);
}

void BOAdminEvent::onStartBOError(BOControllerError errCode) {
  UE_LOG(ZoomMeetingSDKLog, Display, TEXT("onStartBOError: %s"),
         *BOControllerErrorToString(errCode));

  UZoomMeetingSDKEventHandler::GetInstance()->OnStartBOError(
      *BOControllerErrorToString(errCode));
}
END_ZOOM_SDK_UE_NAMESPACE