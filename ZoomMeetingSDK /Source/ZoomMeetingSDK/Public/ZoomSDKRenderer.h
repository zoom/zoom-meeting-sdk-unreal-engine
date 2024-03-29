// Copyright : All rights reserved by Zoom Video Communications 2022-

#pragma once

#include "CoreMinimal.h"
#include "Engine/TextureRenderTarget2D.h"
#include "YuvTools.h"
#include "ZoomUESDKDef.h"
#include "rawdata/rawdata_renderer_interface.h"
#include "rawdata/zoom_rawdata_api.h"
#include "zoom_sdk_raw_data_def.h"
#include <vector>

BEGIN_ZOOM_SDK_UE_NAMESPACE

/**
 * Wrapper around IZoomSDKRenderer.
 * Check
 * https://marketplacefront.zoom.us/sdk/meeting/windows/class_i_zoom_s_d_k_renderer.html
 * for interface definition.
 */
class ZOOMMEETINGSDK_API ZoomSDKRenderer
    : public ZOOM_SDK_NAMESPACE::IZoomSDKRendererDelegate {
public:
  ~ZoomSDKRenderer();

  // Static function to create an object of IZoomSDKRenderer.
  static ZoomSDKRenderer *Create();
  bool Init(const UObject *WorldContextObject,
            UTextureRenderTarget2D *renderTarget);

  // Implementation of the required methods.
  SDKError CreateRenderer();
  SDKError DestroyRenderer();
  SDKError Subscribe(uint32_t userId, ZoomSDKRawDataType type);
  SDKError UnSubscribe();
  SDKError SetRawDataResolution(ZoomSDKResolution resolution);
  ZoomSDKResolution GetResolution();
  ZoomSDKRawDataType GetRawDataType();
  uint32_t GetUserId();

  // Implementation of the required callbacks.
  void onRendererBeDestroyed();
  void onRawDataFrameReceived(YUVRawDataI420 *data);
  void onRawDataStatusChanged(RawDataStatus status);

  // Returns pointer to the current UTextureRenderTarget2D being used.
  UTextureRenderTarget2D *GetOutputRenderer() const;

  // Returns the bool value of m_bSubscribed.
  bool isSubscribed() const;

  // Returns true if the renderer has been initialized and a user has been
  // subscribed to this renderer to receive raw video data.
  bool IsRendererAvailable() const;

private:
  ZoomSDKRenderer();

  // True if the object is initialized (subscribe and unsubscribe require this
  // flag to be true).
  bool m_bInited = false;

  // True if the renderer is subscribed.
  bool m_bSubscribed = false;

  // User id using this renderer.
  uint32_t m_user_id = 0;

  ZOOM_SDK_NAMESPACE::IZoomSDKRenderer *m_pSDKRenderer = nullptr;
  UTextureRenderTarget2D *pOutputRenderer = nullptr;
  // Pointer to the top level object representing a map or a sandbox.
  const UObject *m_pWorldContextObject = nullptr;
  // RHI feature level used for rendering textures.
  ERHIFeatureLevel::Type m_feature_level;
};
END_ZOOM_SDK_UE_NAMESPACE