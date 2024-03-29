// Copyright : All rights reserved by Zoom Video Communications 2022-

#pragma once

#include "ZoomUESDKDef.h"
#include "meeting_service_components/meeting_breakout_rooms_interface_v2.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE
/**
 * Wrapper around IBOCreatorEvent.
 * Check
 * https://marketplacefront.zoom.us/sdk/meeting/windows/class_i_b_o_creator_event.html
 * for interface definitions.
 */
class ZOOMMEETINGSDK_API BOCreatorEvent : public IBOCreatorEvent {
public:
  BOCreatorEvent() = default;
  ~BOCreatorEvent() = default;

  // Static function to create an object of IBOCreatorEvent.
  static IBOCreatorEvent *Create();

  // Implementation of the required events.
  void onBOCreateSuccess(const wchar_t *strBOID) override;
  void OnWebPreAssignBODataDownloadStatusChanged(
      PreAssignBODataStatus status) override;

  // Unimplemented functions.
  void OnBOOptionChanged(const BOOption &newOption) override;
};
END_ZOOM_SDK_UE_NAMESPACE