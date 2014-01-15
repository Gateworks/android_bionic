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
#ifndef _LINUX_MEMORY_H_
#define _LINUX_MEMORY_H_
#include <linux/node.h>
#include <linux/compiler.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/mutex.h>
#include <linux/notifier.h>
#define MIN_MEMORY_BLOCK_SIZE (1UL << SECTION_SIZE_BITS)
struct memory_block {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long start_section_nr;
 unsigned long end_section_nr;
 unsigned long state;
 int section_count;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct mutex state_mutex;
 int phys_device;
 void *hw;
 int (*phys_callback)(struct memory_block *);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct device dev;
};
#define MEM_ONLINE (1<<0)
#define MEM_GOING_OFFLINE (1<<1)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MEM_OFFLINE (1<<2)
#define MEM_GOING_ONLINE (1<<3)
#define MEM_CANCEL_ONLINE (1<<4)
#define MEM_CANCEL_OFFLINE (1<<5)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct memory_notify {
 unsigned long start_pfn;
 unsigned long nr_pages;
 int status_change_nid_normal;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int status_change_nid_high;
 int status_change_nid;
};
#define MEM_ISOLATE_COUNT (1<<0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct memory_isolate_notify {
 unsigned long start_pfn;
 unsigned int nr_pages;
 unsigned int pages_found;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct notifier_block;
struct mem_section;
#define SLAB_CALLBACK_PRI 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define IPC_CALLBACK_PRI 10
#define hotplug_memory_notifier(fn, pri) ({ 0; })
#define register_hotmemory_notifier(nb) ({ (void)(nb); 0; })
#define unregister_hotmemory_notifier(nb) ({ (void)(nb); })
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct memory_accessor {
 ssize_t (*read)(struct memory_accessor *, char *buf, off_t offset,
 size_t count);
 ssize_t (*write)(struct memory_accessor *, const char *buf,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 off_t offset, size_t count);
};
#endif
