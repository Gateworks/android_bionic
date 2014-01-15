/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef _UAPI_PXP_DMA
#define _UAPI_PXP_DMA
#include <linux/posix_types.h>
#include <linux/types.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
typedef unsigned long dma_addr_t;
typedef unsigned char bool;
#define __u32 unsigned int
#define fourcc(a, b, c, d)  (((__u32)(a)<<0)|((__u32)(b)<<8)|((__u32)(c)<<16)|((__u32)(d)<<24))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PXP_PIX_FMT_RGB332 fourcc('R', 'G', 'B', '1')
#define PXP_PIX_FMT_RGB555 fourcc('R', 'G', 'B', 'O')
#define PXP_PIX_FMT_RGB565 fourcc('R', 'G', 'B', 'P')
#define PXP_PIX_FMT_RGB666 fourcc('R', 'G', 'B', '6')
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PXP_PIX_FMT_BGR666 fourcc('B', 'G', 'R', '6')
#define PXP_PIX_FMT_BGR24 fourcc('B', 'G', 'R', '3')
#define PXP_PIX_FMT_RGB24 fourcc('R', 'G', 'B', '3')
#define PXP_PIX_FMT_BGR32 fourcc('B', 'G', 'R', '4')
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PXP_PIX_FMT_BGRA32 fourcc('B', 'G', 'R', 'A')
#define PXP_PIX_FMT_RGB32 fourcc('R', 'G', 'B', '4')
#define PXP_PIX_FMT_RGBA32 fourcc('R', 'G', 'B', 'A')
#define PXP_PIX_FMT_ABGR32 fourcc('A', 'B', 'G', 'R')
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PXP_PIX_FMT_YUYV fourcc('Y', 'U', 'Y', 'V')
#define PXP_PIX_FMT_UYVY fourcc('U', 'Y', 'V', 'Y')
#define PXP_PIX_FMT_VYUY fourcc('V', 'Y', 'U', 'Y')
#define PXP_PIX_FMT_YVYU fourcc('Y', 'V', 'Y', 'U')
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PXP_PIX_FMT_Y41P fourcc('Y', '4', '1', 'P')
#define PXP_PIX_FMT_YUV444 fourcc('Y', '4', '4', '4')
#define PXP_PIX_FMT_NV12 fourcc('N', 'V', '1', '2')
#define PXP_PIX_FMT_NV21 fourcc('N', 'V', '2', '1')
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PXP_PIX_FMT_NV16 fourcc('N', 'V', '1', '6')
#define PXP_PIX_FMT_NV61 fourcc('N', 'V', '6', '1')
#define PXP_PIX_FMT_GREY fourcc('G', 'R', 'E', 'Y')
#define PXP_PIX_FMT_GY04 fourcc('G', 'Y', '0', '4')
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PXP_PIX_FMT_YVU410P fourcc('Y', 'V', 'U', '9')
#define PXP_PIX_FMT_YUV410P fourcc('Y', 'U', 'V', '9')
#define PXP_PIX_FMT_YVU420P fourcc('Y', 'V', '1', '2')
#define PXP_PIX_FMT_YUV420P fourcc('I', '4', '2', '0')
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PXP_PIX_FMT_YUV420P2 fourcc('Y', 'U', '1', '2')
#define PXP_PIX_FMT_YVU422P fourcc('Y', 'V', '1', '6')
#define PXP_PIX_FMT_YUV422P fourcc('4', '2', '2', 'P')
#define PXP_LUT_NONE 0x0
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PXP_LUT_INVERT 0x1
#define PXP_LUT_BLACK_WHITE 0x2
#define PXP_LUT_USE_CMAP 0x4
#define NR_PXP_VIRT_CHANNEL 16
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum pxp_channel_status {
 PXP_CHANNEL_FREE,
 PXP_CHANNEL_INITIALIZED,
 PXP_CHANNEL_READY,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct rect {
 int top;
 int left;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int width;
 int height;
};
struct pxp_layer_param {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned short width;
 unsigned short height;
 unsigned short stride;
 unsigned int pixel_fmt;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 bool combine_enable;
 unsigned int color_key_enable;
 unsigned int color_key;
 bool global_alpha_enable;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 bool global_override;
 unsigned char global_alpha;
 bool alpha_invert;
 bool local_alpha_enable;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 dma_addr_t paddr;
};
struct pxp_proc_data {
 int scaling;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int hflip;
 int vflip;
 int rotate;
 int rot_pos;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int yuv;
 struct rect srect;
 struct rect drect;
 unsigned int bgcolor;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int overlay_state;
 int lut_transform;
 unsigned char *lut_map;
 bool lut_map_updated;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 bool combine_enable;
};
struct pxp_config_data {
 struct pxp_layer_param s0_param;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct pxp_layer_param ol_param[8];
 struct pxp_layer_param out_param;
 struct pxp_proc_data proc_data;
 int layer_nr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int handle;
};
#endif
