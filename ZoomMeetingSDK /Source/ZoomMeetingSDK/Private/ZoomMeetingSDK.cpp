// Copyright : All rights reserved by Zoom Video Communications 2022-

#include "ZoomMeetingSDK.h"

#include "ZoomMeetingSDKBPLibrary.h"
#include "ZoomMeetingSDKEventHandler.h"

#include "Interfaces/IPluginManager.h"
#include "Misc/Paths.h"

#define LOCTEXT_NAMESPACE "FZoomMeetingSDKModule"

void FZoomMeetingSDKModule::StartupModule() {
  // This code will execute after your module is loaded into memory; the exact
  // timing is specified in the .uplugin file per-module

  // This code will execute after your module is loaded into memory; the exact
  // timing is specified in the .uplugin file per-module
  FString PluginShaderDir = FPaths::Combine(
      IPluginManager::Get().FindPlugin(TEXT("ZoomMeetingSDK"))->GetBaseDir(),
      TEXT("Shaders"));
  AddShaderSourceDirectoryMapping(TEXT("/ZoomMeetingSDKShaders"),
                                  PluginShaderDir);
}

void FZoomMeetingSDKModule::ShutdownModule() {
  // This function may be called during shutdown to clean up your module.  For
  // modules that support dynamic reloading, we call this function before
  // unloading the module.

  // Cleanup event handler.
  if (UZoomMeetingSDKEventHandler::m_event_handler != nullptr) {
    UZoomMeetingSDKEventHandler::m_event_handler->RemoveFromRoot();
    UZoomMeetingSDKEventHandler::m_event_handler->MarkAsGarbage();
    UZoomMeetingSDKEventHandler::m_event_handler = nullptr;
  }
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FZoomMeetingSDKModule, ZoomMeetingSDK)