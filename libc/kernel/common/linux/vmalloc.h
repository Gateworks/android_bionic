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
#ifndef _LINUX_VMALLOC_H
#define _LINUX_VMALLOC_H
#include <linux/spinlock.h>
#include <linux/init.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/list.h>
#include <asm/page.h>
struct vm_area_struct;
#define VM_IOREMAP 0x00000001
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define VM_ALLOC 0x00000002
#define VM_MAP 0x00000004
#define VM_USERMAP 0x00000008
#define VM_VPAGES 0x00000010
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define VM_UNLIST 0x00000020
#ifndef IOREMAP_MAX_ORDER
#define IOREMAP_MAX_ORDER (7 + PAGE_SHIFT)
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct vm_struct {
 struct vm_struct *next;
 void *addr;
 unsigned long size;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long flags;
 struct page **pages;
 unsigned int nr_pages;
 phys_addr_t phys_addr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 const void *caller;
};
struct vmap_area {
 unsigned long va_start;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long va_end;
 unsigned long flags;
 struct vm_struct *vm;
 struct rcu_head rcu_head;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct vmalloc_info {
 unsigned long used;
 unsigned long largest_chunk;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define VMALLOC_TOTAL 0UL
#define get_vmalloc_info(vmi)  do {   (vmi)->used = 0;   (vmi)->largest_chunk = 0;  } while (0)
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
