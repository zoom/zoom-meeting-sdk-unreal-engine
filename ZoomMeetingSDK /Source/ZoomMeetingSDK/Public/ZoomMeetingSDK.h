// Copyright : All rights reserved by Zoom Video Communications 2022-

#pragma once

// clang-format off
#include "ZoomMeetingSDKBPLibrary.h"
#include "Modules/ModuleManager.h"
// clang-format on

class FZoomMeetingSDKModule : public IModuleInterface {
public:
  /** IModuleInterface implementation */
  virtual void StartupModule() override;
  virtual void ShutdownModule() override;
};
