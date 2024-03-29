// Copyright : All rights reserved by Zoom Video Communications 2022-

#include "ZoomSDKRendererDelegate.h"
#include "SDKInterfaceWrap.h"
#include "SDKUtils.h"
#include "ZoomMeetingSDKEventHandler.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE
IZoomSDKRendererDelegate *ZoomSDKRendererDelegate::Create() {
  return new ZoomSDKRendererDelegate();
}

void ZoomSDKRendererDelegate::onRendererBeDestroyed() {
  UE_LOG(ZoomMeetingSDKLog, Display,
         TEXT("ZoomSDKRendererDelegate::onRendererBeDestroyed()"));
}

void ZoomSDKRendererDelegate::onRawDataFrameReceived(YUVRawDataI420 *data) {
  UE_LOG(ZoomMeetingSDKLog, Display,
         TEXT("ZoomSDKRendererDelegate::onRawDataFrameReceived(YUVRawDataI420* "
              "data)"));
}

void ZoomSDKRendererDelegate::onRawDataStatusChanged(RawDataStatus status) {
  UE_LOG(ZoomMeetingSDKLog, Display,
         TEXT("ZoomSDKRendererDelegate::onRawDataStatusChanged(RawDataStatus "
              "status)"));
}
END_ZOOM_SDK_UE_NAMESPACE