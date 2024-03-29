// Copyright : All rights reserved by Zoom Video Communications 2022-

#include "BOData.h"
#include "SDKInterfaceWrap.h"
#include "SDKUtils.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE

BOData *BOData::Create() {
  TUniquePtr<BOData> bo_data(new BOData());
  if (bo_data->Init()) {
    return bo_data.Release();
  }
  return nullptr;
}

BOData::BOData() : bo_data(nullptr) {}

BOData::~BOData() {}

bool BOData::Init() {
  ZOOM_SDK_NAMESPACE::IBOData *pBOData = SDKInterfaceWrap::GetInst()
                                             .GetMeetingService()
                                             ->GetMeetingBOController()
                                             ->GetBODataHelper();
  if (pBOData) {
    bo_data = pBOData;
    return true;
  }
  return false;
}

IList<const wchar_t *> *BOData::GetUnassignedUserList() {
  return bo_data->GetUnassginedUserList();
}

IList<const wchar_t *> *BOData::GetBOMeetingIDList() {
  return bo_data->GetBOMeetingIDList();
}

const wchar_t *BOData::GetBOUserName(const wchar_t *strUserID) {
  return bo_data->GetBOUserName(strUserID);
}

bool BOData::IsBOUserMyself(const wchar_t *strUserID) {
  return bo_data->IsBOUserMyself(strUserID);
}

IBOMeeting *BOData::GetBOMeetingByID(const wchar_t *strBOID) {
  return bo_data->GetBOMeetingByID(strBOID);
}

const wchar_t *BOData::GetCurrentBOName() {
  return bo_data->GetCurrentBoName();
}
END_ZOOM_SDK_UE_NAMESPACE
