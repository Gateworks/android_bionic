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
#ifndef _LINUX_QNX6_FS_H
#define _LINUX_QNX6_FS_H
#include <linux/types.h>
#include <linux/magic.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define QNX6_ROOT_INO 1
#define QNX6_FILE_DIRECTORY 0x01
#define QNX6_FILE_DELETED 0x02
#define QNX6_FILE_NORMAL 0x03
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define QNX6_SUPERBLOCK_SIZE 0x200
#define QNX6_SUPERBLOCK_AREA 0x1000
#define QNX6_BOOTBLOCK_SIZE 0x2000
#define QNX6_DIR_ENTRY_SIZE 0x20
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define QNX6_INODE_SIZE 0x80
#define QNX6_INODE_SIZE_BITS 7
#define QNX6_NO_DIRECT_POINTERS 16
#define QNX6_PTR_MAX_LEVELS 5
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define QNX6_SHORT_NAME_MAX 27
#define QNX6_LONG_NAME_MAX 510
#define QNX6_MOUNT_MMI_FS 0x010000
struct qnx6_inode_entry {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __fs64 di_size;
 __fs32 di_uid;
 __fs32 di_gid;
 __fs32 di_ftime;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __fs32 di_mtime;
 __fs32 di_atime;
 __fs32 di_ctime;
 __fs16 di_mode;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __fs16 di_ext_mode;
 __fs32 di_block_ptr[QNX6_NO_DIRECT_POINTERS];
 __u8 di_filelevels;
 __u8 di_status;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 di_unknown2[2];
 __fs32 di_zero2[6];
};
struct qnx6_dir_entry {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __fs32 de_inode;
 __u8 de_size;
 char de_fname[QNX6_SHORT_NAME_MAX];
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct qnx6_long_dir_entry {
 __fs32 de_inode;
 __u8 de_size;
 __u8 de_unknown[3];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __fs32 de_long_inode;
 __fs32 de_checksum;
};
struct qnx6_long_filename {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __fs16 lf_size;
 __u8 lf_fname[QNX6_LONG_NAME_MAX];
};
struct qnx6_root_node {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __fs64 size;
 __fs32 ptr[QNX6_NO_DIRECT_POINTERS];
 __u8 levels;
 __u8 mode;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 spare[6];
};
struct qnx6_super_block {
 __fs32 sb_magic;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __fs32 sb_checksum;
 __fs64 sb_serial;
 __fs32 sb_ctime;
 __fs32 sb_atime;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __fs32 sb_flags;
 __fs16 sb_version1;
 __fs16 sb_version2;
 __u8 sb_volumeid[16];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __fs32 sb_blocksize;
 __fs32 sb_num_inodes;
 __fs32 sb_free_inodes;
 __fs32 sb_num_blocks;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __fs32 sb_free_blocks;
 __fs32 sb_allocgroup;
 struct qnx6_root_node Inode;
 struct qnx6_root_node Bitmap;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct qnx6_root_node Longfile;
 struct qnx6_root_node Unknown;
};
struct qnx6_mmi_super_block {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __fs32 sb_magic;
 __fs32 sb_checksum;
 __fs64 sb_serial;
 __u8 sb_spare0[12];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 sb_id[12];
 __fs32 sb_blocksize;
 __fs32 sb_num_inodes;
 __fs32 sb_free_inodes;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __fs32 sb_num_blocks;
 __fs32 sb_free_blocks;
 __u8 sb_spare1[4];
 struct qnx6_root_node Inode;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct qnx6_root_node Bitmap;
 struct qnx6_root_node Longfile;
 struct qnx6_root_node Unknown;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
