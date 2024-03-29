// Copyright : All rights reserved by Zoom Video Communications 2022-

#include "BOCreator.h"
#include "SDKInterfaceWrap.h"
#include "SDKUtils.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE
BOCreator *BOCreator::Create() {
  TUniquePtr<BOCreator> bo_creator(new BOCreator());
  if (bo_creator->Init()) {
    return bo_creator.Release();
  }
  return nullptr;
}
BOCreator::BOCreator() : bo_creator(nullptr) {}

BOCreator::~BOCreator() {}

bool BOCreator::Init() {
  ZOOM_SDK_NAMESPACE::IBOCreator *pBOCreator = SDKInterfaceWrap::GetInst()
                                                   .GetMeetingService()
                                                   ->GetMeetingBOController()
                                                   ->GetBOCreatorHelper();
  if (pBOCreator) {
    bo_creator = pBOCreator;
    return true;
  }
  return false;
}

const wchar_t *BOCreator::CreateBO(const wchar_t *strBOName) {
  return bo_creator->CreateBO(strBOName);
}

bool BOCreator::UpdateBOName(const wchar_t *strBOID,
                             const wchar_t *strNewBOName) {
  return bo_creator->UpdateBOName(strBOID, strNewBOName);
}

bool BOCreator::RemoveBO(const wchar_t *strBOID) {
  return bo_creator->RemoveBO(strBOID);
}

bool BOCreator::AssignUserToBO(const wchar_t *strUserID,
                               const wchar_t *strBOID) {
  return bo_creator->AssignUserToBO(strUserID, strBOID);
}

bool BOCreator::RemoveUserFromBO(const wchar_t *strUserID,
                                 const wchar_t *strBOID) {
  return bo_creator->RemoveUserFromBO(strUserID, strBOID);
}

bool BOCreator::SetBOOption(const BOOption &option) {
  return bo_creator->SetBOOption(option);
}

bool BOCreator::GetBOOption(BOOption &option) {
  return bo_creator->GetBOOption(option);
}

END_ZOOM_SDK_UE_NAMESPACE