// Copyright : All rights reserved by Zoom Video Communications 2022-

#include "MeetingInfo.h"

#include "SDKInterfaceWrap.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE

MeetingInfo *MeetingInfo::Create() {
  TUniquePtr<MeetingInfo> mi(new MeetingInfo());
  if (mi->Init()) {
    return mi.Release();
  }

  return nullptr;
}

MeetingInfo::MeetingInfo() : meeting_info(nullptr) {}

bool MeetingInfo::Init() {
  meeting_info = SDKInterfaceWrap::GetInst().GetMeetingInfo();
  return (meeting_info) ? true : false;
}

const wchar_t *MeetingInfo::GetJoinMeetingUrl() {
  return meeting_info->GetJoinMeetingUrl();
}
const wchar_t *MeetingInfo::GetMeetingID() {
  return meeting_info->GetMeetingID();
}

END_ZOOM_SDK_UE_NAMESPACE