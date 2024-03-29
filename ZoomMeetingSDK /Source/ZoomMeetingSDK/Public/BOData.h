// Copyright : All rights reserved by Zoom Video Communications 2022-

#pragma once

#include "ZoomUESDKDef.h"
#include "meeting_service_components/meeting_breakout_rooms_interface_v2.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE
/**
 * Wrapper around IBOData.
 * Check
 * https://marketplacefront.zoom.us/sdk/meeting/windows/class_i_b_o_data.html
 * for interface definitions.
 */
class ZOOMMEETINGSDK_API BOData {
public:
  BOData();
  ~BOData();

  // Static function to create an object of BOData.
  static BOData *Create();

  // Implementation of the required methods.
  IList<const wchar_t *> *GetUnassignedUserList();
  IList<const wchar_t *> *GetBOMeetingIDList();
  const wchar_t *GetBOUserName(const wchar_t *strUserID);
  bool IsBOUserMyself(const wchar_t *strUserID);
  IBOMeeting *GetBOMeetingByID(const wchar_t *strBOID);
  const wchar_t *GetCurrentBOName();

private:
  bool Init();

  IBOData *bo_data;
};
END_ZOOM_SDK_UE_NAMESPACE