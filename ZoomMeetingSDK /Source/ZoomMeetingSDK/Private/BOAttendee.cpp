// Copyright : All rights reserved by Zoom Video Communications 2022-

#include "BOAttendee.h"
#include "SDKInterfaceWrap.h"
#include "SDKUtils.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE

BOAttendee *BOAttendee::Create() {
  TUniquePtr<BOAttendee> bo_attendee(new BOAttendee());
  if (bo_attendee->Init()) {
    return bo_attendee.Release();
  }
  return nullptr;
}
BOAttendee::BOAttendee() : bo_attendee(nullptr) {}

BOAttendee::~BOAttendee() {}

bool BOAttendee::Init() {
  ZOOM_SDK_NAMESPACE::IBOAttendee *pBOAttendee = SDKInterfaceWrap::GetInst()
                                                     .GetMeetingService()
                                                     ->GetMeetingBOController()
                                                     ->GetBOAttedeeHelper();
  if (pBOAttendee) {
    bo_attendee = pBOAttendee;
    return true;
  }
  return false;
}

const wchar_t *BOAttendee::GetBoName() { return bo_attendee->GetBoName(); }

bool BOAttendee::IsCanReturnMainSession() {
  return bo_attendee->IsCanReturnMainSession();
}

bool BOAttendee::IsHostInThisBO() { return bo_attendee->IsHostInThisBO(); }

bool BOAttendee::JoinBO() { return bo_attendee->JoinBo(); }

bool BOAttendee::LeaveBO() { return bo_attendee->LeaveBo(); }
END_ZOOM_SDK_UE_NAMESPACE