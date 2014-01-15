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
#ifndef _LINUX_CLOCKSOURCE_H
#define _LINUX_CLOCKSOURCE_H
#include <linux/types.h>
#include <linux/timex.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/time.h>
#include <linux/list.h>
#include <linux/cache.h>
#include <linux/timer.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/init.h>
#include <asm/div64.h>
#include <asm/io.h>
typedef u64 cycle_t;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct clocksource;
struct cyclecounter {
 cycle_t (*read)(const struct cyclecounter *cc);
 cycle_t mask;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 mult;
 u32 shift;
};
struct timecounter {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 const struct cyclecounter *cc;
 cycle_t cycle_last;
 u64 nsec;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct clocksource {
 cycle_t (*read)(struct clocksource *cs);
 cycle_t cycle_last;
 cycle_t mask;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 mult;
 u32 shift;
 u64 max_idle_ns;
 u32 maxadj;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 const char *name;
 int rating;
 int (*enable)(struct clocksource *cs);
 void (*disable)(struct clocksource *cs);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long flags;
 void (*suspend)(struct clocksource *cs);
 void (*resume)(struct clocksource *cs);
} ____cacheline_aligned;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CLOCK_SOURCE_IS_CONTINUOUS 0x01
#define CLOCK_SOURCE_MUST_VERIFY 0x02
#define CLOCK_SOURCE_WATCHDOG 0x10
#define CLOCK_SOURCE_VALID_FOR_HRES 0x20
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CLOCK_SOURCE_UNSTABLE 0x40
#define CLOCK_SOURCE_SUSPEND_NONSTOP 0x80
#define CLOCKSOURCE_MASK(bits) (cycle_t)((bits) < 64 ? ((1ULL<<(bits))-1) : -1)
struct device_node;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
typedef void(*clocksource_of_init_fn)(struct device_node *);
#define CLOCKSOURCE_OF_DECLARE(name, compat, fn)   static const struct of_device_id __clksrc_of_table_##name   __attribute__((unused))   = { .compatible = compat,   .data = (fn == (clocksource_of_init_fn)NULL) ? fn : fn }
#endif
