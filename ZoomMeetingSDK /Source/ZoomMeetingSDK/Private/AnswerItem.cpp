// Copyright : All rights reserved by Zoom Video Communications 2022-

#include "AnswerItem.h"
#include "SDKInterfaceWrap.h"
#include <memory>

BEGIN_ZOOM_SDK_UE_NAMESPACE
AnswerItem *AnswerItem::Create(const wchar_t *answerID) {
  std::unique_ptr<AnswerItem> answer_item(new AnswerItem());
  if (answer_item->GetAnswer(answerID)) {
    return answer_item.release();
  }
  return nullptr;
}

bool AnswerItem::GetAnswer(const wchar_t *answerID) {
  answer_item = SDKInterfaceWrap::GetInst()
                    .GetMeetingService()
                    ->GetMeetingQAController()
                    ->GetAnswer(answerID);
  return (answer_item == nullptr) ? false : true;
}

time_t AnswerItem::GetTimeStamp() { return answer_item->GetTimeStamp(); }

const wchar_t *AnswerItem::GetText() { return answer_item->GetText(); }

const wchar_t *AnswerItem::GetSenderName() {
  return answer_item->GetSenderName();
}

const wchar_t *AnswerItem::GetQuestionID() {
  return answer_item->GetQuestionID();
}

const wchar_t *AnswerItem::GetAnswerID() { return answer_item->GetAnswerID(); }

bool AnswerItem::IsPrivate() { return answer_item->IsPrivate(); }

bool AnswerItem::IsLiveAnswer() { return answer_item->IsLiveAnswer(); }

bool AnswerItem::IsSenderMyself() { return answer_item->IsSenderMyself(); }
IAnswerItem *AnswerItem::GetAnswerItem() const { return answer_item; }
END_ZOOM_SDK_UE_NAMESPACE