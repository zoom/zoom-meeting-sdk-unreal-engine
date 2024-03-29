// Copyright : All rights reserved by Zoom Video Communications 2022-
#pragma once

#include "ZoomMeetingSDKEventHandler.h"
#include "ZoomUESDKDef.h"
#include "meeting_service_components/meeting_sharing_interface.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE

/**
 * Wrapper around IMeetingShareCtrlEvent.
 * Check
 * https://marketplacefront.zoom.us/sdk/meeting/windows/class_i_meeting_share_ctrl_event.html
 * for interface definition.
 */
class ZOOMMEETINGSDK_API MeetingShareCtrlEvent : public IMeetingShareCtrlEvent {
public:
  ~MeetingShareCtrlEvent() = default;
  MeetingShareCtrlEvent(const MeetingShareCtrlEvent &other) = delete;
  MeetingShareCtrlEvent(MeetingShareCtrlEvent &&other) noexcept = delete;
  MeetingShareCtrlEvent &operator=(const MeetingShareCtrlEvent &other) = delete;
  MeetingShareCtrlEvent &
  operator=(MeetingShareCtrlEvent &&other) noexcept = delete;

  // Static function to create an object of IMeetingShareCtrlEvent.
  static IMeetingShareCtrlEvent *Create();

  // Implementation of required methods
  void onSharingStatus(SharingStatus status, unsigned int userId) override;
  void onLockShareStatus(bool bLocked) override;
  void onShareContentNotification(ShareInfo &shareInfo) override;
  void onMultiShareSwitchToSingleShareNeedConfirm(
      IShareSwitchMultiToSingleConfirmHandler *handler_) override;
  void onShareSettingTypeChangedNotification(ShareSettingType type) override;
  void onSharedVideoEnded();

  // other methods
  void onVideoFileSharePlayError(ZoomSDKVideoFileSharePlayError error) override;

private:
  MeetingShareCtrlEvent() = default;
};
END_ZOOM_SDK_UE_NAMESPACE
