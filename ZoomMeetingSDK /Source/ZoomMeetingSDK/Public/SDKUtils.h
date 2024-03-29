// Class that defines and implements various helper/utility functions.
//
// Copyright : All rights reserved by Zoom Video Communications 2022-

#pragma once
#include <string>

#include "ZoomUESDKDef.h"
#include "auth_service_interface.h"
#include "meeting_service_components/meeting_breakout_rooms_interface_v2.h"
#include "meeting_service_components/meeting_chat_interface.h"
#include "meeting_service_components/meeting_configuration_interface.h"
#include "meeting_service_components/meeting_emoji_reaction_interface.h"
#include "meeting_service_components/meeting_recording_interface.h"
#include "meeting_service_components/meeting_video_interface.h"
#include "meeting_service_components/meeting_sharing_interface.h"
#include "meeting_service_interface.h"
#include "rawdata/rawdata_renderer_interface.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE

// Utility functions used for logging.

// Helper function to return a string based on the AuthResult.
FString AuthResultToString(AuthResult val);

// Helper function to return a string based on the SDKError.
FString SDKErrorToString(SDKError val);

// Helper function to return a string based on the LOGINSTATUS.
FString LOGINSTATUSToString(LOGINSTATUS val);

// Helper function to return a string based on the LoginFailReason.
FString LoginFailReasonToString(LoginFailReason val);

// Helper function to return a string ("true" or "false") based on the boolean
// value.
FString BoolToString(bool val);

// Helper function to return a string based on the MeetingType.
FString MeetingTypeToString(MeetingType val);

// Helper function to return a string based on BOControllerError.
FString BOControllerErrorToString(BOControllerError val);

// Helper function to return a string based on the BO_STATUS.
FString BOStatusToString(BO_STATUS val);

// Helper function to return a string based on WebinarNeedRegisterType.
FString WebinarNeedRegisterTypeToString(
    IWebinarNeedRegisterHandler::WebinarNeedRegisterType val);

// Helper function to return a string based on MeetingStatus.
FString MeetingStatusToString(MeetingStatus val);

// Helper function to return a string based on VideoStatus.
FString VideoStatusToString(VideoStatus val);

// Helper function to return a string based on SharingStatus
FString SharingStatusToString(SharingStatus val);

// Helper function to return a string based on SDKChatMessageType.
FString SDKChatMessageTypeToString(SDKChatMessageType val);

// Helper function to return a string based on SDKEmojiReactionType.
FString SDKEmojiReactionTypeToString(SDKEmojiReactionType val);

// Helper function to return a string based on SDKEmojiFeedbackType.
FString SDKEmojiFeedbackTypeToString(SDKEmojiFeedbackType val);

// Helper function to return a string based on SDKChatMessageDeleteType.
FString SDKChatMessageDeleteTypeToString(SDKChatMessageDeleteType val);

// Helper function to return a string based on ZoomSDKResolution.
FString ZoomSDKResolutionToString(ZOOM_SDK_NAMESPACE::ZoomSDKResolution val);

// Helper function to return a string based on RequestLocalRecordingStatus.
FString RequestLocalRecordingStatusToString(
    ZOOM_SDK_NAMESPACE::RequestLocalRecordingStatus val);

END_ZOOM_SDK_UE_NAMESPACE