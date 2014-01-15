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
#ifndef _LINUX_DEVICE_MAPPER_H
#define _LINUX_DEVICE_MAPPER_H
#include <linux/bio.h>
#include <linux/blkdev.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/ratelimit.h>
struct dm_dev;
struct dm_target;
struct dm_table;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct mapped_device;
struct bio_vec;
typedef enum { STATUSTYPE_INFO, STATUSTYPE_TABLE } status_type_t;
union map_info {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void *ptr;
 unsigned long long ll;
};
typedef int (*dm_ctr_fn) (struct dm_target *target,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int argc, char **argv);
typedef void (*dm_dtr_fn) (struct dm_target *ti);
typedef int (*dm_map_fn) (struct dm_target *ti, struct bio *bio);
typedef int (*dm_map_request_fn) (struct dm_target *ti, struct request *clone,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 union map_info *map_context);
typedef int (*dm_endio_fn) (struct dm_target *ti,
 struct bio *bio, int error);
typedef int (*dm_request_endio_fn) (struct dm_target *ti,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct request *clone, int error,
 union map_info *map_context);
typedef void (*dm_presuspend_fn) (struct dm_target *ti);
typedef void (*dm_postsuspend_fn) (struct dm_target *ti);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
typedef int (*dm_preresume_fn) (struct dm_target *ti);
typedef void (*dm_resume_fn) (struct dm_target *ti);
typedef void (*dm_status_fn) (struct dm_target *ti, status_type_t status_type,
 unsigned status_flags, char *result, unsigned maxlen);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
typedef int (*dm_message_fn) (struct dm_target *ti, unsigned argc, char **argv);
typedef int (*dm_ioctl_fn) (struct dm_target *ti, unsigned int cmd,
 unsigned long arg);
typedef int (*dm_merge_fn) (struct dm_target *ti, struct bvec_merge_data *bvm,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct bio_vec *biovec, int max_size);
typedef int (*iterate_devices_callout_fn) (struct dm_target *ti,
 struct dm_dev *dev,
 sector_t start, sector_t len,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void *data);
typedef int (*dm_iterate_devices_fn) (struct dm_target *ti,
 iterate_devices_callout_fn fn,
 void *data);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
typedef void (*dm_io_hints_fn) (struct dm_target *ti,
 struct queue_limits *limits);
typedef int (*dm_busy_fn) (struct dm_target *ti);
struct dm_dev {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct block_device *bdev;
 fmode_t mode;
 char name[16];
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct target_type {
 uint64_t features;
 const char *name;
 struct module *module;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned version[3];
 dm_ctr_fn ctr;
 dm_dtr_fn dtr;
 dm_map_fn map;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 dm_map_request_fn map_rq;
 dm_endio_fn end_io;
 dm_request_endio_fn rq_end_io;
 dm_presuspend_fn presuspend;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 dm_postsuspend_fn postsuspend;
 dm_preresume_fn preresume;
 dm_resume_fn resume;
 dm_status_fn status;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 dm_message_fn message;
 dm_ioctl_fn ioctl;
 dm_merge_fn merge;
 dm_busy_fn busy;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 dm_iterate_devices_fn iterate_devices;
 dm_io_hints_fn io_hints;
};
#define DM_TARGET_SINGLETON 0x00000001
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define dm_target_needs_singleton(type) ((type)->features & DM_TARGET_SINGLETON)
#define DM_TARGET_ALWAYS_WRITEABLE 0x00000002
#define dm_target_always_writeable(type)   ((type)->features & DM_TARGET_ALWAYS_WRITEABLE)
#define DM_TARGET_IMMUTABLE 0x00000004
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define dm_target_is_immutable(type) ((type)->features & DM_TARGET_IMMUTABLE)
typedef unsigned (*dm_num_write_bios_fn) (struct dm_target *ti, struct bio *bio);
struct dm_target {
 struct dm_table *table;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct target_type *type;
 sector_t begin;
 sector_t len;
 uint32_t max_io_len;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned num_flush_bios;
 unsigned num_discard_bios;
 unsigned num_write_same_bios;
 unsigned per_bio_data_size;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 dm_num_write_bios_fn num_write_bios;
 void *private;
 char *error;
 bool flush_supported:1;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 bool discards_supported:1;
 bool split_discard_bios:1;
 bool discard_zeroes_data_unsupported:1;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct dm_target_callbacks {
 int (*congested_fn) (struct dm_target_callbacks *, int);
};
struct dm_target_io {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct dm_io *io;
 struct dm_target *ti;
 union map_info info;
 unsigned target_bio_nr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct bio clone;
};
struct dm_arg_set {
 unsigned argc;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 char **argv;
};
struct dm_arg {
 unsigned min;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned max;
 char *error;
};
#define DM_ANY_MINOR (-1)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct mapped_device *dm_get_md(dev_t dev);
struct gendisk *dm_disk(struct mapped_device *md);
union map_info *dm_get_mapinfo(struct bio *bio);
union map_info *dm_get_rq_mapinfo(struct request *rq);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct queue_limits *dm_get_queue_limits(struct mapped_device *md);
struct dm_table *dm_get_live_table(struct mapped_device *md);
struct mapped_device *dm_table_get_md(struct dm_table *t);
struct dm_table *dm_swap_table(struct mapped_device *md,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct dm_table *t);
#define DM_NAME "device-mapper"
#define dm_ratelimit() 0
#define DMCRIT(f, arg...)   printk(KERN_CRIT DM_NAME ": " DM_MSG_PREFIX ": " f "\n", ## arg)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DMERR(f, arg...)   printk(KERN_ERR DM_NAME ": " DM_MSG_PREFIX ": " f "\n", ## arg)
#define DMERR_LIMIT(f, arg...)   do {   if (dm_ratelimit())   printk(KERN_ERR DM_NAME ": " DM_MSG_PREFIX ": "   f "\n", ## arg);   } while (0)
#define DMWARN(f, arg...)   printk(KERN_WARNING DM_NAME ": " DM_MSG_PREFIX ": " f "\n", ## arg)
#define DMWARN_LIMIT(f, arg...)   do {   if (dm_ratelimit())   printk(KERN_WARNING DM_NAME ": " DM_MSG_PREFIX ": "   f "\n", ## arg);   } while (0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DMINFO(f, arg...)   printk(KERN_INFO DM_NAME ": " DM_MSG_PREFIX ": " f "\n", ## arg)
#define DMINFO_LIMIT(f, arg...)   do {   if (dm_ratelimit())   printk(KERN_INFO DM_NAME ": " DM_MSG_PREFIX ": " f   "\n", ## arg);   } while (0)
#define DMDEBUG(f, arg...) do {} while (0)
#define DMDEBUG_LIMIT(f, arg...) do {} while (0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DMEMIT(x...) sz += ((sz >= maxlen) ?   0 : scnprintf(result + sz, maxlen - sz, x))
#define SECTOR_SHIFT 9
#define DM_ENDIO_INCOMPLETE 1
#define DM_ENDIO_REQUEUE 2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DM_MAPIO_SUBMITTED 0
#define DM_MAPIO_REMAPPED 1
#define DM_MAPIO_REQUEUE DM_ENDIO_REQUEUE
#define dm_div_up(n, sz) (((n) + (sz) - 1) / (sz))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define dm_sector_div_up(n, sz) (  {   sector_t _r = ((n) + (sz) - 1);   sector_div(_r, (sz));   _r;  }  )
#define dm_round_up(n, sz) (dm_div_up((n), (sz)) * (sz))
#define dm_array_too_big(fixed, obj, num)   ((num) > (UINT_MAX - (fixed)) / (obj))
#define dm_target_offset(ti, sector) ((sector) - (ti)->begin)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
