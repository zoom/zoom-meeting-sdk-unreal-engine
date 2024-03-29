// Copyright : All rights reserved by Zoom Video Communications 2022-

#include "MeetingUIController.h"

#include "SDKInterfaceWrap.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE
MeetingUIController *MeetingUIController::Create() {
  TUniquePtr<MeetingUIController> muic(new MeetingUIController());
  if (muic->Init()) {
    return muic.Release();
  }

  return nullptr;
}

bool MeetingUIController::Init() {
  meeting_ui_controller = SDKInterfaceWrap::GetInst().GetUIController();
  return (meeting_ui_controller) ? true : false;
}

SDKError MeetingUIController::SetMeetingTopic(const wchar_t *meetingtopic) {
  return meeting_ui_controller->SetMeetingTopic(meetingtopic);
}

SDKError MeetingUIController::SetCustomizedPollingUrl(const wchar_t *URL,
                                                      bool bCreate) {
  return meeting_ui_controller->SetCustomizedPollingUrl(URL, bCreate);
}

SDKError MeetingUIController::CanSwapToShowShareViewOrVideo(bool &bCan) {
  return meeting_ui_controller->CanSwapToShowShareViewOrVideo(bCan);
}

END_ZOOM_SDK_UE_NAMESPACE