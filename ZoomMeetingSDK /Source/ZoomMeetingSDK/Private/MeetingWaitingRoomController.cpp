// Copyright : All rights reserved by Zoom Video Communications 2022-

#include "MeetingWaitingRoomController.h"

#include "SDKInterfaceWrap.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE

MeetingWaitingRoomController *MeetingWaitingRoomController::Create() {
  TUniquePtr<MeetingWaitingRoomController> mwrc(
      new MeetingWaitingRoomController());
  if (mwrc->Init()) {
    return mwrc.Release();
  }

  return nullptr;
}

bool MeetingWaitingRoomController::Init() {
  meeting_waiting_room_controller =
      SDKInterfaceWrap::GetInst().GetMeetingWaitingRoomController();
  return (meeting_waiting_room_controller) ? true : false;
}

SDKError MeetingWaitingRoomController::AdmitAllToMeeting() {
  return meeting_waiting_room_controller->AdmitAllToMeeting();
}

SDKError MeetingWaitingRoomController::AdmitToMeeting(unsigned int userid) {
  return meeting_waiting_room_controller->AdmitToMeeting(userid);
}

IList<unsigned int> *MeetingWaitingRoomController::GetWaitingRoomLst() {
  return meeting_waiting_room_controller->GetWaitingRoomLst();
}

SDKError MeetingWaitingRoomController::PutInWaitingRoom(unsigned int userid) {
  return meeting_waiting_room_controller->PutInWaitingRoom(userid);
}

IUserInfo *
MeetingWaitingRoomController::GetWaitingRoomUserInfoByID(unsigned int userid) {
  return meeting_waiting_room_controller->GetWaitingRoomUserInfoByID(userid);
}

END_ZOOM_SDK_UE_NAMESPACE