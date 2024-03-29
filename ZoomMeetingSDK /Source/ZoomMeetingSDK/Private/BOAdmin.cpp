// Copyright : All rights reserved by Zoom Video Communications 2022-

#include "BOAdmin.h"
#include "SDKInterfaceWrap.h"
#include "SDKUtils.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE
BOAdmin *BOAdmin::Create() {
  TUniquePtr<BOAdmin> bo_admin(new BOAdmin());
  if (bo_admin->Init()) {
    return bo_admin.Release();
  }
  return nullptr;
}
BOAdmin::BOAdmin() : bo_admin(nullptr) {}

BOAdmin::~BOAdmin() {}

bool BOAdmin::Init() {
  ZOOM_SDK_NAMESPACE::IBOAdmin *pBOAdmin = SDKInterfaceWrap::GetInst()
                                               .GetMeetingService()
                                               ->GetMeetingBOController()
                                               ->GetBOAdminHelper();
  if (pBOAdmin) {
    bo_admin = pBOAdmin;
    return true;
  }
  return false;
}

bool BOAdmin::CanStartBO() { return bo_admin->CanStartBO(); }

bool BOAdmin::AssignNewUserToRunningBO(const wchar_t *strUserID,
                                       const wchar_t *strBOID) {
  return bo_admin->AssignNewUserToRunningBO(strUserID, strBOID);
}

bool BOAdmin::BroadcastMessage(const wchar_t *strMsg) {
  return bo_admin->BroadcastMessage(strMsg);
}

bool BOAdmin::InviteBOUserReturnToMainSession(const wchar_t *strUserID) {
  return bo_admin->InviteBOUserReturnToMainSession(strUserID);
}

bool BOAdmin::JoinBOByUserRequest(const wchar_t *strUserID) {
  return bo_admin->JoinBOByUserRequest(strUserID);
}

bool BOAdmin::StartBO() { return bo_admin->StartBO(); }

bool BOAdmin::StopBO() { return bo_admin->StopBO(); }
END_ZOOM_SDK_UE_NAMESPACE