/******************************************************************************
 *
 * Description : Defines necessary macro's and includes zoom sdk common header
 * files.
 *
 * Copyright : All rights reserved by Zoom Video Communications 2022-
 * ***************************************************************************/
#pragma once

// clang-format off
#include "Windows/AllowWindowsPlatformTypes.h"
#include "Windows/PreWindowsApi.h"
#include <windows.h>
#include "Windows/PostWindowsApi.h"
#include "Windows/HideWindowsPlatformTypes.h"
// clang-format on

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"
#include "Runtime/Launch/Resources/Version.h"
#include "meeting_service_interface.h"
#include "zoom_sdk_def.h"

#define ZOOM_SDK_UE_NAMESPACE UE

#define BEGIN_ZOOM_SDK_UE_NAMESPACE                                            \
  namespace ZOOM_SDK_NAMESPACE {                                               \
  namespace ZOOM_SDK_UE_NAMESPACE {

#define END_ZOOM_SDK_UE_NAMESPACE                                              \
  }                                                                            \
  }                                                                            \
  ;

#define USING_ZOOM_SDK_UE_NAMESPACE                                            \
  using namespace ZOOM_SDK_NAMESPACE::ZOOM_SDK_UE_NAMESPACE;

#define ZOOM_UE_NAMESPACE ZOOM_SDK_NAMESPACE::ZOOM_SDK_UE_NAMESPACE
