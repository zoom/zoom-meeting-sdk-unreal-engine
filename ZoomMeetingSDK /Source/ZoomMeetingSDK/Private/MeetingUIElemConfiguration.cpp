// Copyright : All rights reserved by Zoom Video Communications 2022-

#include "MeetingUIElemConfiguration.h"

#include "SDKInterfaceWrap.h"
#include "SDKUtils.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE
MeetingUIElemConfiguration *MeetingUIElemConfiguration::Create() {
  TUniquePtr<MeetingUIElemConfiguration> meeting_ui_configuration(
      new MeetingUIElemConfiguration());
  if (meeting_ui_configuration->Init()) {
    return meeting_ui_configuration.Release();
  }
  return nullptr;
}

bool MeetingUIElemConfiguration::Init() {
  ZOOM_SDK_NAMESPACE::IMeetingUIElemConfiguration *pMeetingUIElemConfiguration =
      SDKInterfaceWrap::GetInst().GetMeetingConfiguration();

  if (!pMeetingUIElemConfiguration) {
    meeting_ui_configuration = pMeetingUIElemConfiguration;
    return true;
  }
  return false;
}

void MeetingUIElemConfiguration::EnableClaimHostFeature(bool bEnable) {
  meeting_ui_configuration->EnableClaimHostFeature(bEnable);
}
END_ZOOM_SDK_UE_NAMESPACE