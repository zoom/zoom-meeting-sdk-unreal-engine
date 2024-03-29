// Copyright : All rights reserved by Zoom Video Communications 2022-

#pragma once

#include "ZoomMeetingSDKEventHandler.h"
#include "ZoomUESDKDef.h"
#include "meeting_service_components/meeting_qa_ctrl_interface.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE
// Returns pointer to UZoomMeetingSDKEventHandler
// TODO: Perhaps move this to a common util file.
UZoomMeetingSDKEventHandler *GetUZoomMeetingSDKEventHandler();

/**
 * Wrapper around IMeetingQAControllerEvent
 * Check
 * https://marketplacefront.zoom.us/sdk/meeting/windows/class_i_meeting_q_a_controller_event.html
 * for interface definitions.
 */
class ZOOMMEETINGSDK_API MeetingQAControllerEvent
    : public IMeetingQAControllerEvent {
public:
  ~MeetingQAControllerEvent();

  MeetingQAControllerEvent(const MeetingQAControllerEvent &other) = delete;
  MeetingQAControllerEvent(MeetingQAControllerEvent &&other) noexcept = delete;
  MeetingQAControllerEvent &
  operator=(const MeetingQAControllerEvent &other) = delete;
  MeetingQAControllerEvent &
  operator=(MeetingQAControllerEvent &&other) noexcept = delete;

  void OnQAConnectStatus(QAConnectStatus connectStatus) override;
  void OnAddQuestion(const wchar_t *questionID, bool bSuccess) override;
  void OnAddAnswer(const wchar_t *answerID, bool bSuccess) override;
  void OnQuestionMarkedAsDismissed(const wchar_t *question_id) override;
  void OnReopenQuestion(const wchar_t *question_id) override;
  void OnReceiveQuestion(const wchar_t *questionID) override;
  void OnReceiveAnswer(const wchar_t *answerID) override;
  void OnUserLivingReply(const wchar_t *questionID) override;
  void OnUserEndLiving(const wchar_t *questionID) override;
  void OnUpvoteQuestion(const wchar_t *question_id,
                        bool order_changed) override;
  void OnRevokeUpvoteQuestion(const wchar_t *question_id,
                              bool order_changed) override;
  void OnDeleteQuestion(IList<const wchar_t *> *lstQuestionID) override;
  void OnDeleteAnswer(IList<const wchar_t *> *lstAnswerID) override;
  void OnAllowAskQuestionAnonymousStatus(bool bEnabled) override;
  void OnAllowAttendeeViewAllQuestionStatus(bool bEnabled) override;
  void OnAllowAttendeeVoteupQuestionStatus(bool bEnabled) override;
  void OnAllowAttendeeCommentQuestionStatus(bool bEnabled) override;
  void OnRefreshQAData() override;
  // Static function to create an object of IMeetingQAControllerEvent.
  static IMeetingQAControllerEvent *Create();

private:
  MeetingQAControllerEvent();
};

END_ZOOM_SDK_UE_NAMESPACE
