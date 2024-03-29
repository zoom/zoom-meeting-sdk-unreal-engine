// Copyright : All rights reserved by Zoom Video Communications 2022-

#include "ClosedCaptionController.h"

#include "SDKInterfaceWrap.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE
ClosedCaptionController *ClosedCaptionController::Create() {
  TUniquePtr<ClosedCaptionController> cc_controller(
      new ClosedCaptionController());
  if (cc_controller->Init()) {
    return cc_controller.Release();
  }

  return nullptr;
}

ClosedCaptionController::ClosedCaptionController() : cc_controller(nullptr) {}
ClosedCaptionController::~ClosedCaptionController() {}

bool ClosedCaptionController::Init() {
  cc_controller = SDKInterfaceWrap::GetInst().GetClosedCaptionController();
  if (cc_controller == nullptr) {
    return false;
  }
  return true;
}

bool ClosedCaptionController::CanAssignOthersToSendCC() {
  return cc_controller->CanAssignOthersToSendCC();
}

bool ClosedCaptionController::CanBeAssignedToSendCC(unsigned int userid) {
  return cc_controller->CanBeAssignedToSendCC(userid);
}

bool ClosedCaptionController::CanStartLiveTranscription() {
  return cc_controller->CanStartLiveTranscription();
}

bool ClosedCaptionController::CanSendClosedCaption() {
  return cc_controller->CanSendClosedCaption();
}

END_ZOOM_SDK_UE_NAMESPACE