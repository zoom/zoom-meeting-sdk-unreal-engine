// Copyright : All rights reserved by Zoom Video Communications 2022-

#pragma once

#include "ZoomUESDKDef.h"
#include "meeting_service_components/meeting_configuration_interface.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE
/**
 * Wrapper around IMeetingConfigurationEvent
 * Check
 * https://marketplacefront.zoom.us/sdk/meeting/windows/class_i_meeting_configuration_event.html
 * for interface definitions.
 */
class ZOOMMEETINGSDK_API MeetingConfigurationEvent
    : public IMeetingConfigurationEvent {
public:
  ~MeetingConfigurationEvent();

  MeetingConfigurationEvent(const MeetingConfigurationEvent &other) = delete;
  MeetingConfigurationEvent(MeetingConfigurationEvent &&other) noexcept =
      delete;
  MeetingConfigurationEvent &
  operator=(const MeetingConfigurationEvent &other) = delete;
  MeetingConfigurationEvent &
  operator=(MeetingConfigurationEvent &&other) noexcept = delete;

  // Static function to create an object of IMeetingConfigurationEvent.
  static IMeetingConfigurationEvent *Create();

  void onWebinarNeedRegisterNotification(
      IWebinarNeedRegisterHandler *handler_) override;

  void onInputMeetingPasswordAndScreenNameNotification(
      IMeetingPasswordAndScreenNameHandler *pHandler) override;
  void onEndOtherMeetingToJoinMeetingNotification(
      IEndOtherMeetingToJoinMeetingHandler *handler_) override;

  // Methods from IMeetingConfigurationFreeMeetingEvent
  void onFreeMeetingRemainTime(unsigned int leftTime) override;
  void onFreeMeetingRemainTimeStopCountDown() override;
  void onFreeMeetingNeedToUpgrade(FreeMeetingNeedUpgradeType type_,
                                  const wchar_t *gift_url) override;
  void onFreeMeetingUpgradeToGiftFreeTrialStart() override;
  void onFreeMeetingUpgradeToGiftFreeTrialStop() override;
  void onFreeMeetingUpgradeToProMeeting() override;

private:
  MeetingConfigurationEvent();
};
END_ZOOM_SDK_UE_NAMESPACE