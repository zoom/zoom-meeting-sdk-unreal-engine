// Copyright : All rights reserved by Zoom Video Communications 2022-

#pragma once

#include "SDKUtils.h"
#include "ZoomUESDKDef.h"
#include "meeting_service_interface.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE

/**
 * A wrapper around IMeetingServiceEvent.
 * Check
 * https://marketplacefront.zoom.us/sdk/meeting/windows/class_i_meeting_service_event.html
 * for interface definitions.
 */
class ZOOMMEETINGSDK_API MeetingServiceEvent : public IMeetingServiceEvent {
public:
  // Destructor.
  ~MeetingServiceEvent();

  // Static function to create an object of IMeetingServiceEvent.
  static IMeetingServiceEvent *Create();

  // Implementations of required Callbacks.
  void onMeetingParameterNotification(
      const MeetingParameter *meeting_param) override;

  // Other callbacks which don't require any implementation as of now.
  void onMeetingStatusChanged(MeetingStatus status, int iResult = 0) override;
  void
  onMeetingStatisticsWarningNotification(StatisticsWarningType type) override;
  void onSuspendParticipantsActivities();
  void onAICompanionActiveChangeNotice(bool bActive);

private:
  // Constructor.
  MeetingServiceEvent();

  // Called when the meeting status is changed to MEETING_STATUS_INMEETING;
  void OnMeetingStatusInMeeting();
};
END_ZOOM_SDK_UE_NAMESPACE