// Copyright : All rights reserved by Zoom Video Communications 2022-

#include "MeetingRecordingController.h"

#include "SDKInterfaceWrap.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE

MeetingRecordingController *MeetingRecordingController::Create() {
  TUniquePtr<MeetingRecordingController> mrc(new MeetingRecordingController());
  if (mrc->Init()) {
    return mrc.Release();
  }

  return nullptr;
}

bool MeetingRecordingController::Init() {
  meeting_recording_controller =
      SDKInterfaceWrap::GetInst().GetMeetingRecordingController();
  return (meeting_recording_controller) ? true : false;
}

SDKError MeetingRecordingController::AllowLocalRecording(unsigned int userid) {
  return meeting_recording_controller->AllowLocalRecording(userid);
}

SDKError MeetingRecordingController::CanAllowDisAllowLocalRecording() {
  return meeting_recording_controller->CanAllowDisAllowLocalRecording();
}

SDKError
MeetingRecordingController::DisAllowLocalRecording(unsigned int userid) {
  return meeting_recording_controller->DisAllowLocalRecording(userid);
}

SDKError MeetingRecordingController::CanStartRecording(bool cloud_recording,
                                                       unsigned int userid) {
  return meeting_recording_controller->CanStartRecording(cloud_recording,
                                                         userid);
}

SDKError MeetingRecordingController::StartRawRecording() {
  return meeting_recording_controller->StartRawRecording();
}

SDKError MeetingRecordingController::StopRawRecording() {
  return meeting_recording_controller->StopRawRecording();
}

SDKError MeetingRecordingController::RequestLocalRecordingPrivilege() {
  return meeting_recording_controller->RequestLocalRecordingPrivilege();
}

END_ZOOM_SDK_UE_NAMESPACE