// Copyright : All rights reserved by Zoom Video Communications 2022-

#include "DirectShareServiceHelper.h"
#include "SDKInterfaceWrap.h"
#include "SDKUtils.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE
DirectShareServiceHelper *DirectShareServiceHelper::Create() {
  TUniquePtr<DirectShareServiceHelper> direct_share_helper(
      new DirectShareServiceHelper());
  if (direct_share_helper->Init()) {
    return direct_share_helper.Release();
  }
  return nullptr;
}
DirectShareServiceHelper::DirectShareServiceHelper()
    : direct_share_helper(nullptr) {}

DirectShareServiceHelper::~DirectShareServiceHelper() {}

bool DirectShareServiceHelper::Init() {
  direct_share_helper = SDKInterfaceWrap::GetInst()
                            .GetAuthService()
                            ->GetDirectShareServiceHeler();
  if (direct_share_helper == nullptr) {
    return false;
  }
  return true;
}

SDKError DirectShareServiceHelper::CanStartDirectShare() {
  return direct_share_helper->CanStartDirectShare();
}
END_ZOOM_SDK_UE_NAMESPACE