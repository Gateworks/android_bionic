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
#ifndef VM_EVENT_ITEM_H_INCLUDED
#define VM_EVENT_ITEM_H_INCLUDED
#define DMA_ZONE(xx)
#define DMA32_ZONE(xx)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define HIGHMEM_ZONE(xx)
#define FOR_ALL_ZONES(xx) DMA_ZONE(xx) DMA32_ZONE(xx) xx##_NORMAL HIGHMEM_ZONE(xx) , xx##_MOVABLE
enum vm_event_item { PGPGIN, PGPGOUT, PSWPIN, PSWPOUT,
 FOR_ALL_ZONES(PGALLOC),
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 PGFREE, PGACTIVATE, PGDEACTIVATE,
 PGFAULT, PGMAJFAULT,
 FOR_ALL_ZONES(PGREFILL),
 FOR_ALL_ZONES(PGSTEAL_KSWAPD),
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 FOR_ALL_ZONES(PGSTEAL_DIRECT),
 FOR_ALL_ZONES(PGSCAN_KSWAPD),
 FOR_ALL_ZONES(PGSCAN_DIRECT),
 PGSCAN_DIRECT_THROTTLE,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 PGINODESTEAL, SLABS_SCANNED, KSWAPD_INODESTEAL,
 KSWAPD_LOW_WMARK_HIT_QUICKLY, KSWAPD_HIGH_WMARK_HIT_QUICKLY,
 PAGEOUTRUN, ALLOCSTALL, PGROTATED,
 UNEVICTABLE_PGCULLED,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 UNEVICTABLE_PGSCANNED,
 UNEVICTABLE_PGRESCUED,
 UNEVICTABLE_PGMLOCKED,
 UNEVICTABLE_PGMUNLOCKED,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 UNEVICTABLE_PGCLEARED,
 UNEVICTABLE_PGSTRANDED,
 NR_VM_EVENT_ITEMS
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
