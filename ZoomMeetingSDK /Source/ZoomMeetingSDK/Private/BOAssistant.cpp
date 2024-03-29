// Copyright : All rights reserved by Zoom Video Communications 2022-

#include "BOAssistant.h"
#include "SDKInterfaceWrap.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE
BOAssistant *BOAssistant::Create() {
  TUniquePtr<BOAssistant> bo_assistant(new BOAssistant());
  if (bo_assistant->Init()) {
    return bo_assistant.Release();
  }
  return nullptr;
}
BOAssistant::BOAssistant() : bo_assistant(nullptr) {}

BOAssistant::~BOAssistant() {}

bool BOAssistant::Init() {
  ZOOM_SDK_NAMESPACE::IBOAssistant *pBOAssistant =
      SDKInterfaceWrap::GetInst()
          .GetMeetingService()
          ->GetMeetingBOController()
          ->GetBOAssistantHelper();
  if (pBOAssistant) {
    bo_assistant = pBOAssistant;
    return true;
  }
  return false;
}

bool BOAssistant::JoinBO(const wchar_t *strBOID) {
  return bo_assistant->JoinBO(strBOID);
}

bool BOAssistant::LeaveBO() { return bo_assistant->LeaveBO(); }
END_ZOOM_SDK_UE_NAMESPACE