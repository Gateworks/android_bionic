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
#ifndef __IDR_H__
#define __IDR_H__
#include <linux/types.h>
#include <linux/bitops.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/init.h>
#include <linux/rcupdate.h>
#define IDR_BITS 8
#define IDR_SIZE (1 << IDR_BITS)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define IDR_MASK ((1 << IDR_BITS)-1)
struct idr_layer {
 int prefix;
 DECLARE_BITMAP(bitmap, IDR_SIZE);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct idr_layer __rcu *ary[1<<IDR_BITS];
 int count;
 int layer;
 struct rcu_head rcu_head;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct idr {
 struct idr_layer __rcu *hint;
 struct idr_layer __rcu *top;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct idr_layer *id_free;
 int layers;
 int id_free_cnt;
 int cur;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 spinlock_t lock;
};
#define IDR_INIT(name)  {   .lock = __SPIN_LOCK_UNLOCKED(name.lock),  }
#define DEFINE_IDR(name) struct idr name = IDR_INIT(name)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define idr_for_each_entry(idp, entry, id)   for (id = 0; ((entry) = idr_get_next(idp, &(id))) != NULL; ++id)
#define IDA_CHUNK_SIZE 128
#define IDA_BITMAP_LONGS (IDA_CHUNK_SIZE / sizeof(long) - 1)
#define IDA_BITMAP_BITS (IDA_BITMAP_LONGS * sizeof(long) * 8)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct ida_bitmap {
 long nr_busy;
 unsigned long bitmap[IDA_BITMAP_LONGS];
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct ida {
 struct idr idr;
 struct ida_bitmap *free_bitmap;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define IDA_INIT(name) { .idr = IDR_INIT((name).idr), .free_bitmap = NULL, }
#define DEFINE_IDA(name) struct ida name = IDA_INIT(name)
#endif
