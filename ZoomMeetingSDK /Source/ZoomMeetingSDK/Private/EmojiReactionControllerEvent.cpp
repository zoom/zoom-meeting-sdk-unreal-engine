// Copyright : All rights reserved by Zoom Video Communications 2022-

#include "EmojiReactionControllerEvent.h"
#include "SDKUtils.h"
#include "ZoomMeetingSDKEventHandler.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE
IEmojiReactionControllerEvent *EmojiReactionControllerEvent::Create() {
  return new EmojiReactionControllerEvent();
}

void EmojiReactionControllerEvent::OnEmojiReactionReceived(
    unsigned int sender_id, SDKEmojiReactionType type) {
  UE_LOG(ZoomMeetingSDKLog, Display, TEXT("OnEmojiReactionReceived"));

  UZoomMeetingSDKEventHandler::GetInstance()->onEmojiReactionReceived(
      sender_id, SDKEmojiReactionTypeToString(type));
}

void EmojiReactionControllerEvent::OnEmojiReactionReceivedInWebinar(
    SDKEmojiReactionType type) {
  UE_LOG(ZoomMeetingSDKLog, Display, TEXT("OnEmojiReactionReceivedInWebinar"));

  UZoomMeetingSDKEventHandler::GetInstance()->onEmojiReactionReceivedInWebinar(
      SDKEmojiReactionTypeToString(type));
}

void EmojiReactionControllerEvent::OnEmojiFeedbackReceived(
    unsigned int sender_id, SDKEmojiFeedbackType type) {
  UE_LOG(ZoomMeetingSDKLog, Display, TEXT("OnEmojiFeedbackReceived"));
  UZoomMeetingSDKEventHandler::GetInstance()->OnEmojiFeedbackReceived(
      sender_id, SDKEmojiFeedbackTypeToString(type));
}

void EmojiReactionControllerEvent::OnEmojiFeedbackCanceled(
    unsigned int sender_id) {
  UE_LOG(ZoomMeetingSDKLog, Display, TEXT("OnEmojiFeedbackCanceled"));
  UZoomMeetingSDKEventHandler::GetInstance()->OnEmojiFeedbackCanceled(
      sender_id);
}

END_ZOOM_SDK_UE_NAMESPACE