// Copyright : All rights reserved by Zoom Video Communications 2022-

#include "EmojiReactionController.h"

#include "SDKInterfaceWrap.h"
#include "SDKUtils.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE
EmojiReactionController *EmojiReactionController::Create() {
  TUniquePtr<EmojiReactionController> emoji_controller(
      new EmojiReactionController());
  if (emoji_controller->Init()) {
    return emoji_controller.Release();
  }
  return nullptr;
}

EmojiReactionController::EmojiReactionController()
    : emoji_controller(nullptr) {}
EmojiReactionController::~EmojiReactionController() {}

bool EmojiReactionController::Init() {
  emoji_controller = SDKInterfaceWrap::GetInst().GetEmojiReactionController();
  if (emoji_controller == nullptr) {
    return false;
  }
  return true;
}

bool EmojiReactionController::IsEmojiReactionEnabled() {
  return emoji_controller->IsEmojiReactionEnabled();
}

SDKError EmojiReactionController::SendEmojiReaction(SDKEmojiReactionType type) {
  UE_LOG(ZoomMeetingSDKLog, Display, TEXT("SendEmojiReaction: %s"),
         *SDKEmojiReactionTypeToString(type));
  return emoji_controller->SendEmojiReaction(type);
}

SDKError EmojiReactionController::SendEmojiFeedback(SDKEmojiFeedbackType type) {
  UE_LOG(ZoomMeetingSDKLog, Display, TEXT("SendEmojiFeedback: %s"),
         *SDKEmojiFeedbackTypeToString(type));
  return emoji_controller->SendEmojiFeedback(type);
}

SDKError EmojiReactionController::CancelEmojiFeedback() {
  return emoji_controller->CancelEmojiFeedback();
}

END_ZOOM_SDK_UE_NAMESPACE