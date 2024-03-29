// Copyright : All rights reserved by Zoom Video Communications 2022-

#include "NotificationServiceEvent.h"

#include "ZoomMeetingSDKEventHandler.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE
INotificationServiceEvent *NotificationServiceEvent::Create() {
  return new NotificationServiceEvent;
}

void NotificationServiceEvent::onMeetingDeviceListChanged(
    IList<InMeetingDeviceInfo> *pDeviceList) {
  for (int i = 0; i < pDeviceList->GetCount(); ++i) {
    InMeetingDeviceInfo device_info = pDeviceList->GetItem(i);
    GetZMEventHandler()->onMeetingDeviceListChanged(
        device_info.nIndex, device_info.deviceName, device_info.meetingTopic,
        device_info.meetingNumber);
  }
}
void NotificationServiceEvent::onTransferMeetingStatus(bool bSuccess) {}
END_ZOOM_SDK_UE_NAMESPACE