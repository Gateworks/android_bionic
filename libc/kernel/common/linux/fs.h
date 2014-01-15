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
#ifndef _LINUX_FS_H
#define _LINUX_FS_H
#include <linux/linkage.h>
#include <linux/wait.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/kdev_t.h>
#include <linux/dcache.h>
#include <linux/path.h>
#include <linux/stat.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/cache.h>
#include <linux/list.h>
#include <linux/radix-tree.h>
#include <linux/init.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/pid.h>
#include <linux/bug.h>
#include <linux/mutex.h>
#include <linux/capability.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/semaphore.h>
#include <linux/fiemap.h>
#include <linux/rculist_bl.h>
#include <linux/atomic.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/shrinker.h>
#include <linux/migrate_mode.h>
#include <linux/uidgid.h>
#include <linux/lockdep.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/percpu-rwsem.h>
#include <linux/blk_types.h>
#include <asm/byteorder.h>
#include <uapi/linux/fs.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct export_operations;
struct hd_geometry;
struct iovec;
struct nameidata;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct kiocb;
struct kobject;
struct pipe_inode_info;
struct poll_table_struct;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct kstatfs;
struct vm_area_struct;
struct vfsmount;
struct cred;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct swap_info_struct;
struct seq_file;
struct buffer_head;
typedef unsigned long long sector_t;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MAY_EXEC 0x00000001
#define MAY_WRITE 0x00000002
#define MAY_READ 0x00000004
#define MAY_APPEND 0x00000008
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MAY_ACCESS 0x00000010
#define MAY_OPEN 0x00000020
#define MAY_CHDIR 0x00000040
#define MAY_NOT_BLOCK 0x00000080
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define FMODE_READ ((__force fmode_t)0x1)
#define FMODE_WRITE ((__force fmode_t)0x2)
#define FMODE_LSEEK ((__force fmode_t)0x4)
#define FMODE_PREAD ((__force fmode_t)0x8)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define FMODE_PWRITE ((__force fmode_t)0x10)
#define FMODE_EXEC ((__force fmode_t)0x20)
#define FMODE_NDELAY ((__force fmode_t)0x40)
#define FMODE_EXCL ((__force fmode_t)0x80)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define FMODE_WRITE_IOCTL ((__force fmode_t)0x100)
#define FMODE_32BITHASH ((__force fmode_t)0x200)
#define FMODE_64BITHASH ((__force fmode_t)0x400)
#define FMODE_NOCMTIME ((__force fmode_t)0x800)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define FMODE_RANDOM ((__force fmode_t)0x1000)
#define FMODE_UNSIGNED_OFFSET ((__force fmode_t)0x2000)
#define FMODE_PATH ((__force fmode_t)0x4000)
#define FMODE_NONOTIFY ((__force fmode_t)0x1000000)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CHECK_IOVEC_ONLY -1
#define RW_MASK REQ_WRITE
#define RWA_MASK REQ_RAHEAD
#define READ 0
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WRITE RW_MASK
#define READA RWA_MASK
#define KERNEL_READ (READ|REQ_KERNEL)
#define KERNEL_WRITE (WRITE|REQ_KERNEL)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define READ_SYNC (READ | REQ_SYNC)
#define WRITE_SYNC (WRITE | REQ_SYNC | REQ_NOIDLE)
#define WRITE_ODIRECT (WRITE | REQ_SYNC)
#define WRITE_FLUSH (WRITE | REQ_SYNC | REQ_NOIDLE | REQ_FLUSH)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WRITE_FUA (WRITE | REQ_SYNC | REQ_NOIDLE | REQ_FUA)
#define WRITE_FLUSH_FUA (WRITE | REQ_SYNC | REQ_NOIDLE | REQ_FLUSH | REQ_FUA)
#define ATTR_MODE (1 << 0)
#define ATTR_UID (1 << 1)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ATTR_GID (1 << 2)
#define ATTR_SIZE (1 << 3)
#define ATTR_ATIME (1 << 4)
#define ATTR_MTIME (1 << 5)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ATTR_CTIME (1 << 6)
#define ATTR_ATIME_SET (1 << 7)
#define ATTR_MTIME_SET (1 << 8)
#define ATTR_FORCE (1 << 9)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ATTR_ATTR_FLAG (1 << 10)
#define ATTR_KILL_SUID (1 << 11)
#define ATTR_KILL_SGID (1 << 12)
#define ATTR_FILE (1 << 13)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ATTR_KILL_PRIV (1 << 14)
#define ATTR_OPEN (1 << 15)
#define ATTR_TIMES_SET (1 << 16)
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
