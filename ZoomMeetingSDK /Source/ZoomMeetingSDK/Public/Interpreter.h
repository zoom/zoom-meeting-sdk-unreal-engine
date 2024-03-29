// Copyright : All rights reserved by Zoom Video Communications 2022-

#pragma once

#include "ZoomUESDKDef.h"
#include "meeting_service_components/meeting_interpretation_interface.h"
BEGIN_ZOOM_SDK_UE_NAMESPACE

/**
 * Wrapper around IInterpreter.
 * Check
 * https://marketplacefront.zoom.us/sdk/meeting/windows/class_i_interpreter.html
 * for interface definition.
 */
class ZOOMMEETINGSDK_API Interpreter {
public:
  ~Interpreter() = default;
  Interpreter(const Interpreter &other) = delete;
  Interpreter(Interpreter &&other) noexcept = delete;
  Interpreter &operator=(const Interpreter &other) = delete;
  Interpreter &operator=(Interpreter &&other) noexcept = delete;

  // Static function to create an object of IInterpreter.
  static Interpreter *Create();

  // Implementation of the required methods.
  unsigned int GetUserID();

private:
  Interpreter() = default;
};
END_ZOOM_SDK_UE_NAMESPACE