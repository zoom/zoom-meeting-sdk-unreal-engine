// Copyright : All rights reserved by Zoom Video Communications 2022-

#pragma once

#include "ZoomUESDKDef.h"
#include "meeting_service_components/meeting_emoji_reaction_interface.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE
/**
 * Wrapper around IEmojiReactionController.
 * Check
 * https://marketplacefront.zoom.us/sdk/meeting/windows/class_i_emoji_reaction_controller.html
 * for interface definition.
 */
class ZOOMMEETINGSDK_API EmojiReactionController {
public:
  EmojiReactionController();
  ~EmojiReactionController();

  // Static function to create an object of EmojiReactionController.
  static EmojiReactionController *Create();

  // Implementation of the required methods.
  bool IsEmojiReactionEnabled();
  SDKError SendEmojiReaction(SDKEmojiReactionType type);
  SDKError SendEmojiFeedback(SDKEmojiFeedbackType type);
  SDKError CancelEmojiFeedback();

private:
  // Initialize EmojiReactionController.
  //
  // Returns TRUE if initialization was successful.
  bool Init();

  IEmojiReactionController *emoji_controller;
};
END_ZOOM_SDK_UE_NAMESPACE