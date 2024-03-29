// Copyright : All rights reserved by Zoom Video Communications 2022-

#include "MeetingRemoteController.h"

#include "SDKInterfaceWrap.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE

MeetingRemoteController *MeetingRemoteController::Create() {
  TUniquePtr<MeetingRemoteController> mrc(new MeetingRemoteController());
  if (mrc->Init()) {
    return mrc.Release();
  }

  return nullptr;
}

MeetingRemoteController::MeetingRemoteController()
    : meeting_remote_controller(nullptr) {}
MeetingRemoteController::~MeetingRemoteController() {}

bool MeetingRemoteController::Init() {
  meeting_remote_controller =
      SDKInterfaceWrap::GetInst().GetMeetingRemoteController();
  if (meeting_remote_controller == nullptr) {
    return false;
  }
  return true;
}

SDKError MeetingRemoteController::CanRequestControl(unsigned int userId) {
  return meeting_remote_controller->CanRequestControl(userId);
}

END_ZOOM_SDK_UE_NAMESPACE