// Copyright : All rights reserved by Zoom Video Communications 2022-

#pragma once

#include "AuthService.h"
#include "AuthServiceEvent.h"
#include "Engine/Texture2D.h"
#include "Engine/TextureRenderTarget2D.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ZoomMeetingSDKBPDefine.h"
#include "ZoomMeetingSDKBPLibrary.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(BPZoomMeetingSDKLog, Log, All);

/*
 *	Function library class.
 *	Each function in it is expected to be static and represents blueprint
 *node that can be called in any blueprint.
 *
 *	When declaring function you can define metadata for the node. Key
 *function specifiers will be BlueprintPure and BlueprintCallable. BlueprintPure
 *- means the function does not affect the owning object in any way and thus
 *creates a node without Exec pins. BlueprintCallable - makes a function which
 *can be executed in Blueprints - Thus it has Exec pins. DisplayName - full name
 *of the node, shown when you mouse over the node and in the blueprint drop down
 *menu. Its lets you name the node using characters not allowed in C++ function
 *names. CompactNodeTitle - the word(s) that appear on the node. Keywords -
 *the list of keywords that helps you to find node when you search for it using
 *Blueprint drop-down menu. Good example is "Print String" node which you can
 *find also by using keyword "log". Category -	the category your node will be
 *under in the Blueprint drop-down menu.
 *
 *	For more info on custom blueprint nodes visit documentation:
 *	https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation
 */
UCLASS(Blueprintable)
class UZoomMeetingSDKBPLibrary : public UBlueprintFunctionLibrary {
  GENERATED_UCLASS_BODY()

public:
  // Helper function to check the SDKError result.
  //
  // Returns true if result is "SDKERR_SUCCESS".
  UFUNCTION(BlueprintCallable,
            meta = (DisplayName = "Check if the SDK error return is SUCCESS",
                    Keywords = "Zoom Helper Check SDK Error"),
            Category = "Zoom Meeting SDK Plug-in | Interfaces | Util")
  static bool IsSDKErrorSuccess(FString result);

  // Helper function to check the Auth result.
  //
  // Returns true if result is "AUTHRET_SUCCESS".
  UFUNCTION(BlueprintCallable,
            meta = (DisplayName = "Check Auth result",
                    Keywords = "Zoom Helper Check Auth result"),
            Category = "Zoom Meeting SDK Plug-in | Interfaces | Util")
  static bool IsAuthResultSuccess(FString result);

  /*
   * zoom_sdk.h
   */

  // Initializes Zoom SDK. Initializes SDK with default Zoom UI. Use the
  // function InitSDKWithUIOption with flag set to false to use customized
  // UI.
  //
  // Returns "SDKERR_SUCCESS" if initialization succeeds.
  UFUNCTION(
      BlueprintCallable,
      meta = (DisplayName = "Execute SDKInit function",
              Keywords = "ZoomMeetingSDK InitSDK"),
      Category = "Zoom Meeting SDK Plug-in | Interfaces | InitAuthController")
  static bool InitSDK(bool use_default_zoom_ui = true);

  // Cleans up Zoom SDK.
  //
  // Returns "SDKERR_SUCCESS" if clean up succeeds.
  UFUNCTION(
      BlueprintCallable,
      meta = (DisplayName = "Execute SDK Cleanup function",
              Keywords = "ZoomMeetingSDK CleanUPSDK"),
      Category = "Zoom Meeting SDK Plug-in | Interfaces | InitAuthController")
  static bool CleanupSDK();

  /*
   * IAuthService
   */

  // Auth SDK with JWT token.
  //
  // Return "SDKERR_SUCCESS" if auth request was sent successfully.
  UFUNCTION(
      BlueprintCallable,
      meta = (DisplayName = "Execute SDK Auth JWT function",
              Keywords = "IAuthService.SDKAuth JWT"),
      Category = "Zoom Meeting SDK Plug-in | Interfaces | InitAuthController")
  static bool SDKAuthJWT(FString jwt);

  // Returns the authentication status.
  //
  // Returns "AUTHRET_SUCCESS" if authentication was successful.
  UFUNCTION(
      BlueprintCallable,
      meta = (DisplayName = "Execute SDK Auth Status function",
              Keywords = "IAuthService.GetAuthResult"),
      Category = "Zoom Meeting SDK Plug-in | Interfaces | InitAuthController")
  static FString GetAuthResult();

  // Init and then auth the SDK with JWT token. Initializes SDK with default
  // Zoom UI. Use the function InitAuthSDKCustomizedUIFlag with flag set to true
  // to use customized UI.
  //
  // Return "SDKERR_SUCCESS" if init and auth request was sent successfully.
  UFUNCTION(
      BlueprintCallable,
      meta = (DisplayName = "SDK Init and Auth",
              Keywords = "ZoomMeetingSDK InitSDK IAuthService.SDKAuth JWT"),
      Category = "Zoom Meeting SDK Plug-in | Interfaces | InitAuthController")
  static bool InitAuthSDK(FString jwt, bool use_default_zoom_ui = true);

  // Logout of the logged-in user.
  //
  // Return "SDKERR_SUCCESS" if the logout was successful.
  UFUNCTION(
      BlueprintCallable,
      meta = (DisplayName = "SDK Logout", Keywords = "IAuthService.LogOut"),
      Category = "Zoom Meeting SDK Plug-in | Interfaces | InitAuthController")
  static bool LogOut();

  /*
   * IMeetingService
   */

  // Starts a meeting.
  //
  // Returns "SDKERR_SUCCESS" if starting a meeting was successful.
  UFUNCTION(
      BlueprintCallable,
      meta = (DisplayName = "Execute Zoom Start Meeting",
              Keywords = "IMeetingService.StartMeeting"),
      Category =
          "Zoom Meeting SDK Plug-in | Interfaces | MeetingServiceController")
  static bool StartMeeting(FString userName, FString zakToken);

  // Joins a given meeting.
  //
  // Returns "SDKERR_SUCCESS" if join was successful.
  UFUNCTION(
      BlueprintCallable,
      meta = (DisplayName = "Execute Zoom Join Meeting",
              Keywords = "IMeetingService.JoinMeeting"),
      Category =
          "Zoom Meeting SDK Plug-in | Interfaces | MeetingServiceController")
  static bool JoinMeeting(FString meetingNumber, FString passcode,
                          FString userName, FString zakToken);

  // Joins a Zoom Event meeting.
  //
  // Returns TRUE if join was successful.
  UFUNCTION(
      BlueprintCallable,
      meta = (DisplayName = "Join Zoom Event Meeting",
              Keywords = "IMeetingService.JoinZoomEventMeeting"),
      Category =
          "Zoom Meeting SDK Plug-in | Interfaces | MeetingServiceController")
  static bool JoinZoomEventMeeting(FString zoomEventToken);

  // Ends the existing meeting.
  //
  // Returns "SDKERR_SUCCESS" if ending the meeting was successful.
  UFUNCTION(
      BlueprintCallable,
      meta = (DisplayName = "Execute Zoom End Meeting",
              Keywords = "IMeetingService.EndMeeting"),
      Category =
          "Zoom Meeting SDK Plug-in | Interfaces | MeetingServiceController")
  static bool EndMeeting();

  // Leaves the existing meeting.
  //
  // Returns "SDKERR_SUCCESS" if leaving the meeting was successful.
  UFUNCTION(
      BlueprintCallable,
      meta = (DisplayName = "Execute Zoom Leave Meeting",
              Keywords = "IMeetingService.LeaveMeeting"),
      Category =
          "Zoom Meeting SDK Plug-in | Interfaces | MeetingServiceController")
  static bool LeaveMeeting();

  // Subscribe to the users video.
  //
  // Returns true if subscribing my video was successful.
  UFUNCTION(
      BlueprintCallable,
      meta = (WorldContext = "WorldContextObject",
              DisplayName = "Subscribe video",
              Keywords = "IZoomSDKRenderer.Subscribe"),
      Category = "Zoom Meeting SDK Plug-in | Interfaces | ZoomSDKRenderer")
  static bool
  SubscribeVideo(int64 user_id, const UObject *WorldContextObject,
                 UTextureRenderTarget2D *outputRenderer,
                 ZOOM_SDK_RAW_DATA_TYPE raw_data_type =
                     ZOOM_SDK_RAW_DATA_TYPE::ZoomSDKRawDataType_Video);
  // Unsubscribe from the users video.
  //
  // Returns true if un-subscribing my video was successful.
  UFUNCTION(
      BlueprintCallable,
      meta = (WorldContext = "WorldContextObject",
              DisplayName = "UnSubscribe video",
              Keywords = "IZoomSDKRenderer.UnSubscribe"),
      Category = "Zoom Meeting SDK Plug-in | Interfaces | ZoomSDKRenderer")
  static bool
  UnSubscribeVideo(int64 userId,
                   ZOOM_SDK_RAW_DATA_TYPE raw_data_type =
                       ZOOM_SDK_RAW_DATA_TYPE::ZoomSDKRawDataType_Video);

  // Checks if the user is subscribed to a video renderer.
  //
  // Returns true if user is subscribed to a video renderer.
  UFUNCTION(
      BlueprintCallable,
      meta = (WorldContext = "WorldContextObject",
              DisplayName = "Is user subscribed to video",
              Keywords = "IZoomSDKRenderer.IsUserSubscribedToVideo"),
      Category = "Zoom Meeting SDK Plug-in | Interfaces | ZoomSDKRenderer")
  static bool
  IsUserSubscribedToVideo(int64 userId,
                          ZOOM_SDK_RAW_DATA_TYPE raw_data_type =
                              ZOOM_SDK_RAW_DATA_TYPE::ZoomSDKRawDataType_Video);

  // Gets the output renderer where the given user is subscribed.
  //
  // Returns pointer to UTextureRenderTarget2D where the user is subscribed to a
  // video renderer else nullptr if the user id is invalid or if the user's
  // video is not subscribed.
  UFUNCTION(
      BlueprintCallable,
      meta = (WorldContext = "WorldContextObject",
              DisplayName = "Get output renderer",
              Keywords = "IZoomSDKRenderer.GetOutputRenderer"),
      Category = "Zoom Meeting SDK Plug-in | Interfaces | ZoomSDKRenderer")
  static UTextureRenderTarget2D *
  GetOutputRenderer(int64 userId,
                    ZOOM_SDK_RAW_DATA_TYPE raw_data_type =
                        ZOOM_SDK_RAW_DATA_TYPE::ZoomSDKRawDataType_Video);

  // Sets the resolution of the users video.
  //
  // Returns "SDKERR_SUCCESS" if subscribing my video was successful.
  // Supports values 90, 180, 360, 720 and 1080 as specified in
  // https://marketplacefront.zoom.us/sdk/meeting/windows/rawdata__renderer__interface_8h_source.html#l00008
  UFUNCTION(
      BlueprintCallable,
      meta = (WorldContext = "WorldContextObject",
              DisplayName = "Set Raw Data Resolution",
              Keywords = "IZoomSDKRenderer.SetRawDataResolution"),
      Category = "Zoom Meeting SDK Plug-in | Interfaces | ZoomSDKRenderer")
  static bool
  SetRawDataResolution(int64 userId, RAW_DATA_RESOLUTION resolution,
                       ZOOM_SDK_RAW_DATA_TYPE raw_data_type =
                           ZOOM_SDK_RAW_DATA_TYPE::ZoomSDKRawDataType_Video);

  /*
   * IAnswerItem
   */
  UFUNCTION(BlueprintCallable,
            meta = (DisplayName = "Get Answer Item info",
                    Keywords = "AnswerItem.GetAnswerItemInfo"),
            Category = "Zoom Meeting SDK Plug-in | Interfaces | AnswerItem")
  static FUEAnswerItem GetAnswerItemInfo(FString answerID);

  /*
   * IAudioSettingContext
   */

  // Get speaker volume.
  //
  // Return volume of the speaker in float type, return -1.0f if failed.
  UFUNCTION(
      BlueprintCallable,
      meta = (Keywords = "IAudioSettingContext.GetSpeakerVol"),
      Category = "Zoom Meeting SDK Plug-in | Interfaces | AudioSettingContext")
  static float GetSpeakerVol();

  // Enable auto adjust mic.
  //
  // Return "SDKERR_SUCCESS" if the action was successful.
  UFUNCTION(
      BlueprintCallable,
      meta = (Keywords = "IAudioSettingContext.EnableAutoAdjustMic"),
      Category = "Zoom Meeting SDK Plug-in | Interfaces | AudioSettingContext")
  static bool EnableAutoAdjustMic(bool enable);

  // Set speaker volume.
  //
  // Return TRUE if setting speaker volume was successful.
  UFUNCTION(
      BlueprintCallable,
      meta = (Keywords = "IAudioSettingContext.SetSpeakerVol"),
      Category = "Zoom Meeting SDK Plug-in | Interfaces | AudioSettingContext")
  static bool SetSpeakerVol(float volume);

  // Use default system mic.
  //
  // Return TRUE if using default system mic was successful.
  UFUNCTION(
      BlueprintCallable,
      meta = (Keywords = "IAudioSettingContext.UseDefaultSystemMic"),
      Category = "Zoom Meeting SDK Plug-in | Interfaces | AudioSettingContext")
  static bool UseDefaultSystemMic();

  // Use default system speaker.
  //
  // Return TRUE if using default system speaker was successful.
  UFUNCTION(
      BlueprintCallable,
      meta = (Keywords = "IAudioSettingContext.UseDefaultSystemSpeaker"),
      Category = "Zoom Meeting SDK Plug-in | Interfaces | AudioSettingContext")
  static bool UseDefaultSystemSpeaker();

  /*
   * IBatchCreateBOHelper
   */

  // Add new BO to the list.
  //
  // Return TRUE is the add new BO to the list action was successful.
  UFUNCTION(
      BlueprintCallable,
      meta = (Keywords = "IBatchCreateBOHelper.AddNewBoToList"),
      Category = "Zoom Meeting SDK Plug-in | Interfaces | BatchCreateBOHelper")
  static bool AddNewBoToList(FString strNewBOName);

  // Add new BO to the list.
  //
  // Return "SDKERR_SUCCESS" if the create BO transaction begin action was
  // successful.
  UFUNCTION(
      BlueprintCallable,
      meta = (Keywords = "IBatchCreateBOHelper.CreateBOTransactionBegin"),
      Category = "Zoom Meeting SDK Plug-in | Interfaces | BatchCreateBOHelper")
  static bool CreateBOTransactionBegin();

  // Add new BO to the list.
  //
  // Return "SDKERR_SUCCESS" if the create BO transaction commit action was
  // successful
  UFUNCTION(
      BlueprintCallable,
      meta = (Keywords = "IBatchCreateBOHelper.CreateBOTransactionCommit"),
      Category = "Zoom Meeting SDK Plug-in | Interfaces | BatchCreateBOHelper")
  static bool CreateBOTransactionCommit();

  /*
   * IBOAdmin
   */

  // Check whether the user can start a BO.
  //
  // Return TRUE if the user can start a BO.
  UFUNCTION(BlueprintCallable, meta = (Keywords = "IBOAdmin.CanStartBO"),
            Category = "Zoom Meeting SDK Plug-in | Interfaces | BOAdmin")
  static bool CanStartBO();

  // Assign a new user to a running BO.
  //
  // Return "SDKERR_SUCCESS" if the assigning new user to running BO was
  // successful.
  UFUNCTION(BlueprintCallable,
            meta = (Keywords = "IBOAdmin.AssignNewUserToRunningBO"),
            Category = "Zoom Meeting SDK Plug-in | Interfaces | BOAdmin")
  static bool AssignNewUserToRunningBO(FString userID, FString BOID);

  // Broadcast a message.
  //
  // Return "SDKERR_SUCCESS" if broadcasting a message was successful.
  UFUNCTION(BlueprintCallable, meta = (Keywords = "IBOAdmin.BroadcastMessage"),
            Category = "Zoom Meeting SDK Plug-in | Interfaces | BOAdmin")
  static bool BroadcastMessage(FString message);

  // Invite a BO user return to main session.
  //
  // Return "SDKERR_SUCCESS" if inviting the BO user return to main session
  // action was successful.
  UFUNCTION(BlueprintCallable,
            meta = (Keywords = "IBOAdmin.InviteBOUserReturnToMainSession"),
            Category = "Zoom Meeting SDK Plug-in | Interfaces | BOAdmin")
  static bool InviteBOUserReturnToMainSession(FString userID);

  // Join a BO by user request.
  //
  // Return "SDKERR_SUCCESS" if joining BO by user request action was
  // successful.
  UFUNCTION(BlueprintCallable,
            meta = (Keywords = "IBOAdmin.JoinBOByUserRequest"),
            Category = "Zoom Meeting SDK Plug-in | Interfaces | BOAdmin")
  static bool JoinBOByUserRequest(FString userID);

  // Start a BO.
  //
  // Return "SDKERR_SUCCESS" if starting a BO was successful.
  UFUNCTION(BlueprintCallable, meta = (Keywords = "IBOAdmin.StartBO"),
            Category = "Zoom Meeting SDK Plug-in | Interfaces | BOAdmin")
  static bool StartBO();

  // Stop a BO.
  //
  // Return "SDKERR_SUCCESS" if stopping a BO was successful.
  UFUNCTION(BlueprintCallable, meta = (Keywords = "IBOAdmin.StopBO"),
            Category = "Zoom Meeting SDK Plug-in | Interfaces | BOAdmin")
  static bool StopBO();

  /*
   * IBOAssistant
   */

  // Join a BO as an assistant.
  //
  // Return TRUE if joining a BO was successful.
  UFUNCTION(BlueprintCallable, meta = (Keywords = "IBOAssistant.JoinBO"),
            Category = "Zoom Meeting SDK Plug-in | Interfaces | BOAssistant")
  static bool BOAssistantJoinBO(FString strBOID);

  // Leave the current BO.
  //
  // Return TRUE if leaving the current BO was successful.
  UFUNCTION(BlueprintCallable, meta = (Keywords = "IBOAssistant.LeaveBO"),
            Category = "Zoom Meeting SDK Plug-in | Interfaces | BOAssistant")
  static bool BOAssistantLeaveBO();

  /*
   * IBOAttendee
   */
  // Get the current BO name.
  //
  // Return the BO name as a string.
  UFUNCTION(BlueprintCallable, meta = (Keywords = "IBOAttendee.GetBOName"),
            Category = "Zoom Meeting SDK Plug-in | Interfaces | BOAttendee")
  static FString GetBOName();

  // Check if the current user can return to the main session.
  //
  // Return TRUE is the user can return to the main session.
  UFUNCTION(BlueprintCallable,
            meta = (Keywords = "IBOAttendee.IsCanReturnMainSession"),
            Category = "Zoom Meeting SDK Plug-in | Interfaces | BOAttendee")
  static bool IsCanReturnMainSession();

  // Check if the host is in this BO.
  //
  // Return TRUE is the host is in the current BO.
  UFUNCTION(BlueprintCallable, meta = (Keywords = "IBOAttendee.IsHostInThisBO"),
            Category = "Zoom Meeting SDK Plug-in | Interfaces | BOAttendee")
  static bool IsHostInThisBO();

  // Join the assigned BO.
  //
  // Return TRUE if the join BO request was successful.
  UFUNCTION(BlueprintCallable, meta = (Keywords = "IBOAttendee.AttendeeJoinBO"),
            Category = "Zoom Meeting SDK Plug-in | Interfaces | BOAttendee")
  static bool AttendeeJoinBO();

  // Leave the assigned BO.
  //
  // Return TRUE if leaving the current BO was successful.
  UFUNCTION(BlueprintCallable,
            meta = (Keywords = "IBOAttendee.AttendeeLeaveBO"),
            Category = "Zoom Meeting SDK Plug-in | Interfaces | BOAttendee")
  static bool AttendeeLeaveBO();

  /*
   * IBOCreator
   */

  // Create a BO.
  //
  // Return TRUE if creating a BO was successful.
  UFUNCTION(BlueprintCallable, meta = (Keywords = "IBOCreator.CreateBO"),
            Category = "Zoom Meeting SDK Plug-in | Interfaces | BOCreator")
  static bool CreateBO(FString strBOName);

  // Update a BO name.
  //
  // Return TRUE if the update was successful.
  UFUNCTION(BlueprintCallable, meta = (Keywords = "IBOCreator.UpdateBOName"),
            Category = "Zoom Meeting SDK Plug-in | Interfaces | BOCreator")
  static bool UpdateBOName(FString strBOID, FString strNewBOName);

  // Remove a BO.
  //
  // Return TRUE if the removal was successful.
  UFUNCTION(BlueprintCallable, meta = (Keywords = "IBOCreator.RemoveBO"),
            Category = "Zoom Meeting SDK Plug-in | Interfaces | BOCreator")
  static bool RemoveBO(FString strBOID);

  // Assign a user to BO.
  //
  // Return TRUE if the action was successful.
  UFUNCTION(BlueprintCallable, meta = (Keywords = "IBOCreator.AssignUserToBO"),
            Category = "Zoom Meeting SDK Plug-in | Interfaces | BOCreator")
  static bool AssignUserToBO(FString strUserID, FString strBOID);

  // Remove user from BO.
  //
  // Return TRUE is removing a user from BO was successful.
  UFUNCTION(BlueprintCallable,
            meta = (Keywords = "IBOCreator.RemoveUserFromBO"),
            Category = "Zoom Meeting SDK Plug-in | Interfaces | BOCreator")
  static bool RemoveUserFromBO(FString strUserID, FString strBOID);

  // Set BO option. - Incomplete BP wrapper
  //
  // Return TRUE if setting the BO option was successful.
  // UFUNCTION(BlueprintCallable, meta = (Keywords = "IBOCreator.CreateBO"),
            // Category = "Zoom Meeting SDK Plug-in | Interfaces | BOCreator")
  // static bool SetBOOption();

  // Get a BO option - Incomplete BP wrapper
  //
  // Return TRUE if getting the BO option was successful.
  // UFUNCTION(BlueprintCallable, meta = (Keywords = "IBOCreator.CreateBO"),
            // Category = "Zoom Meeting SDK Plug-in | Interfaces | BOCreator")
  // static bool GetBOOption();

  /*
   * IBOData.
   */

  UFUNCTION(BlueprintCallable, meta = (Keywords = "IBOData.GetBOUserName"),
            Category = "Zoom Meeting SDK Plug-in | Interfaces | BOData")
  static FString GetBOUserName(FString strUserID);

  UFUNCTION(BlueprintCallable, meta = (Keywords = "IBOData.IsBOUserMyself"),
            Category = "Zoom Meeting SDK Plug-in | Interfaces | BOData")
  static bool IsBOUserMyself(FString strUserID);

  UFUNCTION(BlueprintCallable, meta = (Keywords = "IBOData.GetCurrentBOName"),
            Category = "Zoom Meeting SDK Plug-in | Interfaces | BOData")
  static FString GetCurrentBOName();

  /*
   * ICameraController
   */
  // Check whether can control camera.
  //
  // Return TRUE if the camera can be controlled, otherwise not.
  UFUNCTION(
      BlueprintCallable,
      meta = (Keywords = "ICameraController.CanControlCamera"),
      Category = "Zoom Meeting SDK Plug-in | Interfaces | CameraController")
  static bool CanControlCamera();

  // Check if the current control is valid.
  //
  // Return TRUE if it is valid, otherwise not.
  UFUNCTION(
      BlueprintCallable, meta = (Keywords = "ICameraController.IsValid"),
      Category = "Zoom Meeting SDK Plug-in | Interfaces | CameraController")
  static bool IsValid();

  // Begin to turn left.
  //
  // Return TRUE if the action is successful.
  UFUNCTION(
      BlueprintCallable, meta = (Keywords = "ICameraController.BeginTurnLeft"),
      Category = "Zoom Meeting SDK Plug-in | Interfaces | CameraController")
  static bool BeginTurnLeft();

  // Continue to turn left.
  //
  // Return TRUE if the action is successful.
  UFUNCTION(
      BlueprintCallable,
      meta = (Keywords = "ICameraController.ContinueTurnLeft"),
      Category = "Zoom Meeting SDK Plug-in | Interfaces | CameraController")
  static bool ContinueTurnLeft();

  // End turning left.
  //
  // Return TRUE if the action is successful.
  UFUNCTION(
      BlueprintCallable, meta = (Keywords = "ICameraController.EndTurnLeft"),
      Category = "Zoom Meeting SDK Plug-in | Interfaces | CameraController")
  static bool EndTurnLeft();

  // Begin to turn right.
  //
  // Return TRUE if the action is successful.
  UFUNCTION(
      BlueprintCallable, meta = (Keywords = "ICameraController.BeginTurnRight"),
      Category = "Zoom Meeting SDK Plug-in | Interfaces | CameraController")
  static bool BeginTurnRight();

  // Continue to turn right.
  //
  // Return TRUE if the action is successful.
  UFUNCTION(
      BlueprintCallable,
      meta = (Keywords = "ICameraController.ContinueTurnRight"),
      Category = "Zoom Meeting SDK Plug-in | Interfaces | CameraController")
  static bool ContinueTurnRight();

  // End turning right.
  //
  // Return TRUE if the action is successful.
  UFUNCTION(
      BlueprintCallable, meta = (Keywords = "ICameraController.EndTurnRight"),
      Category = "Zoom Meeting SDK Plug-in | Interfaces | CameraController")
  static bool EndTurnRight();

  // Begin to turn up.
  //
  // Return TRUE if the action is successful.
  UFUNCTION(
      BlueprintCallable, meta = (Keywords = "ICameraController.BeginTurnUp"),
      Category = "Zoom Meeting SDK Plug-in | Interfaces | CameraController")
  static bool BeginTurnUp();

  // Continue to turn up.
  //
  // Return TRUE if the action is successful.
  UFUNCTION(
      BlueprintCallable, meta = (Keywords = "ICameraController.ContinueTurnUp"),
      Category = "Zoom Meeting SDK Plug-in | Interfaces | CameraController")
  static bool ContinueTurnUp();

  // End turning up.
  //
  // Return TRUE if the action is successful.
  UFUNCTION(
      BlueprintCallable, meta = (Keywords = "ICameraController.EndTurnUp"),
      Category = "Zoom Meeting SDK Plug-in | Interfaces | CameraController")
  static bool EndTurnUp();

  // Begin to turn down.
  //
  // Return TRUE if the action is successful.
  UFUNCTION(
      BlueprintCallable, meta = (Keywords = "ICameraController.BeginTurnDown"),
      Category = "Zoom Meeting SDK Plug-in | Interfaces | CameraController")
  static bool BeginTurnDown();

  // Continue to turn down.
  //
  // Return TRUE if the action is successful.
  UFUNCTION(
      BlueprintCallable,
      meta = (Keywords = "ICameraController.ContinueTurnDown"),
      Category = "Zoom Meeting SDK Plug-in | Interfaces | CameraController")
  static bool ContinueTurnDown();

  // End turning down.
  //
  // Return TRUE if the action is successful.
  UFUNCTION(
      BlueprintCallable, meta = (Keywords = "ICameraController.EndTurnDown"),
      Category = "Zoom Meeting SDK Plug-in | Interfaces | CameraController")
  static bool EndTurnDown();

  // Begin to zoom in.
  //
  // Return TRUE if the action is successful.
  UFUNCTION(
      BlueprintCallable, meta = (Keywords = "ICameraController.BeginZoomIn"),
      Category = "Zoom Meeting SDK Plug-in | Interfaces | CameraController")
  static bool BeginZoomIn();

  // Continue to zoom in.
  //
  // Return TRUE if the action is successful.
  UFUNCTION(
      BlueprintCallable, meta = (Keywords = "ICameraController.ContinueZoomIn"),
      Category = "Zoom Meeting SDK Plug-in | Interfaces | CameraController")
  static bool ContinueZoomIn();

  // End zooming in.
  //
  // Return TRUE if the action is successful.
  UFUNCTION(
      BlueprintCallable, meta = (Keywords = "ICameraController.EndZoomIn"),
      Category = "Zoom Meeting SDK Plug-in | Interfaces | CameraController")
  static bool EndZoomIn();

  // Begin to zoom out.
  //
  // Return TRUE if the action is successful.
  UFUNCTION(
      BlueprintCallable, meta = (Keywords = "ICameraController.BeginZoomOut"),
      Category = "Zoom Meeting SDK Plug-in | Interfaces | CameraController")
  static bool BeginZoomOut();

  // Continue to zoom out.
  //
  // Return TRUE if the action is successful.
  UFUNCTION(
      BlueprintCallable,
      meta = (Keywords = "ICameraController.ContinueZoomOut"),
      Category = "Zoom Meeting SDK Plug-in | Interfaces | CameraController")
  static bool ContinueZoomOut();

  // End zooming out.
  //
  // Return TRUE if the action is successful.
  UFUNCTION(
      BlueprintCallable, meta = (Keywords = "ICameraController.EndZoomOut"),
      Category = "Zoom Meeting SDK Plug-in | Interfaces | CameraController")
  static bool EndZoomOut();

  /*
   * IClosedCaptionController
   */
  // Check if it allowed to assign other to send closed caption.
  //
  // Return TRUE if it is allowed to assign other to send CC.
  UFUNCTION(
      BlueprintCallable,
      meta = (Keywords = "IClosedCaptionController.CanAssignOtherToSendCC"),
      Category =
          "Zoom Meeting SDK Plug-in | Interfaces | ClosedCaptionController")
  static bool CanAssignOtherToSendCC();

  // Check if an user can be assigned to send cloused caption.
  //
  // Return TRUE if the user can be assigned to send CC.
  UFUNCTION(
      BlueprintCallable,
      meta = (Keywords = "IClosedCaptionController.CanBeAssignedToSendCC"),
      Category =
          "Zoom Meeting SDK Plug-in | Interfaces | ClosedCaptionController")
  static bool CanBeAssignedToSendCC(int userID);

  // Check if the current user can start live transcription.
  //
  // Return TRUE if the user can start live transcription.
  UFUNCTION(
      BlueprintCallable,
      meta = (Keywords = "IClosedCaptionController.CanStartLiveTranscription"),
      Category =
          "Zoom Meeting SDK Plug-in | Interfaces | ClosedCaptionController")
  static bool CanStartLiveTranscription();

  // Check if the current user can send closed caption.
  //
  // Return TRUE if the current user can send CC.
  UFUNCTION(
      BlueprintCallable,
      meta = (Keywords = "IClosedCaptionController.CanSendClosedCaption"),
      Category =
          "Zoom Meeting SDK Plug-in | Interfaces | ClosedCaptionController")
  static bool CanSendClosedCaption();

  /*
   * IJoinMeetingBehaviorConfiguration
   */

  // clang-format off

  // Enable force auto start my video when joining a meeting.
  //
  // Return TRUE if the action is complete.
  UFUNCTION(
      BlueprintCallable,
      meta = (Keywords = 
        "IJoinMeetingBehaviorConfiguration.EnableForceAutoStartMyVideoWhenJoinMeeting"),
      Category = "Zoom Meeting SDK Plug-in | Interfaces | JoinMeetingBehaviorConfiguration")
  static bool EnableForceAutoStartMyVideoWhenJoinMeeting(bool enable);
  // clang-format on

  // clang-format off

  // Enable force auto stop my video when joining a meeting.
  //
  // Return TRUE if the action is complete.
  UFUNCTION(
      BlueprintCallable,
      meta = (Keywords = 
        "IJoinMeetingBehaviorConfiguration.EnableForceAutoStopMyVideoWhenJoinMeeting"),
      Category = "Zoom Meeting SDK Plug-in | Interfaces | JoinMeetingBehaviorConfiguration")
  static bool EnableForceAutoStopMyVideoWhenJoinMeeting(bool enable);
  // clang-format on

  /*
   * IMeetingAudioController
   */
  // Mute the audio of an user. Only Host/Co-host can mute others.
  //
  // Return TRUE if the user is muted.
  UFUNCTION(
      BlueprintCallable,
      meta = (Keywords = "IMeetingAudioController.MuteAudio"),
      Category =
          "Zoom Meeting SDK Plug-in | Interfaces | MeetingAudioController")
  static bool MuteAudio(int userID, bool allowUnmuteBySelf);

  // Check if the current user can unmute themselves.
  //
  // Return TRUE if the current user can unmute by themselves.
  UFUNCTION(
      BlueprintCallable,
      meta = (Keywords = "IMeetingAudioController.CanUnmuteMyself"),
      Category =
          "Zoom Meeting SDK Plug-in | Interfaces | MeetingAudioController")
  static bool CanUnMuteByself();

  // Unmute the audio of an user. Only Host/Co-host can unmute others.
  //
  UFUNCTION(
      BlueprintCallable,
      meta = (Keywords = "IMeetingAudioController.UnmuteAudio"),
      Category =
          "Zoom Meeting SDK Plug-in | Interfaces | MeetingAudioController")
  static bool UnMuteAudio(int userID);

  /*
   * IMeetingBOController
   */
  // Check if BO is enabled.
  //
  // Return TRUE if BO is enabled.
  UFUNCTION(
      BlueprintCallable, meta = (Keywords = "IMeetingBOController.IsBOEnabled"),
      Category = "Zoom Meeting SDK Plug-in | Interfaces | MeetingBOController")
  static bool IsBOEnabled();

  // Check if BO has started.
  //
  // Return TRUE if BO has started.
  UFUNCTION(
      BlueprintCallable, meta = (Keywords = "IMeetingBOController.IsBOStarted"),
      Category = "Zoom Meeting SDK Plug-in | Interfaces | MeetingBOController")
  static bool IsBOStarted();

  // Check if currently is in the BO.
  //
  // Return TRUE if currently in the BO.
  UFUNCTION(
      BlueprintCallable,
      meta = (Keywords = "IMeetingBOController.IsInBOMeeting"),
      Category = "Zoom Meeting SDK Plug-in | Interfaces | MeetingBOController")
  static bool IsInBOMeeting();

  /*
   * IEmojiReactionController
   */

  // clang-format off

  // Check if emoji reaction is enabled.
  //
  // Return TRUE if emoji reaction is enabled.
  UFUNCTION(
      BlueprintCallable,
      meta =
          (DisplayName = "Is emoji reaction enabled",
           Keywords = "IMeetingEmojiReactionController.IsEmojiReactionEnabled"),
      Category = "Zoom Meeting SDK Plug-in | Interfaces | MeetingEmojiReactionController")
  static bool IsEmojiReactionEnabled();
  // clang-format on

  // clang-format off

  // Send emoji reaction.
  //
  // Return TRUE if sending an emoji reaction was successful.  
  UFUNCTION(
      BlueprintCallable,
      meta = (DisplayName = "Send emoji reaction",
              Keywords = "IMeetingEmojiReactionController.SendEmojiReaction"),
      Category = "Zoom Meeting SDK Plug-in | Interfaces | MeetingEmojiReactionController")
  static bool SendEmojiReaction(SDK_EMOJI_REACTION_TYPE type);
  // clang-format on

  // clang-format off

  // Send emoji feedback.
  //
  // Return TRUE if sending an emoji feedback was successful.
  UFUNCTION(
      BlueprintCallable,
      meta = (DisplayName = "Send emoji feedback",
              Keywords = "IMeetingEmojiReactionController.SendEmojiFeedback"),
      Category = "Zoom Meeting SDK Plug-in | Interfaces | MeetingEmojiReactionController")
  static bool SendEmojiFeedback(SDK_EMOJI_FEEDBACK_TYPE type);

  // Cancel emoji feedback.
  //
  // Return TRUE if sending an emoji feedback was canceled.
  UFUNCTION(
      BlueprintCallable,
      meta = (DisplayName = "Cancel emoji feedback",
              Keywords = "IMeetingEmojiReactionController.CancelEmojiFeedback"),
      Category = "Zoom Meeting SDK Plug-in | Interfaces | MeetingEmojiReactionController")
  static bool CancelEmojiFeedback();
  // clang-format on

  /*
   * IMeetingChatController
   */

  // Delete a chat message.
  //
  // Returns "SDKERR_SUCCESS" if deleting a chat message was successful.
  UFUNCTION(BlueprintCallable,
            meta = (Keywords = "IMeetingChatController.DeleteChatMessage"),
            Category =
                "Zoom Meeting SDK Plug-in | Interfaces | MeetingChatController")
  static bool DeleteChatMessage(FString msgID);

  // Get chat message ID.
  //
  // Return chat message info
  UFUNCTION(BlueprintCallable,
            meta = (Keywords = "IMeetingChatController.GetChatMessageById"),
            Category =
                "Zoom Meeting SDK Plug-in | Interfaces | MeetingChatController")
  static FUEChatMsgInfo GetChatMessageInfo(FString msgID);

  // Get all chat message ID
  //
  // Return "SDKERR_SUCCESS" if getting all chat message ID was successful.
  UFUNCTION(BlueprintCallable,
            meta = (Keywords = "IMeetingChatController.GetAllChatMessageID"),
            Category =
                "Zoom Meeting SDK Plug-in | Interfaces | MeetingChatController")
  static TArray<FString> GetAllChatMessageID();

  // Get chat status.
  //
  // Return an FUEChatStatus struc with value if getting the chat status was
  // successful.
  UFUNCTION(BlueprintCallable,
            meta = (Keywords = "IMeetingChatController.GetChatStatus"),
            Category =
                "Zoom Meeting SDK Plug-in | Interfaces | MeetingChatController")
  static FUEChatStatus GetChatStatus();

  // Check if a message can be deleted.
  //
  // Return TRUE if the message can be deleted.
  UFUNCTION(
      BlueprintCallable,
      meta = (Keywords = "IMeetingChatController.IsChatMessageCanBeDeleted"),
      Category =
          "Zoom Meeting SDK Plug-in | Interfaces | MeetingChatController")
  static bool IsChatMessageCanBeDeleted(FString msgID);

  // Send chat message.
  //
  // Returns "SDKERR_SUCCESS" if sending chat message was successful.
  UFUNCTION(BlueprintCallable,
            meta = (DisplayName = "Send chat message",
                    Keywords = "IMeetingChatController.SendChatMessage"),
            Category =
                "Zoom Meeting SDK Plug-in | Interfaces | MeetingChatController")
  static bool SendChatMessage(FString content, int64 receiver,
                              FString chatType);

  /*
   * IMeetingUIElemConfiguration
   */

  UFUNCTION(
      BlueprintCallable,
      meta = (Keywords = "IMeetingUIElemConfiguraton.EnableClaimHostFeature"),
      Category =
          "Zoom Meeting SDK Plug-in | Interfaces | MeetingUIElemConfiguration")
  static bool EnableClaimHostFeature(bool enable);

  /*
   * ICustomImmersiveController
   */
  UFUNCTION(
      BlueprintCallable,
      meta = (Keywords = "ICustomImmersiveController.isSupportImmersive"),
      Category =
          "Zoom Meeting SDK Plug-in | Interfaces | MeetingCustomImmersive")
  static bool IsSupportImmersive();

  /*
   * IAnnotationController
   */
  UFUNCTION(
      BlueprintCallable,
      meta = (Keywords = "IAnnotationController.IsAnnotationDisable"),
      Category = "Zoom Meeting SDK Plug-in | Interfaces | MeetingAnnotation")
  static bool IsAnnotationDisable();

  /*
   * IDirectShareSerivceHelper
   */
  UFUNCTION(
      BlueprintCallable,
      meta = (Keywords = "IDirectShareServiceHelper.CanStartDirectShare"),
      Category = "Zoom Meeting SDK Plug-in | Interfaces | MeetingDirectShare")
  static bool CanStartDirectShare();

  /*
   * IMeetingVideoController
   */

  // Get spotlighted user list.
  //
  // Return "SDK_SUCCESS" if getting the spotlighted participants is successful.
  UFUNCTION(
      BlueprintCallable,
      meta = (DisplayName = "Get spotlighted user list",
              Keywords = "Get spotlighted user list"),
      Category =
          "Zoom Meeting SDK Plug-in | Interfaces | MeetingVideoController")
  static TArray<FUEUserInfo> GetSpotlightedUserList();

  // Spotlight video.
  //
  // Returns "SDK_SUCCESS" if spotlighting a user was successful.
  UFUNCTION(
      BlueprintCallable,
      meta = (DisplayName = "Spotlight video", Keywords = "Spotlight video"),
      Category =
          "Zoom Meeting SDK Plug-in | Interfaces | MeetingVideoController")
  static bool SpotlightVideo(int64 user_id);

  // Unspotlight all videos.
  //
  // Return "SDK_SUCCESS" if unspotlighting all users were successful.
  UFUNCTION(
      BlueprintCallable,
      meta = (DisplayName = "Unspotlight all videos",
              Keywords = "Unspotlight all videos"),
      Category =
          "Zoom Meeting SDK Plug-in | Interfaces | MeetingVideoController")
  static bool UnSpotlightAllVideos();

  // Unspotlight video.
  //
  // Returns "SDK_SUCCESS if unspotlighting a user was successful.
  UFUNCTION(
      BlueprintCallable,
      meta = (DisplayName = "Unspotlight video",
              Keywords = "Unspotlight video"),
      Category =
          "Zoom Meeting SDK Plug-in | Interfaces | MeetingVideoController")
  static bool UnSpotlightVideo(int64 user_id);

  // Can spotlight.
  //
  // Returns "SDK_SUCCESS" if able to spotlight the video of the specified user
  // in the meeting was successful.
  UFUNCTION(
      BlueprintCallable,
      meta = (DisplayName = "Can spotlight", Keywords = "Can spotlight"),
      Category =
          "Zoom Meeting SDK Plug-in | Interfaces | MeetingVideoController")
  static bool CanSpotlight(int64 user_id);

  // Can unspotlight.
  //
  // Returns "SDK_SUCCESS" if able to unspotlight the video of the specified
  // user in the meeting was successful.
  UFUNCTION(
      BlueprintCallable,
      meta = (DisplayName = "Can unspotlight", Keywords = "Can unspotlight"),
      Category =
          "Zoom Meeting SDK Plug-in | Interfaces | MeetingVideoController")
  static bool CanUnSpotlight(int64 user_id);

  // Mute video.
  //
  // Returns "SDK_SUCCESS if mute own video was successful.
  UFUNCTION(
      BlueprintCallable,
      meta = (DisplayName = "Mute video", Keywords = "Mute video"),
      Category =
          "Zoom Meeting SDK Plug-in | Interfaces | MeetingVideoController")
  static bool MuteVideo();

  // Unmute video.
  //
  // Returns "SDK_SUCCESS if unmute own video was successful.
  UFUNCTION(
      BlueprintCallable,
      meta = (DisplayName = "Unmute video", Keywords = "Unmute video"),
      Category =
          "Zoom Meeting SDK Plug-in | Interfaces | MeetingVideoController")
  static bool UnmuteVideo();

  // Stop attendee video.
  //
  // Returns "SDK_SUCCESS if turn off the video of the assigned user was
  // successful.
  UFUNCTION(
      BlueprintCallable,
      meta = (DisplayName = "Stop attendee video",
              Keywords = "Stop attendee video"),
      Category =
          "Zoom Meeting SDK Plug-in | Interfaces | MeetingVideoController")
  static bool StopAttendeeVideo(int64 user_id);

  // Ask attendee to start video.
  //
  // Returns "SDK_SUCCESS" if demand to turn on the video of the assigned user
  // was successful.
  UFUNCTION(
      BlueprintCallable,
      meta = (DisplayName = "Ask attendee to start video",
              Keywords = "Ask attendee to start video"),
      Category =
          "Zoom Meeting SDK Plug-in | Interfaces | MeetingVideoController")
  static bool AskAttendeeToStartVideo(int64 user_id);

  // Can stop attendee video.
  //
  // Returns "SDK_SUCCESS" if query to demand specified user to turn off the
  // video was successful.
  UFUNCTION(
      BlueprintCallable,
      meta = (DisplayName = "Can stop attendee video",
              Keywords = "Can stop attendee video"),
      Category =
          "Zoom Meeting SDK Plug-in | Interfaces | MeetingVideoController")
  static bool CanStopAttendeeVideo(int64 user_id);

  // Can ask attendee to start video.
  //
  // Returns "SDK_SUCCESS" if query to demand specified user to turn on the
  // video was successful.
  UFUNCTION(
      BlueprintCallable,
      meta = (DisplayName = "Can ask attendee to start video",
              Keywords = "Can ask attendee to start video"),
      Category =
          "Zoom Meeting SDK Plug-in | Interfaces | MeetingVideoController")
  static bool CanAskAttendeeToStartVideo(int64 user_id);

  /*
   * IMeetingLiveStreamController
   */

  // Can start live Stream.
  //
  // Returns "SDK_SUCCESS" if live streaming is enabled.
  UFUNCTION(
      BlueprintCallable,
      meta = (DisplayName = "Can start live stream",
              Keywords = "IMeetingLiveStreamController.CanStartLiveStream"),
      Category =
          "Zoom Meeting SDK Plug-in | Interfaces | MeetingLiveStreamController")
  static bool CanStartLiveStream();

  // Can start raw live Stream.
  //
  // Returns "SDK_SUCCESS" if raw live streaming is enabled.
  UFUNCTION(
      BlueprintCallable,
      meta = (DisplayName = "Can start raw live stream",
              Keywords = "IMeetingLiveStreamController.CanStartRawLiveStream"),
      Category =
          "Zoom Meeting SDK Plug-in | Interfaces | MeetingLiveStreamController")
  static bool CanStartRawLiveStream();

  /*
   * IMeetingParticipantsController
   */

  // clang-format off

  // Get participants list.
  //
  // Return "SDK_SUCCESS" if getting the participant is successful.
  UFUNCTION(BlueprintCallable,
            meta = (DisplayName = "Get Participant List",
                    Keywords = "UserInfo.GetParticipantsList"),
            Category = "Zoom Meeting SDK Plug-in | Interfaces | MeetingParticipantsController")
  static TArray<FUEUserInfo> GetParticipantsList();
  // clang-format on

  // clang-format off
  
  // Lowers all hands.
  //
  // Return "SDK_SUCCESS" if lowering all hands from participants is successful.
  UFUNCTION(BlueprintCallable,
            meta = (DisplayName = "Lower All Hands",
                    Keywords = "IMeetingParticipantsController.LowerAllHands"),
            Category = "Zoom Meeting SDK Plug-in | Interfaces | MeetingParticipantsController")
  static bool LowerAllHands(bool forWebinarAttendees);

  // Lowers hand.
  //
  // Return "SDK_SUCCESS" if lowering hand from a participant is successful.
  UFUNCTION(BlueprintCallable,
            meta = (DisplayName = "Lower Hand",
                    Keywords = "IMeetingParticipantsController.LowerHand"),
            Category = "Zoom Meeting SDK Plug-in | Interfaces | MeetingParticipantsController")
  static bool LowerHand(int64 user_id);
  // clang-format on

  /*
   * IUserInfo
   */

  // Get user info for the given user id.
  //
  // Return "SDK_SUCCESS" if getting the participant is successful.
  UFUNCTION(BlueprintCallable,
            meta = (DisplayName = "Get user info",
                    Keywords = "UserInfo.GetUserInfo"),
            Category = "Zoom Meeting SDK Plug-in | Interfaces | IUserInfo")
  static FUEUserInfo GetUserInfo(int64 user_id);

  // clang-format off

  /*
   * IMeetingWaitingRoomController
   */

  // Gets the waiting room list
  //
  // Returns the list of IDs of attendees in the waiting room
  UFUNCTION(
      BlueprintCallable,
      meta = (DisplayName = "GetWaitingRoomLst",
              Keywords = "IMeetingWaitingRoomController.GetWaitingRoomLst"),
      Category = "Zoom Meeting SDK Plug-in | Interfaces | MeetingWaitingRoomController")
  static TArray<int64> GetWaitingRoomLst();

  // Gets the waiting room user infor by ID
  //
  // Returns the attendee information in the waiting room using user ID
  UFUNCTION(
      BlueprintCallable,
      meta = (DisplayName = "GetWaitingRoomUserInfoByID",
              Keywords =
                  "IMeetingWaitingRoomController.GetWaitingRoomUserInfoByID"),
      Category = "Zoom Meeting SDK Plug-in | Interfaces | MeetingWaitingRoomController")
  static FUEUserInfo GetWaitingRoomUserInfoByID(int64 user_id);

  // Put user in waiting room
  //
  // Returns "SDK_SUCCESS" if specified user to enter the waiting room is
  // enabled
  UFUNCTION(
      BlueprintCallable,
      meta = (DisplayName = "PutInWaitingRoom",
              Keywords = "IMeetingWaitingRoomController.PutInWaitingRoom"),
      Category = "Zoom Meeting SDK Plug-in | Interfaces | MeetingWaitingRoomController")
  static bool PutInWaitingRoom(int64 user_id);

  // clang-format off

  // Admit everyone in the waiting room to the meeting.
  //
  // Return "SDK_SUCCESS" if the admit all to meeting request was successful.
  UFUNCTION(
      BlueprintCallable,
      meta = (DisplayName = "AdmitAllToMeeting",
              Keywords = "IMeetingWaitingRoomController.AdmitAllToMeeting"),
      Category = "Zoom Meeting SDK Plug-in | Interfaces | MeetingWaitingRoomController")
  static bool AdmitAllToMeeting();
  // clang-format on

  // clang-format off

  // Admit a particular user to the meeting.
  //
  // Return "SDK_SUCCESS" if the admit an user request was successful.
  UFUNCTION(BlueprintCallable,
            meta = (DisplayName = "AdmitToMeeting",
                    Keywords = "IMeetingWaitingRoomController.AdmitToMeeting"),
            Category = "Zoom Meeting SDK Plug-in | Interfaces | MeetingWaitingRoomController")
  static bool AdmitToMeeting(int64 user_id);
  // clang-format on

  /*
   * IMeetingWebinarController
   */

  // Allow attendee to talk.
  //
  // Return "SDK_SUCCESS" if the allowing attendee to talk action was
  // successful.
  UFUNCTION(
      BlueprintCallable,
      meta = (DisplayName = "AllowAttendeeTalk",
              Keywords = "IMeetingWebinarController.AllowAttendeeTalk"),
      Category =
          "Zoom Meeting SDK Plug-in | Interfaces | MeetingWebinarController")
  static bool AllowAttendeeTalk(int64 user_id);

  /*
   * IMeetingRecordingController
   */

  // Start raw video recording.
  //
  // Return true if raw video recording started successfully.
  UFUNCTION(
      BlueprintCallable,
      meta = (DisplayName = "StartRawRecording",
              Keywords = "IMeetingRecordingController.StartRawRecording"),
      Category =
          "Zoom Meeting SDK Plug-in | Interfaces | MeetingRecordingController")
  static bool StartRawRecording();

  // Stops raw video recording.
  //
  // Return true if raw video recording stopped successfully.
  UFUNCTION(
      BlueprintCallable,
      meta = (DisplayName = "StopRawRecording",
              Keywords = "IMeetingRecordingController.StopRawRecording"),
      Category =
          "Zoom Meeting SDK Plug-in | Interfaces | MeetingRecordingController")
  static bool StopRawRecording();

  // IMeetingRecordingController
  // Checks if local recording is allowed.
  //
  // Return true if local recording is allowed.
  UFUNCTION(
      BlueprintCallable,
      meta = (DisplayName = "CanAllowDisAllowLocalRecording",
              Keywords = "Allow DisAllow Local Recording"),
      Category =
          "Zoom Meeting SDK Plug-in | Interfaces | MeetingRecordingController")
  static bool CanAllowDisAllowLocalRecording();

  // Request local recording privilege.
  //
  // Return true if requesting local recording privilege was successful.
  UFUNCTION(
      BlueprintCallable,
      meta = (DisplayName = "RequestLocalRecordingPrivilege",
              Keywords = "Request Local Recording Privilege"),
      Category =
          "Zoom Meeting SDK Plug-in | Interfaces | MeetingRecordingController")
  static bool RequestLocalRecordingPrivilege();

  /*
  * IMeetingQAController
  */

  // Get all question list.
  //
  // Return a list of all questions.
  UFUNCTION(
      BlueprintCallable,
      meta = (DisplayName = "Get All Question List",
              Keywords = "IMeetingQAController.GetAllQuestionList"),
      Category =
          "Zoom Meeting SDK Plug-in | Interfaces | MeetingQAController")
  static TArray<FUEQAItemInfo> GetAllQuestionList();

  // Generates PKCE Auth pair.
  //
  // Return PKCE Auth pair.
  UFUNCTION(BlueprintCallable,
            meta = (DisplayName = "GeneratePKCEAuthPair",
                    Keywords = "PCKE Auth pair"),
            Category = "Zoom Meeting SDK Plug-in | Utils | PKCE Generator")
  static FUEAuth_Pair GeneratePKCEAuthPair(FString client_id,
                                           FString redirect_url);

  // Generates PKCE Auth pair.
  //
  // Return JWT Auth token.
  UFUNCTION(BlueprintCallable,
            meta = (DisplayName = "GenerateJWTAuthToken",
                    Keywords = "JWT Token"),
            Category = "Zoom Meeting SDK Plug-in | Utils | JWT Token Generator")
  static FString GenerateJWTAuthToken(FString client_id, FString client_secret);

  // URL Encodes a given URL.
  //
  // Return URL encoded FString.
  UFUNCTION(BlueprintCallable,
            meta = (DisplayName = "UrlEncode", Keywords = "URL Encode"),
            Category = "Zoom Meeting SDK Plug-in | Utils | URL Encode")
  static FString UrlEncode(FString url_str);

  // Base64 Encodes a string.
  //
  // Return Base64 encoded FString.
  UFUNCTION(BlueprintCallable,
            meta = (DisplayName = "Base64Encode", Keywords = "Base64 Encode"),
            Category = "Zoom Meeting SDK Plug-in | Utils | Base64 Encode")
  static FString Base64Encode(FString str);

  // Enables video source (texture) that needs to be sent to the Zoom servers.
  //
  // Returns true if video source is enabled.
  UFUNCTION(BlueprintCallable,
            meta = (DisplayName = "EnableVideoSource",
                    Keywords = "Enable Video Source"),
            Category = "Zoom Meeting SDK Plug-in | Utils | Enable Video Source")
  static bool EnableVideoSource(UTextureRenderTarget2D *texture_to_send);

  // Disables video source that is being sent to the Zoom servers.
  //
  // Returns true if video source is disabled.
  UFUNCTION(
      BlueprintCallable,
      meta = (DisplayName = "DisableVideoSource",
              Keywords = "Disable Video Source"),
      Category = "Zoom Meeting SDK Plug-in | Utils | Disable Video Source")
  static bool DisableVideoSource();

  // Singleton instance
  UFUNCTION(BlueprintCallable,
            Category = "Zoom Meeting SDK Plug-in | Interfaces | Util")
  static UZoomMeetingSDKBPLibrary *GetInstance() { return m_zoom_bp_lib; };

  UFUNCTION(BlueprintCallable,
            Category = "Zoom Meeting SDK Plug-in | Interfaces | Util")
  static void SetInstance(UZoomMeetingSDKBPLibrary *pInstance) {
    m_zoom_bp_lib = pInstance;
  }

  static UZoomMeetingSDKBPLibrary *m_zoom_bp_lib;
};
