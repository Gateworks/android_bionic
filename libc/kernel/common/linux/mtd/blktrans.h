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
#ifndef __MTD_TRANS_H__
#define __MTD_TRANS_H__
#include <linux/mutex.h>
#include <linux/kref.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/sysfs.h>
#include <linux/workqueue.h>
struct hd_geometry;
struct mtd_info;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct mtd_blktrans_ops;
struct file;
struct inode;
struct mtd_blktrans_dev {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct mtd_blktrans_ops *tr;
 struct mtd_info *mtd;
 struct mutex lock;
 int devnum;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 bool bg_stop;
 unsigned long size;
 int readonly;
 int open;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct kref ref;
 struct gendisk *disk;
 struct attribute_group *disk_attributes;
 spinlock_t queue_lock;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void *priv;
 fmode_t file_mode;
};
struct mtd_blktrans_ops {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 char *name;
 int major;
 int part_bits;
 int blksize;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int blkshift;
 int (*readsect)(struct mtd_blktrans_dev *dev,
 unsigned long block, char *buffer);
 int (*writesect)(struct mtd_blktrans_dev *dev,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long block, char *buffer);
 int (*discard)(struct mtd_blktrans_dev *dev,
 unsigned long block, unsigned nr_blocks);
 void (*background)(struct mtd_blktrans_dev *dev);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*getgeo)(struct mtd_blktrans_dev *dev, struct hd_geometry *geo);
 int (*flush)(struct mtd_blktrans_dev *dev);
 int (*open)(struct mtd_blktrans_dev *dev);
 void (*release)(struct mtd_blktrans_dev *dev);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void (*add_mtd)(struct mtd_blktrans_ops *tr, struct mtd_info *mtd);
 void (*remove_dev)(struct mtd_blktrans_dev *dev);
 struct module *owner;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
