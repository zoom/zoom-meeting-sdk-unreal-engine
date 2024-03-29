// Copyright : All rights reserved by Zoom Video Communications 2022-

#include "SDKInterfaceWrap.h"

#include "MeetingChatCtrlEvent.h"
#include "MeetingVideoCtrlEvent.h"
#include "SDKUtils.h"
#include "YuvTools.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE

DEFINE_LOG_CATEGORY(ZoomMeetingSDKLog);
DEFINE_LOG_CATEGORY(ZoomMeetingSDKLogDebugInfo);

constexpr bool ENABLE_DEBUGINFO = false;

SDKInterfaceWrap &SDKInterfaceWrap::GetInst() {
  static SDKInterfaceWrap s_inst;
  return s_inst;
}

SDKInterfaceWrap::SDKInterfaceWrap()
    : _initialized(false), _meeting_service(nullptr), _auth_service(nullptr),
      _video_setting_context(nullptr) {}

SDKInterfaceWrap::~SDKInterfaceWrap() {
  if (isInitialized()) {
    auto err = ZOOM_SDK_NAMESPACE::CleanUPSDK();
    UE_LOG(ZoomMeetingSDKLog, Display, TEXT("CleanUPSDK: %s"),
           *SDKErrorToString(err));
  }
}

SDKError SDKInterfaceWrap::Cleanup() {
  if (!isInitialized()) {
    return SDKERR_SUCCESS;
  }

  DestroyMeetingService();
  DestroyAuthService();
  DestroyUserManager();
  DestroyVideoSettingContext();
  DestroyMeetingShareController();
  DestroyMeetingQAController();
  DestroyMeetingBOController();
  DestroyMeetingConfiguration();
  DestroyMeetingVideoController();
  DestroyEmojiReactionController();
  DestroyMeetingChatController();
  DestroyMeetingRecordingController();

  auto err = ZOOM_SDK_NAMESPACE::CleanUPSDK();
  UE_LOG(ZoomMeetingSDKLog, Display, TEXT("CleanUPSDK: %s"),
         *SDKErrorToString(err));

  _initialized = false;
  return err;
}

void SDKInterfaceWrap::DestroyAuthService() {
  if (_auth_service == nullptr) {
    return;
  }
  auto err = ZOOM_SDK_NAMESPACE::DestroyAuthService(_auth_service);
  UE_LOG(ZoomMeetingSDKLog, Display, TEXT("DestroyAuthService: %s"),
         *SDKErrorToString(err));
  _auth_service = nullptr;
  _auth_service_event.Reset(nullptr);
}

void SDKInterfaceWrap::DestroyMeetingService() {
  if (_meeting_service == nullptr) {
    return;
  }

  auto err = ZOOM_SDK_NAMESPACE::DestroyMeetingService(_meeting_service);
  UE_LOG(ZoomMeetingSDKLog, Display, TEXT("DestroyMeetingService: %s"),
         *SDKErrorToString(err));
  _meeting_service = nullptr;
  _meeting_service_event.Reset(nullptr);
}

void SDKInterfaceWrap::DestroyUserManager() { _user_manager.Reset(nullptr); }

void SDKInterfaceWrap::DestroyVideoSettingContext() {
  UE_LOG(ZoomMeetingSDKLog, Display, TEXT("DestroyVideoSettingContext"));
  if (!_video_setting_context) {
    return;
  }

  _video_setting_context->SetVideoDeviceEvent(nullptr);
  _video_setting_context = nullptr;
  _video_setting_context_event.Reset(nullptr);
}

void SDKInterfaceWrap::DestroyMeetingShareController() {
  UE_LOG(ZoomMeetingSDKLog, Display, TEXT("DestroyMeetingShareController"));

  _meeting_share_controller = nullptr;
}

void SDKInterfaceWrap::DestroyMeetingQAController() {
  UE_LOG(ZoomMeetingSDKLog, Display, TEXT("DestroyMeetingQAController"));
  if (!_meeting_qa_controller) {
    return;
  }

  _meeting_qa_controller->SetEvent(nullptr);
  _meeting_qa_controller = nullptr;
  _meeting_qa_controller_event.Reset(nullptr);
}

void SDKInterfaceWrap::DestroyMeetingBOController() {
  UE_LOG(ZoomMeetingSDKLog, Display, TEXT("DestroyMeetingBOController"));
  if (!_meeting_bo_controller) {
    return;
  }

  _meeting_bo_controller = nullptr;
}

void SDKInterfaceWrap::DestroyMeetingConfiguration() {
  UE_LOG(ZoomMeetingSDKLog, Display, TEXT("DestroyMeetingConfiguration"));
  if (!_meeting_config) {
    return;
  }

  _meeting_config = nullptr;
}

void SDKInterfaceWrap::DestroyMeetingVideoController() {
  UE_LOG(ZoomMeetingSDKLog, Display, TEXT("DestroyMeetingVideoController"));
  if (!_meeting_video_controller) {
    return;
  }
  _meeting_video_controller->SetEvent(nullptr);
  _meeting_video_controller_event.Reset();
  _meeting_video_controller = nullptr;
}

void SDKInterfaceWrap::DestroyEmojiReactionController() {
  UE_LOG(ZoomMeetingSDKLog, Display, TEXT("DestroyEmojiReactionController"));
  if (!_emoji_reaction_controller) {
    return;
  }
  _emoji_reaction_controller->SetEvent(nullptr);
  _emoji_reaction_controller_event.Reset();
  _emoji_reaction_controller = nullptr;
}

void SDKInterfaceWrap::DestroyMeetingChatController() {
  UE_LOG(ZoomMeetingSDKLog, Display, TEXT("DestroyMeetingChatController"));
  if (!_meeting_chat_controller) {
    return;
  }
  _meeting_chat_controller->SetEvent(nullptr);
  _meeting_chat_controller_event.Reset();
  _meeting_chat_controller = nullptr;
}

void SDKInterfaceWrap::DestroyMeetingRecordingController() {
  UE_LOG(ZoomMeetingSDKLog, Display, TEXT("DestroyMeetingRecordingController"));
  if (!_meeting_recording_controller) {
    return;
  }
  _meeting_recording_controller->SetEvent(nullptr);
  _meeting_recording_controller_event.Reset();
  _meeting_chat_controller = nullptr;
}

void SDKInterfaceWrap::InitOnJoinMeeting() {
  if (!isInitialized()) {
    UE_LOG(ZoomMeetingSDKLog, Error,
           TEXT("InitOnJoinMeeting: SDK not initialized"));
    return;
  }

  UE_LOG(ZoomMeetingSDKLog, Display, TEXT("InitOnJoinMeeting"));

  // Initialize the required meeting services.
  GetMeetingService();
  GetMeetingQAController();
  GetMeetingShareController();
  GetMeetingVideoController();
  GetMeetingBOController();
  GetMeetingConfiguration();
  GetEmojiReactionController();
  GetMeetingChatController();
  GetUserManager();

  if (ENABLE_DEBUGINFO) {
    UE_LOG(ZoomMeetingSDKLog, Display,
           TEXT("InitOnJoinMeeting: Starting thread to print debug info."));
    _debug_info.Reset(new DebugInfo);
  }
}

void SDKInterfaceWrap::CleanupAllMeetingServices() {
  if (!isInitialized()) {
    UE_LOG(ZoomMeetingSDKLog, Error,
           TEXT("CleanupAllMeetingServices:SDK not initialized"));
    return;
  }

  if (ENABLE_DEBUGINFO) {
    UE_LOG(ZoomMeetingSDKLog, Display,
           TEXT("CleanupAllMeetingServices: Stopping thread that prints debug "
                "info."));
    _debug_info->Stop();
    _debug_info.Reset(nullptr);
  }

  UE_LOG(ZoomMeetingSDKLog, Display, TEXT("CleanupAllMeetingServices"));
  YUVTools::WaitUntilAllRenderingDone();

  DestroyMeetingQAController();
  DestroyMeetingShareController();
  DestroyMeetingBOController();
  DestroyMeetingVideoController();
  DestroyMeetingConfiguration();
  DestroyEmojiReactionController();
  DestroyMeetingChatController();
  DestroyUserManager();

  // Destroy meeting services in the very end.
  DestroyMeetingService();
}

// Implementation of public functions.

SDKError SDKInterfaceWrap::SDKInit(InitParam &param) {
  if (isInitialized()) {
    UE_LOG(ZoomMeetingSDKLog, Display, TEXT("SDKInit: Already Initialized"));
    return SDKERR_SUCCESS;
  }

  UE_LOG(ZoomMeetingSDKLog, Display, TEXT("SDKInit: Initializing SDK"));

  auto err = ZOOM_SDK_NAMESPACE::InitSDK(param);
  _initialized = (err == SDKERR_SUCCESS) ? true : false;

  UE_LOG(ZoomMeetingSDKLog, Display, TEXT("InitSDK: %s"),
         *SDKErrorToString(err));
  UE_LOG(ZoomMeetingSDKLog, Display, TEXT("SDK Initialized: %s"),
         *BoolToString(_initialized));

  // For some odd reason, the pointers seem to have garbage values even though
  // they are set to nullptr in the constructor and header file.
  // So setting it to nullptr.
  _meeting_service = nullptr;
  _auth_service = nullptr;
  _video_setting_context = nullptr;
  _meeting_share_controller = nullptr;
  _meeting_qa_controller = nullptr;
  _meeting_bo_controller = nullptr;
  _meeting_config = nullptr;
  _meeting_video_controller = nullptr;
  _meeting_video_controller_event = nullptr;
  _meeting_chat_controller = nullptr;

  return err;
}

IMeetingServiceEvent *SDKInterfaceWrap::GetMeetingServiceEvent() {
  if (!isInitialized()) {
    return nullptr;
  }

  _meeting_service_event.Reset(MeetingServiceEvent::Create());

  return _meeting_service_event.Get();
}

IMeetingService *SDKInterfaceWrap::GetMeetingService() {
  if (!isInitialized()) {
    return nullptr;
  }

  if (_meeting_service) {
    return _meeting_service;
  }

  CreateMeetingService(&_meeting_service);
  if (_meeting_service == nullptr) {
    return nullptr;
  }

  _meeting_service->SetEvent(GetMeetingServiceEvent());
  return _meeting_service;
}

IMeetingInfo *SDKInterfaceWrap::GetMeetingInfo() {
  if (!isInitialized()) {
    return nullptr;
  }

  return GetMeetingService()->GetMeetingInfo();
}

IMeetingAudioController *SDKInterfaceWrap::GetMeetingAudioController() {
  if (!isInitialized()) {
    return nullptr;
  }

  return GetMeetingService()->GetMeetingAudioController();
}

ZOOM_SDK_NAMESPACE::IAnnotationController *
SDKInterfaceWrap::GetAnnotationController() {
  if (!isInitialized()) {
    return nullptr;
  }
  return GetMeetingService()->GetAnnotationController();
}

ZOOM_SDK_NAMESPACE::IEmojiReactionController *
SDKInterfaceWrap::GetEmojiReactionController() {
  if (!isInitialized()) {
    return nullptr;
  }
  if (_emoji_reaction_controller) {
    return _emoji_reaction_controller;
  }

  _emoji_reaction_controller =
      GetMeetingService()->GetMeetingEmojiReactionController();
  if (_emoji_reaction_controller) {
    _emoji_reaction_controller_event.Reset(
        EmojiReactionControllerEvent::Create());
    _emoji_reaction_controller->SetEvent(
        _emoji_reaction_controller_event.Get());
  }
  return _emoji_reaction_controller;
}

IMeetingChatController *SDKInterfaceWrap::GetMeetingChatController() {
  if (!isInitialized()) {
    return nullptr;
  }

  if (_meeting_chat_controller) {
    return _meeting_chat_controller;
  }

  _meeting_chat_controller = GetMeetingService()->GetMeetingChatController();
  if (!_meeting_chat_controller) {
    return _meeting_chat_controller;
  }

  _meeting_chat_controller_event.Reset(MeetingChatCtrlEvent::Create());
  _meeting_chat_controller->SetEvent(_meeting_chat_controller_event.Get());
  return _meeting_chat_controller;
}

IClosedCaptionController *SDKInterfaceWrap::GetClosedCaptionController() {
  if (!isInitialized()) {
    return nullptr;
  }
  return GetMeetingService()->GetMeetingClosedCaptionController();
}

IMeetingRemoteController *SDKInterfaceWrap::GetMeetingRemoteController() {
  if (!isInitialized()) {
    return nullptr;
  }
  return GetMeetingService()->GetMeetingRemoteController();
}

IMeetingQAController *SDKInterfaceWrap::GetMeetingQAController() {
  if (!isInitialized()) {
    return nullptr;
  }
  if (_meeting_qa_controller) {
    return _meeting_qa_controller;
  }

  _meeting_qa_controller = GetMeetingService()->GetMeetingQAController();
  if (_meeting_qa_controller) {
    _meeting_qa_controller_event.Reset(MeetingQAControllerEvent::Create());
    _meeting_qa_controller->SetEvent(_meeting_qa_controller_event.Get());
  }
  return _meeting_qa_controller;
}

IMeetingShareController *SDKInterfaceWrap::GetMeetingShareController() {
  if (!isInitialized()) {
    return nullptr;
  }
  if (_meeting_share_controller) {
    return _meeting_share_controller;
  }

  _meeting_share_controller = GetMeetingService()->GetMeetingShareController();

  if (_meeting_share_controller) {
    _meeting_share_controller->SetEvent(MeetingShareCtrlEvent::Create());
  }

  return _meeting_share_controller;
}

IMeetingUIController *SDKInterfaceWrap::GetUIController() {
  if (!isInitialized()) {
    return nullptr;
  }

  return GetMeetingService()->GetUIController();
}

IMeetingVideoController *SDKInterfaceWrap::GetMeetingVideoController() {
  if (!isInitialized()) {
    return nullptr;
  }

  if (_meeting_video_controller) {
    return _meeting_video_controller;
  }

  _meeting_video_controller_event.Reset(MeetingVideoCtrlEvent::Create());

  _meeting_video_controller = GetMeetingService()->GetMeetingVideoController();
  if (_meeting_video_controller) {
    _meeting_video_controller->SetEvent(_meeting_video_controller_event.Get());
  }
  return _meeting_video_controller;
}

IMeetingWaitingRoomController *
SDKInterfaceWrap::GetMeetingWaitingRoomController() {
  if (!isInitialized()) {
    return nullptr;
  }

  return GetMeetingService()->GetMeetingWaitingRoomController();
}

ZOOM_SDK_NAMESPACE::IMeetingWebinarController *
SDKInterfaceWrap::GetMeetingWebinarController() {
  if (!isInitialized()) {
    return nullptr;
  }

  return GetMeetingService()->GetMeetingWebinarController();
}

ISettingService *SDKInterfaceWrap::GetSettingService() {
  if (!isInitialized()) {
    return nullptr;
  }
  if (_setting_service == nullptr) {
    ZOOM_SDK_NAMESPACE::CreateSettingService(&_setting_service);
  }

  return _setting_service;
}

IVideoSettingContext *SDKInterfaceWrap::GetVideoSettings() {
  if (!isInitialized()) {
    return nullptr;
  }

  if (_video_setting_context) {
    return _video_setting_context;
  }

  _video_setting_context = GetSettingService()->GetVideoSettings();

  if (_video_setting_context) {
    _video_setting_context_event.Reset(VideoSettingContextEvent::Create());
    auto err = _video_setting_context->SetVideoDeviceEvent(
        _video_setting_context_event.Get());
    UE_LOG(ZoomMeetingSDKLog, Display,
           TEXT("GetVideoSettings: Setting IVideoSettingContextEvent: %s"),
           *SDKErrorToString(err));
  }

  return _video_setting_context;
}

IShareSettingContext *SDKInterfaceWrap::GetShareSettings() {
  if (!isInitialized()) {
    return nullptr;
  }

  return GetSettingService()->GetShareSettings();
}

IMeetingParticipantsController *
SDKInterfaceWrap::GetMeetingParticipantsController() {
  if (!isInitialized()) {
    return nullptr;
  }

  return GetMeetingService()->GetMeetingParticipantsController();
}

IMeetingRecordingController *SDKInterfaceWrap::GetMeetingRecordingController() {
  if (!isInitialized()) {
    return nullptr;
  }

  _meeting_recording_controller =
      GetMeetingService()->GetMeetingRecordingController();

  if (_meeting_recording_controller) {
    _meeting_recording_controller_event.Reset(
        MeetingRecordingCtrlEvent::Create());
    _meeting_recording_controller->SetEvent(
        _meeting_recording_controller_event.Get());
  }
  return _meeting_recording_controller;
}

IAuthService *SDKInterfaceWrap::GetAuthService() {
  if (!isInitialized()) {
    return nullptr;
  }

  if (_auth_service) {
    return _auth_service;
  }

  auto err = ZOOM_SDK_NAMESPACE::CreateAuthService(&_auth_service);

  if (err == SDKERR_SUCCESS) {
    _auth_service_event.Reset(AuthServiceEvent::Create());
    _auth_service->SetEvent(_auth_service_event.Get());
  }

  return _auth_service;
}

IMeetingSignInterpretationController *
SDKInterfaceWrap::GetMeetingSignInterpretationController() {
  if (!isInitialized()) {
    return nullptr;
  }

  return GetMeetingService()->GetMeetingSignInterpretationController();
}

IMeetingBOController *SDKInterfaceWrap::GetMeetingBOController() {
  if (!isInitialized()) {
    return nullptr;
  }

  if (_meeting_bo_controller) {
    return _meeting_bo_controller;
  }

  _meeting_bo_controller = GetMeetingService()->GetMeetingBOController();
  return _meeting_bo_controller;
}

UserManager *SDKInterfaceWrap::GetUserManager() {
  if (!isInitialized()) {
    return nullptr;
  }

  if (_user_manager.Get() == nullptr) {
    _user_manager.Reset(UserManager::Create());
  }

  return _user_manager.Get();
}

IMeetingConfiguration *SDKInterfaceWrap::GetMeetingConfiguration() {
  if (!isInitialized()) {
    return nullptr;
  }

  if (_meeting_config) {
    return _meeting_config;
  }

  _meeting_config = GetMeetingService()->GetMeetingConfiguration();

  return _meeting_config;
}

ICameraController *SDKInterfaceWrap::GetCameraController() {
  if (!isInitialized()) {
    return nullptr;
  }

  return GetMeetingVideoController()->GetMyCameraController();
}

IClosedCaptionController *
SDKInterfaceWrap::GetMeetingClosedCaptionController() {
  if (!isInitialized()) {
    return nullptr;
  }

  return GetMeetingService()->GetMeetingClosedCaptionController();
}

IMeetingLiveStreamController *
SDKInterfaceWrap::GetMeetingLiveStreamController() {
  if (!isInitialized()) {
    return nullptr;
  }

  if (_meeting_live_stream_controller) {
    return _meeting_live_stream_controller;
  }

  _meeting_live_stream_controller =
      GetMeetingService()->GetMeetingLiveStreamController();

  return _meeting_live_stream_controller;
}

ICustomImmersiveController *SDKInterfaceWrap::GetMeetingImmersiveControler() {
  if (!isInitialized()) {
    return nullptr;
  }

  return GetMeetingService()->GetMeetingImmersiveController();
}

SDKError SDKInterfaceWrap::EnableVideoSourceUsingRenderTarget(
    UTextureRenderTarget2D *texture_to_send) {
  SDKError err(SDKERR_WRONG_USAGE);
  if (!isInitialized()) {
    UE_LOG(ZoomMeetingSDKLog, Error,
           TEXT("EnableVideoSourceUsingRenderTarget: SDK not initialized."));
    return err;
  }
  ZOOM_SDK_NAMESPACE::IZoomSDKVideoSourceHelper *video_source_helper =
      ZOOM_SDK_NAMESPACE::GetRawdataVideoSourceHelper();
  if (!video_source_helper) {
    UE_LOG(ZoomMeetingSDKLog, Error,
           TEXT("EnableVideoSourceUsingRenderTarget: Unable to get raw data "
                "video source helper."));
    return err;
  }

  // Default settings (mirror the video).
  ZOOM_SDK_NAMESPACE::ISettingService *setting = GetSettingService();
  if (!setting) {
    UE_LOG(ZoomMeetingSDKLog, Error,
           TEXT("EnableVideoSource: Error with GetSettingService"));
    return err;
  }
  ZOOM_SDK_NAMESPACE::IVideoSettingContext *video_setting =
      setting->GetVideoSettings();
  if (!video_setting) {
    UE_LOG(ZoomMeetingSDKLog, Error,
           TEXT("EnableVideoSource: Error with GetVideoSettings. err: %s"),
           *SDKErrorToString(err));
    return err;
  }
  video_setting->EnableVideoMirrorEffect(false);

  IMeetingVideoController *meetingController = GetMeetingVideoController();
  err = meetingController->UnmuteVideo();
  if (err != ZOOM_SDK_NAMESPACE::SDKERR_SUCCESS) {
    UE_LOG(ZoomMeetingSDKLog, Error,
           TEXT("EnableVideoSource: Unable to unmute video. err: %s"),
           *SDKErrorToString(err));
    return err;
  }

  _video_source.Reset(ZoomSDKVideoSource::Create(texture_to_send));
  // Set external video source
  err = video_source_helper->setExternalVideoSource(_video_source.Get());
  if (err != ZOOM_SDK_NAMESPACE::SDKERR_SUCCESS) {
    UE_LOG(ZoomMeetingSDKLog, Error,
           TEXT("EnableVideoSource: Unable to setExternalVideoSource. err: %s"),
           *SDKErrorToString(err));
    return err;
  }

  return err;
}

bool SDKInterfaceWrap::SendVideoFrame() {
  if (!_video_source.Get()) {
    return false;
  }

  return _video_source->SendSingleVideoFrame();
}

SDKError SDKInterfaceWrap::DisableVideoSource() {
  SDKError err(SDKERR_WRONG_USAGE);
  if (!isInitialized()) {
    UE_LOG(ZoomMeetingSDKLog, Error,
           TEXT("DisableVideoSource: SDK not initialized."));
    return err;
  }

  if (!_video_source.Get()) {
    UE_LOG(ZoomMeetingSDKLog, Error,
           TEXT("DisableVideoSource: Video not started/enabled yet."));
    return err;
  }

  IMeetingVideoController *meetingController = GetMeetingVideoController();
  err = meetingController->MuteVideo();
  if (err != ZOOM_SDK_NAMESPACE::SDKERR_SUCCESS) {
    UE_LOG(ZoomMeetingSDKLog, Error,
           TEXT("EnableVideoSource: Unable to unmute video. err: %s"),
           *SDKErrorToString(err));
  }

  ZOOM_SDK_NAMESPACE::IZoomSDKVideoSourceHelper *video_source_helper =
      ZOOM_SDK_NAMESPACE::GetRawdataVideoSourceHelper();
  if (!video_source_helper) {
    UE_LOG(
        ZoomMeetingSDKLog, Error,
        TEXT(
            "DisableVideoSource: Unable to get raw data video source helper."));
    return err;
  }

  // Stop the video from being transmitted.
  _video_source->onStopSend();

  // Disable the external video source
  err = video_source_helper->setExternalVideoSource(nullptr);
  if (err != ZOOM_SDK_NAMESPACE::SDKERR_SUCCESS) {
    UE_LOG(
        ZoomMeetingSDKLog, Error,
        TEXT("DisableVideoSource: Unable to setExternalVideoSource. err: %s"),
        *SDKErrorToString(err));
    return err;
  }
  return err;
}

END_ZOOM_SDK_UE_NAMESPACE
