// Copyright : All rights reserved by Zoom Video Communications 2022-

#include "DebugInfo.h"
#include "SDKInterfaceWrap.h"
#include "SDKUtils.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE

namespace {
// Prints memory information.
void PrintMemoryInfo() {
  UE_LOG(ZoomMeetingSDKLogDebugInfo, Display, TEXT("Memory Info: Begin"));

  const float inv_mb = 1.0f / 1024.0f / 1024.0f;
  FPlatformMemoryStats ms = FPlatformMemory::GetStats();
  UE_LOG(ZoomMeetingSDKLogDebugInfo, Display,
         TEXT("Process Physical Memory: %.2f MB used, %.2f MB peak"),
         (float)ms.UsedPhysical * inv_mb, (float)ms.PeakUsedPhysical * inv_mb);

  UE_LOG(ZoomMeetingSDKLogDebugInfo, Display, TEXT("Memory Info: End"));
}
} // namespace

DebugInfo::DebugInfo() {
  m_runnable_thread = FRunnableThread::Create(this, TEXT("DebugInfo thread"));
  if (m_runnable_thread) {
    UE_LOG(ZoomMeetingSDKLog, Display,
           TEXT("DebugInfo: Created debug thread to print debug info."));
    m_run_thread = true;
  } else {
    UE_LOG(
        ZoomMeetingSDKLog, Error,
        TEXT("DebugInfo: Error creating FRunnableThread to print debug info."));
    m_run_thread = false;
  }
}

DebugInfo::~DebugInfo() {
  m_run_thread = false;

  if (m_runnable_thread) {
    m_runnable_thread->Kill();
    delete m_runnable_thread;
  }
}

bool DebugInfo::Init() {
  UE_LOG(ZoomMeetingSDKLog, Display,
         TEXT("DebugInfo::Init: Initializing the debug thread..."));
  return true;
}

uint32 DebugInfo::Run() {
  const int max_interval_debug_info = 120000; // milliseconds
  const int sleep_interval = 30000;           // in milliseconds
  const int max_steps = (max_interval_debug_info / sleep_interval);
  int num_steps = 0;

  UE_LOG(ZoomMeetingSDKLog, Display,
         TEXT("DebugInfo::Run: Running the debug thread: %s"),
         *BoolToString(m_run_thread));

  while (m_run_thread) {
    if (num_steps >= max_steps) {
      num_steps = 0;
      PrintDebugInfo();
    }
    // Sleep for sleep_interval. We sleep just for a second so we can break out
    // of the loop quickly if and when we stop.
    Sleep(sleep_interval);
    ++num_steps;
  }

  UE_LOG(ZoomMeetingSDKLog, Display,
         TEXT("DebugInfo::Run: Done running the debug thread..."));
  return 0;
}

void DebugInfo::Stop() {
  UE_LOG(ZoomMeetingSDKLog, Display,
         TEXT("DebugInfo::Stop: Stopping the debug thread..."));
  m_run_thread = false;
}

void DebugInfo::PrintDebugInfo() const {
  UE_LOG(ZoomMeetingSDKLogDebugInfo, Display, TEXT("DebugInfo: Begin"));
  PrintMemoryInfo();
  {
    auto *user_manager = SDKInterfaceWrap::GetInst().GetUserManager();
    if (user_manager) {
      user_manager->PrintDebugInfo();
    }
  }
  YUVTools::PrintDebugInfo();
  UE_LOG(ZoomMeetingSDKLogDebugInfo, Display, TEXT("DebugInfo: End"));
}

END_ZOOM_SDK_UE_NAMESPACE