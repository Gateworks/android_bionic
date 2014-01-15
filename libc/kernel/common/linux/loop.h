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
#ifndef _LINUX_LOOP_H
#define _LINUX_LOOP_H
#include <linux/bio.h>
#include <linux/blkdev.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/spinlock.h>
#include <linux/mutex.h>
#include <uapi/linux/loop.h>
enum {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 Lo_unbound,
 Lo_bound,
 Lo_rundown,
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct loop_func_table;
struct loop_device {
 int lo_number;
 int lo_refcnt;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 loff_t lo_offset;
 loff_t lo_sizelimit;
 int lo_flags;
 int (*transfer)(struct loop_device *, int cmd,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct page *raw_page, unsigned raw_off,
 struct page *loop_page, unsigned loop_off,
 int size, sector_t real_block);
 char lo_file_name[LO_NAME_SIZE];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 char lo_crypt_name[LO_NAME_SIZE];
 char lo_encrypt_key[LO_KEY_SIZE];
 int lo_encrypt_key_size;
 struct loop_func_table *lo_encryption;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 lo_init[2];
 kuid_t lo_key_owner;
 int (*ioctl)(struct loop_device *, int cmd,
 unsigned long arg);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct file * lo_backing_file;
 struct block_device *lo_device;
 unsigned lo_blocksize;
 void *key_data;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 gfp_t old_gfp_mask;
 spinlock_t lo_lock;
 unsigned int lo_bio_count;
 int lo_state;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct mutex lo_ctl_mutex;
 struct task_struct *lo_thread;
 wait_queue_head_t lo_event;
 wait_queue_head_t lo_req_wait;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct request_queue *lo_queue;
 struct gendisk *lo_disk;
};
struct loop_func_table {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int number;
 int (*transfer)(struct loop_device *lo, int cmd,
 struct page *raw_page, unsigned raw_off,
 struct page *loop_page, unsigned loop_off,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int size, sector_t real_block);
 int (*init)(struct loop_device *, const struct loop_info64 *);
 int (*release)(struct loop_device *);
 int (*ioctl)(struct loop_device *, int cmd, unsigned long arg);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct module *owner;
};
#endif
