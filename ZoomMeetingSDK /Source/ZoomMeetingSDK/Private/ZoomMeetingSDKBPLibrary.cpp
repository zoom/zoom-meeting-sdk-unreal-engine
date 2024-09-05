// Copyright : All rights reserved by Zoom Video Communications 2022-

#include "ZoomMeetingSDKBPLibrary.h"

#include <string>

#include "AnnotationController.h"
#include "AnswerItem.h"
#include "AudioSettingContext.h"
#include "AuthService.h"
#include "BOAdmin.h"
#include "BOAssistant.h"
#include "BOAttendee.h"
#include "BOCreator.h"
#include "BOData.h"
#include "BOMeeting.h"
#include "BatchCreateBOHelper.h"
#include "ClosedCaptionController.h"
#include "CustomImmersiveController.h"
#include "DirectShareServiceHelper.h"
#include "EmojiReactionController.h"
#include "Engine/Texture2D.h"
#include "Engine/TextureRenderTarget2D.h"
#include "GenericPlatform/GenericPlatformProcess.h"
#include "JoinMeetingBehaviorConfiguration.h"
#include "MeetingAudioController.h"
#include "MeetingBOController.h"
#include "MeetingChatController.h"
#include "MeetingConfiguration.h"
#include "MeetingParticipantsController.h"
#include "MeetingRecordingController.h"
#include "MeetingService.h"
#include "MeetingUIElemConfiguration.h"
#include "MeetingVideoController.h"
#include "MeetingWaitingRoomController.h"
#include "MeetingWebinarController.h"
#include "Misc/DateTime.h"
#include "PKCE_ZM_Auth_Gen.h"
#include "SDKInterfaceWrap.h"
#include "SDKUtils.h"
#include "ZoomCameraController.h"
#include "ZoomMeetingSDK.h"
#include "ZoomMeetingSDKBPDefine.h"
#include "ZoomSDKRenderer.h"
#include "ZoomUESDKDef.h"
#include "meeting_service_components/meeting_participants_ctrl_interface.h"
#include "zoom_sdk_def.h"

#define ENABLE_CUSTOMIZED_UI_FLAG (1 << 5)

// The max post fix sdk path length shouldn't be more than 7 characters.
#define MAX_POST_FIX_SDK_PATH_LEN 7

USING_ZOOM_SDK_UE_NAMESPACE;

DEFINE_LOG_CATEGORY(BPZoomMeetingSDKLog);

namespace {
// Returns true if the renderTarget is not in use.
bool CanSubscribeToZoomSDKRenderer(UTextureRenderTarget2D *renderTarget) {
  auto *user_manager = SDKInterfaceWrap::GetInst().GetUserManager();
  if (!user_manager) {
    return false;
  }

  return !user_manager->IsOutputRendererInUse(renderTarget);
}

// Returns the ZoomSDKRenderer pointer for the given user id.
ZoomSDKRenderer *
GetZoomSDKRenderedFromUserID(unsigned int user_id,
                             ZOOM_SDK_NAMESPACE::ZoomSDKRawDataType rdt) {
  auto *user_manager = SDKInterfaceWrap::GetInst().GetUserManager();
  if (!user_manager) {
    UE_LOG(BPZoomMeetingSDKLog, Error,
           TEXT("GetZoomSDKRenderedFromUserID: UserManager not found"));
    return nullptr;
  }
  auto *renderer = user_manager->GetZoomSDKRenderer(user_id, rdt);
  if (!renderer) {
    UE_LOG(BPZoomMeetingSDKLog, Error,
           TEXT("GetZoomSDKRenderedFromUserID: ZoomSDKRenderer not found for "
                "user id: %d"),
           user_id);
  }

  return renderer;
}

// Returns a random string for the given length.
std::wstring GetRandomPostFixSDKPath(size_t len) {
  // To make sure we generate a random string everytime this function is called,
  // we use the current unix time.
  auto fdate_time = FDateTime::Now();
  int64 unix_time = fdate_time.ToUnixTimestamp();
  FString unix_time_str = FString::FromInt(unix_time);
  std::string ret = TCHAR_TO_UTF8(*unix_time_str);
  // Get the substring of length 'len' (the last 'len' characters of the
  // string).
  size_t str_len = ret.length();
  size_t start_substr = 0;
  if (str_len > len) {
    start_substr = str_len - len;
  }
  return std::wstring(ret.begin(), ret.end()).substr(start_substr, str_len);
}

// Returns true if the current user is in a meeting.
bool InMeeting() {
  auto *meeting_service = SDKInterfaceWrap::GetInst().GetMeetingService();
  if (!meeting_service) {
    return false;
  }
  if (meeting_service->GetMeetingStatus() !=
      ZOOM_SDK_NAMESPACE::MeetingStatus::MEETING_STATUS_INMEETING) {
    UE_LOG(BPZoomMeetingSDKLog, Error, TEXT("InMeeting: not in meeting."));
    return false;
  }
  return true;
}

// Returns true if SDKError is SDKERR_SUCCESS.
bool IsSuccess(ZOOM_SDK_NAMESPACE::SDKError err) {
  return (err == ZOOM_SDK_NAMESPACE::SDKERR_SUCCESS) ? true : false;
}

// Returns pointer to IMeetingVideoController if in meeting and meeting video
// controller is initialized. Returns nullptr if otherwise/not-in-meeting.
ZOOMSDK::IMeetingVideoController *GetMeetingVideoController() {
  auto *meeting_service = SDKInterfaceWrap::GetInst().GetMeetingService();
  if (!meeting_service) {
    UE_LOG(BPZoomMeetingSDKLog, Error,
           TEXT("GetMeetingVideoController: not in a meeting"));
    return nullptr;
  }
  auto *meeting_video_controller = meeting_service->GetMeetingVideoController();
  if (!meeting_video_controller) {
    UE_LOG(BPZoomMeetingSDKLog, Error,
           TEXT("GetMeetingVideoController: meeting video controller not "
                "initialized"));
    return nullptr;
  }
  return meeting_video_controller;
}

// Returns pointer to IMeetingParticipantController if in meeting and meeting
// participant controller is initialized. Returns nullptr if
// otherwise/not-in-meeting.
ZOOMSDK::IMeetingParticipantsController *GetMeetingParticipantController() {
  auto *meeting_service = SDKInterfaceWrap::GetInst().GetMeetingService();
  if (!meeting_service) {
    UE_LOG(BPZoomMeetingSDKLog, Error,
           TEXT("GetMeetingParticipantController: not in a meeting"));
    return nullptr;
  }
  auto *meeting_participant_controller =
      meeting_service->GetMeetingParticipantsController();
  if (!meeting_participant_controller) {
    UE_LOG(BPZoomMeetingSDKLog, Error,
           TEXT("GetMeetingParticipantController: meeting participant "
                "controller not "
                "initialized"));
    return nullptr;
  }

  return meeting_participant_controller;
}

// Returns pointer to IMeetingChatController if in meeting and meeting
// participant controller is initialized. Returns nullptr if
// otherwise/not-in-meeting.
ZOOMSDK::IMeetingChatController *GetMeetingChatController() {
  auto *meeting_service = SDKInterfaceWrap::GetInst().GetMeetingService();
  if (!meeting_service) {
    UE_LOG(BPZoomMeetingSDKLog, Error,
           TEXT("GetMeetingChatController: not in a meeting"));
    return nullptr;
  }
  auto *meeting_chat_controller = meeting_service->GetMeetingChatController();
  if (!meeting_chat_controller) {
    UE_LOG(BPZoomMeetingSDKLog, Error,
           TEXT("meeting_chat_controller: meeting chat "
                "controller not "
                "initialized"));
    return nullptr;
  }
  return meeting_chat_controller;
}

// Returns pointer to IMeetingLiveStreamController if in meeting and meeting
// live stream controller is initialized. Returns nullptr if
// otherwise/not-in-meeting.
ZOOMSDK::IMeetingLiveStreamController *GetMeetingLiveStreamController() {
  auto *meeting_service = SDKInterfaceWrap::GetInst().GetMeetingService();
  if (!meeting_service) {
    UE_LOG(BPZoomMeetingSDKLog, Error,
           TEXT("GetMeetingLiveStreamController: not in a meeting"));
    return nullptr;
  }
  auto *meeting_live_stream_controller =
      meeting_service->GetMeetingLiveStreamController();
  if (!meeting_live_stream_controller) {
    UE_LOG(BPZoomMeetingSDKLog, Error,
           TEXT("meeting_live_stream_controller: meeting live stream "
                "controller not "
                "initialized"));
    return nullptr;
  }
  return meeting_live_stream_controller;
}

// Converts ZOOM_SDK_RAW_DATA_TYPE to ZoomSDKRawDataType.
ZOOM_SDK_NAMESPACE::ZoomSDKRawDataType
GetZoomSDKRawDataType(ZOOM_SDK_RAW_DATA_TYPE raw_data_type) {
  if (raw_data_type == ZOOM_SDK_RAW_DATA_TYPE::ZoomSDKRawDataType_Video) {
    return ZOOM_SDK_NAMESPACE::RAW_DATA_TYPE_VIDEO;
  }
  return ZOOM_SDK_NAMESPACE::RAW_DATA_TYPE_SHARE;
}

// Returns pointer to IMeetingQAController if in meeting and meeting
// qa controller is initialized. Returns nullptr if
// otherwise/not-in-meeting.
ZOOMSDK::IMeetingQAController *GetMeetingQAController() {
  auto *meeting_service = SDKInterfaceWrap::GetInst().GetMeetingService();
  if (!meeting_service) {
    UE_LOG(BPZoomMeetingSDKLog, Error,
           TEXT("GetMeetingQAController: not in a meeting"));
    return nullptr;
  }
  auto *meeting_qa_controller = meeting_service->GetMeetingQAController();
  if (!meeting_qa_controller) {
    UE_LOG(BPZoomMeetingSDKLog, Error,
           TEXT("meeting_qa_controller: meeting qa "
                "controller not "
                "initialized"));
    return nullptr;
  }
  return meeting_qa_controller;
}

} // namespace

UZoomMeetingSDKBPLibrary *UZoomMeetingSDKBPLibrary::m_zoom_bp_lib = nullptr;

UZoomMeetingSDKBPLibrary::UZoomMeetingSDKBPLibrary(
    const FObjectInitializer &ObjectInitializer)
    : Super(ObjectInitializer) {}

bool UZoomMeetingSDKBPLibrary::IsSDKErrorSuccess(FString result) {
  return (result == "SDKERR_SUCCESS");
}

bool UZoomMeetingSDKBPLibrary::IsAuthResultSuccess(FString result) {
  return (result == "AUTHRET_SUCCESS");
}

bool UZoomMeetingSDKBPLibrary::InitSDK(bool use_default_zoom_ui) {
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("In InitSDKWithUIOption - Initializing: use_default_ui: %s"),
         *BoolToString(use_default_zoom_ui));

  ZOOM_SDK_NAMESPACE::InitParam initParam;
  initParam.strWebDomain = L"zoom.us";
  initParam.strSupportUrl = L"https://zoom.us";

  // set language id
  initParam.emLanguageID = ZOOM_SDK_NAMESPACE::LANGUAGE_English;
  initParam.enableLogByDefault = true;
  initParam.enableGenerateDump = true;
  if (!use_default_zoom_ui) {
    initParam.obConfigOpts.optionalFeatures = ENABLE_CUSTOMIZED_UI_FLAG;
  }
  SDKInterfaceWrap &sdk_wrapper = SDKInterfaceWrap::GetInst();

// Enable this only if we want to support running multiple instances of MSDK.
// Note: This feature is experimental.
#if 0
    // For running multiple instances of the MSDK
    // Set sdkPathPostfix
    auto postfixsdkpath_str = GetRandomPostFixSDKPath(MAX_POST_FIX_SDK_PATH_LEN);
    UE_LOG(BPZoomMeetingSDKLog, Display,
           TEXT("InitSDKWithUIOption - Setting Post fix SDK path: %s"),
           postfixsdkpath_str.c_str());
    initParam.obConfigOpts.sdkPathPostfix = postfixsdkpath_str.c_str();
#endif

  auto err = sdk_wrapper.SDKInit(initParam);
  UE_LOG(BPZoomMeetingSDKLog, Display, TEXT("InitSDKWithUIOption - Done: %s"),
         *SDKErrorToString(err));

  return IsSuccess(err);
}

bool UZoomMeetingSDKBPLibrary::CleanupSDK() {
  auto &sdk_wrapper = SDKInterfaceWrap::GetInst();
  auto err = sdk_wrapper.Cleanup();

  UE_LOG(BPZoomMeetingSDKLog, Display, TEXT("CleanupSDK: err: %s"),
         *SDKErrorToString(err));

  return IsSuccess(err);
}

bool UZoomMeetingSDKBPLibrary::SDKAuthJWT(FString jwt) {
  TUniquePtr<AuthService> auth_service(AuthService::Create());
  if (!auth_service.Get()) {
    UE_LOG(BPZoomMeetingSDKLog, Error,
           TEXT("SDKAuthJWT: auth_service is nullptr"));
    return false;
  }

  ZOOM_SDK_NAMESPACE::AuthContext param;
  param.jwt_token = const_cast<TCHAR *>(*jwt);

  auto err = auth_service->SDKAuth(param);

  UE_LOG(BPZoomMeetingSDKLog, Display, TEXT("ZoomMeetingSDKAuthJWT: err: %s"),
         *SDKErrorToString(err));

  return IsSuccess(err);
}

bool UZoomMeetingSDKBPLibrary::InitAuthSDK(FString jwt,
                                           bool use_default_zoom_ui) {
  if (!InitSDK(use_default_zoom_ui)) {
    UE_LOG(BPZoomMeetingSDKLog, Display, TEXT("InitAuthSDK:InitSDK failed"));
    return false;
  }
  return SDKAuthJWT(jwt);
}

bool UZoomMeetingSDKBPLibrary::LogOut() {
  TUniquePtr<AuthService> auth_service(AuthService::Create());
  if (!auth_service.Get()) {
    UE_LOG(BPZoomMeetingSDKLog, Error, TEXT("ZoomMeetingSDKAuth: nullptr"));
    return false;
  }
  auto err = auth_service->LogOut();
  UE_LOG(BPZoomMeetingSDKLog, Error, TEXT("ZoomMeetingSDK Logout: err: %s"),
         *SDKErrorToString(err));
  return IsSuccess(err);
}

FString UZoomMeetingSDKBPLibrary::GetAuthResult() {
  TUniquePtr<AuthService> auth_service(AuthService::Create());
  if (!auth_service.Get()) {
    return "ZoomMeetingSDKAuth: nullptr";
  }

  auto auth_result = auth_service->GetAuthResult();
  auto auth_result_str = AuthResultToString(auth_result);

  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("ZoomMeetingSDKAuthStatus: err: %s"), *auth_result_str);

  return auth_result_str;
}

bool UZoomMeetingSDKBPLibrary::StartMeeting(FString userName,
                                            FString zakToken) {
  TUniquePtr<MeetingService> meeting_service(MeetingService::Create());
  if (!meeting_service.Get()) {
    UE_LOG(
        BPZoomMeetingSDKLog, Error,
        TEXT("UZoomMeetingSDKBPLibrary:StartMeeting MeetingService: nullptr"));
    return false;
  }

  if (zakToken.IsEmpty()) {
    UE_LOG(BPZoomMeetingSDKLog, Error,
           TEXT("UZoomMeetingSDKBPLibrary:StartMeeting:zakToken is required."));
    return false;
  }

  if (userName.IsEmpty()) {
    UE_LOG(BPZoomMeetingSDKLog, Error,
           TEXT("UZoomMeetingSDKBPLibrary:StartMeeting:userName is required."));
    return false;
  }

  ZOOM_SDK_NAMESPACE::StartParam startParam;
  startParam.userType = ZOOMSDK::SDK_UT_WITHOUT_LOGIN;
  startParam.param.withoutloginStart.zoomuserType =
      ZOOMSDK::ZoomUserType_EMAIL_LOGIN;
  startParam.param.withoutloginStart.meetingNumber = 0;
  startParam.param.withoutloginStart.isVideoOff = false;
  startParam.param.withoutloginStart.isAudioOff = true;
  startParam.param.withoutloginStart.userName = const_cast<TCHAR *>(*userName);
  startParam.param.withoutloginStart.userZAK = const_cast<TCHAR *>(*zakToken);

  ZOOM_SDK_NAMESPACE::SDKError err = meeting_service->Start(startParam);

  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("UZoomMeetingSDKBPLibrary:StartMeeting: err: %s"),
         *SDKErrorToString(err));
  return IsSuccess(err);
}

bool UZoomMeetingSDKBPLibrary::JoinMeeting(FString meetingNumber,
                                           FString passcode, FString userName,
                                           FString zakToken) {
  TUniquePtr<MeetingService> meeting_service(MeetingService::Create());
  if (!meeting_service.Get()) {
    UE_LOG(BPZoomMeetingSDKLog, Error,
           TEXT("ZoomMeetingSDKJoinMeeting:MeetingService: nullptr"));
    return false;
  }

  if (meetingNumber.IsEmpty()) {
    UE_LOG(BPZoomMeetingSDKLog, Error,
           TEXT("ZoomMeetingSDKJoinMeeting:meeting number is required."));
    return false;
  }

  if (userName.IsEmpty()) {
    UE_LOG(BPZoomMeetingSDKLog, Error,
           TEXT("ZoomMeetingSDKJoinMeeting:userName is required."));
    return false;
  }

  ZOOM_SDK_NAMESPACE::tagJoinParam joinParam;
  joinParam.userType = ZOOM_SDK_NAMESPACE::SDK_UT_WITHOUT_LOGIN;
  ZOOM_SDK_NAMESPACE::JoinParam4WithoutLogin &withoutLoginParam =
      joinParam.param.withoutloginuserJoin;
  withoutLoginParam.meetingNumber =
      FCString::Strtoui64(*meetingNumber, NULL, 10);
  withoutLoginParam.psw = const_cast<TCHAR *>(*passcode);
  withoutLoginParam.userName = const_cast<TCHAR *>(*userName);

  if (!zakToken.IsEmpty()) {
    withoutLoginParam.userZAK = const_cast<TCHAR *>(*zakToken);
  }

  ZOOM_SDK_NAMESPACE::SDKError err = meeting_service->Join(joinParam);

  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("ZoomMeetingSDKJoinMeeting: err: %s"), *SDKErrorToString(err));
  return IsSuccess(err);
}

bool UZoomMeetingSDKBPLibrary::JoinZoomEventMeeting(FString zoomEventToken) {
  TUniquePtr<MeetingService> meeting_service(MeetingService::Create());
  if (!meeting_service.Get()) {
    UE_LOG(BPZoomMeetingSDKLog, Error,
           TEXT("ZoomMeetingSDKJoinZoomEventMeeting:MeetingService: nullptr"));
    return false;
  }

  if (zoomEventToken.IsEmpty()) {
    UE_LOG(BPZoomMeetingSDKLog, Error,
           TEXT("ZoomMeetingSDKJoinZoomEventMeeting:Zoom Event Token is "
                "required."));
    return false;
  }

  ZOOM_SDK_NAMESPACE::tagJoinParam joinParam;
  joinParam.userType = ZOOM_SDK_NAMESPACE::SDK_UT_WITHOUT_LOGIN;
  ZOOM_SDK_NAMESPACE::JoinParam4WithoutLogin &withoutLoginParam =
      joinParam.param.withoutloginuserJoin;

  withoutLoginParam.join_token = const_cast<TCHAR *>(*zoomEventToken);

  ZOOM_SDK_NAMESPACE::SDKError err = meeting_service->Join(joinParam);

  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("ZoomMeetingSDKJoinZoomEventMeeting: err: %s"),
         *SDKErrorToString(err));
  return IsSuccess(err);
}

bool UZoomMeetingSDKBPLibrary::EndMeeting() {
  TUniquePtr<MeetingService> meeting_service(MeetingService::Create());
  if (!meeting_service.Get()) {
    UE_LOG(BPZoomMeetingSDKLog, Error,
           TEXT("ZoomMeetingSDKJoinMeeting:MeetingService: nullptr"));
    return false;
  }

  auto err = meeting_service->Leave(ZOOM_SDK_NAMESPACE::END_MEETING);

  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("ZoomMeetingSDKEndMeeting: err: %s"), *SDKErrorToString(err));
  return IsSuccess(err);
}

bool UZoomMeetingSDKBPLibrary::LeaveMeeting() {
  TUniquePtr<MeetingService> meeting_service(MeetingService::Create());
  if (!meeting_service.Get()) {
    UE_LOG(BPZoomMeetingSDKLog, Error,
           TEXT("ZoomMeetingSDKJoinMeeting:MeetingService: nullptr"));
    return false;
  }

  auto err = meeting_service->Leave(ZOOM_SDK_NAMESPACE::LEAVE_MEETING);

  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("ZoomMeetingSDKEndMeeting: err: %s"), *SDKErrorToString(err));
  return IsSuccess(err);
}

bool UZoomMeetingSDKBPLibrary::SubscribeVideo(
    int64 user_id, const UObject *WorldContextObject,
    UTextureRenderTarget2D *outputRenderer,
    ZOOM_SDK_RAW_DATA_TYPE raw_data_type) {
  UE_LOG(BPZoomMeetingSDKLog, Display, TEXT("SubscribeVideo"));

  // Sanity check.
  // TODO: Check to see if this causes performance issues and remove/optimize if
  // need be.
  if (!CanSubscribeToZoomSDKRenderer(outputRenderer)) {
    UE_LOG(BPZoomMeetingSDKLog, Warning,
           TEXT("SubscribeVideo: The given output renderer is already in use. "
                "Please subscribe to a different unused output renderer."));
    return false;
  }

  ZOOM_SDK_NAMESPACE::ZoomSDKRawDataType zoom_sdk_raw_data_type =
      raw_data_type == ZOOM_SDK_RAW_DATA_TYPE::ZoomSDKRawDataType_Video
          ? ZOOM_SDK_NAMESPACE::RAW_DATA_TYPE_VIDEO
          : ZOOM_SDK_NAMESPACE::RAW_DATA_TYPE_SHARE;

  auto *videoRenderer =
      GetZoomSDKRenderedFromUserID(user_id, zoom_sdk_raw_data_type);
  if (!videoRenderer) {
    return false;
  }
  auto err = ZOOM_SDK_NAMESPACE::SDKERR_WRONG_USAGE;
  if (videoRenderer->Init(WorldContextObject, outputRenderer)) {
    ZOOM_SDK_NAMESPACE::IUserInfo *pUserInfo =
        SDKInterfaceWrap::GetInst()
            .GetMeetingService()
            ->GetMeetingParticipantsController()
            ->GetUserByUserID(user_id);
    if (pUserInfo) {
      UE_LOG(BPZoomMeetingSDKLog, Display, TEXT("SubscribeVideo: user ID: %d"),
             user_id);
      err = videoRenderer->Subscribe(user_id, zoom_sdk_raw_data_type);

      UE_LOG(BPZoomMeetingSDKLog, Display, TEXT("SubscribeVideo: err: %s"),
             *SDKErrorToString(err));
    }
  }
  return IsSuccess(err);
}

bool UZoomMeetingSDKBPLibrary::UnSubscribeVideo(
    int64 userId, ZOOM_SDK_RAW_DATA_TYPE raw_data_type) {
  UE_LOG(BPZoomMeetingSDKLog, Display, TEXT("UnSubscribeVideo"));
  auto rdt = GetZoomSDKRawDataType(raw_data_type);

  auto *videoRenderer = GetZoomSDKRenderedFromUserID(userId, rdt);
  if (!videoRenderer) {
    return false;
  }

  auto err = videoRenderer->UnSubscribe();
  return IsSuccess(err);
}

bool UZoomMeetingSDKBPLibrary::IsUserSubscribedToVideo(
    int64 userId, ZOOM_SDK_RAW_DATA_TYPE raw_data_type) {
  UE_LOG(BPZoomMeetingSDKLog, Display, TEXT("IsUserSubscribedToVideo"));

  auto rdt = GetZoomSDKRawDataType(raw_data_type);
  auto *user_manager = SDKInterfaceWrap::GetInst().GetUserManager();
  return user_manager->IsUserSubscribed(userId, rdt);
}

UTextureRenderTarget2D *UZoomMeetingSDKBPLibrary::GetOutputRenderer(
    int64 userId, ZOOM_SDK_RAW_DATA_TYPE raw_data_type) {
  UE_LOG(BPZoomMeetingSDKLog, Display, TEXT("GetOutputRenderer"));

  auto rdt = GetZoomSDKRawDataType(raw_data_type);
  auto *user_manager = SDKInterfaceWrap::GetInst().GetUserManager();
  if (!user_manager->IsUserSubscribed(userId, rdt)) {
    UE_LOG(BPZoomMeetingSDKLog, Error,
           TEXT("GetOutputRenderer: user id: %d video not subscribed."),
           userId);
    return nullptr;
  }
  return GetZoomSDKRenderedFromUserID(userId, rdt)->GetOutputRenderer();
}

bool UZoomMeetingSDKBPLibrary::SetRawDataResolution(
    int64 userId, RAW_DATA_RESOLUTION resolution,
    ZOOM_SDK_RAW_DATA_TYPE raw_data_type) {
  UE_LOG(BPZoomMeetingSDKLog, Display, TEXT("SetRawDataResolution"));
  auto rdt = GetZoomSDKRawDataType(raw_data_type);

  auto *videoRenderer = GetZoomSDKRenderedFromUserID(userId, rdt);
  if (!videoRenderer) {
    return false;
  }

  ZOOM_SDK_NAMESPACE::ZoomSDKResolution e_resolution =
      ZOOM_SDK_NAMESPACE::ZoomSDKResolution::ZoomSDKResolution_NoUse;
  switch (resolution) {
  case RAW_DATA_RESOLUTION::ZoomSDKResolution_90P:
    e_resolution = ZOOM_SDK_NAMESPACE::ZoomSDKResolution::ZoomSDKResolution_90P;
    break;
  case RAW_DATA_RESOLUTION::ZoomSDKResolution_180P:
    e_resolution =
        ZOOM_SDK_NAMESPACE::ZoomSDKResolution::ZoomSDKResolution_180P;
    break;
  case RAW_DATA_RESOLUTION::ZoomSDKResolution_360P:
    e_resolution =
        ZOOM_SDK_NAMESPACE::ZoomSDKResolution::ZoomSDKResolution_360P;
    break;
  case RAW_DATA_RESOLUTION::ZoomSDKResolution_720P:
    e_resolution =
        ZOOM_SDK_NAMESPACE::ZoomSDKResolution::ZoomSDKResolution_720P;
    break;
  case RAW_DATA_RESOLUTION::ZoomSDKResolution_1080P:
    e_resolution =
        ZOOM_SDK_NAMESPACE::ZoomSDKResolution::ZoomSDKResolution_1080P;
    break;
  }
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("SetRawDataResolution: resolution: %d, enum-resolution: %d"),
         resolution, e_resolution);

  auto err = videoRenderer->SetRawDataResolution(e_resolution);
  return IsSDKErrorSuccess(SDKErrorToString(err));
}

//========= IAnwserItem

FUEAnswerItem UZoomMeetingSDKBPLibrary::GetAnswerItemInfo(FString answerID) {
  TUniquePtr<AnswerItem> answer_item(AnswerItem::Create(*answerID));
  if (!answer_item.Get()) {
    UE_LOG(BPZoomMeetingSDKLog, Error,
           TEXT("UZoomMeetingSDKBPLibrary::GetAnswerID: nullptr"));
    return FUEAnswerItem();
  }
  UE_LOG(BPZoomMeetingSDKLog, Display, TEXT("GetAnswerItemInfo: answerID: %s"),
         *answerID);

  return FUEAnswerItem(answer_item->GetAnswerItem());
}

// ======= IAudioSettingContext

float UZoomMeetingSDKBPLibrary::GetSpeakerVol() {
  FLOAT val = -1.0f;
  TUniquePtr<AudioSettingContext> audio_setting_context(
      AudioSettingContext::Create());
  if (!audio_setting_context.Get()) {
    UE_LOG(BPZoomMeetingSDKLog, Error, TEXT("AudioSettingContext nullptr"));
    return val;
  }
  auto err = audio_setting_context->GetSpeakerVol(val);
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("ZoomMeetingSDKGetSpeakerVol: err: %s"), *SDKErrorToString(err));
  return val;
}

bool UZoomMeetingSDKBPLibrary::EnableAutoAdjustMic(bool enable) {
  TUniquePtr<AudioSettingContext> audio_setting_context(
      AudioSettingContext::Create());
  if (!audio_setting_context.Get()) {
    UE_LOG(BPZoomMeetingSDKLog, Error, TEXT("AudioSettingContext nullptr"));
    return false;
  }
  auto err = audio_setting_context->EnableAutoAdjustMic(enable);
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("ZoomMeetingSDK EnableAutoAdjustMic: err: %s"),
         *SDKErrorToString(err));
  return IsSuccess(err);
}

bool UZoomMeetingSDKBPLibrary::SetSpeakerVol(float volume) {
  TUniquePtr<AudioSettingContext> audio_setting_context(
      AudioSettingContext::Create());
  if (!audio_setting_context.Get()) {
    UE_LOG(BPZoomMeetingSDKLog, Error, TEXT("AudioSettingContext nullptr"));
    return false;
  }
  auto err = audio_setting_context->SetSpeakerVol(volume);
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("ZoomMeetingSDK SetSpeakerVol: err: %s"), *SDKErrorToString(err));
  return IsSuccess(err);
}

bool UZoomMeetingSDKBPLibrary::UseDefaultSystemMic() {
  TUniquePtr<AudioSettingContext> audio_setting_context(
      AudioSettingContext::Create());
  if (!audio_setting_context.Get()) {
    UE_LOG(BPZoomMeetingSDKLog, Error, TEXT("AudioSettingContext nullptr"));
    return false;
  }
  auto err = audio_setting_context->UseDefaultSystemMic();
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("ZoomMeetingSDK UseDefaultSystemMic: err: %s"),
         *SDKErrorToString(err));
  return IsSuccess(err);
}

bool UZoomMeetingSDKBPLibrary::UseDefaultSystemSpeaker() {
  TUniquePtr<AudioSettingContext> audio_setting_context(
      AudioSettingContext::Create());
  if (!audio_setting_context.Get()) {
    UE_LOG(BPZoomMeetingSDKLog, Error, TEXT("AudioSettingContext nullptr"));
    return false;
  }
  auto err = audio_setting_context->UseDefaultSystemSpeaker();
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("ZoomMeetingSDK UseDefaultSystemSpeaker: err: %s"),
         *SDKErrorToString(err));
  return IsSuccess(err);
}

bool UZoomMeetingSDKBPLibrary::AddNewBoToList(FString strNewBOName) {
  TUniquePtr<BatchCreateBOHelper> batch_create_bo_helper(
      BatchCreateBOHelper::Create());
  if (!batch_create_bo_helper.Get()) {
    UE_LOG(BPZoomMeetingSDKLog, Error, TEXT("BatchCreateBOHelper nullptr"));
    return false;
  }
  auto err = batch_create_bo_helper->AddNewBoToList(
      const_cast<TCHAR *>(*strNewBOName));

  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("BatchCreateBOHelper::AddNewBoToList: err: %s"),
         *BoolToString(err));
  return err;
}

bool UZoomMeetingSDKBPLibrary::CreateBOTransactionBegin() {
  TUniquePtr<BatchCreateBOHelper> batch_create_bo_helper(
      BatchCreateBOHelper::Create());
  if (!batch_create_bo_helper.Get()) {
    UE_LOG(BPZoomMeetingSDKLog, Error, TEXT("BatchCreateBOHelper nullptr"));
    return false;
  }
  auto err = batch_create_bo_helper->CreateBOTransactionBegin();

  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("BatchCreateBOHelper::CreateBOTransactionBegin: err: %s"),
         *SDKErrorToString(err));
  return IsSuccess(err);
}

bool UZoomMeetingSDKBPLibrary::CreateBOTransactionCommit() {
  TUniquePtr<BatchCreateBOHelper> batch_create_bo_helper(
      BatchCreateBOHelper::Create());
  if (!batch_create_bo_helper.Get()) {
    UE_LOG(BPZoomMeetingSDKLog, Error, TEXT("BatchCreateBOHelper nullptr"));
    return false;
  }
  auto err = batch_create_bo_helper->CreateBOTransactionCommit();

  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("BatchCreateBOHelper::CreateBOTransactionCommit: err: %s"),
         *SDKErrorToString(err));
  return IsSuccess(err);
}

//======== BOAdmin

bool UZoomMeetingSDKBPLibrary::CanStartBO() {
  TUniquePtr<BOAdmin> bo_admin(BOAdmin::Create());
  if (!bo_admin.Get()) {
    UE_LOG(BPZoomMeetingSDKLog, Error, TEXT("BOAdmin nullptr"));
    return false;
  }
  auto err = bo_admin->CanStartBO();

  UE_LOG(BPZoomMeetingSDKLog, Display, TEXT("BOAdmin::CanStartBO: err: %s"),
         *BoolToString(err));
  return err;
}

bool UZoomMeetingSDKBPLibrary::AssignNewUserToRunningBO(FString userID,
                                                        FString BOID) {
  TUniquePtr<BOAdmin> bo_admin(BOAdmin::Create());
  if (!bo_admin.Get()) {
    UE_LOG(BPZoomMeetingSDKLog, Error, TEXT("BOAdmin nullptr"));
    return false;
  }
  auto err = bo_admin->AssignNewUserToRunningBO(const_cast<TCHAR *>(*userID),
                                                const_cast<TCHAR *>(*BOID));

  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("BOAdmin::AssignNewUserToRunningBO: err: %s"),
         *BoolToString(err));
  return err;
}

bool UZoomMeetingSDKBPLibrary::BroadcastMessage(FString message) {
  TUniquePtr<BOAdmin> bo_admin(BOAdmin::Create());
  if (!bo_admin.Get()) {
    UE_LOG(BPZoomMeetingSDKLog, Error, TEXT("BOAdmin nullptr"));
    return false;
  }
  auto err = bo_admin->BroadcastMessage(const_cast<TCHAR *>(*message));

  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("BOAdmin::BroadcastMessage: err: %s"), *BoolToString(err));
  return err;
}

bool UZoomMeetingSDKBPLibrary::InviteBOUserReturnToMainSession(FString userID) {
  TUniquePtr<BOAdmin> bo_admin(BOAdmin::Create());
  if (!bo_admin.Get()) {
    UE_LOG(BPZoomMeetingSDKLog, Error, TEXT("BOAdmin nullptr"));
    return false;
  }
  auto err =
      bo_admin->InviteBOUserReturnToMainSession(const_cast<TCHAR *>(*userID));

  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("BOAdmin::InviteBOUserReturnToMainSession: err: %s"),
         *BoolToString(err));
  return err;
}

bool UZoomMeetingSDKBPLibrary::JoinBOByUserRequest(FString userID) {
  TUniquePtr<BOAdmin> bo_admin(BOAdmin::Create());
  if (!bo_admin.Get()) {
    UE_LOG(BPZoomMeetingSDKLog, Error, TEXT("BOAdmin nullptr"));
    return false;
  }
  auto err = bo_admin->JoinBOByUserRequest(const_cast<TCHAR *>(*userID));

  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("BOAdmin::JoinBOByUserRequest: err: %s"), *BoolToString(err));
  return err;
}

bool UZoomMeetingSDKBPLibrary::StartBO() {
  TUniquePtr<BOAdmin> bo_admin(BOAdmin::Create());
  if (!bo_admin.Get()) {
    UE_LOG(BPZoomMeetingSDKLog, Error, TEXT("BOAdmin nullptr"));
    return false;
  }
  auto err = bo_admin->StartBO();

  UE_LOG(BPZoomMeetingSDKLog, Display, TEXT("BOAdmin::StartBO: err: %s"),
         *BoolToString(err));
  return err;
}

bool UZoomMeetingSDKBPLibrary::StopBO() {
  TUniquePtr<BOAdmin> bo_admin(BOAdmin::Create());
  if (!bo_admin.Get()) {
    UE_LOG(BPZoomMeetingSDKLog, Error, TEXT("BOAdmin nullptr"));
    return false;
  }
  auto err = bo_admin->StopBO();

  UE_LOG(BPZoomMeetingSDKLog, Display, TEXT("BOAdmin::StopBO: err: %s"),
         *BoolToString(err));
  return err;
}

//======= BOAssistant

bool UZoomMeetingSDKBPLibrary::BOAssistantJoinBO(FString strBOID) {
  TUniquePtr<BOAssistant> bo_assistant(BOAssistant::Create());
  if (!bo_assistant.Get()) {
    UE_LOG(BPZoomMeetingSDKLog, Error, TEXT("BOAssistant nullptr"));
    return false;
  }
  auto err = bo_assistant->JoinBO(const_cast<TCHAR *>(*strBOID));

  UE_LOG(BPZoomMeetingSDKLog, Display, TEXT("BOAssistant::JoinBO: err: %s"),
         *BoolToString(err));
  return err;
}

bool UZoomMeetingSDKBPLibrary::BOAssistantLeaveBO() {
  TUniquePtr<BOAssistant> bo_assistant(BOAssistant::Create());
  if (!bo_assistant.Get()) {
    UE_LOG(BPZoomMeetingSDKLog, Error, TEXT("BOAssistant nullptr"));
    return false;
  }
  auto err = bo_assistant->LeaveBO();

  UE_LOG(BPZoomMeetingSDKLog, Display, TEXT("BOAssistant::LeaveBO: err: %s"),
         *BoolToString(err));
  return err;
}

// ======= BOAttendee

FString UZoomMeetingSDKBPLibrary::GetBOName() {
  TUniquePtr<BOAttendee> bo_attendee(BOAttendee::Create());
  if (!bo_attendee.Get()) {
    UE_LOG(BPZoomMeetingSDKLog, Error, TEXT("BOAttendee nullptr"));
    return "Not able to get BO name";
  }
  auto val = bo_attendee->GetBoName();

  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("BOAttendee::GetBOName: response: %s"), *val);
  return val;
}

bool UZoomMeetingSDKBPLibrary::IsCanReturnMainSession() {
  TUniquePtr<BOAttendee> bo_attendee(BOAttendee::Create());
  if (!bo_attendee.Get()) {
    UE_LOG(BPZoomMeetingSDKLog, Error, TEXT("BOAttendee nullptr"));
    return false;
  }
  auto err = bo_attendee->IsCanReturnMainSession();
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("BOAttendee::IsCanReturnMainSession: err: %s"),
         *BoolToString(err));
  return err;
}

bool UZoomMeetingSDKBPLibrary::IsHostInThisBO() {
  TUniquePtr<BOAttendee> bo_attendee(BOAttendee::Create());
  if (!bo_attendee.Get()) {
    UE_LOG(BPZoomMeetingSDKLog, Error, TEXT("BOAttendee nullptr"));
    return false;
  }
  auto err = bo_attendee->IsHostInThisBO();
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("BOAttendee::IsHostInThisBO: err: %s"), *BoolToString(err));
  return err;
}

bool UZoomMeetingSDKBPLibrary::AttendeeJoinBO() {
  TUniquePtr<BOAttendee> bo_attendee(BOAttendee::Create());
  if (!bo_attendee.Get()) {
    UE_LOG(BPZoomMeetingSDKLog, Error, TEXT("BOAttendee nullptr"));
    return false;
  }
  auto err = bo_attendee->JoinBO();
  UE_LOG(BPZoomMeetingSDKLog, Display, TEXT("BOAttendee::JoinBO: err: %s"),
         *BoolToString(err));
  return err;
}

bool UZoomMeetingSDKBPLibrary::AttendeeLeaveBO() {
  TUniquePtr<BOAttendee> bo_attendee(BOAttendee::Create());
  if (!bo_attendee.Get()) {
    UE_LOG(BPZoomMeetingSDKLog, Error, TEXT("BOAttendee nullptr"));
    return false;
  }
  auto err = bo_attendee->LeaveBO();
  UE_LOG(BPZoomMeetingSDKLog, Display, TEXT("BOAttendee::LeaveBO: err: %s"),
         *BoolToString(err));
  return err;
}

// ====== BOCreator

bool UZoomMeetingSDKBPLibrary::CreateBO(FString strBOName) {
  TUniquePtr<BOCreator> bo_creator(BOCreator::Create());
  if (!bo_creator.Get()) {
    UE_LOG(BPZoomMeetingSDKLog, Error, TEXT("BOCreator nullptr"));
    return false;
  }
  auto err = bo_creator->CreateBO(const_cast<TCHAR *>(*strBOName));
  UE_LOG(BPZoomMeetingSDKLog, Display, TEXT("BOAttendee::CreateBO: BO ID: %s"),
         err);
  return (err == NULL) ? false : true;
}

bool UZoomMeetingSDKBPLibrary::UpdateBOName(FString strBOID,
                                            FString strNewBOName) {
  TUniquePtr<BOCreator> bo_creator(BOCreator::Create());
  if (!bo_creator.Get()) {
    UE_LOG(BPZoomMeetingSDKLog, Error, TEXT("BOCreator nullptr"));
    return false;
  }
  auto err = bo_creator->UpdateBOName(const_cast<TCHAR *>(*strBOID),
                                      const_cast<TCHAR *>(*strNewBOName));
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("BOAttendee::UpdateBOName: err: %s"), *BoolToString(err));
  return err;
}

bool UZoomMeetingSDKBPLibrary::RemoveBO(FString strBOID) {
  TUniquePtr<BOCreator> bo_creator(BOCreator::Create());
  if (!bo_creator.Get()) {
    UE_LOG(BPZoomMeetingSDKLog, Error, TEXT("BOCreator nullptr"));
    return false;
  }
  auto err = bo_creator->RemoveBO(const_cast<TCHAR *>(*strBOID));
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("BOAttendee::UpdateBOName: err: %s"), *BoolToString(err));
  return err;
}

bool UZoomMeetingSDKBPLibrary::AssignUserToBO(FString strUserID,
                                              FString strBOID) {
  TUniquePtr<BOCreator> bo_creator(BOCreator::Create());
  if (!bo_creator.Get()) {
    UE_LOG(BPZoomMeetingSDKLog, Error, TEXT("BOCreator nullptr"));
    return false;
  }
  auto err = bo_creator->AssignUserToBO(const_cast<TCHAR *>(*strUserID),
                                        const_cast<TCHAR *>(*strBOID));
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("BOAttendee::AssignUserToBO: err: %s"), *BoolToString(err));
  return err;
}

bool UZoomMeetingSDKBPLibrary::RemoveUserFromBO(FString strUserID,
                                                FString strBOID) {
  TUniquePtr<BOCreator> bo_creator(BOCreator::Create());
  if (!bo_creator.Get()) {
    UE_LOG(BPZoomMeetingSDKLog, Error, TEXT("BOCreator nullptr"));
    return false;
  }
  auto err = bo_creator->RemoveUserFromBO(const_cast<TCHAR *>(*strUserID),
                                          const_cast<TCHAR *>(*strBOID));
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("BOAttendee::RemoveUserFromBO: err: %s"), *BoolToString(err));
  return err;
}

// Incomplete BP wrapper
// bool UZoomMeetingSDKBPLibrary::SetBOOption() { return false; }

// Incomplete BP wraper
// bool UZoomMeetingSDKBPLibrary::GetBOOption() { return false; }

// ====== BOData

FString UZoomMeetingSDKBPLibrary::GetBOUserName(FString strUserID) {
  TUniquePtr<BOData> bo_data(BOData::Create());
  if (!bo_data.Get()) {
    UE_LOG(BPZoomMeetingSDKLog, Error, TEXT("BOData nullptr"));
    return "BOData nullptr";
  }
  auto err = bo_data->GetBOUserName(const_cast<TCHAR *>(*strUserID));
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("BOAttendee::GetBOUserName: val: %s"), err);
  return err;
}

bool UZoomMeetingSDKBPLibrary::IsBOUserMyself(FString strUserID) {
  TUniquePtr<BOData> bo_data(BOData::Create());
  if (!bo_data.Get()) {
    UE_LOG(BPZoomMeetingSDKLog, Error, TEXT("BOData nullptr"));
    return false;
  }
  auto err = bo_data->IsBOUserMyself(const_cast<TCHAR *>(*strUserID));
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("BOAttendee::IsBOUserMyself err: %s"), *BoolToString(err));
  return err;
}

FString UZoomMeetingSDKBPLibrary::GetCurrentBOName() {
  TUniquePtr<BOData> bo_data(BOData::Create());
  if (!bo_data.Get()) {
    UE_LOG(BPZoomMeetingSDKLog, Error, TEXT("BOData nullptr"));
    return "BOData nullptr";
  }
  auto err = bo_data->GetCurrentBOName();
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("BOAttendee::GetCurrentBOName val: %s"), err);
  return err;
}

// ======= ICameraController

bool UZoomMeetingSDKBPLibrary::CanControlCamera() {
  TUniquePtr<CameraController> camera_controller(CameraController::Create());
  if (!camera_controller.Get()) {
    UE_LOG(BPZoomMeetingSDKLog, Error, TEXT("CameraController nullptr"));
    return false;
  }
  bool bCanControlCamera;
  auto err = camera_controller->CanControlCamera(bCanControlCamera);
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("CameraController::CanControlCamera err: %s"),
         *SDKErrorToString(err));
  return IsSuccess(err);
}

bool UZoomMeetingSDKBPLibrary::IsValid() {
  TUniquePtr<CameraController> camera_controller(CameraController::Create());
  if (!camera_controller.Get()) {
    UE_LOG(BPZoomMeetingSDKLog, Error, TEXT("CameraController nullptr"));
    return false;
  }
  return camera_controller->IsValid();
}

bool UZoomMeetingSDKBPLibrary::BeginTurnLeft() {
  TUniquePtr<CameraController> camera_controller(CameraController::Create());
  if (!camera_controller.Get()) {
    UE_LOG(BPZoomMeetingSDKLog, Error, TEXT("CameraController nullptr"));
    return false;
  }
  auto err = camera_controller->BeginTurnLeft();
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("CameraController::BeginTurnLeft err: %s"),
         *SDKErrorToString(err));
  return IsSuccess(err);
  ;
}

bool UZoomMeetingSDKBPLibrary::ContinueTurnLeft() {
  TUniquePtr<CameraController> camera_controller(CameraController::Create());
  if (!camera_controller.Get()) {
    UE_LOG(BPZoomMeetingSDKLog, Error, TEXT("CameraController nullptr"));
    return false;
  }
  auto err = camera_controller->ContinueTurnLeft();
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("CameraController::ContinueTurnLeft err: %s"),
         *SDKErrorToString(err));
  return IsSuccess(err);
  ;
}

bool UZoomMeetingSDKBPLibrary::EndTurnLeft() {
  TUniquePtr<CameraController> camera_controller(CameraController::Create());
  if (!camera_controller.Get()) {
    UE_LOG(BPZoomMeetingSDKLog, Error, TEXT("CameraController nullptr"));
    return false;
  }
  auto err = camera_controller->EndTurnLeft();
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("CameraController::EndTurnLeft err: %s"), *SDKErrorToString(err));
  return IsSuccess(err);
  ;
}

bool UZoomMeetingSDKBPLibrary::BeginTurnRight() {
  TUniquePtr<CameraController> camera_controller(CameraController::Create());
  if (!camera_controller.Get()) {
    UE_LOG(BPZoomMeetingSDKLog, Error, TEXT("CameraController nullptr"));
    return false;
  }
  auto err = camera_controller->BeginTurnRight();
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("CameraController::BeginTurnRight err: %s"),
         *SDKErrorToString(err));
  return IsSuccess(err);
  ;
}

bool UZoomMeetingSDKBPLibrary::ContinueTurnRight() {
  TUniquePtr<CameraController> camera_controller(CameraController::Create());
  if (!camera_controller.Get()) {
    UE_LOG(BPZoomMeetingSDKLog, Error, TEXT("CameraController nullptr"));
    return false;
  }
  auto err = camera_controller->ContinueTurnRight();
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("CameraController::ContinueTurnRight err: %s"),
         *SDKErrorToString(err));
  return IsSuccess(err);
  ;
}

bool UZoomMeetingSDKBPLibrary::EndTurnRight() {
  TUniquePtr<CameraController> camera_controller(CameraController::Create());
  if (!camera_controller.Get()) {
    UE_LOG(BPZoomMeetingSDKLog, Error, TEXT("CameraController nullptr"));
    return false;
  }
  auto err = camera_controller->EndTurnRight();
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("CameraController::EndTurnRight err: %s"),
         *SDKErrorToString(err));
  return IsSuccess(err);
  ;
}

bool UZoomMeetingSDKBPLibrary::BeginTurnUp() {
  TUniquePtr<CameraController> camera_controller(CameraController::Create());
  if (!camera_controller.Get()) {
    UE_LOG(BPZoomMeetingSDKLog, Error, TEXT("CameraController nullptr"));
    return false;
  }
  auto err = camera_controller->BeginTurnUp();
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("CameraController::BeginTurnUp err: %s"), *SDKErrorToString(err));
  return IsSuccess(err);
  ;
}

bool UZoomMeetingSDKBPLibrary::ContinueTurnUp() {
  TUniquePtr<CameraController> camera_controller(CameraController::Create());
  if (!camera_controller.Get()) {
    UE_LOG(BPZoomMeetingSDKLog, Error, TEXT("CameraController nullptr"));
    return false;
  }
  auto err = camera_controller->ContinueTurnUp();
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("CameraController::ContinueTurnUp err: %s"),
         *SDKErrorToString(err));
  return IsSuccess(err);
  ;
}

bool UZoomMeetingSDKBPLibrary::EndTurnUp() {
  TUniquePtr<CameraController> camera_controller(CameraController::Create());
  if (!camera_controller.Get()) {
    UE_LOG(BPZoomMeetingSDKLog, Error, TEXT("CameraController nullptr"));
    return false;
  }
  auto err = camera_controller->EndTurnUp();
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("CameraController::EndTurnUp err: %s"), *SDKErrorToString(err));
  return IsSuccess(err);
  ;
}

bool UZoomMeetingSDKBPLibrary::BeginTurnDown() {
  TUniquePtr<CameraController> camera_controller(CameraController::Create());
  if (!camera_controller.Get()) {
    UE_LOG(BPZoomMeetingSDKLog, Error, TEXT("CameraController nullptr"));
    return false;
  }
  auto err = camera_controller->BeginTurnDown();
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("CameraController::BeginTurnDown err: %s"),
         *SDKErrorToString(err));
  return IsSuccess(err);
  ;
}

bool UZoomMeetingSDKBPLibrary::ContinueTurnDown() {
  TUniquePtr<CameraController> camera_controller(CameraController::Create());
  if (!camera_controller.Get()) {
    UE_LOG(BPZoomMeetingSDKLog, Error, TEXT("CameraController nullptr"));
    return false;
  }
  auto err = camera_controller->ContinueTurnDown();
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("CameraController::ContinueTurnDown err: %s"),
         *SDKErrorToString(err));
  return IsSuccess(err);
  ;
}

bool UZoomMeetingSDKBPLibrary::EndTurnDown() {
  TUniquePtr<CameraController> camera_controller(CameraController::Create());
  if (!camera_controller.Get()) {
    UE_LOG(BPZoomMeetingSDKLog, Error, TEXT("CameraController nullptr"));
    return false;
  }
  auto err = camera_controller->EndTurnDown();
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("CameraController::EndTurnDown err: %s"), *SDKErrorToString(err));
  return IsSuccess(err);
  ;
}

bool UZoomMeetingSDKBPLibrary::BeginZoomIn() {
  TUniquePtr<CameraController> camera_controller(CameraController::Create());
  if (!camera_controller.Get()) {
    UE_LOG(BPZoomMeetingSDKLog, Error, TEXT("CameraController nullptr"));
    return false;
  }
  auto err = camera_controller->BeginZoomIn();
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("CameraController::BeginZoomIn err: %s"), *SDKErrorToString(err));
  return IsSuccess(err);
  ;
}

bool UZoomMeetingSDKBPLibrary::ContinueZoomIn() {
  TUniquePtr<CameraController> camera_controller(CameraController::Create());
  if (!camera_controller.Get()) {
    UE_LOG(BPZoomMeetingSDKLog, Error, TEXT("CameraController nullptr"));
    return false;
  }
  auto err = camera_controller->ContinueZoomIn();
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("CameraController::ContinueZoomIn err: %s"),
         *SDKErrorToString(err));
  return IsSuccess(err);
  ;
}

bool UZoomMeetingSDKBPLibrary::EndZoomIn() {
  TUniquePtr<CameraController> camera_controller(CameraController::Create());
  if (!camera_controller.Get()) {
    UE_LOG(BPZoomMeetingSDKLog, Error, TEXT("CameraController nullptr"));
    return false;
  }
  auto err = camera_controller->EndZoomIn();
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("CameraController::EndZoomIn err: %s"), *SDKErrorToString(err));
  return IsSuccess(err);
  ;
}

bool UZoomMeetingSDKBPLibrary::BeginZoomOut() {
  TUniquePtr<CameraController> camera_controller(CameraController::Create());
  if (!camera_controller.Get()) {
    UE_LOG(BPZoomMeetingSDKLog, Error, TEXT("CameraController nullptr"));
    return false;
  }
  auto err = camera_controller->BeginZoomOut();
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("CameraController::BeginZoomOut err: %s"),
         *SDKErrorToString(err));
  return IsSuccess(err);
  ;
}

bool UZoomMeetingSDKBPLibrary::ContinueZoomOut() {
  TUniquePtr<CameraController> camera_controller(CameraController::Create());
  if (!camera_controller.Get()) {
    UE_LOG(BPZoomMeetingSDKLog, Error, TEXT("CameraController nullptr"));
    return false;
  }
  auto err = camera_controller->ContinueZoomOut();
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("CameraController::ContinueZoomOut err: %s"),
         *SDKErrorToString(err));
  return IsSuccess(err);
  ;
}

bool UZoomMeetingSDKBPLibrary::EndZoomOut() {
  TUniquePtr<CameraController> camera_controller(CameraController::Create());
  if (!camera_controller.Get()) {
    UE_LOG(BPZoomMeetingSDKLog, Error, TEXT("CameraController nullptr"));
    return false;
  }
  auto err = camera_controller->EndZoomOut();
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("CameraController::EndZoomOut err: %s"), *SDKErrorToString(err));
  return IsSuccess(err);
  ;
}

// ======= IClosedCaptionController

bool UZoomMeetingSDKBPLibrary::CanAssignOtherToSendCC() {
  TUniquePtr<ClosedCaptionController> cc_controller(
      ClosedCaptionController::Create());
  if (!cc_controller.Get()) {
    UE_LOG(BPZoomMeetingSDKLog, Error,
           TEXT("ClosedCaptionController nullptr"));
    return false;
  }
  return cc_controller->CanAssignOthersToSendCC();
}

bool UZoomMeetingSDKBPLibrary::CanBeAssignedToSendCC(int userID) {
  TUniquePtr<ClosedCaptionController> cc_controller(
      ClosedCaptionController::Create());
  if (!cc_controller.Get()) {
    UE_LOG(BPZoomMeetingSDKLog, Error,
           TEXT("ClosedCaptionController nullptr"));
    return false;
  }
  return cc_controller->CanBeAssignedToSendCC(userID);
}

bool UZoomMeetingSDKBPLibrary::CanStartLiveTranscription() {
  TUniquePtr<ClosedCaptionController> cc_controller(
      ClosedCaptionController::Create());
  if (!cc_controller.Get()) {
    UE_LOG(BPZoomMeetingSDKLog, Error,
           TEXT("ClosedCaptionController nullptr"));
    return false;
  }
  return cc_controller->CanStartLiveTranscription();
}

bool UZoomMeetingSDKBPLibrary::CanSendClosedCaption() {
  TUniquePtr<ClosedCaptionController> cc_controller(
      ClosedCaptionController::Create());
  if (!cc_controller.Get()) {
    UE_LOG(BPZoomMeetingSDKLog, Error,
           TEXT("ClosedCaptionController nullptr"));
    return false;
  }
  return cc_controller->CanSendClosedCaption();
}

// ====== IJoinMeetingBehaviorConfiguration

bool UZoomMeetingSDKBPLibrary::EnableForceAutoStartMyVideoWhenJoinMeeting(
    bool enable) {
  TUniquePtr<JoinMeetingBehaviorConfiguration> meeting_configuration(
      JoinMeetingBehaviorConfiguration::Create());
  if (!meeting_configuration.Get()) {
    UE_LOG(BPZoomMeetingSDKLog, Error,
           TEXT("JoinMeetingBehaviorConfiguration nullptr"));
    return false;
  }
  meeting_configuration->EnableForceAutoStartMyVideoWhenJoinMeeting(enable);
  return true;
}

bool UZoomMeetingSDKBPLibrary::EnableForceAutoStopMyVideoWhenJoinMeeting(
    bool enable) {
  TUniquePtr<JoinMeetingBehaviorConfiguration> meeting_configuration(
      JoinMeetingBehaviorConfiguration::Create());
  if (!meeting_configuration.Get()) {
    UE_LOG(BPZoomMeetingSDKLog, Error,
           TEXT("JoinMeetingBehaviorConfiguration nullptr"));
    return false;
  }
  meeting_configuration->EnableForceAutoStopMyVideoWhenJoinMeeting(enable);
  return true;
}

bool UZoomMeetingSDKBPLibrary::MuteAudio(int userID, bool allowUnmuteBySelf) {
  TUniquePtr<MeetingAudioController> meeting_audio_controller(
      MeetingAudioController::Create());
  if (!meeting_audio_controller.Get()) {
    UE_LOG(BPZoomMeetingSDKLog, Error, TEXT("MeetingConfiguration nullptr"));
    return false;
  }
  auto err = meeting_audio_controller->MuteAudio(userID, allowUnmuteBySelf);
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("MuteAudio: userID:%d, allowUnmuteBySelf:%s, err: %s"), userID,
         *BoolToString(allowUnmuteBySelf), *SDKErrorToString(err));
  return IsSuccess(err);
}

bool UZoomMeetingSDKBPLibrary::CanUnMuteByself() {
  TUniquePtr<MeetingAudioController> meeting_audio_controller(
      MeetingAudioController::Create());
  if (!meeting_audio_controller.Get()) {
    UE_LOG(BPZoomMeetingSDKLog, Error, TEXT("MeetingConfiguration nullptr"));
    return false;
  }
  return meeting_audio_controller->CanUnMuteBySelf();
}

bool UZoomMeetingSDKBPLibrary::UnMuteAudio(int userID) {
  TUniquePtr<MeetingAudioController> meeting_audio_controller(
      MeetingAudioController::Create());
  if (!meeting_audio_controller.Get()) {
    UE_LOG(BPZoomMeetingSDKLog, Error, TEXT("MeetingConfiguration nullptr"));
    return false;
  }
  auto err = meeting_audio_controller->UnMuteAudio(userID);
  UE_LOG(BPZoomMeetingSDKLog, Display, TEXT("UnMuteAudio: err: %s"),
         *SDKErrorToString(err));
  return IsSuccess(err);
}

bool UZoomMeetingSDKBPLibrary::IsBOEnabled() {
  TUniquePtr<MeetingBOController> meeting_bo_controller(
      MeetingBOController::Create());
  if (!meeting_bo_controller.Get()) {
    UE_LOG(BPZoomMeetingSDKLog, Error, TEXT("MeetingBOController nullptr"));
    return false;
  }
  return meeting_bo_controller->IsBOEnabled();
}

bool UZoomMeetingSDKBPLibrary::IsBOStarted() {
  TUniquePtr<MeetingBOController> meeting_bo_controller(
      MeetingBOController::Create());
  if (!meeting_bo_controller.Get()) {
    UE_LOG(BPZoomMeetingSDKLog, Error, TEXT("MeetingBOController nullptr"));
    return false;
  }
  return meeting_bo_controller->IsBOStarted();
}

bool UZoomMeetingSDKBPLibrary::IsInBOMeeting() {
  TUniquePtr<MeetingBOController> meeting_bo_controller(
      MeetingBOController::Create());
  if (!meeting_bo_controller.Get()) {
    UE_LOG(BPZoomMeetingSDKLog, Error, TEXT("MeetingBOController nullptr"));
    return false;
  }
  return meeting_bo_controller->IsInBOMeeting();
}

bool UZoomMeetingSDKBPLibrary::IsEmojiReactionEnabled() {
  UE_LOG(BPZoomMeetingSDKLog, Error, TEXT("IsEmojiReactionEnabled"));

  TUniquePtr<EmojiReactionController> emoji_controller(
      EmojiReactionController::Create());
  if (!emoji_controller.Get()) {
    UE_LOG(BPZoomMeetingSDKLog, Display,
           TEXT("MeetingEmojiReactionController nullptr"));
    return false;
  }
  return emoji_controller->IsEmojiReactionEnabled();
}

bool UZoomMeetingSDKBPLibrary::SendEmojiReaction(SDK_EMOJI_REACTION_TYPE type) {
  TUniquePtr<EmojiReactionController> emoji_controller(
      EmojiReactionController::Create());
  UE_LOG(BPZoomMeetingSDKLog, Display, TEXT("SendEmojiReaction"));
  if (!emoji_controller.Get()) {
    UE_LOG(BPZoomMeetingSDKLog, Error,
           TEXT("MeetingEmojiReactionController nullptr"));
    return false;
  }

  ZOOM_SDK_NAMESPACE::SDKEmojiReactionType reaction_type =
      ZOOM_SDK_NAMESPACE::SDKEmojiReactionType::SDKEmojiReactionType_None;
  switch (type) {
  case SDK_EMOJI_REACTION_TYPE::SDKEmojiReactionType_None:
    reaction_type =
        ZOOM_SDK_NAMESPACE::SDKEmojiReactionType::SDKEmojiReactionType_None;
    break;
  case SDK_EMOJI_REACTION_TYPE::SDKEmojiReactionType_Clap:
    reaction_type =
        ZOOM_SDK_NAMESPACE::SDKEmojiReactionType::SDKEmojiReactionType_Clap;
    break;
  case SDK_EMOJI_REACTION_TYPE::SDKEmojiReactionType_Thumbsup:
    reaction_type =
        ZOOM_SDK_NAMESPACE::SDKEmojiReactionType::SDKEmojiReactionType_Thumbsup;
    break;
  case SDK_EMOJI_REACTION_TYPE::SDKEmojiReactionType_Heart:
    reaction_type =
        ZOOM_SDK_NAMESPACE::SDKEmojiReactionType::SDKEmojiReactionType_Heart;
    break;
  case SDK_EMOJI_REACTION_TYPE::SDKEmojiReactionType_Joy:
    reaction_type =
        ZOOM_SDK_NAMESPACE::SDKEmojiReactionType::SDKEmojiReactionType_Joy;
    break;
  case SDK_EMOJI_REACTION_TYPE::SDKEmojiReactionType_Openmouth:
    reaction_type = ZOOM_SDK_NAMESPACE::SDKEmojiReactionType::
        SDKEmojiReactionType_Openmouth;
    break;
  case SDK_EMOJI_REACTION_TYPE::SDKEmojiReactionType_Tada:
    reaction_type =
        ZOOM_SDK_NAMESPACE::SDKEmojiReactionType::SDKEmojiReactionType_Tada;
    break;
  }

  auto err = emoji_controller->SendEmojiReaction(reaction_type);
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("MeetingEmojiReactionController::SendEmojiReaction: err: %s"),
         *SDKErrorToString(err));
  return IsSuccess(err);
}

bool UZoomMeetingSDKBPLibrary::SendEmojiFeedback(SDK_EMOJI_FEEDBACK_TYPE type) {
  TUniquePtr<EmojiReactionController> emoji_controller(
      EmojiReactionController::Create());
  UE_LOG(BPZoomMeetingSDKLog, Display, TEXT("SendEmojiFeedback"));
  if (!emoji_controller.Get()) {
    UE_LOG(BPZoomMeetingSDKLog, Error,
           TEXT("MeetingEmojiReactionController nullptr"));
    return false;
  }

  ZOOM_SDK_NAMESPACE::SDKEmojiFeedbackType feedback_type =
      ZOOM_SDK_NAMESPACE::SDKEmojiFeedbackType::SDKEmojiFeedbackType_None;
  switch (type) {
  case SDK_EMOJI_FEEDBACK_TYPE::SDKEmojiFeedbackType_None:
    feedback_type =
        ZOOM_SDK_NAMESPACE::SDKEmojiFeedbackType::SDKEmojiFeedbackType_None;
    break;
  case SDK_EMOJI_FEEDBACK_TYPE::SDKEmojiFeedbackType_Yes:
    feedback_type =
        ZOOM_SDK_NAMESPACE::SDKEmojiFeedbackType::SDKEmojiFeedbackType_Yes;
    break;
  case SDK_EMOJI_FEEDBACK_TYPE::SDKEmojiFeedbackType_No:
    feedback_type =
        ZOOM_SDK_NAMESPACE::SDKEmojiFeedbackType::SDKEmojiFeedbackType_No;
    break;
  case SDK_EMOJI_FEEDBACK_TYPE::SDKEmojiFeedbackType_SpeedUp:
    feedback_type =
        ZOOM_SDK_NAMESPACE::SDKEmojiFeedbackType::SDKEmojiFeedbackType_SpeedUp;
    break;
  case SDK_EMOJI_FEEDBACK_TYPE::SDKEmojiFeedbackType_SlowDown:
    feedback_type =
        ZOOM_SDK_NAMESPACE::SDKEmojiFeedbackType::SDKEmojiFeedbackType_SlowDown;
    break;
  case SDK_EMOJI_FEEDBACK_TYPE::SDKEmojiFeedbackType_Away:
    feedback_type =
        ZOOM_SDK_NAMESPACE::SDKEmojiFeedbackType::SDKEmojiFeedbackType_Away;
    break;
  }
  auto err = emoji_controller->SendEmojiFeedback(feedback_type);
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("MeetingEmojiReactionController::SendEmojiFeedback: err: %s"),
         *SDKErrorToString(err));
  return IsSuccess(err);
}

bool UZoomMeetingSDKBPLibrary::CancelEmojiFeedback() {
  TUniquePtr<EmojiReactionController> emoji_controller(
      EmojiReactionController::Create());
  UE_LOG(BPZoomMeetingSDKLog, Display, TEXT("CancelEmojiFeedback"));
  if (!emoji_controller.Get()) {
    UE_LOG(BPZoomMeetingSDKLog, Error,
           TEXT("MeetingEmojiReactionController nullptr"));
    return false;
  }

  auto err = emoji_controller->CancelEmojiFeedback();
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("MeetingEmojiReactionController::CancelEmojiFeedback: err: %s"),
         *SDKErrorToString(err));
  return IsSuccess(err);
}

bool UZoomMeetingSDKBPLibrary::DeleteChatMessage(FString msgID) {
  TUniquePtr<MeetingChatController> meeting_chat_controller(
      MeetingChatController::Create());
  if (!meeting_chat_controller.Get()) {
    UE_LOG(BPZoomMeetingSDKLog, Error,
           TEXT("MeetingChatController: nullptr"));
    return false;
  }
  auto err =
      meeting_chat_controller->DeleteChatMessage(const_cast<TCHAR *>(*msgID));
  UE_LOG(BPZoomMeetingSDKLog, Display, TEXT("DeleteChatMessage: err: %s"),
         *SDKErrorToString(err));
  return IsSuccess(err);
}

FUEChatMsgInfo UZoomMeetingSDKBPLibrary::GetChatMessageInfo(FString msgID) {
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("UZoomMeetingSDKBPLibrary::GetChatMessageInfo triggered"));
  // Check if meeting chat controller is set
  auto *mcc = GetMeetingChatController();
  if (!mcc) {
    UE_LOG(BPZoomMeetingSDKLog, Error,
           TEXT("UZoomMeetingSDKBPLibrary::GetChatMessageInfo: Meeting chat "
                "controller is null."));
    return FUEChatMsgInfo();
  }

  // Check if message exists
  auto message_obj = mcc->GetChatMessageById(const_cast<TCHAR *>(*msgID));
  if (!message_obj) {
    UE_LOG(BPZoomMeetingSDKLog, Error,
           TEXT("UZoomMeetingSDKBPLibrary::GetChatMessageInfo: Error: cannot "
                "get chat message object."));
    return FUEChatMsgInfo();
  }

  // Return message
  return FUEChatMsgInfo(message_obj);
}

TArray<FString> UZoomMeetingSDKBPLibrary::GetAllChatMessageID() {
  TUniquePtr<MeetingChatController> meeting_chat_controller(
      MeetingChatController::Create());
  if (!meeting_chat_controller.Get()) {
    UE_LOG(BPZoomMeetingSDKLog, Error,
           TEXT("MeetingChatController: nullptr"));
    return TArray<FString>();
  }
  ZOOM_SDK_NAMESPACE::IList<const wchar_t *> *lstMessageID =
      meeting_chat_controller->GetAllChatMessageID();
  if (!lstMessageID) {
    UE_LOG(ZoomMeetingSDKLog, Error,
           TEXT("GetAllChatMessageID: No message ids found."));
    return TArray<FString>();
  }

  UE_LOG(ZoomMeetingSDKLog, Display,
         TEXT("GetAllChatMessageID: Num message ids: %d"),
         lstMessageID->GetCount());
  if (lstMessageID->GetCount() == 0) {
    return TArray<FString>();
  }
  TArray<FString> FlstMessageID;
  for (int i = 0; i < lstMessageID->GetCount(); ++i) {
    const wchar_t *msgID = lstMessageID->GetItem(i);
    if (!msgID) {
      UE_LOG(ZoomMeetingSDKLog, Error,
             TEXT("GetAllChatMessageID: Message Id is nullptr"));
      continue;
    }
    FlstMessageID.Add(msgID);
  }
  return FlstMessageID;
}

FUEChatStatus UZoomMeetingSDKBPLibrary::GetChatStatus() {
  TUniquePtr<MeetingChatController> meeting_chat_controller(
      MeetingChatController::Create());
  if (!meeting_chat_controller.Get()) {
    UE_LOG(BPZoomMeetingSDKLog, Error,
           TEXT("MeetingChatController: nullptr"));
    return FUEChatStatus();
  }
  const ZOOM_SDK_NAMESPACE::ChatStatus *pChatStatus =
      meeting_chat_controller->GetChatStatus();
  if (pChatStatus) {
    return FUEChatStatus(pChatStatus);
  }
  return FUEChatStatus();
}

bool UZoomMeetingSDKBPLibrary::IsChatMessageCanBeDeleted(FString msgID) {
  TUniquePtr<MeetingChatController> meeting_chat_controller(
      MeetingChatController::Create());
  if (!meeting_chat_controller.Get()) {
    UE_LOG(BPZoomMeetingSDKLog, Error,
           TEXT("MeetingChatController: nullptr"));
    return false;
  }
  return meeting_chat_controller->IsChatMessageCanBeDeleted(
      const_cast<TCHAR *>(*msgID));
}

bool UZoomMeetingSDKBPLibrary::SendChatMessage(FString content, int64 receiver,
                                               FString chatType) {
  TUniquePtr<MeetingChatController> meeting_chat_controller(
      MeetingChatController::Create());
  if (!meeting_chat_controller.Get()) {
    UE_LOG(
        BPZoomMeetingSDKLog, Error,
        TEXT("ZoomMeetingSDKSendChatMessage:MeetingChatController: nullptr"));
    return false;
  }
  UE_LOG(BPZoomMeetingSDKLog, Display, TEXT("ChatType: %s"), *chatType);
  ZOOM_SDK_NAMESPACE::SDKChatMessageType sendType =
      ZOOM_SDK_NAMESPACE::SDKChatMessageType_To_All;
  if (strcmp(TCHAR_TO_ANSI(*chatType), "1") == 0) {
    sendType = ZOOM_SDK_NAMESPACE::SDKChatMessageType_To_Individual;
  }

  auto err = meeting_chat_controller->SendChatMsgTo(
      const_cast<TCHAR *>(*content), receiver, sendType);
  UE_LOG(BPZoomMeetingSDKLog, Display, TEXT("SendChatMessage: err: %s"),
         *SDKErrorToString(err));

  return IsSuccess(err);
}

// ======= IMeetingUIElemConfiguration

bool UZoomMeetingSDKBPLibrary::EnableClaimHostFeature(bool enable) {
  TUniquePtr<MeetingUIElemConfiguration> meeting_ui_configuration(
      MeetingUIElemConfiguration::Create());
  if (!meeting_ui_configuration.Get()) {
    UE_LOG(BPZoomMeetingSDKLog, Error,
           TEXT("MeetingUIElemConfiguration: nullptr"));
    return false;
  }
  meeting_ui_configuration->EnableClaimHostFeature(enable);
  return true;
}

// ======== ICustomImmersiveController
bool UZoomMeetingSDKBPLibrary::IsSupportImmersive() {
  TUniquePtr<CustomImmersiveController> custom_immersive_controller(
      CustomImmersiveController::Create());
  if (!custom_immersive_controller.Get()) {
    UE_LOG(BPZoomMeetingSDKLog, Error,
           TEXT("CustomImmersiveController: nullptr"));
    return false;
  }
  return custom_immersive_controller->isSupportImmersive();
}

// ========= IAnnotationController
bool UZoomMeetingSDKBPLibrary::IsAnnotationDisable() {
  TUniquePtr<AnnotationController> annotation_controller(
      AnnotationController::Create());
  if (!annotation_controller.Get()) {
    UE_LOG(BPZoomMeetingSDKLog, Error, TEXT("AnnotationController: nullptr"));
    return false;
  }
  return annotation_controller->IsAnnotationDisable();
}

// ========== IDirectShareServiceHelper
bool UZoomMeetingSDKBPLibrary::CanStartDirectShare() {
  TUniquePtr<DirectShareServiceHelper> direct_share_helper(
      DirectShareServiceHelper::Create());
  if (!direct_share_helper.Get()) {
    UE_LOG(BPZoomMeetingSDKLog, Error,
           TEXT("DirectShareServiceHelper: nullptr"));
    return false;
  }
  auto err = direct_share_helper->CanStartDirectShare();
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("ZoomMeetingSDK CanStartDirectShare: err: %s"),
         *SDKErrorToString(err));
  return IsSuccess(err);
}

// ========== IMeetingVideoController

TArray<FUEUserInfo> UZoomMeetingSDKBPLibrary::GetSpotlightedUserList() {
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("UZoomMeetingSDKBPLibrary::GetSpotlightedUserList "
              "triggered"));

  // Return value.
  TArray<FUEUserInfo> ue_users_info;

  // Get video controller.
  auto *mvc = GetMeetingVideoController();
  if (!mvc) {
    return ue_users_info;
  }

  // Get participant controller.
  auto *mpc = GetMeetingParticipantController();
  if (!mpc) {
    return ue_users_info;
  }

  // Get spotlighted user ids.
  auto *zoom_user_info_lst_ids = mvc->GetSpotlightedUserList();
  if (!zoom_user_info_lst_ids) {
    UE_LOG(BPZoomMeetingSDKLog, Error,
           TEXT("UZoomMeetingSDKBPLibrary::GetSpotlightedUserList: no users in "
                "the spotlighted participant list."));
    return ue_users_info;
  }
  UE_LOG(
      BPZoomMeetingSDKLog, Display,
      TEXT("UZoomMeetingSDKBPLibrary::GetSpotlightedUserList: num users: %d."),
      zoom_user_info_lst_ids->GetCount());

  // Set UserInfo.
  TArray<UserInfo> ret_user_info;
  for (int i = 0; i < zoom_user_info_lst_ids->GetCount(); ++i) {
    auto user_id = zoom_user_info_lst_ids->GetItem(i);
    auto *iuser_info = mpc->GetUserByUserID(user_id);
    if (!iuser_info) {
      UE_LOG(BPZoomMeetingSDKLog, Error,
             TEXT("UZoomMeetingSDKBPLibrary::GetSpotlightedUserList: unable to "
                  "get user info for user: "
                  "%d."),
             user_id);
      continue;
    }
    ret_user_info.Add(UserInfo(iuser_info));
  }

  // Check UserInfo array.
  auto zoom_users_info = ret_user_info;
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("UZoomMeetingSDKBPLibrary::GetSpotlightedUserList: "
              "Number of spotlighted users: %d"),
         zoom_users_info.Num());

  if (zoom_users_info.IsEmpty()) {
    UE_LOG(BPZoomMeetingSDKLog, Error,
           TEXT("UZoomMeetingSDKBPLibrary::GetSpotlightedUserList: "
                "Spotlighted user list is empty."));
    return ue_users_info;
  }

  // Convert the UserInfo into FUEUserInfo long version.
  for (auto &single_user_info : zoom_users_info) {
    auto *user_name = single_user_info.GetUserNameW();
    if (user_name) {
      UE_LOG(BPZoomMeetingSDKLog, Display, TEXT("UserID: %d | UserName: %s"),
             single_user_info.GetUserID(), user_name);
    } else {
      UE_LOG(BPZoomMeetingSDKLog, Display, TEXT("UserID: %d"),
             single_user_info.GetUserID());
    }
    ue_users_info.Add(FUEUserInfo(single_user_info));
  }

  // Return.
  return ue_users_info;
}

bool UZoomMeetingSDKBPLibrary::SpotlightVideo(int64 user_id) {
  auto *mvc = GetMeetingVideoController();
  if (!mvc) {
    return false;
  }

  auto err = mvc->SpotlightVideo(user_id);
  UE_LOG(BPZoomMeetingSDKLog, Display, TEXT("SpotlightVideo: %d, err: %s"),
         user_id, *SDKErrorToString(err));
  return IsSuccess(err);
}

bool UZoomMeetingSDKBPLibrary::UnSpotlightAllVideos() {
  auto *mvc = GetMeetingVideoController();
  if (!mvc) {
    return false;
  }

  auto err = mvc->UnSpotlightAllVideos();
  UE_LOG(BPZoomMeetingSDKLog, Display, TEXT("UnSpotlightAllVideos: err: %s"),
         *SDKErrorToString(err));
  return IsSuccess(err);
}

bool UZoomMeetingSDKBPLibrary::UnSpotlightVideo(int64 user_id) {
  auto *mvc = GetMeetingVideoController();
  if (!mvc) {
    return false;
  }

  auto err = mvc->UnSpotlightVideo(user_id);
  UE_LOG(BPZoomMeetingSDKLog, Display, TEXT("UnSpotlightVideo: %d, err: %s"),
         user_id, *SDKErrorToString(err));
  return IsSuccess(err);
}

bool UZoomMeetingSDKBPLibrary::CanSpotlight(int64 user_id) {
  auto *mvc = GetMeetingVideoController();
  if (!mvc) {
    return false;
  }

  ZOOM_SDK_NAMESPACE::SpotlightResult SpotlightResult;
  auto err = mvc->CanSpotlight(user_id, SpotlightResult);
  UE_LOG(BPZoomMeetingSDKLog, Display, TEXT("CanSpotlight: %d, err: %s"),
         user_id, *SDKErrorToString(err));
  return IsSuccess(err);
}

bool UZoomMeetingSDKBPLibrary::CanUnSpotlight(int64 user_id) {
  auto *mvc = GetMeetingVideoController();
  if (!mvc) {
    return false;
  }

  ZOOM_SDK_NAMESPACE::SpotlightResult SpotlightResult;
  auto err = mvc->CanUnSpotlight(user_id, SpotlightResult);
  UE_LOG(BPZoomMeetingSDKLog, Display, TEXT("CanUnSpotlight: %d, err: %s"),
         user_id, *SDKErrorToString(err));
  return IsSuccess(err);
}

bool UZoomMeetingSDKBPLibrary::MuteVideo() {
  auto *mvc = GetMeetingVideoController();
  if (!mvc) {
    return false;
  }

  auto err = mvc->MuteVideo();
  UE_LOG(BPZoomMeetingSDKLog, Display, TEXT("MuteVideo: err: %s"),
         *SDKErrorToString(err));
  return IsSuccess(err);
}

bool UZoomMeetingSDKBPLibrary::UnmuteVideo() {
  auto *mvc = GetMeetingVideoController();
  if (!mvc) {
    return false;
  }

  auto err = mvc->UnmuteVideo();
  UE_LOG(BPZoomMeetingSDKLog, Display, TEXT("UnmuteVideo: err: %s"),
         *SDKErrorToString(err));
  return IsSuccess(err);
}

bool UZoomMeetingSDKBPLibrary::StopAttendeeVideo(int64 user_id) {
  auto *mvc = GetMeetingVideoController();
  if (!mvc) {
    return false;
  }

  auto err = mvc->StopAttendeeVideo(user_id);
  UE_LOG(BPZoomMeetingSDKLog, Display, TEXT("StopAttendeeVideo: %d, err: %s"),
         user_id, *SDKErrorToString(err));
  return IsSuccess(err);
}

bool UZoomMeetingSDKBPLibrary::AskAttendeeToStartVideo(int64 user_id) {
  auto *mvc = GetMeetingVideoController();
  if (!mvc) {
    return false;
  }

  auto err = mvc->AskAttendeeToStartVideo(user_id);
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("AskAttendeeToStartVideo: %d, err: %s"), user_id,
         *SDKErrorToString(err));
  return IsSuccess(err);
}

bool UZoomMeetingSDKBPLibrary::CanStopAttendeeVideo(int64 user_id) {
  auto *mvc = GetMeetingVideoController();
  if (!mvc) {
    return false;
  }

  auto err = mvc->CanStopAttendeeVideo(user_id);
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("CanStopAttendeeVideo: %d, err: %s"), user_id,
         *SDKErrorToString(err));
  return IsSuccess(err);
}

bool UZoomMeetingSDKBPLibrary::CanAskAttendeeToStartVideo(int64 user_id) {
  auto *mvc = GetMeetingVideoController();
  if (!mvc) {
    return false;
  }

  auto err = mvc->CanAskAttendeeToStartVideo(user_id);
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("CanAskAttendeeToStartVideo: %d, err: %s"), user_id,
         *SDKErrorToString(err));
  return IsSuccess(err);
}

// ========== IMeetingLiveStreamController
bool UZoomMeetingSDKBPLibrary::CanStartLiveStream() {
  auto *mlsc = GetMeetingLiveStreamController();
  if (!mlsc) {
    return false;
  }

  auto err = mlsc->CanStartLiveStream();
  UE_LOG(BPZoomMeetingSDKLog, Display, TEXT("CanStartLiveStream: err: %s"),
         *SDKErrorToString(err));
  return IsSuccess(err);
}

bool UZoomMeetingSDKBPLibrary::CanStartRawLiveStream() {
  auto *mlsc = GetMeetingLiveStreamController();
  if (!mlsc) {
    return false;
  }

  auto err = mlsc->CanStartRawLiveStream();
  UE_LOG(BPZoomMeetingSDKLog, Display, TEXT("CanStartRawLiveStream: err: %s"),
         *SDKErrorToString(err));
  return IsSuccess(err);
}

TArray<FUEUserInfo> UZoomMeetingSDKBPLibrary::GetParticipantsList() {
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("UZoomMeetingSDKBPLibrary::GetParticipantsList "
              "triggered"));
  // Return value
  TArray<FUEUserInfo> ue_users_info;

  if (!InMeeting()) {
    UE_LOG(BPZoomMeetingSDKLog, Error,
           TEXT("UZoomMeetingSDKBPLibrary::GetParticipantsList: "
                "not in meeting."));
    return ue_users_info;
  }

  auto *user_manager = SDKInterfaceWrap::GetInst().GetUserManager();
  if (user_manager == nullptr) {
    UE_LOG(BPZoomMeetingSDKLog, Error,
           TEXT("UZoomMeetingSDKBPLibrary::GetParticipantsList: "
                "user manager not initialized."));
    return ue_users_info;
  }

  // Convert the UserInfo into FUEUserInfo.
  auto zoom_users_info = user_manager->GetAllUsers();
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("UZoomMeetingSDKBPLibrary::GetParticipantsList: "
              "Number of users: %d"),
         zoom_users_info.Num());

  if (zoom_users_info.IsEmpty()) {
    UE_LOG(BPZoomMeetingSDKLog, Error,
           TEXT("UZoomMeetingSDKBPLibrary::GetParticipantsList: "
                "User list is empty."));
    return ue_users_info;
  }

  for (auto &single_user_info : zoom_users_info) {
    auto *user_name = single_user_info.GetUserNameW();
    if (user_name) {
      UE_LOG(BPZoomMeetingSDKLog, Display, TEXT("UserID: %d | UserName: %s"),
             single_user_info.GetUserID(), user_name);
    } else {
      UE_LOG(BPZoomMeetingSDKLog, Display, TEXT("UserID: %d"),
             single_user_info.GetUserID());
    }
    ue_users_info.Add(FUEUserInfo(single_user_info));
  }

  return ue_users_info;
}

FUEUserInfo UZoomMeetingSDKBPLibrary::GetUserInfo(int64 user_id) {
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("UZoomMeetingSDKBPLibrary::GetUserInfo "
              "triggered"));

  if (!InMeeting()) {
    UE_LOG(BPZoomMeetingSDKLog, Error,
           TEXT("UZoomMeetingSDKBPLibrary::GetParticipantsList: "
                "not in meeting."));
    return FUEUserInfo();
  }

  auto *user_manager = SDKInterfaceWrap::GetInst().GetUserManager();
  if (user_manager == nullptr) {
    UE_LOG(BPZoomMeetingSDKLog, Error,
           TEXT("UZoomMeetingSDKBPLibrary::GetUserInfo: "
                "user manager not initialized."));
    return FUEUserInfo();
  }

  UserInfo user_info;
  if (!user_manager->GetUserInfo(user_id, &user_info)) {
    return FUEUserInfo();
  }

  return FUEUserInfo(user_info);
}

//========== IMeetingParticipantsController
bool UZoomMeetingSDKBPLibrary::LowerAllHands(bool forWebinarAttendees) {
  auto *mpc = GetMeetingParticipantController();
  if (!mpc) {
    return false;
  }
  auto err = mpc->LowerAllHands(forWebinarAttendees);
  UE_LOG(BPZoomMeetingSDKLog, Display, TEXT("LowerAllHands: err: %s"),
         *SDKErrorToString(err));
  return IsSuccess(err);
}

bool UZoomMeetingSDKBPLibrary::LowerHand(int64 user_id) {
  auto *mpc = GetMeetingParticipantController();
  if (!mpc) {
    return false;
  }
  auto err = mpc->LowerHand(user_id);
  UE_LOG(BPZoomMeetingSDKLog, Display, TEXT("LowerHand: user id: %d err: %s"),
         user_id, *SDKErrorToString(err));
  return IsSuccess(err);
}

//========== IMeetingWaitingRoomController
bool UZoomMeetingSDKBPLibrary::AdmitAllToMeeting() {
  TUniquePtr<MeetingWaitingRoomController> meeting_waitingroom_controller(
      MeetingWaitingRoomController::Create());
  if (!meeting_waitingroom_controller.Get()) {
    UE_LOG(BPZoomMeetingSDKLog, Error,
           TEXT("UZoomMeetingSKDBPLibrary::AdmitAllToMeeting nullptr"));
    return false;
  }

  auto err = meeting_waitingroom_controller->AdmitAllToMeeting();
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("UZoomMeetingSKDBPLibrary::AdmitAllToMeeting: err: %s"),
         *SDKErrorToString(err));
  return IsSuccess(err);
}

bool UZoomMeetingSDKBPLibrary::AdmitToMeeting(int64 user_id) {
  TUniquePtr<MeetingWaitingRoomController> meeting_waitingroom_controller(
      MeetingWaitingRoomController::Create());
  if (!meeting_waitingroom_controller.Get()) {
    UE_LOG(BPZoomMeetingSDKLog, Error,
           TEXT("UZoomMeetingSKDBPLibrary::AdmitToMeeting nullptr"));
    return false;
  }
  auto err = meeting_waitingroom_controller->AdmitToMeeting(user_id);
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("UZoomMeetingSKDBPLibrary::AdmitToMeeting: err: %s"),
         *SDKErrorToString(err));
  return IsSuccess(err);
}

TArray<int64> UZoomMeetingSDKBPLibrary::GetWaitingRoomLst() {
  TArray<int64> waiting_room_list;
  TUniquePtr<MeetingWaitingRoomController> meeting_waitingroom_controller(
      MeetingWaitingRoomController::Create());
  if (!meeting_waitingroom_controller.Get()) {
    UE_LOG(BPZoomMeetingSDKLog, Error,
           TEXT("UZoomMeetingSKDBPLibrary::GetWaitingRoomLst nullptr"));
    return waiting_room_list;
  }

  auto item_list = meeting_waitingroom_controller->GetWaitingRoomLst();

  if (!item_list) {
    UE_LOG(
        BPZoomMeetingSDKLog, Error,
        TEXT("UZoomMeetingSKDBPLibrary::GetWaitingRoomLst: failed: nullptr"));
    return waiting_room_list;
  }
  for (int i = 0; i < item_list->GetCount(); i++) {
    waiting_room_list.Add(item_list->GetItem(i));
  }
  return waiting_room_list;
}

FUEUserInfo
UZoomMeetingSDKBPLibrary::GetWaitingRoomUserInfoByID(int64 user_id) {
  TUniquePtr<MeetingWaitingRoomController> meeting_waitingroom_controller(
      MeetingWaitingRoomController::Create());
  if (!meeting_waitingroom_controller.Get()) {
    UE_LOG(
        BPZoomMeetingSDKLog, Error,
        TEXT("UZoomMeetingSKDBPLibrary::GetWaitingRoomUserInfoByID nullptr"));
    return FUEUserInfo();
  }

  auto *iuser_info =
      meeting_waitingroom_controller->GetWaitingRoomUserInfoByID(user_id);

  if (!iuser_info) {
    UE_LOG(BPZoomMeetingSDKLog, Error,
           TEXT("UZoomMeetingSKDBPLibrary::GetWaitingRoomUserInfoByID: failed: "
                "nullptr"));
    return FUEUserInfo();
  }

  UserInfo user_info;
  UserInfo(iuser_info).ShallowCopyTo(&user_info);
  return FUEUserInfo(user_info);
}

bool UZoomMeetingSDKBPLibrary::PutInWaitingRoom(int64 user_id) {
  TUniquePtr<MeetingWaitingRoomController> meeting_waitingroom_controller(
      MeetingWaitingRoomController::Create());
  if (!meeting_waitingroom_controller.Get()) {
    UE_LOG(
        BPZoomMeetingSDKLog, Error,
        TEXT(
            "UZoomMeetingSKDBPLibrary::PutInWaitingRoom: controller not init"));
    return false;
  }

  auto err = meeting_waitingroom_controller->PutInWaitingRoom(user_id);
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("UZoomMeetingSKDBPLibrary::PutInWaitingRoom: err: %s"),
         *SDKErrorToString(err));
  return IsSuccess(err);
}

//============IMeetingWebinarController
bool UZoomMeetingSDKBPLibrary::AllowAttendeeTalk(int64 user_id) {

  TUniquePtr<MeetingWebinarController> meeting_webinar_controller(
      MeetingWebinarController::Create());
  if (!meeting_webinar_controller.Get()) {
    UE_LOG(BPZoomMeetingSDKLog, Error,
           TEXT("UZoomMeetingSKDBPLibrary::AllowAttendeeTalk nullptr"));
    return false;
  }
  auto err = meeting_webinar_controller->AllowAttendeeTalk(user_id);
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("UZoomMeetingSKDBPLibrary::AllowAttendeeTalk: err: %s"),
         *SDKErrorToString(err));
  return IsSuccess(err);
}

// IMeetingRecordingController
bool UZoomMeetingSDKBPLibrary::StartRawRecording() {
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("UZoomMeetingSDKBPLibrary::StartRawRecording "
              "triggered"));

  TUniquePtr<MeetingRecordingController> mrc(
      MeetingRecordingController::Create());

  if (!mrc.Get()) {
    UE_LOG(BPZoomMeetingSDKLog, Error,
           TEXT("UZoomMeetingSKDBPLibrary::StartRawRecording: Unable to create "
                "MeetingRecordingController."));
    return false;
  }

  return IsSuccess(mrc->StartRawRecording());
}

bool UZoomMeetingSDKBPLibrary::StopRawRecording() {
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("UZoomMeetingSDKBPLibrary::StopRawRecording "
              "triggered"));

  TUniquePtr<MeetingRecordingController> mrc(
      MeetingRecordingController::Create());

  if (!mrc.Get()) {
    UE_LOG(BPZoomMeetingSDKLog, Error,
           TEXT("UZoomMeetingSKDBPLibrary::StopRawRecording: Unable to create "
                "MeetingRecordingController."));
    return false;
  }

  return IsSuccess(mrc->StopRawRecording());
}

bool UZoomMeetingSDKBPLibrary::CanAllowDisAllowLocalRecording() {
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("UZoomMeetingSDKBPLibrary::CanAllowDisAllowLocalRecording "
              "triggered:"));

  TUniquePtr<MeetingRecordingController> mrc(
      MeetingRecordingController::Create());
  if (!mrc.Get()) {
    UE_LOG(BPZoomMeetingSDKLog, Error,
           TEXT("UZoomMeetingSDKBPLibrary::CanAllowDisAllowLocalRecording "
                "unable to create MeetingRecordingController."));
    return false;
  }

  auto err = mrc->CanAllowDisAllowLocalRecording();
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("UZoomMeetingSDKBPLibrary::CanAllowDisAllowLocalRecording "
              "return: %s"),
         *SDKErrorToString(err));
  return IsSuccess(err);
}

bool UZoomMeetingSDKBPLibrary::RequestLocalRecordingPrivilege() {
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("UZoomMeetingSDKBPLibrary::RequestLocalRecordingPrivilege "
              "triggered:"));

  TUniquePtr<MeetingRecordingController> mrc(
      MeetingRecordingController::Create());
  if (!mrc.Get()) {
    UE_LOG(BPZoomMeetingSDKLog, Error,
           TEXT("UZoomMeetingSDKBPLibrary::RequestLocalRecordingPrivilege "
                "unable to create MeetingRecordingController."));
    return false;
  }

  auto err = mrc->RequestLocalRecordingPrivilege();
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("UZoomMeetingSDKBPLibrary::RequestLocalRecordingPrivilege "
              "return: %s"),
         *SDKErrorToString(err));
  return IsSuccess(err);
}

TArray<FUEQAItemInfo> UZoomMeetingSDKBPLibrary::GetAllQuestionList() {
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("UZoomMeetingSDKBPLibrary::GetAllQuestionList "
              "triggered:"));
  TArray<FUEQAItemInfo> fue_qa_list;

  auto *mqac = GetMeetingQAController();
  if (!mqac) {
    return fue_qa_list;
  }

  auto i_qa_list = mqac->GetAllQuestionList();

  if (!i_qa_list) {
    UE_LOG(BPZoomMeetingSDKLog, Display,
           TEXT("UZoomMeetingSDKBPLibrary::GetAllQuestionList: "
                "no questions"));
    return fue_qa_list;
  }

  for (int i = 0; i < i_qa_list->GetCount(); i++) {
    auto i_qa_item = i_qa_list->GetItem(i);
    fue_qa_list.Add(FUEQAItemInfo(i_qa_item));
  }

  return fue_qa_list;
}

FUEAuth_Pair
UZoomMeetingSDKBPLibrary::GeneratePKCEAuthPair(FString client_id,
                                               FString redirect_url) {
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("UZoomMeetingSDKBPLibrary::GeneratePKCEAuthPair "
              "triggered: "));

  auto auth_pair =
      PKCE_ZM_AUTH_GEN_FUNC(std::string(TCHAR_TO_UTF8(*client_id)),
                            std::string(TCHAR_TO_UTF8(*redirect_url)));
  return FUEAuth_Pair(auth_pair.auth_url, auth_pair.verifier);
}

FString UZoomMeetingSDKBPLibrary::GenerateJWTAuthToken(FString client_id,
                                                       FString client_secret) {
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("UZoomMeetingSDKBPLibrary::GenerateJWTAuthToken "
              "triggered: "));

  auto token = ZM_AUTH_JWT_GEN(std::string(TCHAR_TO_UTF8(*client_id)),
                               std::string(TCHAR_TO_UTF8(*client_secret)));

  return token;
}

FString UZoomMeetingSDKBPLibrary::UrlEncode(FString url_str) {
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("UZoomMeetingSDKBPLibrary::UrlEncode triggered: "));

  auto encoded_url = EncodeURL(url_str);

  return encoded_url;
}

FString UZoomMeetingSDKBPLibrary::Base64Encode(FString str) {
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("UZoomMeetingSDKBPLibrary::Base64Encode triggered: str: "));

  auto encoded_url = EncodeBase64(str);

  return encoded_url;
}

bool UZoomMeetingSDKBPLibrary::EnableVideoSource(
    UTextureRenderTarget2D *texture_to_send) {
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("UZoomMeetingSDKBPLibrary::EnableVideoSource "
              "triggered"));

  SDKInterfaceWrap &sdk_wrapper = SDKInterfaceWrap::GetInst();
  auto err = sdk_wrapper.EnableVideoSourceUsingRenderTarget(texture_to_send);
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("UZoomMeetingSDKBPLibrary::EnableVideoSource return: %s"),
         *SDKErrorToString(err));
  return IsSuccess(err);
}

bool UZoomMeetingSDKBPLibrary::DisableVideoSource() {
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("UZoomMeetingSDKBPLibrary::DisableVideoSource triggered"));

  SDKInterfaceWrap &sdk_wrapper = SDKInterfaceWrap::GetInst();
  auto err = sdk_wrapper.DisableVideoSource();
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("UZoomMeetingSDKBPLibrary::DisableVideoSource "
              "return: %s"),
         *SDKErrorToString(err));
  return IsSuccess(err);
}
