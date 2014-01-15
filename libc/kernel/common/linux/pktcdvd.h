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
#ifndef __PKTCDVD_H
#define __PKTCDVD_H
#include <linux/blkdev.h>
#include <linux/completion.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/cdrom.h>
#include <linux/kobject.h>
#include <linux/sysfs.h>
#include <linux/mempool.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <uapi/linux/pktcdvd.h>
#define PKT_WRITE_CONGESTION_ON 10000
#define PKT_WRITE_CONGESTION_OFF 9000
struct packet_settings
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
{
 __u32 size;
 __u8 fp;
 __u8 link_loss;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 write_type;
 __u8 track_mode;
 __u8 block_mode;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct packet_stats
{
 unsigned long pkt_started;
 unsigned long pkt_ended;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long secs_w;
 unsigned long secs_rg;
 unsigned long secs_r;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct packet_cdrw
{
 spinlock_t active_list_lock;
 struct task_struct *thread;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 atomic_t pending_bios;
};
#define HI_SPEED_SWITCH 512
struct packet_iosched
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
{
 atomic_t attention;
 int writing;
 spinlock_t lock;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct bio_list read_queue;
 struct bio_list write_queue;
 sector_t last_write;
 int successive_reads;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#if PAGE_SIZE % CD_FRAMESIZE != 0
#error "PAGE_SIZE must be a multiple of CD_FRAMESIZE"
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PACKET_MAX_SIZE 128
#define FRAMES_PER_PAGE (PAGE_SIZE / CD_FRAMESIZE)
#define PACKET_MAX_SECTORS (PACKET_MAX_SIZE * CD_FRAMESIZE >> 9)
enum packet_data_state {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 PACKET_IDLE_STATE,
 PACKET_WAITING_STATE,
 PACKET_READ_WAIT_STATE,
 PACKET_WRITE_WAIT_STATE,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 PACKET_RECOVERY_STATE,
 PACKET_FINISHED_STATE,
 PACKET_NUM_STATES
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct pktcdvd_device;
struct packet_data
{
 spinlock_t lock;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct bio_list orig_bios;
 int write_size;
 struct bio *w_bio;
 sector_t sector;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int frames;
 enum packet_data_state state;
 atomic_t run_sm;
 long sleep_time;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 atomic_t io_wait;
 atomic_t io_errors;
 struct bio *r_bios[PACKET_MAX_SIZE];
 struct page *pages[PACKET_MAX_SIZE / FRAMES_PER_PAGE];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int cache_valid;
 int id;
 struct pktcdvd_device *pd;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct pkt_rb_node {
 struct bio *bio;
};
struct packet_stacked_data
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
{
 struct bio *bio;
 struct pktcdvd_device *pd;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PSD_POOL_SIZE 64
struct pktcdvd_kobj
{
 struct kobject kobj;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct pktcdvd_device *pd;
};
#define to_pktcdvdkobj(_k)   ((struct pktcdvd_kobj*)container_of(_k,struct pktcdvd_kobj,kobj))
struct pktcdvd_device
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
{
 struct block_device *bdev;
 dev_t pkt_dev;
 char name[20];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct packet_settings settings;
 struct packet_stats stats;
 int refcnt;
 int write_speed;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int read_speed;
 unsigned long offset;
 __u8 mode_offset;
 __u8 type;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long flags;
 __u16 mmc3_profile;
 __u32 nwa;
 __u32 lra;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct packet_cdrw cdrw;
 wait_queue_head_t wqueue;
 spinlock_t lock;
 struct rb_root bio_queue;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int bio_queue_size;
 sector_t current_sector;
 atomic_t scan_queue;
 mempool_t *rb_pool;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct packet_iosched iosched;
 struct gendisk *disk;
 int write_congestion_off;
 int write_congestion_on;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct device *dev;
 struct pktcdvd_kobj *kobj_stat;
 struct pktcdvd_kobj *kobj_wqueue;
 struct dentry *dfs_d_root;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct dentry *dfs_f_info;
};
#endif
