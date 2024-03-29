// Copyright : All rights reserved by Zoom Video Communications 2022-

#pragma once

#include "ZoomUESDKDef.h"
#include "meeting_service_components/meeting_closedcaption_interface.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE

/**
 * Wrapper around IClosedCaptionController.
 * Check
 * https://marketplacefront.zoom.us/sdk/meeting/windows/class_i_closed_caption_controller.html
 * for interface definition.
 */
class ZOOMMEETINGSDK_API ClosedCaptionController {
public:
  ~ClosedCaptionController();
  ClosedCaptionController(const ClosedCaptionController &other) = delete;
  ClosedCaptionController(ClosedCaptionController &&other) noexcept = delete;
  ClosedCaptionController &
  operator=(const ClosedCaptionController &other) = delete;
  ClosedCaptionController &
  operator=(ClosedCaptionController &&other) noexcept = delete;

  // Static function to create an object of ClosedCaptionController.
  static ClosedCaptionController *Create();

  // Implementation of the required methods.
  bool CanAssignOthersToSendCC();
  bool CanBeAssignedToSendCC(unsigned int userid);
  bool CanStartLiveTranscription();
  bool CanSendClosedCaption();

private:
  ClosedCaptionController();

  // Initializes ClosedCaptionController.
  //
  // Returns true if initialization was successful.
  bool Init();

  IClosedCaptionController *cc_controller = nullptr;
};
END_ZOOM_SDK_UE_NAMESPACE