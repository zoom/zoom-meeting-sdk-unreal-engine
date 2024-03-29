// Copyright : All rights reserved by Zoom Video Communications 2022-

#include "MeetingWaitingRoomEvent.h"

#include "SDKInterfaceWrap.h"
#include "ZoomMeetingSDKEventHandler.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE
IMeetingWaitingRoomEvent *MeetingWaitingRoomEvent::Create() {
  return new MeetingWaitingRoomEvent;
}

// Required methods.
void MeetingWaitingRoomEvent::onWaitingRoomUserJoin(unsigned int userID) {
  GetZMEventHandler()->onWatingRoomUserJoin(userID);
}
void MeetingWaitingRoomEvent::onWaitingRoomUserLeft(unsigned int userID) {
  GetZMEventHandler()->onWatingRoomUserLeft(userID);
}

// Other functions to be overridden.
void MeetingWaitingRoomEvent::onWaitingRoomPresetAudioStatusChanged(
    bool bAudioCanTurnOn) {}
void MeetingWaitingRoomEvent::onWaitingRoomPresetVideoStatusChanged(
    bool bVideoCanTurnOn) {}
void MeetingWaitingRoomEvent::onCustomWaitingRoomDataUpdated(
    CustomWaitingRoomData &bData, IWaitingRoomDataDownloadHandler *bHandler) {}
void MeetingWaitingRoomEvent::onWaitingRoomUserNameChanged(
    unsigned int userID, const zchar_t *userName) {}
void MeetingWaitingRoomEvent::onWaitingRoomEntranceEnabled(bool bIsEnabled) {}
END_ZOOM_SDK_UE_NAMESPACE