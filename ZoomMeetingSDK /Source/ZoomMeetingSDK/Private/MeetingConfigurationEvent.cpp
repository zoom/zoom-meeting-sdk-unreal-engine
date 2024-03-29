// Copyright : All rights reserved by Zoom Video Communications 2022-

#include "MeetingConfigurationEvent.h"

#include "ZoomMeetingSDKEventHandler.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE
IMeetingConfigurationEvent *MeetingConfigurationEvent::Create() {
  return new MeetingConfigurationEvent();
}
MeetingConfigurationEvent::MeetingConfigurationEvent() {}
MeetingConfigurationEvent::~MeetingConfigurationEvent() {}

void MeetingConfigurationEvent::onWebinarNeedRegisterNotification(
    IWebinarNeedRegisterHandler *handler_) {
  auto type_str =
      WebinarNeedRegisterTypeToString(handler_->GetWebinarNeedRegisterType());
  GetZMEventHandler()->onWebinarNeedRegisterNotification(type_str);
}

void MeetingConfigurationEvent::onInputMeetingPasswordAndScreenNameNotification(
    IMeetingPasswordAndScreenNameHandler *pHandler) {}
void MeetingConfigurationEvent::onEndOtherMeetingToJoinMeetingNotification(
    IEndOtherMeetingToJoinMeetingHandler *handler_) {}

void MeetingConfigurationEvent::onFreeMeetingRemainTime(unsigned int leftTime) {
}
void MeetingConfigurationEvent::onFreeMeetingRemainTimeStopCountDown() {}
void MeetingConfigurationEvent::onFreeMeetingNeedToUpgrade(
    FreeMeetingNeedUpgradeType type_, const wchar_t *gift_url) {}
void MeetingConfigurationEvent::onFreeMeetingUpgradeToGiftFreeTrialStart() {}
void MeetingConfigurationEvent::onFreeMeetingUpgradeToGiftFreeTrialStop() {}
void MeetingConfigurationEvent::onFreeMeetingUpgradeToProMeeting() {}

END_ZOOM_SDK_UE_NAMESPACE