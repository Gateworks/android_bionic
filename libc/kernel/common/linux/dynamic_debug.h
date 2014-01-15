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
#ifndef _DYNAMIC_DEBUG_H
#define _DYNAMIC_DEBUG_H
struct _ddebug {
 const char *modname;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 const char *function;
 const char *filename;
 const char *format;
 unsigned int lineno:18;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define _DPRINTK_FLAGS_NONE 0
#define _DPRINTK_FLAGS_PRINT (1<<0)
#define _DPRINTK_FLAGS_INCL_MODNAME (1<<1)
#define _DPRINTK_FLAGS_INCL_FUNCNAME (1<<2)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define _DPRINTK_FLAGS_INCL_LINENO (1<<3)
#define _DPRINTK_FLAGS_INCL_TID (1<<4)
#ifdef DEBUG
#define _DPRINTK_FLAGS_DEFAULT _DPRINTK_FLAGS_PRINT
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#else
#define _DPRINTK_FLAGS_DEFAULT 0
#endif
 unsigned int flags:8;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
} __attribute__((aligned(8)));
#include <linux/string.h>
#include <linux/errno.h>
#define dynamic_pr_debug(fmt, ...)   do { if (0) printk(KERN_DEBUG pr_fmt(fmt), ##__VA_ARGS__); } while (0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define dynamic_dev_dbg(dev, fmt, ...)   do { if (0) dev_printk(KERN_DEBUG, dev, fmt, ##__VA_ARGS__); } while (0)
#endif
