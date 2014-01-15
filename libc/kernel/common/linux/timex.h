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
#ifndef _LINUX_TIMEX_H
#define _LINUX_TIMEX_H
#include <uapi/linux/timex.h>
#define ADJ_ADJTIME 0x8000
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ADJ_OFFSET_SINGLESHOT 0x0001
#define ADJ_OFFSET_READONLY 0x2000
#include <linux/compiler.h>
#include <linux/types.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/param.h>
#include <asm/timex.h>
#define SHIFT_PLL 2
#define SHIFT_FLL 2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MAXTC 10
#define SHIFT_USEC 16
#define PPM_SCALE ((s64)NSEC_PER_USEC << (NTP_SCALE_SHIFT - SHIFT_USEC))
#define PPM_SCALE_INV_SHIFT 19
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PPM_SCALE_INV ((1LL << (PPM_SCALE_INV_SHIFT + NTP_SCALE_SHIFT)) /   PPM_SCALE + 1)
#define MAXPHASE 500000000L
#define MAXFREQ 500000
#define MAXFREQ_SCALED ((s64)MAXFREQ << NTP_SCALE_SHIFT)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MINSEC 256
#define MAXSEC 2048
#define NTP_PHASE_LIMIT ((MAXPHASE / NSEC_PER_USEC) << 5)
#define shift_right(x, s) ({   __typeof__(x) __x = (x);   __typeof__(s) __s = (s);   __x < 0 ? -(-__x >> __s) : __x >> __s;  })
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NTP_SCALE_SHIFT 32
#define NTP_INTERVAL_FREQ (HZ)
#define NTP_INTERVAL_LENGTH (NSEC_PER_SEC/NTP_INTERVAL_FREQ)
#define PIT_TICK_RATE 1193182ul
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
