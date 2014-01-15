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
#ifndef __ASMARM_SMP_TWD_H
#define __ASMARM_SMP_TWD_H
#define TWD_TIMER_LOAD 0x00
#define TWD_TIMER_COUNTER 0x04
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define TWD_TIMER_CONTROL 0x08
#define TWD_TIMER_INTSTAT 0x0C
#define TWD_WDOG_LOAD 0x20
#define TWD_WDOG_COUNTER 0x24
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define TWD_WDOG_CONTROL 0x28
#define TWD_WDOG_INTSTAT 0x2C
#define TWD_WDOG_RESETSTAT 0x30
#define TWD_WDOG_DISABLE 0x34
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define TWD_TIMER_CONTROL_ENABLE (1 << 0)
#define TWD_TIMER_CONTROL_ONESHOT (0 << 1)
#define TWD_TIMER_CONTROL_PERIODIC (1 << 1)
#define TWD_TIMER_CONTROL_IT_ENABLE (1 << 2)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/ioport.h>
struct twd_local_timer {
 struct resource res[2];
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DEFINE_TWD_LOCAL_TIMER(name,base,irq)  struct twd_local_timer name __initdata = {   .res = {   DEFINE_RES_MEM(base, 0x10),   DEFINE_RES_IRQ(irq),   },  };
#endif
