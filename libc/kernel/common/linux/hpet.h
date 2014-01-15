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
#ifndef __HPET__
#define __HPET__ 1
#include <uapi/linux/hpet.h>
struct hpet {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u64 hpet_cap;
 u64 res0;
 u64 hpet_config;
 u64 res1;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u64 hpet_isr;
 u64 res2[25];
 union {
 u64 _hpet_mc64;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 _hpet_mc32;
 unsigned long _hpet_mc;
 } _u0;
 u64 res3;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct hpet_timer {
 u64 hpet_config;
 union {
 u64 _hpet_hc64;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 _hpet_hc32;
 unsigned long _hpet_compare;
 } _u1;
 u64 hpet_fsb[2];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 } hpet_timers[1];
};
#define hpet_mc _u0._hpet_mc
#define hpet_compare _u1._hpet_compare
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define HPET_MAX_TIMERS (32)
#define HPET_MAX_IRQ (32)
#define HPET_COUNTER_CLK_PERIOD_MASK (0xffffffff00000000ULL)
#define HPET_COUNTER_CLK_PERIOD_SHIFT (32UL)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define HPET_VENDOR_ID_MASK (0x00000000ffff0000ULL)
#define HPET_VENDOR_ID_SHIFT (16ULL)
#define HPET_LEG_RT_CAP_MASK (0x8000)
#define HPET_COUNTER_SIZE_MASK (0x2000)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define HPET_NUM_TIM_CAP_MASK (0x1f00)
#define HPET_NUM_TIM_CAP_SHIFT (8ULL)
#define HPET_LEG_RT_CNF_MASK (2UL)
#define HPET_ENABLE_CNF_MASK (1UL)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define Tn_INT_ROUTE_CAP_MASK (0xffffffff00000000ULL)
#define Tn_INT_ROUTE_CAP_SHIFT (32UL)
#define Tn_FSB_INT_DELCAP_MASK (0x8000UL)
#define Tn_FSB_INT_DELCAP_SHIFT (15)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define Tn_FSB_EN_CNF_MASK (0x4000UL)
#define Tn_FSB_EN_CNF_SHIFT (14)
#define Tn_INT_ROUTE_CNF_MASK (0x3e00UL)
#define Tn_INT_ROUTE_CNF_SHIFT (9)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define Tn_32MODE_CNF_MASK (0x0100UL)
#define Tn_VAL_SET_CNF_MASK (0x0040UL)
#define Tn_SIZE_CAP_MASK (0x0020UL)
#define Tn_PER_INT_CAP_MASK (0x0010UL)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define Tn_TYPE_CNF_MASK (0x0008UL)
#define Tn_INT_ENB_CNF_MASK (0x0004UL)
#define Tn_INT_TYPE_CNF_MASK (0x0002UL)
#define Tn_FSB_INT_ADDR_MASK (0xffffffff00000000ULL)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define Tn_FSB_INT_ADDR_SHIFT (32UL)
#define Tn_FSB_INT_VAL_MASK (0x00000000ffffffffULL)
struct hpet_data {
 unsigned long hd_phys_address;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void __iomem *hd_address;
 unsigned short hd_nirqs;
 unsigned int hd_state;
 unsigned int hd_irq[HPET_MAX_TIMERS];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#endif
