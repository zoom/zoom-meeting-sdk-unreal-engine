// Copyright : All rights reserved by Zoom Video Communications 2022-

#include "MeetingQAControllerEvent.h"

#include "ZoomMeetingSDKEventHandler.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE

IMeetingQAControllerEvent *MeetingQAControllerEvent::Create() {
  return new MeetingQAControllerEvent();
}

MeetingQAControllerEvent::MeetingQAControllerEvent() {}

MeetingQAControllerEvent::~MeetingQAControllerEvent() {}

void MeetingQAControllerEvent::OnQAConnectStatus(
    QAConnectStatus connectStatus) {
  GetZMEventHandler()->OnQAConnectStatus(connectStatus);
}

void MeetingQAControllerEvent::OnAddQuestion(const wchar_t *questionID,
                                             bool bSuccess) {
  UZoomMeetingSDKEventHandler::GetInstance()->OnAddQuestion(questionID,
                                                            bSuccess);
}

void MeetingQAControllerEvent::OnAddAnswer(const wchar_t *answerID,
                                           bool bSuccess) {
  UZoomMeetingSDKEventHandler::GetInstance()->OnAddAnswer(answerID, bSuccess);
}

void MeetingQAControllerEvent::OnQuestionMarkedAsDismissed(
    const wchar_t *question_id) {
  UZoomMeetingSDKEventHandler::GetInstance()->OnQuestionMarkedAsDismissed(
      question_id);
}

void MeetingQAControllerEvent::OnReopenQuestion(const wchar_t *question_id) {
  UZoomMeetingSDKEventHandler::GetInstance()->OnReopenQuestion(question_id);
}

void MeetingQAControllerEvent::OnReceiveQuestion(const wchar_t *questionID) {
  UZoomMeetingSDKEventHandler::GetInstance()->OnReceiveQuestion(questionID);
}

void MeetingQAControllerEvent::OnReceiveAnswer(const wchar_t *answerID) {
  UZoomMeetingSDKEventHandler::GetInstance()->OnReceiveAnswer(answerID);
}

void MeetingQAControllerEvent::OnUpvoteQuestion(const wchar_t *question_id,
                                                bool order_changed) {
  UZoomMeetingSDKEventHandler::GetInstance()->OnUpvoteQuestion(question_id,
                                                               order_changed);
}

void MeetingQAControllerEvent::OnRevokeUpvoteQuestion(
    const wchar_t *question_id, bool order_changed) {
  UZoomMeetingSDKEventHandler::GetInstance()->OnRevokeUpvoteQuestion(
      question_id, order_changed);
}

void MeetingQAControllerEvent::OnDeleteQuestion(
    IList<const wchar_t *> *lstQuestionID) {
  for (int i = 0; i < lstQuestionID->GetCount(); ++i) {
    auto questionID = lstQuestionID->GetItem(i);
    UZoomMeetingSDKEventHandler::GetInstance()->OnDeleteQuestion(questionID);
  }
}

void MeetingQAControllerEvent::OnDeleteAnswer(
    IList<const wchar_t *> *lstAnswerID) {
  for (int i = 0; i < lstAnswerID->GetCount(); ++i) {
    auto answerID = lstAnswerID->GetItem(i);
    UZoomMeetingSDKEventHandler::GetInstance()->OnDeleteAnswer(answerID);
  }
}

void MeetingQAControllerEvent::OnAllowAskQuestionAnonymousStatus(
    bool bEnabled) {
  UZoomMeetingSDKEventHandler::GetInstance()->OnAllowAskQuestionAnonymousStatus(
      bEnabled);
}

void MeetingQAControllerEvent::OnAllowAttendeeViewAllQuestionStatus(
    bool bEnabled) {
  UZoomMeetingSDKEventHandler::GetInstance()
      ->OnAllowAttendeeViewAllQuestionStatus(bEnabled);
}

void MeetingQAControllerEvent::OnAllowAttendeeVoteupQuestionStatus(
    bool bEnabled) {
  UZoomMeetingSDKEventHandler::GetInstance()
      ->OnAllowAttendeeVoteupQuestionStatus(bEnabled);
}

void MeetingQAControllerEvent::OnAllowAttendeeCommentQuestionStatus(
    bool bEnabled) {
  UZoomMeetingSDKEventHandler::GetInstance()
      ->OnAllowAttendeeCommentQuestionStatus(bEnabled);
}

void MeetingQAControllerEvent::OnRefreshQAData() {
  UZoomMeetingSDKEventHandler::GetInstance()->OnRefreshQAData();
}

void MeetingQAControllerEvent::OnUserLivingReply(const wchar_t *questionID) {}
void MeetingQAControllerEvent::OnUserEndLiving(const wchar_t *questionID) {}
END_ZOOM_SDK_UE_NAMESPACE