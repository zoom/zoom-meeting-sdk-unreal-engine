// Copyright : All rights reserved by Zoom Video Communications 2022-

#include "MeetingShareCtrlEvent.h"
#include "ZoomMeetingSDKEventHandler.h"
#include "SDKUtils.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE

IMeetingShareCtrlEvent *MeetingShareCtrlEvent::Create() {
  static MeetingShareCtrlEvent s_msce;
  return &s_msce;
}

void MeetingShareCtrlEvent::onSharingStatus(SharingStatus status,
                                            unsigned int userId) {
        UZoomMeetingSDKEventHandler::GetInstance()->onSharingStatus(
            SharingStatusToString(status), userId);
}

void MeetingShareCtrlEvent::onLockShareStatus(bool bLocked) {}

void MeetingShareCtrlEvent::onShareContentNotification(ShareInfo &shareInfo) {}

void MeetingShareCtrlEvent::onMultiShareSwitchToSingleShareNeedConfirm(
    IShareSwitchMultiToSingleConfirmHandler *handler_) {}

void MeetingShareCtrlEvent::onShareSettingTypeChangedNotification(
    ShareSettingType type) {}

void MeetingShareCtrlEvent::onSharedVideoEnded() {}

void MeetingShareCtrlEvent::onVideoFileSharePlayError(
    ZoomSDKVideoFileSharePlayError error) {}

END_ZOOM_SDK_UE_NAMESPACE
