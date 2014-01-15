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
#ifndef _LINUX_JIFFIES_H
#define _LINUX_JIFFIES_H
#include <linux/math64.h>
#include <linux/kernel.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/types.h>
#include <linux/time.h>
#include <linux/timex.h>
#include <asm/param.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#if HZ >= (12 && HZ < 24)
#define SHIFT_HZ 4
#elif HZ >= 24 && HZ < 48
#define SHIFT_HZ 5
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#elif HZ >= 48 && HZ < 96
#define SHIFT_HZ 6
#elif HZ >= 96 && HZ < 192
#define SHIFT_HZ 7
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#elif HZ >= 192 && HZ < 384
#define SHIFT_HZ 8
#elif HZ >= 384 && HZ < 768
#define SHIFT_HZ 9
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#elif HZ >= 768 && HZ < 1536
#define SHIFT_HZ 10
#elif HZ >= 1536 && HZ < 3072
#define SHIFT_HZ 11
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#elif HZ >= 3072 && HZ < 6144
#define SHIFT_HZ 12
#elif HZ >= 6144 && HZ < 12288
#define SHIFT_HZ 13
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#else
#error Invalid value of HZ.
#endif
#define SH_DIV(NOM,DEN,LSH) ( (((NOM) / (DEN)) << (LSH))   + ((((NOM) % (DEN)) << (LSH)) + (DEN) / 2) / (DEN))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define LATCH ((CLOCK_TICK_RATE + HZ/2) / HZ)
#define TICK_USEC ((1000000UL + USER_HZ/2) / USER_HZ)
#define __jiffy_data __attribute__((section(".data")))
#if BITS_PER_LONG < 64
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#else
#endif
#define time_after(a,b)   (typecheck(unsigned long, a) &&   typecheck(unsigned long, b) &&   ((long)(b) - (long)(a) < 0))
#define time_before(a,b) time_after(b,a)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define time_after_eq(a,b)   (typecheck(unsigned long, a) &&   typecheck(unsigned long, b) &&   ((long)(a) - (long)(b) >= 0))
#define time_before_eq(a,b) time_after_eq(b,a)
#define time_in_range(a,b,c)   (time_after_eq(a,b) &&   time_before_eq(a,c))
#define time_in_range_open(a,b,c)   (time_after_eq(a,b) &&   time_before(a,c))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define time_after64(a,b)   (typecheck(__u64, a) &&   typecheck(__u64, b) &&   ((__s64)(b) - (__s64)(a) < 0))
#define time_before64(a,b) time_after64(b,a)
#define time_after_eq64(a,b)   (typecheck(__u64, a) &&   typecheck(__u64, b) &&   ((__s64)(a) - (__s64)(b) >= 0))
#define time_before_eq64(a,b) time_after_eq64(b,a)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define time_is_before_jiffies(a) time_after(jiffies, a)
#define time_is_after_jiffies(a) time_before(jiffies, a)
#define time_is_before_eq_jiffies(a) time_after_eq(jiffies, a)
#define time_is_after_eq_jiffies(a) time_before_eq(jiffies, a)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define INITIAL_JIFFIES ((unsigned long)(unsigned int) (-300*HZ))
#define MAX_JIFFY_OFFSET ((LONG_MAX >> 1)-1)
#define SEC_JIFFIE_SC (31 - SHIFT_HZ)
#define NSEC_JIFFIE_SC (SEC_JIFFIE_SC + 29)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define USEC_JIFFIE_SC (SEC_JIFFIE_SC + 19)
#define SEC_CONVERSION ((unsigned long)((((u64)NSEC_PER_SEC << SEC_JIFFIE_SC) +  TICK_NSEC -1) / (u64)TICK_NSEC))
#define NSEC_CONVERSION ((unsigned long)((((u64)1 << NSEC_JIFFIE_SC) +  TICK_NSEC -1) / (u64)TICK_NSEC))
#define USEC_CONVERSION   ((unsigned long)((((u64)NSEC_PER_USEC << USEC_JIFFIE_SC) +  TICK_NSEC -1) / (u64)TICK_NSEC))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define USEC_ROUND (u64)(((u64)1 << USEC_JIFFIE_SC) - 1)
#if BITS_PER_LONG < 64
#define MAX_SEC_IN_JIFFIES   (long)((u64)((u64)MAX_JIFFY_OFFSET * TICK_NSEC) / NSEC_PER_SEC)
#else
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MAX_SEC_IN_JIFFIES   (SH_DIV((MAX_JIFFY_OFFSET >> SEC_JIFFIE_SC) * TICK_NSEC, NSEC_PER_SEC, 1) - 1)
#endif
#define TIMESTAMP_SIZE 30
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
