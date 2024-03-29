// Copyright : All rights reserved by Zoom Video Communications 2022-

#pragma once

#include "ZoomUESDKDef.h"
#include "meeting_service_components/meeting_configuration_interface.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE

/**
 * Wrapper around IMeetingUIElemConfiguration.
 * Check
 * https://marketplacefront.zoom.us/sdk/meeting/windows/class_i_meeting_u_i_elem_configuration.html
 * for interface definition.
 */
class ZOOMMEETINGSDK_API MeetingUIElemConfiguration {
public:
  ~MeetingUIElemConfiguration() = default;
  MeetingUIElemConfiguration(const MeetingUIElemConfiguration &other) = delete;
  MeetingUIElemConfiguration(MeetingUIElemConfiguration &&other) noexcept =
      delete;
  MeetingUIElemConfiguration &
  operator=(const MeetingUIElemConfiguration &other) = delete;
  MeetingUIElemConfiguration &
  operator=(MeetingUIElemConfiguration &&other) noexcept = delete;

  // Static function to create an object of IMeetingUIElemConfiguration.
  static MeetingUIElemConfiguration *Create();

  // Implementation of the required methods.
  void EnableClaimHostFeature(bool bEnable);

private:
  MeetingUIElemConfiguration() = default;

  bool Init();

  IMeetingUIElemConfiguration *meeting_ui_configuration;
};

END_ZOOM_SDK_UE_NAMESPACE