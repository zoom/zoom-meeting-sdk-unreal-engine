// Copyright : All rights reserved by Zoom Video Communications 2022-

#include "MeetingChatController.h"

#include "SDKInterfaceWrap.h"
#include "SDKUtils.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE
MeetingChatController *MeetingChatController::Create() {
  TUniquePtr<MeetingChatController> mcc(new MeetingChatController());
  if (mcc->Init()) {
    return mcc.Release();
  }
  return nullptr;
}

bool MeetingChatController::Init() {
  meeting_chat_controller =
      SDKInterfaceWrap::GetInst().GetMeetingChatController();
  return (meeting_chat_controller) ? true : false;
}

const ChatStatus *MeetingChatController::GetChatStatus() {
  return meeting_chat_controller->GetChatStatus();
}

SDKError MeetingChatController::SendChatMsgTo(wchar_t *content,
                                              unsigned int receiver,
                                              SDKChatMessageType type) {
  return meeting_chat_controller->SendChatMsgTo(content, receiver, type);
}

bool MeetingChatController::IsMeetingChatLegalNoticeAvailable() {
  return meeting_chat_controller->IsMeetingChatLegalNoticeAvailable();
}

const wchar_t *MeetingChatController::GetChatLegalNoticesPrompt() {
  return meeting_chat_controller->getChatLegalNoticesPrompt();
}

const wchar_t *MeetingChatController::GetChatLegalNoticesExplained() {
  return meeting_chat_controller->getChatLegalNoticesExplained();
}

bool MeetingChatController::IsShareMeetingChatLegalNoticeAvailable() {
  return meeting_chat_controller->IsShareMeetingChatLegalNoticeAvailable();
}

const wchar_t *
MeetingChatController::GetShareMeetingChatStartedLegalNoticeContent() {
  return meeting_chat_controller
      ->GetShareMeetingChatStartedLegalNoticeContent();
}

const wchar_t *
MeetingChatController::GetShareMeetingChatStoppedLegalNoticeContent() {
  return meeting_chat_controller
      ->GetShareMeetingChatStoppedLegalNoticeContent();
}

bool MeetingChatController::IsChatMessageCanBeDeleted(const wchar_t *msgID) {
  return meeting_chat_controller->IsChatMessageCanBeDeleted(msgID);
}

SDKError MeetingChatController::DeleteChatMessage(const wchar_t *msgID) {
  return meeting_chat_controller->DeleteChatMessage(msgID);
}

IList<const wchar_t *> *MeetingChatController::GetAllChatMessageID() {
  return meeting_chat_controller->GetAllChatMessageID();
}

IChatMsgInfo *MeetingChatController::GetChatMessageById(const wchar_t *msgID) {
  return meeting_chat_controller->GetChatMessageById(msgID);
}

END_ZOOM_SDK_UE_NAMESPACE
