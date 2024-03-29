// Copyright : All rights reserved by Zoom Video Communications 2022-

#include "SDKUtils.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE

FString AuthResultToString(AuthResult val) {
  switch (val) {
  case AUTHRET_SUCCESS:
    return "AUTHRET_SUCCESS";
  case AUTHRET_KEYORSECRETEMPTY:
    return "AUTHRET_KEYORSECRETEMPTY";
  case AUTHRET_KEYORSECRETWRONG:
    return "AUTHRET_KEYORSECRETWRONG";
  case AUTHRET_ACCOUNTNOTSUPPORT:
    return "AUTHRET_ACCOUNTNOTSUPPORT";
  case AUTHRET_ACCOUNTNOTENABLESDK:
    return "AUTHRET_ACCOUNTNOTENABLESDK";
  case AUTHRET_UNKNOWN:
    return "AUTHRET_UNKNOWN";
  case AUTHRET_SERVICE_BUSY:
    return "AUTHRET_SERVICE_BUSY";
  case AUTHRET_NONE:
    return "AUTHRET_NONE";
  case AUTHRET_OVERTIME:
    return "AUTHRET_OVERTIME";
  case AUTHRET_NETWORKISSUE:
    return "AUTHRET_NETWORKISSUE";
  case AUTHRET_CLIENT_INCOMPATIBLE:
    return "AUTHRET_CLIENT_INCOMPATIBLE";
  case AUTHRET_JWTTOKENWRONG:
    return "AUTHRET_JWTTOKENWRONG";
  }

  return "AUTHRET_UNKNOWN";
}

FString SDKErrorToString(SDKError val) {
  switch (val) {
  case SDKERR_SUCCESS:
    return "SDKERR_SUCCESS";
  case SDKERR_NO_IMPL:
    return "SDKERR_NO_IMPL";
  case SDKERR_WRONG_USAGE:
    return "SDKERR_WRONG_USAGE";
  case SDKERR_INVALID_PARAMETER:
    return "SDKERR_INVALID_PARAMETER";
  case SDKERR_MODULE_LOAD_FAILED:
    return "SDKERR_MODULE_LOAD_FAILED";
  case SDKERR_MEMORY_FAILED:
    return "SDKERR_MEMORY_FAILED";
  case SDKERR_SERVICE_FAILED:
    return "SDKERR_SERVICE_FAILED";
  case SDKERR_UNINITIALIZE:
    return "SDKERR_UNINITIALIZE";
  case SDKERR_UNAUTHENTICATION:
    return "SDKERR_UNAUTHENTICATION";
  case SDKERR_NORECORDINGINPROCESS:
    return "SDKERR_NORECORDINGINPROCESS";
  case SDKERR_TRANSCODER_NOFOUND:
    return "SDKERR_TRANSCODER_NOFOUND";
  case SDKERR_VIDEO_NOTREADY:
    return "SDKERR_VIDEO_NOTREADY";
  case SDKERR_NO_PERMISSION:
    return "SDKERR_NO_PERMISSION";
  case SDKERR_UNKNOWN:
    return "SDKERR_UNKNOWN";
  case SDKERR_OTHER_SDK_INSTANCE_RUNNING:
    return "SDKERR_OTHER_SDK_INSTANCE_RUNNING";
  case SDKERR_INTERNAL_ERROR:
    return "SDKERR_INTERNAL_ERROR";
  case SDKERR_NO_AUDIODEVICE_ISFOUND:
    return "SDKERR_NO_AUDIODEVICE_ISFOUND";
  case SDKERR_NO_VIDEODEVICE_ISFOUND:
    return "SDKERR_NO_VIDEODEVICE_ISFOUND";
  case SDKERR_TOO_FREQUENT_CALL:
    return "SDKERR_TOO_FREQUENT_CALL";
  case SDKERR_FAIL_ASSIGN_USER_PRIVILEGE:
    return "SDKERR_FAIL_ASSIGN_USER_PRIVILEGE";
  case SDKERR_MEETING_DONT_SUPPORT_FEATURE:
    return "SDKERR_MEETING_DONT_SUPPORT_FEATURE";
  case SDKERR_MEETING_NOT_SHARE_SENDER:
    return "SDKERR_MEETING_NOT_SHARE_SENDER";
  case SDKERR_MEETING_YOU_HAVE_NO_SHARE:
    return "SDKERR_MEETING_YOU_HAVE_NO_SHARE";
  case SDKERR_MEETING_VIEWTYPE_PARAMETER_IS_WRONG:
    return "SDKERR_MEETING_VIEWTYPE_PARAMETER_IS_WRONG";
  case SDKERR_MEETING_ANNOTATION_IS_OFF:
    return "SDKERR_MEETING_ANNOTATION_IS_OFF";
  case SDKERR_SETTING_OS_DONT_SUPPORT:
    return "SDKERR_SETTING_OS_DONT_SUPPORT";
  case SDKERR_EMAIL_LOGIN_IS_DISABLED:
    return "SDKERR_EMAIL_LOGIN_IS_DISABLED";
  case SDKERR_HARDWARE_NOT_MEET_FOR_VB:
    return "SDKERR_HARDWARE_NOT_MEET_FOR_VB";
  case SDKERR_NEED_USER_CONFIRM_RECORD_DISCLAIMER:
    return "SDKERR_NEED_USER_CONFIRM_RECORD_DISCLAIMER";
  case SDKERR_NO_SHARE_DATA:
    return "SDKERR_NO_SHARE_DATA";
  case SDKERR_SHARE_CANNOT_SUBSCRIBE_MYSELF:
    return "SDKERR_SHARE_CANNOT_SUBSCRIBE_MYSELF";
  case SDKERR_NOT_IN_MEETING:
    return "SDKERR_NOT_IN_MEETING";
  }
  return "SDKError:Unknown";
}
FString LOGINSTATUSToString(LOGINSTATUS val) {
  switch (val) {
  case LOGIN_IDLE:
    return "LOGIN_IDLE";
  case LOGIN_PROCESSING:
    return "LOGIN_PROCESSING";
  case LOGIN_SUCCESS:
    return "LOGIN_SUCCESS";
  case LOGIN_FAILED:
    return "LOGIN_FAILED";
  }
  return "LOGINSTATUS:Unknown";
}

FString LoginFailReasonToString(LoginFailReason val) {
  switch (val) {
  case LoginFail_None:
    return "LoginFail_None";
  case LoginFail_EmailLoginDisable:
    return "LoginFail_EmailLoginDisable";
  case LoginFail_UserNotExist:
    return "LoginFail_UserNotExist";
  case LoginFail_WrongPassword:
    return "LoginFail_WrongPassword";
  case LoginFail_AccountLocked:
    return "LoginFail_AccountLocked";
  case LoginFail_SDKNeedUpdate:
    return "LoginFail_SDKNeedUpdate";
  case LoginFail_TooManyFailedAttempts:
    return "LoginFail_TooManyFailedAttempts";
  case LoginFail_SMSCodeError:
    return "LoginFail_SMSCodeError";
  case LoginFail_SMSCodeExpired:
    return "LoginFail_SMSCodeExpired";
  case LoginFail_PhoneNumberFormatInValid:
    return "LoginFail_PhoneNumberFormatInValid";
  case LoginFail_LoginTokenInvalid:
    return "LoginFail_LoginTokenInvalid";
  case LoginFail_UserDisagreeLoginDisclaimer:
    return "LoginFail_UserDisagreeLoginDisclaimer";
  case LoginFail_Mfa_Required:
    return "LoginFail_Mfa_Required";
  case LoginFail_Need_Bitrthday_ask:
    return "LoginFail_Need_Bitrthday_ask";
  }
  return "LoginFail_OtherIssue";
}

FString BoolToString(bool val) { return (val) ? "true" : "false"; }

FString MeetingTypeToString(MeetingType val) {
  switch (val) {
  case MEETING_TYPE_NONE:
    return "MEETING_TYPE_NONE";
  case MEETING_TYPE_NORMAL:
    return "MEETING_TYPE_NORMAL";
  case MEETING_TYPE_WEBINAR:
    return "MEETING_TYPE_WEBINAR";
  case MEETING_TYPE_BREAKOUTROOM:
    return "MEETING_TYPE_BREAKOUTROOM";
  }

  return "MEETING_TYPE_UNKNOWN";
}

FString BOControllerErrorToString(BOControllerError val) {
  switch (val) {
  case BOControllerError_NULL_POINTER:
    return "BOControllerError_NULL_POINTER";
  case BOControllerError_WRONG_CURRENT_STATUS:
    return "BOControllerError_WRONG_CURRENT_STATUS";
  case BOControllerError_TOKEN_NOT_READY:
    return "BOControllerError_TOKEN_NOT_READY";
  case BOControllerError_NO_PRIVILEGE:
    return "BOControllerError_NO_PRIVILEGE";
  case BOControllerError_BO_LIST_IS_UPLOADING:
    return "BOControllerError_BO_LIST_IS_UPLOADING";
  case BOControllerError_UPLOAD_FAIL:
    return "BOControllerError_UPLOAD_FAIL";
  case BOControllerError_NO_ONE_HAS_BEEN_ASSIGNED:
    return "BOControllerError_NO_ONE_HAS_BEEN_ASSIGNED";
  case BOControllerError_UNKNOWN:
    return "BOControllerError_UNKNOWN";
  default:
    return "BOControllerError_UNKNOWN";
  }
}

FString BOStatusToString(BO_STATUS val) {
  switch (val) {
  case BO_STATUS_INVALID:
    return "BO_STATUS_INVALID";
  case BO_STATUS_EDIT:
    return "BO_STATUS_EDIT";
  case BO_STATUS_STARTED:
    return "BO_STATUS_STARTED";
  case BO_STATUS_STOPPING:
    return "BO_STATUS_STOPPING";
  case BO_STATUS_ENDED:
    return "BO_STATUS_ENDED";
  }

  return "BO_STATUS_UNKNOWN";
}

FString WebinarNeedRegisterTypeToString(
    IWebinarNeedRegisterHandler::WebinarNeedRegisterType val) {
  switch (val) {
  case IWebinarNeedRegisterHandler::WebinarReg_NONE:
    return "WebinarReg_NONE";
  case IWebinarNeedRegisterHandler::WebinarReg_By_Register_Url:
    return "WebinarReg_By_Register_Url";
  case IWebinarNeedRegisterHandler::WebinarReg_By_Email_and_DisplayName:
    return "WebinarReg_By_Email_and_DisplayName";
  }

  return "WebinarNeedRegisterType_UNKNOWN";
}

FString MeetingStatusToString(MeetingStatus val) {
  switch (val) {
  case MEETING_STATUS_IDLE:
    return "MEETING_STATUS_IDLE";
  case MEETING_STATUS_CONNECTING:
    return "MEETING_STATUS_CONNECTING";
  case MEETING_STATUS_WAITINGFORHOST:
    return "MEETING_STATUS_WAITINGFORHOST";
  case MEETING_STATUS_INMEETING:
    return "MEETING_STATUS_INMEETING";
  case MEETING_STATUS_DISCONNECTING:
    return "MEETING_STATUS_DISCONNECTING";
  case MEETING_STATUS_RECONNECTING:
    return "MEETING_STATUS_RECONNECTING";
  case MEETING_STATUS_FAILED:
    return "MEETING_STATUS_FAILED";
  case MEETING_STATUS_ENDED:
    return "MEETING_STATUS_ENDED";
  case MEETING_STATUS_UNKNOW:
    return "MEETING_STATUS_UNKNOW";
  case MEETING_STATUS_LOCKED:
    return "MEETING_STATUS_LOCKED";
  case MEETING_STATUS_UNLOCKED:
    return "MEETING_STATUS_UNLOCKED";
  case MEETING_STATUS_IN_WAITING_ROOM:
    return "MEETING_STATUS_IN_WAITING_ROOM";
  case MEETING_STATUS_WEBINAR_PROMOTE:
    return "MEETING_STATUS_WEBINAR_PROMOTE";
  case MEETING_STATUS_WEBINAR_DEPROMOTE:
    return "MEETING_STATUS_WEBINAR_DEPROMOTE";
  case MEETING_STATUS_JOIN_BREAKOUT_ROOM:
    return "MEETING_STATUS_JOIN_BREAKOUT_ROOM";
  case MEETING_STATUS_LEAVE_BREAKOUT_ROOM:
    return "MEETING_STATUS_LEAVE_BREAKOUT_ROOM";
  default:
    return "MEETING_STATUS_UNKNOWN";
  }
}

FString VideoStatusToString(VideoStatus val) {
  switch (val) {
  case VideoStatus::Video_ON:
    return "Video_ON";
  case VideoStatus::Video_OFF:
    return "Video_OFF";
  case VideoStatus::Video_Mute_ByHost:
    return "Video_Mute_ByHost";
  }

  return "VideoStatus_UNKNOWN";
}

FString SharingStatusToString(SharingStatus val) {
  switch (val) {
  case SharingStatus::Sharing_Self_Send_Begin:
    return "Sharing_Self_Send_Begin";
  case SharingStatus::Sharing_Self_Send_End:
    return "Sharing_Self_Send_End:";
  case SharingStatus::Sharing_Self_Send_Pure_Audio_Begin:
    return "Sharing_Self_Send_Pure_Audio_Begin";
  case SharingStatus::Sharing_Self_Send_Pure_Audio_End:
    return "Sharing_Self_Send_Pure_Audio_End";
  case SharingStatus::Sharing_Other_Share_Begin:
    return "Sharing_Other_Share_Begin";
  case SharingStatus::Sharing_Other_Share_End:
    return "Sharing_Other_Share_End";
  case SharingStatus::Sharing_Other_Share_Pure_Audio_Begin:
    return "Sharing_Other_Share_Pure_Audio_Begin";
  case SharingStatus::Sharing_Other_Share_Pure_Audio_End:
    return "Sharing_Other_Share_Pure_Audio_End";
  case SharingStatus::Sharing_View_Other_Sharing:
    return "Sharing_View_Other_Sharing";
  case SharingStatus::Sharing_Pause:
    return "Sharing_Pause";
  case SharingStatus::Sharing_Resume:
    return "Sharing_Resume";
  }
  return "SharingStatus_UNKOWN";
}

FString SDKChatMessageTypeToString(SDKChatMessageType val) {
  switch (val) {
  case SDKChatMessageType::SDKChatMessageType_To_None:
    return "SDKChatMessageType_To_None";
  case SDKChatMessageType::SDKChatMessageType_To_All:
    return "SDKChatMessageType_To_All";
  case SDKChatMessageType::SDKChatMessageType_To_All_Panelist:
    return "SDKChatMessageType_To_All_Panelist";
  case SDKChatMessageType::SDKChatMessageType_To_Individual_Panelist:
    return "SDKChatMessageType_To_Individual_Panelist";
  case SDKChatMessageType::SDKChatMessageType_To_Individual:
    return "SDKChatMessageType_To_Individual";
  case SDKChatMessageType::SDKChatMessageType_To_WaitingRoomUsers:
    return "SDKChatMessageType_To_WaitingRoomUsers";
  }

  return "SDKChatMessageType_UNKNOWN";
}

FString SDKEmojiReactionTypeToString(SDKEmojiReactionType val) {
  switch (val) {
  case SDKEmojiReactionType::SDKEmojiReactionType_None:
    return "SDKEmojiReactionType_None";
  case SDKEmojiReactionType::SDKEmojiReactionType_Clap:
    return "SDKEmojiReactionType_Clap";
  case SDKEmojiReactionType::SDKEmojiReactionType_Thumbsup:
    return "SDKEmojiReactionType_Thumbsup";
  case SDKEmojiReactionType::SDKEmojiReactionType_Heart:
    return "SDKEmojiReactionType_Heart";
  case SDKEmojiReactionType::SDKEmojiReactionType_Joy:
    return "SDKEmojiReactionType_Joy";
  case SDKEmojiReactionType::SDKEmojiReactionType_Openmouth:
    return "SDKEmojiReactionType_Openmouth";
  case SDKEmojiReactionType::SDKEmojiReactionType_Tada:
    return "SDKEmojiReactionType_Tada";
  }

  return "SDKEmojiReactionType_UNKNOWN";
}

FString SDKEmojiFeedbackTypeToString(SDKEmojiFeedbackType val) {
  switch (val) {
  case SDKEmojiFeedbackType::SDKEmojiFeedbackType_None:
    return "SDKEmojiFeedbackType_None";
  case SDKEmojiFeedbackType::SDKEmojiFeedbackType_Yes:
    return "SDKEmojiFeedbackType_Yes";
  case SDKEmojiFeedbackType::SDKEmojiFeedbackType_No:
    return "SDKEmojiFeedbackType_No";
  case SDKEmojiFeedbackType::SDKEmojiFeedbackType_SpeedUp:
    return "SDKEmojiFeedbackType_SpeedUp";
  case SDKEmojiFeedbackType::SDKEmojiFeedbackType_SlowDown:
    return "SDKEmojiFeedbackType_SlowDown";
  case SDKEmojiFeedbackType::SDKEmojiFeedbackType_Away:
    return "SDKEmojiFeedbackType_Away";
  }

  return "SDKEmojiFeedbackType_UNKNOWN";
}

FString SDKChatMessageDeleteTypeToString(SDKChatMessageDeleteType val) {
  switch (val) {
  case SDKChatMessageDeleteType::SDK_CHAT_DELETE_BY_NONE:
    return "SDK_CHAT_DELETE_BY_NONE";
  case SDKChatMessageDeleteType::SDK_CHAT_DELETE_BY_SELF:
    return "SDK_CHAT_DELETE_BY_SELF";
  case SDKChatMessageDeleteType::SDK_CHAT_DELETE_BY_HOST:
    return "SDK_CHAT_DELETE_BY_HOST";
  case SDKChatMessageDeleteType::SDK_CHAT_DELETE_BY_DLP:
    return "SDK_CHAT_DELETE_BY_DLP";
  }

  return "SDKChatMessageDeleteType_UNKNOWN";
}

FString ZoomSDKResolutionToString(ZOOM_SDK_NAMESPACE::ZoomSDKResolution val) {
  switch (val) {
  case ZoomSDKResolution::ZoomSDKResolution_90P:
    return "ZoomSDKResolution_90P";
  case ZoomSDKResolution::ZoomSDKResolution_180P:
    return "ZoomSDKResolution_180P";
  case ZoomSDKResolution::ZoomSDKResolution_360P:
    return "ZoomSDKResolution_360P";
  case ZoomSDKResolution::ZoomSDKResolution_720P:
    return "ZoomSDKResolution_720P";
  case ZoomSDKResolution::ZoomSDKResolution_1080P:
    return "ZoomSDKResolution_1080P";
  }

  return "ZoomSDKResolution_UNKNOWN";
}

FString RequestLocalRecordingStatusToString(
    ZOOM_SDK_NAMESPACE::RequestLocalRecordingStatus val) {
  switch (val) {
  case RequestLocalRecordingStatus::RequestLocalRecording_Granted:
    return "RequestLocalRecording_Granted";
  case RequestLocalRecordingStatus::RequestLocalRecording_Denied:
    return "RequestLocalRecording_Denied";
  case RequestLocalRecordingStatus::RequestLocalRecording_Timeout:
    return "RequestLocalRecording_Timeout";
  }

  return "RequestLocalRecordingStatus_UNKNOWN";
}

END_ZOOM_SDK_UE_NAMESPACE