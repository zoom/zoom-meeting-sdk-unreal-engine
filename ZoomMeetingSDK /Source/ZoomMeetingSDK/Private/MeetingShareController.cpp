// Copyright : All rights reserved by Zoom Video Communications 2022-

#include "MeetingShareController.h"

#include "SDKInterfaceWrap.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE
MeetingShareController *MeetingShareController::Create() {
  TUniquePtr<MeetingShareController> msc(new MeetingShareController());
  if (msc->Init()) {
    return msc.Release();
  }

  return nullptr;
}

MeetingShareController::MeetingShareController() {}

bool MeetingShareController::Init() {
  meeting_service_controller =
      SDKInterfaceWrap::GetInst().GetMeetingShareController();
  if (meeting_service_controller == nullptr) {
    return false;
  }
  return true;
}

bool MeetingShareController::CanStartShare() {
  return meeting_service_controller->CanStartShare();
}

SDKError MeetingShareController::CanSwitchToShareNextCamera(bool &bCan) {
  return meeting_service_controller->CanSwitchToShareNextCamera(bCan);
}

SDKError MeetingShareController::StartShareCamera() {
  return meeting_service_controller->StartShareCamera();
}

END_ZOOM_SDK_UE_NAMESPACE