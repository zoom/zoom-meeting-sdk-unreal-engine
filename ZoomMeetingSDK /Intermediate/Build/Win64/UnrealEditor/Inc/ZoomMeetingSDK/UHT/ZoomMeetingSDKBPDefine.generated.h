// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ZoomMeetingSDKBPDefine.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ZOOMMEETINGSDK_ZoomMeetingSDKBPDefine_generated_h
#error "ZoomMeetingSDKBPDefine.generated.h already included, missing '#pragma once' in ZoomMeetingSDKBPDefine.h"
#endif
#define ZOOMMEETINGSDK_ZoomMeetingSDKBPDefine_generated_h

#define FID_Zoom_Unreal_Experiments_Zoom_Example_Projects_Zoom_Sample_Project_Release_v1_0_Plugins_ZoomMeetingSDK_Source_ZoomMeetingSDK_Public_ZoomMeetingSDKBPDefine_h_105_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUEAuth_Pair_Statics; \
	ZOOMMEETINGSDK_API static class UScriptStruct* StaticStruct();


template<> ZOOMMEETINGSDK_API UScriptStruct* StaticStruct<struct FUEAuth_Pair>();

#define FID_Zoom_Unreal_Experiments_Zoom_Example_Projects_Zoom_Sample_Project_Release_v1_0_Plugins_ZoomMeetingSDK_Source_ZoomMeetingSDK_Public_ZoomMeetingSDKBPDefine_h_127_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUEAnswerItem_Statics; \
	ZOOMMEETINGSDK_API static class UScriptStruct* StaticStruct();


template<> ZOOMMEETINGSDK_API UScriptStruct* StaticStruct<struct FUEAnswerItem>();

#define FID_Zoom_Unreal_Experiments_Zoom_Example_Projects_Zoom_Sample_Project_Release_v1_0_Plugins_ZoomMeetingSDK_Source_ZoomMeetingSDK_Public_ZoomMeetingSDKBPDefine_h_179_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUEQAItemInfo_Statics; \
	ZOOMMEETINGSDK_API static class UScriptStruct* StaticStruct();


template<> ZOOMMEETINGSDK_API UScriptStruct* StaticStruct<struct FUEQAItemInfo>();

#define FID_Zoom_Unreal_Experiments_Zoom_Example_Projects_Zoom_Sample_Project_Release_v1_0_Plugins_ZoomMeetingSDK_Source_ZoomMeetingSDK_Public_ZoomMeetingSDKBPDefine_h_280_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUEMeetingParameter_Statics; \
	ZOOMMEETINGSDK_API static class UScriptStruct* StaticStruct();


template<> ZOOMMEETINGSDK_API UScriptStruct* StaticStruct<struct FUEMeetingParameter>();

#define FID_Zoom_Unreal_Experiments_Zoom_Example_Projects_Zoom_Sample_Project_Release_v1_0_Plugins_ZoomMeetingSDK_Source_ZoomMeetingSDK_Public_ZoomMeetingSDKBPDefine_h_328_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUEChatStatus_Statics; \
	ZOOMMEETINGSDK_API static class UScriptStruct* StaticStruct();


template<> ZOOMMEETINGSDK_API UScriptStruct* StaticStruct<struct FUEChatStatus>();

#define FID_Zoom_Unreal_Experiments_Zoom_Example_Projects_Zoom_Sample_Project_Release_v1_0_Plugins_ZoomMeetingSDK_Source_ZoomMeetingSDK_Public_ZoomMeetingSDKBPDefine_h_357_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUEUserInfo_Statics; \
	ZOOMMEETINGSDK_API static class UScriptStruct* StaticStruct();


template<> ZOOMMEETINGSDK_API UScriptStruct* StaticStruct<struct FUEUserInfo>();

#define FID_Zoom_Unreal_Experiments_Zoom_Example_Projects_Zoom_Sample_Project_Release_v1_0_Plugins_ZoomMeetingSDK_Source_ZoomMeetingSDK_Public_ZoomMeetingSDKBPDefine_h_419_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUEChatMsgInfo_Statics; \
	ZOOMMEETINGSDK_API static class UScriptStruct* StaticStruct();


template<> ZOOMMEETINGSDK_API UScriptStruct* StaticStruct<struct FUEChatMsgInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Zoom_Unreal_Experiments_Zoom_Example_Projects_Zoom_Sample_Project_Release_v1_0_Plugins_ZoomMeetingSDK_Source_ZoomMeetingSDK_Public_ZoomMeetingSDKBPDefine_h


#define FOREACH_ENUM_BO_STOP_COUNTDOWN(op) \
	op(BO_STOP_COUNTDOWN::BO_STOP_NOT_COUNTDOWN) \
	op(BO_STOP_COUNTDOWN::BO_STOP_COUNTDOWN_SECONDS_10) \
	op(BO_STOP_COUNTDOWN::BO_STOP_COUNTDOWN_SECONDS_15) \
	op(BO_STOP_COUNTDOWN::BO_STOP_COUNTDOWN_SECONDS_30) \
	op(BO_STOP_COUNTDOWN::BO_STOP_COUNTDOWN_SECONDS_60) \
	op(BO_STOP_COUNTDOWN::BO_STOP_COUNTDOWN_SECONDS_120) 

enum class BO_STOP_COUNTDOWN : uint8;
template<> struct TIsUEnumClass<BO_STOP_COUNTDOWN> { enum { Value = true }; };
template<> ZOOMMEETINGSDK_API UEnum* StaticEnum<BO_STOP_COUNTDOWN>();

#define FOREACH_ENUM_CHAT_MESSAGE_TYPE(op) \
	op(CHAT_MESSAGE_TYPE::SDKChatMessageType_To_None) \
	op(CHAT_MESSAGE_TYPE::SDKChatMessageType_To_All) \
	op(CHAT_MESSAGE_TYPE::SDKChatMessageType_To_All_Panelist) \
	op(CHAT_MESSAGE_TYPE::SDKChatMessageType_To_Individual_Panelist) \
	op(CHAT_MESSAGE_TYPE::SDKChatMessageType_To_Individual) \
	op(CHAT_MESSAGE_TYPE::SDKChatMessageType_To_WaitingRoomUsers) 

enum class CHAT_MESSAGE_TYPE : uint8;
template<> struct TIsUEnumClass<CHAT_MESSAGE_TYPE> { enum { Value = true }; };
template<> ZOOMMEETINGSDK_API UEnum* StaticEnum<CHAT_MESSAGE_TYPE>();

#define FOREACH_ENUM_RAW_DATA_RESOLUTION(op) \
	op(RAW_DATA_RESOLUTION::ZoomSDKResolution_90P) \
	op(RAW_DATA_RESOLUTION::ZoomSDKResolution_180P) \
	op(RAW_DATA_RESOLUTION::ZoomSDKResolution_360P) \
	op(RAW_DATA_RESOLUTION::ZoomSDKResolution_720P) \
	op(RAW_DATA_RESOLUTION::ZoomSDKResolution_1080P) 

enum class RAW_DATA_RESOLUTION : uint8;
template<> struct TIsUEnumClass<RAW_DATA_RESOLUTION> { enum { Value = true }; };
template<> ZOOMMEETINGSDK_API UEnum* StaticEnum<RAW_DATA_RESOLUTION>();

#define FOREACH_ENUM_SDK_EMOJI_REACTION_TYPE(op) \
	op(SDK_EMOJI_REACTION_TYPE::SDKEmojiReactionType_None) \
	op(SDK_EMOJI_REACTION_TYPE::SDKEmojiReactionType_Clap) \
	op(SDK_EMOJI_REACTION_TYPE::SDKEmojiReactionType_Thumbsup) \
	op(SDK_EMOJI_REACTION_TYPE::SDKEmojiReactionType_Heart) \
	op(SDK_EMOJI_REACTION_TYPE::SDKEmojiReactionType_Joy) \
	op(SDK_EMOJI_REACTION_TYPE::SDKEmojiReactionType_Openmouth) \
	op(SDK_EMOJI_REACTION_TYPE::SDKEmojiReactionType_Tada) 

enum class SDK_EMOJI_REACTION_TYPE : uint8;
template<> struct TIsUEnumClass<SDK_EMOJI_REACTION_TYPE> { enum { Value = true }; };
template<> ZOOMMEETINGSDK_API UEnum* StaticEnum<SDK_EMOJI_REACTION_TYPE>();

#define FOREACH_ENUM_SDK_EMOJI_FEEDBACK_TYPE(op) \
	op(SDK_EMOJI_FEEDBACK_TYPE::SDKEmojiFeedbackType_None) \
	op(SDK_EMOJI_FEEDBACK_TYPE::SDKEmojiFeedbackType_Yes) \
	op(SDK_EMOJI_FEEDBACK_TYPE::SDKEmojiFeedbackType_No) \
	op(SDK_EMOJI_FEEDBACK_TYPE::SDKEmojiFeedbackType_SpeedUp) \
	op(SDK_EMOJI_FEEDBACK_TYPE::SDKEmojiFeedbackType_SlowDown) \
	op(SDK_EMOJI_FEEDBACK_TYPE::SDKEmojiFeedbackType_Away) 

enum class SDK_EMOJI_FEEDBACK_TYPE : uint8;
template<> struct TIsUEnumClass<SDK_EMOJI_FEEDBACK_TYPE> { enum { Value = true }; };
template<> ZOOMMEETINGSDK_API UEnum* StaticEnum<SDK_EMOJI_FEEDBACK_TYPE>();

#define FOREACH_ENUM_ZOOM_SDK_RAW_DATA_TYPE(op) \
	op(ZOOM_SDK_RAW_DATA_TYPE::ZoomSDKRawDataType_Video) \
	op(ZOOM_SDK_RAW_DATA_TYPE::ZoomSDKRawDataType_Share) 

enum class ZOOM_SDK_RAW_DATA_TYPE : uint8;
template<> struct TIsUEnumClass<ZOOM_SDK_RAW_DATA_TYPE> { enum { Value = true }; };
template<> ZOOMMEETINGSDK_API UEnum* StaticEnum<ZOOM_SDK_RAW_DATA_TYPE>();

#define FOREACH_ENUM_SHARING_STATUS(op) \
	op(SHARING_STATUS::Sharing_Self_Send_Begin) \
	op(SHARING_STATUS::Sharing_Self_Send_End) \
	op(SHARING_STATUS::Sharing_Self_Send_Pure_Audio_Begin) \
	op(SHARING_STATUS::Sharing_Self_Send_Pure_Audio_End) \
	op(SHARING_STATUS::Sharing_Other_Share_Begin) \
	op(SHARING_STATUS::Sharing_Other_Share_End) \
	op(SHARING_STATUS::Sharing_Other_Share_Pure_Audio_Begin) \
	op(SHARING_STATUS::Sharing_Other_Share_Pure_Audio_End) \
	op(SHARING_STATUS::Sharing_View_Other_Sharing) \
	op(SHARING_STATUS::Sharing_Pause) \
	op(SHARING_STATUS::Sharing_Resume) 

enum class SHARING_STATUS : uint8;
template<> struct TIsUEnumClass<SHARING_STATUS> { enum { Value = true }; };
template<> ZOOMMEETINGSDK_API UEnum* StaticEnum<SHARING_STATUS>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
