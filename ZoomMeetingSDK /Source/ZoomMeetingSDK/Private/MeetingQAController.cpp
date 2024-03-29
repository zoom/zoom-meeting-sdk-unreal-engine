// Copyright : All rights reserved by Zoom Video Communications 2022-

#include "MeetingQAController.h"

#include "SDKInterfaceWrap.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE

MeetingQAController *MeetingQAController::Create() {
  TUniquePtr<MeetingQAController> mqac(new MeetingQAController());
  if (mqac->Init()) {
    return mqac.Release();
  }

  return nullptr;
}

MeetingQAController::MeetingQAController() {}
MeetingQAController::~MeetingQAController() {}

bool MeetingQAController::Init() {
  meeting_qa_controller = SDKInterfaceWrap::GetInst().GetMeetingQAController();
  return (meeting_qa_controller) ? true : false;
}

SDKError MeetingQAController::AddQuestion(const wchar_t *questionContent,
                                          bool bAskAnonymous) {
  return meeting_qa_controller->AddQuestion(questionContent, bAskAnonymous);
}

SDKError MeetingQAController::CommentQuestion(const wchar_t *questionID,
                                              const wchar_t *commentContent) {
  return meeting_qa_controller->CommentQuestion(questionID, commentContent);
}

SDKError
MeetingQAController::AnswerQuestionPrivate(const wchar_t *questionID,
                                           const wchar_t *answerContent) {
  return meeting_qa_controller->AnswerQuestionPrivate(questionID,
                                                      answerContent);
}

SDKError
MeetingQAController::AnswerQuestionPublic(const wchar_t *questionID,
                                          const wchar_t *answerContent) {
  return meeting_qa_controller->AnswerQuestionPublic(questionID, answerContent);
}

SDKError MeetingQAController::DismissQuestion(const wchar_t *questionID) {
  return meeting_qa_controller->DismissQuestion(questionID);
}

SDKError MeetingQAController::DeleteQuestion(const wchar_t *questionID) {
  return meeting_qa_controller->DeleteQuestion(questionID);
}

SDKError MeetingQAController::DeleteAnswer(const wchar_t *answerID) {
  return meeting_qa_controller->DeleteAnswer(answerID);
}

SDKError MeetingQAController::EnableAnonnymousQuestion(bool bEnable) {
  return meeting_qa_controller->EnableAnonnymousQuestion(bEnable);
}

SDKError MeetingQAController::EnableAttendeeViewAllQuestion(bool bEnable) {
  return meeting_qa_controller->EnableAttendeeViewAllQuestion(bEnable);
}

SDKError MeetingQAController::EnableQAComment(bool bEnable) {
  return meeting_qa_controller->EnableQAComment(bEnable);
}

SDKError MeetingQAController::EnableQAVoteup(bool bEnable) {
  return meeting_qa_controller->EnableQAVoteup(bEnable);
}

IList<IQAItemInfo *> *MeetingQAController::GetAllQuestionList() {
  return meeting_qa_controller->GetAllQuestionList();
}

bool MeetingQAController::IsAskQuestionAnonymouslyEnabled() {
  return meeting_qa_controller->IsAskQuestionAnonymouslyEnabled();
}

bool MeetingQAController::IsAttendeeCanViewAllQuestions() {
  return meeting_qa_controller->IsAttendeeCanViewAllQuestions();
}

bool MeetingQAController::IsQACommentEnabled() {
  return meeting_qa_controller->IsQACommentEnabled();
}

bool MeetingQAController::IsQAEnabled() {
  return meeting_qa_controller->IsQAEnabled();
}

bool MeetingQAController::IsQALegalNoticeAvailable() {
  return meeting_qa_controller->IsQALegalNoticeAvailable();
}

bool MeetingQAController::IsQAVoteupEnabled() {
  return meeting_qa_controller->IsQAVoteupEnabled();
}

SDKError MeetingQAController::ReopenQuestion(const wchar_t *questionID) {
  return meeting_qa_controller->ReopenQuestion(questionID);
}

SDKError MeetingQAController::VoteupQuestion(const wchar_t *questionID,
                                             bool bVokeup) {
  return meeting_qa_controller->VoteupQuestion(questionID, bVokeup);
}

END_ZOOM_SDK_UE_NAMESPACE