// Copyright : All rights reserved by Zoom Video Communications 2022-

#pragma once

#include "ZoomUESDKDef.h"
#include "meeting_service_components/meeting_breakout_rooms_interface_v2.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE
/**
 * Wrapper around IMeetingBOController
 * Check
 * https://marketplacefront.zoom.us/sdk/meeting/windows/class_i_meeting_b_o_controller.html
 * for interface definitions.
 */
class ZOOMMEETINGSDK_API MeetingBOController {
public:
  ~MeetingBOController() = default;
  MeetingBOController(const MeetingBOController &other) = delete;
  MeetingBOController(MeetingBOController &&other) noexcept = delete;
  MeetingBOController &operator=(const MeetingBOController &other) = delete;
  MeetingBOController &operator=(MeetingBOController &&other) noexcept = delete;

  // Static function to create an object of IMeetingBOController.
  static MeetingBOController *Create();

  // Implementations of required methods.
  IBOCreator *GetBOCreatorHelper();
  IBOAdmin *GetBOAdminHelper();
  IBOAssistant *GetBOAssistantHelper();
  IBOAttendee *GetBOAttedeeHelper();
  IBOData *GetBODataHelper();
  bool IsBOStarted();
  bool IsBOEnabled();
  bool IsInBOMeeting();
  BO_STATUS GetBOStatus();

private:
  MeetingBOController();

  // Initializes MeetingBOController.
  //
  // Returns true if initialization was successful.
  bool Init();

  IMeetingBOController *meeting_bo_controller = nullptr;
};
END_ZOOM_SDK_UE_NAMESPACE