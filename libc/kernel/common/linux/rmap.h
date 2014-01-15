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
#ifndef _LINUX_RMAP_H
#define _LINUX_RMAP_H
#include <linux/list.h>
#include <linux/slab.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/mm.h>
#include <linux/rwsem.h>
#include <linux/memcontrol.h>
struct anon_vma {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct anon_vma *root;
 struct rw_semaphore rwsem;
 atomic_t refcount;
 struct rb_root rb_root;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct anon_vma_chain {
 struct vm_area_struct *vma;
 struct anon_vma *anon_vma;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct rb_node rb;
 unsigned long rb_subtree_last;
};
enum ttu_flags {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 TTU_UNMAP = 0,
 TTU_MIGRATION = 1,
 TTU_MUNLOCK = 2,
 TTU_ACTION_MASK = 0xff,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 TTU_IGNORE_MLOCK = (1 << 8),
 TTU_IGNORE_ACCESS = (1 << 9),
 TTU_IGNORE_HWPOISON = (1 << 10),
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define anon_vma_init() do {} while (0)
#define anon_vma_prepare(vma) (0)
#define anon_vma_link(vma) do {} while (0)
#define try_to_unmap(page, refs) SWAP_FAIL
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SWAP_SUCCESS 0
#define SWAP_AGAIN 1
#define SWAP_FAIL 2
#define SWAP_MLOCK 3
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
