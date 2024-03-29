// Copyright : All rights reserved by Zoom Video Communications 2022-

#include "UserInfo.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE
UserInfo::UserInfo() {}
UserInfo::UserInfo(IUserInfo *user_info) { Init(user_info); }
UserInfo::UserInfo(const UserInfo &other) { other.ShallowCopyTo(this); }
UserInfo::~UserInfo() {}

bool UserInfo::Init(IUserInfo *user_info) {
  _user_info = user_info;
  return true;
}

unsigned int UserInfo::GetUserID() { return _user_info->GetUserID(); }
const wchar_t *UserInfo::GetUserName() { return _user_info->GetUserName(); }
UserRole UserInfo::GetUserRole() { return _user_info->GetUserRole(); }
FString UserInfo::GetUserRoleAsString() {
  auto val = GetUserRole();
  switch (val) {
  case USERROLE_NONE:
    return "USERROLE_NONE";
  case USERROLE_HOST:
    return "USERROLE_HOST";
  case USERROLE_COHOST:
    return "USERROLE_COHOST";
  case USERROLE_PANELIST:
    return "USERROLE_PANELIST";
  case USERROLE_BREAKOUTROOM_MODERATOR:
    return "USERROLE_BREAKOUTROOM_MODERATOR";
  case USERROLE_ATTENDEE:
    return "USERROLE_ATTENDEE";
  default:
    return "UserRole_Unknown";
  }
}
WebinarAttendeeStatus *UserInfo::GetWebinarAttendeeStauts() {
  return _user_info->GetWebinarAttendeeStauts();
}
bool UserInfo::IsHost() { return _user_info->IsHost(); }
bool UserInfo::IsInWaitingRoom() { return _user_info->IsInWaitingRoom(); }
bool UserInfo::IsTalking() { return _user_info->IsTalking(); }
bool UserInfo::IsVideoOn() { return _user_info->IsVideoOn(); }
bool UserInfo::IsRaiseHand() { return _user_info->IsRaiseHand(); }
int UserInfo::GetAudioVoiceLevel() { return _user_info->GetAudioVoiceLevel(); }
bool UserInfo::IsMySelf() { return _user_info->IsMySelf(); }

END_ZOOM_SDK_UE_NAMESPACE