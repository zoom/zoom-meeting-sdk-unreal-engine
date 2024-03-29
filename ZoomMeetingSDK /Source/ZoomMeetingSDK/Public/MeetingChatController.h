// Copyright : All rights reserved by Zoom Video Communications 2022-

#pragma once

#include "ZoomUESDKDef.h"
#include "meeting_service_components/meeting_chat_interface.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE

/**
 * Wrapper around IMeetingChatController
 * Check
 * https://marketplacefront.zoom.us/sdk/meeting/windows/class_i_meeting_chat_controller.html
 * for interface definition.
 */
class ZOOMMEETINGSDK_API MeetingChatController {
public:
  ~MeetingChatController() = default;
  MeetingChatController(const MeetingChatController &other) = delete;
  MeetingChatController(MeetingChatController &&other) noexcept = delete;
  MeetingChatController &operator=(const MeetingChatController &other) = delete;
  MeetingChatController &
  operator=(MeetingChatController &&other) noexcept = delete;

  // Static function to create an object of IMeetingChatController.
  static MeetingChatController *Create();

  // Implementation of the required methods.
  const ChatStatus *GetChatStatus();
  SDKError SendChatMsgTo(wchar_t *content, unsigned int receiver,
                         SDKChatMessageType type);
  bool IsMeetingChatLegalNoticeAvailable();
  const wchar_t *GetChatLegalNoticesPrompt();
  const wchar_t *GetChatLegalNoticesExplained();
  bool IsShareMeetingChatLegalNoticeAvailable();
  const wchar_t *GetShareMeetingChatStartedLegalNoticeContent();
  const wchar_t *GetShareMeetingChatStoppedLegalNoticeContent();
  bool IsChatMessageCanBeDeleted(const wchar_t *msgID);
  SDKError DeleteChatMessage(const wchar_t *msgID);
  IList<const wchar_t *> *GetAllChatMessageID();
  IChatMsgInfo *GetChatMessageById(const wchar_t *msgID);

private:
  MeetingChatController() = default;

  // Initializes MeetingChatController.
  //
  // Returns true if initialization succeeds.
  bool Init();

  IMeetingChatController *meeting_chat_controller;
};
END_ZOOM_SDK_UE_NAMESPACE
