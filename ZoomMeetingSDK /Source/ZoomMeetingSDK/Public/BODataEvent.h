// Copyright : All rights reserved by Zoom Video Communications 2022-

#pragma once

#include "ZoomUESDKDef.h"
#include "meeting_service_components/meeting_breakout_rooms_interface_v2.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE
/**
 * Wrapper around IBODataEvent.
 * Check
 * https://marketplacefront.zoom.us/sdk/meeting/windows/class_i_b_o_data_event.html
 * for interface definitions.
 */
class ZOOMMEETINGSDK_API BODataEvent : public IBODataEvent {
public:
  BODataEvent() = default;
  ~BODataEvent() = default;

  // Static function to create an object of IBODataEvent.
  static IBODataEvent *Create();

  // Implementation of the required events.
  void onBOInfoUpdated(const wchar_t *strBOID);
  void onUnAssignedUserUpdated();
  void onBOListInfoUpdated();
};
END_ZOOM_SDK_UE_NAMESPACE