// Copyright : All rights reserved by Zoom Video Communications 2022-

#include "MeetingChatCtrlEvent.h"
#include "SDKInterfaceWrap.h"
#include "SDKUtils.h"
#include "ZoomMeetingSDKEventHandler.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE
IMeetingChatCtrlEvent *MeetingChatCtrlEvent::Create() {
  return new MeetingChatCtrlEvent();
}

void MeetingChatCtrlEvent::onChatMsgDeleteNotification(
    const wchar_t *msgID, SDKChatMessageDeleteType deleteBy) {
  UE_LOG(ZoomMeetingSDKLog, Display, TEXT("onChatMsgDeleteNotification"));
  UZoomMeetingSDKEventHandler::GetInstance()->onChatMsgDeleteNotification(
      msgID, SDKChatMessageDeleteTypeToString(deleteBy));
}

void MeetingChatCtrlEvent::onChatMsgNotifcation(IChatMsgInfo *chatMsg,
                                                const wchar_t *content) {
  UE_LOG(ZoomMeetingSDKLog, Display, TEXT("onChatMsgNotifcation"));
  onChatMsgNotification(chatMsg, content);
}
void MeetingChatCtrlEvent::onChatMsgNotification(IChatMsgInfo *chatMsg,
                                                 const wchar_t *content) {
  UE_LOG(ZoomMeetingSDKLog, Display, TEXT("onChatMsgNotification"));
  UZoomMeetingSDKEventHandler::GetInstance()->onChatMsgNotification(chatMsg,
                                                                    content);
}

void MeetingChatCtrlEvent::onChatStatusChangedNotification(ChatStatus *status) {
  UE_LOG(ZoomMeetingSDKLog, Display, TEXT("onChatStautsChangedNotification"));
  if (status->is_webinar_meeting == false) {
    auto &nms = status->ut.normal_meeting_status;
    UZoomMeetingSDKEventHandler::GetInstance()
        ->onChatMsgNotificationNormalMeetingChatStatus(
            nms.can_chat, nms.can_chat_to_all, nms.can_chat_to_individual,
            nms.is_only_can_chat_to_host);
    return;
  }
  if (status->is_webinar_attendee) {
    auto &wacs = status->ut.webinar_attendee_status;
    UZoomMeetingSDKEventHandler::GetInstance()
        ->onChatMsgNotificationWebinarAttendeeChatStatus(
            wacs.can_chat, wacs.can_chat_to_all_panellist,
            wacs.can_chat_to_all_panellist_and_attendee);
    return;
  }

  auto &wos = status->ut.webinar_other_status;
  UZoomMeetingSDKEventHandler::GetInstance()
      ->onChatMsgNotificationWebinarOtherUserRoleChatStatus(
          wos.can_chat_to_all_panellist,
          wos.can_chat_to_all_panellist_and_attendee,
          wos.can_chat_to_individual);
}
void MeetingChatCtrlEvent::onShareMeetingChatStatusChanged(bool isStart) {
  UE_LOG(ZoomMeetingSDKLog, Display, TEXT("onShareMeetingChatStatusChanged"));
  UZoomMeetingSDKEventHandler::GetInstance()->onShareMeetingChatStatusChanged(
      isStart);
}
END_ZOOM_SDK_UE_NAMESPACE