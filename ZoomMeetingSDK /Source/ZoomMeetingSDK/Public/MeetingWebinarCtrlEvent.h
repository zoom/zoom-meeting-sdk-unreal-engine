// Copyright : All rights reserved by Zoom Video Communications 2022-

#pragma once

#include "ZoomUESDKDef.h"
#include "meeting_service_components/meeting_webinar_interface.h"
BEGIN_ZOOM_SDK_UE_NAMESPACE

/**
 * Wrapper around IMeetingWebinarCtrlEvent.
 * Check
 * https://marketplacefront.zoom.us/sdk/meeting/windows/class_i_meeting_webinar_ctrl_event.html
 * for interface definition.
 */
class ZOOMMEETINGSDK_API MeetingWebinarCtrlEvent
    : public IMeetingWebinarCtrlEvent {
  ~MeetingWebinarCtrlEvent() = default;
  MeetingWebinarCtrlEvent(const MeetingWebinarCtrlEvent &other) = delete;
  MeetingWebinarCtrlEvent(MeetingWebinarCtrlEvent &&other) noexcept = delete;
  MeetingWebinarCtrlEvent &
  operator=(const MeetingWebinarCtrlEvent &other) = delete;
  MeetingWebinarCtrlEvent &
  operator=(MeetingWebinarCtrlEvent &&other) noexcept = delete;

  // Static function to create an object of IMeetingWebinarCtrlEvent.
  static IMeetingWebinarCtrlEvent *Create();

  // Implementation of the required methods.
  void onAllowPanelistStartVideoNotification() override;
  void onDisallowPanelistStartVideoNotification() override;
  void onAllowAttendeeChatNotification() override;
  void onDisallowAttendeeChatNotification() override;

  // Other methods.
  void onPromptAttendee2PanelistResult(int result) override;
  void onDepromptPanelist2AttendeeResult(int result) override;
  void onSelfAllowTalkNotification() override;
  void onSelfDisallowTalkNotification() override;
  void onAttendeeAudioStatusNotification(unsigned int userid, bool can_talk,
                                         bool is_muted) override;
  void onAttendeePromoteConfirmResult(bool agree, unsigned int userid) override;

  void onAllowWebinarReactionStatusChanged(bool can_reaction);

  void onAllowAttendeeRaiseHandStatusChanged(bool can_riseHand);

  void onAllowAttendeeViewTheParticipantCountStatusChanged(
      bool can_viewParticipantCount);

private:
  MeetingWebinarCtrlEvent() = default;
};
END_ZOOM_SDK_UE_NAMESPACE