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
#ifndef LINUX_ISAPNP_H
#define LINUX_ISAPNP_H
#include <linux/errno.h>
#include <linux/pnp.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ISAPNP_VENDOR(a,b,c) (((((a)-'A'+1)&0x3f)<<2)|  ((((b)-'A'+1)&0x18)>>3)|((((b)-'A'+1)&7)<<13)|  ((((c)-'A'+1)&0x1f)<<8))
#define ISAPNP_DEVICE(x) ((((x)&0xf000)>>8)|  (((x)&0x0f00)>>8)|  (((x)&0x00f0)<<8)|  (((x)&0x000f)<<8))
#define ISAPNP_FUNCTION(x) ISAPNP_DEVICE(x)
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
