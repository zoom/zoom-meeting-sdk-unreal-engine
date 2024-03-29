// Copyright : All rights reserved by Zoom Video Communications 2022-

#include "MeetingLiveStreamController.h"

#include "SDKInterfaceWrap.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE
MeetingLiveStreamController *MeetingLiveStreamController::Create() {
  TUniquePtr<MeetingLiveStreamController> mlsc(
      new MeetingLiveStreamController());
  if (mlsc->Init()) {
    return mlsc.Release();
  }

  return nullptr;
}

MeetingLiveStreamController::MeetingLiveStreamController()
    : meeting_live_stream_controller(nullptr) {}
MeetingLiveStreamController::~MeetingLiveStreamController() {}

bool MeetingLiveStreamController::Init() {
  meeting_live_stream_controller =
      SDKInterfaceWrap::GetInst().GetMeetingLiveStreamController();
  if (meeting_live_stream_controller == nullptr) {
    return false;
  }
  return true;
}

SDKError MeetingLiveStreamController::CanStartLiveStream() {
  return meeting_live_stream_controller->CanStartLiveStream();
}

SDKError MeetingLiveStreamController::CanStartRawLiveStream() {
  return meeting_live_stream_controller->CanStartRawLiveStream();
}

END_ZOOM_SDK_UE_NAMESPACE