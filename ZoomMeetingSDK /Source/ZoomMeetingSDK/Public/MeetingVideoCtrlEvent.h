// Copyright : All rights reserved by Zoom Video Communications 2022-

#pragma once

#include "ZoomMeetingSDKEventHandler.h"
#include "ZoomUESDKDef.h"
#include "meeting_service_components/meeting_video_interface.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE

/**
 * Wrapper around IMeetingVideoCtrlEvent.
 * Check
 * https://marketplacefront.zoom.us/sdk/meeting/windows/class_i_meeting_video_ctrl_event.html
 * for interface definition.
 */
class ZOOMMEETINGSDK_API MeetingVideoCtrlEvent : public IMeetingVideoCtrlEvent {
public:
  ~MeetingVideoCtrlEvent() = default;
  MeetingVideoCtrlEvent(const MeetingVideoCtrlEvent &other) = delete;
  MeetingVideoCtrlEvent(MeetingVideoCtrlEvent &&other) noexcept = delete;
  MeetingVideoCtrlEvent &operator=(const MeetingVideoCtrlEvent &other) = delete;
  MeetingVideoCtrlEvent &
  operator=(MeetingVideoCtrlEvent &&other) noexcept = delete;

  // Static function to create an object of IMeetingVideoCtrlEvent.
  static IMeetingVideoCtrlEvent *Create();

  // Implementation of the required methods.
  void onUserVideoStatusChange(unsigned int userId,
                               VideoStatus status) override;
  void onSpotlightedUserListChangeNotification(
      IList<unsigned int> *lstSpotlightedUserID) override;
  void onHostRequestStartVideo(IRequestStartVideoHandler *handler_) override;
  void onActiveSpeakerVideoUserChanged(unsigned int userid) override;
  void onActiveVideoUserChanged(unsigned int userid) override;
  void onHostVideoOrderUpdated(IList<unsigned int> *orderList) override;
  void onLocalVideoOrderUpdated(IList<unsigned int> *localOrderList) override;
  void onFollowHostVideoOrderChanged(bool bFollow) override;
  void onUserVideoQualityChanged(VideoConnectionQuality quality,
                                 unsigned int userid) override;

private:
  MeetingVideoCtrlEvent() = default;
};
END_ZOOM_SDK_UE_NAMESPACE