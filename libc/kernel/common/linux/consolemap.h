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
#ifndef __LINUX_CONSOLEMAP_H__
#define __LINUX_CONSOLEMAP_H__
#define LAT1_MAP 0
#define GRAF_MAP 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define IBMPC_MAP 2
#define USER_MAP 3
#include <linux/types.h>
#define inverse_translate(conp, glyph, uni) ((uint16_t)glyph)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define set_translate(m, vc) ((unsigned short *)NULL)
#define conv_uni_to_pc(conp, ucs) ((int) (ucs > 0xff ? -1: ucs))
#define conv_8bit_to_uni(c) ((uint32_t)(c))
#define conv_uni_to_8bit(c) ((int) ((c) & 0xff))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define console_map_init(c) do { ; } while (0)
#endif
