// Copyright : All rights reserved by Zoom Video Communications 2022-

#pragma once

#include "ZoomUESDKDef.h"
#include "meeting_service_components\meeting_qa_ctrl_interface.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE
/**
 * Wrapper around IMeetingQAController
 * Check
 * https://marketplacefront.zoom.us/sdk/meeting/windows/class_i_meeting_q_a_controller.html
 * for interface definitions.
 */
class ZOOMMEETINGSDK_API MeetingQAController {
public:
  ~MeetingQAController();

  MeetingQAController(const MeetingQAController &other) = delete;
  MeetingQAController(MeetingQAController &&other) noexcept = delete;
  MeetingQAController &operator=(const MeetingQAController &other) = delete;
  MeetingQAController &operator=(MeetingQAController &&other) noexcept = delete;

  // Static function to create an object of MeetingQAController.
  static MeetingQAController *Create();

  SDKError AddQuestion(const wchar_t *questionContent, bool bAskAnonymous);
  SDKError CommentQuestion(const wchar_t *questionID,
                           const wchar_t *commentContent);
  SDKError AnswerQuestionPrivate(const wchar_t *questionID,
                                 const wchar_t *answerContent);
  SDKError AnswerQuestionPublic(const wchar_t *questionID,
                                const wchar_t *answerContent);
  SDKError DismissQuestion(const wchar_t *questionID);
  SDKError DeleteQuestion(const wchar_t *questionID);
  SDKError DeleteAnswer(const wchar_t *answerID);
  SDKError EnableAnonnymousQuestion(bool bEnable);
  SDKError EnableAttendeeViewAllQuestion(bool bEnable);
  SDKError EnableQAComment(bool bEnable);
  SDKError EnableQAVoteup(bool bEnable);
  IList<IQAItemInfo *> *GetAllQuestionList();
  bool IsAskQuestionAnonymouslyEnabled();
  bool IsAttendeeCanViewAllQuestions();
  bool IsQACommentEnabled();
  bool IsQAEnabled();
  bool IsQALegalNoticeAvailable();
  bool IsQAVoteupEnabled();
  SDKError ReopenQuestion(const wchar_t *questionID);
  SDKError VoteupQuestion(const wchar_t *questionID, bool bVokeup);

private:
  MeetingQAController();

  // Initializes MeetingQAController.
  //
  // Returns true if initialization was successful.
  bool Init();

  IMeetingQAController *meeting_qa_controller = nullptr;
};

END_ZOOM_SDK_UE_NAMESPACE