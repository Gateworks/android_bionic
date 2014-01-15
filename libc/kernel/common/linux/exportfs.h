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
#ifndef LINUX_EXPORTFS_H
#define LINUX_EXPORTFS_H 1
#include <linux/types.h>
struct dentry;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct inode;
struct super_block;
struct vfsmount;
#define MAX_HANDLE_SZ 128
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum fid_type {
 FILEID_ROOT = 0,
 FILEID_INO32_GEN = 1,
 FILEID_INO32_GEN_PARENT = 2,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 FILEID_BTRFS_WITHOUT_PARENT = 0x4d,
 FILEID_BTRFS_WITH_PARENT = 0x4e,
 FILEID_BTRFS_WITH_PARENT_ROOT = 0x4f,
 FILEID_UDF_WITHOUT_PARENT = 0x51,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 FILEID_UDF_WITH_PARENT = 0x52,
 FILEID_NILFS_WITHOUT_PARENT = 0x61,
 FILEID_NILFS_WITH_PARENT = 0x62,
 FILEID_FAT_WITHOUT_PARENT = 0x71,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 FILEID_FAT_WITH_PARENT = 0x72,
 FILEID_INVALID = 0xff,
};
struct fid {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 union {
 struct {
 u32 ino;
 u32 gen;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 parent_ino;
 u32 parent_gen;
 } i32;
 struct {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 block;
 u16 partref;
 u16 parent_partref;
 u32 generation;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 parent_block;
 u32 parent_generation;
 } udf;
 __u32 raw[0];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 };
};
struct export_operations {
 int (*encode_fh)(struct inode *inode, __u32 *fh, int *max_len,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct inode *parent);
 struct dentry * (*fh_to_dentry)(struct super_block *sb, struct fid *fid,
 int fh_len, int fh_type);
 struct dentry * (*fh_to_parent)(struct super_block *sb, struct fid *fid,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int fh_len, int fh_type);
 int (*get_name)(struct dentry *parent, char *name,
 struct dentry *child);
 struct dentry * (*get_parent)(struct dentry *child);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*commit_metadata)(struct inode *inode);
};
#endif
