// Copyright : All rights reserved by Zoom Video Communications 2022-

#include "MeetingVideoController.h"

#include "SDKInterfaceWrap.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE

MeetingVideoController *MeetingVideoController::Create() {
  TUniquePtr<MeetingVideoController> mvc(new MeetingVideoController());
  if (mvc->Init()) {
    return mvc.Release();
  }

  return nullptr;
}

bool MeetingVideoController::Init() {
  meeting_video_controller =
      SDKInterfaceWrap::GetInst().GetMeetingVideoController();
  return (meeting_video_controller) ? true : false;
}

SDKError MeetingVideoController::AskAttendeeToStartVideo(unsigned int userid) {
  return meeting_video_controller->AskAttendeeToStartVideo(userid);
}

SDKError
MeetingVideoController::CanAskAttendeeToStartVideo(unsigned int userid) {
  return meeting_video_controller->CanAskAttendeeToStartVideo(userid);
}

IList<unsigned int> *MeetingVideoController::GetSpotlightedUserList() {
  return meeting_video_controller->GetSpotlightedUserList();
}

SDKError MeetingVideoController::MuteVideo() {
  return meeting_video_controller->MuteVideo();
}

SDKError MeetingVideoController::SpotlightVideo(unsigned int userid) {
  return meeting_video_controller->SpotlightVideo(userid);
}

SDKError MeetingVideoController::StopAttendeeVideo(unsigned int userid) {
  return meeting_video_controller->StopAttendeeVideo(userid);
}

SDKError MeetingVideoController::UnSpotlightAllVideos() {
  return meeting_video_controller->UnSpotlightAllVideos();
}

SDKError MeetingVideoController::UnSpotlightVideo(unsigned int userid) {
  return meeting_video_controller->UnSpotlightVideo(userid);
}

SDKError MeetingVideoController::CanStopAttendeeVideo(unsigned int userid) {
  return meeting_video_controller->CanStopAttendeeVideo(userid);
}

SDKError MeetingVideoController::CanPinToFirstView(unsigned int userid,
                                                   PinResult &result) {
  return meeting_video_controller->CanPinToFirstView(userid, result);
}

SDKError MeetingVideoController::CanPinToSecondView(unsigned int userid,
                                                    PinResult &result) {
  return meeting_video_controller->CanPinToSecondView(userid, result);
}

SDKError MeetingVideoController::CanSpotlight(unsigned int userid,
                                              SpotlightResult &result) {
  return meeting_video_controller->CanSpotlight(userid, result);
}

SDKError MeetingVideoController::CanUnSpotlight(unsigned int userid,
                                                SpotlightResult &result) {
  return meeting_video_controller->CanUnSpotlight(userid, result);
}

SDKError MeetingVideoController::UnmuteVideo() {
  return meeting_video_controller->UnmuteVideo();
}

END_ZOOM_SDK_UE_NAMESPACE