// Copyright : All rights reserved by Zoom Video Communications 2022-

#include "MeetingServiceEvent.h"

#include "SDKInterfaceWrap.h"
#include "SDKUtils.h"
#include "ZoomMeetingSDKEventHandler.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE

IMeetingServiceEvent *MeetingServiceEvent::Create() {
  return new MeetingServiceEvent();
}

MeetingServiceEvent::MeetingServiceEvent() {}
MeetingServiceEvent::~MeetingServiceEvent() {}

void MeetingServiceEvent::OnMeetingStatusInMeeting() {
  SDKInterfaceWrap::GetInst().InitOnJoinMeeting();

  ZOOM_SDK_NAMESPACE::IMeetingService *pMeetingService =
      SDKInterfaceWrap::GetInst().GetMeetingService();
  if (!pMeetingService) {
    return;
  }
  ZOOM_SDK_NAMESPACE::IMeetingParticipantsController *pUserCtrl =
      SDKInterfaceWrap::GetInst().GetMeetingParticipantsController();
  if (!pUserCtrl) {
    return;
  }

  // Update the user manager with the current users in the meeting.
  ZOOM_SDK_NAMESPACE::IList<unsigned int> *lstUser =
      pUserCtrl->GetParticipantsList();
  if (!lstUser) {
    return;
  }

  auto *um = SDKInterfaceWrap::GetInst().GetUserManager();
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("UZoomMeetingSDKBPLibrary::onMeetingStatusChanged: "
              "Number of users: %d"),
         lstUser->GetCount());
  for (int i = 0; i < lstUser->GetCount(); i++) {
    int userId = lstUser->GetItem(i);
    // if (0 == userId)
    //     continue;
    um->AddNewUser(userId);
  }
}

// Required Callbacks

void MeetingServiceEvent::onMeetingParameterNotification(
    const MeetingParameter *meeting_param) {
  UE_LOG(ZoomMeetingSDKLog, Display, TEXT("onMeetingParameterNotification"));
  UZoomMeetingSDKEventHandler::GetInstance()->onMeetingParameterNotification(
      meeting_param);
}

// Other Callbacks
void MeetingServiceEvent::onMeetingStatusChanged(MeetingStatus status,
                                                 int iResult) {
  UE_LOG(ZoomMeetingSDKLog, Display,
         TEXT("onMeetingStatusChanged: status: %s, iResult: %d"),
         *MeetingStatusToString(status), iResult);

  switch (status) {
  case ZOOM_SDK_NAMESPACE::MEETING_STATUS_INMEETING:
    OnMeetingStatusInMeeting();
    break;

  // If the meeting ends or fails, we clean up and exit.
  case ZOOM_SDK_NAMESPACE::MEETING_STATUS_ENDED:
  // fall through
  case ZOOM_SDK_NAMESPACE::MEETING_STATUS_FAILED:
    SDKInterfaceWrap::GetInst().CleanupAllMeetingServices();
    break;
  }
  UZoomMeetingSDKEventHandler::GetInstance()->onMeetingStatusChanged(
      *MeetingStatusToString(status), iResult);
}

void MeetingServiceEvent::onMeetingStatisticsWarningNotification(
    StatisticsWarningType type) {
  UE_LOG(ZoomMeetingSDKLog, Display,
         TEXT("onMeetingStatisticsWarningNotification"));
  // Needs implementation
}

void MeetingServiceEvent::onSuspendParticipantsActivities() {}
void MeetingServiceEvent::onAICompanionActiveChangeNotice(bool bActive) {}

END_ZOOM_SDK_UE_NAMESPACE