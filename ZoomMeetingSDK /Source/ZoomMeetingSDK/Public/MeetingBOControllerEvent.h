// Copyright : All rights reserved by Zoom Video Communications 2022-

#pragma once

#include "ZoomUESDKDef.h"
#include "meeting_service_components/meeting_breakout_rooms_interface_v2.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE
/**
 * Wrapper around IMeetingBOControllerEvent
 * Check
 * https://marketplacefront.zoom.us/sdk/meeting/windows/class_i_meeting_b_o_controller_event.html
 * for interface definitions.
 */
class ZOOMMEETINGSDK_API MeetingBOControllerEvent
    : public IMeetingBOControllerEvent {
public:
  ~MeetingBOControllerEvent();

  MeetingBOControllerEvent(const MeetingBOControllerEvent &other) = delete;
  MeetingBOControllerEvent(MeetingBOControllerEvent &&other) noexcept = delete;
  MeetingBOControllerEvent &
  operator=(const MeetingBOControllerEvent &other) = delete;
  MeetingBOControllerEvent &
  operator=(MeetingBOControllerEvent &&other) noexcept = delete;

  // Static function to create an object of IMeetingBOControllerEvent.
  static IMeetingBOControllerEvent *Create();

  void onHasCreatorRightsNotification(IBOCreator *pCreatorObj) override;
  void onHasAdminRightsNotification(IBOAdmin *pAdminObj) override;
  void onHasAssistantRightsNotification(IBOAssistant *pAssistantObj) override;
  void onHasAttendeeRightsNotification(IBOAttendee *pAttendeeObj) override;
  void onHasDataHelperRightsNotification(IBOData *pDataHelperObj) override;
  void onLostCreatorRightsNotification() override;
  void onLostAdminRightsNotification() override;
  void onLostAssistantRightsNotification() override;
  void onLostAttendeeRightsNotification() override;
  void onLostDataHelperRightsNotification() override;
  void onNewBroadcastMessageReceived(const wchar_t *strMsg,
                                     unsigned int nSenderID,
                                     const wchar_t *strSenderName) override;
  void onBOStopCountDown(unsigned int nSeconds) override;
  void onHostInviteReturnToMainSession(
      const wchar_t *strName, IReturnToMainSessionHandler *handler) override;
  void onBOStatusChanged(BO_STATUS eStatus) override;
  void onBOSwitchRequestReceived(const wchar_t *strNewBOName,
                                 const wchar_t *strNewBOID) override;
  void onBroadcastBOVoiceStatus(bool bStart) override;

private:
  MeetingBOControllerEvent();
};
END_ZOOM_SDK_UE_NAMESPACE