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
#ifndef _LINUX_SUSPEND_H
#define _LINUX_SUSPEND_H
#include <linux/swap.h>
#include <linux/notifier.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/init.h>
#include <linux/pm.h>
#include <linux/mm.h>
#include <linux/freezer.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <asm/errno.h>
typedef int __bitwise suspend_state_t;
#define PM_SUSPEND_ON ((__force suspend_state_t) 0)
#define PM_SUSPEND_FREEZE ((__force suspend_state_t) 1)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PM_SUSPEND_STANDBY ((__force suspend_state_t) 2)
#define PM_SUSPEND_MEM ((__force suspend_state_t) 3)
#define PM_SUSPEND_MIN PM_SUSPEND_FREEZE
#define PM_SUSPEND_MAX ((__force suspend_state_t) 4)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum suspend_stat_step {
 SUSPEND_FREEZE = 1,
 SUSPEND_PREPARE,
 SUSPEND_SUSPEND,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 SUSPEND_SUSPEND_LATE,
 SUSPEND_SUSPEND_NOIRQ,
 SUSPEND_RESUME_NOIRQ,
 SUSPEND_RESUME_EARLY,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 SUSPEND_RESUME
};
struct suspend_stats {
 int success;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int fail;
 int failed_freeze;
 int failed_prepare;
 int failed_suspend;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int failed_suspend_late;
 int failed_suspend_noirq;
 int failed_resume;
 int failed_resume_early;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int failed_resume_noirq;
#define REC_FAILED_NUM 2
 int last_failed_dev;
 char failed_devs[REC_FAILED_NUM][40];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int last_failed_errno;
 int errno[REC_FAILED_NUM];
 int last_failed_step;
 enum suspend_stat_step failed_steps[REC_FAILED_NUM];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct platform_suspend_ops {
 int (*valid)(suspend_state_t state);
 int (*begin)(suspend_state_t state);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*prepare)(void);
 int (*prepare_late)(void);
 int (*enter)(suspend_state_t state);
 void (*wake)(void);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void (*finish)(void);
 bool (*suspend_again)(void);
 void (*end)(void);
 void (*recover)(void);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define suspend_valid_only_mem NULL
struct pbe {
 void *address;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void *orig_address;
 struct pbe *next;
};
struct platform_hibernation_ops {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*begin)(void);
 void (*end)(void);
 int (*pre_snapshot)(void);
 void (*finish)(void);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*prepare)(void);
 int (*enter)(void);
 void (*leave)(void);
 int (*pre_restore)(void);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void (*restore_cleanup)(void);
 void (*recover)(void);
};
#define PM_HIBERNATION_PREPARE 0x0001
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PM_POST_HIBERNATION 0x0002
#define PM_SUSPEND_PREPARE 0x0003
#define PM_POST_SUSPEND 0x0004
#define PM_RESTORE_PREPARE 0x0005
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PM_POST_RESTORE 0x0006
#define pm_notifier(fn, pri) do { (void)(fn); } while (0)
#define pm_print_times_enabled (false)
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
