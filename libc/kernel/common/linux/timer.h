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
#ifndef _LINUX_TIMER_H
#define _LINUX_TIMER_H
#include <linux/list.h>
#include <linux/ktime.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/stddef.h>
#include <linux/debugobjects.h>
#include <linux/stringify.h>
struct tvec_base;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct timer_list {
 unsigned long expires;
 struct tvec_base *base;
 void (*function)(unsigned long);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long data;
 int slack;
};
#define __TIMER_LOCKDEP_MAP_INITIALIZER(_kn)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define TIMER_DEFERRABLE 0x1LU
#define TIMER_IRQSAFE 0x2LU
#define TIMER_FLAG_MASK 0x3LU
#define __TIMER_INITIALIZER(_function, _expires, _data, _flags) {   .entry = { .prev = TIMER_ENTRY_STATIC },   .function = (_function),   .expires = (_expires),   .data = (_data),   .base = (void *)((unsigned long)&boot_tvec_bases + (_flags)),   .slack = -1,   __TIMER_LOCKDEP_MAP_INITIALIZER(   __FILE__ ":" __stringify(__LINE__))   }
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define TIMER_INITIALIZER(_function, _expires, _data)   __TIMER_INITIALIZER((_function), (_expires), (_data), 0)
#define TIMER_DEFERRED_INITIALIZER(_function, _expires, _data)   __TIMER_INITIALIZER((_function), (_expires), (_data), TIMER_DEFERRABLE)
#define DEFINE_TIMER(_name, _function, _expires, _data)   struct timer_list _name =   TIMER_INITIALIZER(_function, _expires, _data)
#define __init_timer(_timer, _flags)   init_timer_key((_timer), (_flags), NULL, NULL)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __init_timer_on_stack(_timer, _flags)   init_timer_on_stack_key((_timer), (_flags), NULL, NULL)
#define init_timer(timer)   __init_timer((timer), 0)
#define init_timer_deferrable(timer)   __init_timer((timer), TIMER_DEFERRABLE)
#define init_timer_on_stack(timer)   __init_timer_on_stack((timer), 0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __setup_timer(_timer, _fn, _data, _flags)   do {   __init_timer((_timer), (_flags));   (_timer)->function = (_fn);   (_timer)->data = (_data);   } while (0)
#define __setup_timer_on_stack(_timer, _fn, _data, _flags)   do {   __init_timer_on_stack((_timer), (_flags));   (_timer)->function = (_fn);   (_timer)->data = (_data);   } while (0)
#define setup_timer(timer, fn, data)   __setup_timer((timer), (fn), (data), 0)
#define setup_timer_on_stack(timer, fn, data)   __setup_timer_on_stack((timer), (fn), (data), 0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define setup_deferrable_timer_on_stack(timer, fn, data)   __setup_timer_on_stack((timer), (fn), (data), TIMER_DEFERRABLE)
#define TIMER_NOT_PINNED 0
#define TIMER_PINNED 1
#define NEXT_TIMER_MAX_DELTA ((1UL << 30) - 1)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define del_timer_sync(t) del_timer(t)
#define del_singleshot_timer_sync(t) del_timer_sync(t)
struct hrtimer;
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
