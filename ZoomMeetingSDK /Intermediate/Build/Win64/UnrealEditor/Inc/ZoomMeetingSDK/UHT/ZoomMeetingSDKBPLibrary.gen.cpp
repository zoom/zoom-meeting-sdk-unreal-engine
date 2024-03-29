// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../ZoomMeetingSDK/Public/ZoomMeetingSDKBPLibrary.h"
#include "../../../ZoomMeetingSDK/Public/ZoomMeetingSDKBPDefine.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZoomMeetingSDKBPLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ZoomMeetingSDK();
	ZOOMMEETINGSDK_API UClass* Z_Construct_UClass_UZoomMeetingSDKBPLibrary();
	ZOOMMEETINGSDK_API UClass* Z_Construct_UClass_UZoomMeetingSDKBPLibrary_NoRegister();
	ZOOMMEETINGSDK_API UEnum* Z_Construct_UEnum_ZoomMeetingSDK_RAW_DATA_RESOLUTION();
	ZOOMMEETINGSDK_API UEnum* Z_Construct_UEnum_ZoomMeetingSDK_SDK_EMOJI_FEEDBACK_TYPE();
	ZOOMMEETINGSDK_API UEnum* Z_Construct_UEnum_ZoomMeetingSDK_SDK_EMOJI_REACTION_TYPE();
	ZOOMMEETINGSDK_API UEnum* Z_Construct_UEnum_ZoomMeetingSDK_ZOOM_SDK_RAW_DATA_TYPE();
	ZOOMMEETINGSDK_API UScriptStruct* Z_Construct_UScriptStruct_FUEAnswerItem();
	ZOOMMEETINGSDK_API UScriptStruct* Z_Construct_UScriptStruct_FUEAuth_Pair();
	ZOOMMEETINGSDK_API UScriptStruct* Z_Construct_UScriptStruct_FUEChatMsgInfo();
	ZOOMMEETINGSDK_API UScriptStruct* Z_Construct_UScriptStruct_FUEChatStatus();
	ZOOMMEETINGSDK_API UScriptStruct* Z_Construct_UScriptStruct_FUEQAItemInfo();
	ZOOMMEETINGSDK_API UScriptStruct* Z_Construct_UScriptStruct_FUEUserInfo();
// End Cross Module References
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execSetInstance)
	{
		P_GET_OBJECT(UZoomMeetingSDKBPLibrary,Z_Param_pInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		UZoomMeetingSDKBPLibrary::SetInstance(Z_Param_pInstance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execGetInstance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UZoomMeetingSDKBPLibrary**)Z_Param__Result=UZoomMeetingSDKBPLibrary::GetInstance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execDisableVideoSource)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::DisableVideoSource();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execEnableVideoSource)
	{
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_texture_to_send);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::EnableVideoSource(Z_Param_texture_to_send);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execBase64Encode)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_str);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UZoomMeetingSDKBPLibrary::Base64Encode(Z_Param_str);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execUrlEncode)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_url_str);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UZoomMeetingSDKBPLibrary::UrlEncode(Z_Param_url_str);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execGenerateJWTAuthToken)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_client_id);
		P_GET_PROPERTY(FStrProperty,Z_Param_client_secret);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UZoomMeetingSDKBPLibrary::GenerateJWTAuthToken(Z_Param_client_id,Z_Param_client_secret);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execGeneratePKCEAuthPair)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_client_id);
		P_GET_PROPERTY(FStrProperty,Z_Param_redirect_url);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FUEAuth_Pair*)Z_Param__Result=UZoomMeetingSDKBPLibrary::GeneratePKCEAuthPair(Z_Param_client_id,Z_Param_redirect_url);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execGetAllQuestionList)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FUEQAItemInfo>*)Z_Param__Result=UZoomMeetingSDKBPLibrary::GetAllQuestionList();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execRequestLocalRecordingPrivilege)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::RequestLocalRecordingPrivilege();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execCanAllowDisAllowLocalRecording)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::CanAllowDisAllowLocalRecording();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execStopRawRecording)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::StopRawRecording();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execStartRawRecording)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::StartRawRecording();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execAllowAttendeeTalk)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_user_id);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::AllowAttendeeTalk(Z_Param_user_id);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execAdmitToMeeting)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_user_id);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::AdmitToMeeting(Z_Param_user_id);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execAdmitAllToMeeting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::AdmitAllToMeeting();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execPutInWaitingRoom)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_user_id);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::PutInWaitingRoom(Z_Param_user_id);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execGetWaitingRoomUserInfoByID)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_user_id);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FUEUserInfo*)Z_Param__Result=UZoomMeetingSDKBPLibrary::GetWaitingRoomUserInfoByID(Z_Param_user_id);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execGetWaitingRoomLst)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int64>*)Z_Param__Result=UZoomMeetingSDKBPLibrary::GetWaitingRoomLst();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execGetUserInfo)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_user_id);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FUEUserInfo*)Z_Param__Result=UZoomMeetingSDKBPLibrary::GetUserInfo(Z_Param_user_id);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execLowerHand)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_user_id);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::LowerHand(Z_Param_user_id);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execLowerAllHands)
	{
		P_GET_UBOOL(Z_Param_forWebinarAttendees);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::LowerAllHands(Z_Param_forWebinarAttendees);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execGetParticipantsList)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FUEUserInfo>*)Z_Param__Result=UZoomMeetingSDKBPLibrary::GetParticipantsList();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execCanStartRawLiveStream)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::CanStartRawLiveStream();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execCanStartLiveStream)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::CanStartLiveStream();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execCanAskAttendeeToStartVideo)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_user_id);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::CanAskAttendeeToStartVideo(Z_Param_user_id);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execCanStopAttendeeVideo)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_user_id);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::CanStopAttendeeVideo(Z_Param_user_id);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execAskAttendeeToStartVideo)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_user_id);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::AskAttendeeToStartVideo(Z_Param_user_id);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execStopAttendeeVideo)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_user_id);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::StopAttendeeVideo(Z_Param_user_id);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execUnmuteVideo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::UnmuteVideo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execMuteVideo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::MuteVideo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execCanUnSpotlight)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_user_id);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::CanUnSpotlight(Z_Param_user_id);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execCanSpotlight)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_user_id);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::CanSpotlight(Z_Param_user_id);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execUnSpotlightVideo)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_user_id);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::UnSpotlightVideo(Z_Param_user_id);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execUnSpotlightAllVideos)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::UnSpotlightAllVideos();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execSpotlightVideo)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_user_id);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::SpotlightVideo(Z_Param_user_id);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execGetSpotlightedUserList)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FUEUserInfo>*)Z_Param__Result=UZoomMeetingSDKBPLibrary::GetSpotlightedUserList();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execCanStartDirectShare)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::CanStartDirectShare();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execIsAnnotationDisable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::IsAnnotationDisable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execIsSupportImmersive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::IsSupportImmersive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execEnableClaimHostFeature)
	{
		P_GET_UBOOL(Z_Param_enable);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::EnableClaimHostFeature(Z_Param_enable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execSendChatMessage)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_content);
		P_GET_PROPERTY(FInt64Property,Z_Param_receiver);
		P_GET_PROPERTY(FStrProperty,Z_Param_chatType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::SendChatMessage(Z_Param_content,Z_Param_receiver,Z_Param_chatType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execIsChatMessageCanBeDeleted)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_msgID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::IsChatMessageCanBeDeleted(Z_Param_msgID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execGetChatStatus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FUEChatStatus*)Z_Param__Result=UZoomMeetingSDKBPLibrary::GetChatStatus();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execGetAllChatMessageID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UZoomMeetingSDKBPLibrary::GetAllChatMessageID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execGetChatMessageInfo)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_msgID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FUEChatMsgInfo*)Z_Param__Result=UZoomMeetingSDKBPLibrary::GetChatMessageInfo(Z_Param_msgID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execDeleteChatMessage)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_msgID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::DeleteChatMessage(Z_Param_msgID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execCancelEmojiFeedback)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::CancelEmojiFeedback();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execSendEmojiFeedback)
	{
		P_GET_ENUM(SDK_EMOJI_FEEDBACK_TYPE,Z_Param_type);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::SendEmojiFeedback(SDK_EMOJI_FEEDBACK_TYPE(Z_Param_type));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execSendEmojiReaction)
	{
		P_GET_ENUM(SDK_EMOJI_REACTION_TYPE,Z_Param_type);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::SendEmojiReaction(SDK_EMOJI_REACTION_TYPE(Z_Param_type));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execIsEmojiReactionEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::IsEmojiReactionEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execIsInBOMeeting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::IsInBOMeeting();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execIsBOStarted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::IsBOStarted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execIsBOEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::IsBOEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execUnMuteAudio)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_userID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::UnMuteAudio(Z_Param_userID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execCanUnMuteByself)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::CanUnMuteByself();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execMuteAudio)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_userID);
		P_GET_UBOOL(Z_Param_allowUnmuteBySelf);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::MuteAudio(Z_Param_userID,Z_Param_allowUnmuteBySelf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execEnableForceAutoStopMyVideoWhenJoinMeeting)
	{
		P_GET_UBOOL(Z_Param_enable);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::EnableForceAutoStopMyVideoWhenJoinMeeting(Z_Param_enable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execEnableForceAutoStartMyVideoWhenJoinMeeting)
	{
		P_GET_UBOOL(Z_Param_enable);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::EnableForceAutoStartMyVideoWhenJoinMeeting(Z_Param_enable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execCanSendClosedCaption)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::CanSendClosedCaption();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execCanStartLiveTranscription)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::CanStartLiveTranscription();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execCanBeAssignedToSendCC)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_userID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::CanBeAssignedToSendCC(Z_Param_userID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execCanAssignOtherToSendCC)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::CanAssignOtherToSendCC();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execEndZoomOut)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::EndZoomOut();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execContinueZoomOut)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::ContinueZoomOut();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execBeginZoomOut)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::BeginZoomOut();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execEndZoomIn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::EndZoomIn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execContinueZoomIn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::ContinueZoomIn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execBeginZoomIn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::BeginZoomIn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execEndTurnDown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::EndTurnDown();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execContinueTurnDown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::ContinueTurnDown();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execBeginTurnDown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::BeginTurnDown();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execEndTurnUp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::EndTurnUp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execContinueTurnUp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::ContinueTurnUp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execBeginTurnUp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::BeginTurnUp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execEndTurnRight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::EndTurnRight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execContinueTurnRight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::ContinueTurnRight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execBeginTurnRight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::BeginTurnRight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execEndTurnLeft)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::EndTurnLeft();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execContinueTurnLeft)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::ContinueTurnLeft();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execBeginTurnLeft)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::BeginTurnLeft();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execIsValid)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::IsValid();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execCanControlCamera)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::CanControlCamera();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execGetCurrentBOName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UZoomMeetingSDKBPLibrary::GetCurrentBOName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execIsBOUserMyself)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_strUserID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::IsBOUserMyself(Z_Param_strUserID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execGetBOUserName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_strUserID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UZoomMeetingSDKBPLibrary::GetBOUserName(Z_Param_strUserID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execRemoveUserFromBO)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_strUserID);
		P_GET_PROPERTY(FStrProperty,Z_Param_strBOID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::RemoveUserFromBO(Z_Param_strUserID,Z_Param_strBOID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execAssignUserToBO)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_strUserID);
		P_GET_PROPERTY(FStrProperty,Z_Param_strBOID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::AssignUserToBO(Z_Param_strUserID,Z_Param_strBOID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execRemoveBO)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_strBOID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::RemoveBO(Z_Param_strBOID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execUpdateBOName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_strBOID);
		P_GET_PROPERTY(FStrProperty,Z_Param_strNewBOName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::UpdateBOName(Z_Param_strBOID,Z_Param_strNewBOName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execCreateBO)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_strBOName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::CreateBO(Z_Param_strBOName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execAttendeeLeaveBO)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::AttendeeLeaveBO();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execAttendeeJoinBO)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::AttendeeJoinBO();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execIsHostInThisBO)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::IsHostInThisBO();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execIsCanReturnMainSession)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::IsCanReturnMainSession();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execGetBOName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UZoomMeetingSDKBPLibrary::GetBOName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execBOAssistantLeaveBO)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::BOAssistantLeaveBO();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execBOAssistantJoinBO)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_strBOID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::BOAssistantJoinBO(Z_Param_strBOID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execStopBO)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::StopBO();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execStartBO)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::StartBO();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execJoinBOByUserRequest)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_userID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::JoinBOByUserRequest(Z_Param_userID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execInviteBOUserReturnToMainSession)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_userID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::InviteBOUserReturnToMainSession(Z_Param_userID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execBroadcastMessage)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_message);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::BroadcastMessage(Z_Param_message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execAssignNewUserToRunningBO)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_userID);
		P_GET_PROPERTY(FStrProperty,Z_Param_BOID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::AssignNewUserToRunningBO(Z_Param_userID,Z_Param_BOID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execCanStartBO)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::CanStartBO();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execCreateBOTransactionCommit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::CreateBOTransactionCommit();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execCreateBOTransactionBegin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::CreateBOTransactionBegin();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execAddNewBoToList)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_strNewBOName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::AddNewBoToList(Z_Param_strNewBOName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execUseDefaultSystemSpeaker)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::UseDefaultSystemSpeaker();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execUseDefaultSystemMic)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::UseDefaultSystemMic();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execSetSpeakerVol)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_volume);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::SetSpeakerVol(Z_Param_volume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execEnableAutoAdjustMic)
	{
		P_GET_UBOOL(Z_Param_enable);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::EnableAutoAdjustMic(Z_Param_enable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execGetSpeakerVol)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UZoomMeetingSDKBPLibrary::GetSpeakerVol();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execGetAnswerItemInfo)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_answerID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FUEAnswerItem*)Z_Param__Result=UZoomMeetingSDKBPLibrary::GetAnswerItemInfo(Z_Param_answerID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execSetRawDataResolution)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_userId);
		P_GET_ENUM(RAW_DATA_RESOLUTION,Z_Param_resolution);
		P_GET_ENUM(ZOOM_SDK_RAW_DATA_TYPE,Z_Param_raw_data_type);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::SetRawDataResolution(Z_Param_userId,RAW_DATA_RESOLUTION(Z_Param_resolution),ZOOM_SDK_RAW_DATA_TYPE(Z_Param_raw_data_type));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execGetOutputRenderer)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_userId);
		P_GET_ENUM(ZOOM_SDK_RAW_DATA_TYPE,Z_Param_raw_data_type);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTextureRenderTarget2D**)Z_Param__Result=UZoomMeetingSDKBPLibrary::GetOutputRenderer(Z_Param_userId,ZOOM_SDK_RAW_DATA_TYPE(Z_Param_raw_data_type));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execIsUserSubscribedToVideo)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_userId);
		P_GET_ENUM(ZOOM_SDK_RAW_DATA_TYPE,Z_Param_raw_data_type);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::IsUserSubscribedToVideo(Z_Param_userId,ZOOM_SDK_RAW_DATA_TYPE(Z_Param_raw_data_type));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execUnSubscribeVideo)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_userId);
		P_GET_ENUM(ZOOM_SDK_RAW_DATA_TYPE,Z_Param_raw_data_type);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::UnSubscribeVideo(Z_Param_userId,ZOOM_SDK_RAW_DATA_TYPE(Z_Param_raw_data_type));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execSubscribeVideo)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_user_id);
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_outputRenderer);
		P_GET_ENUM(ZOOM_SDK_RAW_DATA_TYPE,Z_Param_raw_data_type);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::SubscribeVideo(Z_Param_user_id,Z_Param_WorldContextObject,Z_Param_outputRenderer,ZOOM_SDK_RAW_DATA_TYPE(Z_Param_raw_data_type));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execLeaveMeeting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::LeaveMeeting();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execEndMeeting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::EndMeeting();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execJoinZoomEventMeeting)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_zoomEventToken);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::JoinZoomEventMeeting(Z_Param_zoomEventToken);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execJoinMeeting)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_meetingNumber);
		P_GET_PROPERTY(FStrProperty,Z_Param_passcode);
		P_GET_PROPERTY(FStrProperty,Z_Param_userName);
		P_GET_PROPERTY(FStrProperty,Z_Param_zakToken);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::JoinMeeting(Z_Param_meetingNumber,Z_Param_passcode,Z_Param_userName,Z_Param_zakToken);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execStartMeeting)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_userName);
		P_GET_PROPERTY(FStrProperty,Z_Param_zakToken);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::StartMeeting(Z_Param_userName,Z_Param_zakToken);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execLogOut)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::LogOut();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execInitAuthSDK)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_jwt);
		P_GET_UBOOL(Z_Param_use_default_zoom_ui);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::InitAuthSDK(Z_Param_jwt,Z_Param_use_default_zoom_ui);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execGetAuthResult)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UZoomMeetingSDKBPLibrary::GetAuthResult();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execSDKAuthJWT)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_jwt);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::SDKAuthJWT(Z_Param_jwt);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execCleanupSDK)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::CleanupSDK();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execInitSDK)
	{
		P_GET_UBOOL(Z_Param_use_default_zoom_ui);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::InitSDK(Z_Param_use_default_zoom_ui);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execIsAuthResultSuccess)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_result);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::IsAuthResultSuccess(Z_Param_result);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UZoomMeetingSDKBPLibrary::execIsSDKErrorSuccess)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_result);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UZoomMeetingSDKBPLibrary::IsSDKErrorSuccess(Z_Param_result);
		P_NATIVE_END;
	}
	void UZoomMeetingSDKBPLibrary::StaticRegisterNativesUZoomMeetingSDKBPLibrary()
	{
		UClass* Class = UZoomMeetingSDKBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddNewBoToList", &UZoomMeetingSDKBPLibrary::execAddNewBoToList },
			{ "AdmitAllToMeeting", &UZoomMeetingSDKBPLibrary::execAdmitAllToMeeting },
			{ "AdmitToMeeting", &UZoomMeetingSDKBPLibrary::execAdmitToMeeting },
			{ "AllowAttendeeTalk", &UZoomMeetingSDKBPLibrary::execAllowAttendeeTalk },
			{ "AskAttendeeToStartVideo", &UZoomMeetingSDKBPLibrary::execAskAttendeeToStartVideo },
			{ "AssignNewUserToRunningBO", &UZoomMeetingSDKBPLibrary::execAssignNewUserToRunningBO },
			{ "AssignUserToBO", &UZoomMeetingSDKBPLibrary::execAssignUserToBO },
			{ "AttendeeJoinBO", &UZoomMeetingSDKBPLibrary::execAttendeeJoinBO },
			{ "AttendeeLeaveBO", &UZoomMeetingSDKBPLibrary::execAttendeeLeaveBO },
			{ "Base64Encode", &UZoomMeetingSDKBPLibrary::execBase64Encode },
			{ "BeginTurnDown", &UZoomMeetingSDKBPLibrary::execBeginTurnDown },
			{ "BeginTurnLeft", &UZoomMeetingSDKBPLibrary::execBeginTurnLeft },
			{ "BeginTurnRight", &UZoomMeetingSDKBPLibrary::execBeginTurnRight },
			{ "BeginTurnUp", &UZoomMeetingSDKBPLibrary::execBeginTurnUp },
			{ "BeginZoomIn", &UZoomMeetingSDKBPLibrary::execBeginZoomIn },
			{ "BeginZoomOut", &UZoomMeetingSDKBPLibrary::execBeginZoomOut },
			{ "BOAssistantJoinBO", &UZoomMeetingSDKBPLibrary::execBOAssistantJoinBO },
			{ "BOAssistantLeaveBO", &UZoomMeetingSDKBPLibrary::execBOAssistantLeaveBO },
			{ "BroadcastMessage", &UZoomMeetingSDKBPLibrary::execBroadcastMessage },
			{ "CanAllowDisAllowLocalRecording", &UZoomMeetingSDKBPLibrary::execCanAllowDisAllowLocalRecording },
			{ "CanAskAttendeeToStartVideo", &UZoomMeetingSDKBPLibrary::execCanAskAttendeeToStartVideo },
			{ "CanAssignOtherToSendCC", &UZoomMeetingSDKBPLibrary::execCanAssignOtherToSendCC },
			{ "CanBeAssignedToSendCC", &UZoomMeetingSDKBPLibrary::execCanBeAssignedToSendCC },
			{ "CancelEmojiFeedback", &UZoomMeetingSDKBPLibrary::execCancelEmojiFeedback },
			{ "CanControlCamera", &UZoomMeetingSDKBPLibrary::execCanControlCamera },
			{ "CanSendClosedCaption", &UZoomMeetingSDKBPLibrary::execCanSendClosedCaption },
			{ "CanSpotlight", &UZoomMeetingSDKBPLibrary::execCanSpotlight },
			{ "CanStartBO", &UZoomMeetingSDKBPLibrary::execCanStartBO },
			{ "CanStartDirectShare", &UZoomMeetingSDKBPLibrary::execCanStartDirectShare },
			{ "CanStartLiveStream", &UZoomMeetingSDKBPLibrary::execCanStartLiveStream },
			{ "CanStartLiveTranscription", &UZoomMeetingSDKBPLibrary::execCanStartLiveTranscription },
			{ "CanStartRawLiveStream", &UZoomMeetingSDKBPLibrary::execCanStartRawLiveStream },
			{ "CanStopAttendeeVideo", &UZoomMeetingSDKBPLibrary::execCanStopAttendeeVideo },
			{ "CanUnMuteByself", &UZoomMeetingSDKBPLibrary::execCanUnMuteByself },
			{ "CanUnSpotlight", &UZoomMeetingSDKBPLibrary::execCanUnSpotlight },
			{ "CleanupSDK", &UZoomMeetingSDKBPLibrary::execCleanupSDK },
			{ "ContinueTurnDown", &UZoomMeetingSDKBPLibrary::execContinueTurnDown },
			{ "ContinueTurnLeft", &UZoomMeetingSDKBPLibrary::execContinueTurnLeft },
			{ "ContinueTurnRight", &UZoomMeetingSDKBPLibrary::execContinueTurnRight },
			{ "ContinueTurnUp", &UZoomMeetingSDKBPLibrary::execContinueTurnUp },
			{ "ContinueZoomIn", &UZoomMeetingSDKBPLibrary::execContinueZoomIn },
			{ "ContinueZoomOut", &UZoomMeetingSDKBPLibrary::execContinueZoomOut },
			{ "CreateBO", &UZoomMeetingSDKBPLibrary::execCreateBO },
			{ "CreateBOTransactionBegin", &UZoomMeetingSDKBPLibrary::execCreateBOTransactionBegin },
			{ "CreateBOTransactionCommit", &UZoomMeetingSDKBPLibrary::execCreateBOTransactionCommit },
			{ "DeleteChatMessage", &UZoomMeetingSDKBPLibrary::execDeleteChatMessage },
			{ "DisableVideoSource", &UZoomMeetingSDKBPLibrary::execDisableVideoSource },
			{ "EnableAutoAdjustMic", &UZoomMeetingSDKBPLibrary::execEnableAutoAdjustMic },
			{ "EnableClaimHostFeature", &UZoomMeetingSDKBPLibrary::execEnableClaimHostFeature },
			{ "EnableForceAutoStartMyVideoWhenJoinMeeting", &UZoomMeetingSDKBPLibrary::execEnableForceAutoStartMyVideoWhenJoinMeeting },
			{ "EnableForceAutoStopMyVideoWhenJoinMeeting", &UZoomMeetingSDKBPLibrary::execEnableForceAutoStopMyVideoWhenJoinMeeting },
			{ "EnableVideoSource", &UZoomMeetingSDKBPLibrary::execEnableVideoSource },
			{ "EndMeeting", &UZoomMeetingSDKBPLibrary::execEndMeeting },
			{ "EndTurnDown", &UZoomMeetingSDKBPLibrary::execEndTurnDown },
			{ "EndTurnLeft", &UZoomMeetingSDKBPLibrary::execEndTurnLeft },
			{ "EndTurnRight", &UZoomMeetingSDKBPLibrary::execEndTurnRight },
			{ "EndTurnUp", &UZoomMeetingSDKBPLibrary::execEndTurnUp },
			{ "EndZoomIn", &UZoomMeetingSDKBPLibrary::execEndZoomIn },
			{ "EndZoomOut", &UZoomMeetingSDKBPLibrary::execEndZoomOut },
			{ "GenerateJWTAuthToken", &UZoomMeetingSDKBPLibrary::execGenerateJWTAuthToken },
			{ "GeneratePKCEAuthPair", &UZoomMeetingSDKBPLibrary::execGeneratePKCEAuthPair },
			{ "GetAllChatMessageID", &UZoomMeetingSDKBPLibrary::execGetAllChatMessageID },
			{ "GetAllQuestionList", &UZoomMeetingSDKBPLibrary::execGetAllQuestionList },
			{ "GetAnswerItemInfo", &UZoomMeetingSDKBPLibrary::execGetAnswerItemInfo },
			{ "GetAuthResult", &UZoomMeetingSDKBPLibrary::execGetAuthResult },
			{ "GetBOName", &UZoomMeetingSDKBPLibrary::execGetBOName },
			{ "GetBOUserName", &UZoomMeetingSDKBPLibrary::execGetBOUserName },
			{ "GetChatMessageInfo", &UZoomMeetingSDKBPLibrary::execGetChatMessageInfo },
			{ "GetChatStatus", &UZoomMeetingSDKBPLibrary::execGetChatStatus },
			{ "GetCurrentBOName", &UZoomMeetingSDKBPLibrary::execGetCurrentBOName },
			{ "GetInstance", &UZoomMeetingSDKBPLibrary::execGetInstance },
			{ "GetOutputRenderer", &UZoomMeetingSDKBPLibrary::execGetOutputRenderer },
			{ "GetParticipantsList", &UZoomMeetingSDKBPLibrary::execGetParticipantsList },
			{ "GetSpeakerVol", &UZoomMeetingSDKBPLibrary::execGetSpeakerVol },
			{ "GetSpotlightedUserList", &UZoomMeetingSDKBPLibrary::execGetSpotlightedUserList },
			{ "GetUserInfo", &UZoomMeetingSDKBPLibrary::execGetUserInfo },
			{ "GetWaitingRoomLst", &UZoomMeetingSDKBPLibrary::execGetWaitingRoomLst },
			{ "GetWaitingRoomUserInfoByID", &UZoomMeetingSDKBPLibrary::execGetWaitingRoomUserInfoByID },
			{ "InitAuthSDK", &UZoomMeetingSDKBPLibrary::execInitAuthSDK },
			{ "InitSDK", &UZoomMeetingSDKBPLibrary::execInitSDK },
			{ "InviteBOUserReturnToMainSession", &UZoomMeetingSDKBPLibrary::execInviteBOUserReturnToMainSession },
			{ "IsAnnotationDisable", &UZoomMeetingSDKBPLibrary::execIsAnnotationDisable },
			{ "IsAuthResultSuccess", &UZoomMeetingSDKBPLibrary::execIsAuthResultSuccess },
			{ "IsBOEnabled", &UZoomMeetingSDKBPLibrary::execIsBOEnabled },
			{ "IsBOStarted", &UZoomMeetingSDKBPLibrary::execIsBOStarted },
			{ "IsBOUserMyself", &UZoomMeetingSDKBPLibrary::execIsBOUserMyself },
			{ "IsCanReturnMainSession", &UZoomMeetingSDKBPLibrary::execIsCanReturnMainSession },
			{ "IsChatMessageCanBeDeleted", &UZoomMeetingSDKBPLibrary::execIsChatMessageCanBeDeleted },
			{ "IsEmojiReactionEnabled", &UZoomMeetingSDKBPLibrary::execIsEmojiReactionEnabled },
			{ "IsHostInThisBO", &UZoomMeetingSDKBPLibrary::execIsHostInThisBO },
			{ "IsInBOMeeting", &UZoomMeetingSDKBPLibrary::execIsInBOMeeting },
			{ "IsSDKErrorSuccess", &UZoomMeetingSDKBPLibrary::execIsSDKErrorSuccess },
			{ "IsSupportImmersive", &UZoomMeetingSDKBPLibrary::execIsSupportImmersive },
			{ "IsUserSubscribedToVideo", &UZoomMeetingSDKBPLibrary::execIsUserSubscribedToVideo },
			{ "IsValid", &UZoomMeetingSDKBPLibrary::execIsValid },
			{ "JoinBOByUserRequest", &UZoomMeetingSDKBPLibrary::execJoinBOByUserRequest },
			{ "JoinMeeting", &UZoomMeetingSDKBPLibrary::execJoinMeeting },
			{ "JoinZoomEventMeeting", &UZoomMeetingSDKBPLibrary::execJoinZoomEventMeeting },
			{ "LeaveMeeting", &UZoomMeetingSDKBPLibrary::execLeaveMeeting },
			{ "LogOut", &UZoomMeetingSDKBPLibrary::execLogOut },
			{ "LowerAllHands", &UZoomMeetingSDKBPLibrary::execLowerAllHands },
			{ "LowerHand", &UZoomMeetingSDKBPLibrary::execLowerHand },
			{ "MuteAudio", &UZoomMeetingSDKBPLibrary::execMuteAudio },
			{ "MuteVideo", &UZoomMeetingSDKBPLibrary::execMuteVideo },
			{ "PutInWaitingRoom", &UZoomMeetingSDKBPLibrary::execPutInWaitingRoom },
			{ "RemoveBO", &UZoomMeetingSDKBPLibrary::execRemoveBO },
			{ "RemoveUserFromBO", &UZoomMeetingSDKBPLibrary::execRemoveUserFromBO },
			{ "RequestLocalRecordingPrivilege", &UZoomMeetingSDKBPLibrary::execRequestLocalRecordingPrivilege },
			{ "SDKAuthJWT", &UZoomMeetingSDKBPLibrary::execSDKAuthJWT },
			{ "SendChatMessage", &UZoomMeetingSDKBPLibrary::execSendChatMessage },
			{ "SendEmojiFeedback", &UZoomMeetingSDKBPLibrary::execSendEmojiFeedback },
			{ "SendEmojiReaction", &UZoomMeetingSDKBPLibrary::execSendEmojiReaction },
			{ "SetInstance", &UZoomMeetingSDKBPLibrary::execSetInstance },
			{ "SetRawDataResolution", &UZoomMeetingSDKBPLibrary::execSetRawDataResolution },
			{ "SetSpeakerVol", &UZoomMeetingSDKBPLibrary::execSetSpeakerVol },
			{ "SpotlightVideo", &UZoomMeetingSDKBPLibrary::execSpotlightVideo },
			{ "StartBO", &UZoomMeetingSDKBPLibrary::execStartBO },
			{ "StartMeeting", &UZoomMeetingSDKBPLibrary::execStartMeeting },
			{ "StartRawRecording", &UZoomMeetingSDKBPLibrary::execStartRawRecording },
			{ "StopAttendeeVideo", &UZoomMeetingSDKBPLibrary::execStopAttendeeVideo },
			{ "StopBO", &UZoomMeetingSDKBPLibrary::execStopBO },
			{ "StopRawRecording", &UZoomMeetingSDKBPLibrary::execStopRawRecording },
			{ "SubscribeVideo", &UZoomMeetingSDKBPLibrary::execSubscribeVideo },
			{ "UnMuteAudio", &UZoomMeetingSDKBPLibrary::execUnMuteAudio },
			{ "UnmuteVideo", &UZoomMeetingSDKBPLibrary::execUnmuteVideo },
			{ "UnSpotlightAllVideos", &UZoomMeetingSDKBPLibrary::execUnSpotlightAllVideos },
			{ "UnSpotlightVideo", &UZoomMeetingSDKBPLibrary::execUnSpotlightVideo },
			{ "UnSubscribeVideo", &UZoomMeetingSDKBPLibrary::execUnSubscribeVideo },
			{ "UpdateBOName", &UZoomMeetingSDKBPLibrary::execUpdateBOName },
			{ "UrlEncode", &UZoomMeetingSDKBPLibrary::execUrlEncode },
			{ "UseDefaultSystemMic", &UZoomMeetingSDKBPLibrary::execUseDefaultSystemMic },
			{ "UseDefaultSystemSpeaker", &UZoomMeetingSDKBPLibrary::execUseDefaultSystemSpeaker },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AddNewBoToList_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventAddNewBoToList_Parms
		{
			FString strNewBOName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_strNewBOName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AddNewBoToList_Statics::NewProp_strNewBOName = { "strNewBOName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomMeetingSDKBPLibrary_eventAddNewBoToList_Parms, strNewBOName), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AddNewBoToList_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventAddNewBoToList_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AddNewBoToList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventAddNewBoToList_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AddNewBoToList_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AddNewBoToList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AddNewBoToList_Statics::NewProp_strNewBOName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AddNewBoToList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AddNewBoToList_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | BatchCreateBOHelper" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n   * IBatchCreateBOHelper\n   */// Add new BO to the list.\n//\n// Return TRUE is the add new BO to the list action was successful.\n" },
#endif
		{ "Keywords", "IBatchCreateBOHelper.AddNewBoToList" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* IBatchCreateBOHelper\n// Add new BO to the list.\n//\n// Return TRUE is the add new BO to the list action was successful." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AddNewBoToList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "AddNewBoToList", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AddNewBoToList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AddNewBoToList_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AddNewBoToList_Statics::ZoomMeetingSDKBPLibrary_eventAddNewBoToList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AddNewBoToList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AddNewBoToList_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AddNewBoToList_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AddNewBoToList_Statics::ZoomMeetingSDKBPLibrary_eventAddNewBoToList_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AddNewBoToList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AddNewBoToList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AdmitAllToMeeting_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventAdmitAllToMeeting_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AdmitAllToMeeting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventAdmitAllToMeeting_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AdmitAllToMeeting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventAdmitAllToMeeting_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AdmitAllToMeeting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AdmitAllToMeeting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AdmitAllToMeeting_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AdmitAllToMeeting_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | MeetingWaitingRoomController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Admit everyone in the waiting room to the meeting.\n//\n// Return \"SDK_SUCCESS\" if the admit all to meeting request was successful.\n" },
#endif
		{ "DisplayName", "AdmitAllToMeeting" },
		{ "Keywords", "IMeetingWaitingRoomController.AdmitAllToMeeting" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Admit everyone in the waiting room to the meeting.\n\nReturn \"SDK_SUCCESS\" if the admit all to meeting request was successful." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AdmitAllToMeeting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "AdmitAllToMeeting", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AdmitAllToMeeting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AdmitAllToMeeting_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AdmitAllToMeeting_Statics::ZoomMeetingSDKBPLibrary_eventAdmitAllToMeeting_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AdmitAllToMeeting_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AdmitAllToMeeting_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AdmitAllToMeeting_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AdmitAllToMeeting_Statics::ZoomMeetingSDKBPLibrary_eventAdmitAllToMeeting_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AdmitAllToMeeting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AdmitAllToMeeting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AdmitToMeeting_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventAdmitToMeeting_Parms
		{
			int64 user_id;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_user_id;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AdmitToMeeting_Statics::NewProp_user_id = { "user_id", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomMeetingSDKBPLibrary_eventAdmitToMeeting_Parms, user_id), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AdmitToMeeting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventAdmitToMeeting_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AdmitToMeeting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventAdmitToMeeting_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AdmitToMeeting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AdmitToMeeting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AdmitToMeeting_Statics::NewProp_user_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AdmitToMeeting_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AdmitToMeeting_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | MeetingWaitingRoomController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Admit a particular user to the meeting.\n//\n// Return \"SDK_SUCCESS\" if the admit an user request was successful.\n" },
#endif
		{ "DisplayName", "AdmitToMeeting" },
		{ "Keywords", "IMeetingWaitingRoomController.AdmitToMeeting" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Admit a particular user to the meeting.\n\nReturn \"SDK_SUCCESS\" if the admit an user request was successful." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AdmitToMeeting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "AdmitToMeeting", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AdmitToMeeting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AdmitToMeeting_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AdmitToMeeting_Statics::ZoomMeetingSDKBPLibrary_eventAdmitToMeeting_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AdmitToMeeting_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AdmitToMeeting_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AdmitToMeeting_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AdmitToMeeting_Statics::ZoomMeetingSDKBPLibrary_eventAdmitToMeeting_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AdmitToMeeting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AdmitToMeeting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AllowAttendeeTalk_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventAllowAttendeeTalk_Parms
		{
			int64 user_id;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_user_id;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AllowAttendeeTalk_Statics::NewProp_user_id = { "user_id", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomMeetingSDKBPLibrary_eventAllowAttendeeTalk_Parms, user_id), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AllowAttendeeTalk_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventAllowAttendeeTalk_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AllowAttendeeTalk_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventAllowAttendeeTalk_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AllowAttendeeTalk_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AllowAttendeeTalk_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AllowAttendeeTalk_Statics::NewProp_user_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AllowAttendeeTalk_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AllowAttendeeTalk_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | MeetingWebinarController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Allow attendee to talk.\n//\n// Return \"SDK_SUCCESS\" if the allowing attendee to talk action was\n// successful.\n" },
#endif
		{ "DisplayName", "AllowAttendeeTalk" },
		{ "Keywords", "IMeetingWebinarController.AllowAttendeeTalk" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Allow attendee to talk.\n\nReturn \"SDK_SUCCESS\" if the allowing attendee to talk action was\nsuccessful." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AllowAttendeeTalk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "AllowAttendeeTalk", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AllowAttendeeTalk_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AllowAttendeeTalk_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AllowAttendeeTalk_Statics::ZoomMeetingSDKBPLibrary_eventAllowAttendeeTalk_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AllowAttendeeTalk_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AllowAttendeeTalk_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AllowAttendeeTalk_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AllowAttendeeTalk_Statics::ZoomMeetingSDKBPLibrary_eventAllowAttendeeTalk_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AllowAttendeeTalk()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AllowAttendeeTalk_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AskAttendeeToStartVideo_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventAskAttendeeToStartVideo_Parms
		{
			int64 user_id;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_user_id;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AskAttendeeToStartVideo_Statics::NewProp_user_id = { "user_id", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomMeetingSDKBPLibrary_eventAskAttendeeToStartVideo_Parms, user_id), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AskAttendeeToStartVideo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventAskAttendeeToStartVideo_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AskAttendeeToStartVideo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventAskAttendeeToStartVideo_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AskAttendeeToStartVideo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AskAttendeeToStartVideo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AskAttendeeToStartVideo_Statics::NewProp_user_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AskAttendeeToStartVideo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AskAttendeeToStartVideo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | MeetingVideoController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Ask attendee to start video.\n//\n// Returns \"SDK_SUCCESS\" if demand to turn on the video of the assigned user\n// was successful.\n" },
#endif
		{ "DisplayName", "Ask attendee to start video" },
		{ "Keywords", "Ask attendee to start video" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ask attendee to start video.\n\nReturns \"SDK_SUCCESS\" if demand to turn on the video of the assigned user\nwas successful." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AskAttendeeToStartVideo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "AskAttendeeToStartVideo", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AskAttendeeToStartVideo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AskAttendeeToStartVideo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AskAttendeeToStartVideo_Statics::ZoomMeetingSDKBPLibrary_eventAskAttendeeToStartVideo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AskAttendeeToStartVideo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AskAttendeeToStartVideo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AskAttendeeToStartVideo_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AskAttendeeToStartVideo_Statics::ZoomMeetingSDKBPLibrary_eventAskAttendeeToStartVideo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AskAttendeeToStartVideo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AskAttendeeToStartVideo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AssignNewUserToRunningBO_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventAssignNewUserToRunningBO_Parms
		{
			FString userID;
			FString BOID;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_userID;
		static const UECodeGen_Private::FStrPropertyParams NewProp_BOID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AssignNewUserToRunningBO_Statics::NewProp_userID = { "userID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomMeetingSDKBPLibrary_eventAssignNewUserToRunningBO_Parms, userID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AssignNewUserToRunningBO_Statics::NewProp_BOID = { "BOID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomMeetingSDKBPLibrary_eventAssignNewUserToRunningBO_Parms, BOID), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AssignNewUserToRunningBO_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventAssignNewUserToRunningBO_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AssignNewUserToRunningBO_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventAssignNewUserToRunningBO_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AssignNewUserToRunningBO_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AssignNewUserToRunningBO_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AssignNewUserToRunningBO_Statics::NewProp_userID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AssignNewUserToRunningBO_Statics::NewProp_BOID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AssignNewUserToRunningBO_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AssignNewUserToRunningBO_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | BOAdmin" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Assign a new user to a running BO.\n//\n// Return \"SDKERR_SUCCESS\" if the assigning new user to running BO was\n// successful.\n" },
#endif
		{ "Keywords", "IBOAdmin.AssignNewUserToRunningBO" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Assign a new user to a running BO.\n\nReturn \"SDKERR_SUCCESS\" if the assigning new user to running BO was\nsuccessful." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AssignNewUserToRunningBO_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "AssignNewUserToRunningBO", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AssignNewUserToRunningBO_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AssignNewUserToRunningBO_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AssignNewUserToRunningBO_Statics::ZoomMeetingSDKBPLibrary_eventAssignNewUserToRunningBO_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AssignNewUserToRunningBO_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AssignNewUserToRunningBO_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AssignNewUserToRunningBO_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AssignNewUserToRunningBO_Statics::ZoomMeetingSDKBPLibrary_eventAssignNewUserToRunningBO_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AssignNewUserToRunningBO()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AssignNewUserToRunningBO_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AssignUserToBO_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventAssignUserToBO_Parms
		{
			FString strUserID;
			FString strBOID;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_strUserID;
		static const UECodeGen_Private::FStrPropertyParams NewProp_strBOID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AssignUserToBO_Statics::NewProp_strUserID = { "strUserID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomMeetingSDKBPLibrary_eventAssignUserToBO_Parms, strUserID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AssignUserToBO_Statics::NewProp_strBOID = { "strBOID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomMeetingSDKBPLibrary_eventAssignUserToBO_Parms, strBOID), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AssignUserToBO_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventAssignUserToBO_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AssignUserToBO_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventAssignUserToBO_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AssignUserToBO_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AssignUserToBO_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AssignUserToBO_Statics::NewProp_strUserID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AssignUserToBO_Statics::NewProp_strBOID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AssignUserToBO_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AssignUserToBO_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | BOCreator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Assign a user to BO.\n//\n// Return TRUE if the action was successful.\n" },
#endif
		{ "Keywords", "IBOCreator.AssignUserToBO" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Assign a user to BO.\n\nReturn TRUE if the action was successful." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AssignUserToBO_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "AssignUserToBO", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AssignUserToBO_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AssignUserToBO_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AssignUserToBO_Statics::ZoomMeetingSDKBPLibrary_eventAssignUserToBO_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AssignUserToBO_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AssignUserToBO_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AssignUserToBO_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AssignUserToBO_Statics::ZoomMeetingSDKBPLibrary_eventAssignUserToBO_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AssignUserToBO()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AssignUserToBO_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AttendeeJoinBO_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventAttendeeJoinBO_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AttendeeJoinBO_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventAttendeeJoinBO_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AttendeeJoinBO_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventAttendeeJoinBO_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AttendeeJoinBO_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AttendeeJoinBO_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AttendeeJoinBO_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AttendeeJoinBO_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | BOAttendee" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Join the assigned BO.\n//\n// Return TRUE if the join BO request was successful.\n" },
#endif
		{ "Keywords", "IBOAttendee.AttendeeJoinBO" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Join the assigned BO.\n\nReturn TRUE if the join BO request was successful." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AttendeeJoinBO_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "AttendeeJoinBO", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AttendeeJoinBO_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AttendeeJoinBO_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AttendeeJoinBO_Statics::ZoomMeetingSDKBPLibrary_eventAttendeeJoinBO_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AttendeeJoinBO_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AttendeeJoinBO_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AttendeeJoinBO_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AttendeeJoinBO_Statics::ZoomMeetingSDKBPLibrary_eventAttendeeJoinBO_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AttendeeJoinBO()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AttendeeJoinBO_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AttendeeLeaveBO_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventAttendeeLeaveBO_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AttendeeLeaveBO_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventAttendeeLeaveBO_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AttendeeLeaveBO_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventAttendeeLeaveBO_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AttendeeLeaveBO_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AttendeeLeaveBO_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AttendeeLeaveBO_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AttendeeLeaveBO_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | BOAttendee" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Leave the assigned BO.\n//\n// Return TRUE if leaving the current BO was successful.\n" },
#endif
		{ "Keywords", "IBOAttendee.AttendeeLeaveBO" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Leave the assigned BO.\n\nReturn TRUE if leaving the current BO was successful." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AttendeeLeaveBO_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "AttendeeLeaveBO", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AttendeeLeaveBO_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AttendeeLeaveBO_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AttendeeLeaveBO_Statics::ZoomMeetingSDKBPLibrary_eventAttendeeLeaveBO_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AttendeeLeaveBO_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AttendeeLeaveBO_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AttendeeLeaveBO_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AttendeeLeaveBO_Statics::ZoomMeetingSDKBPLibrary_eventAttendeeLeaveBO_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AttendeeLeaveBO()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AttendeeLeaveBO_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_Base64Encode_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventBase64Encode_Parms
		{
			FString str;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_str;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_Base64Encode_Statics::NewProp_str = { "str", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomMeetingSDKBPLibrary_eventBase64Encode_Parms, str), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_Base64Encode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomMeetingSDKBPLibrary_eventBase64Encode_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_Base64Encode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_Base64Encode_Statics::NewProp_str,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_Base64Encode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_Base64Encode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Utils | Base64 Encode" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Base64 Encodes a string.\n//\n// Return Base64 encoded FString.\n" },
#endif
		{ "DisplayName", "Base64Encode" },
		{ "Keywords", "Base64 Encode" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base64 Encodes a string.\n\nReturn Base64 encoded FString." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_Base64Encode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "Base64Encode", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_Base64Encode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_Base64Encode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_Base64Encode_Statics::ZoomMeetingSDKBPLibrary_eventBase64Encode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_Base64Encode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_Base64Encode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_Base64Encode_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_Base64Encode_Statics::ZoomMeetingSDKBPLibrary_eventBase64Encode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_Base64Encode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_Base64Encode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginTurnDown_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventBeginTurnDown_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginTurnDown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventBeginTurnDown_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginTurnDown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventBeginTurnDown_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginTurnDown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginTurnDown_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginTurnDown_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginTurnDown_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | CameraController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Begin to turn down.\n//\n// Return TRUE if the action is successful.\n" },
#endif
		{ "Keywords", "ICameraController.BeginTurnDown" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Begin to turn down.\n\nReturn TRUE if the action is successful." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginTurnDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "BeginTurnDown", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginTurnDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginTurnDown_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginTurnDown_Statics::ZoomMeetingSDKBPLibrary_eventBeginTurnDown_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginTurnDown_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginTurnDown_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginTurnDown_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginTurnDown_Statics::ZoomMeetingSDKBPLibrary_eventBeginTurnDown_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginTurnDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginTurnDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginTurnLeft_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventBeginTurnLeft_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginTurnLeft_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventBeginTurnLeft_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginTurnLeft_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventBeginTurnLeft_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginTurnLeft_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginTurnLeft_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginTurnLeft_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginTurnLeft_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | CameraController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Begin to turn left.\n//\n// Return TRUE if the action is successful.\n" },
#endif
		{ "Keywords", "ICameraController.BeginTurnLeft" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Begin to turn left.\n\nReturn TRUE if the action is successful." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginTurnLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "BeginTurnLeft", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginTurnLeft_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginTurnLeft_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginTurnLeft_Statics::ZoomMeetingSDKBPLibrary_eventBeginTurnLeft_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginTurnLeft_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginTurnLeft_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginTurnLeft_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginTurnLeft_Statics::ZoomMeetingSDKBPLibrary_eventBeginTurnLeft_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginTurnLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginTurnLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginTurnRight_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventBeginTurnRight_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginTurnRight_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventBeginTurnRight_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginTurnRight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventBeginTurnRight_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginTurnRight_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginTurnRight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginTurnRight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginTurnRight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | CameraController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Begin to turn right.\n//\n// Return TRUE if the action is successful.\n" },
#endif
		{ "Keywords", "ICameraController.BeginTurnRight" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Begin to turn right.\n\nReturn TRUE if the action is successful." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginTurnRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "BeginTurnRight", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginTurnRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginTurnRight_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginTurnRight_Statics::ZoomMeetingSDKBPLibrary_eventBeginTurnRight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginTurnRight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginTurnRight_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginTurnRight_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginTurnRight_Statics::ZoomMeetingSDKBPLibrary_eventBeginTurnRight_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginTurnRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginTurnRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginTurnUp_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventBeginTurnUp_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginTurnUp_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventBeginTurnUp_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginTurnUp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventBeginTurnUp_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginTurnUp_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginTurnUp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginTurnUp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginTurnUp_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | CameraController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Begin to turn up.\n//\n// Return TRUE if the action is successful.\n" },
#endif
		{ "Keywords", "ICameraController.BeginTurnUp" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Begin to turn up.\n\nReturn TRUE if the action is successful." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginTurnUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "BeginTurnUp", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginTurnUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginTurnUp_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginTurnUp_Statics::ZoomMeetingSDKBPLibrary_eventBeginTurnUp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginTurnUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginTurnUp_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginTurnUp_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginTurnUp_Statics::ZoomMeetingSDKBPLibrary_eventBeginTurnUp_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginTurnUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginTurnUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginZoomIn_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventBeginZoomIn_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginZoomIn_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventBeginZoomIn_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginZoomIn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventBeginZoomIn_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginZoomIn_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginZoomIn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginZoomIn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginZoomIn_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | CameraController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Begin to zoom in.\n//\n// Return TRUE if the action is successful.\n" },
#endif
		{ "Keywords", "ICameraController.BeginZoomIn" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Begin to zoom in.\n\nReturn TRUE if the action is successful." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginZoomIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "BeginZoomIn", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginZoomIn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginZoomIn_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginZoomIn_Statics::ZoomMeetingSDKBPLibrary_eventBeginZoomIn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginZoomIn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginZoomIn_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginZoomIn_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginZoomIn_Statics::ZoomMeetingSDKBPLibrary_eventBeginZoomIn_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginZoomIn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginZoomIn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginZoomOut_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventBeginZoomOut_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginZoomOut_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventBeginZoomOut_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginZoomOut_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventBeginZoomOut_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginZoomOut_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginZoomOut_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginZoomOut_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginZoomOut_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | CameraController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Begin to zoom out.\n//\n// Return TRUE if the action is successful.\n" },
#endif
		{ "Keywords", "ICameraController.BeginZoomOut" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Begin to zoom out.\n\nReturn TRUE if the action is successful." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginZoomOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "BeginZoomOut", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginZoomOut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginZoomOut_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginZoomOut_Statics::ZoomMeetingSDKBPLibrary_eventBeginZoomOut_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginZoomOut_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginZoomOut_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginZoomOut_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginZoomOut_Statics::ZoomMeetingSDKBPLibrary_eventBeginZoomOut_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginZoomOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginZoomOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BOAssistantJoinBO_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventBOAssistantJoinBO_Parms
		{
			FString strBOID;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_strBOID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BOAssistantJoinBO_Statics::NewProp_strBOID = { "strBOID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomMeetingSDKBPLibrary_eventBOAssistantJoinBO_Parms, strBOID), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BOAssistantJoinBO_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventBOAssistantJoinBO_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BOAssistantJoinBO_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventBOAssistantJoinBO_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BOAssistantJoinBO_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BOAssistantJoinBO_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BOAssistantJoinBO_Statics::NewProp_strBOID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BOAssistantJoinBO_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BOAssistantJoinBO_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | BOAssistant" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n   * IBOAssistant\n   */// Join a BO as an assistant.\n//\n// Return TRUE if joining a BO was successful.\n" },
#endif
		{ "Keywords", "IBOAssistant.JoinBO" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* IBOAssistant\n// Join a BO as an assistant.\n//\n// Return TRUE if joining a BO was successful." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BOAssistantJoinBO_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "BOAssistantJoinBO", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BOAssistantJoinBO_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BOAssistantJoinBO_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BOAssistantJoinBO_Statics::ZoomMeetingSDKBPLibrary_eventBOAssistantJoinBO_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BOAssistantJoinBO_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BOAssistantJoinBO_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BOAssistantJoinBO_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BOAssistantJoinBO_Statics::ZoomMeetingSDKBPLibrary_eventBOAssistantJoinBO_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BOAssistantJoinBO()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BOAssistantJoinBO_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BOAssistantLeaveBO_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventBOAssistantLeaveBO_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BOAssistantLeaveBO_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventBOAssistantLeaveBO_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BOAssistantLeaveBO_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventBOAssistantLeaveBO_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BOAssistantLeaveBO_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BOAssistantLeaveBO_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BOAssistantLeaveBO_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BOAssistantLeaveBO_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | BOAssistant" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Leave the current BO.\n//\n// Return TRUE if leaving the current BO was successful.\n" },
#endif
		{ "Keywords", "IBOAssistant.LeaveBO" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Leave the current BO.\n\nReturn TRUE if leaving the current BO was successful." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BOAssistantLeaveBO_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "BOAssistantLeaveBO", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BOAssistantLeaveBO_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BOAssistantLeaveBO_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BOAssistantLeaveBO_Statics::ZoomMeetingSDKBPLibrary_eventBOAssistantLeaveBO_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BOAssistantLeaveBO_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BOAssistantLeaveBO_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BOAssistantLeaveBO_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BOAssistantLeaveBO_Statics::ZoomMeetingSDKBPLibrary_eventBOAssistantLeaveBO_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BOAssistantLeaveBO()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BOAssistantLeaveBO_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BroadcastMessage_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventBroadcastMessage_Parms
		{
			FString message;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_message;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BroadcastMessage_Statics::NewProp_message = { "message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomMeetingSDKBPLibrary_eventBroadcastMessage_Parms, message), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BroadcastMessage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventBroadcastMessage_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BroadcastMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventBroadcastMessage_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BroadcastMessage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BroadcastMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BroadcastMessage_Statics::NewProp_message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BroadcastMessage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BroadcastMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | BOAdmin" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Broadcast a message.\n//\n// Return \"SDKERR_SUCCESS\" if broadcasting a message was successful.\n" },
#endif
		{ "Keywords", "IBOAdmin.BroadcastMessage" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Broadcast a message.\n\nReturn \"SDKERR_SUCCESS\" if broadcasting a message was successful." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BroadcastMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "BroadcastMessage", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BroadcastMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BroadcastMessage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BroadcastMessage_Statics::ZoomMeetingSDKBPLibrary_eventBroadcastMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BroadcastMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BroadcastMessage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BroadcastMessage_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BroadcastMessage_Statics::ZoomMeetingSDKBPLibrary_eventBroadcastMessage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BroadcastMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BroadcastMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanAllowDisAllowLocalRecording_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventCanAllowDisAllowLocalRecording_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanAllowDisAllowLocalRecording_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventCanAllowDisAllowLocalRecording_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanAllowDisAllowLocalRecording_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventCanAllowDisAllowLocalRecording_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanAllowDisAllowLocalRecording_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanAllowDisAllowLocalRecording_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanAllowDisAllowLocalRecording_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanAllowDisAllowLocalRecording_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | MeetingRecordingController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// IMeetingRecordingController\n// Checks if local recording is allowed.\n//\n// Return true if local recording is allowed.\n" },
#endif
		{ "DisplayName", "CanAllowDisAllowLocalRecording" },
		{ "Keywords", "Allow DisAllow Local Recording" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "IMeetingRecordingController\nChecks if local recording is allowed.\n\nReturn true if local recording is allowed." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanAllowDisAllowLocalRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "CanAllowDisAllowLocalRecording", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanAllowDisAllowLocalRecording_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanAllowDisAllowLocalRecording_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanAllowDisAllowLocalRecording_Statics::ZoomMeetingSDKBPLibrary_eventCanAllowDisAllowLocalRecording_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanAllowDisAllowLocalRecording_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanAllowDisAllowLocalRecording_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanAllowDisAllowLocalRecording_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanAllowDisAllowLocalRecording_Statics::ZoomMeetingSDKBPLibrary_eventCanAllowDisAllowLocalRecording_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanAllowDisAllowLocalRecording()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanAllowDisAllowLocalRecording_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanAskAttendeeToStartVideo_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventCanAskAttendeeToStartVideo_Parms
		{
			int64 user_id;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_user_id;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanAskAttendeeToStartVideo_Statics::NewProp_user_id = { "user_id", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomMeetingSDKBPLibrary_eventCanAskAttendeeToStartVideo_Parms, user_id), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanAskAttendeeToStartVideo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventCanAskAttendeeToStartVideo_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanAskAttendeeToStartVideo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventCanAskAttendeeToStartVideo_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanAskAttendeeToStartVideo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanAskAttendeeToStartVideo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanAskAttendeeToStartVideo_Statics::NewProp_user_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanAskAttendeeToStartVideo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanAskAttendeeToStartVideo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | MeetingVideoController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Can ask attendee to start video.\n//\n// Returns \"SDK_SUCCESS\" if query to demand specified user to turn on the\n// video was successful.\n" },
#endif
		{ "DisplayName", "Can ask attendee to start video" },
		{ "Keywords", "Can ask attendee to start video" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Can ask attendee to start video.\n\nReturns \"SDK_SUCCESS\" if query to demand specified user to turn on the\nvideo was successful." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanAskAttendeeToStartVideo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "CanAskAttendeeToStartVideo", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanAskAttendeeToStartVideo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanAskAttendeeToStartVideo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanAskAttendeeToStartVideo_Statics::ZoomMeetingSDKBPLibrary_eventCanAskAttendeeToStartVideo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanAskAttendeeToStartVideo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanAskAttendeeToStartVideo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanAskAttendeeToStartVideo_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanAskAttendeeToStartVideo_Statics::ZoomMeetingSDKBPLibrary_eventCanAskAttendeeToStartVideo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanAskAttendeeToStartVideo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanAskAttendeeToStartVideo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanAssignOtherToSendCC_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventCanAssignOtherToSendCC_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanAssignOtherToSendCC_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventCanAssignOtherToSendCC_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanAssignOtherToSendCC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventCanAssignOtherToSendCC_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanAssignOtherToSendCC_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanAssignOtherToSendCC_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanAssignOtherToSendCC_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanAssignOtherToSendCC_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | ClosedCaptionController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n   * IClosedCaptionController\n   */// Check if it allowed to assign other to send closed caption.\n//\n// Return TRUE if it is allowed to assign other to send CC.\n" },
#endif
		{ "Keywords", "IClosedCaptionController.CanAssignOtherToSendCC" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* IClosedCaptionController\n// Check if it allowed to assign other to send closed caption.\n//\n// Return TRUE if it is allowed to assign other to send CC." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanAssignOtherToSendCC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "CanAssignOtherToSendCC", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanAssignOtherToSendCC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanAssignOtherToSendCC_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanAssignOtherToSendCC_Statics::ZoomMeetingSDKBPLibrary_eventCanAssignOtherToSendCC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanAssignOtherToSendCC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanAssignOtherToSendCC_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanAssignOtherToSendCC_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanAssignOtherToSendCC_Statics::ZoomMeetingSDKBPLibrary_eventCanAssignOtherToSendCC_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanAssignOtherToSendCC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanAssignOtherToSendCC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanBeAssignedToSendCC_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventCanBeAssignedToSendCC_Parms
		{
			int32 userID;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_userID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanBeAssignedToSendCC_Statics::NewProp_userID = { "userID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomMeetingSDKBPLibrary_eventCanBeAssignedToSendCC_Parms, userID), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanBeAssignedToSendCC_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventCanBeAssignedToSendCC_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanBeAssignedToSendCC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventCanBeAssignedToSendCC_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanBeAssignedToSendCC_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanBeAssignedToSendCC_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanBeAssignedToSendCC_Statics::NewProp_userID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanBeAssignedToSendCC_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanBeAssignedToSendCC_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | ClosedCaptionController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Check if an user can be assigned to send cloused caption.\n//\n// Return TRUE if the user can be assigned to send CC.\n" },
#endif
		{ "Keywords", "IClosedCaptionController.CanBeAssignedToSendCC" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check if an user can be assigned to send cloused caption.\n\nReturn TRUE if the user can be assigned to send CC." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanBeAssignedToSendCC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "CanBeAssignedToSendCC", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanBeAssignedToSendCC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanBeAssignedToSendCC_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanBeAssignedToSendCC_Statics::ZoomMeetingSDKBPLibrary_eventCanBeAssignedToSendCC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanBeAssignedToSendCC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanBeAssignedToSendCC_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanBeAssignedToSendCC_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanBeAssignedToSendCC_Statics::ZoomMeetingSDKBPLibrary_eventCanBeAssignedToSendCC_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanBeAssignedToSendCC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanBeAssignedToSendCC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CancelEmojiFeedback_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventCancelEmojiFeedback_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CancelEmojiFeedback_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventCancelEmojiFeedback_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CancelEmojiFeedback_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventCancelEmojiFeedback_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CancelEmojiFeedback_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CancelEmojiFeedback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CancelEmojiFeedback_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CancelEmojiFeedback_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | MeetingEmojiReactionController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Cancel emoji feedback.\n//\n// Return TRUE if sending an emoji feedback was canceled.\n" },
#endif
		{ "DisplayName", "Cancel emoji feedback" },
		{ "Keywords", "IMeetingEmojiReactionController.CancelEmojiFeedback" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cancel emoji feedback.\n\nReturn TRUE if sending an emoji feedback was canceled." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CancelEmojiFeedback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "CancelEmojiFeedback", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CancelEmojiFeedback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CancelEmojiFeedback_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CancelEmojiFeedback_Statics::ZoomMeetingSDKBPLibrary_eventCancelEmojiFeedback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CancelEmojiFeedback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CancelEmojiFeedback_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CancelEmojiFeedback_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CancelEmojiFeedback_Statics::ZoomMeetingSDKBPLibrary_eventCancelEmojiFeedback_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CancelEmojiFeedback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CancelEmojiFeedback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanControlCamera_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventCanControlCamera_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanControlCamera_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventCanControlCamera_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanControlCamera_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventCanControlCamera_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanControlCamera_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanControlCamera_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanControlCamera_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanControlCamera_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | CameraController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n   * ICameraController\n   */// Check whether can control camera.\n//\n// Return TRUE if the camera can be controlled, otherwise not.\n" },
#endif
		{ "Keywords", "ICameraController.CanControlCamera" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* ICameraController\n// Check whether can control camera.\n//\n// Return TRUE if the camera can be controlled, otherwise not." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanControlCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "CanControlCamera", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanControlCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanControlCamera_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanControlCamera_Statics::ZoomMeetingSDKBPLibrary_eventCanControlCamera_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanControlCamera_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanControlCamera_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanControlCamera_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanControlCamera_Statics::ZoomMeetingSDKBPLibrary_eventCanControlCamera_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanControlCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanControlCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanSendClosedCaption_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventCanSendClosedCaption_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanSendClosedCaption_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventCanSendClosedCaption_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanSendClosedCaption_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventCanSendClosedCaption_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanSendClosedCaption_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanSendClosedCaption_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanSendClosedCaption_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanSendClosedCaption_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | ClosedCaptionController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Check if the current user can send closed caption.\n//\n// Return TRUE if the current user can send CC.\n" },
#endif
		{ "Keywords", "IClosedCaptionController.CanSendClosedCaption" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check if the current user can send closed caption.\n\nReturn TRUE if the current user can send CC." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanSendClosedCaption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "CanSendClosedCaption", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanSendClosedCaption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanSendClosedCaption_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanSendClosedCaption_Statics::ZoomMeetingSDKBPLibrary_eventCanSendClosedCaption_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanSendClosedCaption_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanSendClosedCaption_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanSendClosedCaption_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanSendClosedCaption_Statics::ZoomMeetingSDKBPLibrary_eventCanSendClosedCaption_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanSendClosedCaption()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanSendClosedCaption_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanSpotlight_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventCanSpotlight_Parms
		{
			int64 user_id;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_user_id;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanSpotlight_Statics::NewProp_user_id = { "user_id", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomMeetingSDKBPLibrary_eventCanSpotlight_Parms, user_id), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanSpotlight_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventCanSpotlight_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanSpotlight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventCanSpotlight_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanSpotlight_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanSpotlight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanSpotlight_Statics::NewProp_user_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanSpotlight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanSpotlight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | MeetingVideoController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Can spotlight.\n//\n// Returns \"SDK_SUCCESS\" if able to spotlight the video of the specified user\n// in the meeting was successful.\n" },
#endif
		{ "DisplayName", "Can spotlight" },
		{ "Keywords", "Can spotlight" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Can spotlight.\n\nReturns \"SDK_SUCCESS\" if able to spotlight the video of the specified user\nin the meeting was successful." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanSpotlight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "CanSpotlight", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanSpotlight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanSpotlight_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanSpotlight_Statics::ZoomMeetingSDKBPLibrary_eventCanSpotlight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanSpotlight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanSpotlight_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanSpotlight_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanSpotlight_Statics::ZoomMeetingSDKBPLibrary_eventCanSpotlight_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanSpotlight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanSpotlight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStartBO_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventCanStartBO_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStartBO_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventCanStartBO_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStartBO_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventCanStartBO_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStartBO_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStartBO_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStartBO_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStartBO_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | BOAdmin" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n   * IBOAdmin\n   */// Check whether the user can start a BO.\n//\n// Return TRUE if the user can start a BO.\n" },
#endif
		{ "Keywords", "IBOAdmin.CanStartBO" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* IBOAdmin\n// Check whether the user can start a BO.\n//\n// Return TRUE if the user can start a BO." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStartBO_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "CanStartBO", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStartBO_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStartBO_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStartBO_Statics::ZoomMeetingSDKBPLibrary_eventCanStartBO_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStartBO_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStartBO_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStartBO_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStartBO_Statics::ZoomMeetingSDKBPLibrary_eventCanStartBO_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStartBO()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStartBO_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStartDirectShare_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventCanStartDirectShare_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStartDirectShare_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventCanStartDirectShare_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStartDirectShare_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventCanStartDirectShare_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStartDirectShare_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStartDirectShare_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStartDirectShare_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStartDirectShare_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | MeetingDirectShare" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n   * IDirectShareSerivceHelper\n   */" },
#endif
		{ "Keywords", "IDirectShareServiceHelper.CanStartDirectShare" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* IDirectShareSerivceHelper" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStartDirectShare_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "CanStartDirectShare", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStartDirectShare_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStartDirectShare_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStartDirectShare_Statics::ZoomMeetingSDKBPLibrary_eventCanStartDirectShare_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStartDirectShare_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStartDirectShare_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStartDirectShare_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStartDirectShare_Statics::ZoomMeetingSDKBPLibrary_eventCanStartDirectShare_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStartDirectShare()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStartDirectShare_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStartLiveStream_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventCanStartLiveStream_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStartLiveStream_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventCanStartLiveStream_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStartLiveStream_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventCanStartLiveStream_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStartLiveStream_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStartLiveStream_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStartLiveStream_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStartLiveStream_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | MeetingLiveStreamController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n   * IMeetingLiveStreamController\n   */// Can start live Stream.\n//\n// Returns \"SDK_SUCCESS\" if live streaming is enabled.\n" },
#endif
		{ "DisplayName", "Can start live stream" },
		{ "Keywords", "IMeetingLiveStreamController.CanStartLiveStream" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* IMeetingLiveStreamController\n// Can start live Stream.\n//\n// Returns \"SDK_SUCCESS\" if live streaming is enabled." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStartLiveStream_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "CanStartLiveStream", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStartLiveStream_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStartLiveStream_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStartLiveStream_Statics::ZoomMeetingSDKBPLibrary_eventCanStartLiveStream_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStartLiveStream_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStartLiveStream_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStartLiveStream_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStartLiveStream_Statics::ZoomMeetingSDKBPLibrary_eventCanStartLiveStream_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStartLiveStream()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStartLiveStream_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStartLiveTranscription_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventCanStartLiveTranscription_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStartLiveTranscription_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventCanStartLiveTranscription_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStartLiveTranscription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventCanStartLiveTranscription_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStartLiveTranscription_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStartLiveTranscription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStartLiveTranscription_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStartLiveTranscription_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | ClosedCaptionController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Check if the current user can start live transcription.\n//\n// Return TRUE if the user can start live transcription.\n" },
#endif
		{ "Keywords", "IClosedCaptionController.CanStartLiveTranscription" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check if the current user can start live transcription.\n\nReturn TRUE if the user can start live transcription." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStartLiveTranscription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "CanStartLiveTranscription", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStartLiveTranscription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStartLiveTranscription_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStartLiveTranscription_Statics::ZoomMeetingSDKBPLibrary_eventCanStartLiveTranscription_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStartLiveTranscription_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStartLiveTranscription_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStartLiveTranscription_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStartLiveTranscription_Statics::ZoomMeetingSDKBPLibrary_eventCanStartLiveTranscription_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStartLiveTranscription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStartLiveTranscription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStartRawLiveStream_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventCanStartRawLiveStream_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStartRawLiveStream_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventCanStartRawLiveStream_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStartRawLiveStream_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventCanStartRawLiveStream_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStartRawLiveStream_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStartRawLiveStream_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStartRawLiveStream_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStartRawLiveStream_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | MeetingLiveStreamController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Can start raw live Stream.\n//\n// Returns \"SDK_SUCCESS\" if raw live streaming is enabled.\n" },
#endif
		{ "DisplayName", "Can start raw live stream" },
		{ "Keywords", "IMeetingLiveStreamController.CanStartRawLiveStream" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Can start raw live Stream.\n\nReturns \"SDK_SUCCESS\" if raw live streaming is enabled." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStartRawLiveStream_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "CanStartRawLiveStream", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStartRawLiveStream_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStartRawLiveStream_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStartRawLiveStream_Statics::ZoomMeetingSDKBPLibrary_eventCanStartRawLiveStream_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStartRawLiveStream_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStartRawLiveStream_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStartRawLiveStream_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStartRawLiveStream_Statics::ZoomMeetingSDKBPLibrary_eventCanStartRawLiveStream_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStartRawLiveStream()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStartRawLiveStream_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStopAttendeeVideo_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventCanStopAttendeeVideo_Parms
		{
			int64 user_id;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_user_id;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStopAttendeeVideo_Statics::NewProp_user_id = { "user_id", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomMeetingSDKBPLibrary_eventCanStopAttendeeVideo_Parms, user_id), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStopAttendeeVideo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventCanStopAttendeeVideo_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStopAttendeeVideo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventCanStopAttendeeVideo_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStopAttendeeVideo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStopAttendeeVideo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStopAttendeeVideo_Statics::NewProp_user_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStopAttendeeVideo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStopAttendeeVideo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | MeetingVideoController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Can stop attendee video.\n//\n// Returns \"SDK_SUCCESS\" if query to demand specified user to turn off the\n// video was successful.\n" },
#endif
		{ "DisplayName", "Can stop attendee video" },
		{ "Keywords", "Can stop attendee video" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Can stop attendee video.\n\nReturns \"SDK_SUCCESS\" if query to demand specified user to turn off the\nvideo was successful." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStopAttendeeVideo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "CanStopAttendeeVideo", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStopAttendeeVideo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStopAttendeeVideo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStopAttendeeVideo_Statics::ZoomMeetingSDKBPLibrary_eventCanStopAttendeeVideo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStopAttendeeVideo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStopAttendeeVideo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStopAttendeeVideo_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStopAttendeeVideo_Statics::ZoomMeetingSDKBPLibrary_eventCanStopAttendeeVideo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStopAttendeeVideo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStopAttendeeVideo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanUnMuteByself_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventCanUnMuteByself_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanUnMuteByself_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventCanUnMuteByself_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanUnMuteByself_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventCanUnMuteByself_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanUnMuteByself_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanUnMuteByself_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanUnMuteByself_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanUnMuteByself_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | MeetingAudioController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Check if the current user can unmute themselves.\n//\n// Return TRUE if the current user can unmute by themselves.\n" },
#endif
		{ "Keywords", "IMeetingAudioController.CanUnmuteMyself" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check if the current user can unmute themselves.\n\nReturn TRUE if the current user can unmute by themselves." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanUnMuteByself_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "CanUnMuteByself", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanUnMuteByself_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanUnMuteByself_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanUnMuteByself_Statics::ZoomMeetingSDKBPLibrary_eventCanUnMuteByself_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanUnMuteByself_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanUnMuteByself_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanUnMuteByself_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanUnMuteByself_Statics::ZoomMeetingSDKBPLibrary_eventCanUnMuteByself_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanUnMuteByself()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanUnMuteByself_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanUnSpotlight_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventCanUnSpotlight_Parms
		{
			int64 user_id;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_user_id;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanUnSpotlight_Statics::NewProp_user_id = { "user_id", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomMeetingSDKBPLibrary_eventCanUnSpotlight_Parms, user_id), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanUnSpotlight_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventCanUnSpotlight_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanUnSpotlight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventCanUnSpotlight_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanUnSpotlight_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanUnSpotlight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanUnSpotlight_Statics::NewProp_user_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanUnSpotlight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanUnSpotlight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | MeetingVideoController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Can unspotlight.\n//\n// Returns \"SDK_SUCCESS\" if able to unspotlight the video of the specified\n// user in the meeting was successful.\n" },
#endif
		{ "DisplayName", "Can unspotlight" },
		{ "Keywords", "Can unspotlight" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Can unspotlight.\n\nReturns \"SDK_SUCCESS\" if able to unspotlight the video of the specified\nuser in the meeting was successful." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanUnSpotlight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "CanUnSpotlight", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanUnSpotlight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanUnSpotlight_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanUnSpotlight_Statics::ZoomMeetingSDKBPLibrary_eventCanUnSpotlight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanUnSpotlight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanUnSpotlight_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanUnSpotlight_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanUnSpotlight_Statics::ZoomMeetingSDKBPLibrary_eventCanUnSpotlight_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanUnSpotlight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanUnSpotlight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CleanupSDK_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventCleanupSDK_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CleanupSDK_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventCleanupSDK_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CleanupSDK_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventCleanupSDK_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CleanupSDK_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CleanupSDK_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CleanupSDK_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CleanupSDK_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | InitAuthController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Cleans up Zoom SDK.\n//\n// Returns \"SDKERR_SUCCESS\" if clean up succeeds.\n" },
#endif
		{ "DisplayName", "Execute SDK Cleanup function" },
		{ "Keywords", "ZoomMeetingSDK CleanUPSDK" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cleans up Zoom SDK.\n\nReturns \"SDKERR_SUCCESS\" if clean up succeeds." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CleanupSDK_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "CleanupSDK", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CleanupSDK_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CleanupSDK_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CleanupSDK_Statics::ZoomMeetingSDKBPLibrary_eventCleanupSDK_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CleanupSDK_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CleanupSDK_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CleanupSDK_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CleanupSDK_Statics::ZoomMeetingSDKBPLibrary_eventCleanupSDK_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CleanupSDK()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CleanupSDK_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueTurnDown_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventContinueTurnDown_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueTurnDown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventContinueTurnDown_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueTurnDown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventContinueTurnDown_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueTurnDown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueTurnDown_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueTurnDown_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueTurnDown_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | CameraController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Continue to turn down.\n//\n// Return TRUE if the action is successful.\n" },
#endif
		{ "Keywords", "ICameraController.ContinueTurnDown" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Continue to turn down.\n\nReturn TRUE if the action is successful." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueTurnDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "ContinueTurnDown", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueTurnDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueTurnDown_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueTurnDown_Statics::ZoomMeetingSDKBPLibrary_eventContinueTurnDown_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueTurnDown_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueTurnDown_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueTurnDown_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueTurnDown_Statics::ZoomMeetingSDKBPLibrary_eventContinueTurnDown_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueTurnDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueTurnDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueTurnLeft_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventContinueTurnLeft_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueTurnLeft_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventContinueTurnLeft_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueTurnLeft_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventContinueTurnLeft_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueTurnLeft_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueTurnLeft_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueTurnLeft_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueTurnLeft_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | CameraController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Continue to turn left.\n//\n// Return TRUE if the action is successful.\n" },
#endif
		{ "Keywords", "ICameraController.ContinueTurnLeft" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Continue to turn left.\n\nReturn TRUE if the action is successful." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueTurnLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "ContinueTurnLeft", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueTurnLeft_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueTurnLeft_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueTurnLeft_Statics::ZoomMeetingSDKBPLibrary_eventContinueTurnLeft_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueTurnLeft_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueTurnLeft_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueTurnLeft_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueTurnLeft_Statics::ZoomMeetingSDKBPLibrary_eventContinueTurnLeft_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueTurnLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueTurnLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueTurnRight_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventContinueTurnRight_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueTurnRight_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventContinueTurnRight_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueTurnRight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventContinueTurnRight_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueTurnRight_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueTurnRight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueTurnRight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueTurnRight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | CameraController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Continue to turn right.\n//\n// Return TRUE if the action is successful.\n" },
#endif
		{ "Keywords", "ICameraController.ContinueTurnRight" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Continue to turn right.\n\nReturn TRUE if the action is successful." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueTurnRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "ContinueTurnRight", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueTurnRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueTurnRight_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueTurnRight_Statics::ZoomMeetingSDKBPLibrary_eventContinueTurnRight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueTurnRight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueTurnRight_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueTurnRight_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueTurnRight_Statics::ZoomMeetingSDKBPLibrary_eventContinueTurnRight_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueTurnRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueTurnRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueTurnUp_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventContinueTurnUp_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueTurnUp_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventContinueTurnUp_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueTurnUp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventContinueTurnUp_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueTurnUp_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueTurnUp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueTurnUp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueTurnUp_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | CameraController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Continue to turn up.\n//\n// Return TRUE if the action is successful.\n" },
#endif
		{ "Keywords", "ICameraController.ContinueTurnUp" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Continue to turn up.\n\nReturn TRUE if the action is successful." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueTurnUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "ContinueTurnUp", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueTurnUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueTurnUp_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueTurnUp_Statics::ZoomMeetingSDKBPLibrary_eventContinueTurnUp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueTurnUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueTurnUp_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueTurnUp_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueTurnUp_Statics::ZoomMeetingSDKBPLibrary_eventContinueTurnUp_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueTurnUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueTurnUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueZoomIn_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventContinueZoomIn_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueZoomIn_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventContinueZoomIn_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueZoomIn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventContinueZoomIn_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueZoomIn_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueZoomIn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueZoomIn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueZoomIn_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | CameraController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Continue to zoom in.\n//\n// Return TRUE if the action is successful.\n" },
#endif
		{ "Keywords", "ICameraController.ContinueZoomIn" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Continue to zoom in.\n\nReturn TRUE if the action is successful." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueZoomIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "ContinueZoomIn", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueZoomIn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueZoomIn_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueZoomIn_Statics::ZoomMeetingSDKBPLibrary_eventContinueZoomIn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueZoomIn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueZoomIn_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueZoomIn_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueZoomIn_Statics::ZoomMeetingSDKBPLibrary_eventContinueZoomIn_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueZoomIn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueZoomIn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueZoomOut_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventContinueZoomOut_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueZoomOut_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventContinueZoomOut_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueZoomOut_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventContinueZoomOut_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueZoomOut_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueZoomOut_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueZoomOut_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueZoomOut_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | CameraController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Continue to zoom out.\n//\n// Return TRUE if the action is successful.\n" },
#endif
		{ "Keywords", "ICameraController.ContinueZoomOut" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Continue to zoom out.\n\nReturn TRUE if the action is successful." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueZoomOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "ContinueZoomOut", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueZoomOut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueZoomOut_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueZoomOut_Statics::ZoomMeetingSDKBPLibrary_eventContinueZoomOut_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueZoomOut_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueZoomOut_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueZoomOut_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueZoomOut_Statics::ZoomMeetingSDKBPLibrary_eventContinueZoomOut_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueZoomOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueZoomOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CreateBO_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventCreateBO_Parms
		{
			FString strBOName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_strBOName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CreateBO_Statics::NewProp_strBOName = { "strBOName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomMeetingSDKBPLibrary_eventCreateBO_Parms, strBOName), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CreateBO_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventCreateBO_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CreateBO_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventCreateBO_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CreateBO_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CreateBO_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CreateBO_Statics::NewProp_strBOName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CreateBO_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CreateBO_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | BOCreator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n   * IBOCreator\n   */// Create a BO.\n//\n// Return TRUE if creating a BO was successful.\n" },
#endif
		{ "Keywords", "IBOCreator.CreateBO" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* IBOCreator\n// Create a BO.\n//\n// Return TRUE if creating a BO was successful." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CreateBO_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "CreateBO", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CreateBO_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CreateBO_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CreateBO_Statics::ZoomMeetingSDKBPLibrary_eventCreateBO_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CreateBO_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CreateBO_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CreateBO_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CreateBO_Statics::ZoomMeetingSDKBPLibrary_eventCreateBO_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CreateBO()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CreateBO_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CreateBOTransactionBegin_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventCreateBOTransactionBegin_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CreateBOTransactionBegin_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventCreateBOTransactionBegin_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CreateBOTransactionBegin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventCreateBOTransactionBegin_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CreateBOTransactionBegin_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CreateBOTransactionBegin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CreateBOTransactionBegin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CreateBOTransactionBegin_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | BatchCreateBOHelper" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Add new BO to the list.\n//\n// Return \"SDKERR_SUCCESS\" if the create BO transaction begin action was\n// successful.\n" },
#endif
		{ "Keywords", "IBatchCreateBOHelper.CreateBOTransactionBegin" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add new BO to the list.\n\nReturn \"SDKERR_SUCCESS\" if the create BO transaction begin action was\nsuccessful." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CreateBOTransactionBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "CreateBOTransactionBegin", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CreateBOTransactionBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CreateBOTransactionBegin_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CreateBOTransactionBegin_Statics::ZoomMeetingSDKBPLibrary_eventCreateBOTransactionBegin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CreateBOTransactionBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CreateBOTransactionBegin_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CreateBOTransactionBegin_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CreateBOTransactionBegin_Statics::ZoomMeetingSDKBPLibrary_eventCreateBOTransactionBegin_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CreateBOTransactionBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CreateBOTransactionBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CreateBOTransactionCommit_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventCreateBOTransactionCommit_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CreateBOTransactionCommit_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventCreateBOTransactionCommit_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CreateBOTransactionCommit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventCreateBOTransactionCommit_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CreateBOTransactionCommit_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CreateBOTransactionCommit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CreateBOTransactionCommit_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CreateBOTransactionCommit_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | BatchCreateBOHelper" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Add new BO to the list.\n//\n// Return \"SDKERR_SUCCESS\" if the create BO transaction commit action was\n// successful\n" },
#endif
		{ "Keywords", "IBatchCreateBOHelper.CreateBOTransactionCommit" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add new BO to the list.\n\nReturn \"SDKERR_SUCCESS\" if the create BO transaction commit action was\nsuccessful" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CreateBOTransactionCommit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "CreateBOTransactionCommit", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CreateBOTransactionCommit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CreateBOTransactionCommit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CreateBOTransactionCommit_Statics::ZoomMeetingSDKBPLibrary_eventCreateBOTransactionCommit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CreateBOTransactionCommit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CreateBOTransactionCommit_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CreateBOTransactionCommit_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CreateBOTransactionCommit_Statics::ZoomMeetingSDKBPLibrary_eventCreateBOTransactionCommit_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CreateBOTransactionCommit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CreateBOTransactionCommit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_DeleteChatMessage_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventDeleteChatMessage_Parms
		{
			FString msgID;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_msgID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_DeleteChatMessage_Statics::NewProp_msgID = { "msgID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomMeetingSDKBPLibrary_eventDeleteChatMessage_Parms, msgID), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_DeleteChatMessage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventDeleteChatMessage_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_DeleteChatMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventDeleteChatMessage_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_DeleteChatMessage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_DeleteChatMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_DeleteChatMessage_Statics::NewProp_msgID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_DeleteChatMessage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_DeleteChatMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | MeetingChatController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Delete a chat message.\n//\n// Returns \"SDKERR_SUCCESS\" if deleting a chat message was successful.\n" },
#endif
		{ "Keywords", "IMeetingChatController.DeleteChatMessage" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delete a chat message.\n\nReturns \"SDKERR_SUCCESS\" if deleting a chat message was successful." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_DeleteChatMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "DeleteChatMessage", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_DeleteChatMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_DeleteChatMessage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_DeleteChatMessage_Statics::ZoomMeetingSDKBPLibrary_eventDeleteChatMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_DeleteChatMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_DeleteChatMessage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_DeleteChatMessage_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_DeleteChatMessage_Statics::ZoomMeetingSDKBPLibrary_eventDeleteChatMessage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_DeleteChatMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_DeleteChatMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_DisableVideoSource_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventDisableVideoSource_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_DisableVideoSource_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventDisableVideoSource_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_DisableVideoSource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventDisableVideoSource_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_DisableVideoSource_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_DisableVideoSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_DisableVideoSource_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_DisableVideoSource_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Utils | Disable Video Source" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Disables video source that is being sent to the Zoom servers.\n//\n// Returns true if video source is disabled.\n" },
#endif
		{ "DisplayName", "DisableVideoSource" },
		{ "Keywords", "Disable Video Source" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Disables video source that is being sent to the Zoom servers.\n\nReturns true if video source is disabled." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_DisableVideoSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "DisableVideoSource", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_DisableVideoSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_DisableVideoSource_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_DisableVideoSource_Statics::ZoomMeetingSDKBPLibrary_eventDisableVideoSource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_DisableVideoSource_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_DisableVideoSource_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_DisableVideoSource_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_DisableVideoSource_Statics::ZoomMeetingSDKBPLibrary_eventDisableVideoSource_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_DisableVideoSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_DisableVideoSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableAutoAdjustMic_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventEnableAutoAdjustMic_Parms
		{
			bool enable;
			bool ReturnValue;
		};
		static void NewProp_enable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_enable;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableAutoAdjustMic_Statics::NewProp_enable_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventEnableAutoAdjustMic_Parms*)Obj)->enable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableAutoAdjustMic_Statics::NewProp_enable = { "enable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventEnableAutoAdjustMic_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableAutoAdjustMic_Statics::NewProp_enable_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableAutoAdjustMic_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventEnableAutoAdjustMic_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableAutoAdjustMic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventEnableAutoAdjustMic_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableAutoAdjustMic_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableAutoAdjustMic_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableAutoAdjustMic_Statics::NewProp_enable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableAutoAdjustMic_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableAutoAdjustMic_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | AudioSettingContext" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Enable auto adjust mic.\n//\n// Return \"SDKERR_SUCCESS\" if the action was successful.\n" },
#endif
		{ "Keywords", "IAudioSettingContext.EnableAutoAdjustMic" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable auto adjust mic.\n\nReturn \"SDKERR_SUCCESS\" if the action was successful." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableAutoAdjustMic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "EnableAutoAdjustMic", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableAutoAdjustMic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableAutoAdjustMic_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableAutoAdjustMic_Statics::ZoomMeetingSDKBPLibrary_eventEnableAutoAdjustMic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableAutoAdjustMic_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableAutoAdjustMic_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableAutoAdjustMic_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableAutoAdjustMic_Statics::ZoomMeetingSDKBPLibrary_eventEnableAutoAdjustMic_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableAutoAdjustMic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableAutoAdjustMic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableClaimHostFeature_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventEnableClaimHostFeature_Parms
		{
			bool enable;
			bool ReturnValue;
		};
		static void NewProp_enable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_enable;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableClaimHostFeature_Statics::NewProp_enable_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventEnableClaimHostFeature_Parms*)Obj)->enable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableClaimHostFeature_Statics::NewProp_enable = { "enable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventEnableClaimHostFeature_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableClaimHostFeature_Statics::NewProp_enable_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableClaimHostFeature_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventEnableClaimHostFeature_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableClaimHostFeature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventEnableClaimHostFeature_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableClaimHostFeature_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableClaimHostFeature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableClaimHostFeature_Statics::NewProp_enable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableClaimHostFeature_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableClaimHostFeature_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | MeetingUIElemConfiguration" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n   * IMeetingUIElemConfiguration\n   */" },
#endif
		{ "Keywords", "IMeetingUIElemConfiguraton.EnableClaimHostFeature" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* IMeetingUIElemConfiguration" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableClaimHostFeature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "EnableClaimHostFeature", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableClaimHostFeature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableClaimHostFeature_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableClaimHostFeature_Statics::ZoomMeetingSDKBPLibrary_eventEnableClaimHostFeature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableClaimHostFeature_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableClaimHostFeature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableClaimHostFeature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableClaimHostFeature_Statics::ZoomMeetingSDKBPLibrary_eventEnableClaimHostFeature_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableClaimHostFeature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableClaimHostFeature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableForceAutoStartMyVideoWhenJoinMeeting_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventEnableForceAutoStartMyVideoWhenJoinMeeting_Parms
		{
			bool enable;
			bool ReturnValue;
		};
		static void NewProp_enable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_enable;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableForceAutoStartMyVideoWhenJoinMeeting_Statics::NewProp_enable_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventEnableForceAutoStartMyVideoWhenJoinMeeting_Parms*)Obj)->enable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableForceAutoStartMyVideoWhenJoinMeeting_Statics::NewProp_enable = { "enable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventEnableForceAutoStartMyVideoWhenJoinMeeting_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableForceAutoStartMyVideoWhenJoinMeeting_Statics::NewProp_enable_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableForceAutoStartMyVideoWhenJoinMeeting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventEnableForceAutoStartMyVideoWhenJoinMeeting_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableForceAutoStartMyVideoWhenJoinMeeting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventEnableForceAutoStartMyVideoWhenJoinMeeting_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableForceAutoStartMyVideoWhenJoinMeeting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableForceAutoStartMyVideoWhenJoinMeeting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableForceAutoStartMyVideoWhenJoinMeeting_Statics::NewProp_enable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableForceAutoStartMyVideoWhenJoinMeeting_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableForceAutoStartMyVideoWhenJoinMeeting_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | JoinMeetingBehaviorConfiguration" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Enable force auto start my video when joining a meeting.\n//\n// Return TRUE if the action is complete.\n" },
#endif
		{ "Keywords", "IJoinMeetingBehaviorConfiguration.EnableForceAutoStartMyVideoWhenJoinMeeting" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable force auto start my video when joining a meeting.\n\nReturn TRUE if the action is complete." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableForceAutoStartMyVideoWhenJoinMeeting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "EnableForceAutoStartMyVideoWhenJoinMeeting", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableForceAutoStartMyVideoWhenJoinMeeting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableForceAutoStartMyVideoWhenJoinMeeting_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableForceAutoStartMyVideoWhenJoinMeeting_Statics::ZoomMeetingSDKBPLibrary_eventEnableForceAutoStartMyVideoWhenJoinMeeting_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableForceAutoStartMyVideoWhenJoinMeeting_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableForceAutoStartMyVideoWhenJoinMeeting_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableForceAutoStartMyVideoWhenJoinMeeting_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableForceAutoStartMyVideoWhenJoinMeeting_Statics::ZoomMeetingSDKBPLibrary_eventEnableForceAutoStartMyVideoWhenJoinMeeting_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableForceAutoStartMyVideoWhenJoinMeeting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableForceAutoStartMyVideoWhenJoinMeeting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableForceAutoStopMyVideoWhenJoinMeeting_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventEnableForceAutoStopMyVideoWhenJoinMeeting_Parms
		{
			bool enable;
			bool ReturnValue;
		};
		static void NewProp_enable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_enable;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableForceAutoStopMyVideoWhenJoinMeeting_Statics::NewProp_enable_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventEnableForceAutoStopMyVideoWhenJoinMeeting_Parms*)Obj)->enable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableForceAutoStopMyVideoWhenJoinMeeting_Statics::NewProp_enable = { "enable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventEnableForceAutoStopMyVideoWhenJoinMeeting_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableForceAutoStopMyVideoWhenJoinMeeting_Statics::NewProp_enable_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableForceAutoStopMyVideoWhenJoinMeeting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventEnableForceAutoStopMyVideoWhenJoinMeeting_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableForceAutoStopMyVideoWhenJoinMeeting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventEnableForceAutoStopMyVideoWhenJoinMeeting_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableForceAutoStopMyVideoWhenJoinMeeting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableForceAutoStopMyVideoWhenJoinMeeting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableForceAutoStopMyVideoWhenJoinMeeting_Statics::NewProp_enable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableForceAutoStopMyVideoWhenJoinMeeting_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableForceAutoStopMyVideoWhenJoinMeeting_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | JoinMeetingBehaviorConfiguration" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Enable force auto stop my video when joining a meeting.\n//\n// Return TRUE if the action is complete.\n" },
#endif
		{ "Keywords", "IJoinMeetingBehaviorConfiguration.EnableForceAutoStopMyVideoWhenJoinMeeting" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable force auto stop my video when joining a meeting.\n\nReturn TRUE if the action is complete." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableForceAutoStopMyVideoWhenJoinMeeting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "EnableForceAutoStopMyVideoWhenJoinMeeting", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableForceAutoStopMyVideoWhenJoinMeeting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableForceAutoStopMyVideoWhenJoinMeeting_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableForceAutoStopMyVideoWhenJoinMeeting_Statics::ZoomMeetingSDKBPLibrary_eventEnableForceAutoStopMyVideoWhenJoinMeeting_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableForceAutoStopMyVideoWhenJoinMeeting_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableForceAutoStopMyVideoWhenJoinMeeting_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableForceAutoStopMyVideoWhenJoinMeeting_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableForceAutoStopMyVideoWhenJoinMeeting_Statics::ZoomMeetingSDKBPLibrary_eventEnableForceAutoStopMyVideoWhenJoinMeeting_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableForceAutoStopMyVideoWhenJoinMeeting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableForceAutoStopMyVideoWhenJoinMeeting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableVideoSource_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventEnableVideoSource_Parms
		{
			UTextureRenderTarget2D* texture_to_send;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_texture_to_send;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableVideoSource_Statics::NewProp_texture_to_send = { "texture_to_send", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomMeetingSDKBPLibrary_eventEnableVideoSource_Parms, texture_to_send), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableVideoSource_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventEnableVideoSource_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableVideoSource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventEnableVideoSource_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableVideoSource_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableVideoSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableVideoSource_Statics::NewProp_texture_to_send,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableVideoSource_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableVideoSource_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Utils | Enable Video Source" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Enables video source (texture) that needs to be sent to the Zoom servers.\n//\n// Returns true if video source is enabled.\n" },
#endif
		{ "DisplayName", "EnableVideoSource" },
		{ "Keywords", "Enable Video Source" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enables video source (texture) that needs to be sent to the Zoom servers.\n\nReturns true if video source is enabled." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableVideoSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "EnableVideoSource", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableVideoSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableVideoSource_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableVideoSource_Statics::ZoomMeetingSDKBPLibrary_eventEnableVideoSource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableVideoSource_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableVideoSource_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableVideoSource_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableVideoSource_Statics::ZoomMeetingSDKBPLibrary_eventEnableVideoSource_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableVideoSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableVideoSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndMeeting_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventEndMeeting_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndMeeting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventEndMeeting_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndMeeting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventEndMeeting_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndMeeting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndMeeting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndMeeting_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndMeeting_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | MeetingServiceController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Ends the existing meeting.\n//\n// Returns \"SDKERR_SUCCESS\" if ending the meeting was successful.\n" },
#endif
		{ "DisplayName", "Execute Zoom End Meeting" },
		{ "Keywords", "IMeetingService.EndMeeting" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ends the existing meeting.\n\nReturns \"SDKERR_SUCCESS\" if ending the meeting was successful." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndMeeting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "EndMeeting", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndMeeting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndMeeting_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndMeeting_Statics::ZoomMeetingSDKBPLibrary_eventEndMeeting_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndMeeting_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndMeeting_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndMeeting_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndMeeting_Statics::ZoomMeetingSDKBPLibrary_eventEndMeeting_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndMeeting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndMeeting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndTurnDown_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventEndTurnDown_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndTurnDown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventEndTurnDown_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndTurnDown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventEndTurnDown_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndTurnDown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndTurnDown_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndTurnDown_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndTurnDown_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | CameraController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// End turning down.\n//\n// Return TRUE if the action is successful.\n" },
#endif
		{ "Keywords", "ICameraController.EndTurnDown" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "End turning down.\n\nReturn TRUE if the action is successful." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndTurnDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "EndTurnDown", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndTurnDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndTurnDown_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndTurnDown_Statics::ZoomMeetingSDKBPLibrary_eventEndTurnDown_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndTurnDown_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndTurnDown_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndTurnDown_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndTurnDown_Statics::ZoomMeetingSDKBPLibrary_eventEndTurnDown_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndTurnDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndTurnDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndTurnLeft_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventEndTurnLeft_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndTurnLeft_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventEndTurnLeft_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndTurnLeft_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventEndTurnLeft_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndTurnLeft_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndTurnLeft_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndTurnLeft_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndTurnLeft_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | CameraController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// End turning left.\n//\n// Return TRUE if the action is successful.\n" },
#endif
		{ "Keywords", "ICameraController.EndTurnLeft" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "End turning left.\n\nReturn TRUE if the action is successful." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndTurnLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "EndTurnLeft", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndTurnLeft_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndTurnLeft_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndTurnLeft_Statics::ZoomMeetingSDKBPLibrary_eventEndTurnLeft_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndTurnLeft_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndTurnLeft_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndTurnLeft_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndTurnLeft_Statics::ZoomMeetingSDKBPLibrary_eventEndTurnLeft_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndTurnLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndTurnLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndTurnRight_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventEndTurnRight_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndTurnRight_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventEndTurnRight_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndTurnRight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventEndTurnRight_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndTurnRight_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndTurnRight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndTurnRight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndTurnRight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | CameraController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// End turning right.\n//\n// Return TRUE if the action is successful.\n" },
#endif
		{ "Keywords", "ICameraController.EndTurnRight" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "End turning right.\n\nReturn TRUE if the action is successful." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndTurnRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "EndTurnRight", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndTurnRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndTurnRight_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndTurnRight_Statics::ZoomMeetingSDKBPLibrary_eventEndTurnRight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndTurnRight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndTurnRight_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndTurnRight_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndTurnRight_Statics::ZoomMeetingSDKBPLibrary_eventEndTurnRight_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndTurnRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndTurnRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndTurnUp_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventEndTurnUp_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndTurnUp_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventEndTurnUp_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndTurnUp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventEndTurnUp_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndTurnUp_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndTurnUp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndTurnUp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndTurnUp_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | CameraController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// End turning up.\n//\n// Return TRUE if the action is successful.\n" },
#endif
		{ "Keywords", "ICameraController.EndTurnUp" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "End turning up.\n\nReturn TRUE if the action is successful." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndTurnUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "EndTurnUp", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndTurnUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndTurnUp_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndTurnUp_Statics::ZoomMeetingSDKBPLibrary_eventEndTurnUp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndTurnUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndTurnUp_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndTurnUp_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndTurnUp_Statics::ZoomMeetingSDKBPLibrary_eventEndTurnUp_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndTurnUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndTurnUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndZoomIn_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventEndZoomIn_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndZoomIn_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventEndZoomIn_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndZoomIn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventEndZoomIn_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndZoomIn_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndZoomIn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndZoomIn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndZoomIn_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | CameraController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// End zooming in.\n//\n// Return TRUE if the action is successful.\n" },
#endif
		{ "Keywords", "ICameraController.EndZoomIn" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "End zooming in.\n\nReturn TRUE if the action is successful." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndZoomIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "EndZoomIn", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndZoomIn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndZoomIn_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndZoomIn_Statics::ZoomMeetingSDKBPLibrary_eventEndZoomIn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndZoomIn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndZoomIn_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndZoomIn_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndZoomIn_Statics::ZoomMeetingSDKBPLibrary_eventEndZoomIn_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndZoomIn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndZoomIn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndZoomOut_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventEndZoomOut_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndZoomOut_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventEndZoomOut_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndZoomOut_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventEndZoomOut_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndZoomOut_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndZoomOut_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndZoomOut_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndZoomOut_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | CameraController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// End zooming out.\n//\n// Return TRUE if the action is successful.\n" },
#endif
		{ "Keywords", "ICameraController.EndZoomOut" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "End zooming out.\n\nReturn TRUE if the action is successful." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndZoomOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "EndZoomOut", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndZoomOut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndZoomOut_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndZoomOut_Statics::ZoomMeetingSDKBPLibrary_eventEndZoomOut_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndZoomOut_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndZoomOut_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndZoomOut_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndZoomOut_Statics::ZoomMeetingSDKBPLibrary_eventEndZoomOut_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndZoomOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndZoomOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GenerateJWTAuthToken_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventGenerateJWTAuthToken_Parms
		{
			FString client_id;
			FString client_secret;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_client_id;
		static const UECodeGen_Private::FStrPropertyParams NewProp_client_secret;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GenerateJWTAuthToken_Statics::NewProp_client_id = { "client_id", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomMeetingSDKBPLibrary_eventGenerateJWTAuthToken_Parms, client_id), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GenerateJWTAuthToken_Statics::NewProp_client_secret = { "client_secret", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomMeetingSDKBPLibrary_eventGenerateJWTAuthToken_Parms, client_secret), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GenerateJWTAuthToken_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomMeetingSDKBPLibrary_eventGenerateJWTAuthToken_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GenerateJWTAuthToken_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GenerateJWTAuthToken_Statics::NewProp_client_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GenerateJWTAuthToken_Statics::NewProp_client_secret,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GenerateJWTAuthToken_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GenerateJWTAuthToken_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Utils | JWT Token Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Generates PKCE Auth pair.\n//\n// Return JWT Auth token.\n" },
#endif
		{ "DisplayName", "GenerateJWTAuthToken" },
		{ "Keywords", "JWT Token" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Generates PKCE Auth pair.\n\nReturn JWT Auth token." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GenerateJWTAuthToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "GenerateJWTAuthToken", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GenerateJWTAuthToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GenerateJWTAuthToken_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GenerateJWTAuthToken_Statics::ZoomMeetingSDKBPLibrary_eventGenerateJWTAuthToken_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GenerateJWTAuthToken_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GenerateJWTAuthToken_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GenerateJWTAuthToken_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GenerateJWTAuthToken_Statics::ZoomMeetingSDKBPLibrary_eventGenerateJWTAuthToken_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GenerateJWTAuthToken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GenerateJWTAuthToken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GeneratePKCEAuthPair_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventGeneratePKCEAuthPair_Parms
		{
			FString client_id;
			FString redirect_url;
			FUEAuth_Pair ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_client_id;
		static const UECodeGen_Private::FStrPropertyParams NewProp_redirect_url;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GeneratePKCEAuthPair_Statics::NewProp_client_id = { "client_id", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomMeetingSDKBPLibrary_eventGeneratePKCEAuthPair_Parms, client_id), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GeneratePKCEAuthPair_Statics::NewProp_redirect_url = { "redirect_url", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomMeetingSDKBPLibrary_eventGeneratePKCEAuthPair_Parms, redirect_url), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GeneratePKCEAuthPair_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomMeetingSDKBPLibrary_eventGeneratePKCEAuthPair_Parms, ReturnValue), Z_Construct_UScriptStruct_FUEAuth_Pair, METADATA_PARAMS(0, nullptr) }; // 410792333
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GeneratePKCEAuthPair_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GeneratePKCEAuthPair_Statics::NewProp_client_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GeneratePKCEAuthPair_Statics::NewProp_redirect_url,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GeneratePKCEAuthPair_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GeneratePKCEAuthPair_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Utils | PKCE Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Generates PKCE Auth pair.\n//\n// Return PKCE Auth pair.\n" },
#endif
		{ "DisplayName", "GeneratePKCEAuthPair" },
		{ "Keywords", "PCKE Auth pair" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Generates PKCE Auth pair.\n\nReturn PKCE Auth pair." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GeneratePKCEAuthPair_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "GeneratePKCEAuthPair", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GeneratePKCEAuthPair_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GeneratePKCEAuthPair_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GeneratePKCEAuthPair_Statics::ZoomMeetingSDKBPLibrary_eventGeneratePKCEAuthPair_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GeneratePKCEAuthPair_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GeneratePKCEAuthPair_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GeneratePKCEAuthPair_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GeneratePKCEAuthPair_Statics::ZoomMeetingSDKBPLibrary_eventGeneratePKCEAuthPair_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GeneratePKCEAuthPair()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GeneratePKCEAuthPair_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetAllChatMessageID_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventGetAllChatMessageID_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetAllChatMessageID_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetAllChatMessageID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomMeetingSDKBPLibrary_eventGetAllChatMessageID_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetAllChatMessageID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetAllChatMessageID_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetAllChatMessageID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetAllChatMessageID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | MeetingChatController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get all chat message ID\n//\n// Return \"SDKERR_SUCCESS\" if getting all chat message ID was successful.\n" },
#endif
		{ "Keywords", "IMeetingChatController.GetAllChatMessageID" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get all chat message ID\n\nReturn \"SDKERR_SUCCESS\" if getting all chat message ID was successful." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetAllChatMessageID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "GetAllChatMessageID", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetAllChatMessageID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetAllChatMessageID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetAllChatMessageID_Statics::ZoomMeetingSDKBPLibrary_eventGetAllChatMessageID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetAllChatMessageID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetAllChatMessageID_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetAllChatMessageID_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetAllChatMessageID_Statics::ZoomMeetingSDKBPLibrary_eventGetAllChatMessageID_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetAllChatMessageID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetAllChatMessageID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetAllQuestionList_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventGetAllQuestionList_Parms
		{
			TArray<FUEQAItemInfo> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetAllQuestionList_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FUEQAItemInfo, METADATA_PARAMS(0, nullptr) }; // 1642833442
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetAllQuestionList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomMeetingSDKBPLibrary_eventGetAllQuestionList_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1642833442
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetAllQuestionList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetAllQuestionList_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetAllQuestionList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetAllQuestionList_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | MeetingQAController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n  * IMeetingQAController\n  */// Get all question list.\n//\n// Return a list of all questions.\n" },
#endif
		{ "DisplayName", "Get All Question List" },
		{ "Keywords", "IMeetingQAController.GetAllQuestionList" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* IMeetingQAController\n// Get all question list.\n//\n// Return a list of all questions." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetAllQuestionList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "GetAllQuestionList", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetAllQuestionList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetAllQuestionList_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetAllQuestionList_Statics::ZoomMeetingSDKBPLibrary_eventGetAllQuestionList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetAllQuestionList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetAllQuestionList_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetAllQuestionList_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetAllQuestionList_Statics::ZoomMeetingSDKBPLibrary_eventGetAllQuestionList_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetAllQuestionList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetAllQuestionList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetAnswerItemInfo_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventGetAnswerItemInfo_Parms
		{
			FString answerID;
			FUEAnswerItem ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_answerID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetAnswerItemInfo_Statics::NewProp_answerID = { "answerID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomMeetingSDKBPLibrary_eventGetAnswerItemInfo_Parms, answerID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetAnswerItemInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomMeetingSDKBPLibrary_eventGetAnswerItemInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FUEAnswerItem, METADATA_PARAMS(0, nullptr) }; // 2771120552
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetAnswerItemInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetAnswerItemInfo_Statics::NewProp_answerID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetAnswerItemInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetAnswerItemInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | AnswerItem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n   * IAnswerItem\n   */" },
#endif
		{ "DisplayName", "Get Answer Item info" },
		{ "Keywords", "AnswerItem.GetAnswerItemInfo" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* IAnswerItem" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetAnswerItemInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "GetAnswerItemInfo", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetAnswerItemInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetAnswerItemInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetAnswerItemInfo_Statics::ZoomMeetingSDKBPLibrary_eventGetAnswerItemInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetAnswerItemInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetAnswerItemInfo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetAnswerItemInfo_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetAnswerItemInfo_Statics::ZoomMeetingSDKBPLibrary_eventGetAnswerItemInfo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetAnswerItemInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetAnswerItemInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetAuthResult_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventGetAuthResult_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetAuthResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomMeetingSDKBPLibrary_eventGetAuthResult_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetAuthResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetAuthResult_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetAuthResult_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | InitAuthController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the authentication status.\n//\n// Returns \"AUTHRET_SUCCESS\" if authentication was successful.\n" },
#endif
		{ "DisplayName", "Execute SDK Auth Status function" },
		{ "Keywords", "IAuthService.GetAuthResult" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the authentication status.\n\nReturns \"AUTHRET_SUCCESS\" if authentication was successful." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetAuthResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "GetAuthResult", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetAuthResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetAuthResult_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetAuthResult_Statics::ZoomMeetingSDKBPLibrary_eventGetAuthResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetAuthResult_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetAuthResult_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetAuthResult_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetAuthResult_Statics::ZoomMeetingSDKBPLibrary_eventGetAuthResult_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetAuthResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetAuthResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetBOName_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventGetBOName_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetBOName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomMeetingSDKBPLibrary_eventGetBOName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetBOName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetBOName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetBOName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | BOAttendee" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n   * IBOAttendee\n   */// Get the current BO name.\n//\n// Return the BO name as a string.\n" },
#endif
		{ "Keywords", "IBOAttendee.GetBOName" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* IBOAttendee\n// Get the current BO name.\n//\n// Return the BO name as a string." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetBOName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "GetBOName", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetBOName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetBOName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetBOName_Statics::ZoomMeetingSDKBPLibrary_eventGetBOName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetBOName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetBOName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetBOName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetBOName_Statics::ZoomMeetingSDKBPLibrary_eventGetBOName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetBOName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetBOName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetBOUserName_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventGetBOUserName_Parms
		{
			FString strUserID;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_strUserID;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetBOUserName_Statics::NewProp_strUserID = { "strUserID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomMeetingSDKBPLibrary_eventGetBOUserName_Parms, strUserID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetBOUserName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomMeetingSDKBPLibrary_eventGetBOUserName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetBOUserName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetBOUserName_Statics::NewProp_strUserID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetBOUserName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetBOUserName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | BOData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n   * IBOData.\n   */" },
#endif
		{ "Keywords", "IBOData.GetBOUserName" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* IBOData." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetBOUserName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "GetBOUserName", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetBOUserName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetBOUserName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetBOUserName_Statics::ZoomMeetingSDKBPLibrary_eventGetBOUserName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetBOUserName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetBOUserName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetBOUserName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetBOUserName_Statics::ZoomMeetingSDKBPLibrary_eventGetBOUserName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetBOUserName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetBOUserName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetChatMessageInfo_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventGetChatMessageInfo_Parms
		{
			FString msgID;
			FUEChatMsgInfo ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_msgID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetChatMessageInfo_Statics::NewProp_msgID = { "msgID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomMeetingSDKBPLibrary_eventGetChatMessageInfo_Parms, msgID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetChatMessageInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomMeetingSDKBPLibrary_eventGetChatMessageInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FUEChatMsgInfo, METADATA_PARAMS(0, nullptr) }; // 814469336
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetChatMessageInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetChatMessageInfo_Statics::NewProp_msgID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetChatMessageInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetChatMessageInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | MeetingChatController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get chat message ID.\n//\n// Return chat message info\n" },
#endif
		{ "Keywords", "IMeetingChatController.GetChatMessageById" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get chat message ID.\n\nReturn chat message info" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetChatMessageInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "GetChatMessageInfo", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetChatMessageInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetChatMessageInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetChatMessageInfo_Statics::ZoomMeetingSDKBPLibrary_eventGetChatMessageInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetChatMessageInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetChatMessageInfo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetChatMessageInfo_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetChatMessageInfo_Statics::ZoomMeetingSDKBPLibrary_eventGetChatMessageInfo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetChatMessageInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetChatMessageInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetChatStatus_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventGetChatStatus_Parms
		{
			FUEChatStatus ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetChatStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomMeetingSDKBPLibrary_eventGetChatStatus_Parms, ReturnValue), Z_Construct_UScriptStruct_FUEChatStatus, METADATA_PARAMS(0, nullptr) }; // 1742940099
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetChatStatus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetChatStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetChatStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | MeetingChatController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get chat status.\n//\n// Return an FUEChatStatus struc with value if getting the chat status was\n// successful.\n" },
#endif
		{ "Keywords", "IMeetingChatController.GetChatStatus" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get chat status.\n\nReturn an FUEChatStatus struc with value if getting the chat status was\nsuccessful." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetChatStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "GetChatStatus", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetChatStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetChatStatus_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetChatStatus_Statics::ZoomMeetingSDKBPLibrary_eventGetChatStatus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetChatStatus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetChatStatus_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetChatStatus_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetChatStatus_Statics::ZoomMeetingSDKBPLibrary_eventGetChatStatus_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetChatStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetChatStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetCurrentBOName_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventGetCurrentBOName_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetCurrentBOName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomMeetingSDKBPLibrary_eventGetCurrentBOName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetCurrentBOName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetCurrentBOName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetCurrentBOName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | BOData" },
		{ "Keywords", "IBOData.GetCurrentBOName" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetCurrentBOName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "GetCurrentBOName", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetCurrentBOName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetCurrentBOName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetCurrentBOName_Statics::ZoomMeetingSDKBPLibrary_eventGetCurrentBOName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetCurrentBOName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetCurrentBOName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetCurrentBOName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetCurrentBOName_Statics::ZoomMeetingSDKBPLibrary_eventGetCurrentBOName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetCurrentBOName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetCurrentBOName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetInstance_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventGetInstance_Parms
		{
			UZoomMeetingSDKBPLibrary* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomMeetingSDKBPLibrary_eventGetInstance_Parms, ReturnValue), Z_Construct_UClass_UZoomMeetingSDKBPLibrary_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | Util" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Singleton instance\n" },
#endif
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Singleton instance" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "GetInstance", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetInstance_Statics::ZoomMeetingSDKBPLibrary_eventGetInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetInstance_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetInstance_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetInstance_Statics::ZoomMeetingSDKBPLibrary_eventGetInstance_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetOutputRenderer_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventGetOutputRenderer_Parms
		{
			int64 userId;
			ZOOM_SDK_RAW_DATA_TYPE raw_data_type;
			UTextureRenderTarget2D* ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_userId;
		static const UECodeGen_Private::FBytePropertyParams NewProp_raw_data_type_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_raw_data_type;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetOutputRenderer_Statics::NewProp_userId = { "userId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomMeetingSDKBPLibrary_eventGetOutputRenderer_Parms, userId), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetOutputRenderer_Statics::NewProp_raw_data_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetOutputRenderer_Statics::NewProp_raw_data_type = { "raw_data_type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomMeetingSDKBPLibrary_eventGetOutputRenderer_Parms, raw_data_type), Z_Construct_UEnum_ZoomMeetingSDK_ZOOM_SDK_RAW_DATA_TYPE, METADATA_PARAMS(0, nullptr) }; // 1620386359
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetOutputRenderer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomMeetingSDKBPLibrary_eventGetOutputRenderer_Parms, ReturnValue), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetOutputRenderer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetOutputRenderer_Statics::NewProp_userId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetOutputRenderer_Statics::NewProp_raw_data_type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetOutputRenderer_Statics::NewProp_raw_data_type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetOutputRenderer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetOutputRenderer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | ZoomSDKRenderer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gets the output renderer where the given user is subscribed.\n//\n// Returns pointer to UTextureRenderTarget2D where the user is subscribed to a\n// video renderer else nullptr if the user id is invalid or if the user's\n// video is not subscribed.\n" },
#endif
		{ "CPP_Default_raw_data_type", "ZoomSDKRawDataType_Video" },
		{ "DisplayName", "Get output renderer" },
		{ "Keywords", "IZoomSDKRenderer.GetOutputRenderer" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the output renderer where the given user is subscribed.\n\nReturns pointer to UTextureRenderTarget2D where the user is subscribed to a\nvideo renderer else nullptr if the user id is invalid or if the user's\nvideo is not subscribed." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetOutputRenderer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "GetOutputRenderer", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetOutputRenderer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetOutputRenderer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetOutputRenderer_Statics::ZoomMeetingSDKBPLibrary_eventGetOutputRenderer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetOutputRenderer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetOutputRenderer_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetOutputRenderer_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetOutputRenderer_Statics::ZoomMeetingSDKBPLibrary_eventGetOutputRenderer_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetOutputRenderer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetOutputRenderer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetParticipantsList_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventGetParticipantsList_Parms
		{
			TArray<FUEUserInfo> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetParticipantsList_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FUEUserInfo, METADATA_PARAMS(0, nullptr) }; // 2910621085
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetParticipantsList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomMeetingSDKBPLibrary_eventGetParticipantsList_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2910621085
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetParticipantsList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetParticipantsList_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetParticipantsList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetParticipantsList_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | MeetingParticipantsController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get participants list.\n//\n// Return \"SDK_SUCCESS\" if getting the participant is successful.\n" },
#endif
		{ "DisplayName", "Get Participant List" },
		{ "Keywords", "UserInfo.GetParticipantsList" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get participants list.\n\nReturn \"SDK_SUCCESS\" if getting the participant is successful." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetParticipantsList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "GetParticipantsList", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetParticipantsList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetParticipantsList_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetParticipantsList_Statics::ZoomMeetingSDKBPLibrary_eventGetParticipantsList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetParticipantsList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetParticipantsList_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetParticipantsList_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetParticipantsList_Statics::ZoomMeetingSDKBPLibrary_eventGetParticipantsList_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetParticipantsList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetParticipantsList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetSpeakerVol_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventGetSpeakerVol_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetSpeakerVol_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomMeetingSDKBPLibrary_eventGetSpeakerVol_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetSpeakerVol_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetSpeakerVol_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetSpeakerVol_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | AudioSettingContext" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n   * IAudioSettingContext\n   */// Get speaker volume.\n//\n// Return volume of the speaker in float type, return -1.0f if failed.\n" },
#endif
		{ "Keywords", "IAudioSettingContext.GetSpeakerVol" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* IAudioSettingContext\n// Get speaker volume.\n//\n// Return volume of the speaker in float type, return -1.0f if failed." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetSpeakerVol_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "GetSpeakerVol", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetSpeakerVol_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetSpeakerVol_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetSpeakerVol_Statics::ZoomMeetingSDKBPLibrary_eventGetSpeakerVol_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetSpeakerVol_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetSpeakerVol_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetSpeakerVol_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetSpeakerVol_Statics::ZoomMeetingSDKBPLibrary_eventGetSpeakerVol_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetSpeakerVol()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetSpeakerVol_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetSpotlightedUserList_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventGetSpotlightedUserList_Parms
		{
			TArray<FUEUserInfo> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetSpotlightedUserList_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FUEUserInfo, METADATA_PARAMS(0, nullptr) }; // 2910621085
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetSpotlightedUserList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomMeetingSDKBPLibrary_eventGetSpotlightedUserList_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2910621085
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetSpotlightedUserList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetSpotlightedUserList_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetSpotlightedUserList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetSpotlightedUserList_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | MeetingVideoController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n   * IMeetingVideoController\n   */// Get spotlighted user list.\n//\n// Return \"SDK_SUCCESS\" if getting the spotlighted participants is successful.\n" },
#endif
		{ "DisplayName", "Get spotlighted user list" },
		{ "Keywords", "Get spotlighted user list" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* IMeetingVideoController\n// Get spotlighted user list.\n//\n// Return \"SDK_SUCCESS\" if getting the spotlighted participants is successful." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetSpotlightedUserList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "GetSpotlightedUserList", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetSpotlightedUserList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetSpotlightedUserList_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetSpotlightedUserList_Statics::ZoomMeetingSDKBPLibrary_eventGetSpotlightedUserList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetSpotlightedUserList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetSpotlightedUserList_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetSpotlightedUserList_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetSpotlightedUserList_Statics::ZoomMeetingSDKBPLibrary_eventGetSpotlightedUserList_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetSpotlightedUserList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetSpotlightedUserList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetUserInfo_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventGetUserInfo_Parms
		{
			int64 user_id;
			FUEUserInfo ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_user_id;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetUserInfo_Statics::NewProp_user_id = { "user_id", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomMeetingSDKBPLibrary_eventGetUserInfo_Parms, user_id), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetUserInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomMeetingSDKBPLibrary_eventGetUserInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FUEUserInfo, METADATA_PARAMS(0, nullptr) }; // 2910621085
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetUserInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetUserInfo_Statics::NewProp_user_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetUserInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetUserInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | IUserInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get user info for the given user id.\n//\n// Return \"SDK_SUCCESS\" if getting the participant is successful.\n" },
#endif
		{ "DisplayName", "Get user info" },
		{ "Keywords", "UserInfo.GetUserInfo" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get user info for the given user id.\n\nReturn \"SDK_SUCCESS\" if getting the participant is successful." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetUserInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "GetUserInfo", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetUserInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetUserInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetUserInfo_Statics::ZoomMeetingSDKBPLibrary_eventGetUserInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetUserInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetUserInfo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetUserInfo_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetUserInfo_Statics::ZoomMeetingSDKBPLibrary_eventGetUserInfo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetUserInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetUserInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetWaitingRoomLst_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventGetWaitingRoomLst_Parms
		{
			TArray<int64> ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetWaitingRoomLst_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetWaitingRoomLst_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomMeetingSDKBPLibrary_eventGetWaitingRoomLst_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetWaitingRoomLst_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetWaitingRoomLst_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetWaitingRoomLst_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetWaitingRoomLst_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | MeetingWaitingRoomController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gets the waiting room list\n//\n// Returns the list of IDs of attendees in the waiting room\n" },
#endif
		{ "DisplayName", "GetWaitingRoomLst" },
		{ "Keywords", "IMeetingWaitingRoomController.GetWaitingRoomLst" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the waiting room list\n\nReturns the list of IDs of attendees in the waiting room" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetWaitingRoomLst_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "GetWaitingRoomLst", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetWaitingRoomLst_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetWaitingRoomLst_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetWaitingRoomLst_Statics::ZoomMeetingSDKBPLibrary_eventGetWaitingRoomLst_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetWaitingRoomLst_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetWaitingRoomLst_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetWaitingRoomLst_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetWaitingRoomLst_Statics::ZoomMeetingSDKBPLibrary_eventGetWaitingRoomLst_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetWaitingRoomLst()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetWaitingRoomLst_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetWaitingRoomUserInfoByID_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventGetWaitingRoomUserInfoByID_Parms
		{
			int64 user_id;
			FUEUserInfo ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_user_id;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetWaitingRoomUserInfoByID_Statics::NewProp_user_id = { "user_id", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomMeetingSDKBPLibrary_eventGetWaitingRoomUserInfoByID_Parms, user_id), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetWaitingRoomUserInfoByID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomMeetingSDKBPLibrary_eventGetWaitingRoomUserInfoByID_Parms, ReturnValue), Z_Construct_UScriptStruct_FUEUserInfo, METADATA_PARAMS(0, nullptr) }; // 2910621085
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetWaitingRoomUserInfoByID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetWaitingRoomUserInfoByID_Statics::NewProp_user_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetWaitingRoomUserInfoByID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetWaitingRoomUserInfoByID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | MeetingWaitingRoomController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gets the waiting room user infor by ID\n//\n// Returns the attendee information in the waiting room using user ID\n" },
#endif
		{ "DisplayName", "GetWaitingRoomUserInfoByID" },
		{ "Keywords", "IMeetingWaitingRoomController.GetWaitingRoomUserInfoByID" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the waiting room user infor by ID\n\nReturns the attendee information in the waiting room using user ID" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetWaitingRoomUserInfoByID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "GetWaitingRoomUserInfoByID", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetWaitingRoomUserInfoByID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetWaitingRoomUserInfoByID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetWaitingRoomUserInfoByID_Statics::ZoomMeetingSDKBPLibrary_eventGetWaitingRoomUserInfoByID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetWaitingRoomUserInfoByID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetWaitingRoomUserInfoByID_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetWaitingRoomUserInfoByID_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetWaitingRoomUserInfoByID_Statics::ZoomMeetingSDKBPLibrary_eventGetWaitingRoomUserInfoByID_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetWaitingRoomUserInfoByID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetWaitingRoomUserInfoByID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_InitAuthSDK_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventInitAuthSDK_Parms
		{
			FString jwt;
			bool use_default_zoom_ui;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_jwt;
		static void NewProp_use_default_zoom_ui_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_use_default_zoom_ui;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_InitAuthSDK_Statics::NewProp_jwt = { "jwt", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomMeetingSDKBPLibrary_eventInitAuthSDK_Parms, jwt), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_InitAuthSDK_Statics::NewProp_use_default_zoom_ui_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventInitAuthSDK_Parms*)Obj)->use_default_zoom_ui = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_InitAuthSDK_Statics::NewProp_use_default_zoom_ui = { "use_default_zoom_ui", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventInitAuthSDK_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_InitAuthSDK_Statics::NewProp_use_default_zoom_ui_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_InitAuthSDK_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventInitAuthSDK_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_InitAuthSDK_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventInitAuthSDK_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_InitAuthSDK_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_InitAuthSDK_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_InitAuthSDK_Statics::NewProp_jwt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_InitAuthSDK_Statics::NewProp_use_default_zoom_ui,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_InitAuthSDK_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_InitAuthSDK_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | InitAuthController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Init and then auth the SDK with JWT token. Initializes SDK with default\n// Zoom UI. Use the function InitAuthSDKCustomizedUIFlag with flag set to true\n// to use customized UI.\n//\n// Return \"SDKERR_SUCCESS\" if init and auth request was sent successfully.\n" },
#endif
		{ "CPP_Default_use_default_zoom_ui", "true" },
		{ "DisplayName", "SDK Init and Auth" },
		{ "Keywords", "ZoomMeetingSDK InitSDK IAuthService.SDKAuth JWT" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Init and then auth the SDK with JWT token. Initializes SDK with default\nZoom UI. Use the function InitAuthSDKCustomizedUIFlag with flag set to true\nto use customized UI.\n\nReturn \"SDKERR_SUCCESS\" if init and auth request was sent successfully." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_InitAuthSDK_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "InitAuthSDK", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_InitAuthSDK_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_InitAuthSDK_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_InitAuthSDK_Statics::ZoomMeetingSDKBPLibrary_eventInitAuthSDK_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_InitAuthSDK_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_InitAuthSDK_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_InitAuthSDK_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_InitAuthSDK_Statics::ZoomMeetingSDKBPLibrary_eventInitAuthSDK_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_InitAuthSDK()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_InitAuthSDK_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_InitSDK_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventInitSDK_Parms
		{
			bool use_default_zoom_ui;
			bool ReturnValue;
		};
		static void NewProp_use_default_zoom_ui_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_use_default_zoom_ui;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_InitSDK_Statics::NewProp_use_default_zoom_ui_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventInitSDK_Parms*)Obj)->use_default_zoom_ui = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_InitSDK_Statics::NewProp_use_default_zoom_ui = { "use_default_zoom_ui", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventInitSDK_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_InitSDK_Statics::NewProp_use_default_zoom_ui_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_InitSDK_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventInitSDK_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_InitSDK_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventInitSDK_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_InitSDK_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_InitSDK_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_InitSDK_Statics::NewProp_use_default_zoom_ui,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_InitSDK_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_InitSDK_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | InitAuthController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n   * zoom_sdk.h\n   */// Initializes Zoom SDK. Initializes SDK with default Zoom UI. Use the\n// function InitSDKWithUIOption with flag set to false to use customized\n// UI.\n//\n// Returns \"SDKERR_SUCCESS\" if initialization succeeds.\n" },
#endif
		{ "CPP_Default_use_default_zoom_ui", "true" },
		{ "DisplayName", "Execute SDKInit function" },
		{ "Keywords", "ZoomMeetingSDK InitSDK" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* zoom_sdk.h\n// Initializes Zoom SDK. Initializes SDK with default Zoom UI. Use the\n// function InitSDKWithUIOption with flag set to false to use customized\n// UI.\n//\n// Returns \"SDKERR_SUCCESS\" if initialization succeeds." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_InitSDK_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "InitSDK", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_InitSDK_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_InitSDK_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_InitSDK_Statics::ZoomMeetingSDKBPLibrary_eventInitSDK_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_InitSDK_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_InitSDK_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_InitSDK_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_InitSDK_Statics::ZoomMeetingSDKBPLibrary_eventInitSDK_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_InitSDK()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_InitSDK_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_InviteBOUserReturnToMainSession_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventInviteBOUserReturnToMainSession_Parms
		{
			FString userID;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_userID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_InviteBOUserReturnToMainSession_Statics::NewProp_userID = { "userID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomMeetingSDKBPLibrary_eventInviteBOUserReturnToMainSession_Parms, userID), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_InviteBOUserReturnToMainSession_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventInviteBOUserReturnToMainSession_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_InviteBOUserReturnToMainSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventInviteBOUserReturnToMainSession_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_InviteBOUserReturnToMainSession_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_InviteBOUserReturnToMainSession_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_InviteBOUserReturnToMainSession_Statics::NewProp_userID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_InviteBOUserReturnToMainSession_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_InviteBOUserReturnToMainSession_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | BOAdmin" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Invite a BO user return to main session.\n//\n// Return \"SDKERR_SUCCESS\" if inviting the BO user return to main session\n// action was successful.\n" },
#endif
		{ "Keywords", "IBOAdmin.InviteBOUserReturnToMainSession" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Invite a BO user return to main session.\n\nReturn \"SDKERR_SUCCESS\" if inviting the BO user return to main session\naction was successful." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_InviteBOUserReturnToMainSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "InviteBOUserReturnToMainSession", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_InviteBOUserReturnToMainSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_InviteBOUserReturnToMainSession_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_InviteBOUserReturnToMainSession_Statics::ZoomMeetingSDKBPLibrary_eventInviteBOUserReturnToMainSession_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_InviteBOUserReturnToMainSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_InviteBOUserReturnToMainSession_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_InviteBOUserReturnToMainSession_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_InviteBOUserReturnToMainSession_Statics::ZoomMeetingSDKBPLibrary_eventInviteBOUserReturnToMainSession_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_InviteBOUserReturnToMainSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_InviteBOUserReturnToMainSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsAnnotationDisable_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventIsAnnotationDisable_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsAnnotationDisable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventIsAnnotationDisable_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsAnnotationDisable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventIsAnnotationDisable_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsAnnotationDisable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsAnnotationDisable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsAnnotationDisable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsAnnotationDisable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | MeetingAnnotation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n   * IAnnotationController\n   */" },
#endif
		{ "Keywords", "IAnnotationController.IsAnnotationDisable" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* IAnnotationController" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsAnnotationDisable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "IsAnnotationDisable", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsAnnotationDisable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsAnnotationDisable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsAnnotationDisable_Statics::ZoomMeetingSDKBPLibrary_eventIsAnnotationDisable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsAnnotationDisable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsAnnotationDisable_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsAnnotationDisable_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsAnnotationDisable_Statics::ZoomMeetingSDKBPLibrary_eventIsAnnotationDisable_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsAnnotationDisable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsAnnotationDisable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsAuthResultSuccess_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventIsAuthResultSuccess_Parms
		{
			FString result;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_result;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsAuthResultSuccess_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomMeetingSDKBPLibrary_eventIsAuthResultSuccess_Parms, result), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsAuthResultSuccess_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventIsAuthResultSuccess_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsAuthResultSuccess_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventIsAuthResultSuccess_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsAuthResultSuccess_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsAuthResultSuccess_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsAuthResultSuccess_Statics::NewProp_result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsAuthResultSuccess_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsAuthResultSuccess_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | Util" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Helper function to check the Auth result.\n//\n// Returns true if result is \"AUTHRET_SUCCESS\".\n" },
#endif
		{ "DisplayName", "Check Auth result" },
		{ "Keywords", "Zoom Helper Check Auth result" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Helper function to check the Auth result.\n\nReturns true if result is \"AUTHRET_SUCCESS\"." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsAuthResultSuccess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "IsAuthResultSuccess", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsAuthResultSuccess_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsAuthResultSuccess_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsAuthResultSuccess_Statics::ZoomMeetingSDKBPLibrary_eventIsAuthResultSuccess_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsAuthResultSuccess_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsAuthResultSuccess_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsAuthResultSuccess_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsAuthResultSuccess_Statics::ZoomMeetingSDKBPLibrary_eventIsAuthResultSuccess_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsAuthResultSuccess()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsAuthResultSuccess_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsBOEnabled_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventIsBOEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsBOEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventIsBOEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsBOEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventIsBOEnabled_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsBOEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsBOEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsBOEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsBOEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | MeetingBOController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n   * IMeetingBOController\n   */// Check if BO is enabled.\n//\n// Return TRUE if BO is enabled.\n" },
#endif
		{ "Keywords", "IMeetingBOController.IsBOEnabled" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* IMeetingBOController\n// Check if BO is enabled.\n//\n// Return TRUE if BO is enabled." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsBOEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "IsBOEnabled", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsBOEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsBOEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsBOEnabled_Statics::ZoomMeetingSDKBPLibrary_eventIsBOEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsBOEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsBOEnabled_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsBOEnabled_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsBOEnabled_Statics::ZoomMeetingSDKBPLibrary_eventIsBOEnabled_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsBOEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsBOEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsBOStarted_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventIsBOStarted_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsBOStarted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventIsBOStarted_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsBOStarted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventIsBOStarted_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsBOStarted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsBOStarted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsBOStarted_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsBOStarted_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | MeetingBOController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Check if BO has started.\n//\n// Return TRUE if BO has started.\n" },
#endif
		{ "Keywords", "IMeetingBOController.IsBOStarted" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check if BO has started.\n\nReturn TRUE if BO has started." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsBOStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "IsBOStarted", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsBOStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsBOStarted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsBOStarted_Statics::ZoomMeetingSDKBPLibrary_eventIsBOStarted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsBOStarted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsBOStarted_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsBOStarted_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsBOStarted_Statics::ZoomMeetingSDKBPLibrary_eventIsBOStarted_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsBOStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsBOStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsBOUserMyself_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventIsBOUserMyself_Parms
		{
			FString strUserID;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_strUserID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsBOUserMyself_Statics::NewProp_strUserID = { "strUserID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomMeetingSDKBPLibrary_eventIsBOUserMyself_Parms, strUserID), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsBOUserMyself_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventIsBOUserMyself_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsBOUserMyself_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventIsBOUserMyself_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsBOUserMyself_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsBOUserMyself_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsBOUserMyself_Statics::NewProp_strUserID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsBOUserMyself_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsBOUserMyself_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | BOData" },
		{ "Keywords", "IBOData.IsBOUserMyself" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsBOUserMyself_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "IsBOUserMyself", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsBOUserMyself_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsBOUserMyself_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsBOUserMyself_Statics::ZoomMeetingSDKBPLibrary_eventIsBOUserMyself_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsBOUserMyself_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsBOUserMyself_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsBOUserMyself_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsBOUserMyself_Statics::ZoomMeetingSDKBPLibrary_eventIsBOUserMyself_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsBOUserMyself()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsBOUserMyself_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsCanReturnMainSession_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventIsCanReturnMainSession_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsCanReturnMainSession_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventIsCanReturnMainSession_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsCanReturnMainSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventIsCanReturnMainSession_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsCanReturnMainSession_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsCanReturnMainSession_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsCanReturnMainSession_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsCanReturnMainSession_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | BOAttendee" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Check if the current user can return to the main session.\n//\n// Return TRUE is the user can return to the main session.\n" },
#endif
		{ "Keywords", "IBOAttendee.IsCanReturnMainSession" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check if the current user can return to the main session.\n\nReturn TRUE is the user can return to the main session." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsCanReturnMainSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "IsCanReturnMainSession", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsCanReturnMainSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsCanReturnMainSession_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsCanReturnMainSession_Statics::ZoomMeetingSDKBPLibrary_eventIsCanReturnMainSession_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsCanReturnMainSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsCanReturnMainSession_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsCanReturnMainSession_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsCanReturnMainSession_Statics::ZoomMeetingSDKBPLibrary_eventIsCanReturnMainSession_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsCanReturnMainSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsCanReturnMainSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsChatMessageCanBeDeleted_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventIsChatMessageCanBeDeleted_Parms
		{
			FString msgID;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_msgID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsChatMessageCanBeDeleted_Statics::NewProp_msgID = { "msgID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomMeetingSDKBPLibrary_eventIsChatMessageCanBeDeleted_Parms, msgID), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsChatMessageCanBeDeleted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventIsChatMessageCanBeDeleted_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsChatMessageCanBeDeleted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventIsChatMessageCanBeDeleted_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsChatMessageCanBeDeleted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsChatMessageCanBeDeleted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsChatMessageCanBeDeleted_Statics::NewProp_msgID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsChatMessageCanBeDeleted_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsChatMessageCanBeDeleted_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | MeetingChatController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Check if a message can be deleted.\n//\n// Return TRUE if the message can be deleted.\n" },
#endif
		{ "Keywords", "IMeetingChatController.IsChatMessageCanBeDeleted" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check if a message can be deleted.\n\nReturn TRUE if the message can be deleted." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsChatMessageCanBeDeleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "IsChatMessageCanBeDeleted", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsChatMessageCanBeDeleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsChatMessageCanBeDeleted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsChatMessageCanBeDeleted_Statics::ZoomMeetingSDKBPLibrary_eventIsChatMessageCanBeDeleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsChatMessageCanBeDeleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsChatMessageCanBeDeleted_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsChatMessageCanBeDeleted_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsChatMessageCanBeDeleted_Statics::ZoomMeetingSDKBPLibrary_eventIsChatMessageCanBeDeleted_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsChatMessageCanBeDeleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsChatMessageCanBeDeleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsEmojiReactionEnabled_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventIsEmojiReactionEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsEmojiReactionEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventIsEmojiReactionEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsEmojiReactionEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventIsEmojiReactionEnabled_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsEmojiReactionEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsEmojiReactionEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsEmojiReactionEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsEmojiReactionEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | MeetingEmojiReactionController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Check if emoji reaction is enabled.\n//\n// Return TRUE if emoji reaction is enabled.\n" },
#endif
		{ "DisplayName", "Is emoji reaction enabled" },
		{ "Keywords", "IMeetingEmojiReactionController.IsEmojiReactionEnabled" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check if emoji reaction is enabled.\n\nReturn TRUE if emoji reaction is enabled." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsEmojiReactionEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "IsEmojiReactionEnabled", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsEmojiReactionEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsEmojiReactionEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsEmojiReactionEnabled_Statics::ZoomMeetingSDKBPLibrary_eventIsEmojiReactionEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsEmojiReactionEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsEmojiReactionEnabled_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsEmojiReactionEnabled_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsEmojiReactionEnabled_Statics::ZoomMeetingSDKBPLibrary_eventIsEmojiReactionEnabled_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsEmojiReactionEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsEmojiReactionEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsHostInThisBO_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventIsHostInThisBO_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsHostInThisBO_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventIsHostInThisBO_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsHostInThisBO_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventIsHostInThisBO_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsHostInThisBO_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsHostInThisBO_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsHostInThisBO_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsHostInThisBO_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | BOAttendee" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Check if the host is in this BO.\n//\n// Return TRUE is the host is in the current BO.\n" },
#endif
		{ "Keywords", "IBOAttendee.IsHostInThisBO" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check if the host is in this BO.\n\nReturn TRUE is the host is in the current BO." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsHostInThisBO_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "IsHostInThisBO", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsHostInThisBO_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsHostInThisBO_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsHostInThisBO_Statics::ZoomMeetingSDKBPLibrary_eventIsHostInThisBO_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsHostInThisBO_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsHostInThisBO_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsHostInThisBO_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsHostInThisBO_Statics::ZoomMeetingSDKBPLibrary_eventIsHostInThisBO_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsHostInThisBO()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsHostInThisBO_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsInBOMeeting_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventIsInBOMeeting_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsInBOMeeting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventIsInBOMeeting_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsInBOMeeting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventIsInBOMeeting_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsInBOMeeting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsInBOMeeting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsInBOMeeting_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsInBOMeeting_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | MeetingBOController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Check if currently is in the BO.\n//\n// Return TRUE if currently in the BO.\n" },
#endif
		{ "Keywords", "IMeetingBOController.IsInBOMeeting" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check if currently is in the BO.\n\nReturn TRUE if currently in the BO." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsInBOMeeting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "IsInBOMeeting", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsInBOMeeting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsInBOMeeting_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsInBOMeeting_Statics::ZoomMeetingSDKBPLibrary_eventIsInBOMeeting_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsInBOMeeting_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsInBOMeeting_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsInBOMeeting_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsInBOMeeting_Statics::ZoomMeetingSDKBPLibrary_eventIsInBOMeeting_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsInBOMeeting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsInBOMeeting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsSDKErrorSuccess_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventIsSDKErrorSuccess_Parms
		{
			FString result;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_result;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsSDKErrorSuccess_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomMeetingSDKBPLibrary_eventIsSDKErrorSuccess_Parms, result), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsSDKErrorSuccess_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventIsSDKErrorSuccess_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsSDKErrorSuccess_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventIsSDKErrorSuccess_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsSDKErrorSuccess_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsSDKErrorSuccess_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsSDKErrorSuccess_Statics::NewProp_result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsSDKErrorSuccess_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsSDKErrorSuccess_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | Util" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Helper function to check the SDKError result.\n//\n// Returns true if result is \"SDKERR_SUCCESS\".\n" },
#endif
		{ "DisplayName", "Check if the SDK error return is SUCCESS" },
		{ "Keywords", "Zoom Helper Check SDK Error" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Helper function to check the SDKError result.\n\nReturns true if result is \"SDKERR_SUCCESS\"." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsSDKErrorSuccess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "IsSDKErrorSuccess", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsSDKErrorSuccess_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsSDKErrorSuccess_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsSDKErrorSuccess_Statics::ZoomMeetingSDKBPLibrary_eventIsSDKErrorSuccess_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsSDKErrorSuccess_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsSDKErrorSuccess_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsSDKErrorSuccess_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsSDKErrorSuccess_Statics::ZoomMeetingSDKBPLibrary_eventIsSDKErrorSuccess_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsSDKErrorSuccess()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsSDKErrorSuccess_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsSupportImmersive_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventIsSupportImmersive_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsSupportImmersive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventIsSupportImmersive_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsSupportImmersive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventIsSupportImmersive_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsSupportImmersive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsSupportImmersive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsSupportImmersive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsSupportImmersive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | MeetingCustomImmersive" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n   * ICustomImmersiveController\n   */" },
#endif
		{ "Keywords", "ICustomImmersiveController.isSupportImmersive" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* ICustomImmersiveController" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsSupportImmersive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "IsSupportImmersive", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsSupportImmersive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsSupportImmersive_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsSupportImmersive_Statics::ZoomMeetingSDKBPLibrary_eventIsSupportImmersive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsSupportImmersive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsSupportImmersive_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsSupportImmersive_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsSupportImmersive_Statics::ZoomMeetingSDKBPLibrary_eventIsSupportImmersive_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsSupportImmersive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsSupportImmersive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsUserSubscribedToVideo_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventIsUserSubscribedToVideo_Parms
		{
			int64 userId;
			ZOOM_SDK_RAW_DATA_TYPE raw_data_type;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_userId;
		static const UECodeGen_Private::FBytePropertyParams NewProp_raw_data_type_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_raw_data_type;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsUserSubscribedToVideo_Statics::NewProp_userId = { "userId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomMeetingSDKBPLibrary_eventIsUserSubscribedToVideo_Parms, userId), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsUserSubscribedToVideo_Statics::NewProp_raw_data_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsUserSubscribedToVideo_Statics::NewProp_raw_data_type = { "raw_data_type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomMeetingSDKBPLibrary_eventIsUserSubscribedToVideo_Parms, raw_data_type), Z_Construct_UEnum_ZoomMeetingSDK_ZOOM_SDK_RAW_DATA_TYPE, METADATA_PARAMS(0, nullptr) }; // 1620386359
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsUserSubscribedToVideo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventIsUserSubscribedToVideo_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsUserSubscribedToVideo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventIsUserSubscribedToVideo_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsUserSubscribedToVideo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsUserSubscribedToVideo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsUserSubscribedToVideo_Statics::NewProp_userId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsUserSubscribedToVideo_Statics::NewProp_raw_data_type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsUserSubscribedToVideo_Statics::NewProp_raw_data_type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsUserSubscribedToVideo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsUserSubscribedToVideo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | ZoomSDKRenderer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Checks if the user is subscribed to a video renderer.\n//\n// Returns true if user is subscribed to a video renderer.\n" },
#endif
		{ "CPP_Default_raw_data_type", "ZoomSDKRawDataType_Video" },
		{ "DisplayName", "Is user subscribed to video" },
		{ "Keywords", "IZoomSDKRenderer.IsUserSubscribedToVideo" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks if the user is subscribed to a video renderer.\n\nReturns true if user is subscribed to a video renderer." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsUserSubscribedToVideo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "IsUserSubscribedToVideo", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsUserSubscribedToVideo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsUserSubscribedToVideo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsUserSubscribedToVideo_Statics::ZoomMeetingSDKBPLibrary_eventIsUserSubscribedToVideo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsUserSubscribedToVideo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsUserSubscribedToVideo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsUserSubscribedToVideo_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsUserSubscribedToVideo_Statics::ZoomMeetingSDKBPLibrary_eventIsUserSubscribedToVideo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsUserSubscribedToVideo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsUserSubscribedToVideo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsValid_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventIsValid_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventIsValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventIsValid_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsValid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | CameraController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Check if the current control is valid.\n//\n// Return TRUE if it is valid, otherwise not.\n" },
#endif
		{ "Keywords", "ICameraController.IsValid" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check if the current control is valid.\n\nReturn TRUE if it is valid, otherwise not." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "IsValid", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsValid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsValid_Statics::ZoomMeetingSDKBPLibrary_eventIsValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsValid_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsValid_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsValid_Statics::ZoomMeetingSDKBPLibrary_eventIsValid_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_JoinBOByUserRequest_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventJoinBOByUserRequest_Parms
		{
			FString userID;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_userID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_JoinBOByUserRequest_Statics::NewProp_userID = { "userID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomMeetingSDKBPLibrary_eventJoinBOByUserRequest_Parms, userID), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_JoinBOByUserRequest_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventJoinBOByUserRequest_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_JoinBOByUserRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventJoinBOByUserRequest_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_JoinBOByUserRequest_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_JoinBOByUserRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_JoinBOByUserRequest_Statics::NewProp_userID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_JoinBOByUserRequest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_JoinBOByUserRequest_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | BOAdmin" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Join a BO by user request.\n//\n// Return \"SDKERR_SUCCESS\" if joining BO by user request action was\n// successful.\n" },
#endif
		{ "Keywords", "IBOAdmin.JoinBOByUserRequest" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Join a BO by user request.\n\nReturn \"SDKERR_SUCCESS\" if joining BO by user request action was\nsuccessful." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_JoinBOByUserRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "JoinBOByUserRequest", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_JoinBOByUserRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_JoinBOByUserRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_JoinBOByUserRequest_Statics::ZoomMeetingSDKBPLibrary_eventJoinBOByUserRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_JoinBOByUserRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_JoinBOByUserRequest_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_JoinBOByUserRequest_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_JoinBOByUserRequest_Statics::ZoomMeetingSDKBPLibrary_eventJoinBOByUserRequest_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_JoinBOByUserRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_JoinBOByUserRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_JoinMeeting_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventJoinMeeting_Parms
		{
			FString meetingNumber;
			FString passcode;
			FString userName;
			FString zakToken;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_meetingNumber;
		static const UECodeGen_Private::FStrPropertyParams NewProp_passcode;
		static const UECodeGen_Private::FStrPropertyParams NewProp_userName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_zakToken;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_JoinMeeting_Statics::NewProp_meetingNumber = { "meetingNumber", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomMeetingSDKBPLibrary_eventJoinMeeting_Parms, meetingNumber), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_JoinMeeting_Statics::NewProp_passcode = { "passcode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomMeetingSDKBPLibrary_eventJoinMeeting_Parms, passcode), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_JoinMeeting_Statics::NewProp_userName = { "userName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomMeetingSDKBPLibrary_eventJoinMeeting_Parms, userName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_JoinMeeting_Statics::NewProp_zakToken = { "zakToken", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomMeetingSDKBPLibrary_eventJoinMeeting_Parms, zakToken), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_JoinMeeting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventJoinMeeting_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_JoinMeeting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventJoinMeeting_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_JoinMeeting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_JoinMeeting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_JoinMeeting_Statics::NewProp_meetingNumber,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_JoinMeeting_Statics::NewProp_passcode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_JoinMeeting_Statics::NewProp_userName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_JoinMeeting_Statics::NewProp_zakToken,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_JoinMeeting_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_JoinMeeting_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | MeetingServiceController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Joins a given meeting.\n//\n// Returns \"SDKERR_SUCCESS\" if join was successful.\n" },
#endif
		{ "DisplayName", "Execute Zoom Join Meeting" },
		{ "Keywords", "IMeetingService.JoinMeeting" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Joins a given meeting.\n\nReturns \"SDKERR_SUCCESS\" if join was successful." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_JoinMeeting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "JoinMeeting", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_JoinMeeting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_JoinMeeting_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_JoinMeeting_Statics::ZoomMeetingSDKBPLibrary_eventJoinMeeting_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_JoinMeeting_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_JoinMeeting_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_JoinMeeting_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_JoinMeeting_Statics::ZoomMeetingSDKBPLibrary_eventJoinMeeting_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_JoinMeeting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_JoinMeeting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_JoinZoomEventMeeting_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventJoinZoomEventMeeting_Parms
		{
			FString zoomEventToken;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_zoomEventToken;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_JoinZoomEventMeeting_Statics::NewProp_zoomEventToken = { "zoomEventToken", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomMeetingSDKBPLibrary_eventJoinZoomEventMeeting_Parms, zoomEventToken), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_JoinZoomEventMeeting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventJoinZoomEventMeeting_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_JoinZoomEventMeeting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventJoinZoomEventMeeting_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_JoinZoomEventMeeting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_JoinZoomEventMeeting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_JoinZoomEventMeeting_Statics::NewProp_zoomEventToken,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_JoinZoomEventMeeting_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_JoinZoomEventMeeting_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | MeetingServiceController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Joins a Zoom Event meeting.\n//\n// Returns TRUE if join was successful.\n" },
#endif
		{ "DisplayName", "Join Zoom Event Meeting" },
		{ "Keywords", "IMeetingService.JoinZoomEventMeeting" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Joins a Zoom Event meeting.\n\nReturns TRUE if join was successful." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_JoinZoomEventMeeting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "JoinZoomEventMeeting", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_JoinZoomEventMeeting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_JoinZoomEventMeeting_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_JoinZoomEventMeeting_Statics::ZoomMeetingSDKBPLibrary_eventJoinZoomEventMeeting_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_JoinZoomEventMeeting_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_JoinZoomEventMeeting_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_JoinZoomEventMeeting_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_JoinZoomEventMeeting_Statics::ZoomMeetingSDKBPLibrary_eventJoinZoomEventMeeting_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_JoinZoomEventMeeting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_JoinZoomEventMeeting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_LeaveMeeting_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventLeaveMeeting_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_LeaveMeeting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventLeaveMeeting_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_LeaveMeeting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventLeaveMeeting_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_LeaveMeeting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_LeaveMeeting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_LeaveMeeting_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_LeaveMeeting_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | MeetingServiceController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Leaves the existing meeting.\n//\n// Returns \"SDKERR_SUCCESS\" if leaving the meeting was successful.\n" },
#endif
		{ "DisplayName", "Execute Zoom Leave Meeting" },
		{ "Keywords", "IMeetingService.LeaveMeeting" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Leaves the existing meeting.\n\nReturns \"SDKERR_SUCCESS\" if leaving the meeting was successful." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_LeaveMeeting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "LeaveMeeting", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_LeaveMeeting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_LeaveMeeting_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_LeaveMeeting_Statics::ZoomMeetingSDKBPLibrary_eventLeaveMeeting_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_LeaveMeeting_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_LeaveMeeting_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_LeaveMeeting_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_LeaveMeeting_Statics::ZoomMeetingSDKBPLibrary_eventLeaveMeeting_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_LeaveMeeting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_LeaveMeeting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_LogOut_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventLogOut_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_LogOut_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventLogOut_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_LogOut_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventLogOut_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_LogOut_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_LogOut_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_LogOut_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_LogOut_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | InitAuthController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Logout of the logged-in user.\n//\n// Return \"SDKERR_SUCCESS\" if the logout was successful.\n" },
#endif
		{ "DisplayName", "SDK Logout" },
		{ "Keywords", "IAuthService.LogOut" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Logout of the logged-in user.\n\nReturn \"SDKERR_SUCCESS\" if the logout was successful." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_LogOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "LogOut", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_LogOut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_LogOut_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_LogOut_Statics::ZoomMeetingSDKBPLibrary_eventLogOut_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_LogOut_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_LogOut_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_LogOut_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_LogOut_Statics::ZoomMeetingSDKBPLibrary_eventLogOut_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_LogOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_LogOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_LowerAllHands_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventLowerAllHands_Parms
		{
			bool forWebinarAttendees;
			bool ReturnValue;
		};
		static void NewProp_forWebinarAttendees_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_forWebinarAttendees;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_LowerAllHands_Statics::NewProp_forWebinarAttendees_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventLowerAllHands_Parms*)Obj)->forWebinarAttendees = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_LowerAllHands_Statics::NewProp_forWebinarAttendees = { "forWebinarAttendees", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventLowerAllHands_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_LowerAllHands_Statics::NewProp_forWebinarAttendees_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_LowerAllHands_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventLowerAllHands_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_LowerAllHands_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventLowerAllHands_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_LowerAllHands_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_LowerAllHands_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_LowerAllHands_Statics::NewProp_forWebinarAttendees,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_LowerAllHands_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_LowerAllHands_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | MeetingParticipantsController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Lowers all hands.\n//\n// Return \"SDK_SUCCESS\" if lowering all hands from participants is successful.\n" },
#endif
		{ "DisplayName", "Lower All Hands" },
		{ "Keywords", "IMeetingParticipantsController.LowerAllHands" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Lowers all hands.\n\nReturn \"SDK_SUCCESS\" if lowering all hands from participants is successful." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_LowerAllHands_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "LowerAllHands", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_LowerAllHands_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_LowerAllHands_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_LowerAllHands_Statics::ZoomMeetingSDKBPLibrary_eventLowerAllHands_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_LowerAllHands_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_LowerAllHands_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_LowerAllHands_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_LowerAllHands_Statics::ZoomMeetingSDKBPLibrary_eventLowerAllHands_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_LowerAllHands()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_LowerAllHands_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_LowerHand_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventLowerHand_Parms
		{
			int64 user_id;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_user_id;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_LowerHand_Statics::NewProp_user_id = { "user_id", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomMeetingSDKBPLibrary_eventLowerHand_Parms, user_id), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_LowerHand_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventLowerHand_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_LowerHand_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventLowerHand_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_LowerHand_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_LowerHand_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_LowerHand_Statics::NewProp_user_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_LowerHand_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_LowerHand_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | MeetingParticipantsController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Lowers hand.\n//\n// Return \"SDK_SUCCESS\" if lowering hand from a participant is successful.\n" },
#endif
		{ "DisplayName", "Lower Hand" },
		{ "Keywords", "IMeetingParticipantsController.LowerHand" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Lowers hand.\n\nReturn \"SDK_SUCCESS\" if lowering hand from a participant is successful." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_LowerHand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "LowerHand", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_LowerHand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_LowerHand_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_LowerHand_Statics::ZoomMeetingSDKBPLibrary_eventLowerHand_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_LowerHand_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_LowerHand_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_LowerHand_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_LowerHand_Statics::ZoomMeetingSDKBPLibrary_eventLowerHand_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_LowerHand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_LowerHand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_MuteAudio_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventMuteAudio_Parms
		{
			int32 userID;
			bool allowUnmuteBySelf;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_userID;
		static void NewProp_allowUnmuteBySelf_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_allowUnmuteBySelf;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_MuteAudio_Statics::NewProp_userID = { "userID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomMeetingSDKBPLibrary_eventMuteAudio_Parms, userID), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_MuteAudio_Statics::NewProp_allowUnmuteBySelf_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventMuteAudio_Parms*)Obj)->allowUnmuteBySelf = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_MuteAudio_Statics::NewProp_allowUnmuteBySelf = { "allowUnmuteBySelf", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventMuteAudio_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_MuteAudio_Statics::NewProp_allowUnmuteBySelf_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_MuteAudio_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventMuteAudio_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_MuteAudio_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventMuteAudio_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_MuteAudio_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_MuteAudio_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_MuteAudio_Statics::NewProp_userID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_MuteAudio_Statics::NewProp_allowUnmuteBySelf,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_MuteAudio_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_MuteAudio_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | MeetingAudioController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Mute the audio of an user. Only Host/Co-host can mute others.\n//\n// Return TRUE if the user is muted.\n" },
#endif
		{ "Keywords", "IMeetingAudioController.MuteAudio" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mute the audio of an user. Only Host/Co-host can mute others.\n\nReturn TRUE if the user is muted." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_MuteAudio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "MuteAudio", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_MuteAudio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_MuteAudio_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_MuteAudio_Statics::ZoomMeetingSDKBPLibrary_eventMuteAudio_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_MuteAudio_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_MuteAudio_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_MuteAudio_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_MuteAudio_Statics::ZoomMeetingSDKBPLibrary_eventMuteAudio_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_MuteAudio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_MuteAudio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_MuteVideo_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventMuteVideo_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_MuteVideo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventMuteVideo_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_MuteVideo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventMuteVideo_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_MuteVideo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_MuteVideo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_MuteVideo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_MuteVideo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | MeetingVideoController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Mute video.\n//\n// Returns \"SDK_SUCCESS if mute own video was successful.\n" },
#endif
		{ "DisplayName", "Mute video" },
		{ "Keywords", "Mute video" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mute video.\n\nReturns \"SDK_SUCCESS if mute own video was successful." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_MuteVideo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "MuteVideo", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_MuteVideo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_MuteVideo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_MuteVideo_Statics::ZoomMeetingSDKBPLibrary_eventMuteVideo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_MuteVideo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_MuteVideo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_MuteVideo_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_MuteVideo_Statics::ZoomMeetingSDKBPLibrary_eventMuteVideo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_MuteVideo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_MuteVideo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_PutInWaitingRoom_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventPutInWaitingRoom_Parms
		{
			int64 user_id;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_user_id;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_PutInWaitingRoom_Statics::NewProp_user_id = { "user_id", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomMeetingSDKBPLibrary_eventPutInWaitingRoom_Parms, user_id), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_PutInWaitingRoom_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventPutInWaitingRoom_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_PutInWaitingRoom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventPutInWaitingRoom_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_PutInWaitingRoom_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_PutInWaitingRoom_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_PutInWaitingRoom_Statics::NewProp_user_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_PutInWaitingRoom_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_PutInWaitingRoom_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | MeetingWaitingRoomController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Put user in waiting room\n//\n// Returns \"SDK_SUCCESS\" if specified user to enter the waiting room is\n// enabled\n" },
#endif
		{ "DisplayName", "PutInWaitingRoom" },
		{ "Keywords", "IMeetingWaitingRoomController.PutInWaitingRoom" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Put user in waiting room\n\nReturns \"SDK_SUCCESS\" if specified user to enter the waiting room is\nenabled" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_PutInWaitingRoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "PutInWaitingRoom", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_PutInWaitingRoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_PutInWaitingRoom_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_PutInWaitingRoom_Statics::ZoomMeetingSDKBPLibrary_eventPutInWaitingRoom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_PutInWaitingRoom_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_PutInWaitingRoom_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_PutInWaitingRoom_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_PutInWaitingRoom_Statics::ZoomMeetingSDKBPLibrary_eventPutInWaitingRoom_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_PutInWaitingRoom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_PutInWaitingRoom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_RemoveBO_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventRemoveBO_Parms
		{
			FString strBOID;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_strBOID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_RemoveBO_Statics::NewProp_strBOID = { "strBOID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomMeetingSDKBPLibrary_eventRemoveBO_Parms, strBOID), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_RemoveBO_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventRemoveBO_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_RemoveBO_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventRemoveBO_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_RemoveBO_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_RemoveBO_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_RemoveBO_Statics::NewProp_strBOID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_RemoveBO_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_RemoveBO_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | BOCreator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Remove a BO.\n//\n// Return TRUE if the removal was successful.\n" },
#endif
		{ "Keywords", "IBOCreator.RemoveBO" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Remove a BO.\n\nReturn TRUE if the removal was successful." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_RemoveBO_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "RemoveBO", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_RemoveBO_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_RemoveBO_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_RemoveBO_Statics::ZoomMeetingSDKBPLibrary_eventRemoveBO_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_RemoveBO_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_RemoveBO_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_RemoveBO_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_RemoveBO_Statics::ZoomMeetingSDKBPLibrary_eventRemoveBO_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_RemoveBO()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_RemoveBO_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_RemoveUserFromBO_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventRemoveUserFromBO_Parms
		{
			FString strUserID;
			FString strBOID;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_strUserID;
		static const UECodeGen_Private::FStrPropertyParams NewProp_strBOID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_RemoveUserFromBO_Statics::NewProp_strUserID = { "strUserID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomMeetingSDKBPLibrary_eventRemoveUserFromBO_Parms, strUserID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_RemoveUserFromBO_Statics::NewProp_strBOID = { "strBOID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomMeetingSDKBPLibrary_eventRemoveUserFromBO_Parms, strBOID), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_RemoveUserFromBO_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventRemoveUserFromBO_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_RemoveUserFromBO_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventRemoveUserFromBO_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_RemoveUserFromBO_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_RemoveUserFromBO_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_RemoveUserFromBO_Statics::NewProp_strUserID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_RemoveUserFromBO_Statics::NewProp_strBOID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_RemoveUserFromBO_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_RemoveUserFromBO_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | BOCreator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Remove user from BO.\n//\n// Return TRUE is removing a user from BO was successful.\n" },
#endif
		{ "Keywords", "IBOCreator.RemoveUserFromBO" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Remove user from BO.\n\nReturn TRUE is removing a user from BO was successful." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_RemoveUserFromBO_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "RemoveUserFromBO", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_RemoveUserFromBO_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_RemoveUserFromBO_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_RemoveUserFromBO_Statics::ZoomMeetingSDKBPLibrary_eventRemoveUserFromBO_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_RemoveUserFromBO_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_RemoveUserFromBO_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_RemoveUserFromBO_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_RemoveUserFromBO_Statics::ZoomMeetingSDKBPLibrary_eventRemoveUserFromBO_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_RemoveUserFromBO()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_RemoveUserFromBO_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_RequestLocalRecordingPrivilege_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventRequestLocalRecordingPrivilege_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_RequestLocalRecordingPrivilege_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventRequestLocalRecordingPrivilege_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_RequestLocalRecordingPrivilege_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventRequestLocalRecordingPrivilege_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_RequestLocalRecordingPrivilege_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_RequestLocalRecordingPrivilege_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_RequestLocalRecordingPrivilege_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_RequestLocalRecordingPrivilege_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | MeetingRecordingController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Request local recording privilege.\n//\n// Return true if requesting local recording privilege was successful.\n" },
#endif
		{ "DisplayName", "RequestLocalRecordingPrivilege" },
		{ "Keywords", "Request Local Recording Privilege" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Request local recording privilege.\n\nReturn true if requesting local recording privilege was successful." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_RequestLocalRecordingPrivilege_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "RequestLocalRecordingPrivilege", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_RequestLocalRecordingPrivilege_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_RequestLocalRecordingPrivilege_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_RequestLocalRecordingPrivilege_Statics::ZoomMeetingSDKBPLibrary_eventRequestLocalRecordingPrivilege_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_RequestLocalRecordingPrivilege_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_RequestLocalRecordingPrivilege_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_RequestLocalRecordingPrivilege_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_RequestLocalRecordingPrivilege_Statics::ZoomMeetingSDKBPLibrary_eventRequestLocalRecordingPrivilege_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_RequestLocalRecordingPrivilege()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_RequestLocalRecordingPrivilege_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SDKAuthJWT_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventSDKAuthJWT_Parms
		{
			FString jwt;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_jwt;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SDKAuthJWT_Statics::NewProp_jwt = { "jwt", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomMeetingSDKBPLibrary_eventSDKAuthJWT_Parms, jwt), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SDKAuthJWT_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventSDKAuthJWT_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SDKAuthJWT_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventSDKAuthJWT_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SDKAuthJWT_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SDKAuthJWT_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SDKAuthJWT_Statics::NewProp_jwt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SDKAuthJWT_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SDKAuthJWT_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | InitAuthController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n   * IAuthService\n   */// Auth SDK with JWT token.\n//\n// Return \"SDKERR_SUCCESS\" if auth request was sent successfully.\n" },
#endif
		{ "DisplayName", "Execute SDK Auth JWT function" },
		{ "Keywords", "IAuthService.SDKAuth JWT" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* IAuthService\n// Auth SDK with JWT token.\n//\n// Return \"SDKERR_SUCCESS\" if auth request was sent successfully." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SDKAuthJWT_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "SDKAuthJWT", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SDKAuthJWT_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SDKAuthJWT_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SDKAuthJWT_Statics::ZoomMeetingSDKBPLibrary_eventSDKAuthJWT_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SDKAuthJWT_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SDKAuthJWT_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SDKAuthJWT_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SDKAuthJWT_Statics::ZoomMeetingSDKBPLibrary_eventSDKAuthJWT_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SDKAuthJWT()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SDKAuthJWT_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SendChatMessage_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventSendChatMessage_Parms
		{
			FString content;
			int64 receiver;
			FString chatType;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_content;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_receiver;
		static const UECodeGen_Private::FStrPropertyParams NewProp_chatType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SendChatMessage_Statics::NewProp_content = { "content", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomMeetingSDKBPLibrary_eventSendChatMessage_Parms, content), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SendChatMessage_Statics::NewProp_receiver = { "receiver", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomMeetingSDKBPLibrary_eventSendChatMessage_Parms, receiver), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SendChatMessage_Statics::NewProp_chatType = { "chatType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomMeetingSDKBPLibrary_eventSendChatMessage_Parms, chatType), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SendChatMessage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventSendChatMessage_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SendChatMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventSendChatMessage_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SendChatMessage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SendChatMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SendChatMessage_Statics::NewProp_content,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SendChatMessage_Statics::NewProp_receiver,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SendChatMessage_Statics::NewProp_chatType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SendChatMessage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SendChatMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | MeetingChatController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Send chat message.\n//\n// Returns \"SDKERR_SUCCESS\" if sending chat message was successful.\n" },
#endif
		{ "DisplayName", "Send chat message" },
		{ "Keywords", "IMeetingChatController.SendChatMessage" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Send chat message.\n\nReturns \"SDKERR_SUCCESS\" if sending chat message was successful." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SendChatMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "SendChatMessage", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SendChatMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SendChatMessage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SendChatMessage_Statics::ZoomMeetingSDKBPLibrary_eventSendChatMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SendChatMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SendChatMessage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SendChatMessage_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SendChatMessage_Statics::ZoomMeetingSDKBPLibrary_eventSendChatMessage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SendChatMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SendChatMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SendEmojiFeedback_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventSendEmojiFeedback_Parms
		{
			SDK_EMOJI_FEEDBACK_TYPE type;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_type_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_type;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SendEmojiFeedback_Statics::NewProp_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SendEmojiFeedback_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomMeetingSDKBPLibrary_eventSendEmojiFeedback_Parms, type), Z_Construct_UEnum_ZoomMeetingSDK_SDK_EMOJI_FEEDBACK_TYPE, METADATA_PARAMS(0, nullptr) }; // 502641630
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SendEmojiFeedback_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventSendEmojiFeedback_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SendEmojiFeedback_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventSendEmojiFeedback_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SendEmojiFeedback_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SendEmojiFeedback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SendEmojiFeedback_Statics::NewProp_type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SendEmojiFeedback_Statics::NewProp_type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SendEmojiFeedback_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SendEmojiFeedback_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | MeetingEmojiReactionController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Send emoji feedback.\n//\n// Return TRUE if sending an emoji feedback was successful.\n" },
#endif
		{ "DisplayName", "Send emoji feedback" },
		{ "Keywords", "IMeetingEmojiReactionController.SendEmojiFeedback" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Send emoji feedback.\n\nReturn TRUE if sending an emoji feedback was successful." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SendEmojiFeedback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "SendEmojiFeedback", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SendEmojiFeedback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SendEmojiFeedback_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SendEmojiFeedback_Statics::ZoomMeetingSDKBPLibrary_eventSendEmojiFeedback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SendEmojiFeedback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SendEmojiFeedback_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SendEmojiFeedback_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SendEmojiFeedback_Statics::ZoomMeetingSDKBPLibrary_eventSendEmojiFeedback_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SendEmojiFeedback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SendEmojiFeedback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SendEmojiReaction_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventSendEmojiReaction_Parms
		{
			SDK_EMOJI_REACTION_TYPE type;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_type_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_type;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SendEmojiReaction_Statics::NewProp_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SendEmojiReaction_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomMeetingSDKBPLibrary_eventSendEmojiReaction_Parms, type), Z_Construct_UEnum_ZoomMeetingSDK_SDK_EMOJI_REACTION_TYPE, METADATA_PARAMS(0, nullptr) }; // 2268286005
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SendEmojiReaction_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventSendEmojiReaction_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SendEmojiReaction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventSendEmojiReaction_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SendEmojiReaction_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SendEmojiReaction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SendEmojiReaction_Statics::NewProp_type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SendEmojiReaction_Statics::NewProp_type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SendEmojiReaction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SendEmojiReaction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | MeetingEmojiReactionController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Send emoji reaction.\n//\n// Return TRUE if sending an emoji reaction was successful.  \n" },
#endif
		{ "DisplayName", "Send emoji reaction" },
		{ "Keywords", "IMeetingEmojiReactionController.SendEmojiReaction" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Send emoji reaction.\n\nReturn TRUE if sending an emoji reaction was successful." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SendEmojiReaction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "SendEmojiReaction", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SendEmojiReaction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SendEmojiReaction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SendEmojiReaction_Statics::ZoomMeetingSDKBPLibrary_eventSendEmojiReaction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SendEmojiReaction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SendEmojiReaction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SendEmojiReaction_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SendEmojiReaction_Statics::ZoomMeetingSDKBPLibrary_eventSendEmojiReaction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SendEmojiReaction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SendEmojiReaction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SetInstance_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventSetInstance_Parms
		{
			UZoomMeetingSDKBPLibrary* pInstance;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_pInstance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SetInstance_Statics::NewProp_pInstance = { "pInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomMeetingSDKBPLibrary_eventSetInstance_Parms, pInstance), Z_Construct_UClass_UZoomMeetingSDKBPLibrary_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SetInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SetInstance_Statics::NewProp_pInstance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SetInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | Util" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SetInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "SetInstance", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SetInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SetInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SetInstance_Statics::ZoomMeetingSDKBPLibrary_eventSetInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SetInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SetInstance_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SetInstance_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SetInstance_Statics::ZoomMeetingSDKBPLibrary_eventSetInstance_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SetInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SetInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SetRawDataResolution_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventSetRawDataResolution_Parms
		{
			int64 userId;
			RAW_DATA_RESOLUTION resolution;
			ZOOM_SDK_RAW_DATA_TYPE raw_data_type;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_userId;
		static const UECodeGen_Private::FBytePropertyParams NewProp_resolution_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_resolution;
		static const UECodeGen_Private::FBytePropertyParams NewProp_raw_data_type_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_raw_data_type;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SetRawDataResolution_Statics::NewProp_userId = { "userId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomMeetingSDKBPLibrary_eventSetRawDataResolution_Parms, userId), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SetRawDataResolution_Statics::NewProp_resolution_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SetRawDataResolution_Statics::NewProp_resolution = { "resolution", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomMeetingSDKBPLibrary_eventSetRawDataResolution_Parms, resolution), Z_Construct_UEnum_ZoomMeetingSDK_RAW_DATA_RESOLUTION, METADATA_PARAMS(0, nullptr) }; // 3245310654
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SetRawDataResolution_Statics::NewProp_raw_data_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SetRawDataResolution_Statics::NewProp_raw_data_type = { "raw_data_type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomMeetingSDKBPLibrary_eventSetRawDataResolution_Parms, raw_data_type), Z_Construct_UEnum_ZoomMeetingSDK_ZOOM_SDK_RAW_DATA_TYPE, METADATA_PARAMS(0, nullptr) }; // 1620386359
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SetRawDataResolution_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventSetRawDataResolution_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SetRawDataResolution_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventSetRawDataResolution_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SetRawDataResolution_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SetRawDataResolution_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SetRawDataResolution_Statics::NewProp_userId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SetRawDataResolution_Statics::NewProp_resolution_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SetRawDataResolution_Statics::NewProp_resolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SetRawDataResolution_Statics::NewProp_raw_data_type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SetRawDataResolution_Statics::NewProp_raw_data_type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SetRawDataResolution_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SetRawDataResolution_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | ZoomSDKRenderer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sets the resolution of the users video.\n//\n// Returns \"SDKERR_SUCCESS\" if subscribing my video was successful.\n// Supports values 90, 180, 360, 720 and 1080 as specified in\n// https://marketplacefront.zoom.us/sdk/meeting/windows/rawdata__renderer__interface_8h_source.html#l00008\n" },
#endif
		{ "CPP_Default_raw_data_type", "ZoomSDKRawDataType_Video" },
		{ "DisplayName", "Set Raw Data Resolution" },
		{ "Keywords", "IZoomSDKRenderer.SetRawDataResolution" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the resolution of the users video.\n\nReturns \"SDKERR_SUCCESS\" if subscribing my video was successful.\nSupports values 90, 180, 360, 720 and 1080 as specified in\nhttps:marketplacefront.zoom.us/sdk/meeting/windows/rawdata__renderer__interface_8h_source.html#l00008" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SetRawDataResolution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "SetRawDataResolution", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SetRawDataResolution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SetRawDataResolution_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SetRawDataResolution_Statics::ZoomMeetingSDKBPLibrary_eventSetRawDataResolution_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SetRawDataResolution_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SetRawDataResolution_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SetRawDataResolution_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SetRawDataResolution_Statics::ZoomMeetingSDKBPLibrary_eventSetRawDataResolution_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SetRawDataResolution()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SetRawDataResolution_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SetSpeakerVol_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventSetSpeakerVol_Parms
		{
			float volume;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_volume;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SetSpeakerVol_Statics::NewProp_volume = { "volume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomMeetingSDKBPLibrary_eventSetSpeakerVol_Parms, volume), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SetSpeakerVol_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventSetSpeakerVol_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SetSpeakerVol_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventSetSpeakerVol_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SetSpeakerVol_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SetSpeakerVol_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SetSpeakerVol_Statics::NewProp_volume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SetSpeakerVol_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SetSpeakerVol_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | AudioSettingContext" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Set speaker volume.\n//\n// Return TRUE if setting speaker volume was successful.\n" },
#endif
		{ "Keywords", "IAudioSettingContext.SetSpeakerVol" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set speaker volume.\n\nReturn TRUE if setting speaker volume was successful." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SetSpeakerVol_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "SetSpeakerVol", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SetSpeakerVol_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SetSpeakerVol_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SetSpeakerVol_Statics::ZoomMeetingSDKBPLibrary_eventSetSpeakerVol_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SetSpeakerVol_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SetSpeakerVol_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SetSpeakerVol_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SetSpeakerVol_Statics::ZoomMeetingSDKBPLibrary_eventSetSpeakerVol_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SetSpeakerVol()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SetSpeakerVol_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SpotlightVideo_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventSpotlightVideo_Parms
		{
			int64 user_id;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_user_id;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SpotlightVideo_Statics::NewProp_user_id = { "user_id", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomMeetingSDKBPLibrary_eventSpotlightVideo_Parms, user_id), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SpotlightVideo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventSpotlightVideo_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SpotlightVideo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventSpotlightVideo_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SpotlightVideo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SpotlightVideo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SpotlightVideo_Statics::NewProp_user_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SpotlightVideo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SpotlightVideo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | MeetingVideoController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Spotlight video.\n//\n// Returns \"SDK_SUCCESS\" if spotlighting a user was successful.\n" },
#endif
		{ "DisplayName", "Spotlight video" },
		{ "Keywords", "Spotlight video" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spotlight video.\n\nReturns \"SDK_SUCCESS\" if spotlighting a user was successful." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SpotlightVideo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "SpotlightVideo", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SpotlightVideo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SpotlightVideo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SpotlightVideo_Statics::ZoomMeetingSDKBPLibrary_eventSpotlightVideo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SpotlightVideo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SpotlightVideo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SpotlightVideo_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SpotlightVideo_Statics::ZoomMeetingSDKBPLibrary_eventSpotlightVideo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SpotlightVideo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SpotlightVideo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StartBO_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventStartBO_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StartBO_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventStartBO_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StartBO_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventStartBO_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StartBO_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StartBO_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StartBO_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StartBO_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | BOAdmin" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Start a BO.\n//\n// Return \"SDKERR_SUCCESS\" if starting a BO was successful.\n" },
#endif
		{ "Keywords", "IBOAdmin.StartBO" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Start a BO.\n\nReturn \"SDKERR_SUCCESS\" if starting a BO was successful." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StartBO_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "StartBO", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StartBO_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StartBO_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StartBO_Statics::ZoomMeetingSDKBPLibrary_eventStartBO_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StartBO_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StartBO_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StartBO_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StartBO_Statics::ZoomMeetingSDKBPLibrary_eventStartBO_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StartBO()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StartBO_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StartMeeting_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventStartMeeting_Parms
		{
			FString userName;
			FString zakToken;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_userName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_zakToken;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StartMeeting_Statics::NewProp_userName = { "userName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomMeetingSDKBPLibrary_eventStartMeeting_Parms, userName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StartMeeting_Statics::NewProp_zakToken = { "zakToken", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomMeetingSDKBPLibrary_eventStartMeeting_Parms, zakToken), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StartMeeting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventStartMeeting_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StartMeeting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventStartMeeting_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StartMeeting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StartMeeting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StartMeeting_Statics::NewProp_userName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StartMeeting_Statics::NewProp_zakToken,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StartMeeting_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StartMeeting_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | MeetingServiceController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n   * IMeetingService\n   */// Starts a meeting.\n//\n// Returns \"SDKERR_SUCCESS\" if starting a meeting was successful.\n" },
#endif
		{ "DisplayName", "Execute Zoom Start Meeting" },
		{ "Keywords", "IMeetingService.StartMeeting" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* IMeetingService\n// Starts a meeting.\n//\n// Returns \"SDKERR_SUCCESS\" if starting a meeting was successful." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StartMeeting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "StartMeeting", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StartMeeting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StartMeeting_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StartMeeting_Statics::ZoomMeetingSDKBPLibrary_eventStartMeeting_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StartMeeting_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StartMeeting_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StartMeeting_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StartMeeting_Statics::ZoomMeetingSDKBPLibrary_eventStartMeeting_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StartMeeting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StartMeeting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StartRawRecording_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventStartRawRecording_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StartRawRecording_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventStartRawRecording_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StartRawRecording_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventStartRawRecording_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StartRawRecording_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StartRawRecording_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StartRawRecording_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StartRawRecording_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | MeetingRecordingController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n   * IMeetingRecordingController\n   */// Start raw video recording.\n//\n// Return true if raw video recording started successfully.\n" },
#endif
		{ "DisplayName", "StartRawRecording" },
		{ "Keywords", "IMeetingRecordingController.StartRawRecording" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* IMeetingRecordingController\n// Start raw video recording.\n//\n// Return true if raw video recording started successfully." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StartRawRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "StartRawRecording", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StartRawRecording_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StartRawRecording_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StartRawRecording_Statics::ZoomMeetingSDKBPLibrary_eventStartRawRecording_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StartRawRecording_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StartRawRecording_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StartRawRecording_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StartRawRecording_Statics::ZoomMeetingSDKBPLibrary_eventStartRawRecording_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StartRawRecording()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StartRawRecording_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StopAttendeeVideo_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventStopAttendeeVideo_Parms
		{
			int64 user_id;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_user_id;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StopAttendeeVideo_Statics::NewProp_user_id = { "user_id", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomMeetingSDKBPLibrary_eventStopAttendeeVideo_Parms, user_id), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StopAttendeeVideo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventStopAttendeeVideo_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StopAttendeeVideo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventStopAttendeeVideo_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StopAttendeeVideo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StopAttendeeVideo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StopAttendeeVideo_Statics::NewProp_user_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StopAttendeeVideo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StopAttendeeVideo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | MeetingVideoController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Stop attendee video.\n//\n// Returns \"SDK_SUCCESS if turn off the video of the assigned user was\n// successful.\n" },
#endif
		{ "DisplayName", "Stop attendee video" },
		{ "Keywords", "Stop attendee video" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stop attendee video.\n\nReturns \"SDK_SUCCESS if turn off the video of the assigned user was\nsuccessful." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StopAttendeeVideo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "StopAttendeeVideo", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StopAttendeeVideo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StopAttendeeVideo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StopAttendeeVideo_Statics::ZoomMeetingSDKBPLibrary_eventStopAttendeeVideo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StopAttendeeVideo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StopAttendeeVideo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StopAttendeeVideo_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StopAttendeeVideo_Statics::ZoomMeetingSDKBPLibrary_eventStopAttendeeVideo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StopAttendeeVideo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StopAttendeeVideo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StopBO_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventStopBO_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StopBO_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventStopBO_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StopBO_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventStopBO_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StopBO_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StopBO_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StopBO_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StopBO_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | BOAdmin" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Stop a BO.\n//\n// Return \"SDKERR_SUCCESS\" if stopping a BO was successful.\n" },
#endif
		{ "Keywords", "IBOAdmin.StopBO" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stop a BO.\n\nReturn \"SDKERR_SUCCESS\" if stopping a BO was successful." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StopBO_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "StopBO", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StopBO_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StopBO_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StopBO_Statics::ZoomMeetingSDKBPLibrary_eventStopBO_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StopBO_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StopBO_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StopBO_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StopBO_Statics::ZoomMeetingSDKBPLibrary_eventStopBO_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StopBO()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StopBO_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StopRawRecording_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventStopRawRecording_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StopRawRecording_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventStopRawRecording_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StopRawRecording_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventStopRawRecording_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StopRawRecording_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StopRawRecording_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StopRawRecording_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StopRawRecording_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | MeetingRecordingController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Stops raw video recording.\n//\n// Return true if raw video recording stopped successfully.\n" },
#endif
		{ "DisplayName", "StopRawRecording" },
		{ "Keywords", "IMeetingRecordingController.StopRawRecording" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stops raw video recording.\n\nReturn true if raw video recording stopped successfully." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StopRawRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "StopRawRecording", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StopRawRecording_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StopRawRecording_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StopRawRecording_Statics::ZoomMeetingSDKBPLibrary_eventStopRawRecording_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StopRawRecording_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StopRawRecording_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StopRawRecording_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StopRawRecording_Statics::ZoomMeetingSDKBPLibrary_eventStopRawRecording_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StopRawRecording()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StopRawRecording_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SubscribeVideo_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventSubscribeVideo_Parms
		{
			int64 user_id;
			const UObject* WorldContextObject;
			UTextureRenderTarget2D* outputRenderer;
			ZOOM_SDK_RAW_DATA_TYPE raw_data_type;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_user_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_outputRenderer;
		static const UECodeGen_Private::FBytePropertyParams NewProp_raw_data_type_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_raw_data_type;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SubscribeVideo_Statics::NewProp_user_id = { "user_id", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomMeetingSDKBPLibrary_eventSubscribeVideo_Parms, user_id), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SubscribeVideo_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SubscribeVideo_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomMeetingSDKBPLibrary_eventSubscribeVideo_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SubscribeVideo_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SubscribeVideo_Statics::NewProp_WorldContextObject_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SubscribeVideo_Statics::NewProp_outputRenderer = { "outputRenderer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomMeetingSDKBPLibrary_eventSubscribeVideo_Parms, outputRenderer), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SubscribeVideo_Statics::NewProp_raw_data_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SubscribeVideo_Statics::NewProp_raw_data_type = { "raw_data_type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomMeetingSDKBPLibrary_eventSubscribeVideo_Parms, raw_data_type), Z_Construct_UEnum_ZoomMeetingSDK_ZOOM_SDK_RAW_DATA_TYPE, METADATA_PARAMS(0, nullptr) }; // 1620386359
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SubscribeVideo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventSubscribeVideo_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SubscribeVideo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventSubscribeVideo_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SubscribeVideo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SubscribeVideo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SubscribeVideo_Statics::NewProp_user_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SubscribeVideo_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SubscribeVideo_Statics::NewProp_outputRenderer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SubscribeVideo_Statics::NewProp_raw_data_type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SubscribeVideo_Statics::NewProp_raw_data_type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SubscribeVideo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SubscribeVideo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | ZoomSDKRenderer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Subscribe to the users video.\n//\n// Returns true if subscribing my video was successful.\n" },
#endif
		{ "CPP_Default_raw_data_type", "ZoomSDKRawDataType_Video" },
		{ "DisplayName", "Subscribe video" },
		{ "Keywords", "IZoomSDKRenderer.Subscribe" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Subscribe to the users video.\n\nReturns true if subscribing my video was successful." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SubscribeVideo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "SubscribeVideo", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SubscribeVideo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SubscribeVideo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SubscribeVideo_Statics::ZoomMeetingSDKBPLibrary_eventSubscribeVideo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SubscribeVideo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SubscribeVideo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SubscribeVideo_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SubscribeVideo_Statics::ZoomMeetingSDKBPLibrary_eventSubscribeVideo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SubscribeVideo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SubscribeVideo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnMuteAudio_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventUnMuteAudio_Parms
		{
			int32 userID;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_userID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnMuteAudio_Statics::NewProp_userID = { "userID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomMeetingSDKBPLibrary_eventUnMuteAudio_Parms, userID), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnMuteAudio_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventUnMuteAudio_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnMuteAudio_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventUnMuteAudio_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnMuteAudio_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnMuteAudio_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnMuteAudio_Statics::NewProp_userID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnMuteAudio_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnMuteAudio_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | MeetingAudioController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Unmute the audio of an user. Only Host/Co-host can unmute others.\n//\n" },
#endif
		{ "Keywords", "IMeetingAudioController.UnmuteAudio" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unmute the audio of an user. Only Host/Co-host can unmute others." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnMuteAudio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "UnMuteAudio", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnMuteAudio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnMuteAudio_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnMuteAudio_Statics::ZoomMeetingSDKBPLibrary_eventUnMuteAudio_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnMuteAudio_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnMuteAudio_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnMuteAudio_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnMuteAudio_Statics::ZoomMeetingSDKBPLibrary_eventUnMuteAudio_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnMuteAudio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnMuteAudio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnmuteVideo_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventUnmuteVideo_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnmuteVideo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventUnmuteVideo_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnmuteVideo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventUnmuteVideo_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnmuteVideo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnmuteVideo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnmuteVideo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnmuteVideo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | MeetingVideoController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Unmute video.\n//\n// Returns \"SDK_SUCCESS if unmute own video was successful.\n" },
#endif
		{ "DisplayName", "Unmute video" },
		{ "Keywords", "Unmute video" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unmute video.\n\nReturns \"SDK_SUCCESS if unmute own video was successful." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnmuteVideo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "UnmuteVideo", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnmuteVideo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnmuteVideo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnmuteVideo_Statics::ZoomMeetingSDKBPLibrary_eventUnmuteVideo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnmuteVideo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnmuteVideo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnmuteVideo_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnmuteVideo_Statics::ZoomMeetingSDKBPLibrary_eventUnmuteVideo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnmuteVideo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnmuteVideo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnSpotlightAllVideos_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventUnSpotlightAllVideos_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnSpotlightAllVideos_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventUnSpotlightAllVideos_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnSpotlightAllVideos_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventUnSpotlightAllVideos_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnSpotlightAllVideos_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnSpotlightAllVideos_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnSpotlightAllVideos_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnSpotlightAllVideos_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | MeetingVideoController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Unspotlight all videos.\n//\n// Return \"SDK_SUCCESS\" if unspotlighting all users were successful.\n" },
#endif
		{ "DisplayName", "Unspotlight all videos" },
		{ "Keywords", "Unspotlight all videos" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unspotlight all videos.\n\nReturn \"SDK_SUCCESS\" if unspotlighting all users were successful." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnSpotlightAllVideos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "UnSpotlightAllVideos", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnSpotlightAllVideos_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnSpotlightAllVideos_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnSpotlightAllVideos_Statics::ZoomMeetingSDKBPLibrary_eventUnSpotlightAllVideos_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnSpotlightAllVideos_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnSpotlightAllVideos_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnSpotlightAllVideos_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnSpotlightAllVideos_Statics::ZoomMeetingSDKBPLibrary_eventUnSpotlightAllVideos_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnSpotlightAllVideos()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnSpotlightAllVideos_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnSpotlightVideo_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventUnSpotlightVideo_Parms
		{
			int64 user_id;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_user_id;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnSpotlightVideo_Statics::NewProp_user_id = { "user_id", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomMeetingSDKBPLibrary_eventUnSpotlightVideo_Parms, user_id), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnSpotlightVideo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventUnSpotlightVideo_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnSpotlightVideo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventUnSpotlightVideo_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnSpotlightVideo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnSpotlightVideo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnSpotlightVideo_Statics::NewProp_user_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnSpotlightVideo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnSpotlightVideo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | MeetingVideoController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Unspotlight video.\n//\n// Returns \"SDK_SUCCESS if unspotlighting a user was successful.\n" },
#endif
		{ "DisplayName", "Unspotlight video" },
		{ "Keywords", "Unspotlight video" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unspotlight video.\n\nReturns \"SDK_SUCCESS if unspotlighting a user was successful." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnSpotlightVideo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "UnSpotlightVideo", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnSpotlightVideo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnSpotlightVideo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnSpotlightVideo_Statics::ZoomMeetingSDKBPLibrary_eventUnSpotlightVideo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnSpotlightVideo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnSpotlightVideo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnSpotlightVideo_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnSpotlightVideo_Statics::ZoomMeetingSDKBPLibrary_eventUnSpotlightVideo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnSpotlightVideo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnSpotlightVideo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnSubscribeVideo_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventUnSubscribeVideo_Parms
		{
			int64 userId;
			ZOOM_SDK_RAW_DATA_TYPE raw_data_type;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_userId;
		static const UECodeGen_Private::FBytePropertyParams NewProp_raw_data_type_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_raw_data_type;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnSubscribeVideo_Statics::NewProp_userId = { "userId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomMeetingSDKBPLibrary_eventUnSubscribeVideo_Parms, userId), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnSubscribeVideo_Statics::NewProp_raw_data_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnSubscribeVideo_Statics::NewProp_raw_data_type = { "raw_data_type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomMeetingSDKBPLibrary_eventUnSubscribeVideo_Parms, raw_data_type), Z_Construct_UEnum_ZoomMeetingSDK_ZOOM_SDK_RAW_DATA_TYPE, METADATA_PARAMS(0, nullptr) }; // 1620386359
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnSubscribeVideo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventUnSubscribeVideo_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnSubscribeVideo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventUnSubscribeVideo_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnSubscribeVideo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnSubscribeVideo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnSubscribeVideo_Statics::NewProp_userId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnSubscribeVideo_Statics::NewProp_raw_data_type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnSubscribeVideo_Statics::NewProp_raw_data_type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnSubscribeVideo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnSubscribeVideo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | ZoomSDKRenderer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Unsubscribe from the users video.\n//\n// Returns true if un-subscribing my video was successful.\n" },
#endif
		{ "CPP_Default_raw_data_type", "ZoomSDKRawDataType_Video" },
		{ "DisplayName", "UnSubscribe video" },
		{ "Keywords", "IZoomSDKRenderer.UnSubscribe" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unsubscribe from the users video.\n\nReturns true if un-subscribing my video was successful." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnSubscribeVideo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "UnSubscribeVideo", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnSubscribeVideo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnSubscribeVideo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnSubscribeVideo_Statics::ZoomMeetingSDKBPLibrary_eventUnSubscribeVideo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnSubscribeVideo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnSubscribeVideo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnSubscribeVideo_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnSubscribeVideo_Statics::ZoomMeetingSDKBPLibrary_eventUnSubscribeVideo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnSubscribeVideo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnSubscribeVideo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UpdateBOName_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventUpdateBOName_Parms
		{
			FString strBOID;
			FString strNewBOName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_strBOID;
		static const UECodeGen_Private::FStrPropertyParams NewProp_strNewBOName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UpdateBOName_Statics::NewProp_strBOID = { "strBOID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomMeetingSDKBPLibrary_eventUpdateBOName_Parms, strBOID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UpdateBOName_Statics::NewProp_strNewBOName = { "strNewBOName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomMeetingSDKBPLibrary_eventUpdateBOName_Parms, strNewBOName), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UpdateBOName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventUpdateBOName_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UpdateBOName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventUpdateBOName_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UpdateBOName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UpdateBOName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UpdateBOName_Statics::NewProp_strBOID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UpdateBOName_Statics::NewProp_strNewBOName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UpdateBOName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UpdateBOName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | BOCreator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Update a BO name.\n//\n// Return TRUE if the update was successful.\n" },
#endif
		{ "Keywords", "IBOCreator.UpdateBOName" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Update a BO name.\n\nReturn TRUE if the update was successful." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UpdateBOName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "UpdateBOName", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UpdateBOName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UpdateBOName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UpdateBOName_Statics::ZoomMeetingSDKBPLibrary_eventUpdateBOName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UpdateBOName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UpdateBOName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UpdateBOName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UpdateBOName_Statics::ZoomMeetingSDKBPLibrary_eventUpdateBOName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UpdateBOName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UpdateBOName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UrlEncode_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventUrlEncode_Parms
		{
			FString url_str;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_url_str;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UrlEncode_Statics::NewProp_url_str = { "url_str", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomMeetingSDKBPLibrary_eventUrlEncode_Parms, url_str), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UrlEncode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoomMeetingSDKBPLibrary_eventUrlEncode_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UrlEncode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UrlEncode_Statics::NewProp_url_str,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UrlEncode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UrlEncode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Utils | URL Encode" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// URL Encodes a given URL.\n//\n// Return URL encoded FString.\n" },
#endif
		{ "DisplayName", "UrlEncode" },
		{ "Keywords", "URL Encode" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "URL Encodes a given URL.\n\nReturn URL encoded FString." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UrlEncode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "UrlEncode", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UrlEncode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UrlEncode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UrlEncode_Statics::ZoomMeetingSDKBPLibrary_eventUrlEncode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UrlEncode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UrlEncode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UrlEncode_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UrlEncode_Statics::ZoomMeetingSDKBPLibrary_eventUrlEncode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UrlEncode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UrlEncode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UseDefaultSystemMic_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventUseDefaultSystemMic_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UseDefaultSystemMic_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventUseDefaultSystemMic_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UseDefaultSystemMic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventUseDefaultSystemMic_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UseDefaultSystemMic_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UseDefaultSystemMic_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UseDefaultSystemMic_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UseDefaultSystemMic_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | AudioSettingContext" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Use default system mic.\n//\n// Return TRUE if using default system mic was successful.\n" },
#endif
		{ "Keywords", "IAudioSettingContext.UseDefaultSystemMic" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use default system mic.\n\nReturn TRUE if using default system mic was successful." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UseDefaultSystemMic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "UseDefaultSystemMic", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UseDefaultSystemMic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UseDefaultSystemMic_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UseDefaultSystemMic_Statics::ZoomMeetingSDKBPLibrary_eventUseDefaultSystemMic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UseDefaultSystemMic_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UseDefaultSystemMic_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UseDefaultSystemMic_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UseDefaultSystemMic_Statics::ZoomMeetingSDKBPLibrary_eventUseDefaultSystemMic_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UseDefaultSystemMic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UseDefaultSystemMic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UseDefaultSystemSpeaker_Statics
	{
		struct ZoomMeetingSDKBPLibrary_eventUseDefaultSystemSpeaker_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UseDefaultSystemSpeaker_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZoomMeetingSDKBPLibrary_eventUseDefaultSystemSpeaker_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UseDefaultSystemSpeaker_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoomMeetingSDKBPLibrary_eventUseDefaultSystemSpeaker_Parms), &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UseDefaultSystemSpeaker_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UseDefaultSystemSpeaker_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UseDefaultSystemSpeaker_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UseDefaultSystemSpeaker_Statics::Function_MetaDataParams[] = {
		{ "Category", "Zoom Meeting SDK Plug-in | Interfaces | AudioSettingContext" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Use default system speaker.\n//\n// Return TRUE if using default system speaker was successful.\n" },
#endif
		{ "Keywords", "IAudioSettingContext.UseDefaultSystemSpeaker" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use default system speaker.\n\nReturn TRUE if using default system speaker was successful." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UseDefaultSystemSpeaker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoomMeetingSDKBPLibrary, nullptr, "UseDefaultSystemSpeaker", nullptr, nullptr, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UseDefaultSystemSpeaker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UseDefaultSystemSpeaker_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UseDefaultSystemSpeaker_Statics::ZoomMeetingSDKBPLibrary_eventUseDefaultSystemSpeaker_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UseDefaultSystemSpeaker_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UseDefaultSystemSpeaker_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UseDefaultSystemSpeaker_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UseDefaultSystemSpeaker_Statics::ZoomMeetingSDKBPLibrary_eventUseDefaultSystemSpeaker_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UseDefaultSystemSpeaker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UseDefaultSystemSpeaker_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UZoomMeetingSDKBPLibrary);
	UClass* Z_Construct_UClass_UZoomMeetingSDKBPLibrary_NoRegister()
	{
		return UZoomMeetingSDKBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UZoomMeetingSDKBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UZoomMeetingSDKBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ZoomMeetingSDK,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZoomMeetingSDKBPLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UZoomMeetingSDKBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AddNewBoToList, "AddNewBoToList" }, // 1154065491
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AdmitAllToMeeting, "AdmitAllToMeeting" }, // 3973484785
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AdmitToMeeting, "AdmitToMeeting" }, // 3012129956
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AllowAttendeeTalk, "AllowAttendeeTalk" }, // 1505836595
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AskAttendeeToStartVideo, "AskAttendeeToStartVideo" }, // 4054815143
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AssignNewUserToRunningBO, "AssignNewUserToRunningBO" }, // 1140613242
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AssignUserToBO, "AssignUserToBO" }, // 4221166411
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AttendeeJoinBO, "AttendeeJoinBO" }, // 3644401410
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_AttendeeLeaveBO, "AttendeeLeaveBO" }, // 912212490
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_Base64Encode, "Base64Encode" }, // 4052482709
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginTurnDown, "BeginTurnDown" }, // 3966961553
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginTurnLeft, "BeginTurnLeft" }, // 3839361067
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginTurnRight, "BeginTurnRight" }, // 580683881
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginTurnUp, "BeginTurnUp" }, // 2112173961
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginZoomIn, "BeginZoomIn" }, // 795637830
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BeginZoomOut, "BeginZoomOut" }, // 2471899932
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BOAssistantJoinBO, "BOAssistantJoinBO" }, // 932284035
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BOAssistantLeaveBO, "BOAssistantLeaveBO" }, // 1203089716
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_BroadcastMessage, "BroadcastMessage" }, // 2307906370
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanAllowDisAllowLocalRecording, "CanAllowDisAllowLocalRecording" }, // 1305705948
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanAskAttendeeToStartVideo, "CanAskAttendeeToStartVideo" }, // 2470024662
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanAssignOtherToSendCC, "CanAssignOtherToSendCC" }, // 3803195974
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanBeAssignedToSendCC, "CanBeAssignedToSendCC" }, // 1362311419
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CancelEmojiFeedback, "CancelEmojiFeedback" }, // 3484835785
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanControlCamera, "CanControlCamera" }, // 3190923219
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanSendClosedCaption, "CanSendClosedCaption" }, // 2875686547
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanSpotlight, "CanSpotlight" }, // 2011932777
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStartBO, "CanStartBO" }, // 1296364692
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStartDirectShare, "CanStartDirectShare" }, // 667647314
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStartLiveStream, "CanStartLiveStream" }, // 1580965237
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStartLiveTranscription, "CanStartLiveTranscription" }, // 465639276
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStartRawLiveStream, "CanStartRawLiveStream" }, // 1529790312
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanStopAttendeeVideo, "CanStopAttendeeVideo" }, // 1929116387
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanUnMuteByself, "CanUnMuteByself" }, // 1731846035
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CanUnSpotlight, "CanUnSpotlight" }, // 3848317807
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CleanupSDK, "CleanupSDK" }, // 1956086738
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueTurnDown, "ContinueTurnDown" }, // 3539323332
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueTurnLeft, "ContinueTurnLeft" }, // 4281709366
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueTurnRight, "ContinueTurnRight" }, // 1955220230
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueTurnUp, "ContinueTurnUp" }, // 1525691149
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueZoomIn, "ContinueZoomIn" }, // 887861657
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_ContinueZoomOut, "ContinueZoomOut" }, // 2023275367
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CreateBO, "CreateBO" }, // 971905442
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CreateBOTransactionBegin, "CreateBOTransactionBegin" }, // 3002157447
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_CreateBOTransactionCommit, "CreateBOTransactionCommit" }, // 2197180092
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_DeleteChatMessage, "DeleteChatMessage" }, // 3812103308
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_DisableVideoSource, "DisableVideoSource" }, // 1179016966
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableAutoAdjustMic, "EnableAutoAdjustMic" }, // 3923723628
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableClaimHostFeature, "EnableClaimHostFeature" }, // 1993237410
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableForceAutoStartMyVideoWhenJoinMeeting, "EnableForceAutoStartMyVideoWhenJoinMeeting" }, // 4162088859
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableForceAutoStopMyVideoWhenJoinMeeting, "EnableForceAutoStopMyVideoWhenJoinMeeting" }, // 2040229880
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EnableVideoSource, "EnableVideoSource" }, // 2092624446
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndMeeting, "EndMeeting" }, // 2289594803
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndTurnDown, "EndTurnDown" }, // 2129880953
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndTurnLeft, "EndTurnLeft" }, // 81308908
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndTurnRight, "EndTurnRight" }, // 3194131686
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndTurnUp, "EndTurnUp" }, // 2823952345
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndZoomIn, "EndZoomIn" }, // 1515396420
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_EndZoomOut, "EndZoomOut" }, // 1653072209
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GenerateJWTAuthToken, "GenerateJWTAuthToken" }, // 784211517
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GeneratePKCEAuthPair, "GeneratePKCEAuthPair" }, // 3235365740
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetAllChatMessageID, "GetAllChatMessageID" }, // 3582926044
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetAllQuestionList, "GetAllQuestionList" }, // 1844898201
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetAnswerItemInfo, "GetAnswerItemInfo" }, // 829200765
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetAuthResult, "GetAuthResult" }, // 659489159
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetBOName, "GetBOName" }, // 3473227816
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetBOUserName, "GetBOUserName" }, // 2909515610
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetChatMessageInfo, "GetChatMessageInfo" }, // 1102892526
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetChatStatus, "GetChatStatus" }, // 3326272919
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetCurrentBOName, "GetCurrentBOName" }, // 494679277
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetInstance, "GetInstance" }, // 1539662198
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetOutputRenderer, "GetOutputRenderer" }, // 1503017529
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetParticipantsList, "GetParticipantsList" }, // 3821108953
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetSpeakerVol, "GetSpeakerVol" }, // 370560032
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetSpotlightedUserList, "GetSpotlightedUserList" }, // 513019605
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetUserInfo, "GetUserInfo" }, // 2718120567
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetWaitingRoomLst, "GetWaitingRoomLst" }, // 2909613228
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_GetWaitingRoomUserInfoByID, "GetWaitingRoomUserInfoByID" }, // 3654154873
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_InitAuthSDK, "InitAuthSDK" }, // 3363532001
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_InitSDK, "InitSDK" }, // 3868032560
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_InviteBOUserReturnToMainSession, "InviteBOUserReturnToMainSession" }, // 1395622862
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsAnnotationDisable, "IsAnnotationDisable" }, // 2768742838
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsAuthResultSuccess, "IsAuthResultSuccess" }, // 2865634054
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsBOEnabled, "IsBOEnabled" }, // 401038585
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsBOStarted, "IsBOStarted" }, // 167395168
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsBOUserMyself, "IsBOUserMyself" }, // 936811012
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsCanReturnMainSession, "IsCanReturnMainSession" }, // 627454505
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsChatMessageCanBeDeleted, "IsChatMessageCanBeDeleted" }, // 4178509406
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsEmojiReactionEnabled, "IsEmojiReactionEnabled" }, // 1804286902
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsHostInThisBO, "IsHostInThisBO" }, // 4259591163
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsInBOMeeting, "IsInBOMeeting" }, // 1724253210
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsSDKErrorSuccess, "IsSDKErrorSuccess" }, // 21255820
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsSupportImmersive, "IsSupportImmersive" }, // 3422938428
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsUserSubscribedToVideo, "IsUserSubscribedToVideo" }, // 2829526585
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_IsValid, "IsValid" }, // 1713753339
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_JoinBOByUserRequest, "JoinBOByUserRequest" }, // 4048673548
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_JoinMeeting, "JoinMeeting" }, // 130699833
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_JoinZoomEventMeeting, "JoinZoomEventMeeting" }, // 2100423833
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_LeaveMeeting, "LeaveMeeting" }, // 4230437475
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_LogOut, "LogOut" }, // 3520722269
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_LowerAllHands, "LowerAllHands" }, // 3494411762
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_LowerHand, "LowerHand" }, // 1973033492
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_MuteAudio, "MuteAudio" }, // 2322867590
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_MuteVideo, "MuteVideo" }, // 3502060122
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_PutInWaitingRoom, "PutInWaitingRoom" }, // 2043654404
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_RemoveBO, "RemoveBO" }, // 3209684034
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_RemoveUserFromBO, "RemoveUserFromBO" }, // 2290922924
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_RequestLocalRecordingPrivilege, "RequestLocalRecordingPrivilege" }, // 221497360
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SDKAuthJWT, "SDKAuthJWT" }, // 3284291977
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SendChatMessage, "SendChatMessage" }, // 2649042027
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SendEmojiFeedback, "SendEmojiFeedback" }, // 2015135027
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SendEmojiReaction, "SendEmojiReaction" }, // 2986362138
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SetInstance, "SetInstance" }, // 2092953800
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SetRawDataResolution, "SetRawDataResolution" }, // 2722930999
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SetSpeakerVol, "SetSpeakerVol" }, // 1628874308
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SpotlightVideo, "SpotlightVideo" }, // 763749513
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StartBO, "StartBO" }, // 316995952
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StartMeeting, "StartMeeting" }, // 2086879386
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StartRawRecording, "StartRawRecording" }, // 2726662728
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StopAttendeeVideo, "StopAttendeeVideo" }, // 3938257680
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StopBO, "StopBO" }, // 3325665780
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_StopRawRecording, "StopRawRecording" }, // 1983774714
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_SubscribeVideo, "SubscribeVideo" }, // 335529973
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnMuteAudio, "UnMuteAudio" }, // 4110763385
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnmuteVideo, "UnmuteVideo" }, // 1398021929
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnSpotlightAllVideos, "UnSpotlightAllVideos" }, // 1723098113
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnSpotlightVideo, "UnSpotlightVideo" }, // 2931406995
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UnSubscribeVideo, "UnSubscribeVideo" }, // 4234293306
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UpdateBOName, "UpdateBOName" }, // 2701070975
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UrlEncode, "UrlEncode" }, // 3947824663
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UseDefaultSystemMic, "UseDefaultSystemMic" }, // 2982639460
		{ &Z_Construct_UFunction_UZoomMeetingSDKBPLibrary_UseDefaultSystemSpeaker, "UseDefaultSystemSpeaker" }, // 1863123803
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZoomMeetingSDKBPLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZoomMeetingSDKBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n *\x09""Function library class.\n *\x09""Each function in it is expected to be static and represents blueprint\n *node that can be called in any blueprint.\n *\n *\x09When declaring function you can define metadata for the node. Key\n *function specifiers will be BlueprintPure and BlueprintCallable. BlueprintPure\n *- means the function does not affect the owning object in any way and thus\n *creates a node without Exec pins. BlueprintCallable - makes a function which\n *can be executed in Blueprints - Thus it has Exec pins. DisplayName - full name\n *of the node, shown when you mouse over the node and in the blueprint drop down\n *menu. Its lets you name the node using characters not allowed in C++ function\n *names. CompactNodeTitle - the word(s) that appear on the node. Keywords -\n *the list of keywords that helps you to find node when you search for it using\n *Blueprint drop-down menu. Good example is \"Print String\" node which you can\n *find also by using keyword \"log\". Category -\x09the category your node will be\n *under in the Blueprint drop-down menu.\n *\n *\x09""For more info on custom blueprint nodes visit documentation:\n *\x09https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation\n */" },
#endif
		{ "IncludePath", "ZoomMeetingSDKBPLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ZoomMeetingSDKBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "*     Function library class.\n*     Each function in it is expected to be static and represents blueprint\n*node that can be called in any blueprint.\n*\n*     When declaring function you can define metadata for the node. Key\n*function specifiers will be BlueprintPure and BlueprintCallable. BlueprintPure\n*- means the function does not affect the owning object in any way and thus\n*creates a node without Exec pins. BlueprintCallable - makes a function which\n*can be executed in Blueprints - Thus it has Exec pins. DisplayName - full name\n*of the node, shown when you mouse over the node and in the blueprint drop down\n*menu. Its lets you name the node using characters not allowed in C++ function\n*names. CompactNodeTitle - the word(s) that appear on the node. Keywords -\n*the list of keywords that helps you to find node when you search for it using\n*Blueprint drop-down menu. Good example is \"Print String\" node which you can\n*find also by using keyword \"log\". Category - the category your node will be\n*under in the Blueprint drop-down menu.\n*\n*     For more info on custom blueprint nodes visit documentation:\n*     https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UZoomMeetingSDKBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UZoomMeetingSDKBPLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UZoomMeetingSDKBPLibrary_Statics::ClassParams = {
		&UZoomMeetingSDKBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZoomMeetingSDKBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UZoomMeetingSDKBPLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UZoomMeetingSDKBPLibrary()
	{
		if (!Z_Registration_Info_UClass_UZoomMeetingSDKBPLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UZoomMeetingSDKBPLibrary.OuterSingleton, Z_Construct_UClass_UZoomMeetingSDKBPLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UZoomMeetingSDKBPLibrary.OuterSingleton;
	}
	template<> ZOOMMEETINGSDK_API UClass* StaticClass<UZoomMeetingSDKBPLibrary>()
	{
		return UZoomMeetingSDKBPLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UZoomMeetingSDKBPLibrary);
	UZoomMeetingSDKBPLibrary::~UZoomMeetingSDKBPLibrary() {}
	struct Z_CompiledInDeferFile_FID_Zoom_Unreal_Experiments_Zoom_Example_Projects_Zoom_Sample_Project_Release_v1_0_Plugins_ZoomMeetingSDK_Source_ZoomMeetingSDK_Public_ZoomMeetingSDKBPLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Zoom_Unreal_Experiments_Zoom_Example_Projects_Zoom_Sample_Project_Release_v1_0_Plugins_ZoomMeetingSDK_Source_ZoomMeetingSDK_Public_ZoomMeetingSDKBPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UZoomMeetingSDKBPLibrary, UZoomMeetingSDKBPLibrary::StaticClass, TEXT("UZoomMeetingSDKBPLibrary"), &Z_Registration_Info_UClass_UZoomMeetingSDKBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UZoomMeetingSDKBPLibrary), 3109406558U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Zoom_Unreal_Experiments_Zoom_Example_Projects_Zoom_Sample_Project_Release_v1_0_Plugins_ZoomMeetingSDK_Source_ZoomMeetingSDK_Public_ZoomMeetingSDKBPLibrary_h_3456905157(TEXT("/Script/ZoomMeetingSDK"),
		Z_CompiledInDeferFile_FID_Zoom_Unreal_Experiments_Zoom_Example_Projects_Zoom_Sample_Project_Release_v1_0_Plugins_ZoomMeetingSDK_Source_ZoomMeetingSDK_Public_ZoomMeetingSDKBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Zoom_Unreal_Experiments_Zoom_Example_Projects_Zoom_Sample_Project_Release_v1_0_Plugins_ZoomMeetingSDK_Source_ZoomMeetingSDK_Public_ZoomMeetingSDKBPLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
