// Copyright : All rights reserved by Zoom Video Communications 2022-

#pragma once

#include "Components/ActorComponent.h"
#include "Delegates/Delegate.h"
#include "SDKUtils.h"
#include "ZoomMeetingSDKBPDefine.h"
#include "ZoomUESDKDef.h"
#include "meeting_service_components/meeting_breakout_rooms_interface_v2.h"
#include "meeting_service_interface.h"
#include "notification_service_interface.h"

// clang-format off
#include "ZoomMeetingSDKEventHandler.generated.h"
// clang-format on

// IAuthServiceEvent delegates
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnLogout);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAuthenticationReturn, FString,
                                            ret);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnLoginReturn, FString,
                                             login_status, FString,
                                             login_fail_reason);

// IMeetingServiceEvent delegates.
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMeetingParameter,
                                            FUEMeetingParameter, meeting_param);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMeetingStatusChanged, FString,
                                             status, int32, result);

// IMeetingParticipantsCtrlEvent Delegates
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCoHostChanged, int64, user_id,
                                             bool, is_cohost);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHostChanged, int64, user_id);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUserJoined, int64, user_id);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUserLeft, int64, user_id);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnUserNameChanged, int64, user_id,
                                             FString, userName);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnLowOrRaiseHandStatusChanged,
                                             bool, low, int64, user_id);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAllHandsLowered);

// IMeetingQAControllerEvent Delegates
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAddAnswer, FString, answerID,
                                             bool, bSuccess);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAddQuestion, FString,
                                             questionID, bool, bSuccess);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAllowAskQuestionAnonymousStatus,
                                            bool, bEnabled);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(
    FOnAllowAttendeeCommentQuestionStatus, bool, bEnabled);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(
    FOnAllowAttendeeViewAllQuestionStatus, bool, bEnabled);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(
    FOnAllowAttendeeVoteupQuestionStatus, bool, bEnabled);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDeleteAnswer, FString, answerID);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDeleteQuestion, FString,
                                            questionID);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnQAConnectStatus, int64,
                                            connectStatus);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnQuestionMarkedAsDismissed,
                                            FString, questionID);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnReceiveAnswer, FString,
                                            answerID);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnReceiveQuestion, FString,
                                            questionID);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnRefreshQAData);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnReopenQuestion, FString,
                                            questionID);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnRevokeUpvoteQuestion, FString,
                                             questionID, bool, order_changed);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnUpvoteQuestion, FString,
                                             questionID, bool, order_changed);

// IBOAdminEvent
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnBOEndTimerUpdated, int64,
                                             remaining, bool, isTimesUpNotice);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStartBOError, FString, errCode);

// IBOAttendeeEvent
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnHostJoinedThisBOMeeting);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnHostLeaveThisBOMeeting);

// IBOCreatorEvent
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBOCreateSuccess, FString,
                                            strBOID);

// IBODataEvent
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBOInfoUpdated, FString, strBOID);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnUnAssignedUserUpdated);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnBOListInfoUpdated);

// IMeetingBOControllerEvent
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnHasCreatorRights);

/* Incomplete BP wrappers
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnHasAdminRights);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnHasAssistantRights);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnHasAttendeeRights);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnLostAdminRights);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnLostAssistantRights);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnLostAttendeeRights);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnLostCreatorRights);
*/

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBOStatusChanged, FString,
                                            bo_status);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBOStopCountDown, int64,
                                            nSeconds);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnBOSwitchRequestReceived,
                                             FString, strNewBOName, FString,
                                             strNewBOID);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnNewBroadcastMessageReceived,
                                             FString, strMsg, int64, nSenderID);

// IMeetingConfigurationEvent
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWebinarNeedRegister, FString,
                                            webinar_need_registration_type);

// IMeetingWebinarCtrlEvent
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAllowPanelistStartVideo);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDisallowPanelistStartVideo);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAllowAttendeeChat);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDisallowAttendeeChat);

// IMeetingWaitingRoomEvent
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWatingRoomUserJoin, int64,
                                            userID);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWatingRoomUserLeft, int64,
                                            userID);

// IAudioSettingContextEvent
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnDefaultMicDeviceChanged,
                                             FString, deviceID, FString,
                                             deviceName);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnDefaultSpeakerDeviceChanged,
                                             FString, deviceID, FString,
                                             deviceName);
// INotificationServiceEvent
DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnMeetingDeviceListChanged,
                                              int64, nIndex, FString,
                                              deviceName, FString, meetingTopic,
                                              int64, meetingNumber);

// IMeetingParticipantsCtrlEvent
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnUserVideoStatusChange, int64,
                                             userId, FString, videoStatus);

// IEmojiReactionControllerEvent
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnEmojiReactionReceived, int64,
                                             user_id, FString, type);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEmojiReactionReceivedInWebinar,
                                            FString, type);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnEmojiFeedbackReceived, int64,
                                             user_id, FString, type);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEmojiFeedbackCanceled, int64,
                                            user_id);

// IMeetingChatCtrlEvent
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnChatMsgDeleteNotification,
                                             FString, msgID, FString, deleteBy);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(
    FOnChatMsgNotificationNormalMeetingChatStatus, bool, can_chat, bool,
    can_chat_to_all, bool, can_chat_to_individual, bool,
    is_only_can_chat_to_host);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(
    FOnChatMsgNotificationWebinarAttendeeChatStatus, bool, can_chat, bool,
    can_chat_to_all_panellist_and_attendee, bool, can_chat_to_all_panellist);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(
    FOnChatMsgNotificationWebinarOtherUserRoleChatStatus, bool,
    can_chat_to_all_panellist, bool, can_chat_to_all_panellist_and_attendee,
    bool, can_chat_to_individual);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnChatMsgNotification,
                                             FUEChatMsgInfo, chatMsg, FString,
                                             content);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnShareMeetingChatStatusChanged,
                                            bool, isStart);

// IMeetingRecordingCtrlEvent
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRecordPrivilegeChanged, bool,
                                            bCanRecord);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(
    FOnLocalRecordingPrivilegeRequestStatus, FString, status);

// IMeetingShareCtrlEvent
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSharingStatus, FString, status,
                                             int64, userId);

/**
 * This class includes callbacks from various Zoom related interfaces.
 */
UCLASS(Blueprintable)
class ZOOMMEETINGSDK_API UZoomMeetingSDKEventHandler : public UObject {
  GENERATED_BODY()

public:
  // Delegate events in Blueprint

  // IAuthServiceEvent
  UPROPERTY(BlueprintAssignable,
            meta = (DisplayName = "OnLogoutDelegate",
                    Keywords = "SDK Logout Callback"),
            Category = "Zoom Meeting SDK Plug-in | Events | InitAuthEvent")
  FOnLogout OnLogoutDelegate;
  UPROPERTY(BlueprintAssignable,
            meta = (DisplayName = "OnAuthenticationReturnDelegate",
                    Keywords = "SDK Auth Callback"),
            Category = "Zoom Meeting SDK Plug-in | Events | InitAuthEvent")
  FOnAuthenticationReturn OnAuthenticationReturnDelegate;
  UPROPERTY(BlueprintAssignable,
            meta = (DisplayName = "OnLoginReturnDelegate",
                    Keywords = "SDK login return Callback"),
            Category = "Zoom Meeting SDK Plug-in | Events | InitAuthEvent")
  FOnLoginReturn OnLoginReturnDelegate;

  // IMeetingServiceEvent
  UPROPERTY(
      BlueprintAssignable,
      meta = (DisplayName = "OnMeetingParameterDelegate",
              Keywords = "SDK meeting service Callback"),
      Category = "Zoom Meeting SDK Plug-in | Events | MeetingServiceEvent")
  FOnMeetingParameter OnMeetingParameterDelegate;

  UPROPERTY(
      BlueprintAssignable,
      meta = (DisplayName = "OnMeetingStatusChanged",
              Keywords = "SDK Meeting Status Callback"),
      Category = "Zoom Meeting SDK Plug-in | Events | MeetingServiceEvent")
  FOnMeetingStatusChanged OnMeetingStatusChanged;

  // IMeetingParticipantsCtrlEvent
  UPROPERTY(
      BlueprintAssignable,
      meta = (DisplayName = "OnCoHostChangedDelegate",
              Keywords =
                  "IMeetingParticipantsCtrlEvent.onCoHostChangeNotification"),
      Category =
          "Zoom Meeting SDK Plug-in | Events | MeetingParticipantsCtrlEvent")
  FOnCoHostChanged OnCoHostChangedDelegate;

  UPROPERTY(
      BlueprintAssignable,
      meta =
          (DisplayName = "OnHostChangedDelegate",
           Keywords = "IMeetingParticipantsCtrlEvent.onHostChangeNotification"),
      Category =
          "Zoom Meeting SDK Plug-in | Events | MeetingParticipantsCtrlEvent")
  FOnHostChanged OnHostChangedDelegate;

  UPROPERTY(
      BlueprintAssignable,
      meta = (DisplayName = "OnUserJoinedDelegate",
              Keywords = "IMeetingParticipantsCtrlEvent.onUserJoin"),
      Category =
          "Zoom Meeting SDK Plug-in | Events | MeetingParticipantsCtrlEvent")
  FOnUserJoined OnUserJoinedDelegate;

  UPROPERTY(
      BlueprintAssignable,
      meta = (DisplayName = "OnUserLeftDelegate",
              Keywords = "IMeetingParticipantsCtrlEvent.onUserLeft"),
      Category =
          "Zoom Meeting SDK Plug-in | Events | MeetingParticipantsCtrlEvent")
  FOnUserLeft OnUserLeftDelegate;

  UPROPERTY(
      BlueprintAssignable,
      meta = (DisplayName = "OnUserNameChangedDelegate",
              Keywords = "IMeetingParticipantsCtrlEvent.onUserNameChanged"),
      Category =
          "Zoom Meeting SDK Plug-in | Events | MeetingParticipantsCtrlEvent")
  FOnUserNameChanged OnUserNameChangedDelegate;

  UPROPERTY(
      BlueprintAssignable,
      meta =
          (DisplayName = "OnLowOrRaiseHandStatusChangedDelegate",
           Keywords =
               "IMeetingParticipantsCtrlEvent.onLowOrRaiseHandStatusChanged"),
      Category =
          "Zoom Meeting SDK Plug-in | Events | MeetingParticipantsCtrlEvent")
  FOnLowOrRaiseHandStatusChanged OnLowOrRaiseHandStatusChangedDelegate;

  UPROPERTY(
      BlueprintAssignable,
      meta = (DisplayName = "OnAllHandsLoweredDelegate",
              Keywords = "IMeetingParticipantsCtrlEvent.onAllHandsLowered"),
      Category =
          "Zoom Meeting SDK Plug-in | Events | MeetingParticipantsCtrlEvent")
  FOnAllHandsLowered OnAllHandsLoweredDelegate;

  // IMeetingQAControllerEvent
  UPROPERTY(
      BlueprintAssignable,
      meta = (DisplayName = "OnAddAnswerDelegate",
              Keywords = "IMeetingQAControllerEvent.OnAddAnswer"),
      Category = "Zoom Meeting SDK Plug-in | Events | MeetingQAControllerEvent")
  FOnAddAnswer OnAddAnswerDelegate;

  UPROPERTY(
      BlueprintAssignable,
      meta = (DisplayName = "OnAddQuestionDelegate",
              Keywords = "IMeetingQAControllerEvent.OnAddQuestion"),
      Category = "Zoom Meeting SDK Plug-in | Events | MeetingQAControllerEvent")
  FOnAddQuestion OnAddQuestionDelegate;

  UPROPERTY(
      BlueprintAssignable,
      meta =
          (DisplayName = "OnAllowAskQuestionAnonymousStatusDelegate",
           Keywords =
               "IMeetingQAControllerEvent.OnAllowAskQuestionAnonymousStatus"),
      Category = "Zoom Meeting SDK Plug-in | Events | MeetingQAControllerEvent")
  FOnAllowAskQuestionAnonymousStatus OnAllowAskQuestionAnonymousStatusDelegate;

  FString allow_attendee_keyword_str =
      "IMeetingQAControllerEvent.OnAllowAttendeeCommentQuestionStatus";
  UPROPERTY(
      BlueprintAssignable,
      meta = (DisplayName = "OnAllowAttendeeCommentQuestionStatusDelegate",
              Keywords = allow_attendee_keyword_str),
      Category = "Zoom Meeting SDK Plug-in | Events | MeetingQAControllerEvent")
  FOnAllowAttendeeCommentQuestionStatus
      OnAllowAttendeeCommentQuestionStatusDelegate;

  FString allow_attendee_view_all_keyword_str =
      "IMeetingQAControllerEvent.OnAllowAttendeeViewAllQuestionStatus";
  UPROPERTY(
      BlueprintAssignable,
      meta = (DisplayName = "OnAllowAttendeeViewAllQuestionStatusDelegate",
              Keywords = allow_attendee_view_all_keyword_str),
      Category = "Zoom Meeting SDK Plug-in | Events | MeetingQAControllerEvent")
  FOnAllowAttendeeViewAllQuestionStatus
      OnAllowAttendeeViewAllQuestionStatusDelegate;

  FString allow_attendee_voteup_keyword_str =
      "IMeetingQAControllerEvent.OnAllowAttendeeVoteupQuestionStatus";
  UPROPERTY(
      BlueprintAssignable,
      meta = (DisplayName = "OnAllowAttendeeVoteupQuestionStatusDelegate",
              Keywords = allow_attendee_voteup_keyword_str),
      Category = "Zoom Meeting SDK Plug-in | Events | MeetingQAControllerEvent")
  FOnAllowAttendeeVoteupQuestionStatus
      OnAllowAttendeeVoteupQuestionStatusDelegate;

  UPROPERTY(
      BlueprintAssignable,
      meta = (DisplayName = "OnDeleteAnswerDelegate",
              Keywords = "IMeetingQAControllerEvent.OnDeleteAnswer"),
      Category = "Zoom Meeting SDK Plug-in | Events | MeetingQAControllerEvent")
  FOnDeleteAnswer OnDeleteAnswerDelegate;

  UPROPERTY(
      BlueprintAssignable,
      meta = (DisplayName = "OnDeleteQuestionDelegate",
              Keywords = "IMeetingQAControllerEvent.OnDeleteQuestion"),
      Category = "Zoom Meeting SDK Plug-in | Events | MeetingQAControllerEvent")
  FOnDeleteQuestion OnDeleteQuestionDelegate;

  UPROPERTY(
      BlueprintAssignable,
      meta = (DisplayName = "OnQAConnectStatusDelegate",
              Keywords = "IMeetingQAControllerEvent.OnQAConnectStatus"),
      Category = "Zoom Meeting SDK Plug-in | Events | MeetingQAControllerEvent")
  FOnQAConnectStatus OnQAConnectStatusDelegate;

  UPROPERTY(
      BlueprintAssignable,
      meta =
          (DisplayName = "OnQuestionMarkedAsDismissedDelegate",
           Keywords = "IMeetingQAControllerEvent.OnQuestionMarkedAsDismissed"),
      Category = "Zoom Meeting SDK Plug-in | Events | MeetingQAControllerEvent")
  FOnQuestionMarkedAsDismissed OnQuestionMarkedAsDismissedDelegate;

  UPROPERTY(
      BlueprintAssignable,
      meta = (DisplayName = "OnReceiveAnswerDelegate",
              Keywords = "IMeetingQAControllerEvent.OnReceiveAnswer"),
      Category = "Zoom Meeting SDK Plug-in | Events | MeetingQAControllerEvent")
  FOnReceiveAnswer OnReceiveAnswerDelegate;

  UPROPERTY(
      BlueprintAssignable,
      meta = (DisplayName = "OnReceiveQuestionDelegate",
              Keywords = "IMeetingQAControllerEvent.OnReceiveQuestion"),
      Category = "Zoom Meeting SDK Plug-in | Events | MeetingQAControllerEvent")
  FOnReceiveQuestion OnReceiveQuestionDelegate;

  UPROPERTY(
      BlueprintAssignable,
      meta = (DisplayName = "OnRefreshQADataDelegate",
              Keywords = "IMeetingQAControllerEvent.OnRefreshQAData"),
      Category = "Zoom Meeting SDK Plug-in | Events | MeetingQAControllerEvent")
  FOnRefreshQAData OnRefreshQADataDelegate;

  UPROPERTY(
      BlueprintAssignable,
      meta = (DisplayName = "OnReopenQuestionDelegate",
              Keywords = "IMeetingQAControllerEvent.OnReopenQuestion"),
      Category = "Zoom Meeting SDK Plug-in | Events | MeetingQAControllerEvent")
  FOnReopenQuestion OnReopenQuestionDelegate;

  UPROPERTY(
      BlueprintAssignable,
      meta = (DisplayName = "OnRevokeUpvoteQuestionDelegate",
              Keywords = "IMeetingQAControllerEvent.OnRevokeUpvoteQuestion"),
      Category = "Zoom Meeting SDK Plug-in | Events | MeetingQAControllerEvent")
  FOnRevokeUpvoteQuestion OnRevokeUpvoteQuestionDelegate;

  UPROPERTY(
      BlueprintAssignable,
      meta = (DisplayName = "OnUpvoteQuestionDelegate",
              Keywords = "IMeetingQAControllerEvent.OnUpvoteQuestion"),
      Category = "Zoom Meeting SDK Plug-in | Events | MeetingQAControllerEvent")
  FOnUpvoteQuestion OnUpvoteQuestionDelegate;

  // IBOAdminEvent
  UPROPERTY(BlueprintAssignable,
            meta = (DisplayName = "OnBOEndTimerUpdatedDelegate",
                    Keywords = "IBOAdminEvent.onBOEndTimerUpdated"),
            Category = "Zoom Meeting SDK Plug-in | Events | BOAdminEvent")
  FOnBOEndTimerUpdated OnBOEndTimerUpdatedDelegate;

  UPROPERTY(BlueprintAssignable,
            meta = (DisplayName = "OnStartBOErrorDelegate",
                    Keywords = "IBOAdminEvent.onStartBOError"),
            Category = "Zoom Meeting SDK Plug-in | Events | BOAdminEvent")
  FOnStartBOError OnStartBOErrorDelegate;

  // IBOAttendeeEvent
  UPROPERTY(BlueprintAssignable,
            meta = (DisplayName = "OnHostJoinedThisBOMeetingDelegate",
                    Keywords = "IBOAttendeeEvent.onHostJoinedThisBOMeeting"),
            Category = "Zoom Meeting SDK Plug-in | Events | BOAttendeeEvent")
  FOnHostJoinedThisBOMeeting OnHostJoinedThisBOMeetingDelegate;

  UPROPERTY(BlueprintAssignable,
            meta = (DisplayName = "OnHostLeaveThisBOMeetingDelegate",
                    Keywords = "IBOAttendeeEvent.onHostLeaveThisBOMeeting"),
            Category = "Zoom Meeting SDK Plug-in | Events | BOAttendeeEvent")
  FOnHostLeaveThisBOMeeting OnHostLeaveThisBOMeetingDelegate;

  // IBOCreatorEvent
  UPROPERTY(BlueprintAssignable,
            meta = (DisplayName = "OnBOCreateSuccessDelegate",
                    Keywords = "IBOCreatorEvent.onBOCreateSuccess"),
            Category = "Zoom Meeting SDK Plug-in | Events | BOCreatorEvent")
  FOnBOCreateSuccess OnBOCreateSuccessDelegate;

  // IBODataEvent
  UPROPERTY(BlueprintAssignable,
            meta = (DisplayName = "OnBOInfoUpdatedDelegate",
                    Keywords = "IBODataEvent.onBOInfoUpdated"),
            Category = "Zoom Meeting SDK Plug-in | Events | BODataEvent")
  FOnBOInfoUpdated OnBOInfoUpdatedDelegate;

  UPROPERTY(BlueprintAssignable,
            meta = (DisplayName = "OnUnAssignedUserUpdatedDelegate",
                    Keywords = "IBODataEvent.onUnAssignedUserUpdated"),
            Category = "Zoom Meeting SDK Plug-in | Events | BODataEvent")
  FOnUnAssignedUserUpdated OnUnAssignedUserUpdatedDelegate;

  UPROPERTY(BlueprintAssignable,
            meta = (DisplayName = "OnBOListInfoUpdatedDelegate",
                    Keywords = "IBODataEvent.onBOListInfoUpdated"),
            Category = "Zoom Meeting SDK Plug-in | Events | BODataEvent")
  FOnBOListInfoUpdated OnBOListInfoUpdatedDelegate;

  // IMeetingBOControllerEvent
  /* Incomplete BP wrappers
  UPROPERTY(
      BlueprintAssignable,
      meta = (DisplayName = "OnHasCreatorRightsDelegate",
              Keywords =
                  "IMeetingBOControllerEvent.onHasCreatorRightsNotification"),
      Category =
          "Zoom Meeting SDK Plug-in | Events | BOMeetingBOControllerEvent")
  FOnHasCreatorRights OnHasCreatorRightsDelegate;

  UPROPERTY(
      BlueprintAssignable,
      meta =
          (DisplayName = "OnHasAdminRightsDelegate",
           Keywords = "IMeetingBOControllerEvent.onHasAdminRightsNotification"),
      Category =
          "Zoom Meeting SDK Plug-in | Events | BOMeetingBOControllerEvent")
  FOnHasAdminRights OnHasAdminRightsDelegate;

  UPROPERTY(
      BlueprintAssignable,
      meta =
          (DisplayName = "OnHasAssistantRightsDelegate",
           Keywords = "IMeetingBOControllerEvent.onHasAssistantRightsNotification"),
      Category =
          "Zoom Meeting SDK Plug-in | Events | BOMeetingBOControllerEvent")
  FOnHasAssistantRights OnHasAssistantRightsDelegate;

  UPROPERTY(
      BlueprintAssignable,
      meta = (DisplayName = "OnHasAttendeeRightsDelegate",
              Keywords =
                  "IMeetingBOControllerEvent.onHasAttendeeRightsNotification"),
      Category =
          "Zoom Meeting SDK Plug-in | Events | BOMeetingBOControllerEvent")
  FOnHasAttendeeRights OnHasAttendeeRightsDelegate;

  UPROPERTY(
      BlueprintAssignable,
      meta = (DisplayName = "OnLostAdminRightsDelegate",
              Keywords =
                  "IMeetingBOControllerEvent.onLostAdminRightsNotification"),
      Category =
          "Zoom Meeting SDK Plug-in | Events | BOMeetingBOControllerEvent")
  FOnLostAdminRights OnLostAdminRightsDelegate;

  UPROPERTY(
      BlueprintAssignable,
      meta =
          (DisplayName = "OnLostAssistantRightsDelegate",
           Keywords =
               "IMeetingBOControllerEvent.onLostAssistantRightsNotification"),
      Category =
          "Zoom Meeting SDK Plug-in | Events | BOMeetingBOControllerEvent")
  FOnLostAssistantRights OnLostAssistantRightsDelegate;

  UPROPERTY(
      BlueprintAssignable,
      meta = (DisplayName = "OnLostAttendeeRightsDelegate",
              Keywords =
                  "IMeetingBOControllerEvent.onLostAttendeeRightsNotification"),
      Category =
          "Zoom Meeting SDK Plug-in | Events | BOMeetingBOControllerEvent")
  FOnLostAttendeeRights OnLostAttendeeRightsDelegate;

  UPROPERTY(
      BlueprintAssignable,
      meta = (DisplayName = "OnLostCreatorRightsDelegate",
              Keywords =
                  "IMeetingBOControllerEvent.onLostAttendeeRightsNotification"),
      Category =
          "Zoom Meeting SDK Plug-in | Events | BOMeetingBOControllerEvent")
  FOnLostCreatorRights OnLostCreatorRightsDelegate;
  */

  UPROPERTY(
      BlueprintAssignable,
      meta = (DisplayName = "OnBOStatusChangedDelegate",
              Keywords = "IMeetingBOControllerEvent.onBOStatusChanged"),
      Category =
          "Zoom Meeting SDK Plug-in | Events | BOMeetingBOControllerEvent")
  FOnBOStatusChanged OnBOStatusChangedDelegate;

  UPROPERTY(
      BlueprintAssignable,
      meta = (DisplayName = "OnBOStopCountDownDelegate",
              Keywords = "IMeetingBOControllerEvent.onBOStopCountDown"),
      Category =
          "Zoom Meeting SDK Plug-in | Events | BOMeetingBOControllerEvent")
  FOnBOStopCountDown OnBOStopCountDownDelegate;

  UPROPERTY(
      BlueprintAssignable,
      meta = (DisplayName = "OnBOSwitchRequestReceivedDelegate",
              Keywords = "IMeetingBOControllerEvent.onBOSwitchRequestReceived"),
      Category =
          "Zoom Meeting SDK Plug-in | Events | BOMeetingBOControllerEvent")
  FOnBOSwitchRequestReceived OnBOSwitchRequestReceivedDelegate;

  UPROPERTY(
      BlueprintAssignable,
      meta = (DisplayName = "OnNewBroadcastMessageReceivedDelegate",
              Keywords =
                  "IMeetingBOControllerEvent.onNewBroadcastMessageReceived"),
      Category =
          "Zoom Meeting SDK Plug-in | Events | BOMeetingBOControllerEvent")
  FOnNewBroadcastMessageReceived OnNewBroadcastMessageReceivedDelegate;

  // IMeetingConfigurationEvent
  UPROPERTY(
      BlueprintAssignable,
      meta =
          (DisplayName = "OnWebinarNeedRegisterDelegate",
           Keywords =
               "IMeetingConfigurationEvent.onWebinarNeedRegisterNotification"),
      Category =
          "Zoom Meeting SDK Plug-in | Events | MeetingConfigurationEvent")
  FOnWebinarNeedRegister OnWebinarNeedRegisterDelegate;

  // IMeetingWebinarCtrlEvent
  FString onAllowPanelistStartVideo_keyword =
      "IMeetingWebinarCtrlEvent.onAllowPanelistStartVideoNotification";
  UPROPERTY(
      BlueprintAssignable,
      meta = (DisplayName = "OnAllowPanelistStartVideoDelegate",
              Keywords = "onAllowPanelistStartVideo_keyword"),
      Category = "Zoom Meeting SDK Plug-in | Events | MeetingWebinarCtrlEvent")
  FOnAllowPanelistStartVideo OnAllowPanelistStartVideoDelegate;

  FString onDisallowPanelistStartVideo_keyword =
      "IMeetingWebinarCtrlEvent.onDisallowPanelistStartVideoNotification";
  UPROPERTY(
      BlueprintAssignable,
      meta = (DisplayName = "OnDisallowPanelistStartVideoDelegate",
              Keywords = "onDisallowPanelistStartVideo_keyword"),
      Category = "Zoom Meeting SDK Plug-in | Events | MeetingWebinarCtrlEvent")
  FOnDisallowPanelistStartVideo OnDisallowPanelistStartVideoDelegate;

  FString onAllowAttendeeChat_keyword =
      "IMeetingWebinarCtrlEvent.onAllowAttendeeChatNotification";
  UPROPERTY(
      BlueprintAssignable,
      meta = (DisplayName = "OnAllowAttendeeChatDelegate",
              Keywords = "onAllowAttendeeChat_keyword"),
      Category = "Zoom Meeting SDK Plug-in | Events | MeetingWebinarCtrlEvent")
  FOnAllowAttendeeChat OnAllowAttendeeChatDelegate;

  FString onDisallowAttendeeChat_keyword =
      "IMeetingWebinarCtrlEvent.onDisallowAttendeeChatNotification";
  UPROPERTY(
      BlueprintAssignable,
      meta = (DisplayName = "OnDisallowAttendeeChatDelegate",
              Keywords = "onDisallowAttendeeChat_keyword"),
      Category = "Zoom Meeting SDK Plug-in | Events | MeetingWebinarCtrlEvent")
  FOnDisallowAttendeeChat OnDisallowAttendeeChatDelegate;

  // IMeetingWaitingRoomEvent
  UPROPERTY(
      BlueprintAssignable,
      meta = (DisplayName = "OnWatingRoomUserJoinDelegate",
              Keywords = "IMeetingWaitingRoomEvent.onWatingRoomUserJoin"),
      Category = "Zoom Meeting SDK Plug-in | Events | MeetingWaitingRoomEvent")
  FOnWatingRoomUserJoin OnWatingRoomUserJoinDelegate;

  UPROPERTY(
      BlueprintAssignable,
      meta = (DisplayName = "OnWatingRoomUserLeftDelegate",
              Keywords = "IMeetingWaitingRoomEvent.onWatingRoomUserLeft"),
      Category = "Zoom Meeting SDK Plug-in | Events | MeetingWaitingRoomEvent")
  FOnWatingRoomUserLeft OnWatingRoomUserLeftDelegate;

  // IAudioSettingContextEvent
  UPROPERTY(
      BlueprintAssignable,
      meta = (DisplayName = "OnDefaultMicDeviceChangedDelegate",
              Keywords = "IAudioSettingContextEvent.onDefaultMicDeviceChanged"),
      Category = "Zoom Meeting SDK Plug-in | Events | AudioSettingContextEvent")
  FOnDefaultMicDeviceChanged OnDefaultMicDeviceChangedDelegate;

  UPROPERTY(
      BlueprintAssignable,
      meta = (DisplayName = "OnDefaultSpeakerDeviceChangedDelegate",
              Keywords =
                  "IAudioSettingContextEvent.onDefaultSpeakerDeviceChanged"),
      Category = "Zoom Meeting SDK Plug-in | Events | AudioSettingContextEvent")
  FOnDefaultSpeakerDeviceChanged OnDefaultSpeakerDeviceChangedDelegate;

  UPROPERTY(
      BlueprintAssignable,
      meta =
          (DisplayName = "OnMeetingDeviceListChangedDelegate",
           Keywords = "INotificationServiceEvent.onMeetingDeviceListChanged"),
      Category = "Zoom Meeting SDK Plug-in | Events | NotificationServiceEvent")
  FOnMeetingDeviceListChanged OnMeetingDeviceListChangedDelegate;

  UPROPERTY(
      BlueprintAssignable,
      meta = (DisplayName = "OnUserVideoStatusChangedDelegate",
              Keywords = "IMeetingVideoCtrlEvent.onUserVideoStatusChange"),
      Category = "Zoom Meeting SDK Plug-in | Events | IMeetingVideoCtrlEvent")
  FOnUserVideoStatusChange OnUserVideoStatusChangedDelegate;

  UPROPERTY(
      BlueprintAssignable,
      meta =
          (DisplayName = "OnEmojiReactionReceivedDelegate",
           Keywords = "IEmojiReactionControllerEvent.OnEmojiReactionReceived"),
      Category =
          "Zoom Meeting SDK Plug-in | Events | IEmojiReactionControllerEvent")
  FOnEmojiReactionReceived OnEmojiReactionReceivedDelegate;

  UPROPERTY(
      BlueprintAssignable,
      meta =
          (DisplayName = "OnEmojiFeedbackReceivedDelegate",
           Keywords = "IEmojiReactionControllerEvent.OnEmojiFeedbackReceived"),
      Category =
          "Zoom Meeting SDK Plug-in | Events | IEmojiReactionControllerEvent")
  FOnEmojiFeedbackReceived OnEmojiFeedbackReceivedDelegate;

  UPROPERTY(
      BlueprintAssignable,
      meta =
          (DisplayName = "OnEmojiFeedbackCanceledDelegate",
           Keywords = "IEmojiReactionControllerEvent.OnEmojiFeedbackCanceled"),
      Category =
          "Zoom Meeting SDK Plug-in | Events | IEmojiReactionControllerEvent")
  FOnEmojiFeedbackCanceled OnEmojiFeedbackCanceledDelegate;

  // clang-format off
  UPROPERTY(
      BlueprintAssignable,
      meta = (DisplayName = "OnEmojiReactionReceivedInWebinarDelegate",
              Keywords = 
        "IEmojiReactionControllerEvent.OnEmojiReactionReceivedInWebinar"),
      Category =
          "Zoom Meeting SDK Plug-in | Events | IEmojiReactionControllerEvent")
  // clang-format on

  FOnEmojiReactionReceivedInWebinar OnEmojiReactionReceivedInWebinarDelegate;

  UPROPERTY(
      BlueprintAssignable,
      meta = (DisplayName = "OnChatMsgDeleteNotification",
              Keywords = "IMeetingChatCtrlEvent.onChatMsgDeleteNotification"),
      Category = "Zoom Meeting SDK Plug-in | Events | IMeetingChatCtrlEvent")
  FOnChatMsgDeleteNotification OnChatMsgDeleteNotificationDelegate;

  UPROPERTY(
      BlueprintAssignable,
      meta = (DisplayName = "OnChatMsgNotificationNormalMeetingChatStatus",
              Keywords = "IMeetingChatCtrlEvent.onChatMsgNotifcation"),
      Category = "Zoom Meeting SDK Plug-in | Events | IMeetingChatCtrlEvent")
  FOnChatMsgNotificationNormalMeetingChatStatus
      OnChatMsgNotificationNormalMeetingChatStatus;

  UPROPERTY(
      BlueprintAssignable,
      meta = (DisplayName = "OnChatMsgNotificationWebinarAttendeeChatStatus",
              Keywords = "IMeetingChatCtrlEvent.onChatMsgNotifcation"),
      Category = "Zoom Meeting SDK Plug-in | Events | IMeetingChatCtrlEvent")
  FOnChatMsgNotificationWebinarAttendeeChatStatus
      OnChatMsgNotificationWebinarAttendeeChatStatus;

  UPROPERTY(
      BlueprintAssignable,
      meta =
          (DisplayName = "OnChatMsgNotificationWebinarOtherUserRoleChatStatus",
           Keywords = "IMeetingChatCtrlEvent.onChatMsgNotifcation"),
      Category = "Zoom Meeting SDK Plug-in | Events | IMeetingChatCtrlEvent")
  FOnChatMsgNotificationWebinarOtherUserRoleChatStatus
      OnChatMsgNotificationWebinarOtherUserRoleChatStatus;

  UPROPERTY(
      BlueprintAssignable,
      meta = (DisplayName = "OnChatMsgNotification",
              Keywords = "IMeetingChatCtrlEvent.OnChatMsgNotification"),
      Category = "Zoom Meeting SDK Plug-in | Events | IMeetingChatCtrlEvent")
  FOnChatMsgNotification OnChatMsgNotification;

  UPROPERTY(
      BlueprintAssignable,
      meta = (DisplayName = "OnShareMeetingChatStatusChanged",
              Keywords = "IMeetingChatCtrlEvent.OnChatMsgNotification"),
      Category = "Zoom Meeting SDK Plug-in | Events | IMeetingChatCtrlEvent")
  FOnShareMeetingChatStatusChanged OnShareMeetingChatStatusChanged;

  UPROPERTY(
      BlueprintAssignable,
      meta = (DisplayName = "OnRecordPrivilegeChanged",
              Keywords = "IMeetingRecordingCtrlEvent.OnRecordPrivilegeChanged"),
      Category =
          "Zoom Meeting SDK Plug-in | Events | IMeetingRecordingCtrlEvent")
  FOnRecordPrivilegeChanged OnRecordPrivilegeChanged;

  UPROPERTY(
      BlueprintAssignable,
      meta = (DisplayName = "OnLocalRecordingPrivilegeRequestStatus",
              Keywords = "IMeetingRecordingCtrlEvent.OnLocalRecordingPrivilegeRequestStatus"),
      Category =
          "Zoom Meeting SDK Plug-in | Events | IMeetingRecordingCtrlEvent")
  FOnLocalRecordingPrivilegeRequestStatus
      OnLocalRecordingPrivilegeRequestStatus;

  // IMeetingShareCtrlEvent
  UPROPERTY(BlueprintAssignable,
            meta = (DisplayName = "OnSharingStatus",
                    Keywords = "IMeetingShareCtrl.OnSharingStatus"),
            Category = "Zoom Meeting SDK Plug-in | Events | IMeetingShareCtrl")
  FOnSharingStatus OnSharingStatus;

public:
  // Callback function definitions

  //--- AuthServiceEvents ---//

  // Logout callback.
  void onLogout();

  // Authentication result callback.
  //
  // The parameter contains the value of the result.
  // "SDKERR_SUCCESS" implies that authentication was successful.
  void onAuthenticationReturn(FString ret);

  // Login result callback.
  //
  // The parameter contains the values of the login result.
  void onLoginReturn(FString login_status, FString login_fail_reason);

  //--- MeetingServiceEvents ---//

  // Meeting parameter notification callback.
  void onMeetingParameterNotification(
      const ZOOM_SDK_NAMESPACE::MeetingParameter *meeting_param);
  // Meeting callbacks
  void onMeetingStatusChanged(FString status, int result);

  //--- MeetingParticipantsCtrlEvent ---//

  void onCoHostChangeNotification(unsigned int userId, bool isCoHost);
  void onHostChangeNotification(unsigned int userId);
  void onUserJoin(unsigned int userId);
  void onUserLeft(unsigned int userId);
  void onUserNameChanged(unsigned int userId, FString userName);
  void onLowOrRaiseHandStatusChanged(bool bLow, unsigned int userId);
  void onAllHandsLowered();

  // IMeetingQAControllerEvent
  void OnAddAnswer(FString answerID, bool bSuccess);
  void OnAddQuestion(FString questionID, bool bSuccess);
  void OnAllowAskQuestionAnonymousStatus(bool bEnabled);
  void OnAllowAttendeeCommentQuestionStatus(bool bEnabled);
  void OnAllowAttendeeViewAllQuestionStatus(bool bEnabled);
  void OnAllowAttendeeVoteupQuestionStatus(bool bEnabled);
  void OnDeleteAnswer(FString answerID);
  void OnDeleteQuestion(FString questionID);
  void OnQAConnectStatus(unsigned int connectStatus);
  void OnQuestionMarkedAsDismissed(FString questionID);
  void OnReceiveAnswer(FString answerID);
  void OnReceiveQuestion(FString questionID);
  void OnRefreshQAData();
  void OnReopenQuestion(FString questionID);
  void OnRevokeUpvoteQuestion(FString questionID, bool order_changed);
  void OnUpvoteQuestion(FString questionID, bool order_changed);

  // IBOAdminEvent
  void OnBOEndTimerUpdated(int remaining, bool isTimesUpNotice);
  void OnStartBOError(FString errCode);

  // IBOAttendeeEvent
  void OnHostJoinedThisBOMeeting();
  void OnHostLeaveThisBOMeeting();

  // IBOCreatorEvent
  void OnBOCreateSuccess(FString strBOID);

  // IBODataEvent
  void onBOInfoUpdated(FString strBOID);
  void onUnAssignedUserUpdated();
  void onBOListInfoUpdated();

  // IMeetingBOControllerEvent
  /* Incomplete BP wrappers
  void onHasCreatorRightsNotification();
  void onHasAdminRightsNotification();
  void onHasAssistantRightsNotification();
  void onHasAttendeeRightsNotification();
  void onLostAdminRightsNotification();
  void onLostAssistantRightsNotification();
  void onLostAttendeeRightsNotification();
  void onLostCreatorRightsNotification();
  */
  void onBOStatusChanged(ZOOM_SDK_NAMESPACE::BO_STATUS bo_status);
  void onBOStopCountDown(unsigned int nSeconds);
  void onBOSwitchRequestReceived(FString strNewBOName, FString strNewBOID);
  void onNewBroadcastMessageReceived(FString strMsg, unsigned int nSenderID);

  // IMeetingConfigurationEvent
  void
  onWebinarNeedRegisterNotification(FString webinar_need_registration_type);

  // IMeetingWebinarCtrlEvent
  void onAllowPanelistStartVideoNotification();
  void onDisallowPanelistStartVideoNotification();
  void onAllowAttendeeChatNotification();
  void onDisallowAttendeeChatNotification();

  // IMeetingWaitingRoomEvent
  void onWatingRoomUserJoin(unsigned int userID);
  void onWatingRoomUserLeft(unsigned int userID);

  // IAudioSettingContextEvent
  void onDefaultMicDeviceChanged(FString deviceID, FString deviceName);
  void onDefaultSpeakerDeviceChanged(FString deviceID, FString deviceName);

  // INotificationServiceEvent
  void onMeetingDeviceListChanged(int64 nIndex, FString deviceName,
                                  FString meetingTopic, int64 meetingNumber);

  // IMeetingVideoCtrlEvent
  void onUserVideoStatusChanged(int64 userId, FString videoStatus);

  // IEmojiReactionControllerEvent
  void onEmojiReactionReceived(unsigned int sender_id, FString type);
  void onEmojiReactionReceivedInWebinar(FString type);
  void OnEmojiFeedbackReceived(unsigned int sender_id, FString type);
  void OnEmojiFeedbackCanceled(unsigned int sender_id);

  // IMeetingChatCtrlEvent
  void onChatMsgDeleteNotification(FString msgID, FString deleteBy);
  void onChatMsgNotificationNormalMeetingChatStatus(
      bool can_chat, bool can_chat_to_all, bool can_chat_to_individual,
      bool is_only_can_chat_to_host);
  void onChatMsgNotificationWebinarAttendeeChatStatus(
      bool can_chat, bool can_chat_to_all_panellist_and_attendee,
      bool can_chat_to_all_panellist);
  void onChatMsgNotificationWebinarOtherUserRoleChatStatus(
      bool can_chat_to_all_panellist,
      bool can_chat_to_all_panellist_and_attendee, bool can_chat_to_individual);
  void onChatMsgNotification(ZOOM_SDK_NAMESPACE::IChatMsgInfo *chatMsg,
                             FString content);
  void onShareMeetingChatStatusChanged(bool isStart);

  // IMeetingRecordingCtrlEvent
  void onRecordPrivilegeChanged(bool bCanRecord);
  void onLocalRecordingPrivilegeRequestStatus(FString status);

  // IMeetingShareCtrlEvent
  void onSharingStatus(FString status, int64 userId);

public:
  // Other functions related to UZoomMeetingSDKEventHandler.

  // Gets the pointer to UZoomMeetingSDKEventHandler.
  UFUNCTION(BlueprintCallable,
            meta = (DisplayName = "Zoom SDK Event handler GetInstance",
                    Keywords = "Zoom SDK Event handler GetInstance"),
            Category = "Zoom Meeting SDK Plug-in | Events | Util")
  static UZoomMeetingSDKEventHandler *GetInstance();

  // Sets the pointer to UZoomMeetingSDKEventHandler.
  //
  // Note: If the previous pointer is a valid pointer, it might need to be
  // released/free'ed first before setting to a new value (to avoid any leaks).
  UFUNCTION(BlueprintCallable,
            meta = (DisplayName = "Zoom SDK Event handler SetInstance",
                    Keywords = "Zoom SDK Event handler SetInstance"),
            Category = "Zoom Meeting SDK Plug-in | Events | Util")
  static void SetInstance(UZoomMeetingSDKEventHandler *pInstance) {
    m_event_handler = pInstance;
  }

  // Static pointer to UZoomMeetingSDKEventHandler.
  static UZoomMeetingSDKEventHandler *m_event_handler;
};

// Helper function to get an instance to UZoomMeetingSDKEventHandler.
UZoomMeetingSDKEventHandler *GetZMEventHandler();
