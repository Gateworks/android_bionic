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
#ifndef _LINUX_NFS_XDR_H
#define _LINUX_NFS_XDR_H
#include <linux/nfsacl.h>
#include <linux/sunrpc/gss_api.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NFS_MAX_FILE_IO_SIZE (1048576U)
#define NFS_DEF_FILE_IO_SIZE (4096U)
#define NFS_MIN_FILE_IO_SIZE (1024U)
struct nfs4_string {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int len;
 char *data;
};
struct nfs_fsid {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint64_t major;
 uint64_t minor;
};
struct nfs4_threshold {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 bm;
 __u32 l_type;
 __u64 rd_sz;
 __u64 wr_sz;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u64 rd_io_sz;
 __u64 wr_io_sz;
};
struct nfs_fattr {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int valid;
 umode_t mode;
 __u32 nlink;
 kuid_t uid;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 kgid_t gid;
 dev_t rdev;
 __u64 size;
 union {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct {
 __u32 blocksize;
 __u32 blocks;
 } nfs2;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct {
 __u64 used;
 } nfs3;
 } du;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct nfs_fsid fsid;
 __u64 fileid;
 __u64 mounted_on_fileid;
 struct timespec atime;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct timespec mtime;
 struct timespec ctime;
 __u64 change_attr;
 __u64 pre_change_attr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u64 pre_size;
 struct timespec pre_mtime;
 struct timespec pre_ctime;
 unsigned long time_start;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long gencount;
 struct nfs4_string *owner_name;
 struct nfs4_string *group_name;
 struct nfs4_threshold *mdsthreshold;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define NFS_ATTR_FATTR_TYPE (1U << 0)
#define NFS_ATTR_FATTR_MODE (1U << 1)
#define NFS_ATTR_FATTR_NLINK (1U << 2)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NFS_ATTR_FATTR_OWNER (1U << 3)
#define NFS_ATTR_FATTR_GROUP (1U << 4)
#define NFS_ATTR_FATTR_RDEV (1U << 5)
#define NFS_ATTR_FATTR_SIZE (1U << 6)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NFS_ATTR_FATTR_PRESIZE (1U << 7)
#define NFS_ATTR_FATTR_BLOCKS_USED (1U << 8)
#define NFS_ATTR_FATTR_SPACE_USED (1U << 9)
#define NFS_ATTR_FATTR_FSID (1U << 10)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NFS_ATTR_FATTR_FILEID (1U << 11)
#define NFS_ATTR_FATTR_ATIME (1U << 12)
#define NFS_ATTR_FATTR_MTIME (1U << 13)
#define NFS_ATTR_FATTR_CTIME (1U << 14)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NFS_ATTR_FATTR_PREMTIME (1U << 15)
#define NFS_ATTR_FATTR_PRECTIME (1U << 16)
#define NFS_ATTR_FATTR_CHANGE (1U << 17)
#define NFS_ATTR_FATTR_PRECHANGE (1U << 18)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NFS_ATTR_FATTR_V4_LOCATIONS (1U << 19)
#define NFS_ATTR_FATTR_V4_REFERRAL (1U << 20)
#define NFS_ATTR_FATTR_MOUNTPOINT (1U << 21)
#define NFS_ATTR_FATTR_MOUNTED_ON_FILEID (1U << 22)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NFS_ATTR_FATTR_OWNER_NAME (1U << 23)
#define NFS_ATTR_FATTR_GROUP_NAME (1U << 24)
#define NFS_ATTR_FATTR (NFS_ATTR_FATTR_TYPE   | NFS_ATTR_FATTR_MODE   | NFS_ATTR_FATTR_NLINK   | NFS_ATTR_FATTR_OWNER   | NFS_ATTR_FATTR_GROUP   | NFS_ATTR_FATTR_RDEV   | NFS_ATTR_FATTR_SIZE   | NFS_ATTR_FATTR_FSID   | NFS_ATTR_FATTR_FILEID   | NFS_ATTR_FATTR_ATIME   | NFS_ATTR_FATTR_MTIME   | NFS_ATTR_FATTR_CTIME   | NFS_ATTR_FATTR_CHANGE)
#define NFS_ATTR_FATTR_V2 (NFS_ATTR_FATTR   | NFS_ATTR_FATTR_BLOCKS_USED)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NFS_ATTR_FATTR_V3 (NFS_ATTR_FATTR   | NFS_ATTR_FATTR_SPACE_USED)
#define NFS_ATTR_FATTR_V4 (NFS_ATTR_FATTR   | NFS_ATTR_FATTR_SPACE_USED)
struct nfs_fsinfo {
 struct nfs_fattr *fattr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 rtmax;
 __u32 rtpref;
 __u32 rtmult;
 __u32 wtmax;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 wtpref;
 __u32 wtmult;
 __u32 dtpref;
 __u64 maxfilesize;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct timespec time_delta;
 __u32 lease_time;
 __u32 layouttype;
 __u32 blksize;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct nfs_fsstat {
 struct nfs_fattr *fattr;
 __u64 tbytes;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u64 fbytes;
 __u64 abytes;
 __u64 tfiles;
 __u64 ffiles;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u64 afiles;
};
struct nfs2_fsstat {
 __u32 tsize;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 bsize;
 __u32 blocks;
 __u32 bfree;
 __u32 bavail;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct nfs_pathconf {
 struct nfs_fattr *fattr;
 __u32 max_link;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 max_namelen;
};
struct nfs4_change_info {
 u32 atomic;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u64 before;
 u64 after;
};
struct nfs_seqid;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct nfs4_channel_attrs {
 u32 max_rqst_sz;
 u32 max_resp_sz;
 u32 max_resp_sz_cached;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 max_ops;
 u32 max_reqs;
};
struct nfs4_slot;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct nfs4_sequence_args {
 struct nfs4_slot *sa_slot;
 u8 sa_cache_this : 1,
 sa_privileged : 1;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct nfs4_sequence_res {
 struct nfs4_slot *sr_slot;
 unsigned long sr_timestamp;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int sr_status;
 u32 sr_status_flags;
 u32 sr_highest_slotid;
 u32 sr_target_highest_slotid;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct nfs4_get_lease_time_args {
 struct nfs4_sequence_args la_seq_args;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct nfs4_get_lease_time_res {
 struct nfs4_sequence_res lr_seq_res;
 struct nfs_fsinfo *lr_fsinfo;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PNFS_LAYOUT_MAXSIZE 4096
struct nfs4_layoutdriver_data {
 struct page **pages;
 __u32 pglen;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 len;
};
struct pnfs_layout_range {
 u32 iomode;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u64 offset;
 u64 length;
};
struct nfs4_layoutget_args {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct nfs4_sequence_args seq_args;
 __u32 type;
 struct pnfs_layout_range range;
 __u64 minlength;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 maxcount;
 struct inode *inode;
 struct nfs_open_context *ctx;
 nfs4_stateid stateid;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long timestamp;
 struct nfs4_layoutdriver_data layout;
};
struct nfs4_layoutget_res {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct nfs4_sequence_res seq_res;
 __u32 return_on_close;
 struct pnfs_layout_range range;
 __u32 type;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 nfs4_stateid stateid;
 struct nfs4_layoutdriver_data *layoutp;
};
struct nfs4_layoutget {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct nfs4_layoutget_args args;
 struct nfs4_layoutget_res res;
 gfp_t gfp_flags;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct nfs4_getdevicelist_args {
 struct nfs4_sequence_args seq_args;
 const struct nfs_fh *fh;
 u32 layoutclass;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct nfs4_getdevicelist_res {
 struct nfs4_sequence_res seq_res;
 struct pnfs_devicelist *devlist;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct nfs4_getdeviceinfo_args {
 struct nfs4_sequence_args seq_args;
 struct pnfs_device *pdev;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct nfs4_getdeviceinfo_res {
 struct nfs4_sequence_res seq_res;
 struct pnfs_device *pdev;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct nfs4_layoutcommit_args {
 struct nfs4_sequence_args seq_args;
 nfs4_stateid stateid;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u64 lastbytewritten;
 struct inode *inode;
 const u32 *bitmask;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct nfs4_layoutcommit_res {
 struct nfs4_sequence_res seq_res;
 struct nfs_fattr *fattr;
 const struct nfs_server *server;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int status;
};
#endif
