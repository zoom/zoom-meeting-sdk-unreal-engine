// Copyright : All rights reserved by Zoom Video Communications 2022-

#include "MeetingWebinarCtrlEvent.h"

#include "ZoomMeetingSDKEventHandler.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE
IMeetingWebinarCtrlEvent *MeetingWebinarCtrlEvent::Create() {
  return new MeetingWebinarCtrlEvent();
}

void MeetingWebinarCtrlEvent::onAllowPanelistStartVideoNotification() {
  GetZMEventHandler()->onAllowPanelistStartVideoNotification();
}
void MeetingWebinarCtrlEvent::onDisallowPanelistStartVideoNotification() {
  GetZMEventHandler()->onDisallowPanelistStartVideoNotification();
}
void MeetingWebinarCtrlEvent::onAllowAttendeeChatNotification() {
  GetZMEventHandler()->onAllowAttendeeChatNotification();
}
void MeetingWebinarCtrlEvent::onDisallowAttendeeChatNotification() {
  GetZMEventHandler()->onDisallowAttendeeChatNotification();
}

void MeetingWebinarCtrlEvent::onPromptAttendee2PanelistResult(int result) {}
void MeetingWebinarCtrlEvent::onDepromptPanelist2AttendeeResult(int result) {}
void MeetingWebinarCtrlEvent::onSelfAllowTalkNotification() {}
void MeetingWebinarCtrlEvent::onSelfDisallowTalkNotification() {}
void MeetingWebinarCtrlEvent::onAttendeeAudioStatusNotification(
    unsigned int userid, bool can_talk, bool is_muted) {}
void MeetingWebinarCtrlEvent::onAttendeePromoteConfirmResult(
    bool agree, unsigned int userid) {}
void MeetingWebinarCtrlEvent::onAllowWebinarReactionStatusChanged(
    bool can_reaction){};
void MeetingWebinarCtrlEvent::onAllowAttendeeRaiseHandStatusChanged(
    bool can_riseHand){};
void MeetingWebinarCtrlEvent::
    onAllowAttendeeViewTheParticipantCountStatusChanged(
        bool can_viewParticipantCount){};

END_ZOOM_SDK_UE_NAMESPACE
