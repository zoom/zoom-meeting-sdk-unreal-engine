// Copyright : All rights reserved by Zoom Video Communications 2022-

#include "MeetingBOControllerEvent.h"

#include "SDKInterfaceWrap.h"
#include "ZoomMeetingSDKEventHandler.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE

IMeetingBOControllerEvent *MeetingBOControllerEvent::Create() {
  return new MeetingBOControllerEvent;
}

MeetingBOControllerEvent::MeetingBOControllerEvent() {}

MeetingBOControllerEvent::~MeetingBOControllerEvent() {}

void MeetingBOControllerEvent::onHasCreatorRightsNotification(
    IBOCreator *pCreatorObj) {
  // Incomplete BP wrapper
  // GetZMEventHandler()->onHasCreatorRightsNotification();
}
void MeetingBOControllerEvent::onHasAdminRightsNotification(
    IBOAdmin *pAdminObj) {
  // Incomplete BP wrapper
  // GetZMEventHandler()->onHasAdminRightsNotification();
}

void MeetingBOControllerEvent::onHasAssistantRightsNotification(
    IBOAssistant *pAssistantObj) {
  // Incomplete BP wrapper
  // GetZMEventHandler()->onHasAssistantRightsNotification();
}

void MeetingBOControllerEvent::onHasAttendeeRightsNotification(
    IBOAttendee *pAttendeeObj) {
  // Incomplete BP wrapper
  // GetZMEventHandler()->onHasAttendeeRightsNotification();
}

void MeetingBOControllerEvent::onLostAdminRightsNotification() {
  // Incomplete BP wrapper
  // GetZMEventHandler()->onLostAdminRightsNotification();
}
void MeetingBOControllerEvent::onLostAssistantRightsNotification() {
  // Incomplete BP wrapper
  // GetZMEventHandler()->onLostAssistantRightsNotification();
}
void MeetingBOControllerEvent::onLostAttendeeRightsNotification() {
  // Incomplete BP wrapper
  // GetZMEventHandler()->onLostAttendeeRightsNotification();
}
void MeetingBOControllerEvent::onLostCreatorRightsNotification() {
  // Incomplete BP wrapper
  // GetZMEventHandler()->onLostCreatorRightsNotification();
}
void MeetingBOControllerEvent::onBOStatusChanged(BO_STATUS eStatus) {
  GetZMEventHandler()->onBOStatusChanged(eStatus);
}

void MeetingBOControllerEvent::onBOSwitchRequestReceived(
    const wchar_t *strNewBOName, const wchar_t *strNewBOID) {
  GetZMEventHandler()->onBOSwitchRequestReceived(FString(strNewBOName),
                                                 FString(strNewBOID));
}

void MeetingBOControllerEvent::onNewBroadcastMessageReceived(
    const wchar_t *strMsg, unsigned int nSenderID,
    const wchar_t *strSenderName) {
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("onNewBroadcastMessageReceived Update Event handler to include "
              "sender name."));
  GetZMEventHandler()->onNewBroadcastMessageReceived(FString(strMsg),
                                                     nSenderID);
}

void MeetingBOControllerEvent::onHasDataHelperRightsNotification(
    IBOData *pDataHelperObj) {}
void MeetingBOControllerEvent::onLostDataHelperRightsNotification() {}

void MeetingBOControllerEvent::onBOStopCountDown(unsigned int nSeconds) {}
void MeetingBOControllerEvent::onHostInviteReturnToMainSession(
    const wchar_t *strName, IReturnToMainSessionHandler *handler) {}

void MeetingBOControllerEvent::onBroadcastBOVoiceStatus(bool bStart) {}

END_ZOOM_SDK_UE_NAMESPACE