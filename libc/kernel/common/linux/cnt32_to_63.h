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
#ifndef __LINUX_CNT32_TO_63_H__
#define __LINUX_CNT32_TO_63_H__
#include <linux/compiler.h>
#include <linux/types.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <asm/byteorder.h>
union cnt32_to_63 {
 struct {
#ifdef __LITTLE_ENDIAN
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 lo, hi;
#elif defined(__BIG_ENDIAN)
 u32 hi, lo;
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 };
 u64 val;
};
#define cnt32_to_63(cnt_lo)  ({   static u32 __m_cnt_hi;   union cnt32_to_63 __x;   __x.hi = __m_cnt_hi;   smp_rmb();   __x.lo = (cnt_lo);   if (unlikely((s32)(__x.hi ^ __x.lo) < 0))   __m_cnt_hi = __x.hi = (__x.hi ^ 0x80000000) + (__x.hi >> 31);   __x.val;  })
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
