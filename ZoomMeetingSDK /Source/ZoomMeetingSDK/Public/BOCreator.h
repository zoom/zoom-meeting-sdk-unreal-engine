// Copyright : All rights reserved by Zoom Video Communications 2022-

#pragma once

#include "ZoomUESDKDef.h"
#include "meeting_service_components/meeting_breakout_rooms_interface_v2.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE
/**
 * Wrapper around IBOCreator.
 * Check
 * https://marketplacefront.zoom.us/sdk/meeting/windows/class_i_b_o_creator.html
 * for interface definitions.
 */
class ZOOMMEETINGSDK_API BOCreator {
public:
  BOCreator();
  ~BOCreator();

  // Static function to create an object of BOCreator.
  static BOCreator *Create();

  // Implementation of the required methods.
  const wchar_t *CreateBO(const wchar_t *strBOName);
  bool UpdateBOName(const wchar_t *strBOID, const wchar_t *strNewBOName);
  bool RemoveBO(const wchar_t *strBOID);
  bool AssignUserToBO(const wchar_t *strUserID, const wchar_t *strBOID);
  bool RemoveUserFromBO(const wchar_t *strUserID, const wchar_t *strBOID);
  bool SetBOOption(const BOOption &option);
  bool GetBOOption(BOOption &option);

private:
  bool Init();

  IBOCreator *bo_creator;
};
END_ZOOM_SDK_UE_NAMESPACE