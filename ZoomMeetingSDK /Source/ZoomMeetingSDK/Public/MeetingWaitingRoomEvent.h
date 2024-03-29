// Copyright : All rights reserved by Zoom Video Communications 2022-

#pragma once

#include "ZoomUESDKDef.h"
#include "meeting_service_components/meeting_waiting_room_interface.h"
BEGIN_ZOOM_SDK_UE_NAMESPACE

/**
 * Wrapper around IMeetingWaitingRoomEvent.
 * Check
 * https://marketplacefront.zoom.us/sdk/meeting/windows/class_i_meeting_waiting_room_event.html
 * for interface definition.
 */
class ZOOMMEETINGSDK_API MeetingWaitingRoomEvent
    : public IMeetingWaitingRoomEvent {
public:
  ~MeetingWaitingRoomEvent() = default;
  MeetingWaitingRoomEvent(const MeetingWaitingRoomEvent &other) = delete;
  MeetingWaitingRoomEvent(MeetingWaitingRoomEvent &&other) noexcept = delete;
  MeetingWaitingRoomEvent &
  operator=(const MeetingWaitingRoomEvent &other) = delete;
  MeetingWaitingRoomEvent &
  operator=(MeetingWaitingRoomEvent &&other) noexcept = delete;

  // Static function to create an object of IMeetingWaitingRoomEvent.
  static IMeetingWaitingRoomEvent *Create();

  // Implementation of the required methods.
  void onWaitingRoomUserJoin(unsigned int userID) override;
  void onWaitingRoomUserLeft(unsigned int userID) override;
  void onWaitingRoomPresetAudioStatusChanged(bool bAudioCanTurnOn) override;
  void onWaitingRoomPresetVideoStatusChanged(bool bVideoCanTurnOn) override;
  void onCustomWaitingRoomDataUpdated(
      CustomWaitingRoomData &bData,
      IWaitingRoomDataDownloadHandler *bHandler) override;
  void onWaitingRoomUserNameChanged(unsigned int userID,
                                    const zchar_t *userName) override;

  // Unimplemented methods.
  void onWaitingRoomEntranceEnabled(bool bIsEnabled) override;

private:
  MeetingWaitingRoomEvent() = default;
};
END_ZOOM_SDK_UE_NAMESPACE