// Copyright : All rights reserved by Zoom Video Communications 2022-

#pragma once

#include "MeetingParticipantsController.h"
#include "UserInfo.h"
#include "UserManager.h"
#include "ZoomSDKRenderer.h"
#include "ZoomUESDKDef.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE

/**
 * This class holds the list of users, their info currently participating in
 * the meeting and their corresponding ZoomSDKRenderer (raw video data
 * renderer).
 */
class ZOOMMEETINGSDK_API UserManager {
public:
  UserManager();
  ~UserManager();
  UserManager(const UserManager &other) = delete;
  UserManager(UserManager &&other) noexcept = delete;
  UserManager &operator=(const UserManager &other) = delete;
  UserManager &operator=(UserManager &&other) noexcept = delete;

  // Static function to create an object of IUserInfo.
  static UserManager *Create();

  // Adds a new user to the user info map.
  //
  // Returns true if the user was added successfully.
  bool AddNewUser(unsigned int user_id);

  // Removes an existing user from the user info map.
  //
  // Returns true if the user was removed successfully.
  bool RemoveUser(unsigned int user_id);

  // Changes the user name of the current user.
  //
  // Returns true if the user name of the current user was successfully changed.
  bool ChangeUserName(unsigned int user_id, FString new_user_name);

  // Changes all the users names of all the users in the given list.
  // The function will try to update all the users from the list even if one or
  // more updates fail.
  //
  // Returns true iff all the users names were successfully changed.
  bool ChangeUsersNames(IList<unsigned int> *lst_user_ids);

  // Gets the user info (by updating the user info param passed) for the given
  // user id.
  //
  // Returns true if the user info was successfully obtained.
  // Note: The function does not check the validity of the pointer passed.
  bool GetUserInfo(unsigned int user_id, UserInfo *user_info) const;

  // Returns all the users info currently participating in the meeting.
  TArray<UserInfo> GetAllUsers() const;

  // Clean up the user list.
  void ClearAll();

  // Returns ZoomSDKRenderer corresponding to the given user-id.
  //
  // Returns a valid ZoomSDKRenderer only for users participating in the
  // meeting else return nullptr.
  ZoomSDKRenderer *GetZoomSDKRenderer(unsigned int user_id,
                                      ZoomSDKRawDataType raw_data_type);

  // Returns true if the renderer UTextureRenderTarget2D is currently being used
  // already.
  bool IsOutputRendererInUse(UTextureRenderTarget2D *renderTarget) const;

  // Returns true if the user's video is subscribed to a renderer.
  //
  // Note: The function returns false if the user id is not found or if the user
  // is not subscribed to a renderer.
  bool IsUserSubscribed(unsigned int user_id,
                        ZoomSDKRawDataType raw_data_type) const;

  // For debugging purposes.
  void PrintDebugInfo() const;

private:
  // Changes the user name of the current user.
  // Note: This function needs to be called with the mutex locked.
  //
  // Returns true if the user name of the current user was successfully changed.
  bool ChangeUserNameNoLock(unsigned int user_id, FString new_user_name);

  // Initialize the UserManager object.
  //
  // Returns true if the initialization was successful.
  bool Init();

  // Returns video ZoomSDKRenderer corresponding to the given user-id from given
  // renderer_map.
  //
  // Returns a valid ZoomSDKRenderer if user is subscribed.
  ZoomSDKRenderer *GetZoomSDKRendererFromMap(
      unsigned int user_id,
      TMap<unsigned int, ZoomSDKRenderer *> &renderer_map);

  // Pointer to the meeting participant controller.
  TUniquePtr<MeetingParticipantsController> _meeting_participant_ctrl;

  // Pointer to the meeting participant controller event.
  TUniquePtr<IMeetingParticipantsCtrlEvent> _meeting_participant_ctrl_event;

  // Set of users participating in the current meeting.
  TSet<unsigned int> _current_users;

  // Map of user ids and their corresponding video renderer.
  TMap<unsigned int, ZoomSDKRenderer *> _user_video_renderer;

  // Map of user ids and their corresponding share renderer.
  TMap<unsigned int, ZoomSDKRenderer *> _user_share_renderer;
};
END_ZOOM_SDK_UE_NAMESPACE