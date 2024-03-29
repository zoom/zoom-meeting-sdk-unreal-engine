// Copyright : All rights reserved by Zoom Video Communications 2022-

#pragma once

#include <utility>

#include "AuthServiceEvent.h"
#include "DebugInfo.h"
#include "EmojiReactionController.h"
#include "EmojiReactionControllerEvent.h"
#include "MeetingQAControllerEvent.h"
#include "MeetingRecordingCtrlEvent.h"
#include "MeetingServiceEvent.h"
#include "MeetingLiveStreamController.h"
#include "UserManager.h"
#include "VideoSettingContextEvent.h"
#include "ZoomSDKVideoSource.h"
#include "MeetingShareCtrlEvent.h"
#include "ZoomUESDKDef.h"
#include "customized_ui/customized_immersive.h"
#include "meeting_service_components\meeting_qa_ctrl_interface.h"
#include "meeting_service_interface.h"
#include "setting_service_interface.h"
#include "zoom_sdk.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE

DECLARE_LOG_CATEGORY_EXTERN(ZoomMeetingSDKLog, Log, All);
DECLARE_LOG_CATEGORY_EXTERN(ZoomMeetingSDKLogDebugInfo, Log, All);

/**
 * A wrapper around the Zoom SDK interface to initialize the SDK
 * and various other interfaces.
 */
class ZOOMMEETINGSDK_API SDKInterfaceWrap {
public:
  // Returns a singleton instance of SDKInterfaceWrap.
  static SDKInterfaceWrap &GetInst();

  // Destructor.
  ~SDKInterfaceWrap();

  // Initializes Zoom SDK.
  //
  // Returns SDKERR_SUCCESS if initialization was successful.
  // Note: This function is idempotent if the initialization succeeds.
  SDKError SDKInit(InitParam &param);

  // Returns true if the object has been initialized successfully (i.e., if Zoom
  // SDK was initialized successfully).
  bool isInitialized() const { return _initialized; }

  // Returns a pointer to an IMeetingServiceEvent object.
  //
  // Note: SDK needs to be initialized before calling this function.
  ZOOM_SDK_NAMESPACE::IMeetingServiceEvent *GetMeetingServiceEvent();

  // Returns a pointer to an IMeetingService object.
  //
  // Note: SDK needs to be initialized before calling this function.
  ZOOM_SDK_NAMESPACE::IMeetingService *GetMeetingService();

  // Returns a pointer to an IMeetingInfo object.
  //
  // Note: SDK needs to be initialized before calling this function.
  ZOOM_SDK_NAMESPACE::IMeetingInfo *GetMeetingInfo();

  // Returns a pointer to an IAuthServiceEvent object.
  //
  // Note: SDK needs to be initialized before calling this function.
  ZOOM_SDK_NAMESPACE::IMeetingAudioController *GetMeetingAudioController();

  // Returns a pointer to an IAnnotationController object.
  //
  // Note: SDK needs to be initialized before calling this function.
  ZOOM_SDK_NAMESPACE::IAnnotationController *GetAnnotationController();

  // Returns a pointer to an IEmojiReactionController object.
  //
  // Note: SDK needs to be initialized before calling this function.
  ZOOM_SDK_NAMESPACE::IEmojiReactionController *GetEmojiReactionController();

  // Returns a pointer to an IMeetingChatControler object.
  //
  // Note: SDK needs to be initialized before calling this function.
  ZOOM_SDK_NAMESPACE::IMeetingChatController *GetMeetingChatController();

  // Returns a pointer to an IMeetingClosedCaptionControler object.
  //
  // Note: SDK needs to be initialized before calling this function.
  ZOOM_SDK_NAMESPACE::IClosedCaptionController *GetClosedCaptionController();

  // Returns a pointer to an IMeetingRemoteControler object.
  //
  // Note: SDK needs to be initialized before calling this function.
  ZOOM_SDK_NAMESPACE::IMeetingRemoteController *GetMeetingRemoteController();

  // Returns a pointer to an IMeetingQAController object.
  //
  // Note: SDK needs to be initialized before calling this function.
  ZOOM_SDK_NAMESPACE::IMeetingQAController *GetMeetingQAController();

  // Returns a pointer to an IMeetingShareControler object.
  //
  // Note: SDK needs to be initialized before calling this function.
  ZOOM_SDK_NAMESPACE::IMeetingShareController *GetMeetingShareController();

  // Returns a pointer to an IMeetingUIController object.
  //
  // Note: SDK needs to be initialized before calling this function.
  ZOOM_SDK_NAMESPACE::IMeetingUIController *GetUIController();

  // Returns a pointer to an IMeetingVideoController object.
  //
  // Note: SDK needs to be initialized before calling this function.
  ZOOM_SDK_NAMESPACE::IMeetingVideoController *GetMeetingVideoController();

  // Returns a pointer to an IMeetingWaitingRoomController object.
  //
  // Note: SDK needs to be initialized before calling this function.
  ZOOM_SDK_NAMESPACE::IMeetingWaitingRoomController *
  GetMeetingWaitingRoomController();

  // Returns a pointer to an IMeetingWebinarController object.
  //
  // Note: SDK needs to be initialized before calling this function.
  ZOOM_SDK_NAMESPACE::IMeetingWebinarController *GetMeetingWebinarController();

  // Returns a pointer to an ISettingService object.
  //
  // Note: SDK needs to be initialized before calling this function.
  ZOOM_SDK_NAMESPACE::ISettingService *GetSettingService();

  // Returns a pointer to an IVideoSettingContext object.
  //
  // Note: SDK needs to be initialized before calling this function.
  ZOOM_SDK_NAMESPACE::IVideoSettingContext *GetVideoSettings();

  // Returns a pointer to an IShareSettingContext object.
  //
  // Note: SDK needs to be initialized before calling this function.
  ZOOM_SDK_NAMESPACE::IShareSettingContext *GetShareSettings();

  // Returns a pointer to an IMeetingParticipantsController object.
  //
  // Note: SDK needs to be initialized before calling this function.
  ZOOM_SDK_NAMESPACE::IMeetingParticipantsController *
  GetMeetingParticipantsController();

  // Returns a pointer to an IMeetingRecordingController object.
  //
  // Note: SDK needs to be initialized before calling this function.
  ZOOM_SDK_NAMESPACE::IMeetingRecordingController *
  GetMeetingRecordingController();

  // Returns a pointer to the IAuthService object.
  //
  // Note: SDK needs to be initialized before calling this function.
  ZOOM_SDK_NAMESPACE::IAuthService *GetAuthService();

  // Returns a pointer to the IMeetingSignInterpretationController object.
  //
  // Note: SDK needs to be initialized before calling this function.
  ZOOM_SDK_NAMESPACE::IMeetingSignInterpretationController *
  GetMeetingSignInterpretationController();

  // Returns a pointer to the IMeetingBOController object.
  //
  // Note: SDK needs to be initialized before calling this function.
  ZOOM_SDK_NAMESPACE::IMeetingBOController *GetMeetingBOController();

  // Returns a pointer to the IMeetingConfiguration object.
  //
  // Note: SDK needs to be initialized before calling this function.
  ZOOM_SDK_NAMESPACE::IMeetingConfiguration *GetMeetingConfiguration();

  // Returns a pointer to the ICameraController object.
  //
  // Note: SDK needs to be initialized before calling this function.
  ZOOM_SDK_NAMESPACE::ICameraController *GetCameraController();

  // Returns a pointer to the IClosedCaptionController object.
  //
  // Note: SDK needs to be initialized before calling this function.
  ZOOM_SDK_NAMESPACE::IClosedCaptionController *
  GetMeetingClosedCaptionController();

  // Returns a pointer to the IMeetingLiveStreamController object.
  //
  // Note: SDK needs to be initialized before calling this function.
  ZOOM_SDK_NAMESPACE::IMeetingLiveStreamController *
  GetMeetingLiveStreamController();

  // Returns a pointer to the ICustomImmersiveController.
  //
  // Note: SDK needs to be initialized before calling this function.
  ZOOM_SDK_NAMESPACE::ICustomImmersiveController *
  GetMeetingImmersiveControler();

  // Returns a pointer to the User manager.
  //
  // Note: SDK needs to be initialized for the User manager to be valid.
  UserManager *GetUserManager();

  // Enables video source (texture) that needs to be sent to the Zoom servers.
  //
  // Returns SDKERR_SUCCESS if video source was enabled.
  SDKError
  EnableVideoSourceUsingRenderTarget(UTextureRenderTarget2D *texture_to_send);

  // Sends a single video frame.
  //
  // Returns true if send was successful.
  bool SendVideoFrame();

  // Disables video source (texture).
  //
  // Returns SDKERR_SUCCESS if video source was disabled.
  SDKError DisableVideoSource();

  // Initializes all the meeting services when we join a meeting. Some services
  // need to register for events and hence we initialize them as soon as we join
  // a meeting.
  void InitOnJoinMeeting();

  // Cleans up all the meeting services (say upon leaving a meeting).
  void CleanupAllMeetingServices();

  // Cleans up all the initialized objects and the SDK.
  SDKError Cleanup();

  // Constructor.
  SDKInterfaceWrap();

private:
  // Destroys the various interfaces created.
  void DestroyMeetingService();
  void DestroyAuthService();
  void DestroyUserManager();
  void DestroyVideoSettingContext();
  void DestroyMeetingShareController();
  void DestroyMeetingQAController();
  void DestroyMeetingBOController();
  void DestroyMeetingConfiguration();
  void DestroyMeetingVideoController();
  void DestroyEmojiReactionController();
  void DestroyMeetingChatController();
  void DestroyMeetingRecordingController();

  // Indicates if the object is initialized (i.e., if Zoom SDK is initialized
  // successfully).
  bool _initialized = false;

  // Pointer to IMeetingService.
  IMeetingService *_meeting_service = nullptr;

  // Pointer to IMeetingServiceEvent.
  TUniquePtr<IMeetingServiceEvent> _meeting_service_event;

  // Pointer to IAuthService.
  IAuthService *_auth_service = nullptr;

  // Pointer to IAuthServiceEvent.
  TUniquePtr<IAuthServiceEvent> _auth_service_event;

  // Pointer to IVideoSettingContext.
  IVideoSettingContext *_video_setting_context = nullptr;

  // Pointer to IVideoSettingContextEvent.
  TUniquePtr<IVideoSettingContextEvent> _video_setting_context_event;

  // Pointer to ISettingService.
  ISettingService *_setting_service = nullptr;

  // Pointer to IMeetingShareController.
  IMeetingShareController *_meeting_share_controller = nullptr;

  // Pointer to IMeetingQAController.
  IMeetingQAController *_meeting_qa_controller = nullptr;

  // Pointer to IMeetingQAControllerEvent.
  TUniquePtr<IMeetingQAControllerEvent> _meeting_qa_controller_event;

  // Pointer to IMeetingBOController.
  IMeetingBOController *_meeting_bo_controller = nullptr;

  // Pointer to IMeetingConfiguration.
  IMeetingConfiguration *_meeting_config = nullptr;

  // Pointer to IMeetingVideoController.
  IMeetingVideoController *_meeting_video_controller = nullptr;

  // Pointer to IMeetingVideoCtrlEvent.
  TUniquePtr<IMeetingVideoCtrlEvent> _meeting_video_controller_event;

  // Pointer to IEmojiReactionController
  IEmojiReactionController *_emoji_reaction_controller = nullptr;

  // Pointer to IEmojiReactionControllerEvent.
  TUniquePtr<IEmojiReactionControllerEvent> _emoji_reaction_controller_event;

  // Pointer to IMeetingChatController
  IMeetingChatController *_meeting_chat_controller = nullptr;

  // Pointer to IMeetingChatCtrlEvent.
  TUniquePtr<IMeetingChatCtrlEvent> _meeting_chat_controller_event;

  // Pointer to IMeetingLiveStreamController
  IMeetingLiveStreamController *_meeting_live_stream_controller = nullptr;

  // Pointer to IMeetingRecordingController
  IMeetingRecordingController *_meeting_recording_controller = nullptr;

  // Pointer to IMeetingRecordingCtrlEvent
  TUniquePtr<IMeetingRecordingCtrlEvent> _meeting_recording_controller_event;

  // Pointer to the user manager which stores all the users and their respective
  // info currently in the meeting.
  TUniquePtr<UserManager> _user_manager;

  // Pointer to debug info.
  TUniquePtr<DebugInfo> _debug_info;

  // Pointer to ZoomSDKVideoSource.
  TUniquePtr<ZoomSDKVideoSource> _video_source;
};

END_ZOOM_SDK_UE_NAMESPACE