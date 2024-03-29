// Copyright : All rights reserved by Zoom Video Communications 2022-

#pragma once

#include "ZoomMeetingSDKBPLibrary.h"
#include "ZoomUESDKDef.h"
#include "meeting_service_components/meeting_recording_interface.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE
/**
 * Wrapper around IMeetingRecordingCtrlEvent
 * Check
 * https://marketplacefront.zoom.us/sdk/meeting/windows/class_i_meeting_recording_ctrl_event.html.html
 * for interface definitions.
 */
class ZOOMMEETINGSDK_API MeetingRecordingCtrlEvent
    : public IMeetingRecordingCtrlEvent {
public:
  ~MeetingRecordingCtrlEvent();
  MeetingRecordingCtrlEvent(const MeetingRecordingCtrlEvent &other) = delete;
  MeetingRecordingCtrlEvent(MeetingRecordingCtrlEvent &&other) noexcept =
      delete;
  MeetingRecordingCtrlEvent &
  operator=(const MeetingRecordingCtrlEvent &other) = delete;
  MeetingRecordingCtrlEvent &
  operator=(MeetingRecordingCtrlEvent &&other) noexcept = delete;

  void onRecordingStatus(RecordingStatus status) override;

  void onCloudRecordingStatus(RecordingStatus status) override;

  void onRecordPrivilegeChanged(bool bCanRec) override;

  void onLocalRecordingPrivilegeRequestStatus(
      RequestLocalRecordingStatus status) override;

  void onLocalRecordingPrivilegeRequested(
      IRequestLocalRecordingPrivilegeHandler *handler) override;
  void onRecording2MP4Done(bool bsuccess, int iResult,
                           const zchar_t *szPath) override;

  void onRecording2MP4Processing(int iPercentage) override;

  void onCustomizedLocalRecordingSourceNotification(
      ICustomizedLocalRecordingLayoutHelper *layout_helper) override;
  void onCloudRecordingStorageFull(time_t gracePeriodDate) override;

  static IMeetingRecordingCtrlEvent *Create();

private:
  MeetingRecordingCtrlEvent();
};
END_ZOOM_SDK_UE_NAMESPACE