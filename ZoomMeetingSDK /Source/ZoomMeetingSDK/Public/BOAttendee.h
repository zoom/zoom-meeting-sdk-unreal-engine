// Copyright : All rights reserved by Zoom Video Communications 2022-

#pragma once

#include "ZoomUESDKDef.h"
#include "meeting_service_components/meeting_breakout_rooms_interface_v2.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE
/**
 * Wrapper around IBOAttendee.
 * Check
 * https://marketplacefront.zoom.us/sdk/meeting/windows/class_i_b_o_attendee.html
 * for interface definitions.
 */
class ZOOMMEETINGSDK_API BOAttendee {
public:
  BOAttendee();
  ~BOAttendee();

  // Static function to create an object of BOAttendee.
  static BOAttendee *Create();

  // Implementation of the required methods.
  const wchar_t *GetBoName();
  bool IsCanReturnMainSession();
  bool IsHostInThisBO();
  bool JoinBO();
  bool LeaveBO();

private:
  bool Init();

  IBOAttendee *bo_attendee;
};
END_ZOOM_SDK_UE_NAMESPACE