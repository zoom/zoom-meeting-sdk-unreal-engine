// Copyright : All rights reserved by Zoom Video Communications 2022-

#include "MeetingWebinarController.h"

#include "SDKInterfaceWrap.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE

MeetingWebinarController *MeetingWebinarController::Create() {
  TUniquePtr<MeetingWebinarController> mwc(new MeetingWebinarController());
  if (mwc->Init()) {
    return mwc.Release();
  }

  return nullptr;
}

bool MeetingWebinarController::Init() {
  meeting_webinar_controller =
      SDKInterfaceWrap::GetInst().GetMeetingWebinarController();
  return (meeting_webinar_controller) ? true : false;
}

SDKError MeetingWebinarController::AllowAttendeeTalk(unsigned int userid) {
  return meeting_webinar_controller->AllowAttendeeTalk(userid);
}

SDKError MeetingWebinarController::AllowPanelistStartVideo() {
  return meeting_webinar_controller->AllowPanelistStartVideo();
}

SDKError
MeetingWebinarController::DepromptPanelist2Attendee(unsigned int userid) {
  return meeting_webinar_controller->DepromptPanelist2Attendee(userid);
}

SDKError MeetingWebinarController::DisallowAttendeeTalk(unsigned int userid) {
  return meeting_webinar_controller->DisallowAttendeeTalk(userid);
}

SDKError MeetingWebinarController::DisallowPanelistStartVideo() {
  return meeting_webinar_controller->DisallowPanelistStartVideo();
}

WebinarMeetingStatus *MeetingWebinarController::GetWebinarMeetingStatus() {
  return meeting_webinar_controller->GetWebinarMeetingStatus();
}

SDKError
MeetingWebinarController::PromptAttendee2Panelist(unsigned int userid) {
  return meeting_webinar_controller->PromptAttendee2Panelist(userid);
}

END_ZOOM_SDK_UE_NAMESPACE