// Copyright : All rights reserved by Zoom Video Communications 2022-

#include "MeetingBOController.h"

#include "SDKInterfaceWrap.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE
MeetingBOController *MeetingBOController::Create() {
  TUniquePtr<MeetingBOController> mbc(new MeetingBOController());
  if (mbc->Init()) {
    return mbc.Release();
  }

  return nullptr;
}

bool MeetingBOController::Init() {
  meeting_bo_controller = SDKInterfaceWrap::GetInst().GetMeetingBOController();
  return (meeting_bo_controller) ? true : false;
}

MeetingBOController::MeetingBOController() {
  meeting_bo_controller->GetBOCreatorHelper();
}

IBOCreator *MeetingBOController::GetBOCreatorHelper() {
  return meeting_bo_controller->GetBOCreatorHelper();
}

IBOAssistant *MeetingBOController::GetBOAssistantHelper() {
  return meeting_bo_controller->GetBOAssistantHelper();
}
IBOAttendee *MeetingBOController::GetBOAttedeeHelper() {
  return meeting_bo_controller->GetBOAttedeeHelper();
}
IBOData *MeetingBOController::GetBODataHelper() {
  return meeting_bo_controller->GetBODataHelper();
}
bool MeetingBOController::IsBOStarted() {
  return meeting_bo_controller->IsBOStarted();
}
bool MeetingBOController::IsBOEnabled() {
  return meeting_bo_controller->IsBOEnabled();
}
bool MeetingBOController::IsInBOMeeting() {
  return meeting_bo_controller->IsInBOMeeting();
}
BO_STATUS MeetingBOController::GetBOStatus() {
  return meeting_bo_controller->GetBOStatus();
}
END_ZOOM_SDK_UE_NAMESPACE