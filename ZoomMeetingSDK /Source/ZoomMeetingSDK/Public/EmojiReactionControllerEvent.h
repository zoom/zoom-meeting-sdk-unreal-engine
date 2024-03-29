// Copyright : All rights reserved by Zoom Video Communications 2022-

#pragma once

#include "ZoomMeetingSDKEventHandler.h"
#include "ZoomUESDKDef.h"
#include "meeting_service_components/meeting_emoji_reaction_interface.h"
BEGIN_ZOOM_SDK_UE_NAMESPACE
/**
 * Wrapper around IEmojiReactionControllerEvent.
 * Check
 * https://marketplacefront.zoom.us/sdk/meeting/windows/class_i_emoji_reaction_controller_event.html
 * for interface definition.
 */
class ZOOMMEETINGSDK_API EmojiReactionControllerEvent
    : public IEmojiReactionControllerEvent {
public:
  ~EmojiReactionControllerEvent() = default;
  EmojiReactionControllerEvent(const EmojiReactionControllerEvent &other) =
      delete;
  EmojiReactionControllerEvent(EmojiReactionControllerEvent &&other) noexcept =
      delete;
  EmojiReactionControllerEvent &
  operator=(const EmojiReactionControllerEvent &other) = delete;
  EmojiReactionControllerEvent &
  operator=(EmojiReactionControllerEvent &&other) noexcept = delete;

  // Static function to create an object of IEmojiReactionControllerEvent.
  static IEmojiReactionControllerEvent *Create();

  void OnEmojiReactionReceived(unsigned int sender_id,
                               SDKEmojiReactionType type) override;

  void OnEmojiReactionReceivedInWebinar(SDKEmojiReactionType type) override;

  void OnEmojiFeedbackReceived(unsigned int sender_id,
                               SDKEmojiFeedbackType type) override;
  void OnEmojiFeedbackCanceled(unsigned int sender_id) override;

  // Need to revisit once we have the updated SDK headers and libraries.
  /*
  void OnEmojiFeedbackReceived(unsigned int sender_id,
                               SDKEmojiFeedbackType type) override;
  void OnEmojiFeedbackCanceled(unsigned int sender_id) override;
  */
private:
  EmojiReactionControllerEvent() = default;
};

END_ZOOM_SDK_UE_NAMESPACE