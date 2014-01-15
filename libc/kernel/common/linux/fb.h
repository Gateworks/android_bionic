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
#ifndef _LINUX_FB_H
#define _LINUX_FB_H
#include <linux/kgdb.h>
#include <uapi/linux/fb.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define FBIO_CURSOR _IOWR('F', 0x08, struct fb_cursor_user)
#include <linux/fs.h>
#include <linux/init.h>
#include <linux/workqueue.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/notifier.h>
#include <linux/list.h>
#include <linux/backlight.h>
#include <linux/slab.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <asm/io.h>
struct vm_area_struct;
struct fb_info;
struct device;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct file;
struct videomode;
struct device_node;
#define FB_DPMS_ACTIVE_OFF 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define FB_DPMS_SUSPEND 2
#define FB_DPMS_STANDBY 4
#define FB_DISP_DDI 1
#define FB_DISP_ANA_700_300 2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define FB_DISP_ANA_714_286 4
#define FB_DISP_ANA_1000_400 8
#define FB_DISP_ANA_700_000 16
#define FB_DISP_MONO 32
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define FB_DISP_RGB 64
#define FB_DISP_MULTI 128
#define FB_DISP_UNKNOWN 256
#define FB_SIGNAL_NONE 0
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define FB_SIGNAL_BLANK_BLANK 1
#define FB_SIGNAL_SEPARATE 2
#define FB_SIGNAL_COMPOSITE 4
#define FB_SIGNAL_SYNC_ON_GREEN 8
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define FB_SIGNAL_SERRATION_ON 16
#define FB_MISC_PRIM_COLOR 1
#define FB_MISC_1ST_DETAIL 2
struct fb_chroma {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 redx;
 __u32 greenx;
 __u32 bluex;
 __u32 whitex;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 redy;
 __u32 greeny;
 __u32 bluey;
 __u32 whitey;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct fb_monspecs {
 struct fb_chroma chroma;
 struct fb_videomode *modedb;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 manufacturer[4];
 __u8 monitor[14];
 __u8 serial_no[14];
 __u8 ascii[14];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 modedb_len;
 __u32 model;
 __u32 serial;
 __u32 year;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 week;
 __u32 hfmin;
 __u32 hfmax;
 __u32 dclkmin;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 dclkmax;
 __u16 input;
 __u16 dpms;
 __u16 signal;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u16 vfmin;
 __u16 vfmax;
 __u16 gamma;
 __u16 gtf : 1;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u16 misc;
 __u8 version;
 __u8 revision;
 __u8 max_x;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 max_y;
};
struct fb_cmap_user {
 __u32 start;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 len;
 __u16 __user *red;
 __u16 __user *green;
 __u16 __user *blue;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u16 __user *transp;
};
struct fb_image_user {
 __u32 dx;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 dy;
 __u32 width;
 __u32 height;
 __u32 fg_color;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 bg_color;
 __u8 depth;
 const char __user *data;
 struct fb_cmap_user cmap;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct fb_cursor_user {
 __u16 set;
 __u16 enable;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u16 rop;
 const char __user *mask;
 struct fbcurpos hot;
 struct fb_image_user image;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define FB_EVENT_MODE_CHANGE 0x01
#define FB_EVENT_SUSPEND 0x02
#define FB_EVENT_RESUME 0x03
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define FB_EVENT_MODE_DELETE 0x04
#define FB_EVENT_FB_REGISTERED 0x05
#define FB_EVENT_FB_UNREGISTERED 0x06
#define FB_EVENT_GET_CONSOLE_MAP 0x07
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define FB_EVENT_SET_CONSOLE_MAP 0x08
#define FB_EVENT_BLANK 0x09
#define FB_EVENT_NEW_MODELIST 0x0A
#define FB_EVENT_MODE_CHANGE_ALL 0x0B
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define FB_EVENT_CONBLANK 0x0C
#define FB_EVENT_GET_REQ 0x0D
#define FB_EVENT_FB_UNBIND 0x0E
#define FB_EVENT_REMAP_ALL_CONSOLE 0x0F
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define FB_EARLY_EVENT_BLANK 0x10
#define FB_R_EARLY_EVENT_BLANK 0x11
struct fb_event {
 struct fb_info *info;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void *data;
};
struct fb_blit_caps {
 u32 x;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 y;
 u32 len;
 u32 flags;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define FB_PIXMAP_DEFAULT 1
#define FB_PIXMAP_SYSTEM 2
#define FB_PIXMAP_IO 4
#define FB_PIXMAP_SYNC 256
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct fb_pixmap {
 u8 *addr;
 u32 size;
 u32 offset;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 buf_align;
 u32 scan_align;
 u32 access_align;
 u32 flags;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 blit_x;
 u32 blit_y;
 void (*writeio)(struct fb_info *info, void __iomem *dst, void *src, unsigned int size);
 void (*readio) (struct fb_info *info, void *dst, void __iomem *src, unsigned int size);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#endif
