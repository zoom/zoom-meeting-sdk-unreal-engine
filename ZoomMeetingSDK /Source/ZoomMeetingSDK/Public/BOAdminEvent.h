// Copyright : All rights reserved by Zoom Video Communications 2022-

#pragma once

#include "ZoomUESDKDef.h"
#include "meeting_service_components/meeting_breakout_rooms_interface_v2.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE
/**
 * Wrapper around IBOAdminEvent.
 * Check
 * https://marketplacefront.zoom.us/sdk/meeting/windows/class_i_b_o_admin_event.html
 * for interface definitions.
 */
class ZOOMMEETINGSDK_API BOAdminEvent : public IBOAdminEvent {
public:
  BOAdminEvent() = default;
  ~BOAdminEvent() = default;

  // Static function to create an object of IBOAdminEvent.
  static IBOAdminEvent *Create();

  // Implementation of the required events.
  void onHelpRequestReceived(const wchar_t *strUserID);
  void onBOEndTimerUpdated(int remaining, bool isTimesUpNotice);
  void onStartBOError(BOControllerError errCode);
};
END_ZOOM_SDK_UE_NAMESPACE