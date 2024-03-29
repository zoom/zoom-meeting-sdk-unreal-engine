// Copyright : All rights reserved by Zoom Video Communications 2022-

#pragma once

#include "ZoomUESDKDef.h"
#include "meeting_service_components/meeting_breakout_rooms_interface_v2.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE
/**
 * Wrapper around IBOAssistant.
 * Check
 * https://marketplacefront.zoom.us/sdk/meeting/windows/class_i_b_o_assistant.html
 * for interface definitions.
 */
class ZOOMMEETINGSDK_API BOAssistant {
public:
  BOAssistant();
  ~BOAssistant();

  // Static function to create an object of BOAssistant.
  static BOAssistant *Create();

  // Implementation of the required methods.
  bool JoinBO(const wchar_t *strBOID);
  bool LeaveBO();

private:
  bool Init();

  IBOAssistant *bo_assistant;
};
END_ZOOM_SDK_UE_NAMESPACE