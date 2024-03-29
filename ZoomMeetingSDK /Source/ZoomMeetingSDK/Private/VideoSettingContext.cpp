// Copyright : All rights reserved by Zoom Video Communications 2022-

#include "VideoSettingContext.h"

#include "SDKInterfaceWrap.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE

VideoSettingContext *VideoSettingContext::Create() {
  TUniquePtr<VideoSettingContext> vsc(new VideoSettingContext());
  if (vsc->Init()) {
    return vsc.Release();
  }

  return nullptr;
}

bool VideoSettingContext::Init() {
  m_video_setting_context = SDKInterfaceWrap::GetInst().GetVideoSettings();
  if (m_video_setting_context == nullptr) {
    return false;
  }
  return true;
}

SDKError VideoSettingContext::EnableHDVideo(bool bEnable) {
  return m_video_setting_context->EnableHDVideo(bEnable);
}

bool VideoSettingContext::IsSpotlightSelfEnabled() {
  return m_video_setting_context->IsSpotlightSelfEnabled();
}

SDKError VideoSettingContext::SelectCamera(const wchar_t *deviceId) {
  return m_video_setting_context->SelectCamera(deviceId);
}

END_ZOOM_SDK_UE_NAMESPACE