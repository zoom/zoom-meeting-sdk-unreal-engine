// Copyright : All rights reserved by Zoom Video Communications 2022-

#pragma once

#include "ZoomUESDKDef.h"
#include "meeting_service_components/meeting_breakout_rooms_interface_v2.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE
/**
 * Wrapper around IBOAdmin.
 * Check
 * https://marketplacefront.zoom.us/sdk/meeting/windows/class_i_b_o_admin.html
 * for interface definitions.
 */
class ZOOMMEETINGSDK_API BOAdmin {
public:
  BOAdmin();
  ~BOAdmin();

  // Static function to create an object of BOAdmin.
  static BOAdmin *Create();

  // Implementation of the required methods.
  bool CanStartBO();
  bool AssignNewUserToRunningBO(const wchar_t *strUserID,
                                const wchar_t *strBOID);
  bool BroadcastMessage(const wchar_t *strMsg);
  bool InviteBOUserReturnToMainSession(const wchar_t *strUserID);
  bool JoinBOByUserRequest(const wchar_t *strUserID);
  bool StartBO();
  bool StopBO();

private:
  bool Init();

  IBOAdmin *bo_admin;
};
END_ZOOM_SDK_UE_NAMESPACE