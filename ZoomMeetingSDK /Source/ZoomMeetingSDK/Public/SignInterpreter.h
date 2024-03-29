// Copyright : All rights reserved by Zoom Video Communications 2022-

#pragma once

#include "ZoomUESDKDef.h"
#include "meeting_service_components/meeting_sign_interpretation_interface.h"
BEGIN_ZOOM_SDK_UE_NAMESPACE

/**
 * Wrapper around ISignInterpreter.
 * Check
 * https://marketplacefront.zoom.us/sdk/meeting/windows/class_i_sign_interpreter.html
 * for interface definition.
 */
class ZOOMMEETINGSDK_API SignInterpreter {
public:
  ~SignInterpreter() = default;
  SignInterpreter(const SignInterpreter &other) = delete;
  SignInterpreter(SignInterpreter &&other) noexcept = delete;
  SignInterpreter &operator=(const SignInterpreter &other) = delete;
  SignInterpreter &operator=(SignInterpreter &&other) noexcept = delete;

  // Static function to create an object of ISignInterpreter.
  static SignInterpreter *Create();

  // Implementation of the required methods.
  unsigned int GetUserID();

private:
  SignInterpreter() = default;
};
END_ZOOM_SDK_UE_NAMESPACE