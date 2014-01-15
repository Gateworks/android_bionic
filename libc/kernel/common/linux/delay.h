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
#ifndef _LINUX_DELAY_H
#define _LINUX_DELAY_H
#include <linux/kernel.h>
#include <asm/delay.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#ifndef MAX_UDELAY_MS
#define MAX_UDELAY_MS 5
#endif
#ifndef mdelay
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define mdelay(n) (  (__builtin_constant_p(n) && (n)<=MAX_UDELAY_MS) ? udelay((n)*1000) :   ({unsigned long __ms=(n); while (__ms--) udelay(1000);}))
#endif
#ifndef ndelay
#define ndelay(x) ndelay(x)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#endif
