// Copyright : All rights reserved by Zoom Video Communications 2022-

#include "MeetingConfiguration.h"

#include "SDKInterfaceWrap.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE

MeetingConfiguration *MeetingConfiguration::Create() {
  TUniquePtr<MeetingConfiguration> mcc(new MeetingConfiguration());
  if (mcc->Init()) {
    return mcc.Release();
  }
  return nullptr;
}

bool MeetingConfiguration::Init() {
  meeting_config = SDKInterfaceWrap::GetInst().GetMeetingConfiguration();
  return (meeting_config) ? true : false;
}

MeetingConfiguration::MeetingConfiguration() {}

void MeetingConfiguration::EnableAutoAdjustMicVolumeWhenJoinAudio(
    bool bEnable) {
  meeting_config->EnableAutoAdjustMicVolumeWhenJoinAudio(bEnable);
}

void MeetingConfiguration::EnableAutoAdjustSpeakerVolumeWhenJoinAudio(
    bool bEnable) {
  meeting_config->EnableAutoAdjustSpeakerVolumeWhenJoinAudio(bEnable);
}

END_ZOOM_SDK_UE_NAMESPACE