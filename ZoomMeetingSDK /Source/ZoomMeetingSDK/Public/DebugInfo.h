// Copyright : All rights reserved by Zoom Video Communications 2022-

#pragma once

#include "ZoomUESDKDef.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE

// An implementation of FRunnable that prints debug info.
// Note: This should be used only for debugging purposes.
class DebugInfo : public FRunnable {
public:
  // Constructor, creates the thread and starts running it.
  DebugInfo();

  // Destructor
  virtual ~DebugInfo() override;

  // Overridden from FRunnable
  bool Init() override;
  uint32 Run() override;
  void Stop() override;

private:
  // Prints debug info.
  void PrintDebugInfo() const;

  // Thread handle.
  FRunnableThread *m_runnable_thread;

  // Bool to track when the thread should exit.
  bool m_run_thread;
};

END_ZOOM_SDK_UE_NAMESPACE