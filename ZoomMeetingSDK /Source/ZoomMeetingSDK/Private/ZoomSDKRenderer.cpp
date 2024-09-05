// Copyright : All rights reserved by Zoom Video Communications 2022-

#include "ZoomSDKRenderer.h"
#include "SDKInterfaceWrap.h"
#include "SDKUtils.h"
#include "YuvTools.h"
#include <stdlib.h>

BEGIN_ZOOM_SDK_UE_NAMESPACE

ZoomSDKRenderer::ZoomSDKRenderer()
    : m_bInited(false), m_bSubscribed(false), m_pSDKRenderer(nullptr),
      pOutputRenderer(nullptr), m_feature_level(ERHIFeatureLevel::ES2_REMOVED) {
}
ZoomSDKRenderer::~ZoomSDKRenderer() { DestroyRenderer(); }

bool ZoomSDKRenderer::IsRendererAvailable() const {
  if (!m_bInited) {
    UE_LOG(ZoomMeetingSDKLog, Error,
           TEXT("ZoomSDKRenderer::IsRendererAvailable userId: %d - Not "
                "initialized"),
           m_user_id);
    return false;
  }
  if (!m_bSubscribed) {
    UE_LOG(
        ZoomMeetingSDKLog, Error,
        TEXT(
            "ZoomSDKRenderer::IsRendererAvailable userId: %d - Not subscribed"),
        m_user_id);
    return false;
  }

  return true;
}

bool ZoomSDKRenderer::isSubscribed() const { return m_bSubscribed; }

ZoomSDKRenderer *ZoomSDKRenderer::Create() { return new ZoomSDKRenderer(); }

bool ZoomSDKRenderer::Init(const UObject *WorldContextObject,
                           UTextureRenderTarget2D *renderTarget) {
  if (m_bInited) {
    UE_LOG(ZoomMeetingSDKLog, Display,
           TEXT("ZoomSDKRenderer::Init: Already initialized."));
    return true;
  }
  SDKError err = CreateRenderer();
  if (err != ZOOM_SDK_NAMESPACE::SDKERR_SUCCESS) {
    UE_LOG(ZoomMeetingSDKLog, Error,
           TEXT("ZoomSDKRenderer::Init Error initializing: %s"),
           *SDKErrorToString(err));
    return false;
  }

  m_bInited = true;
  m_pWorldContextObject = WorldContextObject;

  // Cache the feature level of the world which is required for rendering the
  // texture.
  // The world context object becomes invalid (not sure why yet) and causes the
  // renderer to crash (randomly). We only need the feature level (for now) for
  // rendering hence just cache it.
  // TODO(karthik.ravindran): Figure out why the world context object becomes
  // invalid and remove caching the feature level.
  m_feature_level = WorldContextObject->GetWorld()->Scene->GetFeatureLevel();
  pOutputRenderer = renderTarget;
  m_bSubscribed = false;

  UE_LOG(ZoomMeetingSDKLog, Display, TEXT("ZoomSDKRenderer::Init successful."));
  return true;
}

SDKError ZoomSDKRenderer::CreateRenderer() {
  if (m_pSDKRenderer) {
    UE_LOG(ZoomMeetingSDKLog, Warning,
           TEXT("ZoomSDKRenderer::CreateRenderer: Already created."));
    return ZOOM_SDK_NAMESPACE::SDKERR_SUCCESS;
  }

  auto err = ZOOM_SDK_NAMESPACE::createRenderer(&m_pSDKRenderer, this);
  UE_LOG(ZoomMeetingSDKLog, Display,
         TEXT("ZoomSDKRenderer::CreateRenderer Return: %s"),
         *SDKErrorToString(err));
  return err;
}

SDKError ZoomSDKRenderer::DestroyRenderer() {
  if (!m_pSDKRenderer) {
    UE_LOG(ZoomMeetingSDKLog, Error,
           TEXT("ZoomSDKRenderer::DestroyRenderer: Already destroyed."));
    return ZOOM_SDK_NAMESPACE::SDKERR_WRONG_USAGE;
  }

  auto err = ZOOM_SDK_NAMESPACE::destroyRenderer(m_pSDKRenderer);
  UE_LOG(ZoomMeetingSDKLog, Display,
         TEXT("ZoomSDKRenderer::DestroyRenderer Return: %s"),
         *SDKErrorToString(err));
  m_pSDKRenderer = nullptr;
  m_bInited = false;

  UE_LOG(ZoomMeetingSDKLog, Display,
         TEXT("ZoomSDKRenderer::DestroyRenderer: Waiting for rendering to "
              "finish: %ld"),
         pOutputRenderer);
  YUVTools::WaitUntilRenderingDone(pOutputRenderer);

  m_pWorldContextObject = nullptr;
  pOutputRenderer = nullptr;
  return err;
}

SDKError ZoomSDKRenderer::Subscribe(uint32_t userId, ZoomSDKRawDataType type) {
  ZOOM_SDK_NAMESPACE::SDKError err(ZOOM_SDK_NAMESPACE::SDKERR_WRONG_USAGE);

  if (!m_bInited) {
    UE_LOG(ZoomMeetingSDKLog, Error,
           TEXT("ZoomSDKRenderer::Subscribe userId: %d is uninitialized"),
           userId);
    return err;
  }

  if (!m_pSDKRenderer) {
    UE_LOG(ZoomMeetingSDKLog, Error,
           TEXT("ZoomSDKRenderer::Subscribe couldn't find m_pSDKRenderer!"));
    return err;
  }

  UE_LOG(ZoomMeetingSDKLog, Display,
         TEXT("ZoomSDKRenderer::Subscribe userId: %d, type: %d"), userId, type);
  err = m_pSDKRenderer->subscribe(userId, type);
  UE_LOG(ZoomMeetingSDKLog, Display, TEXT("ZoomSDKRenderer::Subscribe err: %s"),
         *SDKErrorToString(err));
  m_bSubscribed = (err == ZOOM_SDK_NAMESPACE::SDKERR_SUCCESS);
  m_user_id = userId;
  return err;
}

SDKError ZoomSDKRenderer::UnSubscribe() {
  ZOOM_SDK_NAMESPACE::SDKError err(ZOOM_SDK_NAMESPACE::SDKERR_WRONG_USAGE);

  if (!IsRendererAvailable() || !m_pSDKRenderer) {
    return err;
  }

  err = m_pSDKRenderer->unSubscribe();
  UE_LOG(ZoomMeetingSDKLog, Display,
         TEXT("ZoomSDKRenderer::UnSubscribe user-id: %d, err: %s"), m_user_id,
         *SDKErrorToString(err));
  err = DestroyRenderer();
  m_bSubscribed = false;

  return err;
}

SDKError ZoomSDKRenderer::SetRawDataResolution(ZoomSDKResolution resolution) {
  if (!IsRendererAvailable() || !m_pSDKRenderer) {
    return SDKError::SDKERR_WRONG_USAGE;
  }
  UE_LOG(
      ZoomMeetingSDKLog, Display,
      TEXT("ZoomSDKRenderer::SetRawDataResolution user-id: %d, curr_res: %s"),
      m_user_id, *ZoomSDKResolutionToString(m_pSDKRenderer->getResolution()));
  auto err = m_pSDKRenderer->setRawDataResolution(resolution);
  UE_LOG(ZoomMeetingSDKLog, Display,
         TEXT("ZoomSDKRenderer::SetRawDataResolution user-id: %d, resolution: "
              "%s, err: %s"),
         m_user_id, *ZoomSDKResolutionToString(m_pSDKRenderer->getResolution()),
         *SDKErrorToString(err));

  return err;
}

ZoomSDKResolution ZoomSDKRenderer::GetResolution() {
  if (!IsRendererAvailable() || !m_pSDKRenderer) {
    return ZoomSDKResolution::ZoomSDKResolution_NoUse;
  }
  return m_pSDKRenderer->getResolution();
}

ZoomSDKRawDataType ZoomSDKRenderer::GetRawDataType() {
  if (!IsRendererAvailable() || !m_pSDKRenderer) {
    return ZoomSDKRawDataType::RAW_DATA_TYPE_VIDEO;
  }
  return m_pSDKRenderer->getRawDataType();
}

uint32_t ZoomSDKRenderer::GetUserId() {
  if (!IsRendererAvailable() || !m_pSDKRenderer) {
    return 0;
  }
  return m_pSDKRenderer->getUserId();
}

void ZoomSDKRenderer::onRendererBeDestroyed() {
  UE_LOG(ZoomMeetingSDKLog, Display,
         TEXT("ZoomSDKRenderer::onRendererBeDestroyed()"));
}

void ZoomSDKRenderer::onRawDataFrameReceived(YUVRawDataI420 *data) {
  if (!IsRendererAvailable() || !m_pSDKRenderer) {
    return;
  }

  // Create a weak pointer to pOutputRenderer and pass it to the renderer.
  //
  // The renderer function is called as an async task.
  // If the user is unsubscribed before the rendering function (async task) is
  // called, the output renderer will get destroyed making it invalid. In order
  // to figure out if the output renderer is indeed valid, we create a weak
  // pointer and pass that to the rendering function. The rendering is performed
  // if the output renderer is still valid.
  TWeakObjectPtr<UTextureRenderTarget2D> output_rendertarget = pOutputRenderer;

  // Create a texture reference to YUV data and pass it to the async game
  // thread.
  //
  // Note: Even though YUVRawDataI420 has functions to add and remove
  // references, this particular object that we receive, doesn't seem to support
  // add references (i.e., data->CanAddRef() always returns false). So, we
  // cannot pass the data pointer to the AsyncTask (as the object might get
  // destroyed before it is used for rendering). Hence we create the textures
  // while the pointer/object is still valid and pass the textures to the
  // AsyncTask.
  YUVTexturesRHIRef tex_ref;
  tex_ref.UpdateTextures(data);

  // Textures should be created in the game thread or a different thread.
  // Convert the data to texture asynchronously.
  AsyncTask(ENamedThreads::GameThread, [=, this]() {
    if (!output_rendertarget.IsValid()) {
      UE_LOG(ZoomMeetingSDKLog, Error,
             TEXT("ZoomSDKRenderer::onRawDataFrameReceived: Not rendering "
                  "frame as the output renderer is invalid..."));
      return;
    }
    YUVTools::ConvertYuv420ToUTexture(tex_ref, output_rendertarget.Get(),
                                      m_feature_level);
  });
}

void ZoomSDKRenderer::onRawDataStatusChanged(RawDataStatus status) {
  UE_LOG(ZoomMeetingSDKLog, Display,
         TEXT("ZoomSDKRenderer::onRawDataStatusChanged(RawDataStatus status)"));
}

UTextureRenderTarget2D *ZoomSDKRenderer::GetOutputRenderer() const {
  return pOutputRenderer;
}

END_ZOOM_SDK_UE_NAMESPACE