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
#ifndef _LINUX_VMSTAT_H
#define _LINUX_VMSTAT_H
#include <linux/types.h>
#include <linux/percpu.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/mm.h>
#include <linux/mmzone.h>
#include <linux/vm_event_item.h>
#include <linux/atomic.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define count_vm_numa_event(x) do {} while (0)
#define count_vm_numa_events(x, y) do { (void)(y); } while (0)
#define __count_zone_vm_events(item, zone, delta)   __count_vm_events(item##_NORMAL - ZONE_NORMAL +   zone_idx(zone), delta)
#define node_page_state(node, item) global_page_state(item)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define zone_statistics(_zl, _z, gfp) do { } while (0)
#define add_zone_page_state(__z, __i, __d) mod_zone_page_state(__z, __i, __d)
#define sub_zone_page_state(__z, __i, __d) mod_zone_page_state(__z, __i, -(__d))
#define inc_zone_page_state __inc_zone_page_state
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define dec_zone_page_state __dec_zone_page_state
#define mod_zone_page_state __mod_zone_page_state
#define set_pgdat_percpu_threshold(pgdat, callback) { }
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
