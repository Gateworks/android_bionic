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
#ifndef _LINUX_CPU_H_
#define _LINUX_CPU_H_
#include <linux/node.h>
#include <linux/compiler.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/cpumask.h>
enum {
 CPU_PRI_SCHED_ACTIVE = INT_MAX,
 CPU_PRI_CPUSET_ACTIVE = INT_MAX - 1,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 CPU_PRI_SCHED_INACTIVE = INT_MIN + 1,
 CPU_PRI_CPUSET_INACTIVE = INT_MIN,
 CPU_PRI_PERF = 20,
 CPU_PRI_MIGRATION = 10,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 CPU_PRI_WORKQUEUE_UP = 5,
 CPU_PRI_WORKQUEUE_DOWN = -5,
};
#define CPU_ONLINE 0x0002
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CPU_UP_PREPARE 0x0003
#define CPU_UP_CANCELED 0x0004
#define CPU_DOWN_PREPARE 0x0005
#define CPU_DOWN_FAILED 0x0006
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CPU_DEAD 0x0007
#define CPU_DYING 0x0008
#define CPU_POST_DEAD 0x0009
#define CPU_STARTING 0x000A
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CPU_TASKS_FROZEN 0x0010
#define CPU_ONLINE_FROZEN (CPU_ONLINE | CPU_TASKS_FROZEN)
#define CPU_UP_PREPARE_FROZEN (CPU_UP_PREPARE | CPU_TASKS_FROZEN)
#define CPU_UP_CANCELED_FROZEN (CPU_UP_CANCELED | CPU_TASKS_FROZEN)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CPU_DOWN_PREPARE_FROZEN (CPU_DOWN_PREPARE | CPU_TASKS_FROZEN)
#define CPU_DOWN_FAILED_FROZEN (CPU_DOWN_FAILED | CPU_TASKS_FROZEN)
#define CPU_DEAD_FROZEN (CPU_DEAD | CPU_TASKS_FROZEN)
#define CPU_DYING_FROZEN (CPU_DYING | CPU_TASKS_FROZEN)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CPU_STARTING_FROZEN (CPU_STARTING | CPU_TASKS_FROZEN)
#define cpu_notifier(fn, pri) do { (void)(fn); } while (0)
#define get_online_cpus() do { } while (0)
#define put_online_cpus() do { } while (0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define cpu_hotplug_disable() do { } while (0)
#define cpu_hotplug_enable() do { } while (0)
#define hotcpu_notifier(fn, pri) do { (void)(fn); } while (0)
#define register_hotcpu_notifier(nb) ({ (void)(nb); 0; })
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define unregister_hotcpu_notifier(nb) ({ (void)(nb); })
enum cpuhp_state {
 CPUHP_OFFLINE,
 CPUHP_ONLINE,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define IDLE_START 1
#define IDLE_END 2
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
