// AForge FFMPEG Library
// AForge.NET framework
// http://www.aforgenet.com/framework/
//
// Copyright � AForge.NET, 2009-2011
// contacts@aforgenet.com
//

#include "StdAfx.h"
#include "VideoCodec.h"

namespace libffmpeg
{
	extern "C"
	{
#pragma warning(disable:4635)
#pragma warning(disable:4244)
#include "libavcodec\avcodec.h"
	}
}

int video_codecs[] =
{
	libffmpeg::CODEC_ID_MPEG4,
	libffmpeg::CODEC_ID_WMV1,
	libffmpeg::CODEC_ID_WMV2,
	libffmpeg::CODEC_ID_MSMPEG4V2,
	libffmpeg::CODEC_ID_MSMPEG4V3,
	libffmpeg::CODEC_ID_H263P,
	libffmpeg::CODEC_ID_FLV1,
	libffmpeg::CODEC_ID_MPEG2VIDEO,
	libffmpeg::CODEC_ID_RAWVIDEO,
	libffmpeg::CODEC_ID_FFV1,
	libffmpeg::CODEC_ID_FFVHUFF,
	libffmpeg::CODEC_ID_H264,
	libffmpeg::CODEC_ID_THEORA,
};

int pixel_formats[] =
{
	libffmpeg::PIX_FMT_YUV420P,
	libffmpeg::PIX_FMT_YUV420P,
	libffmpeg::PIX_FMT_YUV420P,
	libffmpeg::PIX_FMT_YUV420P,
	libffmpeg::PIX_FMT_YUV420P,
	libffmpeg::PIX_FMT_YUV420P,
	libffmpeg::PIX_FMT_YUV420P,
	libffmpeg::PIX_FMT_YUV420P,
	libffmpeg::PIX_FMT_BGR24,
	libffmpeg::PIX_FMT_YUV420P,
	libffmpeg::PIX_FMT_RGB32,
	libffmpeg::PIX_FMT_YUVJ420P,
	libffmpeg::PIX_FMT_YUV420P,
};

int CODECS_COUNT(sizeof(video_codecs) / sizeof(libffmpeg::AVCodecID));