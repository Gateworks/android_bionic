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
#ifndef PAGEBLOCK_FLAGS_H
#define PAGEBLOCK_FLAGS_H
#include <linux/types.h>
enum pageblock_bits {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 PB_migrate,
 PB_migrate_end = PB_migrate + 3 - 1,
 NR_PAGEBLOCK_BITS
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define pageblock_order (MAX_ORDER-1)
#define pageblock_nr_pages (1UL << pageblock_order)
struct page;
#define get_pageblock_flags(page)   get_pageblock_flags_group(page, 0, PB_migrate_end)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define set_pageblock_flags(page, flags)   set_pageblock_flags_group(page, flags,   0, PB_migrate_end)
#endif
