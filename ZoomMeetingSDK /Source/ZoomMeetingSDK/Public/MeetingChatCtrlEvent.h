// Copyright : All rights reserved by Zoom Video Communications 2022-

#pragma once

#include "ZoomMeetingSDKBPLibrary.h"
#include "ZoomUESDKDef.h"
#include "meeting_service_components/meeting_chat_interface.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE
/**
 * Wrapper around IMeetingChatCtrlEvent
 * Check
 * https://marketplacefront.zoom.us/sdk/meeting/windows/class_i_meeting_chat_ctrl_event.html
 * for interface definitions.
 */
class ZOOMMEETINGSDK_API MeetingChatCtrlEvent : public IMeetingChatCtrlEvent {
public:
  MeetingChatCtrlEvent() = default;
  ~MeetingChatCtrlEvent() = default;

  // Static function to create an object of IMeetingChatCtrlEvent.
  static IMeetingChatCtrlEvent *Create();

  // Implementation of the required events.
  void onChatMsgDeleteNotification(const wchar_t *msgID,
                                   SDKChatMessageDeleteType deleteBy) override;
  void onChatMsgNotifcation(IChatMsgInfo *chatMsg,
                            const wchar_t *content = NULL) override;
  void onChatStatusChangedNotification(ChatStatus *status) override;
  void onShareMeetingChatStatusChanged(bool isStart) override;

private:
  void onChatMsgNotification(IChatMsgInfo *chatMsg,
                             const wchar_t *content = NULL);
};
END_ZOOM_SDK_UE_NAMESPACE