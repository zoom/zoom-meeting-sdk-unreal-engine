// Copyright : All rights reserved by Zoom Video Communications 2022-

#include "ZoomSDKVideoSource.h"

#include "SDKInterfaceWrap.h"
#include "YuvTools.h"

BEGIN_ZOOM_SDK_UE_NAMESPACE

VideoTicker::VideoTicker(ZoomSDKVideoSource *video_source,
                         VideoSourceCapability suggested_cap)
    : m_video_source(video_source), m_delta_elapsed_sec(0.0f),
      m_last_frame_tick(INDEX_NONE) {}

void VideoTicker::Tick(float DeltaTime) {
  // Max interval after which we need to send a video frame.
  // We use the suggest capabilities frames per second to figure out the delta
  // (in seconds) between each frame.
  static const float s_max_delta_interval_sec =
      (1.0f / (float)m_video_source->GetSuggestedVideoSourceCapability().frame);

  // Return if:
  // onStopSend was called OR
  // we are on the same frame tick OR
  // video sender is invalid.
  if (m_video_source->GetStopSend() || m_last_frame_tick == GFrameCounter ||
      !m_video_source->GetVideoSender()) {
    return;
  }

  // Update the last frame tick.
  m_last_frame_tick = GFrameCounter;

  // Check if we reached the required delta to send a video frame.
  m_delta_elapsed_sec += DeltaTime;

  if (m_delta_elapsed_sec < s_max_delta_interval_sec) {
    return;
  }

  // Send a single video.
  m_video_source->SendSingleVideoFrame();

  // Reset the delta.
  m_delta_elapsed_sec = 0.0f;
}

ZoomSDKVideoSource::ZoomSDKVideoSource(
    UTextureRenderTarget2D *texture_render_target)
    : m_texture_render_target(texture_render_target), m_stop_send(true) {}

ZoomSDKVideoSource::~ZoomSDKVideoSource() {}

ZoomSDKVideoSource *
ZoomSDKVideoSource::Create(UTextureRenderTarget2D *texture_render_target) {
  return new ZoomSDKVideoSource(texture_render_target);
}

void ZoomSDKVideoSource::onInitialize(
    IZoomSDKVideoSender *sender, IList<VideoSourceCapability> *support_cap_list,
    VideoSourceCapability &suggest_cap) {
  UE_LOG(ZoomMeetingSDKLog, Display,
         TEXT("ZoomSDKVideoSource::onInitialize: Initializing..."));

  m_video_sender = sender;
  m_suggested_cap = suggest_cap;

  UE_LOG(ZoomMeetingSDKLog, Display,
         TEXT("ZoomSDKVideoSource::onInitialize: suggest_cap: width:%d, "
              "height:%d, frame: %d"),
         suggest_cap.width, suggest_cap.height, suggest_cap.frame);
}

void ZoomSDKVideoSource::onStartSend() {
  if (!m_video_sender) {
    return;
  }

  UE_LOG(ZoomMeetingSDKLog, Display,
         TEXT("ZoomSDKVideoSource::onStartSend Starting..."));

  m_stop_send = false;
  m_video_ticker.Reset(new VideoTicker(this, m_suggested_cap));
}
void ZoomSDKVideoSource::onStopSend() {
  UE_LOG(ZoomMeetingSDKLog, Display, TEXT("ZoomSDKVideoSource::onStopSend..."));
  m_stop_send = true;

  // Reset the ticker when we stop sending video.
  m_video_ticker.Reset(nullptr);
}

void ZoomSDKVideoSource::onUninitialized() {
  UE_LOG(ZoomMeetingSDKLog, Display,
         TEXT("ZoomSDKVideoSource::onUninitialized: Uninitializing..."));
  m_video_sender = nullptr;
  m_stop_send = true;
}

void ZoomSDKVideoSource::onPropertyChange(
    IList<VideoSourceCapability> *support_cap_list,
    VideoSourceCapability suggest_cap) {}

bool ZoomSDKVideoSource::SendSingleVideoFrame() {
  ZOOM_SDK_NAMESPACE::SDKError err(ZOOM_SDK_NAMESPACE::SDKERR_WRONG_USAGE);
  YUVI420FullRawData raw_yuv_data;
  if (YUVTools::GetYUVRawData(m_texture_render_target, raw_yuv_data)) {
    err = m_video_sender->sendVideoFrame(
        raw_yuv_data.data.GetData(), raw_yuv_data.width, raw_yuv_data.height,
        raw_yuv_data.frameLength, 0);

    if (err != ZOOM_SDK_NAMESPACE::SDKERR_SUCCESS) {
      UE_LOG(ZoomMeetingSDKLog, Error,
             TEXT("ZoomSDKVideoSource::SendSingleVideoFrame:: err:%s"),
             *SDKErrorToString(err));
    }
  } else {
    UE_LOG(ZoomMeetingSDKLog, Error,
           TEXT("ZoomSDKVideoSource::SendSingleVideoFrame::not sending "
                "any frame."));
    return false;
  }
  return (err == ZOOM_SDK_NAMESPACE::SDKERR_SUCCESS) ? true : false;
}

END_ZOOM_SDK_UE_NAMESPACE