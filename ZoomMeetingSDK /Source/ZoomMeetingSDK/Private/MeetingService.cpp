// Copyright : All rights reserved by Zoom Video Communications 2022-

#include "MeetingService.h"

#include "SDKInterfaceWrap.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE

MeetingService *MeetingService::Create() {
  TUniquePtr<MeetingService> meeting_service(new MeetingService());
  if (meeting_service->Init()) {
    return meeting_service.Release();
  }

  return nullptr;
}

bool MeetingService::Init() {
  meeting_service = SDKInterfaceWrap::GetInst().GetMeetingService();
  if (meeting_service == nullptr) {
    return false;
  }
  return true;
}

SDKError MeetingService::Start(StartParam &startParam) {
  return meeting_service->Start(startParam);
}

SDKError MeetingService::Join(JoinParam &joinParam) {
  return meeting_service->Join(joinParam);
}

SDKError MeetingService::Leave(LeaveMeetingCmd leaveCmd) {
  return meeting_service->Leave(leaveCmd);
}

IMeetingBOController *MeetingService::GetMeetingBOController() {
  return meeting_service->GetMeetingBOController();
}

END_ZOOM_SDK_UE_NAMESPACE