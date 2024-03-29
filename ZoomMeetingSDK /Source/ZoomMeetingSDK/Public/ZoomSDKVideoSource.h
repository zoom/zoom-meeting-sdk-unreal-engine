// Copyright : All rights reserved by Zoom Video Communications 2022-

#pragma once

#include "ZoomUESDKDef.h"
#include "rawdata/rawdata_video_source_helper_interface.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE

class ZoomSDKVideoSource;

// Video ticker class that is used to send video frames within the game thread.
class VideoTicker : public FTickableGameObject {
public:
  VideoTicker(ZoomSDKVideoSource *video_source,
              VideoSourceCapability suggested_cap);
  ~VideoTicker() {}
  // FTickableGameObject overrides.
  // When we receive a tick, send a single video if necessary conditions are
  // met.
  void Tick(float DeltaTime) override;
  ETickableTickType GetTickableTickType() const override {
    return ETickableTickType::Always;
  }
  TStatId GetStatId() const override {
    RETURN_QUICK_DECLARE_CYCLE_STAT(MyTickableClass, STATGROUP_Tickables);
  }

private:
  // Pointer to the video source.
  ZoomSDKVideoSource *m_video_source = nullptr;

  // Total delta elapsed since the last frame was sent.
  float m_delta_elapsed_sec;
  // Global last frame tick.
  uint32 m_last_frame_tick;
};

/**
 * Wrapper around IZoomSDKVideoSource.
 * Check
 * https://marketplacefront.zoom.us/sdk/meeting/windows/class_i_zoom_s_d_k_video_source.html
 * for interface definitions.
 */
class ZOOMMEETINGSDK_API ZoomSDKVideoSource : public IZoomSDKVideoSource {
public:
  ~ZoomSDKVideoSource();

  // Static function to create an object of IZoomSDKVideoSource.
  static ZoomSDKVideoSource *
  Create(UTextureRenderTarget2D *texture_render_target);

  static ZoomSDKVideoSource *GetInstance();

  // IZoomSDKVideoSource overrides.
  void onInitialize(IZoomSDKVideoSender *sender,
                    IList<VideoSourceCapability> *support_cap_list,
                    VideoSourceCapability &suggest_cap) override;
  void onPropertyChange(IList<VideoSourceCapability> *support_cap_list,
                        VideoSourceCapability suggest_cap) override;
  void onStartSend() override;
  void onStopSend() override;
  void onUninitialized() override;

  // Reads data from the output renderer and sends a single video frame.
  //
  // Returns true if the frame was sent successfully.
  bool SendSingleVideoFrame();

  // Returns a pointer to the video sender.
  IZoomSDKVideoSender *GetVideoSender() const { return m_video_sender; }

  // Returns true if we need to stop sending video.
  bool GetStopSend() const { return m_stop_send; }

  // Returns the suggested video source capability.
  const VideoSourceCapability &GetSuggestedVideoSourceCapability() const {
    return m_suggested_cap;
  }

private:
  ZoomSDKVideoSource(UTextureRenderTarget2D *texture_render_target);

  // IZoomSDKVideoSender pointer.
  IZoomSDKVideoSender *m_video_sender = nullptr;

  // Output renderer to get data from.
  UTextureRenderTarget2D *m_texture_render_target = nullptr;

  // Suggested video capability.
  VideoSourceCapability m_suggested_cap;

  TUniquePtr<VideoTicker> m_video_ticker;

  // Set to true if we need to stop sending video frames.
  bool m_stop_send;
};

END_ZOOM_SDK_UE_NAMESPACE