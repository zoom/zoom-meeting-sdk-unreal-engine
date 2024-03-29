// Copyright : All rights reserved by Zoom Video Communications 2022-

#pragma once

#include "ZoomUESDKDef.h"
#include "meeting_service_components/meeting_qa_ctrl_interface.h"
BEGIN_ZOOM_SDK_UE_NAMESPACE
/**
 *
 */
class ZOOMMEETINGSDK_API AnswerItem {
public:
  ~AnswerItem() = default;
  AnswerItem(const AnswerItem &other) = delete;
  AnswerItem(AnswerItem &&other) noexcept = delete;
  AnswerItem &operator=(const AnswerItem &other) = delete;
  AnswerItem &operator=(AnswerItem &&other) noexcept = delete;

  // Static function to get an object of IAnswerItem.
  static AnswerItem *Create(const wchar_t *answerID);

  // Implementation of the required methods.
  time_t GetTimeStamp();
  const wchar_t *GetText();
  const wchar_t *GetSenderName();
  const wchar_t *GetQuestionID();
  const wchar_t *GetAnswerID();
  bool IsPrivate();
  bool IsLiveAnswer();
  bool IsSenderMyself();
  IAnswerItem *GetAnswerItem() const;

private:
  AnswerItem() = default;
  bool GetAnswer(const wchar_t *answerID);
  IAnswerItem *answer_item;
};
END_ZOOM_SDK_UE_NAMESPACE
