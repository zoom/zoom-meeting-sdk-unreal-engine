// Copyright : All rights reserved by Zoom Video Communications 2022-

#include "ShareSettingContext.h"

#include "SDKInterfaceWrap.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE
ShareSettingContext *ShareSettingContext::Create() {
  TUniquePtr<ShareSettingContext> ssc(new ShareSettingContext());
  if (ssc->Init()) {
    return ssc.Release();
  }

  return nullptr;
}

bool ShareSettingContext::Init() {
  share_setting_context = SDKInterfaceWrap::GetInst().GetShareSettings();
  return (share_setting_context) ? true : false;
}

SDKError ShareSettingContext::EnableGreenBorderWhenShare(bool bEnable) {
  return share_setting_context->EnableGreenBorderWhenShare(bEnable);
}

SDKError ShareSettingContext::EnableAccelerateGPUWhenShare(bool bEnable) {
  return share_setting_context->EnableAccelerateGPUWhenShare(bEnable);
}

END_ZOOM_SDK_UE_NAMESPACE