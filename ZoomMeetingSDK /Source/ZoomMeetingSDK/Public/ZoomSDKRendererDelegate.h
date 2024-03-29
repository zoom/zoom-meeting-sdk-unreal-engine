// Copyright : All rights reserved by Zoom Video Communications 2022-

#pragma once

#include "CoreMinimal.h"
#include "ZoomUESDKDef.h"
#include "rawdata/rawdata_renderer_interface.h"
#include "zoom_sdk_raw_data_def.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE
/**
 *
 */
class ZOOMMEETINGSDK_API ZoomSDKRendererDelegate
    : public IZoomSDKRendererDelegate {
public:
  ~ZoomSDKRendererDelegate() = default;
  ZoomSDKRendererDelegate(const ZoomSDKRendererDelegate &other) = delete;
  ZoomSDKRendererDelegate(ZoomSDKRendererDelegate &&other) noexcept = delete;
  ZoomSDKRendererDelegate &
  operator=(const ZoomSDKRendererDelegate &other) = delete;
  ZoomSDKRendererDelegate &
  operator=(ZoomSDKRendererDelegate &&other) noexcept = delete;

  // Static function to create an object of IZoomSDKRendererDelegate.
  static IZoomSDKRendererDelegate *Create();

  // Implementation of the required callbacks.
  void onRendererBeDestroyed();
  void onRawDataFrameReceived(YUVRawDataI420 *data);
  void onRawDataStatusChanged(RawDataStatus status);

private:
  ZoomSDKRendererDelegate() = default;
};
END_ZOOM_SDK_UE_NAMESPACE