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
#ifndef __ASM_GENERIC_DELAY_H
#define __ASM_GENERIC_DELAY_H
#define udelay(n)   ({   if (__builtin_constant_p(n)) {   if ((n) / 20000 >= 1)   __bad_udelay();   else   __const_udelay((n) * 0x10c7ul);   } else {   __udelay(n);   }   })
#define ndelay(n)   ({   if (__builtin_constant_p(n)) {   if ((n) / 20000 >= 1)   __bad_ndelay();   else   __const_udelay((n) * 5ul);   } else {   __ndelay(n);   }   })
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
