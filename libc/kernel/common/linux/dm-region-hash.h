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
#ifndef DM_REGION_HASH_H
#define DM_REGION_HASH_H
#include <linux/dm-dirty-log.h>
struct dm_region_hash;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct dm_region;
enum dm_rh_region_states {
 DM_RH_CLEAN = 0x01,
 DM_RH_DIRTY = 0x02,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 DM_RH_NOSYNC = 0x04,
 DM_RH_RECOVERING = 0x08,
};
struct bio_list;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct dm_region_hash *dm_region_hash_create(
 void *context, void (*dispatch_bios)(void *context,
 struct bio_list *bios),
 void (*wakeup_workers)(void *context),
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void (*wakeup_all_recovery_waiters)(void *context),
 sector_t target_begin, unsigned max_recovery,
 struct dm_dirty_log *log, uint32_t region_size,
 region_t nr_regions);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct dm_dirty_log *dm_rh_dirty_log(struct dm_region_hash *rh);
struct dm_region *dm_rh_recovery_start(struct dm_region_hash *rh);
#endif
