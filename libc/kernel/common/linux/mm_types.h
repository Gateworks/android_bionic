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
#ifndef _LINUX_MM_TYPES_H
#define _LINUX_MM_TYPES_H
#include <linux/auxvec.h>
#include <linux/types.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/threads.h>
#include <linux/list.h>
#include <linux/spinlock.h>
#include <linux/rwsem.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/completion.h>
#include <linux/cpumask.h>
#include <linux/page-debug-flags.h>
#include <linux/uprobes.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/page-flags-layout.h>
#include <asm/page.h>
#include <asm/mmu.h>
#ifndef AT_VECTOR_SIZE_ARCH
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define AT_VECTOR_SIZE_ARCH 0
#endif
#define AT_VECTOR_SIZE (2*(AT_VECTOR_SIZE_ARCH + AT_VECTOR_SIZE_BASE + 1))
struct address_space;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define USE_SPLIT_PTLOCKS (NR_CPUS >= CONFIG_SPLIT_PTLOCK_CPUS)
struct page {
 unsigned long flags;
 struct address_space *mapping;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct {
 union {
 pgoff_t index;
 void *freelist;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 };
 union {
 unsigned counters;
 struct {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 union {
 atomic_t _mapcount;
 struct {
 unsigned inuse:16;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned objects:15;
 unsigned frozen:1;
 };
 int units;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 };
 atomic_t _count;
 };
 };
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 };
 union {
 struct {
 struct page *next;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 short int pages;
 short int pobjects;
 };
 struct slab *slab_page;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 };
 union {
#if USE_SPLIT_PTLOCKS
 spinlock_t ptl;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
 struct kmem_cache *slab_cache;
 struct page *first_page;
 };
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#ifdef WANT_PAGE_VIRTUAL
 void *virtual;
#endif
#ifdef LAST_NID_NOT_IN_PAGE_FLAGS
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int _last_nid;
#endif
}
;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct page_frag {
 struct page *page;
#if BITS_PER_LONG > 32 || PAGE_SIZE >= 65536
 __u32 offset;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 size;
#else
 __u16 offset;
 __u16 size;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
};
typedef unsigned long __nocast vm_flags_t;
struct vm_region {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 vm_flags_t vm_flags;
 unsigned long vm_start;
 unsigned long vm_end;
 unsigned long vm_top;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long vm_pgoff;
 struct file *vm_file;
 int vm_usage;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct vm_area_struct {
 unsigned long vm_start;
 unsigned long vm_end;
 struct vm_area_struct *vm_next, *vm_prev;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long rb_subtree_gap;
 struct mm_struct *vm_mm;
 pgprot_t vm_page_prot;
 unsigned long vm_flags;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 union {
 struct {
 unsigned long rb_subtree_last;
 } linear;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 const char __user *anon_name;
 } shared;
 struct anon_vma *anon_vma;
 const struct vm_operations_struct *vm_ops;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long vm_pgoff;
 struct file * vm_file;
 void * vm_private_data;
 struct vm_region *vm_region;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct core_thread {
 struct task_struct *task;
 struct core_thread *next;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct core_state {
 atomic_t nr_threads;
 struct core_thread dumper;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct completion startup;
};
enum {
 MM_FILEPAGES,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 MM_ANONPAGES,
 MM_SWAPENTS,
 NR_MM_COUNTERS
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#if USE_SPLIT_PTLOCKS && defined(CONFIG_MMU)
#define SPLIT_RSS_COUNTING
struct task_rss_stat {
 int events;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int count[NR_MM_COUNTERS];
};
#endif
struct mm_rss_stat {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 atomic_long_t count[NR_MM_COUNTERS];
};
struct mm_struct {
 struct vm_area_struct * mmap;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct vm_area_struct * mmap_cache;
 unsigned long mmap_base;
 unsigned long mmap_legacy_base;
 unsigned long task_size;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long cached_hole_size;
 unsigned long free_area_cache;
 unsigned long highest_vm_end;
 pgd_t * pgd;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 atomic_t mm_users;
 atomic_t mm_count;
 int map_count;
 spinlock_t page_table_lock;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct rw_semaphore mmap_sem;
 unsigned long hiwater_rss;
 unsigned long hiwater_vm;
 unsigned long total_vm;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long locked_vm;
 unsigned long pinned_vm;
 unsigned long shared_vm;
 unsigned long exec_vm;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long stack_vm;
 unsigned long def_flags;
 unsigned long nr_ptes;
 unsigned long start_code, end_code, start_data, end_data;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long start_brk, brk, start_stack;
 unsigned long arg_start, arg_end, env_start, env_end;
 unsigned long saved_auxv[AT_VECTOR_SIZE];
 struct mm_rss_stat rss_stat;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct linux_binfmt *binfmt;
 cpumask_var_t cpu_vm_mask_var;
 mm_context_t context;
 unsigned long flags;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct core_state *core_state;
 struct file *exe_file;
};
#define NUMA_PTE_SCAN_INIT -1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NUMA_PTE_SCAN_ACTIVE -2
#endif
