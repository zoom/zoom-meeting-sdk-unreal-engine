// Copyright : All rights reserved by Zoom Video Communications 2022-

#include "MeetingAudioController.h"

#include "SDKInterfaceWrap.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE
MeetingAudioController *MeetingAudioController::Create() {
  TUniquePtr<MeetingAudioController> mac(new MeetingAudioController());
  if (mac->Init()) {
    return mac.Release();
  }

  return nullptr;
}

bool MeetingAudioController::Init() {
  meeting_audio_controller =
      SDKInterfaceWrap::GetInst().GetMeetingAudioController();
  return (meeting_audio_controller) ? true : false;
}

SDKError MeetingAudioController::MuteAudio(unsigned int userid,
                                           bool allowUnmuteBySelf) {
  return meeting_audio_controller->MuteAudio(userid, allowUnmuteBySelf);
}

bool MeetingAudioController::CanUnMuteBySelf() {
  return meeting_audio_controller->CanUnMuteBySelf();
}

SDKError MeetingAudioController::UnMuteAudio(unsigned int userid) {
  return meeting_audio_controller->UnMuteAudio(userid);
}

END_ZOOM_SDK_UE_NAMESPACE