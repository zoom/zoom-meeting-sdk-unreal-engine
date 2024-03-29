// Copyright : All rights reserved by Zoom Video Communications 2022-

#pragma once

#include "ZoomUESDKDef.h"
#include "meeting_service_components/meeting_sign_interpretation_interface.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE
/**
 * Wrapper around IMeetingSignInterpretationController
 * Check
 * https://marketplacefront.zoom.us/sdk/meeting/windows/class_i_meeting_sign_interpretation_controller.html
 * for interface definitions.
 */
class ZOOMMEETINGSDK_API MeetingSignInterpretationCtrl {
public:
  ~MeetingSignInterpretationCtrl() = default;
  MeetingSignInterpretationCtrl(const MeetingSignInterpretationCtrl &other) =
      delete;
  MeetingSignInterpretationCtrl(
      MeetingSignInterpretationCtrl &&other) noexcept = delete;
  MeetingSignInterpretationCtrl &
  operator=(const MeetingSignInterpretationCtrl &other) = delete;
  MeetingSignInterpretationCtrl &
  operator=(MeetingSignInterpretationCtrl &&other) noexcept = delete;

  // Static function to create an object of MeetingSignInterpretationCtrl.
  static MeetingSignInterpretationCtrl *Create();

  // Implementations of required methods.
  SDKError CanStartSignInterpretation();
  SDKError CanSignLanuageInterpreterTalk(unsigned int userID, bool &canTalk);

private:
  MeetingSignInterpretationCtrl() = default;

  // Initializes IMeetingSignInterpretationController.
  //
  // Returns true if initialization was successful.
  bool Init();

  IMeetingSignInterpretationController *sign_intrptr_ctrl = nullptr;
};
END_ZOOM_SDK_UE_NAMESPACE