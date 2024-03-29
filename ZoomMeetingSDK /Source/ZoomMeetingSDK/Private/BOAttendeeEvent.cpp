// Copyright : All rights reserved by Zoom Video Communications 2022-

#include "BOAttendeeEvent.h"

#include "SDKInterfaceWrap.h"
#include "SDKUtils.h"
#include "ZoomMeetingSDKEventHandler.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE
IBOAttendeeEvent *BOAttendeeEvent::Create() { return new BOAttendeeEvent(); }

void BOAttendeeEvent::onHelpRequestHandleResultReceived(
    ATTENDEE_REQUEST_FOR_HELP_RESULT eResult) {
  UE_LOG(ZoomMeetingSDKLog, Display, TEXT("onHelpRequestHanldeResultReceived"));
}

void BOAttendeeEvent::onHostJoinedThisBOMeeting() {
  UE_LOG(ZoomMeetingSDKLog, Display, TEXT("onHostJoinedThisBOMeeting"));

  UZoomMeetingSDKEventHandler::GetInstance()->OnHostJoinedThisBOMeeting();
}

void BOAttendeeEvent::onHostLeaveThisBOMeeting() {
  UE_LOG(ZoomMeetingSDKLog, Display, TEXT("onHostLeaveThisBOMeeting"));

  UZoomMeetingSDKEventHandler::GetInstance()->OnHostLeaveThisBOMeeting();
}
END_ZOOM_SDK_UE_NAMESPACE