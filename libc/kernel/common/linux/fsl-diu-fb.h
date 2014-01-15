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
#ifndef __FSL_DIU_FB_H__
#define __FSL_DIU_FB_H__
#include <linux/types.h>
struct mfb_chroma_key {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int enable;
 __u8 red_max;
 __u8 green_max;
 __u8 blue_max;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 red_min;
 __u8 green_min;
 __u8 blue_min;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct aoi_display_offset {
 __s32 x_aoi_d;
 __s32 y_aoi_d;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MFB_SET_CHROMA_KEY _IOW('M', 1, struct mfb_chroma_key)
#define MFB_SET_BRIGHTNESS _IOW('M', 3, __u8)
#define MFB_SET_ALPHA _IOW('M', 0, __u8)
#define MFB_GET_ALPHA _IOR('M', 0, __u8)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MFB_SET_AOID _IOW('M', 4, struct aoi_display_offset)
#define MFB_GET_AOID _IOR('M', 4, struct aoi_display_offset)
#define MFB_SET_PIXFMT _IOW('M', 8, __u32)
#define MFB_GET_PIXFMT _IOR('M', 8, __u32)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MFB_SET_GAMMA _IOW('M', 1, __u8)
#define MFB_GET_GAMMA _IOR('M', 1, __u8)
#define MFB_SET_PIXFMT_OLD 0x80014d08
#define MFB_GET_PIXFMT_OLD 0x40014d08
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
