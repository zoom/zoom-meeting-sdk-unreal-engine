// Copyright : All rights reserved by Zoom Video Communications 2022-

#include "MeetingRecordingCtrlEvent.h"

#include "SDKInterfaceWrap.h"
#include "ZoomMeetingSDKEventHandler.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE
MeetingRecordingCtrlEvent::MeetingRecordingCtrlEvent() {}

MeetingRecordingCtrlEvent::~MeetingRecordingCtrlEvent() {}

IMeetingRecordingCtrlEvent *MeetingRecordingCtrlEvent::Create() {
  return new MeetingRecordingCtrlEvent();
}

void MeetingRecordingCtrlEvent::onRecordPrivilegeChanged(bool bCanRec) {
  GetZMEventHandler()->onRecordPrivilegeChanged(bCanRec);
}

void MeetingRecordingCtrlEvent::onLocalRecordingPrivilegeRequestStatus(
    RequestLocalRecordingStatus status) {
  GetZMEventHandler()->onLocalRecordingPrivilegeRequestStatus(
      RequestLocalRecordingStatusToString(status));
}

// Not implemented

void MeetingRecordingCtrlEvent::onRecordingStatus(RecordingStatus status) {}

void MeetingRecordingCtrlEvent::onCloudRecordingStatus(RecordingStatus status) {

}

void MeetingRecordingCtrlEvent::onLocalRecordingPrivilegeRequested(
    IRequestLocalRecordingPrivilegeHandler *handler) {}

void MeetingRecordingCtrlEvent::onRecording2MP4Done(bool bsuccess, int iResult,
                                                    const zchar_t *szPath) {}

void MeetingRecordingCtrlEvent::onRecording2MP4Processing(int iPercentage) {}

void MeetingRecordingCtrlEvent::onCustomizedLocalRecordingSourceNotification(
    ICustomizedLocalRecordingLayoutHelper *layout_helper) {}

void MeetingRecordingCtrlEvent::onCloudRecordingStorageFull(
    time_t gracePeriodDate) {}
END_ZOOM_SDK_UE_NAMESPACE