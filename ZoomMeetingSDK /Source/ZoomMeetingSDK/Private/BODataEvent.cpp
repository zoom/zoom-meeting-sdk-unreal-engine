// Copyright : All rights reserved by Zoom Video Communications 2022-

#include "BODataEvent.h"
#include "SDKInterfaceWrap.h"
#include "SDKUtils.h"
#include "ZoomMeetingSDKEventHandler.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE
IBODataEvent *BODataEvent::Create() { return nullptr; }

void BODataEvent::onBOInfoUpdated(const wchar_t *strBOID) {
  UE_LOG(ZoomMeetingSDKLog, Display, TEXT("onBOInfoUpdated: %s"), strBOID);

  UZoomMeetingSDKEventHandler::GetInstance()->onBOInfoUpdated(strBOID);
}

void BODataEvent::onUnAssignedUserUpdated() {
  UE_LOG(ZoomMeetingSDKLog, Display, TEXT("onUnAssignedUserUpdated"));
  UZoomMeetingSDKEventHandler::GetInstance()->onUnAssignedUserUpdated();
}

void BODataEvent::onBOListInfoUpdated() {
  UE_LOG(ZoomMeetingSDKLog, Display, TEXT("onBOListInfoUpdated"));
  UZoomMeetingSDKEventHandler::GetInstance()->onBOListInfoUpdated();
}
END_ZOOM_SDK_UE_NAMESPACE