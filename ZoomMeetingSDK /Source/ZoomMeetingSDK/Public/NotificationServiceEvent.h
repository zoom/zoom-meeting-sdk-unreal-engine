// Copyright : All rights reserved by Zoom Video Communications 2022-

#pragma once

#include "ZoomUESDKDef.h"
#include "notification_service_interface.h"
BEGIN_ZOOM_SDK_UE_NAMESPACE

/**
 * Wrapper around INotificationServiceEvent.
 * Check
 * https://marketplacefront.zoom.us/sdk/meeting/windows/class_i_notification_service_event.html
 * for interface definition.
 */
class ZOOMMEETINGSDK_API NotificationServiceEvent
    : public INotificationServiceEvent {
public:
  ~NotificationServiceEvent() = default;
  NotificationServiceEvent(const NotificationServiceEvent &other) = delete;
  NotificationServiceEvent(NotificationServiceEvent &&other) noexcept = delete;
  NotificationServiceEvent &
  operator=(const NotificationServiceEvent &other) = delete;
  NotificationServiceEvent &
  operator=(NotificationServiceEvent &&other) noexcept = delete;

  // Static function to create an object of INotificationServiceEvent.
  static INotificationServiceEvent *Create();

  // Implementation of the required methods.
  void
  onMeetingDeviceListChanged(IList<InMeetingDeviceInfo> *pDeviceList) override;
  void onTransferMeetingStatus(bool bSuccess) override;

private:
  NotificationServiceEvent() = default;
};
END_ZOOM_SDK_UE_NAMESPACE