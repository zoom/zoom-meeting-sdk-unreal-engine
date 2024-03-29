// Copyright : All rights reserved by Zoom Video Communications 2022-

#pragma once

// #include "ZoomUESDKDef.h"
#include "Engine/TextureRenderTarget2D.h"
#include "zoom_sdk_raw_data_def.h"

#include <mutex>

class Yuv2RgbPS : public FGlobalShader {
  DECLARE_SHADER_TYPE(Yuv2RgbPS, Global);

public:
  Yuv2RgbPS() {}
  Yuv2RgbPS(const ShaderMetaType::CompiledShaderInitializerType &Initializer);

  template <typename TRHIShader>
  void SetParameters(FRHICommandListImmediate &rhi_cmd_list,
                     const TRHIShader rhi_shader, FRHITexture *rhi_tex_y,
                     FRHITexture *rhi_tex_u, FRHITexture *rhi_tex_v) {
    FRHIBatchedShaderParameters &batched_params =
        rhi_cmd_list.GetScratchShaderParameters();

    SetTextureParameter(batched_params, m_param_tex_y, rhi_tex_y);
    SetTextureParameter(batched_params, m_param_tex_u, rhi_tex_u);
    SetTextureParameter(batched_params, m_param_tex_v, rhi_tex_v);
    SetSamplerParameter(batched_params, m_param_sampler,
                        TStaticSamplerState<>::GetRHI());
    rhi_cmd_list.SetBatchedShaderParameters(rhi_shader, batched_params);
  }

private:
  LAYOUT_FIELD(FShaderResourceParameter, m_param_tex_y);
  LAYOUT_FIELD(FShaderResourceParameter, m_param_tex_u);
  LAYOUT_FIELD(FShaderResourceParameter, m_param_tex_v);
  LAYOUT_FIELD(FShaderResourceParameter, m_param_sampler);
};

class YuvTools {
public:
  // Converts Yuv420 to UTexture2D which can be then be used to render.
  // Note: This function has to be called asynchronously (AsyncTask) on the
  // GameThread.
  static bool ConvertYuv420ToUTexture(
      TArray<char> y_data, TArray<char> u_data, TArray<char> v_data,
      uint32_t width, uint32_t height,
      TWeakObjectPtr<UTextureRenderTarget2D> output_rendertarget,
      ERHIFeatureLevel::Type level);

  // Enqueues rendering of the YUV UTexture2D on the given renderer target.
  static bool DrawYUVTex2RGBRenderTarget(
      UTexture2D *tex_y, UTexture2D *tex_u, UTexture2D *tex_v,
      TWeakObjectPtr<UTextureRenderTarget2D> output_rendertarget,
      ERHIFeatureLevel::Type level);

  // Renders the YUV UTexture2D on the given renderer target.
  static void DrawYUVTex2RGBRenderTarget_RenderThread(
      FRHICommandListImmediate &rhi_cmd_list,
      ERHIFeatureLevel::Type feature_level, FTextureResource *tex_y,
      FTextureResource *tex_u, FTextureResource *tex_v,
      FTextureRenderTargetResource *tex_output, FIntPoint resolution);
};

// This struct holds the YUV FTexture2DRHIRef's.
struct YUVTexturesRHIRef {
  FTexture2DRHIRef tex_y_resource;
  FTexture2DRHIRef tex_u_resource;
  FTexture2DRHIRef tex_v_resource;

  // Given the YUV data, update the YUV FTexture2DRHIRefs.
  void UpdateTextures(YUVRawDataI420 *data);
};

// Raw YUV data.
// Note: This struct is defined for optimization purposes.
// YUVRawDataI420 is an option but we would have to implement functions we'll
// never use/need.
struct YUVI420FullRawData {
  // YUV420 raw data.
  TArray<char> data;
  // Dimensions of the raw data.
  int width;
  int height;
  // Total frame length.
  int frameLength;

  YUVI420FullRawData() : width(0), height(0), frameLength(0) {}
};

// Helper class with utilities to handle YUV data.
class YUVTools {
public:
  // Converts Yuv420 to UTexture2D which can be then be used to render.
  // Note: This function has to be called asynchronously (AsyncTask) on the
  // GameThread.
  static bool
  ConvertYuv420ToUTexture(const YUVTexturesRHIRef &tex_ref,
                          UTextureRenderTarget2D *output_rendertarget,
                          ERHIFeatureLevel::Type level);

  // Waits until the rendering is done on the output renderer. If and when we
  // unsubscribe a user's video, we need to wait until all the video frames
  // queued in the rendering pipeline are rendered.
  // This function should be called from a non-rendering thread to wait until
  // the rendering on the output rendering target is done.
  static void
  WaitUntilRenderingDone(UTextureRenderTarget2D *output_rendertarget);

  // Waits until all the frames in the rendering queue are rendered (or until
  // the entire rendering queue is empty). Should be called when exiting a
  // meeting or closing the application.
  static void WaitUntilAllRenderingDone();

  // Converts UTextureRenderTarget2D to YUV Raw Data.
  // Note: Texture only support PF_R8G8B8A8 & PF_B8G8R8A8
  static bool GetYUVRawData(UTextureRenderTarget2D *texture_render_target2D,
                            YUVI420FullRawData &yuv_raw_data);

  // For debugging purposes.
  static void PrintDebugInfo();

private:
  // Renders the YUV UTexture2D on the given renderer target.
  static void DrawYUVTex2RGBRenderTarget_RenderThread(
      FRHICommandListImmediate &rhi_cmd_list,
      ERHIFeatureLevel::Type feature_level, FRHITexture *tex_y,
      FRHITexture *tex_u, FRHITexture *tex_v,
      FTextureRenderTargetResource *tex_output);

  // Increments the output rendering target to the queue of targets being
  // rendered on.
  static void
  IncCurrentlyRendering(UTextureRenderTarget2D *output_rendertarget);

  // Decrements the output rendering target from the queue of targets being
  // rendered.
  static void
  DecCurrentlyRendering(UTextureRenderTarget2D *output_rendertarget);

  // Returns true if the current output render target is being used for
  // rendering.
  static bool IsCurrentlyRendering(UTextureRenderTarget2D *output_rendertarget);

  // Returns number of frames in queue to be rendered in the given render
  // target.
  static int NumCurrentlyRendering(UTextureRenderTarget2D *output_rendertarget);

  // Mutex to protect the current set of output render targets being processed.
  static FCriticalSection m_renderer_mutex_;

  // Current map of output render targets (and their count/number of frames)
  // being processed.
  static TMap<UTextureRenderTarget2D *, int> m_curr_renderer_map;

  // Number of frames in rendering queue.
  static std::atomic_int m_num_frames_in_render_queue;
};