// Copyright : All rights reserved by Zoom Video Communications 2022-

#include "ZoomMeetingSDKEventHandler.h"

#include <string>

#include "GenericPlatform/GenericPlatformProcess.h"
#include "SDKUtils.h"
#include "ZoomMeetingSDK.h"

USING_ZOOM_SDK_UE_NAMESPACE;

UZoomMeetingSDKEventHandler *UZoomMeetingSDKEventHandler::m_event_handler =
    nullptr;

UZoomMeetingSDKEventHandler *GetZMEventHandler() {
  return UZoomMeetingSDKEventHandler::GetInstance();
}

UZoomMeetingSDKEventHandler *UZoomMeetingSDKEventHandler::GetInstance() {
  // Create a new event handler and add to root so it's not garbage collected.
  if (UZoomMeetingSDKEventHandler::m_event_handler == nullptr) {
    UZoomMeetingSDKEventHandler::m_event_handler =
        NewObject<UZoomMeetingSDKEventHandler>();
    UZoomMeetingSDKEventHandler::m_event_handler->AddToRoot();
  }
  return UZoomMeetingSDKEventHandler::m_event_handler;
}

// AuthServiceEvents
void UZoomMeetingSDKEventHandler::onLogout() {
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("ZoomMeetingSDKEventHandler::onLogout triggered"));

  OnLogoutDelegate.Broadcast();
}

void UZoomMeetingSDKEventHandler::onAuthenticationReturn(FString ret) {
  UE_LOG(
      BPZoomMeetingSDKLog, Display,
      TEXT("ZoomMeetingSDKEventHandler::onAuthenticationReturn triggered: %s"),
      *ret);

  OnAuthenticationReturnDelegate.Broadcast(ret);
}

void UZoomMeetingSDKEventHandler::onLoginReturn(FString login_status,
                                                FString login_fail_reason) {
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("ZoomMeetingSDKEventHandler::onLoginReturn triggered"));

  OnLoginReturnDelegate.Broadcast(login_status, login_fail_reason);
}

// MeetingServiceEvents

void UZoomMeetingSDKEventHandler::onMeetingStatusChanged(FString status,
                                                         int result) {
  UE_LOG(
      BPZoomMeetingSDKLog, Display,
      TEXT(" UZoomMeetingSDKEventHandler::onMeetingStatusChanged triggered"));
  // AsyncTask(ENamedThreads::GameThread,
  //          [=]() {  });

  OnMeetingStatusChanged.Broadcast(status, result);
}

void UZoomMeetingSDKEventHandler::onMeetingParameterNotification(
    const ZOOM_SDK_NAMESPACE::MeetingParameter *meeting_param) {
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("ZoomMeetingSDKEventHandler::onMeetingParameterNotification "
              "triggered"));

  OnMeetingParameterDelegate.Broadcast(FUEMeetingParameter(meeting_param));
}

// MeetingParticipantsCtrlEvent

void UZoomMeetingSDKEventHandler::onCoHostChangeNotification(
    unsigned int userId, bool isCoHost) {
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("ZoomMeetingSDKEventHandler::onMeetingParameterNotification "
              "triggered. Userid: %d, isCoHost: %s"),
         userId, *BoolToString(isCoHost));

  OnCoHostChangedDelegate.Broadcast(userId, isCoHost);
}

void UZoomMeetingSDKEventHandler::onHostChangeNotification(
    unsigned int userId) {
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("ZoomMeetingSDKEventHandler::onHostChangeNotification triggered. "
              "Userid: %d"),
         userId);

  OnHostChangedDelegate.Broadcast(userId);
}

void UZoomMeetingSDKEventHandler::onUserJoin(unsigned int userId) {
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("ZoomMeetingSDKEventHandler::onUserJoin triggered. Userid: %d"),
         userId);

  OnUserJoinedDelegate.Broadcast(userId);
}

void UZoomMeetingSDKEventHandler::onUserLeft(unsigned int userId) {
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("ZoomMeetingSDKEventHandler::onUserLeft triggered. Userid: %d"),
         userId);

  OnUserLeftDelegate.Broadcast(userId);
}

void UZoomMeetingSDKEventHandler::onUserNameChanged(unsigned int userId,
                                                    FString userName) {
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("ZoomMeetingSDKEventHandler::onUserNameChanged triggered. "
              "Userid: %d, UserName: %s"),
         userId, *userName);

  OnUserNameChangedDelegate.Broadcast(userId, userName);
}

void UZoomMeetingSDKEventHandler::onLowOrRaiseHandStatusChanged(
    bool bLow, unsigned int userId) {
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("ZoomMeetingSDKEventHandler::onLowOrRaiseHandStatusChanged "
              "triggered. "
              "Userid: %d, low: %s"),
         userId, *BoolToString(bLow));

  OnLowOrRaiseHandStatusChangedDelegate.Broadcast(bLow, userId);
}

void UZoomMeetingSDKEventHandler::onAllHandsLowered() {
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("ZoomMeetingSDKEventHandler::onAllHandsLowered triggered."));

  OnAllHandsLoweredDelegate.Broadcast();
}

// IMeetingQAControllerEvent

void UZoomMeetingSDKEventHandler::OnAddAnswer(FString answerID, bool bSuccess) {
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("ZoomMeetingSDKEventHandler::OnAddAnswer triggered: "
              "answerID:%s, bSuccess:%s"),
         *answerID, *BoolToString(bSuccess));

  OnAddAnswerDelegate.Broadcast(answerID, bSuccess);
}

void UZoomMeetingSDKEventHandler::OnAddQuestion(FString questionID,
                                                bool bSuccess) {
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("ZoomMeetingSDKEventHandler::OnAddQuestion triggered: "
              "questionID:%s, bSuccess:%s"),
         *questionID, *BoolToString(bSuccess));

  OnAddQuestionDelegate.Broadcast(questionID, bSuccess);
}

void UZoomMeetingSDKEventHandler::OnAllowAskQuestionAnonymousStatus(
    bool bEnabled) {
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("ZoomMeetingSDKEventHandler::OnAllowAskQuestionAnonymousStatus "
              "triggered: "
              "bEnabled:%s"),
         *BoolToString(bEnabled));

  OnAllowAskQuestionAnonymousStatusDelegate.Broadcast(bEnabled);
}

void UZoomMeetingSDKEventHandler::OnAllowAttendeeCommentQuestionStatus(
    bool bEnabled) {
  UE_LOG(
      BPZoomMeetingSDKLog, Display,
      TEXT("ZoomMeetingSDKEventHandler::OnAllowAttendeeCommentQuestionStatus "
           "triggered: "
           "bEnabled:%s"),
      *BoolToString(bEnabled));

  OnAllowAttendeeCommentQuestionStatusDelegate.Broadcast(bEnabled);
}

void UZoomMeetingSDKEventHandler::OnAllowAttendeeViewAllQuestionStatus(
    bool bEnabled) {
  UE_LOG(
      BPZoomMeetingSDKLog, Display,
      TEXT("ZoomMeetingSDKEventHandler::OnAllowAttendeeViewAllQuestionStatus "
           "triggered: "
           "bEnabled:%s"),
      *BoolToString(bEnabled));

  OnAllowAttendeeViewAllQuestionStatusDelegate.Broadcast(bEnabled);
}

void UZoomMeetingSDKEventHandler::OnAllowAttendeeVoteupQuestionStatus(
    bool bEnabled) {
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("ZoomMeetingSDKEventHandler::OnAllowAttendeeVoteupQuestionStatus "
              "triggered: "
              "bEnabled:%s"),
         *BoolToString(bEnabled));

  OnAllowAttendeeVoteupQuestionStatusDelegate.Broadcast(bEnabled);
}

void UZoomMeetingSDKEventHandler::OnDeleteAnswer(FString answerID) {
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("ZoomMeetingSDKEventHandler::OnDeleteAnswer triggered: "
              "answerID:%s"),
         *answerID);

  OnDeleteAnswerDelegate.Broadcast(answerID);
}

void UZoomMeetingSDKEventHandler::OnDeleteQuestion(FString questionID) {
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("ZoomMeetingSDKEventHandler::OnDeleteQuestion triggered: "
              "questionID:%s"),
         *questionID);

  OnDeleteQuestionDelegate.Broadcast(questionID);
}

void UZoomMeetingSDKEventHandler::OnQAConnectStatus(
    unsigned int connectStatus) {
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("ZoomMeetingSDKEventHandler::OnDeleteQuestion triggered: "
              "connectStatus:%d"),
         connectStatus);

  OnQAConnectStatusDelegate.Broadcast(connectStatus);
}

void UZoomMeetingSDKEventHandler::OnQuestionMarkedAsDismissed(
    FString questionID) {
  UE_LOG(
      BPZoomMeetingSDKLog, Display,
      TEXT("ZoomMeetingSDKEventHandler::OnQuestionMarkedAsDismissed triggered: "
           "questionID:%s"),
      *questionID);

  OnQuestionMarkedAsDismissedDelegate.Broadcast(questionID);
}

void UZoomMeetingSDKEventHandler::OnReceiveAnswer(FString answerID) {
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("ZoomMeetingSDKEventHandler::OnReceiveAnswer triggered: "
              "answerID:%s"),
         *answerID);

  OnReceiveAnswerDelegate.Broadcast(answerID);
}

void UZoomMeetingSDKEventHandler::OnReceiveQuestion(FString questionID) {
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("ZoomMeetingSDKEventHandler::OnReceiveQuestion triggered: "
              "questionID:%s"),
         *questionID);

  OnReceiveQuestionDelegate.Broadcast(questionID);
}

void UZoomMeetingSDKEventHandler::OnRefreshQAData() {
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("ZoomMeetingSDKEventHandler::OnRefreshQAData triggered: "));

  OnRefreshQADataDelegate.Broadcast();
}

void UZoomMeetingSDKEventHandler::OnReopenQuestion(FString questionID) {
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("ZoomMeetingSDKEventHandler::OnReopenQuestion triggered: "
              "questionID:%s"),
         *questionID);

  OnReopenQuestionDelegate.Broadcast(questionID);
}

void UZoomMeetingSDKEventHandler::OnRevokeUpvoteQuestion(FString questionID,
                                                         bool order_changed) {
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("ZoomMeetingSDKEventHandler::OnRevokeUpvoteQuestion triggered: "
              "questionID:%s, order_changed:%s"),
         *questionID, *BoolToString(order_changed));

  OnRevokeUpvoteQuestionDelegate.Broadcast(questionID, order_changed);
}

void UZoomMeetingSDKEventHandler::OnUpvoteQuestion(FString questionID,
                                                   bool order_changed) {
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("ZoomMeetingSDKEventHandler::OnUpvoteQuestion triggered: "
              "questionID:%s, order_changed:%s"),
         *questionID, *BoolToString(order_changed));

  OnUpvoteQuestionDelegate.Broadcast(questionID, order_changed);
}

// IBOAdminEvent
void UZoomMeetingSDKEventHandler::OnBOEndTimerUpdated(int remaining,
                                                      bool isTimesUpNotice) {
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("ZoomMeetingSDKEventHandler::OnBOEndTimerUpdated triggered: "
              "remaining:%d, isTimesUpNotice:%s"),
         remaining, *BoolToString(isTimesUpNotice));

  OnBOEndTimerUpdatedDelegate.Broadcast(remaining, isTimesUpNotice);
}

void UZoomMeetingSDKEventHandler::OnStartBOError(FString errCode) {
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("ZoomMeetingSDKEventHandler::OnStartBOError triggered: "
              "error:%s"),
         *errCode);

  OnStartBOErrorDelegate.Broadcast(errCode);
}

void UZoomMeetingSDKEventHandler::OnHostJoinedThisBOMeeting() {
  UE_LOG(
      BPZoomMeetingSDKLog, Display,
      TEXT(
          "ZoomMeetingSDKEventHandler::OnHostJoinedThisBOMeeting triggered: "));

  OnHostJoinedThisBOMeetingDelegate.Broadcast();
}

void UZoomMeetingSDKEventHandler::OnHostLeaveThisBOMeeting() {
  UE_LOG(
      BPZoomMeetingSDKLog, Display,
      TEXT("ZoomMeetingSDKEventHandler::OnHostLeaveThisBOMeeting triggered: "));

  OnHostLeaveThisBOMeetingDelegate.Broadcast();
}

// IBOCreatorEvent
void UZoomMeetingSDKEventHandler::OnBOCreateSuccess(FString strBOID) {
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("ZoomMeetingSDKEventHandler::OnBOCreateSuccess triggered: "));
  OnBOCreateSuccessDelegate.Broadcast(strBOID);
}

// IBODataEvent
void UZoomMeetingSDKEventHandler::onBOInfoUpdated(FString strBOID) {
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("ZoomMeetingSDKEventHandler::onBOInfoUpdated triggered: "));
  OnBOInfoUpdatedDelegate.Broadcast(strBOID);
}

void UZoomMeetingSDKEventHandler::onUnAssignedUserUpdated() {
  UE_LOG(
      BPZoomMeetingSDKLog, Display,
      TEXT("ZoomMeetingSDKEventHandler::onUnAssignedUserUpdated triggered: "));
  OnUnAssignedUserUpdatedDelegate.Broadcast();
}

void UZoomMeetingSDKEventHandler::onBOListInfoUpdated() {
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("ZoomMeetingSDKEventHandler::onBOListInfoUpdated triggered: "));
  OnBOListInfoUpdatedDelegate.Broadcast();
}

// IMeetingBOControllerEvent
/* Incomplete BP wrappers
void UZoomMeetingSDKEventHandler::onHasCreatorRightsNotification() {
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("ZoomMeetingSDKEventHandler::onHasCreatorRightsNotification "
              "triggered: "));

  OnHasCreatorRightsDelegate.Broadcast();
}

void UZoomMeetingSDKEventHandler::onHasAdminRightsNotification() {
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("ZoomMeetingSDKEventHandler::onHasAdminRightsNotification "
              "triggered: "));

  OnHasAdminRightsDelegate.Broadcast();
}

void UZoomMeetingSDKEventHandler::onHasAssistantRightsNotification() {
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("ZoomMeetingSDKEventHandler::onHasAssistantRightsNotification "
              "triggered: "));

  OnHasAssistantRightsDelegate.Broadcast();
}

void UZoomMeetingSDKEventHandler::onHasAttendeeRightsNotification() {
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("ZoomMeetingSDKEventHandler::onHasAttendeeRightsNotification "
              "triggered: "));

  OnHasAttendeeRightsDelegate.Broadcast();
}

void UZoomMeetingSDKEventHandler::onLostAdminRightsNotification() {
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("ZoomMeetingSDKEventHandler::onLostAdminRightsNotification "
              "triggered: "));

  OnLostAdminRightsDelegate.Broadcast();
}

void UZoomMeetingSDKEventHandler::onLostAssistantRightsNotification() {
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("ZoomMeetingSDKEventHandler::onLostAssistantRightsNotification "
              "triggered: "));

  OnLostAssistantRightsDelegate.Broadcast();
}

void UZoomMeetingSDKEventHandler::onLostAttendeeRightsNotification() {
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("ZoomMeetingSDKEventHandler::onLostAttendeeRightsNotification "
              "triggered: "));

  OnLostAttendeeRightsDelegate.Broadcast();
}

void UZoomMeetingSDKEventHandler::onLostCreatorRightsNotification() {
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("ZoomMeetingSDKEventHandler::onLostCreatorRightsNotification "
              "triggered: "));

  OnLostCreatorRightsDelegate.Broadcast();
}
*/

void UZoomMeetingSDKEventHandler::onBOStatusChanged(
    ZOOM_SDK_NAMESPACE::BO_STATUS bo_status) {
  auto bo_status_str = BOStatusToString(bo_status);
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("ZoomMeetingSDKEventHandler::onBOStatusChanged triggered: , "
              "bo_status: %s"),
         *bo_status_str);

  OnBOStatusChangedDelegate.Broadcast(bo_status_str);
}

void UZoomMeetingSDKEventHandler::onBOStopCountDown(unsigned int nSeconds) {
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("ZoomMeetingSDKEventHandler::onBOStopCountDown triggered: , "
              "count down: %d"),
         nSeconds);

  OnBOStopCountDownDelegate.Broadcast(nSeconds);
}

void UZoomMeetingSDKEventHandler::onBOSwitchRequestReceived(
    FString strNewBOName, FString strNewBOID) {
  UE_LOG(
      BPZoomMeetingSDKLog, Display,
      TEXT("ZoomMeetingSDKEventHandler::onBOSwitchRequestReceived triggered: , "
           "strNewBOName: %s, strNewBOID: %s"),
      *strNewBOName, *strNewBOID);

  OnBOSwitchRequestReceivedDelegate.Broadcast(strNewBOName, strNewBOID);
}

void UZoomMeetingSDKEventHandler::onNewBroadcastMessageReceived(
    FString strMsg, unsigned int nSenderID) {
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("ZoomMeetingSDKEventHandler::onNewBroadcastMessageReceived "
              "triggered: , strMsg: %s, nSenderID: %d"),
         *strMsg, nSenderID);

  OnNewBroadcastMessageReceivedDelegate.Broadcast(strMsg, nSenderID);
}

void UZoomMeetingSDKEventHandler::onWebinarNeedRegisterNotification(
    FString webinar_need_registration_type) {
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("ZoomMeetingSDKEventHandler::onWebinarNeedRegisterNotification "
              "triggered:, webinar_need_registration_type: %s"),
         *webinar_need_registration_type);

  OnWebinarNeedRegisterDelegate.Broadcast(webinar_need_registration_type);
}

void UZoomMeetingSDKEventHandler::onAllowPanelistStartVideoNotification() {
  UE_LOG(
      BPZoomMeetingSDKLog, Display,
      TEXT("ZoomMeetingSDKEventHandler::onAllowPanelistStartVideoNotification "
           "triggered:"));

  OnAllowPanelistStartVideoDelegate.Broadcast();
}

void UZoomMeetingSDKEventHandler::onDisallowPanelistStartVideoNotification() {
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("ZoomMeetingSDKEventHandler::"
              "onDisallowPanelistStartVideoNotification "
              "triggered:"));

  OnDisallowPanelistStartVideoDelegate.Broadcast();
}

void UZoomMeetingSDKEventHandler::onAllowAttendeeChatNotification() {
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("ZoomMeetingSDKEventHandler::onAllowAttendeeChatNotification "
              "triggered:"));

  OnAllowAttendeeChatDelegate.Broadcast();
}

void UZoomMeetingSDKEventHandler::onDisallowAttendeeChatNotification() {
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("ZoomMeetingSDKEventHandler::onDisallowAttendeeChatNotification "
              "triggered:"));

  OnDisallowAttendeeChatDelegate.Broadcast();
}


// MeetingWaitingRoomEvent

void UZoomMeetingSDKEventHandler::onWatingRoomUserJoin(unsigned int userID) {
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("ZoomMeetingSDKEventHandler::onWatingRoomUserJoin triggered: "
              "userID: %d"),
         userID);

  OnWatingRoomUserJoinDelegate.Broadcast(userID);
}

void UZoomMeetingSDKEventHandler::onWatingRoomUserLeft(unsigned int userID) {
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("ZoomMeetingSDKEventHandler::onWatingRoomUserLeft triggered: "
              "userID: %d"),
         userID);

  OnWatingRoomUserLeftDelegate.Broadcast(userID);
}

void UZoomMeetingSDKEventHandler::onDefaultMicDeviceChanged(
    FString deviceID, FString deviceName) {
  UE_LOG(
      BPZoomMeetingSDKLog, Display,
      TEXT(
          "ZoomMeetingSDKEventHandler::onDefaultMicDeviceChanged triggered: "));
  OnDefaultMicDeviceChangedDelegate.Broadcast(deviceID, deviceName);
}

void UZoomMeetingSDKEventHandler::onDefaultSpeakerDeviceChanged(
    FString deviceID, FString deviceName) {
  UE_LOG(
      BPZoomMeetingSDKLog, Display,
      TEXT(
          "ZoomMeetingSDKEventHandler::onDefaultMicDeviceChanged triggered: "));
  OnDefaultSpeakerDeviceChangedDelegate.Broadcast(deviceID, deviceName);
}

void UZoomMeetingSDKEventHandler::onMeetingDeviceListChanged(
    int64 nIndex, FString deviceName, FString meetingTopic,
    int64 meetingNumber) {
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("ZoomMeetingSDKEventHandler::onMeetingDeviceListChanged "
              "triggered: nIndex:%d, deviceName: %s, meetingTopic: %s, "
              "meetingNumber: %d"),
         nIndex, *deviceName, *meetingTopic, meetingNumber);

  OnMeetingDeviceListChangedDelegate.Broadcast(nIndex, deviceName, meetingTopic,
                                               meetingNumber);
}

void UZoomMeetingSDKEventHandler::onUserVideoStatusChanged(
    int64 userId, FString videoStatus) {
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("ZoomMeetingSDKEventHandler::onUserVideoStatusChanged "
              "triggered: userId: %d, videoStatus: %s"),
         userId, *videoStatus);

  OnUserVideoStatusChangedDelegate.Broadcast(userId, videoStatus);
}

void UZoomMeetingSDKEventHandler::onEmojiReactionReceived(
    unsigned int sender_id, FString type) {
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("ZoomMeetingSDKEventHandler::onEmojiReactionReceived "
              "triggered: sender_id: %d, type: %s"),
         sender_id, *type);

  OnEmojiReactionReceivedDelegate.Broadcast(sender_id, type);
}

void UZoomMeetingSDKEventHandler::onEmojiReactionReceivedInWebinar(
    FString type) {
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("ZoomMeetingSDKEventHandler::onEmojiReactionReceivedInWebinar "
              "triggered: type: %s"),
         *type);

  OnEmojiReactionReceivedInWebinarDelegate.Broadcast(type);
}

void UZoomMeetingSDKEventHandler::OnEmojiFeedbackReceived(
    unsigned int sender_id, FString type) {
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("ZoomMeetingSDKEventHandler::OnEmojiFeedbackReceived "
              "triggered: sender_id: %d, type: %s"),
         sender_id, *type);

  OnEmojiFeedbackReceivedDelegate.Broadcast(sender_id, type);
}

void UZoomMeetingSDKEventHandler::OnEmojiFeedbackCanceled(
    unsigned int sender_id) {
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("ZoomMeetingSDKEventHandler::OnEmojiFeedbackCanceled "
              "triggered: sender_id: %d"),
         sender_id);

  OnEmojiFeedbackCanceledDelegate.Broadcast(sender_id);
}

// OnChatMsgDeleteNotificationDelegate
void UZoomMeetingSDKEventHandler::onChatMsgDeleteNotification(
    FString msgID, FString deleteBy) {
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("ZoomMeetingSDKEventHandler::onChatMsgDeleteNotification "
              "triggered: msgID: %s, deleteBy: %s"),
         *msgID, *deleteBy);

  OnChatMsgDeleteNotificationDelegate.Broadcast(msgID, deleteBy);
}

void UZoomMeetingSDKEventHandler::onChatMsgNotificationNormalMeetingChatStatus(
    bool can_chat, bool can_chat_to_all, bool can_chat_to_individual,
    bool is_only_can_chat_to_host) {
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("ZoomMeetingSDKEventHandler::"
              "onChatMsgNotificationNormalMeetingChatStatus "
              "triggered: can_chat: %s, can_chat_to_all: %s, "
              "can_chat_to_individual: %s, is_only_can_chat_to_host: %s, "),
         *BoolToString(can_chat), *BoolToString(can_chat_to_all),
         *BoolToString(can_chat_to_individual),
         *BoolToString(is_only_can_chat_to_host));

  OnChatMsgNotificationNormalMeetingChatStatus.Broadcast(
      can_chat, can_chat_to_all, can_chat_to_individual,
      is_only_can_chat_to_host);
}

void UZoomMeetingSDKEventHandler::
    onChatMsgNotificationWebinarAttendeeChatStatus(
        bool can_chat, bool can_chat_to_all_panellist_and_attendee,
        bool can_chat_to_all_panellist) {
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("ZoomMeetingSDKEventHandler::"
              "onChatMsgNotificationNormalMeetingChatStatus "
              "triggered: can_chat: %s, "
              "can_chat_to_all_panellist_and_attendee: %s, "
              "can_chat_to_all_panellist: %s, "),
         *BoolToString(can_chat),
         *BoolToString(can_chat_to_all_panellist_and_attendee),
         *BoolToString(can_chat_to_all_panellist));

  OnChatMsgNotificationWebinarAttendeeChatStatus.Broadcast(
      can_chat, can_chat_to_all_panellist_and_attendee,
      can_chat_to_all_panellist);
}

void UZoomMeetingSDKEventHandler::
    onChatMsgNotificationWebinarOtherUserRoleChatStatus(
        bool can_chat_to_all_panellist,
        bool can_chat_to_all_panellist_and_attendee,
        bool can_chat_to_individual) {
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("ZoomMeetingSDKEventHandler::"
              "onChatMsgNotificationNormalMeetingChatStatus "
              "triggered: can_chat_to_all_panellist: %s, "
              "can_chat_to_all_panellist_and_attendee: %s, "
              "can_chat_to_individual: %s, "),
         *BoolToString(can_chat_to_all_panellist),
         *BoolToString(can_chat_to_all_panellist_and_attendee),
         *BoolToString(can_chat_to_individual));

  OnChatMsgNotificationWebinarOtherUserRoleChatStatus.Broadcast(
      can_chat_to_all_panellist, can_chat_to_all_panellist_and_attendee,
      can_chat_to_individual);
}

void UZoomMeetingSDKEventHandler::onChatMsgNotification(
    ZOOM_SDK_NAMESPACE::IChatMsgInfo *chatMsg, FString content) {
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("ZoomMeetingSDKEventHandler::onChatMsgNotification "
              "triggered: content: %s"),
         *content);

  OnChatMsgNotification.Broadcast(FUEChatMsgInfo(chatMsg), content);
}

void UZoomMeetingSDKEventHandler::onShareMeetingChatStatusChanged(
    bool isStart) {
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("ZoomMeetingSDKEventHandler::onShareMeetingChatStatusChanged "
              "triggered: isStart: %s"),
         *BoolToString(isStart));

  OnShareMeetingChatStatusChanged.Broadcast(isStart);
}

// IMeetingRecordingCtrlEvent
void UZoomMeetingSDKEventHandler::onRecordPrivilegeChanged(bool bCanRecord) {
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("ZoomMeetingSDKEventHandler::onRecordPrivilegeChanged "
              "triggered: bCanRecord: %s"),
         *BoolToString(bCanRecord));

  OnRecordPrivilegeChanged.Broadcast(bCanRecord);
}

void UZoomMeetingSDKEventHandler::onLocalRecordingPrivilegeRequestStatus(
    FString status) {
  UE_LOG(
      BPZoomMeetingSDKLog, Display,
      TEXT("ZoomMeetingSDKEventHandler::onLocalRecordingPrivilegeRequestStatus "
           "triggered: status: %s"),
      *status);

  OnLocalRecordingPrivilegeRequestStatus.Broadcast(status);
}

// IMeetingShareCtrlEvent
void UZoomMeetingSDKEventHandler::onSharingStatus(FString status,
                                                   int64 userId) {
  UE_LOG(BPZoomMeetingSDKLog, Display,
         TEXT("ZoomMeetingSDKEventHandler::onShareingStatus "
              "triggered: user id: %d status: %s"),
         userId, *status);

  OnSharingStatus.Broadcast(status, userId);
}