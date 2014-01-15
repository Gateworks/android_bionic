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
#ifndef _LINUX_POISON_H
#define _LINUX_POISON_H
#define POISON_POINTER_DELTA 0
#define LIST_POISON1 ((void *) 0x00100100 + POISON_POINTER_DELTA)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define LIST_POISON2 ((void *) 0x00200200 + POISON_POINTER_DELTA)
#define TIMER_ENTRY_STATIC ((void *) 0x74737461)
#define PAGE_POISON 0xaa
#define RED_INACTIVE 0x09F911029D74E35BULL
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define RED_ACTIVE 0xD84156C5635688C0ULL
#define SLUB_RED_INACTIVE 0xbb
#define SLUB_RED_ACTIVE 0xcc
#define POISON_INUSE 0x5a
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define POISON_FREE 0x6b
#define POISON_END 0xa5
#define POISON_FREE_INITMEM 0xcc
#define JBD_POISON_FREE 0x5b
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define JBD2_POISON_FREE 0x5c
#define POOL_POISON_FREED 0xa7
#define POOL_POISON_ALLOCATED 0xa9
#define ATM_POISON_FREE 0x12
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ATM_POISON 0xdeadbeef
#define NEIGHBOR_DEAD 0xdeadbeef
#define NETFILTER_LINK_POISON 0xdead57ac
#define MUTEX_DEBUG_INIT 0x11
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MUTEX_DEBUG_FREE 0x22
#define FLEX_ARRAY_FREE 0x6c
#define KEY_DESTROY 0xbd
#define OSS_POISON_FREE 0xAB
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
