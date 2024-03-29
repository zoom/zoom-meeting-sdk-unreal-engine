// Copyright : All rights reserved by Zoom Video Communications 2022-

#include "MeetingSignInterpretationCtrl.h"

#include "SDKInterfaceWrap.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE

MeetingSignInterpretationCtrl *MeetingSignInterpretationCtrl::Create() {
  TUniquePtr<MeetingSignInterpretationCtrl> msic(
      new MeetingSignInterpretationCtrl());
  if (msic->Init()) {
    return msic.Release();
  }

  return nullptr;
}

bool MeetingSignInterpretationCtrl::Init() {
  sign_intrptr_ctrl =
      SDKInterfaceWrap::GetInst().GetMeetingSignInterpretationController();
  return (sign_intrptr_ctrl) ? true : false;
}

SDKError MeetingSignInterpretationCtrl::CanStartSignInterpretation() {
  return sign_intrptr_ctrl->CanStartSignInterpretation();
}

SDKError MeetingSignInterpretationCtrl::CanSignLanuageInterpreterTalk(
    unsigned int userID, bool &canTalk) {
  return sign_intrptr_ctrl->CanSignLanuageInterpreterTalk(userID, canTalk);
}

END_ZOOM_SDK_UE_NAMESPACE