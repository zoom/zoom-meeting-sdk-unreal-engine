// Copyright : All rights reserved by Zoom Video Communications 2022-

#pragma once

#include "ZoomUESDKDef.h"
#include "meeting_service_components/meeting_breakout_rooms_interface_v2.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE

/**
 * Wrapper around IBatchCreateBOHelper.
 * Check
 * https://marketplacefront.zoom.us/sdk/meeting/windows/class_i_batch_create_b_o_helper.html
 * for interface definition.
 */
class ZOOMMEETINGSDK_API BatchCreateBOHelper {
public:
  BatchCreateBOHelper();
  ~BatchCreateBOHelper();

  // Static function to create an object of BatchCreateBOHelper.
  static BatchCreateBOHelper *Create();

  // Implementation of the required methods.
  SDKError CreateBOTransactionBegin();
  bool AddNewBoToList(const wchar_t *strNewBOName);
  SDKError CreateBOTransactionCommit();

private:
  // Initializes IBatchCreateBOHelper.
  //
  // Returns true if initialization was successfull.
  bool Init();

  IBatchCreateBOHelper *batch_create_bo_helper;
};
END_ZOOM_SDK_UE_NAMESPACE