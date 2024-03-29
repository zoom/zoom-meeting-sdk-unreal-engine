// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ZoomMeetingSDKBPLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UTextureRenderTarget2D;
class UZoomMeetingSDKBPLibrary;
enum class RAW_DATA_RESOLUTION : uint8;
enum class SDK_EMOJI_FEEDBACK_TYPE : uint8;
enum class SDK_EMOJI_REACTION_TYPE : uint8;
enum class ZOOM_SDK_RAW_DATA_TYPE : uint8;
struct FUEAnswerItem;
struct FUEAuth_Pair;
struct FUEChatMsgInfo;
struct FUEChatStatus;
struct FUEQAItemInfo;
struct FUEUserInfo;
#ifdef ZOOMMEETINGSDK_ZoomMeetingSDKBPLibrary_generated_h
#error "ZoomMeetingSDKBPLibrary.generated.h already included, missing '#pragma once' in ZoomMeetingSDKBPLibrary.h"
#endif
#define ZOOMMEETINGSDK_ZoomMeetingSDKBPLibrary_generated_h

#define FID_Zoom_Unreal_Experiments_Zoom_Example_Projects_Zoom_Sample_Project_Release_v1_0_Plugins_ZoomMeetingSDK_Source_ZoomMeetingSDK_Public_ZoomMeetingSDKBPLibrary_h_38_SPARSE_DATA
#define FID_Zoom_Unreal_Experiments_Zoom_Example_Projects_Zoom_Sample_Project_Release_v1_0_Plugins_ZoomMeetingSDK_Source_ZoomMeetingSDK_Public_ZoomMeetingSDKBPLibrary_h_38_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Zoom_Unreal_Experiments_Zoom_Example_Projects_Zoom_Sample_Project_Release_v1_0_Plugins_ZoomMeetingSDK_Source_ZoomMeetingSDK_Public_ZoomMeetingSDKBPLibrary_h_38_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Zoom_Unreal_Experiments_Zoom_Example_Projects_Zoom_Sample_Project_Release_v1_0_Plugins_ZoomMeetingSDK_Source_ZoomMeetingSDK_Public_ZoomMeetingSDKBPLibrary_h_38_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetInstance); \
	DECLARE_FUNCTION(execGetInstance); \
	DECLARE_FUNCTION(execDisableVideoSource); \
	DECLARE_FUNCTION(execEnableVideoSource); \
	DECLARE_FUNCTION(execBase64Encode); \
	DECLARE_FUNCTION(execUrlEncode); \
	DECLARE_FUNCTION(execGenerateJWTAuthToken); \
	DECLARE_FUNCTION(execGeneratePKCEAuthPair); \
	DECLARE_FUNCTION(execGetAllQuestionList); \
	DECLARE_FUNCTION(execRequestLocalRecordingPrivilege); \
	DECLARE_FUNCTION(execCanAllowDisAllowLocalRecording); \
	DECLARE_FUNCTION(execStopRawRecording); \
	DECLARE_FUNCTION(execStartRawRecording); \
	DECLARE_FUNCTION(execAllowAttendeeTalk); \
	DECLARE_FUNCTION(execAdmitToMeeting); \
	DECLARE_FUNCTION(execAdmitAllToMeeting); \
	DECLARE_FUNCTION(execPutInWaitingRoom); \
	DECLARE_FUNCTION(execGetWaitingRoomUserInfoByID); \
	DECLARE_FUNCTION(execGetWaitingRoomLst); \
	DECLARE_FUNCTION(execGetUserInfo); \
	DECLARE_FUNCTION(execLowerHand); \
	DECLARE_FUNCTION(execLowerAllHands); \
	DECLARE_FUNCTION(execGetParticipantsList); \
	DECLARE_FUNCTION(execCanStartRawLiveStream); \
	DECLARE_FUNCTION(execCanStartLiveStream); \
	DECLARE_FUNCTION(execCanAskAttendeeToStartVideo); \
	DECLARE_FUNCTION(execCanStopAttendeeVideo); \
	DECLARE_FUNCTION(execAskAttendeeToStartVideo); \
	DECLARE_FUNCTION(execStopAttendeeVideo); \
	DECLARE_FUNCTION(execUnmuteVideo); \
	DECLARE_FUNCTION(execMuteVideo); \
	DECLARE_FUNCTION(execCanUnSpotlight); \
	DECLARE_FUNCTION(execCanSpotlight); \
	DECLARE_FUNCTION(execUnSpotlightVideo); \
	DECLARE_FUNCTION(execUnSpotlightAllVideos); \
	DECLARE_FUNCTION(execSpotlightVideo); \
	DECLARE_FUNCTION(execGetSpotlightedUserList); \
	DECLARE_FUNCTION(execCanStartDirectShare); \
	DECLARE_FUNCTION(execIsAnnotationDisable); \
	DECLARE_FUNCTION(execIsSupportImmersive); \
	DECLARE_FUNCTION(execEnableClaimHostFeature); \
	DECLARE_FUNCTION(execSendChatMessage); \
	DECLARE_FUNCTION(execIsChatMessageCanBeDeleted); \
	DECLARE_FUNCTION(execGetChatStatus); \
	DECLARE_FUNCTION(execGetAllChatMessageID); \
	DECLARE_FUNCTION(execGetChatMessageInfo); \
	DECLARE_FUNCTION(execDeleteChatMessage); \
	DECLARE_FUNCTION(execCancelEmojiFeedback); \
	DECLARE_FUNCTION(execSendEmojiFeedback); \
	DECLARE_FUNCTION(execSendEmojiReaction); \
	DECLARE_FUNCTION(execIsEmojiReactionEnabled); \
	DECLARE_FUNCTION(execIsInBOMeeting); \
	DECLARE_FUNCTION(execIsBOStarted); \
	DECLARE_FUNCTION(execIsBOEnabled); \
	DECLARE_FUNCTION(execUnMuteAudio); \
	DECLARE_FUNCTION(execCanUnMuteByself); \
	DECLARE_FUNCTION(execMuteAudio); \
	DECLARE_FUNCTION(execEnableForceAutoStopMyVideoWhenJoinMeeting); \
	DECLARE_FUNCTION(execEnableForceAutoStartMyVideoWhenJoinMeeting); \
	DECLARE_FUNCTION(execCanSendClosedCaption); \
	DECLARE_FUNCTION(execCanStartLiveTranscription); \
	DECLARE_FUNCTION(execCanBeAssignedToSendCC); \
	DECLARE_FUNCTION(execCanAssignOtherToSendCC); \
	DECLARE_FUNCTION(execEndZoomOut); \
	DECLARE_FUNCTION(execContinueZoomOut); \
	DECLARE_FUNCTION(execBeginZoomOut); \
	DECLARE_FUNCTION(execEndZoomIn); \
	DECLARE_FUNCTION(execContinueZoomIn); \
	DECLARE_FUNCTION(execBeginZoomIn); \
	DECLARE_FUNCTION(execEndTurnDown); \
	DECLARE_FUNCTION(execContinueTurnDown); \
	DECLARE_FUNCTION(execBeginTurnDown); \
	DECLARE_FUNCTION(execEndTurnUp); \
	DECLARE_FUNCTION(execContinueTurnUp); \
	DECLARE_FUNCTION(execBeginTurnUp); \
	DECLARE_FUNCTION(execEndTurnRight); \
	DECLARE_FUNCTION(execContinueTurnRight); \
	DECLARE_FUNCTION(execBeginTurnRight); \
	DECLARE_FUNCTION(execEndTurnLeft); \
	DECLARE_FUNCTION(execContinueTurnLeft); \
	DECLARE_FUNCTION(execBeginTurnLeft); \
	DECLARE_FUNCTION(execIsValid); \
	DECLARE_FUNCTION(execCanControlCamera); \
	DECLARE_FUNCTION(execGetCurrentBOName); \
	DECLARE_FUNCTION(execIsBOUserMyself); \
	DECLARE_FUNCTION(execGetBOUserName); \
	DECLARE_FUNCTION(execRemoveUserFromBO); \
	DECLARE_FUNCTION(execAssignUserToBO); \
	DECLARE_FUNCTION(execRemoveBO); \
	DECLARE_FUNCTION(execUpdateBOName); \
	DECLARE_FUNCTION(execCreateBO); \
	DECLARE_FUNCTION(execAttendeeLeaveBO); \
	DECLARE_FUNCTION(execAttendeeJoinBO); \
	DECLARE_FUNCTION(execIsHostInThisBO); \
	DECLARE_FUNCTION(execIsCanReturnMainSession); \
	DECLARE_FUNCTION(execGetBOName); \
	DECLARE_FUNCTION(execBOAssistantLeaveBO); \
	DECLARE_FUNCTION(execBOAssistantJoinBO); \
	DECLARE_FUNCTION(execStopBO); \
	DECLARE_FUNCTION(execStartBO); \
	DECLARE_FUNCTION(execJoinBOByUserRequest); \
	DECLARE_FUNCTION(execInviteBOUserReturnToMainSession); \
	DECLARE_FUNCTION(execBroadcastMessage); \
	DECLARE_FUNCTION(execAssignNewUserToRunningBO); \
	DECLARE_FUNCTION(execCanStartBO); \
	DECLARE_FUNCTION(execCreateBOTransactionCommit); \
	DECLARE_FUNCTION(execCreateBOTransactionBegin); \
	DECLARE_FUNCTION(execAddNewBoToList); \
	DECLARE_FUNCTION(execUseDefaultSystemSpeaker); \
	DECLARE_FUNCTION(execUseDefaultSystemMic); \
	DECLARE_FUNCTION(execSetSpeakerVol); \
	DECLARE_FUNCTION(execEnableAutoAdjustMic); \
	DECLARE_FUNCTION(execGetSpeakerVol); \
	DECLARE_FUNCTION(execGetAnswerItemInfo); \
	DECLARE_FUNCTION(execSetRawDataResolution); \
	DECLARE_FUNCTION(execGetOutputRenderer); \
	DECLARE_FUNCTION(execIsUserSubscribedToVideo); \
	DECLARE_FUNCTION(execUnSubscribeVideo); \
	DECLARE_FUNCTION(execSubscribeVideo); \
	DECLARE_FUNCTION(execLeaveMeeting); \
	DECLARE_FUNCTION(execEndMeeting); \
	DECLARE_FUNCTION(execJoinZoomEventMeeting); \
	DECLARE_FUNCTION(execJoinMeeting); \
	DECLARE_FUNCTION(execStartMeeting); \
	DECLARE_FUNCTION(execLogOut); \
	DECLARE_FUNCTION(execInitAuthSDK); \
	DECLARE_FUNCTION(execGetAuthResult); \
	DECLARE_FUNCTION(execSDKAuthJWT); \
	DECLARE_FUNCTION(execCleanupSDK); \
	DECLARE_FUNCTION(execInitSDK); \
	DECLARE_FUNCTION(execIsAuthResultSuccess); \
	DECLARE_FUNCTION(execIsSDKErrorSuccess);


#define FID_Zoom_Unreal_Experiments_Zoom_Example_Projects_Zoom_Sample_Project_Release_v1_0_Plugins_ZoomMeetingSDK_Source_ZoomMeetingSDK_Public_ZoomMeetingSDKBPLibrary_h_38_ACCESSORS
#define FID_Zoom_Unreal_Experiments_Zoom_Example_Projects_Zoom_Sample_Project_Release_v1_0_Plugins_ZoomMeetingSDK_Source_ZoomMeetingSDK_Public_ZoomMeetingSDKBPLibrary_h_38_INCLASS \
private: \
	static void StaticRegisterNativesUZoomMeetingSDKBPLibrary(); \
	friend struct Z_Construct_UClass_UZoomMeetingSDKBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UZoomMeetingSDKBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ZoomMeetingSDK"), NO_API) \
	DECLARE_SERIALIZER(UZoomMeetingSDKBPLibrary)


#define FID_Zoom_Unreal_Experiments_Zoom_Example_Projects_Zoom_Sample_Project_Release_v1_0_Plugins_ZoomMeetingSDK_Source_ZoomMeetingSDK_Public_ZoomMeetingSDKBPLibrary_h_38_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UZoomMeetingSDKBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UZoomMeetingSDKBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UZoomMeetingSDKBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UZoomMeetingSDKBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UZoomMeetingSDKBPLibrary(UZoomMeetingSDKBPLibrary&&); \
	NO_API UZoomMeetingSDKBPLibrary(const UZoomMeetingSDKBPLibrary&); \
public: \
	NO_API virtual ~UZoomMeetingSDKBPLibrary();


#define FID_Zoom_Unreal_Experiments_Zoom_Example_Projects_Zoom_Sample_Project_Release_v1_0_Plugins_ZoomMeetingSDK_Source_ZoomMeetingSDK_Public_ZoomMeetingSDKBPLibrary_h_36_PROLOG
#define FID_Zoom_Unreal_Experiments_Zoom_Example_Projects_Zoom_Sample_Project_Release_v1_0_Plugins_ZoomMeetingSDK_Source_ZoomMeetingSDK_Public_ZoomMeetingSDKBPLibrary_h_38_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Zoom_Unreal_Experiments_Zoom_Example_Projects_Zoom_Sample_Project_Release_v1_0_Plugins_ZoomMeetingSDK_Source_ZoomMeetingSDK_Public_ZoomMeetingSDKBPLibrary_h_38_SPARSE_DATA \
	FID_Zoom_Unreal_Experiments_Zoom_Example_Projects_Zoom_Sample_Project_Release_v1_0_Plugins_ZoomMeetingSDK_Source_ZoomMeetingSDK_Public_ZoomMeetingSDKBPLibrary_h_38_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Zoom_Unreal_Experiments_Zoom_Example_Projects_Zoom_Sample_Project_Release_v1_0_Plugins_ZoomMeetingSDK_Source_ZoomMeetingSDK_Public_ZoomMeetingSDKBPLibrary_h_38_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Zoom_Unreal_Experiments_Zoom_Example_Projects_Zoom_Sample_Project_Release_v1_0_Plugins_ZoomMeetingSDK_Source_ZoomMeetingSDK_Public_ZoomMeetingSDKBPLibrary_h_38_RPC_WRAPPERS \
	FID_Zoom_Unreal_Experiments_Zoom_Example_Projects_Zoom_Sample_Project_Release_v1_0_Plugins_ZoomMeetingSDK_Source_ZoomMeetingSDK_Public_ZoomMeetingSDKBPLibrary_h_38_ACCESSORS \
	FID_Zoom_Unreal_Experiments_Zoom_Example_Projects_Zoom_Sample_Project_Release_v1_0_Plugins_ZoomMeetingSDK_Source_ZoomMeetingSDK_Public_ZoomMeetingSDKBPLibrary_h_38_INCLASS \
	FID_Zoom_Unreal_Experiments_Zoom_Example_Projects_Zoom_Sample_Project_Release_v1_0_Plugins_ZoomMeetingSDK_Source_ZoomMeetingSDK_Public_ZoomMeetingSDKBPLibrary_h_38_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ZOOMMEETINGSDK_API UClass* StaticClass<class UZoomMeetingSDKBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Zoom_Unreal_Experiments_Zoom_Example_Projects_Zoom_Sample_Project_Release_v1_0_Plugins_ZoomMeetingSDK_Source_ZoomMeetingSDK_Public_ZoomMeetingSDKBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
