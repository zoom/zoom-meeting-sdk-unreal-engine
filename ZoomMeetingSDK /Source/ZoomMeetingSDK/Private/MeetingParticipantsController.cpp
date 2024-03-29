// Copyright : All rights reserved by Zoom Video Communications 2022-

#include "MeetingParticipantsController.h"

#include "SDKInterfaceWrap.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE

MeetingParticipantsController *MeetingParticipantsController::Create() {
  TUniquePtr<MeetingParticipantsController> mpc(
      new MeetingParticipantsController());
  if (mpc->Init()) {
    return mpc.Release();
  }

  return nullptr;
}

bool MeetingParticipantsController::Init() {
  meeting_participants_controller =
      SDKInterfaceWrap::GetInst().GetMeetingParticipantsController();
  return (meeting_participants_controller) ? true : false;
}

SDKError MeetingParticipantsController::AllowParticipantsToRename(bool bAllow) {
  return meeting_participants_controller->AllowParticipantsToRename(bAllow);
}

SDKError
MeetingParticipantsController::AllowParticipantsToUnmuteSelf(bool bAllow) {
  return meeting_participants_controller->AllowParticipantsToUnmuteSelf(bAllow);
}

SDKError MeetingParticipantsController::AskAllToUnmute() {
  return meeting_participants_controller->AskAllToUnmute();
}

SDKError MeetingParticipantsController::AllowParticipantsToChat(bool bAllow) {
  return meeting_participants_controller->AllowParticipantsToChat(bAllow);
}

bool MeetingParticipantsController::IsParticipantAllowedToChat() {
  return meeting_participants_controller->IsParticipantAllowedToChat();
}

SDKError MeetingParticipantsController::AssignCoHost(unsigned int userid) {
  return meeting_participants_controller->AssignCoHost(userid);
}

SDKError MeetingParticipantsController::RevokeCoHost(unsigned int userid) {
  return meeting_participants_controller->RevokeCoHost(userid);
}

SDKError MeetingParticipantsController::ExpelUser(unsigned int userid) {
  return meeting_participants_controller->ExpelUser(userid);
}

SDKError MeetingParticipantsController::ReclaimHost() {
  return meeting_participants_controller->ReclaimHost();
}

SDKError MeetingParticipantsController::CanReclaimHost(bool &bCanReclaimHost) {
  return meeting_participants_controller->CanReclaimHost(bCanReclaimHost);
}

SDKError
MeetingParticipantsController::ReclaimHostByHostKey(const wchar_t *host_key) {
  return meeting_participants_controller->ReclaimHostByHostKey(host_key);
}

SDKError MeetingParticipantsController::CanbeCohost(unsigned int userid) {
  return meeting_participants_controller->CanbeCohost(userid);
}

SDKError MeetingParticipantsController::ChangeUserName(unsigned int userid,
                                                       const wchar_t *userName,
                                                       bool bSaveUserName) {
  return meeting_participants_controller->ChangeUserName(userid, userName,
                                                         bSaveUserName);
}

SDKError MeetingParticipantsController::LowerHand(unsigned int userid) {
  return meeting_participants_controller->LowerHand(userid);
}

SDKError MeetingParticipantsController::RaiseHand() {
  return meeting_participants_controller->RaiseHand();
}

IList<unsigned int> *MeetingParticipantsController::GetParticipantList() {
  return meeting_participants_controller->GetParticipantsList();
}

IUserInfo *MeetingParticipantsController::GetUserByUserID(unsigned int userid) {
  return meeting_participants_controller->GetUserByUserID(userid);
}

IUserInfo *MeetingParticipantsController::GetMySelfUser() {
  return meeting_participants_controller->GetMySelfUser();
}

SDKError
MeetingParticipantsController::LowerAllHands(bool forWebinarAttendees) {
  return meeting_participants_controller->LowerAllHands(forWebinarAttendees);
}

bool MeetingParticipantsController::IsParticipantsRenameAllowed() {
  return meeting_participants_controller->IsParticipantsRenameAllowed();
}

bool MeetingParticipantsController::IsParticipantsUnmuteSelfAllowed() {
  return meeting_participants_controller->IsParticipantsUnmuteSelfAllowed();
}

SDKError MeetingParticipantsController::MakeHost(unsigned int userid) {
  return meeting_participants_controller->MakeHost(userid);
}

SDKError MeetingParticipantsController::SetEvent(
    IMeetingParticipantsCtrlEvent *SetEvent) {
  return meeting_participants_controller->SetEvent(SetEvent);
}

END_ZOOM_SDK_UE_NAMESPACE