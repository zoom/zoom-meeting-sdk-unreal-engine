// Copyright : All rights reserved by Zoom Video Communications 2022-

#pragma once

#include "ZoomUESDKDef.h"
#include "meeting_service_components/meeting_breakout_rooms_interface_v2.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE
/**
 * Wraper around IBOAttendeeEvent.
 * Check
 * https://marketplacefront.zoom.us/sdk/meeting/windows/class_i_b_o_attendee_event.html
 * for callback definitions.
 */
class ZOOMMEETINGSDK_API BOAttendeeEvent : public IBOAttendeeEvent {
public:
  BOAttendeeEvent() = default;
  ~BOAttendeeEvent() = default;

  // Static function to create an object of IBOAttendeeEvent.
  static IBOAttendeeEvent *Create();

  // Implementation of the required events.
  void
  onHelpRequestHandleResultReceived(ATTENDEE_REQUEST_FOR_HELP_RESULT eResult);
  void onHostJoinedThisBOMeeting();
  void onHostLeaveThisBOMeeting();
};
END_ZOOM_SDK_UE_NAMESPACE