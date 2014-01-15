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
#ifndef _LINUX_CPUFREQ_H
#define _LINUX_CPUFREQ_H
#include <asm/cputime.h>
#include <linux/mutex.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/notifier.h>
#include <linux/threads.h>
#include <linux/kobject.h>
#include <linux/sysfs.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/completion.h>
#include <linux/workqueue.h>
#include <linux/cpumask.h>
#include <asm/div64.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CPUFREQ_NAME_LEN 16
#define CPUFREQ_NAME_PLEN (CPUFREQ_NAME_LEN + 1)
#define CPUFREQ_TRANSITION_NOTIFIER (0)
#define CPUFREQ_POLICY_NOTIFIER (1)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CPUFREQ_POLICY_POWERSAVE (1)
#define CPUFREQ_POLICY_PERFORMANCE (2)
struct cpufreq_governor;
#define CPUFREQ_ETERNAL (-1)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct cpufreq_cpuinfo {
 unsigned int max_freq;
 unsigned int min_freq;
 unsigned int transition_latency;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct cpufreq_real_policy {
 unsigned int min;
 unsigned int max;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int policy;
 struct cpufreq_governor *governor;
};
struct cpufreq_policy {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 cpumask_var_t cpus;
 cpumask_var_t related_cpus;
 unsigned int shared_type;
 unsigned int cpu;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int last_cpu;
 struct cpufreq_cpuinfo cpuinfo;
 unsigned int min;
 unsigned int max;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int cur;
 unsigned int policy;
 struct cpufreq_governor *governor;
 void *governor_data;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct cpufreq_real_policy user_policy;
 struct kobject kobj;
 struct completion kobj_unregister;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CPUFREQ_ADJUST (0)
#define CPUFREQ_INCOMPATIBLE (1)
#define CPUFREQ_NOTIFY (2)
#define CPUFREQ_START (3)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CPUFREQ_UPDATE_POLICY_CPU (4)
#define CPUFREQ_SHARED_TYPE_NONE (0)
#define CPUFREQ_SHARED_TYPE_HW (1)
#define CPUFREQ_SHARED_TYPE_ALL (2)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CPUFREQ_SHARED_TYPE_ANY (3)
#define CPUFREQ_PRECHANGE (0)
#define CPUFREQ_POSTCHANGE (1)
#define CPUFREQ_RESUMECHANGE (8)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CPUFREQ_SUSPENDCHANGE (9)
struct cpufreq_freqs {
 unsigned int cpu;
 unsigned int old;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int new;
 u8 flags;
};
#if BITS_PER_LONG == 32
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#elif BITS_PER_LONG == 64
#endif
#define CPUFREQ_GOV_START 1
#define CPUFREQ_GOV_STOP 2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CPUFREQ_GOV_LIMITS 3
#define CPUFREQ_GOV_POLICY_INIT 4
#define CPUFREQ_GOV_POLICY_EXIT 5
struct cpufreq_governor {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 char name[CPUFREQ_NAME_LEN];
 int initialized;
 int (*governor) (struct cpufreq_policy *policy,
 unsigned int event);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 ssize_t (*show_setspeed) (struct cpufreq_policy *policy,
 char *buf);
 int (*store_setspeed) (struct cpufreq_policy *policy,
 unsigned int freq);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int max_transition_latency;
 struct module *owner;
};
#define CPUFREQ_RELATION_L 0
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CPUFREQ_RELATION_H 1
struct freq_attr;
struct cpufreq_driver {
 struct module *owner;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 char name[CPUFREQ_NAME_LEN];
 u8 flags;
 bool have_governor_per_policy;
 int (*init) (struct cpufreq_policy *policy);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*verify) (struct cpufreq_policy *policy);
 int (*setpolicy) (struct cpufreq_policy *policy);
 int (*target) (struct cpufreq_policy *policy,
 unsigned int target_freq,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int relation);
 unsigned int (*get) (unsigned int cpu);
 unsigned int (*getavg) (struct cpufreq_policy *policy,
 unsigned int cpu);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*bios_limit) (int cpu, unsigned int *limit);
 int (*exit) (struct cpufreq_policy *policy);
 int (*suspend) (struct cpufreq_policy *policy);
 int (*resume) (struct cpufreq_policy *policy);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct freq_attr **attr;
};
#define CPUFREQ_STICKY 0x01
#define CPUFREQ_CONST_LOOPS 0x02
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CPUFREQ_PM_NO_WARN 0x04
struct freq_attr {
 struct attribute attr;
 ssize_t (*show)(struct cpufreq_policy *, char *);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 ssize_t (*store)(struct cpufreq_policy *, const char *, size_t count);
};
#define cpufreq_freq_attr_ro(_name)  static struct freq_attr _name =  __ATTR(_name, 0444, show_##_name, NULL)
#define cpufreq_freq_attr_ro_perm(_name, _perm)  static struct freq_attr _name =  __ATTR(_name, _perm, show_##_name, NULL)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define cpufreq_freq_attr_rw(_name)  static struct freq_attr _name =  __ATTR(_name, 0644, show_##_name, store_##_name)
struct global_attr {
 struct attribute attr;
 ssize_t (*show)(struct kobject *kobj,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct attribute *attr, char *buf);
 ssize_t (*store)(struct kobject *a, struct attribute *b,
 const char *c, size_t count);
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define define_one_global_ro(_name)  static struct global_attr _name =  __ATTR(_name, 0444, show_##_name, NULL)
#define define_one_global_rw(_name)  static struct global_attr _name =  __ATTR(_name, 0644, show_##_name, store_##_name)
struct cpufreq_policy *cpufreq_cpu_get(unsigned int cpu);
#define CPUFREQ_ENTRY_INVALID ~0
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CPUFREQ_TABLE_END ~1
struct cpufreq_frequency_table {
 unsigned int index;
 unsigned int frequency;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct cpufreq_frequency_table *cpufreq_frequency_get_table(unsigned int cpu);
#endif
