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
#ifndef _LINUX_FRONTSWAP_H
#define _LINUX_FRONTSWAP_H
#include <linux/swap.h>
#include <linux/mm.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/bitops.h>
struct frontswap_ops {
 void (*init)(unsigned);
 int (*store)(unsigned, pgoff_t, struct page *);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*load)(unsigned, pgoff_t, struct page *);
 void (*invalidate_page)(unsigned, pgoff_t);
 void (*invalidate_area)(unsigned);
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define FRONTSWAP_HAS_EXCLUSIVE_GETS
#define frontswap_enabled (0)
#endif
