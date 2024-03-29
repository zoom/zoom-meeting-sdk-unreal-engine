// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../ZoomMeetingSDK/Public/ZoomMeetingSDKBPDefine.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZoomMeetingSDKBPDefine() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_ZoomMeetingSDK();
	ZOOMMEETINGSDK_API UEnum* Z_Construct_UEnum_ZoomMeetingSDK_BO_STOP_COUNTDOWN();
	ZOOMMEETINGSDK_API UEnum* Z_Construct_UEnum_ZoomMeetingSDK_CHAT_MESSAGE_TYPE();
	ZOOMMEETINGSDK_API UEnum* Z_Construct_UEnum_ZoomMeetingSDK_RAW_DATA_RESOLUTION();
	ZOOMMEETINGSDK_API UEnum* Z_Construct_UEnum_ZoomMeetingSDK_SDK_EMOJI_FEEDBACK_TYPE();
	ZOOMMEETINGSDK_API UEnum* Z_Construct_UEnum_ZoomMeetingSDK_SDK_EMOJI_REACTION_TYPE();
	ZOOMMEETINGSDK_API UEnum* Z_Construct_UEnum_ZoomMeetingSDK_SHARING_STATUS();
	ZOOMMEETINGSDK_API UEnum* Z_Construct_UEnum_ZoomMeetingSDK_ZOOM_SDK_RAW_DATA_TYPE();
	ZOOMMEETINGSDK_API UScriptStruct* Z_Construct_UScriptStruct_FUEAnswerItem();
	ZOOMMEETINGSDK_API UScriptStruct* Z_Construct_UScriptStruct_FUEAuth_Pair();
	ZOOMMEETINGSDK_API UScriptStruct* Z_Construct_UScriptStruct_FUEChatMsgInfo();
	ZOOMMEETINGSDK_API UScriptStruct* Z_Construct_UScriptStruct_FUEChatStatus();
	ZOOMMEETINGSDK_API UScriptStruct* Z_Construct_UScriptStruct_FUEMeetingParameter();
	ZOOMMEETINGSDK_API UScriptStruct* Z_Construct_UScriptStruct_FUEQAItemInfo();
	ZOOMMEETINGSDK_API UScriptStruct* Z_Construct_UScriptStruct_FUEUserInfo();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_BO_STOP_COUNTDOWN;
	static UEnum* BO_STOP_COUNTDOWN_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_BO_STOP_COUNTDOWN.OuterSingleton)
		{
			Z_Registration_Info_UEnum_BO_STOP_COUNTDOWN.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ZoomMeetingSDK_BO_STOP_COUNTDOWN, (UObject*)Z_Construct_UPackage__Script_ZoomMeetingSDK(), TEXT("BO_STOP_COUNTDOWN"));
		}
		return Z_Registration_Info_UEnum_BO_STOP_COUNTDOWN.OuterSingleton;
	}
	template<> ZOOMMEETINGSDK_API UEnum* StaticEnum<BO_STOP_COUNTDOWN>()
	{
		return BO_STOP_COUNTDOWN_StaticEnum();
	}
	struct Z_Construct_UEnum_ZoomMeetingSDK_BO_STOP_COUNTDOWN_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ZoomMeetingSDK_BO_STOP_COUNTDOWN_Statics::Enumerators[] = {
		{ "BO_STOP_COUNTDOWN::BO_STOP_NOT_COUNTDOWN", (int64)BO_STOP_COUNTDOWN::BO_STOP_NOT_COUNTDOWN },
		{ "BO_STOP_COUNTDOWN::BO_STOP_COUNTDOWN_SECONDS_10", (int64)BO_STOP_COUNTDOWN::BO_STOP_COUNTDOWN_SECONDS_10 },
		{ "BO_STOP_COUNTDOWN::BO_STOP_COUNTDOWN_SECONDS_15", (int64)BO_STOP_COUNTDOWN::BO_STOP_COUNTDOWN_SECONDS_15 },
		{ "BO_STOP_COUNTDOWN::BO_STOP_COUNTDOWN_SECONDS_30", (int64)BO_STOP_COUNTDOWN::BO_STOP_COUNTDOWN_SECONDS_30 },
		{ "BO_STOP_COUNTDOWN::BO_STOP_COUNTDOWN_SECONDS_60", (int64)BO_STOP_COUNTDOWN::BO_STOP_COUNTDOWN_SECONDS_60 },
		{ "BO_STOP_COUNTDOWN::BO_STOP_COUNTDOWN_SECONDS_120", (int64)BO_STOP_COUNTDOWN::BO_STOP_COUNTDOWN_SECONDS_120 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ZoomMeetingSDK_BO_STOP_COUNTDOWN_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "BO_STOP_COUNTDOWN_SECONDS_10.DisplayName", "Countdown 10 seconds" },
		{ "BO_STOP_COUNTDOWN_SECONDS_10.Name", "BO_STOP_COUNTDOWN::BO_STOP_COUNTDOWN_SECONDS_10" },
		{ "BO_STOP_COUNTDOWN_SECONDS_120.DisplayName", "Countdown 120 seconds" },
		{ "BO_STOP_COUNTDOWN_SECONDS_120.Name", "BO_STOP_COUNTDOWN::BO_STOP_COUNTDOWN_SECONDS_120" },
		{ "BO_STOP_COUNTDOWN_SECONDS_15.DisplayName", "Countdown 15 seconds" },
		{ "BO_STOP_COUNTDOWN_SECONDS_15.Name", "BO_STOP_COUNTDOWN::BO_STOP_COUNTDOWN_SECONDS_15" },
		{ "BO_STOP_COUNTDOWN_SECONDS_30.DisplayName", "Countdown 30 seconds" },
		{ "BO_STOP_COUNTDOWN_SECONDS_30.Name", "BO_STOP_COUNTDOWN::BO_STOP_COUNTDOWN_SECONDS_30" },
		{ "BO_STOP_COUNTDOWN_SECONDS_60.DisplayName", "Countdown 60 seconds" },
		{ "BO_STOP_COUNTDOWN_SECONDS_60.Name", "BO_STOP_COUNTDOWN::BO_STOP_COUNTDOWN_SECONDS_60" },
		{ "BO_STOP_NOT_COUNTDOWN.DisplayName", "No Countdown" },
		{ "BO_STOP_NOT_COUNTDOWN.Name", "BO_STOP_COUNTDOWN::BO_STOP_NOT_COUNTDOWN" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Redefining ENUM to be UE compatible.\n" },
#endif
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPDefine.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Redefining ENUM to be UE compatible." },
#endif
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ZoomMeetingSDK_BO_STOP_COUNTDOWN_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ZoomMeetingSDK,
		nullptr,
		"BO_STOP_COUNTDOWN",
		"BO_STOP_COUNTDOWN",
		Z_Construct_UEnum_ZoomMeetingSDK_BO_STOP_COUNTDOWN_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ZoomMeetingSDK_BO_STOP_COUNTDOWN_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ZoomMeetingSDK_BO_STOP_COUNTDOWN_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ZoomMeetingSDK_BO_STOP_COUNTDOWN_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ZoomMeetingSDK_BO_STOP_COUNTDOWN()
	{
		if (!Z_Registration_Info_UEnum_BO_STOP_COUNTDOWN.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_BO_STOP_COUNTDOWN.InnerSingleton, Z_Construct_UEnum_ZoomMeetingSDK_BO_STOP_COUNTDOWN_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_BO_STOP_COUNTDOWN.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_CHAT_MESSAGE_TYPE;
	static UEnum* CHAT_MESSAGE_TYPE_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_CHAT_MESSAGE_TYPE.OuterSingleton)
		{
			Z_Registration_Info_UEnum_CHAT_MESSAGE_TYPE.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ZoomMeetingSDK_CHAT_MESSAGE_TYPE, (UObject*)Z_Construct_UPackage__Script_ZoomMeetingSDK(), TEXT("CHAT_MESSAGE_TYPE"));
		}
		return Z_Registration_Info_UEnum_CHAT_MESSAGE_TYPE.OuterSingleton;
	}
	template<> ZOOMMEETINGSDK_API UEnum* StaticEnum<CHAT_MESSAGE_TYPE>()
	{
		return CHAT_MESSAGE_TYPE_StaticEnum();
	}
	struct Z_Construct_UEnum_ZoomMeetingSDK_CHAT_MESSAGE_TYPE_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ZoomMeetingSDK_CHAT_MESSAGE_TYPE_Statics::Enumerators[] = {
		{ "CHAT_MESSAGE_TYPE::SDKChatMessageType_To_None", (int64)CHAT_MESSAGE_TYPE::SDKChatMessageType_To_None },
		{ "CHAT_MESSAGE_TYPE::SDKChatMessageType_To_All", (int64)CHAT_MESSAGE_TYPE::SDKChatMessageType_To_All },
		{ "CHAT_MESSAGE_TYPE::SDKChatMessageType_To_All_Panelist", (int64)CHAT_MESSAGE_TYPE::SDKChatMessageType_To_All_Panelist },
		{ "CHAT_MESSAGE_TYPE::SDKChatMessageType_To_Individual_Panelist", (int64)CHAT_MESSAGE_TYPE::SDKChatMessageType_To_Individual_Panelist },
		{ "CHAT_MESSAGE_TYPE::SDKChatMessageType_To_Individual", (int64)CHAT_MESSAGE_TYPE::SDKChatMessageType_To_Individual },
		{ "CHAT_MESSAGE_TYPE::SDKChatMessageType_To_WaitingRoomUsers", (int64)CHAT_MESSAGE_TYPE::SDKChatMessageType_To_WaitingRoomUsers },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ZoomMeetingSDK_CHAT_MESSAGE_TYPE_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPDefine.h" },
		{ "SDKChatMessageType_To_All.DisplayName", "To All" },
		{ "SDKChatMessageType_To_All.Name", "CHAT_MESSAGE_TYPE::SDKChatMessageType_To_All" },
		{ "SDKChatMessageType_To_All_Panelist.DisplayName", "To All Panelist" },
		{ "SDKChatMessageType_To_All_Panelist.Name", "CHAT_MESSAGE_TYPE::SDKChatMessageType_To_All_Panelist" },
		{ "SDKChatMessageType_To_Individual.DisplayName", "To Individual" },
		{ "SDKChatMessageType_To_Individual.Name", "CHAT_MESSAGE_TYPE::SDKChatMessageType_To_Individual" },
		{ "SDKChatMessageType_To_Individual_Panelist.DisplayName", "To All Individual Panelist" },
		{ "SDKChatMessageType_To_Individual_Panelist.Name", "CHAT_MESSAGE_TYPE::SDKChatMessageType_To_Individual_Panelist" },
		{ "SDKChatMessageType_To_None.DisplayName", "To None" },
		{ "SDKChatMessageType_To_None.Name", "CHAT_MESSAGE_TYPE::SDKChatMessageType_To_None" },
		{ "SDKChatMessageType_To_WaitingRoomUsers.DisplayName", "To Waiting Room Users" },
		{ "SDKChatMessageType_To_WaitingRoomUsers.Name", "CHAT_MESSAGE_TYPE::SDKChatMessageType_To_WaitingRoomUsers" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ZoomMeetingSDK_CHAT_MESSAGE_TYPE_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ZoomMeetingSDK,
		nullptr,
		"CHAT_MESSAGE_TYPE",
		"CHAT_MESSAGE_TYPE",
		Z_Construct_UEnum_ZoomMeetingSDK_CHAT_MESSAGE_TYPE_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ZoomMeetingSDK_CHAT_MESSAGE_TYPE_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ZoomMeetingSDK_CHAT_MESSAGE_TYPE_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ZoomMeetingSDK_CHAT_MESSAGE_TYPE_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ZoomMeetingSDK_CHAT_MESSAGE_TYPE()
	{
		if (!Z_Registration_Info_UEnum_CHAT_MESSAGE_TYPE.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_CHAT_MESSAGE_TYPE.InnerSingleton, Z_Construct_UEnum_ZoomMeetingSDK_CHAT_MESSAGE_TYPE_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_CHAT_MESSAGE_TYPE.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_RAW_DATA_RESOLUTION;
	static UEnum* RAW_DATA_RESOLUTION_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_RAW_DATA_RESOLUTION.OuterSingleton)
		{
			Z_Registration_Info_UEnum_RAW_DATA_RESOLUTION.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ZoomMeetingSDK_RAW_DATA_RESOLUTION, (UObject*)Z_Construct_UPackage__Script_ZoomMeetingSDK(), TEXT("RAW_DATA_RESOLUTION"));
		}
		return Z_Registration_Info_UEnum_RAW_DATA_RESOLUTION.OuterSingleton;
	}
	template<> ZOOMMEETINGSDK_API UEnum* StaticEnum<RAW_DATA_RESOLUTION>()
	{
		return RAW_DATA_RESOLUTION_StaticEnum();
	}
	struct Z_Construct_UEnum_ZoomMeetingSDK_RAW_DATA_RESOLUTION_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ZoomMeetingSDK_RAW_DATA_RESOLUTION_Statics::Enumerators[] = {
		{ "RAW_DATA_RESOLUTION::ZoomSDKResolution_90P", (int64)RAW_DATA_RESOLUTION::ZoomSDKResolution_90P },
		{ "RAW_DATA_RESOLUTION::ZoomSDKResolution_180P", (int64)RAW_DATA_RESOLUTION::ZoomSDKResolution_180P },
		{ "RAW_DATA_RESOLUTION::ZoomSDKResolution_360P", (int64)RAW_DATA_RESOLUTION::ZoomSDKResolution_360P },
		{ "RAW_DATA_RESOLUTION::ZoomSDKResolution_720P", (int64)RAW_DATA_RESOLUTION::ZoomSDKResolution_720P },
		{ "RAW_DATA_RESOLUTION::ZoomSDKResolution_1080P", (int64)RAW_DATA_RESOLUTION::ZoomSDKResolution_1080P },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ZoomMeetingSDK_RAW_DATA_RESOLUTION_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Enum to define the raw video datas resolution.\n// Mimics enum ZoomSDKResolution in rawdata\\rawdata_renderer_interface.h\n" },
#endif
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPDefine.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enum to define the raw video datas resolution.\nMimics enum ZoomSDKResolution in rawdata\\rawdata_renderer_interface.h" },
#endif
		{ "ZoomSDKResolution_1080P.DisplayName", "1080P" },
		{ "ZoomSDKResolution_1080P.Name", "RAW_DATA_RESOLUTION::ZoomSDKResolution_1080P" },
		{ "ZoomSDKResolution_180P.DisplayName", "180P" },
		{ "ZoomSDKResolution_180P.Name", "RAW_DATA_RESOLUTION::ZoomSDKResolution_180P" },
		{ "ZoomSDKResolution_360P.DisplayName", "360P" },
		{ "ZoomSDKResolution_360P.Name", "RAW_DATA_RESOLUTION::ZoomSDKResolution_360P" },
		{ "ZoomSDKResolution_720P.DisplayName", "720P" },
		{ "ZoomSDKResolution_720P.Name", "RAW_DATA_RESOLUTION::ZoomSDKResolution_720P" },
		{ "ZoomSDKResolution_90P.DisplayName", "90P" },
		{ "ZoomSDKResolution_90P.Name", "RAW_DATA_RESOLUTION::ZoomSDKResolution_90P" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ZoomMeetingSDK_RAW_DATA_RESOLUTION_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ZoomMeetingSDK,
		nullptr,
		"RAW_DATA_RESOLUTION",
		"RAW_DATA_RESOLUTION",
		Z_Construct_UEnum_ZoomMeetingSDK_RAW_DATA_RESOLUTION_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ZoomMeetingSDK_RAW_DATA_RESOLUTION_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ZoomMeetingSDK_RAW_DATA_RESOLUTION_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ZoomMeetingSDK_RAW_DATA_RESOLUTION_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ZoomMeetingSDK_RAW_DATA_RESOLUTION()
	{
		if (!Z_Registration_Info_UEnum_RAW_DATA_RESOLUTION.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_RAW_DATA_RESOLUTION.InnerSingleton, Z_Construct_UEnum_ZoomMeetingSDK_RAW_DATA_RESOLUTION_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_RAW_DATA_RESOLUTION.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_SDK_EMOJI_REACTION_TYPE;
	static UEnum* SDK_EMOJI_REACTION_TYPE_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_SDK_EMOJI_REACTION_TYPE.OuterSingleton)
		{
			Z_Registration_Info_UEnum_SDK_EMOJI_REACTION_TYPE.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ZoomMeetingSDK_SDK_EMOJI_REACTION_TYPE, (UObject*)Z_Construct_UPackage__Script_ZoomMeetingSDK(), TEXT("SDK_EMOJI_REACTION_TYPE"));
		}
		return Z_Registration_Info_UEnum_SDK_EMOJI_REACTION_TYPE.OuterSingleton;
	}
	template<> ZOOMMEETINGSDK_API UEnum* StaticEnum<SDK_EMOJI_REACTION_TYPE>()
	{
		return SDK_EMOJI_REACTION_TYPE_StaticEnum();
	}
	struct Z_Construct_UEnum_ZoomMeetingSDK_SDK_EMOJI_REACTION_TYPE_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ZoomMeetingSDK_SDK_EMOJI_REACTION_TYPE_Statics::Enumerators[] = {
		{ "SDK_EMOJI_REACTION_TYPE::SDKEmojiReactionType_None", (int64)SDK_EMOJI_REACTION_TYPE::SDKEmojiReactionType_None },
		{ "SDK_EMOJI_REACTION_TYPE::SDKEmojiReactionType_Clap", (int64)SDK_EMOJI_REACTION_TYPE::SDKEmojiReactionType_Clap },
		{ "SDK_EMOJI_REACTION_TYPE::SDKEmojiReactionType_Thumbsup", (int64)SDK_EMOJI_REACTION_TYPE::SDKEmojiReactionType_Thumbsup },
		{ "SDK_EMOJI_REACTION_TYPE::SDKEmojiReactionType_Heart", (int64)SDK_EMOJI_REACTION_TYPE::SDKEmojiReactionType_Heart },
		{ "SDK_EMOJI_REACTION_TYPE::SDKEmojiReactionType_Joy", (int64)SDK_EMOJI_REACTION_TYPE::SDKEmojiReactionType_Joy },
		{ "SDK_EMOJI_REACTION_TYPE::SDKEmojiReactionType_Openmouth", (int64)SDK_EMOJI_REACTION_TYPE::SDKEmojiReactionType_Openmouth },
		{ "SDK_EMOJI_REACTION_TYPE::SDKEmojiReactionType_Tada", (int64)SDK_EMOJI_REACTION_TYPE::SDKEmojiReactionType_Tada },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ZoomMeetingSDK_SDK_EMOJI_REACTION_TYPE_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Enum to define the emoji reaction type.\n// Mimics enum SDKEmojiReactionType in\n// meeting_service_components\\meeting_emoji_reaction_interface.h\n" },
#endif
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPDefine.h" },
		{ "SDKEmojiReactionType_Clap.DisplayName", "Clap" },
		{ "SDKEmojiReactionType_Clap.Name", "SDK_EMOJI_REACTION_TYPE::SDKEmojiReactionType_Clap" },
		{ "SDKEmojiReactionType_Heart.DisplayName", "Heart" },
		{ "SDKEmojiReactionType_Heart.Name", "SDK_EMOJI_REACTION_TYPE::SDKEmojiReactionType_Heart" },
		{ "SDKEmojiReactionType_Joy.DisplayName", "Joy" },
		{ "SDKEmojiReactionType_Joy.Name", "SDK_EMOJI_REACTION_TYPE::SDKEmojiReactionType_Joy" },
		{ "SDKEmojiReactionType_None.DisplayName", "None" },
		{ "SDKEmojiReactionType_None.Name", "SDK_EMOJI_REACTION_TYPE::SDKEmojiReactionType_None" },
		{ "SDKEmojiReactionType_Openmouth.DisplayName", "Openmouth" },
		{ "SDKEmojiReactionType_Openmouth.Name", "SDK_EMOJI_REACTION_TYPE::SDKEmojiReactionType_Openmouth" },
		{ "SDKEmojiReactionType_Tada.DisplayName", "Tada" },
		{ "SDKEmojiReactionType_Tada.Name", "SDK_EMOJI_REACTION_TYPE::SDKEmojiReactionType_Tada" },
		{ "SDKEmojiReactionType_Thumbsup.DisplayName", "Thumbsup" },
		{ "SDKEmojiReactionType_Thumbsup.Name", "SDK_EMOJI_REACTION_TYPE::SDKEmojiReactionType_Thumbsup" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enum to define the emoji reaction type.\nMimics enum SDKEmojiReactionType in\nmeeting_service_components\\meeting_emoji_reaction_interface.h" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ZoomMeetingSDK_SDK_EMOJI_REACTION_TYPE_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ZoomMeetingSDK,
		nullptr,
		"SDK_EMOJI_REACTION_TYPE",
		"SDK_EMOJI_REACTION_TYPE",
		Z_Construct_UEnum_ZoomMeetingSDK_SDK_EMOJI_REACTION_TYPE_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ZoomMeetingSDK_SDK_EMOJI_REACTION_TYPE_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ZoomMeetingSDK_SDK_EMOJI_REACTION_TYPE_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ZoomMeetingSDK_SDK_EMOJI_REACTION_TYPE_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ZoomMeetingSDK_SDK_EMOJI_REACTION_TYPE()
	{
		if (!Z_Registration_Info_UEnum_SDK_EMOJI_REACTION_TYPE.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_SDK_EMOJI_REACTION_TYPE.InnerSingleton, Z_Construct_UEnum_ZoomMeetingSDK_SDK_EMOJI_REACTION_TYPE_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_SDK_EMOJI_REACTION_TYPE.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_SDK_EMOJI_FEEDBACK_TYPE;
	static UEnum* SDK_EMOJI_FEEDBACK_TYPE_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_SDK_EMOJI_FEEDBACK_TYPE.OuterSingleton)
		{
			Z_Registration_Info_UEnum_SDK_EMOJI_FEEDBACK_TYPE.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ZoomMeetingSDK_SDK_EMOJI_FEEDBACK_TYPE, (UObject*)Z_Construct_UPackage__Script_ZoomMeetingSDK(), TEXT("SDK_EMOJI_FEEDBACK_TYPE"));
		}
		return Z_Registration_Info_UEnum_SDK_EMOJI_FEEDBACK_TYPE.OuterSingleton;
	}
	template<> ZOOMMEETINGSDK_API UEnum* StaticEnum<SDK_EMOJI_FEEDBACK_TYPE>()
	{
		return SDK_EMOJI_FEEDBACK_TYPE_StaticEnum();
	}
	struct Z_Construct_UEnum_ZoomMeetingSDK_SDK_EMOJI_FEEDBACK_TYPE_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ZoomMeetingSDK_SDK_EMOJI_FEEDBACK_TYPE_Statics::Enumerators[] = {
		{ "SDK_EMOJI_FEEDBACK_TYPE::SDKEmojiFeedbackType_None", (int64)SDK_EMOJI_FEEDBACK_TYPE::SDKEmojiFeedbackType_None },
		{ "SDK_EMOJI_FEEDBACK_TYPE::SDKEmojiFeedbackType_Yes", (int64)SDK_EMOJI_FEEDBACK_TYPE::SDKEmojiFeedbackType_Yes },
		{ "SDK_EMOJI_FEEDBACK_TYPE::SDKEmojiFeedbackType_No", (int64)SDK_EMOJI_FEEDBACK_TYPE::SDKEmojiFeedbackType_No },
		{ "SDK_EMOJI_FEEDBACK_TYPE::SDKEmojiFeedbackType_SpeedUp", (int64)SDK_EMOJI_FEEDBACK_TYPE::SDKEmojiFeedbackType_SpeedUp },
		{ "SDK_EMOJI_FEEDBACK_TYPE::SDKEmojiFeedbackType_SlowDown", (int64)SDK_EMOJI_FEEDBACK_TYPE::SDKEmojiFeedbackType_SlowDown },
		{ "SDK_EMOJI_FEEDBACK_TYPE::SDKEmojiFeedbackType_Away", (int64)SDK_EMOJI_FEEDBACK_TYPE::SDKEmojiFeedbackType_Away },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ZoomMeetingSDK_SDK_EMOJI_FEEDBACK_TYPE_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Enum to define the emoji reaction type.\n// Mimics enum SDKEmojiFeedbackType in\n// meeting_service_components\\meeting_emoji_reaction_interface.h\n" },
#endif
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPDefine.h" },
		{ "SDKEmojiFeedbackType_Away.DisplayName", "Away" },
		{ "SDKEmojiFeedbackType_Away.Name", "SDK_EMOJI_FEEDBACK_TYPE::SDKEmojiFeedbackType_Away" },
		{ "SDKEmojiFeedbackType_No.DisplayName", "No" },
		{ "SDKEmojiFeedbackType_No.Name", "SDK_EMOJI_FEEDBACK_TYPE::SDKEmojiFeedbackType_No" },
		{ "SDKEmojiFeedbackType_None.DisplayName", "None" },
		{ "SDKEmojiFeedbackType_None.Name", "SDK_EMOJI_FEEDBACK_TYPE::SDKEmojiFeedbackType_None" },
		{ "SDKEmojiFeedbackType_SlowDown.DisplayName", "SlowDown" },
		{ "SDKEmojiFeedbackType_SlowDown.Name", "SDK_EMOJI_FEEDBACK_TYPE::SDKEmojiFeedbackType_SlowDown" },
		{ "SDKEmojiFeedbackType_SpeedUp.DisplayName", "SpeedUp" },
		{ "SDKEmojiFeedbackType_SpeedUp.Name", "SDK_EMOJI_FEEDBACK_TYPE::SDKEmojiFeedbackType_SpeedUp" },
		{ "SDKEmojiFeedbackType_Yes.DisplayName", "Yes" },
		{ "SDKEmojiFeedbackType_Yes.Name", "SDK_EMOJI_FEEDBACK_TYPE::SDKEmojiFeedbackType_Yes" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enum to define the emoji reaction type.\nMimics enum SDKEmojiFeedbackType in\nmeeting_service_components\\meeting_emoji_reaction_interface.h" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ZoomMeetingSDK_SDK_EMOJI_FEEDBACK_TYPE_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ZoomMeetingSDK,
		nullptr,
		"SDK_EMOJI_FEEDBACK_TYPE",
		"SDK_EMOJI_FEEDBACK_TYPE",
		Z_Construct_UEnum_ZoomMeetingSDK_SDK_EMOJI_FEEDBACK_TYPE_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ZoomMeetingSDK_SDK_EMOJI_FEEDBACK_TYPE_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ZoomMeetingSDK_SDK_EMOJI_FEEDBACK_TYPE_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ZoomMeetingSDK_SDK_EMOJI_FEEDBACK_TYPE_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ZoomMeetingSDK_SDK_EMOJI_FEEDBACK_TYPE()
	{
		if (!Z_Registration_Info_UEnum_SDK_EMOJI_FEEDBACK_TYPE.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_SDK_EMOJI_FEEDBACK_TYPE.InnerSingleton, Z_Construct_UEnum_ZoomMeetingSDK_SDK_EMOJI_FEEDBACK_TYPE_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_SDK_EMOJI_FEEDBACK_TYPE.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ZOOM_SDK_RAW_DATA_TYPE;
	static UEnum* ZOOM_SDK_RAW_DATA_TYPE_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ZOOM_SDK_RAW_DATA_TYPE.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ZOOM_SDK_RAW_DATA_TYPE.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ZoomMeetingSDK_ZOOM_SDK_RAW_DATA_TYPE, (UObject*)Z_Construct_UPackage__Script_ZoomMeetingSDK(), TEXT("ZOOM_SDK_RAW_DATA_TYPE"));
		}
		return Z_Registration_Info_UEnum_ZOOM_SDK_RAW_DATA_TYPE.OuterSingleton;
	}
	template<> ZOOMMEETINGSDK_API UEnum* StaticEnum<ZOOM_SDK_RAW_DATA_TYPE>()
	{
		return ZOOM_SDK_RAW_DATA_TYPE_StaticEnum();
	}
	struct Z_Construct_UEnum_ZoomMeetingSDK_ZOOM_SDK_RAW_DATA_TYPE_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ZoomMeetingSDK_ZOOM_SDK_RAW_DATA_TYPE_Statics::Enumerators[] = {
		{ "ZOOM_SDK_RAW_DATA_TYPE::ZoomSDKRawDataType_Video", (int64)ZOOM_SDK_RAW_DATA_TYPE::ZoomSDKRawDataType_Video },
		{ "ZOOM_SDK_RAW_DATA_TYPE::ZoomSDKRawDataType_Share", (int64)ZOOM_SDK_RAW_DATA_TYPE::ZoomSDKRawDataType_Share },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ZoomMeetingSDK_ZOOM_SDK_RAW_DATA_TYPE_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Redefining ENUM ZoomSDKRawDataType to be UE compatible.\n" },
#endif
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPDefine.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Redefining ENUM ZoomSDKRawDataType to be UE compatible." },
#endif
		{ "ZoomSDKRawDataType_Share.DisplayName", "Share" },
		{ "ZoomSDKRawDataType_Share.Name", "ZOOM_SDK_RAW_DATA_TYPE::ZoomSDKRawDataType_Share" },
		{ "ZoomSDKRawDataType_Video.DisplayName", "Video" },
		{ "ZoomSDKRawDataType_Video.Name", "ZOOM_SDK_RAW_DATA_TYPE::ZoomSDKRawDataType_Video" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ZoomMeetingSDK_ZOOM_SDK_RAW_DATA_TYPE_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ZoomMeetingSDK,
		nullptr,
		"ZOOM_SDK_RAW_DATA_TYPE",
		"ZOOM_SDK_RAW_DATA_TYPE",
		Z_Construct_UEnum_ZoomMeetingSDK_ZOOM_SDK_RAW_DATA_TYPE_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ZoomMeetingSDK_ZOOM_SDK_RAW_DATA_TYPE_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ZoomMeetingSDK_ZOOM_SDK_RAW_DATA_TYPE_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ZoomMeetingSDK_ZOOM_SDK_RAW_DATA_TYPE_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ZoomMeetingSDK_ZOOM_SDK_RAW_DATA_TYPE()
	{
		if (!Z_Registration_Info_UEnum_ZOOM_SDK_RAW_DATA_TYPE.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ZOOM_SDK_RAW_DATA_TYPE.InnerSingleton, Z_Construct_UEnum_ZoomMeetingSDK_ZOOM_SDK_RAW_DATA_TYPE_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ZOOM_SDK_RAW_DATA_TYPE.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_SHARING_STATUS;
	static UEnum* SHARING_STATUS_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_SHARING_STATUS.OuterSingleton)
		{
			Z_Registration_Info_UEnum_SHARING_STATUS.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ZoomMeetingSDK_SHARING_STATUS, (UObject*)Z_Construct_UPackage__Script_ZoomMeetingSDK(), TEXT("SHARING_STATUS"));
		}
		return Z_Registration_Info_UEnum_SHARING_STATUS.OuterSingleton;
	}
	template<> ZOOMMEETINGSDK_API UEnum* StaticEnum<SHARING_STATUS>()
	{
		return SHARING_STATUS_StaticEnum();
	}
	struct Z_Construct_UEnum_ZoomMeetingSDK_SHARING_STATUS_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ZoomMeetingSDK_SHARING_STATUS_Statics::Enumerators[] = {
		{ "SHARING_STATUS::Sharing_Self_Send_Begin", (int64)SHARING_STATUS::Sharing_Self_Send_Begin },
		{ "SHARING_STATUS::Sharing_Self_Send_End", (int64)SHARING_STATUS::Sharing_Self_Send_End },
		{ "SHARING_STATUS::Sharing_Self_Send_Pure_Audio_Begin", (int64)SHARING_STATUS::Sharing_Self_Send_Pure_Audio_Begin },
		{ "SHARING_STATUS::Sharing_Self_Send_Pure_Audio_End", (int64)SHARING_STATUS::Sharing_Self_Send_Pure_Audio_End },
		{ "SHARING_STATUS::Sharing_Other_Share_Begin", (int64)SHARING_STATUS::Sharing_Other_Share_Begin },
		{ "SHARING_STATUS::Sharing_Other_Share_End", (int64)SHARING_STATUS::Sharing_Other_Share_End },
		{ "SHARING_STATUS::Sharing_Other_Share_Pure_Audio_Begin", (int64)SHARING_STATUS::Sharing_Other_Share_Pure_Audio_Begin },
		{ "SHARING_STATUS::Sharing_Other_Share_Pure_Audio_End", (int64)SHARING_STATUS::Sharing_Other_Share_Pure_Audio_End },
		{ "SHARING_STATUS::Sharing_View_Other_Sharing", (int64)SHARING_STATUS::Sharing_View_Other_Sharing },
		{ "SHARING_STATUS::Sharing_Pause", (int64)SHARING_STATUS::Sharing_Pause },
		{ "SHARING_STATUS::Sharing_Resume", (int64)SHARING_STATUS::Sharing_Resume },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ZoomMeetingSDK_SHARING_STATUS_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Enum to define the sharing status.\n// Mimics enum SharingStatus in\n// meeting_service_components\\meeting_sharing_interface.h\n" },
#endif
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPDefine.h" },
		{ "Sharing_Other_Share_Begin.DisplayName", "Other Share Begin" },
		{ "Sharing_Other_Share_Begin.Name", "SHARING_STATUS::Sharing_Other_Share_Begin" },
		{ "Sharing_Other_Share_End.DisplayName", "Other Share End" },
		{ "Sharing_Other_Share_End.Name", "SHARING_STATUS::Sharing_Other_Share_End" },
		{ "Sharing_Other_Share_Pure_Audio_Begin.DisplayName", "Other Share Pure Audio Begin" },
		{ "Sharing_Other_Share_Pure_Audio_Begin.Name", "SHARING_STATUS::Sharing_Other_Share_Pure_Audio_Begin" },
		{ "Sharing_Other_Share_Pure_Audio_End.DisplayName", "Other Share Pure Audio End" },
		{ "Sharing_Other_Share_Pure_Audio_End.Name", "SHARING_STATUS::Sharing_Other_Share_Pure_Audio_End" },
		{ "Sharing_Pause.DisplayName", "Pause" },
		{ "Sharing_Pause.Name", "SHARING_STATUS::Sharing_Pause" },
		{ "Sharing_Resume.DisplayName", "Resume" },
		{ "Sharing_Resume.Name", "SHARING_STATUS::Sharing_Resume" },
		{ "Sharing_Self_Send_Begin.DisplayName", "Begin" },
		{ "Sharing_Self_Send_Begin.Name", "SHARING_STATUS::Sharing_Self_Send_Begin" },
		{ "Sharing_Self_Send_End.DisplayName", "End" },
		{ "Sharing_Self_Send_End.Name", "SHARING_STATUS::Sharing_Self_Send_End" },
		{ "Sharing_Self_Send_Pure_Audio_Begin.DisplayName", "Self Send Pure Audio Begin" },
		{ "Sharing_Self_Send_Pure_Audio_Begin.Name", "SHARING_STATUS::Sharing_Self_Send_Pure_Audio_Begin" },
		{ "Sharing_Self_Send_Pure_Audio_End.DisplayName", "Self Send Pure Audio End" },
		{ "Sharing_Self_Send_Pure_Audio_End.Name", "SHARING_STATUS::Sharing_Self_Send_Pure_Audio_End" },
		{ "Sharing_View_Other_Sharing.DisplayName", "View Other Sharing" },
		{ "Sharing_View_Other_Sharing.Name", "SHARING_STATUS::Sharing_View_Other_Sharing" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enum to define the sharing status.\nMimics enum SharingStatus in\nmeeting_service_components\\meeting_sharing_interface.h" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ZoomMeetingSDK_SHARING_STATUS_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ZoomMeetingSDK,
		nullptr,
		"SHARING_STATUS",
		"SHARING_STATUS",
		Z_Construct_UEnum_ZoomMeetingSDK_SHARING_STATUS_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ZoomMeetingSDK_SHARING_STATUS_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ZoomMeetingSDK_SHARING_STATUS_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ZoomMeetingSDK_SHARING_STATUS_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ZoomMeetingSDK_SHARING_STATUS()
	{
		if (!Z_Registration_Info_UEnum_SHARING_STATUS.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_SHARING_STATUS.InnerSingleton, Z_Construct_UEnum_ZoomMeetingSDK_SHARING_STATUS_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_SHARING_STATUS.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UEAuth_Pair;
class UScriptStruct* FUEAuth_Pair::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UEAuth_Pair.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UEAuth_Pair.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUEAuth_Pair, (UObject*)Z_Construct_UPackage__Script_ZoomMeetingSDK(), TEXT("UEAuth_Pair"));
	}
	return Z_Registration_Info_UScriptStruct_UEAuth_Pair.OuterSingleton;
}
template<> ZOOMMEETINGSDK_API UScriptStruct* StaticStruct<FUEAuth_Pair>()
{
	return FUEAuth_Pair::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUEAuth_Pair_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_auth_url_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_auth_url;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_verifier_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_verifier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUEAuth_Pair_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Blueprint struct to store the Auth Pair generated by PKCE.\n" },
#endif
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPDefine.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint struct to store the Auth Pair generated by PKCE." },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FUEAuth_Pair_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUEAuth_Pair>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUEAuth_Pair_Statics::NewProp_auth_url_MetaData[] = {
		{ "Category", "UEAuth_Pair" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPDefine.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUEAuth_Pair_Statics::NewProp_auth_url = { "auth_url", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUEAuth_Pair, auth_url), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUEAuth_Pair_Statics::NewProp_auth_url_MetaData), Z_Construct_UScriptStruct_FUEAuth_Pair_Statics::NewProp_auth_url_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUEAuth_Pair_Statics::NewProp_verifier_MetaData[] = {
		{ "Category", "UEAuth_Pair" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPDefine.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUEAuth_Pair_Statics::NewProp_verifier = { "verifier", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUEAuth_Pair, verifier), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUEAuth_Pair_Statics::NewProp_verifier_MetaData), Z_Construct_UScriptStruct_FUEAuth_Pair_Statics::NewProp_verifier_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUEAuth_Pair_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUEAuth_Pair_Statics::NewProp_auth_url,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUEAuth_Pair_Statics::NewProp_verifier,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUEAuth_Pair_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ZoomMeetingSDK,
		nullptr,
		&NewStructOps,
		"UEAuth_Pair",
		Z_Construct_UScriptStruct_FUEAuth_Pair_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUEAuth_Pair_Statics::PropPointers),
		sizeof(FUEAuth_Pair),
		alignof(FUEAuth_Pair),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUEAuth_Pair_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUEAuth_Pair_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUEAuth_Pair_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FUEAuth_Pair()
	{
		if (!Z_Registration_Info_UScriptStruct_UEAuth_Pair.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UEAuth_Pair.InnerSingleton, Z_Construct_UScriptStruct_FUEAuth_Pair_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UEAuth_Pair.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UEAnswerItem;
class UScriptStruct* FUEAnswerItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UEAnswerItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UEAnswerItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUEAnswerItem, (UObject*)Z_Construct_UPackage__Script_ZoomMeetingSDK(), TEXT("UEAnswerItem"));
	}
	return Z_Registration_Info_UScriptStruct_UEAnswerItem.OuterSingleton;
}
template<> ZOOMMEETINGSDK_API UScriptStruct* StaticStruct<FUEAnswerItem>()
{
	return FUEAnswerItem::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUEAnswerItem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_answer_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_answer_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_timestamp_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_timestamp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_text_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_text;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sender_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_sender_name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_question_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_question_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_is_private_MetaData[];
#endif
		static void NewProp_is_private_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_is_private;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_is_live_answer_MetaData[];
#endif
		static void NewProp_is_live_answer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_is_live_answer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_is_sender_myself_MetaData[];
#endif
		static void NewProp_is_sender_myself_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_is_sender_myself;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUEAnswerItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Blueprint struct which contains IAnswerItem info for a given answer id.\n" },
#endif
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPDefine.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint struct which contains IAnswerItem info for a given answer id." },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FUEAnswerItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUEAnswerItem>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUEAnswerItem_Statics::NewProp_answer_id_MetaData[] = {
		{ "Category", "UEAnswerItem" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPDefine.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUEAnswerItem_Statics::NewProp_answer_id = { "answer_id", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUEAnswerItem, answer_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUEAnswerItem_Statics::NewProp_answer_id_MetaData), Z_Construct_UScriptStruct_FUEAnswerItem_Statics::NewProp_answer_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUEAnswerItem_Statics::NewProp_timestamp_MetaData[] = {
		{ "Category", "UEAnswerItem" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPDefine.h" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FUEAnswerItem_Statics::NewProp_timestamp = { "timestamp", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUEAnswerItem, timestamp), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUEAnswerItem_Statics::NewProp_timestamp_MetaData), Z_Construct_UScriptStruct_FUEAnswerItem_Statics::NewProp_timestamp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUEAnswerItem_Statics::NewProp_text_MetaData[] = {
		{ "Category", "UEAnswerItem" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPDefine.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUEAnswerItem_Statics::NewProp_text = { "text", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUEAnswerItem, text), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUEAnswerItem_Statics::NewProp_text_MetaData), Z_Construct_UScriptStruct_FUEAnswerItem_Statics::NewProp_text_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUEAnswerItem_Statics::NewProp_sender_name_MetaData[] = {
		{ "Category", "UEAnswerItem" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPDefine.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUEAnswerItem_Statics::NewProp_sender_name = { "sender_name", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUEAnswerItem, sender_name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUEAnswerItem_Statics::NewProp_sender_name_MetaData), Z_Construct_UScriptStruct_FUEAnswerItem_Statics::NewProp_sender_name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUEAnswerItem_Statics::NewProp_question_id_MetaData[] = {
		{ "Category", "UEAnswerItem" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPDefine.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUEAnswerItem_Statics::NewProp_question_id = { "question_id", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUEAnswerItem, question_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUEAnswerItem_Statics::NewProp_question_id_MetaData), Z_Construct_UScriptStruct_FUEAnswerItem_Statics::NewProp_question_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUEAnswerItem_Statics::NewProp_is_private_MetaData[] = {
		{ "Category", "UEAnswerItem" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPDefine.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FUEAnswerItem_Statics::NewProp_is_private_SetBit(void* Obj)
	{
		((FUEAnswerItem*)Obj)->is_private = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUEAnswerItem_Statics::NewProp_is_private = { "is_private", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FUEAnswerItem), &Z_Construct_UScriptStruct_FUEAnswerItem_Statics::NewProp_is_private_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUEAnswerItem_Statics::NewProp_is_private_MetaData), Z_Construct_UScriptStruct_FUEAnswerItem_Statics::NewProp_is_private_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUEAnswerItem_Statics::NewProp_is_live_answer_MetaData[] = {
		{ "Category", "UEAnswerItem" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPDefine.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FUEAnswerItem_Statics::NewProp_is_live_answer_SetBit(void* Obj)
	{
		((FUEAnswerItem*)Obj)->is_live_answer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUEAnswerItem_Statics::NewProp_is_live_answer = { "is_live_answer", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FUEAnswerItem), &Z_Construct_UScriptStruct_FUEAnswerItem_Statics::NewProp_is_live_answer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUEAnswerItem_Statics::NewProp_is_live_answer_MetaData), Z_Construct_UScriptStruct_FUEAnswerItem_Statics::NewProp_is_live_answer_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUEAnswerItem_Statics::NewProp_is_sender_myself_MetaData[] = {
		{ "Category", "UEAnswerItem" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPDefine.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FUEAnswerItem_Statics::NewProp_is_sender_myself_SetBit(void* Obj)
	{
		((FUEAnswerItem*)Obj)->is_sender_myself = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUEAnswerItem_Statics::NewProp_is_sender_myself = { "is_sender_myself", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FUEAnswerItem), &Z_Construct_UScriptStruct_FUEAnswerItem_Statics::NewProp_is_sender_myself_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUEAnswerItem_Statics::NewProp_is_sender_myself_MetaData), Z_Construct_UScriptStruct_FUEAnswerItem_Statics::NewProp_is_sender_myself_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUEAnswerItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUEAnswerItem_Statics::NewProp_answer_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUEAnswerItem_Statics::NewProp_timestamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUEAnswerItem_Statics::NewProp_text,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUEAnswerItem_Statics::NewProp_sender_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUEAnswerItem_Statics::NewProp_question_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUEAnswerItem_Statics::NewProp_is_private,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUEAnswerItem_Statics::NewProp_is_live_answer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUEAnswerItem_Statics::NewProp_is_sender_myself,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUEAnswerItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ZoomMeetingSDK,
		nullptr,
		&NewStructOps,
		"UEAnswerItem",
		Z_Construct_UScriptStruct_FUEAnswerItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUEAnswerItem_Statics::PropPointers),
		sizeof(FUEAnswerItem),
		alignof(FUEAnswerItem),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUEAnswerItem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUEAnswerItem_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUEAnswerItem_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FUEAnswerItem()
	{
		if (!Z_Registration_Info_UScriptStruct_UEAnswerItem.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UEAnswerItem.InnerSingleton, Z_Construct_UScriptStruct_FUEAnswerItem_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UEAnswerItem.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UEQAItemInfo;
class UScriptStruct* FUEQAItemInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UEQAItemInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UEQAItemInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUEQAItemInfo, (UObject*)Z_Construct_UPackage__Script_ZoomMeetingSDK(), TEXT("UEQAItemInfo"));
	}
	return Z_Registration_Info_UScriptStruct_UEQAItemInfo.OuterSingleton;
}
template<> ZOOMMEETINGSDK_API UScriptStruct* StaticStruct<FUEQAItemInfo>()
{
	return FUEQAItemInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUEQAItemInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_question_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_question_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_timestamp_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_timestamp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_upvote_num_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_upvote_num;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_text_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_text;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sender_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_sender_name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_is_anonymous_MetaData[];
#endif
		static void NewProp_is_anonymous_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_is_anonymous;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_is_marked_as_answer_MetaData[];
#endif
		static void NewProp_is_marked_as_answer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_is_marked_as_answer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_is_marked_as_dismissed_MetaData[];
#endif
		static void NewProp_is_marked_as_dismissed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_is_marked_as_dismissed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_is_sender_myself_MetaData[];
#endif
		static void NewProp_is_sender_myself_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_is_sender_myself;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_is_myself_upvoted_MetaData[];
#endif
		static void NewProp_is_myself_upvoted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_is_myself_upvoted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_has_live_answers_MetaData[];
#endif
		static void NewProp_has_live_answers_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_has_live_answers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_has_text_answers_MetaData[];
#endif
		static void NewProp_has_text_answers_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_has_text_answers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_am_i_live_answering_MetaData[];
#endif
		static void NewProp_am_i_live_answering_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_am_i_live_answering;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_get_live_answer_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_get_live_answer_name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_is_live_answering_MetaData[];
#endif
		static void NewProp_is_live_answering_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_is_live_answering;
		static const UECodeGen_Private::FStructPropertyParams NewProp_get_answer_list_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_get_answer_list_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_get_answer_list;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Blueprint struct which contains IQAItemInfo info for a given question id.\n" },
#endif
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPDefine.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint struct which contains IQAItemInfo info for a given question id." },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUEQAItemInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_question_id_MetaData[] = {
		{ "Category", "UEQAItemInfo" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPDefine.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_question_id = { "question_id", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUEQAItemInfo, question_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_question_id_MetaData), Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_question_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_timestamp_MetaData[] = {
		{ "Category", "UEQAItemInfo" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPDefine.h" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_timestamp = { "timestamp", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUEQAItemInfo, timestamp), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_timestamp_MetaData), Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_timestamp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_upvote_num_MetaData[] = {
		{ "Category", "UEQAItemInfo" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPDefine.h" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_upvote_num = { "upvote_num", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUEQAItemInfo, upvote_num), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_upvote_num_MetaData), Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_upvote_num_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_text_MetaData[] = {
		{ "Category", "UEQAItemInfo" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPDefine.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_text = { "text", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUEQAItemInfo, text), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_text_MetaData), Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_text_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_sender_name_MetaData[] = {
		{ "Category", "UEQAItemInfo" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPDefine.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_sender_name = { "sender_name", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUEQAItemInfo, sender_name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_sender_name_MetaData), Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_sender_name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_is_anonymous_MetaData[] = {
		{ "Category", "UEQAItemInfo" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPDefine.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_is_anonymous_SetBit(void* Obj)
	{
		((FUEQAItemInfo*)Obj)->is_anonymous = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_is_anonymous = { "is_anonymous", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FUEQAItemInfo), &Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_is_anonymous_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_is_anonymous_MetaData), Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_is_anonymous_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_is_marked_as_answer_MetaData[] = {
		{ "Category", "UEQAItemInfo" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPDefine.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_is_marked_as_answer_SetBit(void* Obj)
	{
		((FUEQAItemInfo*)Obj)->is_marked_as_answer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_is_marked_as_answer = { "is_marked_as_answer", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FUEQAItemInfo), &Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_is_marked_as_answer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_is_marked_as_answer_MetaData), Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_is_marked_as_answer_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_is_marked_as_dismissed_MetaData[] = {
		{ "Category", "UEQAItemInfo" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPDefine.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_is_marked_as_dismissed_SetBit(void* Obj)
	{
		((FUEQAItemInfo*)Obj)->is_marked_as_dismissed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_is_marked_as_dismissed = { "is_marked_as_dismissed", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FUEQAItemInfo), &Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_is_marked_as_dismissed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_is_marked_as_dismissed_MetaData), Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_is_marked_as_dismissed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_is_sender_myself_MetaData[] = {
		{ "Category", "UEQAItemInfo" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPDefine.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_is_sender_myself_SetBit(void* Obj)
	{
		((FUEQAItemInfo*)Obj)->is_sender_myself = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_is_sender_myself = { "is_sender_myself", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FUEQAItemInfo), &Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_is_sender_myself_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_is_sender_myself_MetaData), Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_is_sender_myself_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_is_myself_upvoted_MetaData[] = {
		{ "Category", "UEQAItemInfo" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPDefine.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_is_myself_upvoted_SetBit(void* Obj)
	{
		((FUEQAItemInfo*)Obj)->is_myself_upvoted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_is_myself_upvoted = { "is_myself_upvoted", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FUEQAItemInfo), &Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_is_myself_upvoted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_is_myself_upvoted_MetaData), Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_is_myself_upvoted_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_has_live_answers_MetaData[] = {
		{ "Category", "UEQAItemInfo" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPDefine.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_has_live_answers_SetBit(void* Obj)
	{
		((FUEQAItemInfo*)Obj)->has_live_answers = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_has_live_answers = { "has_live_answers", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FUEQAItemInfo), &Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_has_live_answers_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_has_live_answers_MetaData), Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_has_live_answers_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_has_text_answers_MetaData[] = {
		{ "Category", "UEQAItemInfo" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPDefine.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_has_text_answers_SetBit(void* Obj)
	{
		((FUEQAItemInfo*)Obj)->has_text_answers = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_has_text_answers = { "has_text_answers", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FUEQAItemInfo), &Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_has_text_answers_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_has_text_answers_MetaData), Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_has_text_answers_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_am_i_live_answering_MetaData[] = {
		{ "Category", "UEQAItemInfo" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPDefine.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_am_i_live_answering_SetBit(void* Obj)
	{
		((FUEQAItemInfo*)Obj)->am_i_live_answering = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_am_i_live_answering = { "am_i_live_answering", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FUEQAItemInfo), &Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_am_i_live_answering_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_am_i_live_answering_MetaData), Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_am_i_live_answering_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_get_live_answer_name_MetaData[] = {
		{ "Category", "UEQAItemInfo" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPDefine.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_get_live_answer_name = { "get_live_answer_name", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUEQAItemInfo, get_live_answer_name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_get_live_answer_name_MetaData), Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_get_live_answer_name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_is_live_answering_MetaData[] = {
		{ "Category", "UEQAItemInfo" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPDefine.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_is_live_answering_SetBit(void* Obj)
	{
		((FUEQAItemInfo*)Obj)->is_live_answering = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_is_live_answering = { "is_live_answering", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FUEQAItemInfo), &Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_is_live_answering_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_is_live_answering_MetaData), Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_is_live_answering_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_get_answer_list_Inner = { "get_answer_list", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FUEAnswerItem, METADATA_PARAMS(0, nullptr) }; // 2771120552
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_get_answer_list_MetaData[] = {
		{ "Category", "UEQAItemInfo" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPDefine.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_get_answer_list = { "get_answer_list", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUEQAItemInfo, get_answer_list), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_get_answer_list_MetaData), Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_get_answer_list_MetaData) }; // 2771120552
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_question_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_timestamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_upvote_num,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_text,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_sender_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_is_anonymous,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_is_marked_as_answer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_is_marked_as_dismissed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_is_sender_myself,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_is_myself_upvoted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_has_live_answers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_has_text_answers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_am_i_live_answering,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_get_live_answer_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_is_live_answering,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_get_answer_list_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewProp_get_answer_list,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ZoomMeetingSDK,
		nullptr,
		&NewStructOps,
		"UEQAItemInfo",
		Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::PropPointers),
		sizeof(FUEQAItemInfo),
		alignof(FUEQAItemInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FUEQAItemInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_UEQAItemInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UEQAItemInfo.InnerSingleton, Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UEQAItemInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UEMeetingParameter;
class UScriptStruct* FUEMeetingParameter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UEMeetingParameter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UEMeetingParameter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUEMeetingParameter, (UObject*)Z_Construct_UPackage__Script_ZoomMeetingSDK(), TEXT("UEMeetingParameter"));
	}
	return Z_Registration_Info_UScriptStruct_UEMeetingParameter.OuterSingleton;
}
template<> ZOOMMEETINGSDK_API UScriptStruct* StaticStruct<FUEMeetingParameter>()
{
	return FUEMeetingParameter::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUEMeetingParameter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meeting_type_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_meeting_type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_is_view_only_MetaData[];
#endif
		static void NewProp_is_view_only_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_is_view_only;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_is_auto_recording_local_MetaData[];
#endif
		static void NewProp_is_auto_recording_local_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_is_auto_recording_local;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_is_auto_recording_cloud_MetaData[];
#endif
		static void NewProp_is_auto_recording_cloud_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_is_auto_recording_cloud;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meeting_number_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_meeting_number;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meeting_topic_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_meeting_topic;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meeting_host_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_meeting_host;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUEMeetingParameter_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Redefining Struct to be UE compatible.\n// # MeetingParameter\n" },
#endif
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPDefine.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Redefining Struct to be UE compatible.\n# MeetingParameter" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FUEMeetingParameter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUEMeetingParameter>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUEMeetingParameter_Statics::NewProp_meeting_type_MetaData[] = {
		{ "Category", "UEMeetingParameter" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPDefine.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUEMeetingParameter_Statics::NewProp_meeting_type = { "meeting_type", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUEMeetingParameter, meeting_type), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUEMeetingParameter_Statics::NewProp_meeting_type_MetaData), Z_Construct_UScriptStruct_FUEMeetingParameter_Statics::NewProp_meeting_type_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUEMeetingParameter_Statics::NewProp_is_view_only_MetaData[] = {
		{ "Category", "UEMeetingParameter" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPDefine.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FUEMeetingParameter_Statics::NewProp_is_view_only_SetBit(void* Obj)
	{
		((FUEMeetingParameter*)Obj)->is_view_only = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUEMeetingParameter_Statics::NewProp_is_view_only = { "is_view_only", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FUEMeetingParameter), &Z_Construct_UScriptStruct_FUEMeetingParameter_Statics::NewProp_is_view_only_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUEMeetingParameter_Statics::NewProp_is_view_only_MetaData), Z_Construct_UScriptStruct_FUEMeetingParameter_Statics::NewProp_is_view_only_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUEMeetingParameter_Statics::NewProp_is_auto_recording_local_MetaData[] = {
		{ "Category", "UEMeetingParameter" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPDefine.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FUEMeetingParameter_Statics::NewProp_is_auto_recording_local_SetBit(void* Obj)
	{
		((FUEMeetingParameter*)Obj)->is_auto_recording_local = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUEMeetingParameter_Statics::NewProp_is_auto_recording_local = { "is_auto_recording_local", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FUEMeetingParameter), &Z_Construct_UScriptStruct_FUEMeetingParameter_Statics::NewProp_is_auto_recording_local_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUEMeetingParameter_Statics::NewProp_is_auto_recording_local_MetaData), Z_Construct_UScriptStruct_FUEMeetingParameter_Statics::NewProp_is_auto_recording_local_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUEMeetingParameter_Statics::NewProp_is_auto_recording_cloud_MetaData[] = {
		{ "Category", "UEMeetingParameter" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPDefine.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FUEMeetingParameter_Statics::NewProp_is_auto_recording_cloud_SetBit(void* Obj)
	{
		((FUEMeetingParameter*)Obj)->is_auto_recording_cloud = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUEMeetingParameter_Statics::NewProp_is_auto_recording_cloud = { "is_auto_recording_cloud", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FUEMeetingParameter), &Z_Construct_UScriptStruct_FUEMeetingParameter_Statics::NewProp_is_auto_recording_cloud_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUEMeetingParameter_Statics::NewProp_is_auto_recording_cloud_MetaData), Z_Construct_UScriptStruct_FUEMeetingParameter_Statics::NewProp_is_auto_recording_cloud_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUEMeetingParameter_Statics::NewProp_meeting_number_MetaData[] = {
		{ "Category", "UEMeetingParameter" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPDefine.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUEMeetingParameter_Statics::NewProp_meeting_number = { "meeting_number", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUEMeetingParameter, meeting_number), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUEMeetingParameter_Statics::NewProp_meeting_number_MetaData), Z_Construct_UScriptStruct_FUEMeetingParameter_Statics::NewProp_meeting_number_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUEMeetingParameter_Statics::NewProp_meeting_topic_MetaData[] = {
		{ "Category", "UEMeetingParameter" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPDefine.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUEMeetingParameter_Statics::NewProp_meeting_topic = { "meeting_topic", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUEMeetingParameter, meeting_topic), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUEMeetingParameter_Statics::NewProp_meeting_topic_MetaData), Z_Construct_UScriptStruct_FUEMeetingParameter_Statics::NewProp_meeting_topic_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUEMeetingParameter_Statics::NewProp_meeting_host_MetaData[] = {
		{ "Category", "UEMeetingParameter" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPDefine.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUEMeetingParameter_Statics::NewProp_meeting_host = { "meeting_host", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUEMeetingParameter, meeting_host), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUEMeetingParameter_Statics::NewProp_meeting_host_MetaData), Z_Construct_UScriptStruct_FUEMeetingParameter_Statics::NewProp_meeting_host_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUEMeetingParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUEMeetingParameter_Statics::NewProp_meeting_type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUEMeetingParameter_Statics::NewProp_is_view_only,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUEMeetingParameter_Statics::NewProp_is_auto_recording_local,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUEMeetingParameter_Statics::NewProp_is_auto_recording_cloud,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUEMeetingParameter_Statics::NewProp_meeting_number,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUEMeetingParameter_Statics::NewProp_meeting_topic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUEMeetingParameter_Statics::NewProp_meeting_host,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUEMeetingParameter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ZoomMeetingSDK,
		nullptr,
		&NewStructOps,
		"UEMeetingParameter",
		Z_Construct_UScriptStruct_FUEMeetingParameter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUEMeetingParameter_Statics::PropPointers),
		sizeof(FUEMeetingParameter),
		alignof(FUEMeetingParameter),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUEMeetingParameter_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUEMeetingParameter_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUEMeetingParameter_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FUEMeetingParameter()
	{
		if (!Z_Registration_Info_UScriptStruct_UEMeetingParameter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UEMeetingParameter.InnerSingleton, Z_Construct_UScriptStruct_FUEMeetingParameter_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UEMeetingParameter.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UEChatStatus;
class UScriptStruct* FUEChatStatus::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UEChatStatus.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UEChatStatus.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUEChatStatus, (UObject*)Z_Construct_UPackage__Script_ZoomMeetingSDK(), TEXT("UEChatStatus"));
	}
	return Z_Registration_Info_UScriptStruct_UEChatStatus.OuterSingleton;
}
template<> ZOOMMEETINGSDK_API UScriptStruct* StaticStruct<FUEChatStatus>()
{
	return FUEChatStatus::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUEChatStatus_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_is_valid_status_MetaData[];
#endif
		static void NewProp_is_valid_status_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_is_valid_status;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_is_chat_off_MetaData[];
#endif
		static void NewProp_is_chat_off_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_is_chat_off;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_is_webinar_attendee_MetaData[];
#endif
		static void NewProp_is_webinar_attendee_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_is_webinar_attendee;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_is_webinar_meeting_MetaData[];
#endif
		static void NewProp_is_webinar_meeting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_is_webinar_meeting;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUEChatStatus_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// # ChatStatus\n" },
#endif
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPDefine.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "# ChatStatus" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FUEChatStatus_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUEChatStatus>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUEChatStatus_Statics::NewProp_is_valid_status_MetaData[] = {
		{ "Category", "UEChatStatus" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPDefine.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FUEChatStatus_Statics::NewProp_is_valid_status_SetBit(void* Obj)
	{
		((FUEChatStatus*)Obj)->is_valid_status = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUEChatStatus_Statics::NewProp_is_valid_status = { "is_valid_status", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FUEChatStatus), &Z_Construct_UScriptStruct_FUEChatStatus_Statics::NewProp_is_valid_status_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUEChatStatus_Statics::NewProp_is_valid_status_MetaData), Z_Construct_UScriptStruct_FUEChatStatus_Statics::NewProp_is_valid_status_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUEChatStatus_Statics::NewProp_is_chat_off_MetaData[] = {
		{ "Category", "UEChatStatus" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPDefine.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FUEChatStatus_Statics::NewProp_is_chat_off_SetBit(void* Obj)
	{
		((FUEChatStatus*)Obj)->is_chat_off = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUEChatStatus_Statics::NewProp_is_chat_off = { "is_chat_off", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FUEChatStatus), &Z_Construct_UScriptStruct_FUEChatStatus_Statics::NewProp_is_chat_off_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUEChatStatus_Statics::NewProp_is_chat_off_MetaData), Z_Construct_UScriptStruct_FUEChatStatus_Statics::NewProp_is_chat_off_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUEChatStatus_Statics::NewProp_is_webinar_attendee_MetaData[] = {
		{ "Category", "UEChatStatus" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPDefine.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FUEChatStatus_Statics::NewProp_is_webinar_attendee_SetBit(void* Obj)
	{
		((FUEChatStatus*)Obj)->is_webinar_attendee = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUEChatStatus_Statics::NewProp_is_webinar_attendee = { "is_webinar_attendee", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FUEChatStatus), &Z_Construct_UScriptStruct_FUEChatStatus_Statics::NewProp_is_webinar_attendee_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUEChatStatus_Statics::NewProp_is_webinar_attendee_MetaData), Z_Construct_UScriptStruct_FUEChatStatus_Statics::NewProp_is_webinar_attendee_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUEChatStatus_Statics::NewProp_is_webinar_meeting_MetaData[] = {
		{ "Category", "UEChatStatus" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPDefine.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FUEChatStatus_Statics::NewProp_is_webinar_meeting_SetBit(void* Obj)
	{
		((FUEChatStatus*)Obj)->is_webinar_meeting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUEChatStatus_Statics::NewProp_is_webinar_meeting = { "is_webinar_meeting", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FUEChatStatus), &Z_Construct_UScriptStruct_FUEChatStatus_Statics::NewProp_is_webinar_meeting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUEChatStatus_Statics::NewProp_is_webinar_meeting_MetaData), Z_Construct_UScriptStruct_FUEChatStatus_Statics::NewProp_is_webinar_meeting_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUEChatStatus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUEChatStatus_Statics::NewProp_is_valid_status,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUEChatStatus_Statics::NewProp_is_chat_off,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUEChatStatus_Statics::NewProp_is_webinar_attendee,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUEChatStatus_Statics::NewProp_is_webinar_meeting,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUEChatStatus_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ZoomMeetingSDK,
		nullptr,
		&NewStructOps,
		"UEChatStatus",
		Z_Construct_UScriptStruct_FUEChatStatus_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUEChatStatus_Statics::PropPointers),
		sizeof(FUEChatStatus),
		alignof(FUEChatStatus),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUEChatStatus_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUEChatStatus_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUEChatStatus_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FUEChatStatus()
	{
		if (!Z_Registration_Info_UScriptStruct_UEChatStatus.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UEChatStatus.InnerSingleton, Z_Construct_UScriptStruct_FUEChatStatus_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UEChatStatus.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UEUserInfo;
class UScriptStruct* FUEUserInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UEUserInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UEUserInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUEUserInfo, (UObject*)Z_Construct_UPackage__Script_ZoomMeetingSDK(), TEXT("UEUserInfo"));
	}
	return Z_Registration_Info_UScriptStruct_UEUserInfo.OuterSingleton;
}
template<> ZOOMMEETINGSDK_API UScriptStruct* StaticStruct<FUEUserInfo>()
{
	return FUEUserInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUEUserInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_user_id_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_user_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_user_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_user_name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_user_role_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_user_role;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_is_host_MetaData[];
#endif
		static void NewProp_is_host_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_is_host;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_is_in_waiting_room_MetaData[];
#endif
		static void NewProp_is_in_waiting_room_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_is_in_waiting_room;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_is_talking_MetaData[];
#endif
		static void NewProp_is_talking_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_is_talking;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_is_video_on_MetaData[];
#endif
		static void NewProp_is_video_on_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_is_video_on;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_is_raise_hand_MetaData[];
#endif
		static void NewProp_is_raise_hand_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_is_raise_hand;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_audio_level_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_audio_level;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_is_myself_MetaData[];
#endif
		static void NewProp_is_myself_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_is_myself;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUEUserInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// # UserInfo\n" },
#endif
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPDefine.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "# UserInfo" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FUEUserInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUEUserInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUEUserInfo_Statics::NewProp_user_id_MetaData[] = {
		{ "Category", "UEUserInfo" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPDefine.h" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FUEUserInfo_Statics::NewProp_user_id = { "user_id", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUEUserInfo, user_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUEUserInfo_Statics::NewProp_user_id_MetaData), Z_Construct_UScriptStruct_FUEUserInfo_Statics::NewProp_user_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUEUserInfo_Statics::NewProp_user_name_MetaData[] = {
		{ "Category", "UEUserInfo" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPDefine.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUEUserInfo_Statics::NewProp_user_name = { "user_name", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUEUserInfo, user_name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUEUserInfo_Statics::NewProp_user_name_MetaData), Z_Construct_UScriptStruct_FUEUserInfo_Statics::NewProp_user_name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUEUserInfo_Statics::NewProp_user_role_MetaData[] = {
		{ "Category", "UEUserInfo" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPDefine.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUEUserInfo_Statics::NewProp_user_role = { "user_role", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUEUserInfo, user_role), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUEUserInfo_Statics::NewProp_user_role_MetaData), Z_Construct_UScriptStruct_FUEUserInfo_Statics::NewProp_user_role_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUEUserInfo_Statics::NewProp_is_host_MetaData[] = {
		{ "Category", "UEUserInfo" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPDefine.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FUEUserInfo_Statics::NewProp_is_host_SetBit(void* Obj)
	{
		((FUEUserInfo*)Obj)->is_host = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUEUserInfo_Statics::NewProp_is_host = { "is_host", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FUEUserInfo), &Z_Construct_UScriptStruct_FUEUserInfo_Statics::NewProp_is_host_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUEUserInfo_Statics::NewProp_is_host_MetaData), Z_Construct_UScriptStruct_FUEUserInfo_Statics::NewProp_is_host_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUEUserInfo_Statics::NewProp_is_in_waiting_room_MetaData[] = {
		{ "Category", "UEUserInfo" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPDefine.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FUEUserInfo_Statics::NewProp_is_in_waiting_room_SetBit(void* Obj)
	{
		((FUEUserInfo*)Obj)->is_in_waiting_room = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUEUserInfo_Statics::NewProp_is_in_waiting_room = { "is_in_waiting_room", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FUEUserInfo), &Z_Construct_UScriptStruct_FUEUserInfo_Statics::NewProp_is_in_waiting_room_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUEUserInfo_Statics::NewProp_is_in_waiting_room_MetaData), Z_Construct_UScriptStruct_FUEUserInfo_Statics::NewProp_is_in_waiting_room_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUEUserInfo_Statics::NewProp_is_talking_MetaData[] = {
		{ "Category", "UEUserInfo" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPDefine.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FUEUserInfo_Statics::NewProp_is_talking_SetBit(void* Obj)
	{
		((FUEUserInfo*)Obj)->is_talking = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUEUserInfo_Statics::NewProp_is_talking = { "is_talking", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FUEUserInfo), &Z_Construct_UScriptStruct_FUEUserInfo_Statics::NewProp_is_talking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUEUserInfo_Statics::NewProp_is_talking_MetaData), Z_Construct_UScriptStruct_FUEUserInfo_Statics::NewProp_is_talking_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUEUserInfo_Statics::NewProp_is_video_on_MetaData[] = {
		{ "Category", "UEUserInfo" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPDefine.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FUEUserInfo_Statics::NewProp_is_video_on_SetBit(void* Obj)
	{
		((FUEUserInfo*)Obj)->is_video_on = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUEUserInfo_Statics::NewProp_is_video_on = { "is_video_on", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FUEUserInfo), &Z_Construct_UScriptStruct_FUEUserInfo_Statics::NewProp_is_video_on_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUEUserInfo_Statics::NewProp_is_video_on_MetaData), Z_Construct_UScriptStruct_FUEUserInfo_Statics::NewProp_is_video_on_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUEUserInfo_Statics::NewProp_is_raise_hand_MetaData[] = {
		{ "Category", "UEUserInfo" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPDefine.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FUEUserInfo_Statics::NewProp_is_raise_hand_SetBit(void* Obj)
	{
		((FUEUserInfo*)Obj)->is_raise_hand = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUEUserInfo_Statics::NewProp_is_raise_hand = { "is_raise_hand", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FUEUserInfo), &Z_Construct_UScriptStruct_FUEUserInfo_Statics::NewProp_is_raise_hand_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUEUserInfo_Statics::NewProp_is_raise_hand_MetaData), Z_Construct_UScriptStruct_FUEUserInfo_Statics::NewProp_is_raise_hand_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUEUserInfo_Statics::NewProp_audio_level_MetaData[] = {
		{ "Category", "UEUserInfo" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPDefine.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUEUserInfo_Statics::NewProp_audio_level = { "audio_level", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUEUserInfo, audio_level), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUEUserInfo_Statics::NewProp_audio_level_MetaData), Z_Construct_UScriptStruct_FUEUserInfo_Statics::NewProp_audio_level_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUEUserInfo_Statics::NewProp_is_myself_MetaData[] = {
		{ "Category", "UEUserInfo" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPDefine.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FUEUserInfo_Statics::NewProp_is_myself_SetBit(void* Obj)
	{
		((FUEUserInfo*)Obj)->is_myself = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUEUserInfo_Statics::NewProp_is_myself = { "is_myself", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FUEUserInfo), &Z_Construct_UScriptStruct_FUEUserInfo_Statics::NewProp_is_myself_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUEUserInfo_Statics::NewProp_is_myself_MetaData), Z_Construct_UScriptStruct_FUEUserInfo_Statics::NewProp_is_myself_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUEUserInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUEUserInfo_Statics::NewProp_user_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUEUserInfo_Statics::NewProp_user_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUEUserInfo_Statics::NewProp_user_role,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUEUserInfo_Statics::NewProp_is_host,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUEUserInfo_Statics::NewProp_is_in_waiting_room,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUEUserInfo_Statics::NewProp_is_talking,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUEUserInfo_Statics::NewProp_is_video_on,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUEUserInfo_Statics::NewProp_is_raise_hand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUEUserInfo_Statics::NewProp_audio_level,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUEUserInfo_Statics::NewProp_is_myself,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUEUserInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ZoomMeetingSDK,
		nullptr,
		&NewStructOps,
		"UEUserInfo",
		Z_Construct_UScriptStruct_FUEUserInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUEUserInfo_Statics::PropPointers),
		sizeof(FUEUserInfo),
		alignof(FUEUserInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUEUserInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUEUserInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUEUserInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FUEUserInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_UEUserInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UEUserInfo.InnerSingleton, Z_Construct_UScriptStruct_FUEUserInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UEUserInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UEChatMsgInfo;
class UScriptStruct* FUEChatMsgInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UEChatMsgInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UEChatMsgInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUEChatMsgInfo, (UObject*)Z_Construct_UPackage__Script_ZoomMeetingSDK(), TEXT("UEChatMsgInfo"));
	}
	return Z_Registration_Info_UScriptStruct_UEChatMsgInfo.OuterSingleton;
}
template<> ZOOMMEETINGSDK_API UScriptStruct* StaticStruct<FUEChatMsgInfo>()
{
	return FUEChatMsgInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUEChatMsgInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_message_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_message_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sender_user_id_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_sender_user_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sender_display_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_sender_display_name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_receiver_user_id_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_receiver_user_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_receiver_display_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_receiver_display_name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_content_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_content;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_timestamp_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_timestamp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_is_chat_to_all_MetaData[];
#endif
		static void NewProp_is_chat_to_all_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_is_chat_to_all;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_is_chat_to_panelist_MetaData[];
#endif
		static void NewProp_is_chat_to_panelist_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_is_chat_to_panelist;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_is_chat_to_waitingroom_MetaData[];
#endif
		static void NewProp_is_chat_to_waitingroom_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_is_chat_to_waitingroom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_chat_msg_type_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_chat_msg_type;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUEChatMsgInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// # IChatMsgInfo\n" },
#endif
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPDefine.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "# IChatMsgInfo" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FUEChatMsgInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUEChatMsgInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUEChatMsgInfo_Statics::NewProp_message_id_MetaData[] = {
		{ "Category", "UEChatMsgInfo" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPDefine.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUEChatMsgInfo_Statics::NewProp_message_id = { "message_id", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUEChatMsgInfo, message_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUEChatMsgInfo_Statics::NewProp_message_id_MetaData), Z_Construct_UScriptStruct_FUEChatMsgInfo_Statics::NewProp_message_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUEChatMsgInfo_Statics::NewProp_sender_user_id_MetaData[] = {
		{ "Category", "UEChatMsgInfo" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPDefine.h" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FUEChatMsgInfo_Statics::NewProp_sender_user_id = { "sender_user_id", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUEChatMsgInfo, sender_user_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUEChatMsgInfo_Statics::NewProp_sender_user_id_MetaData), Z_Construct_UScriptStruct_FUEChatMsgInfo_Statics::NewProp_sender_user_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUEChatMsgInfo_Statics::NewProp_sender_display_name_MetaData[] = {
		{ "Category", "UEChatMsgInfo" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPDefine.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUEChatMsgInfo_Statics::NewProp_sender_display_name = { "sender_display_name", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUEChatMsgInfo, sender_display_name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUEChatMsgInfo_Statics::NewProp_sender_display_name_MetaData), Z_Construct_UScriptStruct_FUEChatMsgInfo_Statics::NewProp_sender_display_name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUEChatMsgInfo_Statics::NewProp_receiver_user_id_MetaData[] = {
		{ "Category", "UEChatMsgInfo" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPDefine.h" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FUEChatMsgInfo_Statics::NewProp_receiver_user_id = { "receiver_user_id", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUEChatMsgInfo, receiver_user_id), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUEChatMsgInfo_Statics::NewProp_receiver_user_id_MetaData), Z_Construct_UScriptStruct_FUEChatMsgInfo_Statics::NewProp_receiver_user_id_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUEChatMsgInfo_Statics::NewProp_receiver_display_name_MetaData[] = {
		{ "Category", "UEChatMsgInfo" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPDefine.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUEChatMsgInfo_Statics::NewProp_receiver_display_name = { "receiver_display_name", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUEChatMsgInfo, receiver_display_name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUEChatMsgInfo_Statics::NewProp_receiver_display_name_MetaData), Z_Construct_UScriptStruct_FUEChatMsgInfo_Statics::NewProp_receiver_display_name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUEChatMsgInfo_Statics::NewProp_content_MetaData[] = {
		{ "Category", "UEChatMsgInfo" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPDefine.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUEChatMsgInfo_Statics::NewProp_content = { "content", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUEChatMsgInfo, content), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUEChatMsgInfo_Statics::NewProp_content_MetaData), Z_Construct_UScriptStruct_FUEChatMsgInfo_Statics::NewProp_content_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUEChatMsgInfo_Statics::NewProp_timestamp_MetaData[] = {
		{ "Category", "UEChatMsgInfo" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPDefine.h" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FUEChatMsgInfo_Statics::NewProp_timestamp = { "timestamp", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUEChatMsgInfo, timestamp), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUEChatMsgInfo_Statics::NewProp_timestamp_MetaData), Z_Construct_UScriptStruct_FUEChatMsgInfo_Statics::NewProp_timestamp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUEChatMsgInfo_Statics::NewProp_is_chat_to_all_MetaData[] = {
		{ "Category", "UEChatMsgInfo" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPDefine.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FUEChatMsgInfo_Statics::NewProp_is_chat_to_all_SetBit(void* Obj)
	{
		((FUEChatMsgInfo*)Obj)->is_chat_to_all = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUEChatMsgInfo_Statics::NewProp_is_chat_to_all = { "is_chat_to_all", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FUEChatMsgInfo), &Z_Construct_UScriptStruct_FUEChatMsgInfo_Statics::NewProp_is_chat_to_all_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUEChatMsgInfo_Statics::NewProp_is_chat_to_all_MetaData), Z_Construct_UScriptStruct_FUEChatMsgInfo_Statics::NewProp_is_chat_to_all_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUEChatMsgInfo_Statics::NewProp_is_chat_to_panelist_MetaData[] = {
		{ "Category", "UEChatMsgInfo" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPDefine.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FUEChatMsgInfo_Statics::NewProp_is_chat_to_panelist_SetBit(void* Obj)
	{
		((FUEChatMsgInfo*)Obj)->is_chat_to_panelist = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUEChatMsgInfo_Statics::NewProp_is_chat_to_panelist = { "is_chat_to_panelist", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FUEChatMsgInfo), &Z_Construct_UScriptStruct_FUEChatMsgInfo_Statics::NewProp_is_chat_to_panelist_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUEChatMsgInfo_Statics::NewProp_is_chat_to_panelist_MetaData), Z_Construct_UScriptStruct_FUEChatMsgInfo_Statics::NewProp_is_chat_to_panelist_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUEChatMsgInfo_Statics::NewProp_is_chat_to_waitingroom_MetaData[] = {
		{ "Category", "UEChatMsgInfo" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPDefine.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FUEChatMsgInfo_Statics::NewProp_is_chat_to_waitingroom_SetBit(void* Obj)
	{
		((FUEChatMsgInfo*)Obj)->is_chat_to_waitingroom = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUEChatMsgInfo_Statics::NewProp_is_chat_to_waitingroom = { "is_chat_to_waitingroom", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FUEChatMsgInfo), &Z_Construct_UScriptStruct_FUEChatMsgInfo_Statics::NewProp_is_chat_to_waitingroom_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUEChatMsgInfo_Statics::NewProp_is_chat_to_waitingroom_MetaData), Z_Construct_UScriptStruct_FUEChatMsgInfo_Statics::NewProp_is_chat_to_waitingroom_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUEChatMsgInfo_Statics::NewProp_chat_msg_type_MetaData[] = {
		{ "Category", "UEChatMsgInfo" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPDefine.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUEChatMsgInfo_Statics::NewProp_chat_msg_type = { "chat_msg_type", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUEChatMsgInfo, chat_msg_type), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUEChatMsgInfo_Statics::NewProp_chat_msg_type_MetaData), Z_Construct_UScriptStruct_FUEChatMsgInfo_Statics::NewProp_chat_msg_type_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUEChatMsgInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUEChatMsgInfo_Statics::NewProp_message_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUEChatMsgInfo_Statics::NewProp_sender_user_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUEChatMsgInfo_Statics::NewProp_sender_display_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUEChatMsgInfo_Statics::NewProp_receiver_user_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUEChatMsgInfo_Statics::NewProp_receiver_display_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUEChatMsgInfo_Statics::NewProp_content,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUEChatMsgInfo_Statics::NewProp_timestamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUEChatMsgInfo_Statics::NewProp_is_chat_to_all,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUEChatMsgInfo_Statics::NewProp_is_chat_to_panelist,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUEChatMsgInfo_Statics::NewProp_is_chat_to_waitingroom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUEChatMsgInfo_Statics::NewProp_chat_msg_type,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUEChatMsgInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ZoomMeetingSDK,
		nullptr,
		&NewStructOps,
		"UEChatMsgInfo",
		Z_Construct_UScriptStruct_FUEChatMsgInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUEChatMsgInfo_Statics::PropPointers),
		sizeof(FUEChatMsgInfo),
		alignof(FUEChatMsgInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUEChatMsgInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUEChatMsgInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUEChatMsgInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FUEChatMsgInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_UEChatMsgInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UEChatMsgInfo.InnerSingleton, Z_Construct_UScriptStruct_FUEChatMsgInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UEChatMsgInfo.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Zoom_Unreal_Experiments_Zoom_Example_Projects_Zoom_Sample_Project_Release_v1_0_Plugins_ZoomMeetingSDK_Source_ZoomMeetingSDK_Public_ZoomMeetingSDKBPDefine_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Zoom_Unreal_Experiments_Zoom_Example_Projects_Zoom_Sample_Project_Release_v1_0_Plugins_ZoomMeetingSDK_Source_ZoomMeetingSDK_Public_ZoomMeetingSDKBPDefine_h_Statics::EnumInfo[] = {
		{ BO_STOP_COUNTDOWN_StaticEnum, TEXT("BO_STOP_COUNTDOWN"), &Z_Registration_Info_UEnum_BO_STOP_COUNTDOWN, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4257867045U) },
		{ CHAT_MESSAGE_TYPE_StaticEnum, TEXT("CHAT_MESSAGE_TYPE"), &Z_Registration_Info_UEnum_CHAT_MESSAGE_TYPE, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 185124902U) },
		{ RAW_DATA_RESOLUTION_StaticEnum, TEXT("RAW_DATA_RESOLUTION"), &Z_Registration_Info_UEnum_RAW_DATA_RESOLUTION, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3245310654U) },
		{ SDK_EMOJI_REACTION_TYPE_StaticEnum, TEXT("SDK_EMOJI_REACTION_TYPE"), &Z_Registration_Info_UEnum_SDK_EMOJI_REACTION_TYPE, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2268286005U) },
		{ SDK_EMOJI_FEEDBACK_TYPE_StaticEnum, TEXT("SDK_EMOJI_FEEDBACK_TYPE"), &Z_Registration_Info_UEnum_SDK_EMOJI_FEEDBACK_TYPE, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 502641630U) },
		{ ZOOM_SDK_RAW_DATA_TYPE_StaticEnum, TEXT("ZOOM_SDK_RAW_DATA_TYPE"), &Z_Registration_Info_UEnum_ZOOM_SDK_RAW_DATA_TYPE, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1620386359U) },
		{ SHARING_STATUS_StaticEnum, TEXT("SHARING_STATUS"), &Z_Registration_Info_UEnum_SHARING_STATUS, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3397431615U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Zoom_Unreal_Experiments_Zoom_Example_Projects_Zoom_Sample_Project_Release_v1_0_Plugins_ZoomMeetingSDK_Source_ZoomMeetingSDK_Public_ZoomMeetingSDKBPDefine_h_Statics::ScriptStructInfo[] = {
		{ FUEAuth_Pair::StaticStruct, Z_Construct_UScriptStruct_FUEAuth_Pair_Statics::NewStructOps, TEXT("UEAuth_Pair"), &Z_Registration_Info_UScriptStruct_UEAuth_Pair, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUEAuth_Pair), 410792333U) },
		{ FUEAnswerItem::StaticStruct, Z_Construct_UScriptStruct_FUEAnswerItem_Statics::NewStructOps, TEXT("UEAnswerItem"), &Z_Registration_Info_UScriptStruct_UEAnswerItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUEAnswerItem), 2771120552U) },
		{ FUEQAItemInfo::StaticStruct, Z_Construct_UScriptStruct_FUEQAItemInfo_Statics::NewStructOps, TEXT("UEQAItemInfo"), &Z_Registration_Info_UScriptStruct_UEQAItemInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUEQAItemInfo), 1642833442U) },
		{ FUEMeetingParameter::StaticStruct, Z_Construct_UScriptStruct_FUEMeetingParameter_Statics::NewStructOps, TEXT("UEMeetingParameter"), &Z_Registration_Info_UScriptStruct_UEMeetingParameter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUEMeetingParameter), 170849901U) },
		{ FUEChatStatus::StaticStruct, Z_Construct_UScriptStruct_FUEChatStatus_Statics::NewStructOps, TEXT("UEChatStatus"), &Z_Registration_Info_UScriptStruct_UEChatStatus, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUEChatStatus), 1742940099U) },
		{ FUEUserInfo::StaticStruct, Z_Construct_UScriptStruct_FUEUserInfo_Statics::NewStructOps, TEXT("UEUserInfo"), &Z_Registration_Info_UScriptStruct_UEUserInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUEUserInfo), 2910621085U) },
		{ FUEChatMsgInfo::StaticStruct, Z_Construct_UScriptStruct_FUEChatMsgInfo_Statics::NewStructOps, TEXT("UEChatMsgInfo"), &Z_Registration_Info_UScriptStruct_UEChatMsgInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUEChatMsgInfo), 814469336U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Zoom_Unreal_Experiments_Zoom_Example_Projects_Zoom_Sample_Project_Release_v1_0_Plugins_ZoomMeetingSDK_Source_ZoomMeetingSDK_Public_ZoomMeetingSDKBPDefine_h_3016395480(TEXT("/Script/ZoomMeetingSDK"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Zoom_Unreal_Experiments_Zoom_Example_Projects_Zoom_Sample_Project_Release_v1_0_Plugins_ZoomMeetingSDK_Source_ZoomMeetingSDK_Public_ZoomMeetingSDKBPDefine_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Zoom_Unreal_Experiments_Zoom_Example_Projects_Zoom_Sample_Project_Release_v1_0_Plugins_ZoomMeetingSDK_Source_ZoomMeetingSDK_Public_ZoomMeetingSDKBPDefine_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Zoom_Unreal_Experiments_Zoom_Example_Projects_Zoom_Sample_Project_Release_v1_0_Plugins_ZoomMeetingSDK_Source_ZoomMeetingSDK_Public_ZoomMeetingSDKBPDefine_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Zoom_Unreal_Experiments_Zoom_Example_Projects_Zoom_Sample_Project_Release_v1_0_Plugins_ZoomMeetingSDK_Source_ZoomMeetingSDK_Public_ZoomMeetingSDKBPDefine_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
