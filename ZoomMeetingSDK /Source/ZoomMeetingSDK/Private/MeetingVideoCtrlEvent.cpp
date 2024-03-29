// Copyright : All rights reserved by Zoom Video Communications 2022-

#include "MeetingVideoCtrlEvent.h"
#include "SDKUtils.h"
#include "ZoomMeetingSDKEventHandler.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE

IMeetingVideoCtrlEvent *MeetingVideoCtrlEvent::Create() {
  return new MeetingVideoCtrlEvent();
}

void MeetingVideoCtrlEvent::onUserVideoStatusChange(unsigned int userId,
                                                    VideoStatus status) {
  UZoomMeetingSDKEventHandler::GetInstance()->onUserVideoStatusChanged(
      userId, VideoStatusToString(status));
}

void MeetingVideoCtrlEvent::onSpotlightedUserListChangeNotification(
    IList<unsigned int> *lstSpotlightedUserID) {}
void MeetingVideoCtrlEvent::onHostRequestStartVideo(
    IRequestStartVideoHandler *handler_) {}
void MeetingVideoCtrlEvent::onActiveSpeakerVideoUserChanged(
    unsigned int userid) {}
void MeetingVideoCtrlEvent::onActiveVideoUserChanged(unsigned int userid) {}
void MeetingVideoCtrlEvent::onHostVideoOrderUpdated(
    IList<unsigned int> *orderList) {}
void MeetingVideoCtrlEvent::onLocalVideoOrderUpdated(
    IList<unsigned int> *localOrderList) {}
void MeetingVideoCtrlEvent::onFollowHostVideoOrderChanged(bool bFollow) {}
void MeetingVideoCtrlEvent::onUserVideoQualityChanged(
    VideoConnectionQuality quality, unsigned int userid) {}

END_ZOOM_SDK_UE_NAMESPACE