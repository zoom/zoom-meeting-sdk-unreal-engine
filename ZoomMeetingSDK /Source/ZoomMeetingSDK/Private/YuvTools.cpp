// Copyright : All rights reserved by Zoom Video Communications 2022-
// Copyright : All rights reserved by Zoom Video Communications 2022-

#include "YuvTools.h"
#include "Engine/Texture2D.h"
#include "SDKInterfaceWrap.h"
#include "SDKUtils.h"

#include "CommonRenderResources.h"
#include "Engine/World.h"
#include "GlobalShader.h"
#include "Internationalization/Internationalization.h"
#include "Logging/MessageLog.h"
#include "PipelineStateCache.h"
#include "RHIStaticStates.h"
#include "RenderGraphBuilder.h"
#include "SDKInterfaceWrap.h"
#include "SceneInterface.h"
#include "SceneUtils.h"
#include "ScreenRendering.h"
#include "ShaderParameterUtils.h"

IMPLEMENT_GLOBAL_SHADER(Yuv2RgbPS, "/ZoomMeetingSDKShaders/Private/YUV2RGB.usf",
                        "MainPS", SF_Pixel);
USING_ZOOM_SDK_UE_NAMESPACE;

namespace {
// Copies the texture data from 'data' to the given UTexture2D.
void UpdateUTexture2DResource(UTexture2D *texture, const TArray<char> &data,
                              const uint32_t texture_size) {
  void *texture_data =
      texture->GetPlatformData()->Mips[0].BulkData.Lock(LOCK_READ_WRITE);
  FMemory::Memcpy(texture_data, data.GetData(), texture_size);
  texture->GetPlatformData()->Mips[0].BulkData.Unlock();
  texture->UpdateResource();
}


// Converts RGB to YUV420.
void RGB2Yuv420pUsingParallelFor(TArray<char> &dest, TArray<char> &rgb, int width,
                            int height) {
  size_t image_size = width * height;
  size_t upos = image_size;
  size_t vpos = upos + upos / 4;
  size_t i = 0;

  char *destination = dest.GetData();

  ParallelFor(height, [&](size_t line) {
    if (!(line % 2)) {
      ParallelFor(width, [&](size_t x) {
        uint8_t r = rgb[3 * i];
        uint8_t g = rgb[3 * i + 1];
        uint8_t b = rgb[3 * i + 2];

        destination[i++] = ((66 * r + 129 * g + 25 * b) >> 8) + 16;
        destination[upos++] = ((-38 * r + -74 * g + 112 * b) >> 8) + 128;
        destination[vpos++] = ((112 * r + -94 * g + -18 * b) >> 8) + 128;

        r = rgb[3 * i];
        g = rgb[3 * i + 1];
        b = rgb[3 * i + 2];
        destination[i++] = ((66 * r + 129 * g + 25 * b) >> 8) + 16;

        x++;
      });
    } else {
      ParallelFor(width, [&](size_t x) {
        uint8_t r = rgb[3 * i];
        uint8_t g = rgb[3 * i + 1];
        uint8_t b = rgb[3 * i + 2];

        destination[i++] = ((66 * r + 129 * g + 25 * b) >> 8) + 16;
      });
    }
  });
}
// Converts RGB to YUV420.
void RGB2Yuv420p(TArray<char> &dest, TArray<char> &rgb, int width, int height) {
  size_t image_size = width * height;
  size_t upos = image_size;
  size_t vpos = upos + upos / 4;
  size_t i = 0;

  char *destination = dest.GetData();

  for (size_t line = 0; line < height; ++line) {
    if (!(line % 2)) {
      for (size_t x = 0; x < width; x += 2) {
        uint8_t r = rgb[3 * i];
        uint8_t g = rgb[3 * i + 1];
        uint8_t b = rgb[3 * i + 2];

        destination[i++] = ((66 * r + 129 * g + 25 * b) >> 8) + 16;
        destination[upos++] = ((-38 * r + -74 * g + 112 * b) >> 8) + 128;
        destination[vpos++] = ((112 * r + -94 * g + -18 * b) >> 8) + 128;

        r = rgb[3 * i];
        g = rgb[3 * i + 1];
        b = rgb[3 * i + 2];
        destination[i++] = ((66 * r + 129 * g + 25 * b) >> 8) + 16;
      };
    } else {
      for (size_t x = 0; x < width; x += 1) {
        uint8_t r = rgb[3 * i];
        uint8_t g = rgb[3 * i + 1];
        uint8_t b = rgb[3 * i + 2];
        destination[i++] = ((66 * r + 129 * g + 25 * b) >> 8) + 16;
      };
    }
  }
}

} // namespace

Yuv2RgbPS::Yuv2RgbPS(
    const ShaderMetaType::CompiledShaderInitializerType &Initializer)
    : FGlobalShader(Initializer) {
  m_param_tex_y.Bind(Initializer.ParameterMap, TEXT("tex_y"));
  m_param_tex_u.Bind(Initializer.ParameterMap, TEXT("tex_u"));
  m_param_tex_v.Bind(Initializer.ParameterMap, TEXT("tex_v"));
  m_param_sampler.Bind(Initializer.ParameterMap, TEXT("tex_sampler"));
}

bool YuvTools::ConvertYuv420ToUTexture(
    TArray<char> y_data, TArray<char> u_data, TArray<char> v_data,
    uint32_t width, uint32_t height,
    TWeakObjectPtr<UTextureRenderTarget2D> output_rendertarget,
    ERHIFeatureLevel::Type level) {
  UTexture2D *pYTex = UTexture2D::CreateTransient(width, height, PF_R8);
  UTexture2D *pUTex = UTexture2D::CreateTransient(width / 2, height / 2, PF_R8);
  UTexture2D *pVTex = UTexture2D::CreateTransient(width / 2, height / 2, PF_R8);

  if (!pYTex || !pUTex || !pVTex) {
    UE_LOG(LogTemp, Error,
           TEXT("ConvertYuv420ToUTexture: Unable to create UTexture2D"));
    return false;
  }

  // undef UpdateResource so we don't end up using a virtual function created by
  // windows API.
#ifdef UpdateResource
#undef UpdateResource
#endif

  const uint32_t y_tex_size = width * height;
  const uint32_t u_tex_size = y_tex_size / 4;
  const uint32_t v_tex_size = u_tex_size;

  UpdateUTexture2DResource(pYTex, y_data, y_tex_size);
  UpdateUTexture2DResource(pUTex, u_data, u_tex_size);
  UpdateUTexture2DResource(pVTex, v_data, v_tex_size);

  DrawYUVTex2RGBRenderTarget(pYTex, pUTex, pVTex, output_rendertarget, level);
  return true;
}

bool YuvTools::DrawYUVTex2RGBRenderTarget(
    UTexture2D *tex_y, UTexture2D *tex_u, UTexture2D *tex_v,
    TWeakObjectPtr<UTextureRenderTarget2D> output_rendertarget,
    ERHIFeatureLevel::Type level) {
  if (!IsInGameThread()) {
    UE_LOG(LogTemp, Error, TEXT("Invalid Thread call"));
    return false;
  }

  FTextureResource *tex_y_resource = tex_y->GetResource();
  FTextureResource *tex_u_resource = tex_u->GetResource();
  FTextureResource *tex_v_resource = tex_v->GetResource();
  FTextureRenderTargetResource *rt_resource =
      output_rendertarget->GameThread_GetRenderTargetResource();
  if (!tex_y_resource || !tex_u_resource || !tex_v_resource || !rt_resource) {
    UE_LOG(LogTemp, Error,
           TEXT("DrawYUVTex2RGBRenderTarget: Invalid Input Texture resource"));
    return false;
  }

  ENQUEUE_RENDER_COMMAND(DrawYuv2Rgb)
  ([tex_y_resource, tex_u_resource, tex_v_resource, rt_resource,
    level](FRHICommandListImmediate &RHICmdList) {
    DrawYUVTex2RGBRenderTarget_RenderThread(
        RHICmdList, level, tex_y_resource, tex_u_resource, tex_v_resource,
        rt_resource,
        FIntPoint(rt_resource->GetSizeX(), rt_resource->GetSizeY()));
  });
  return true;
}

void YuvTools::DrawYUVTex2RGBRenderTarget_RenderThread(
    FRHICommandListImmediate &rhi_cmd_list,
    ERHIFeatureLevel::Type feature_level, FTextureResource *tex_y,
    FTextureResource *tex_u, FTextureResource *tex_v,
    FTextureRenderTargetResource *tex_output, FIntPoint resolution) {
  check(IsInRenderingThread());

  IRendererModule *renderer_module =
      &FModuleManager::GetModuleChecked<IRendererModule>("Renderer");

  rhi_cmd_list.Transition(
      FRHITransitionInfo(tex_output->GetRenderTargetTexture(),
                         ERHIAccess::SRVMask, ERHIAccess::RTV));

  FRHIRenderPassInfo rp_info(tex_output->GetRenderTargetTexture(),
                             ERenderTargetActions::DontLoad_Store);
  rhi_cmd_list.BeginRenderPass(rp_info, TEXT("Draw YUV"));
  {
    // Get Shaders
    FGlobalShaderMap *global_shader_map = GetGlobalShaderMap(feature_level);
    TShaderMapRef<FScreenVS> vs(global_shader_map);
    TShaderMapRef<Yuv2RgbPS> ps(global_shader_map);

    FGraphicsPipelineStateInitializer init;
    rhi_cmd_list.ApplyCachedRenderTargets(init);
    init.DepthStencilState =
        TStaticDepthStencilState<false, CF_Always>::GetRHI();
    init.BlendState = TStaticBlendState<>::GetRHI();
    init.RasterizerState = TStaticRasterizerState<>::GetRHI();
    init.PrimitiveType = PT_TriangleList;
    init.BoundShaderState.VertexDeclarationRHI =
        GFilterVertexDeclaration.VertexDeclarationRHI;
    init.BoundShaderState.VertexShaderRHI = vs.GetVertexShader();
    init.BoundShaderState.PixelShaderRHI = ps.GetPixelShader();
    SetGraphicsPipelineState(rhi_cmd_list, init, 0);

    rhi_cmd_list.SetViewport(0.0f, 0.0f, 0.0f, (float)resolution.X,
                             (float)resolution.Y, 1.0f);

    ps->SetParameters(rhi_cmd_list, ps.GetPixelShader(), tex_y->GetTextureRHI(),
                      tex_u->GetTextureRHI(), tex_v->GetTextureRHI());

    renderer_module->DrawRectangle(rhi_cmd_list, 0, 0, (float)resolution.X,
                                   (float)resolution.Y, 0, 0, 1, 1, resolution,
                                   FIntPoint(1, 1), vs);
  }
  rhi_cmd_list.EndRenderPass();
  rhi_cmd_list.Transition(
      FRHITransitionInfo(tex_output->GetRenderTargetTexture(), ERHIAccess::RTV,
                         ERHIAccess::SRVMask));
}

void YUVTexturesRHIRef::UpdateTextures(YUVRawDataI420 *data) {
  const uint32_t width = data->GetStreamWidth();
  const uint32_t height = data->GetStreamHeight();

  void *mip_data_y = (void *)(data->GetYBuffer());
  void *mip_data_u = (void *)(data->GetUBuffer());
  void *mip_data_v = (void *)(data->GetVBuffer());

  auto tex_create_flag = TexCreate_ShaderResource;

  // Create Texture2D using RHI Async method.
#if ENGINE_MINOR_VERSION >= 3
  FGraphEventRef completion_event_y;
  tex_y_resource = RHIAsyncCreateTexture2D(
      width, height, PF_R8, 1, tex_create_flag, ERHIAccess::Unknown,
      &(mip_data_y), 1, completion_event_y);
  FGraphEventRef completion_event_u;
  tex_u_resource = RHIAsyncCreateTexture2D(
      width / 2, height / 2, PF_R8, 1, tex_create_flag, ERHIAccess::Unknown,
      &(mip_data_u), 1, completion_event_u);
  FGraphEventRef completion_event_v;
  tex_v_resource = RHIAsyncCreateTexture2D(
      width / 2, height / 2, PF_R8, 1, tex_create_flag, ERHIAccess::Unknown,
      &(mip_data_v), 1, completion_event_v);
#elif ENGINE_MINOR_VERSION <= 2
  tex_y_resource =
      RHIAsyncCreateTexture2D(width, height, PF_R8, 1, tex_create_flag,
                              ERHIAccess::Unknown, &(mip_data_y), 1);
  tex_u_resource =
      RHIAsyncCreateTexture2D(width / 2, height / 2, PF_R8, 1, tex_create_flag,
                              ERHIAccess::Unknown, &(mip_data_u), 1);
  tex_v_resource =
      RHIAsyncCreateTexture2D(width / 2, height / 2, PF_R8, 1, tex_create_flag,
                              ERHIAccess::Unknown, &(mip_data_v), 1);
#endif
}

// Declare the static variables.
std::atomic_int YUVTools::m_num_frames_in_render_queue = 0;
FCriticalSection YUVTools::m_renderer_mutex_;
TMap<UTextureRenderTarget2D *, int> YUVTools::m_curr_renderer_map;

void YUVTools::IncCurrentlyRendering(
    UTextureRenderTarget2D *output_rendertarget) {
  FScopeLock lock(&m_renderer_mutex_);
  if (m_curr_renderer_map.Contains(output_rendertarget)) {
    m_curr_renderer_map[output_rendertarget]++;
  } else {
    m_curr_renderer_map.Add(output_rendertarget, 1);
  }
}

void YUVTools::DecCurrentlyRendering(
    UTextureRenderTarget2D *output_rendertarget) {
  FScopeLock lock(&m_renderer_mutex_);
  if (--m_curr_renderer_map[output_rendertarget] <= 0) {
    m_curr_renderer_map.Remove(output_rendertarget);
  }
}

bool YUVTools::IsCurrentlyRendering(
    UTextureRenderTarget2D *output_rendertarget) {
  FScopeLock lock(&m_renderer_mutex_);
  return m_curr_renderer_map.Contains(output_rendertarget);
}

int YUVTools::NumCurrentlyRendering(
    UTextureRenderTarget2D *output_rendertarget) {
  FScopeLock lock(&m_renderer_mutex_);
  if (!m_curr_renderer_map.Contains(output_rendertarget)) {
    return 0;
  }
  return m_curr_renderer_map[output_rendertarget];
}

void YUVTools::WaitUntilRenderingDone(
    UTextureRenderTarget2D *output_rendertarget) {
  const int sleep_interval = 1000;       // in milliseconds
  const int max_total_wait_time = 60000; // in milliseconds
  int elapsed_time = 0;                  // in milliseconds.

  while (elapsed_time < max_total_wait_time) {
    auto n = NumCurrentlyRendering(output_rendertarget);
    UE_LOG(LogTemp, Display,
           TEXT("YuvTools::WaitUntilRenderingDone: Waiting -> output-renderer: "
                "%ld, num frames: %d"),
           output_rendertarget, n);
    if (n == 0) {
      return;
    }
    Sleep(sleep_interval);
    elapsed_time += sleep_interval;
  }

  if (elapsed_time >= max_total_wait_time) {
    UE_LOG(LogTemp, Error,
           TEXT("YuvTools::WaitUntilRenderingDone: Timed out waiting for "
                "output-renderer: %ld. This might lead to mem leaks or crashes "
                ":(."),
           output_rendertarget);
  }
}

void YUVTools::WaitUntilAllRenderingDone() {
  const int sleep_interval = 1000;       // in milliseconds
  const int max_total_wait_time = 60000; // in milliseconds
  int elapsed_time = 0;                  // in milliseconds.
  while (elapsed_time < max_total_wait_time && m_num_frames_in_render_queue) {
    int n = m_num_frames_in_render_queue;
    UE_LOG(
        LogTemp, Display,
        TEXT(
            "YuvTools::WaitUntilAllRenderingDone: Num in rendering queue : %d"),
        n);
    Sleep(sleep_interval);
    elapsed_time += sleep_interval;
  }

  if (m_num_frames_in_render_queue > 0) {
    int n = m_num_frames_in_render_queue;
    UE_LOG(LogTemp, Error,
           TEXT("YuvTools::WaitUntilAllRenderingDone: Timed out waiting for "
                "rendering to finish. Rendering queue is not empty : %d"),
           n);
  }
}

void YUVTools::PrintDebugInfo() {
  UE_LOG(ZoomMeetingSDKLogDebugInfo, Display, TEXT("YuvTools: Begin"));
  {
    FScopeLock lock(&m_renderer_mutex_);
    UE_LOG(ZoomMeetingSDKLogDebugInfo, Display,
           TEXT("# of output renderer's in queue: %d"),
           m_curr_renderer_map.Num());
  }
  {
    const int n = m_num_frames_in_render_queue;
    UE_LOG(ZoomMeetingSDKLogDebugInfo, Display,
           TEXT("# of frames in rendering queue: %d"), n);
  }
  UE_LOG(ZoomMeetingSDKLogDebugInfo, Display, TEXT("YuvTools: End"));
}

bool YUVTools::ConvertYuv420ToUTexture(
    const YUVTexturesRHIRef &tex_ref,
    UTextureRenderTarget2D *output_rendertarget, ERHIFeatureLevel::Type level) {

  FTextureRenderTargetResource *rt_resource =
      output_rendertarget->GameThread_GetRenderTargetResource();

  ++m_num_frames_in_render_queue;

  // Create FTexture2DRHIRef asynchronously avoiding RHI stalls which ideally
  // should improve performance.
  ENQUEUE_RENDER_COMMAND(DrawYuv2Rgb)
  ([=](FRHICommandListImmediate &RHICmdList) {
    IncCurrentlyRendering(output_rendertarget);
    DrawYUVTex2RGBRenderTarget_RenderThread(
        RHICmdList, level, tex_ref.tex_y_resource, tex_ref.tex_u_resource,
        tex_ref.tex_v_resource, rt_resource);
    DecCurrentlyRendering(output_rendertarget);
  });
  return true;
}

void YUVTools::DrawYUVTex2RGBRenderTarget_RenderThread(
    FRHICommandListImmediate &rhi_cmd_list,
    ERHIFeatureLevel::Type feature_level, FRHITexture *tex_y,
    FRHITexture *tex_u, FRHITexture *tex_v,
    FTextureRenderTargetResource *tex_output) {
  check(IsInRenderingThread());

  FIntPoint resolution =
      FIntPoint(tex_output->GetSizeX(), tex_output->GetSizeY());

  IRendererModule *renderer_module =
      &FModuleManager::GetModuleChecked<IRendererModule>("Renderer");

  rhi_cmd_list.Transition(
      FRHITransitionInfo(tex_output->GetRenderTargetTexture(),
                         ERHIAccess::SRVMask, ERHIAccess::RTV));

  FRHIRenderPassInfo rp_info(tex_output->GetRenderTargetTexture(),
                             ERenderTargetActions::DontLoad_Store);
  rhi_cmd_list.BeginRenderPass(rp_info, TEXT("Draw YUV"));
  {
    // Get Shaders
    FGlobalShaderMap *global_shader_map = GetGlobalShaderMap(feature_level);
    TShaderMapRef<FScreenVS> vs(global_shader_map);
    TShaderMapRef<Yuv2RgbPS> ps(global_shader_map);

    FGraphicsPipelineStateInitializer init;
    rhi_cmd_list.ApplyCachedRenderTargets(init);
    init.DepthStencilState =
        TStaticDepthStencilState<false, CF_Always>::GetRHI();
    init.BlendState = TStaticBlendState<>::GetRHI();
    init.RasterizerState = TStaticRasterizerState<>::GetRHI();
    init.PrimitiveType = PT_TriangleList;
    init.BoundShaderState.VertexDeclarationRHI =
        GFilterVertexDeclaration.VertexDeclarationRHI;
    init.BoundShaderState.VertexShaderRHI = vs.GetVertexShader();
    init.BoundShaderState.PixelShaderRHI = ps.GetPixelShader();
    SetGraphicsPipelineState(rhi_cmd_list, init, 0);

    rhi_cmd_list.SetViewport(0.0f, 0.0f, 0.0f, (float)resolution.X,
                             (float)resolution.Y, 1.0f);

    ps->SetParameters(rhi_cmd_list, ps.GetPixelShader(), tex_y, tex_u, tex_v);

    renderer_module->DrawRectangle(rhi_cmd_list, 0, 0, (float)resolution.X,
                                   (float)resolution.Y, 0, 0, 1, 1, resolution,
                                   FIntPoint(1, 1), vs);
  }
  rhi_cmd_list.EndRenderPass();
  rhi_cmd_list.Transition(
      FRHITransitionInfo(tex_output->GetRenderTargetTexture(), ERHIAccess::RTV,
                         ERHIAccess::SRVMask));
  --m_num_frames_in_render_queue;
}

bool YUVTools::GetYUVRawData(
    UTextureRenderTarget2D *texture_render_target2D,
    YUVI420FullRawData &yuv_raw_data) {

  EPixelFormat format = texture_render_target2D->GetFormat();
  if (format != EPixelFormat::PF_R8G8B8A8 &&
      format != EPixelFormat::PF_B8G8R8A8) {
    UE_LOG(LogTemp, Error,
           TEXT("YuvTools::GetYUVRawData: Invalid Input Texture format, only "
                "support PF_R8G8B8A8 & PF_B8G8R8A8"));
    return false;
  }

  TArray<FColor> surface_data;
  {
    FRenderTarget *render_target =
        texture_render_target2D->GameThread_GetRenderTargetResource();
    render_target->ReadPixels(surface_data);
  }

  TArray<char> rgb;
  rgb.SetNumZeroed(surface_data.Num() * 3);
  ParallelFor(surface_data.Num(), [&](uint32_t i) {
    rgb[i * 3 + 0] = surface_data[i].R;
    rgb[i * 3 + 1] = surface_data[i].G;
    rgb[i * 3 + 2] = surface_data[i].B;
  });

  yuv_raw_data.width = texture_render_target2D->SizeX;
  yuv_raw_data.height = texture_render_target2D->SizeY;
  yuv_raw_data.data.SetNumZeroed(yuv_raw_data.width * yuv_raw_data.height *
                                 1.5);
  yuv_raw_data.frameLength = yuv_raw_data.data.Num();
  RGB2Yuv420p(yuv_raw_data.data, rgb, yuv_raw_data.width, yuv_raw_data.height);
  return true;
}