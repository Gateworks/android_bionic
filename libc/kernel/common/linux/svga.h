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
#ifndef _LINUX_SVGA_H
#define _LINUX_SVGA_H
#include <linux/pci.h>
#include <video/vga.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define VGA_REGSET_END_VAL 0xFF
#define VGA_REGSET_END {VGA_REGSET_END_VAL, 0, 0}
struct vga_regset {
 u8 regnum;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 lowbit;
 u8 highbit;
};
#define SVGA_FORMAT_END_VAL 0xFFFF
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SVGA_FORMAT_END {SVGA_FORMAT_END_VAL, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, 0, 0, 0, 0, 0, 0}
struct svga_fb_format {
 u32 bits_per_pixel;
 struct fb_bitfield red;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct fb_bitfield green;
 struct fb_bitfield blue;
 struct fb_bitfield transp;
 u32 nonstd;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 type;
 u32 type_aux;
 u32 visual;
 u32 xpanstep;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 xresstep;
};
struct svga_timing_regs {
 const struct vga_regset *h_total_regs;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 const struct vga_regset *h_display_regs;
 const struct vga_regset *h_blank_start_regs;
 const struct vga_regset *h_blank_end_regs;
 const struct vga_regset *h_sync_start_regs;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 const struct vga_regset *h_sync_end_regs;
 const struct vga_regset *v_total_regs;
 const struct vga_regset *v_display_regs;
 const struct vga_regset *v_blank_start_regs;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 const struct vga_regset *v_blank_end_regs;
 const struct vga_regset *v_sync_start_regs;
 const struct vga_regset *v_sync_end_regs;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct svga_pll {
 u16 m_min;
 u16 m_max;
 u16 n_min;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u16 n_max;
 u16 r_min;
 u16 r_max;
 u32 f_vco_min;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 f_vco_max;
 u32 f_base;
};
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
