// Copyright : All rights reserved by Zoom Video Communications 2022-

#include "BOCreatorEvent.h"
#include "SDKInterfaceWrap.h"
#include "SDKUtils.h"
#include "ZoomMeetingSDKEventHandler.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE
IBOCreatorEvent *BOCreatorEvent::Create() { return new BOCreatorEvent(); }

void BOCreatorEvent::onBOCreateSuccess(const wchar_t *strBOID) {
  UE_LOG(ZoomMeetingSDKLog, Display, TEXT("onBOCreateSuccess: %s"), strBOID);

  UZoomMeetingSDKEventHandler::GetInstance()->OnBOCreateSuccess(strBOID);
}

void BOCreatorEvent::OnWebPreAssignBODataDownloadStatusChanged(
    PreAssignBODataStatus status) {
  UE_LOG(ZoomMeetingSDKLog, Display,
         TEXT("OnWebPreAssignBODataDownloadStatusChanged: Not implemented"));
}

void BOCreatorEvent::OnBOOptionChanged(const BOOption &newOption) {
  UE_LOG(ZoomMeetingSDKLog, Display,
         TEXT("OnBOOptionChanged: Not implemented"));
}
END_ZOOM_SDK_UE_NAMESPACE