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
#ifndef _LINUX_SYSV_FS_H
#define _LINUX_SYSV_FS_H
#define __packed2__ __attribute__((packed, aligned(2)))
typedef u16 __fs16;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
typedef u32 __fs16;
typedef __fs16 sysv_ino_t;
typedef __fs32 sysv_zone_t;
#define SYSV_BADBL_INO 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SYSV_ROOT_INO 2
#define XENIX_NICINOD 100
#define XENIX_NICFREE 100
struct xenix_super_block {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __fs16 s_isize;
 __fs32 s_fsize __packed2__;
 __fs16 s_nfree;
 sysv_zone_t s_free[XENIX_NICFREE];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __fs16 s_ninode;
 sysv_ino_t s_inode[XENIX_NICINOD];
 char s_flock;
 char s_ilock;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 char s_fmod;
 char s_ronly;
 __fs32 s_time __packed2__;
 __fs32 s_tfree __packed2__;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __fs16 s_tinode;
 __fs16 s_dinfo[4];
 char s_fname[6];
 char s_fpack[6];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 char s_clean;
 char s_fill[371];
 s32 s_magic;
 __fs32 s_type;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define SYSV_NICINOD 100
#define SYSV_NICFREE 50
struct sysv4_super_block {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __fs16 s_isize;
 u16 s_pad0;
 __fs32 s_fsize;
 __fs16 s_nfree;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u16 s_pad1;
 sysv_zone_t s_free[SYSV_NICFREE];
 __fs16 s_ninode;
 u16 s_pad2;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 sysv_ino_t s_inode[SYSV_NICINOD];
 char s_flock;
 char s_ilock;
 char s_fmod;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 char s_ronly;
 __fs32 s_time;
 __fs16 s_dinfo[4];
 __fs32 s_tfree;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __fs16 s_tinode;
 u16 s_pad3;
 char s_fname[6];
 char s_fpack[6];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 s32 s_fill[12];
 __fs32 s_state;
 s32 s_magic;
 __fs32 s_type;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct sysv2_super_block {
 __fs16 s_isize;
 __fs32 s_fsize __packed2__;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __fs16 s_nfree;
 sysv_zone_t s_free[SYSV_NICFREE];
 __fs16 s_ninode;
 sysv_ino_t s_inode[SYSV_NICINOD];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 char s_flock;
 char s_ilock;
 char s_fmod;
 char s_ronly;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __fs32 s_time __packed2__;
 __fs16 s_dinfo[4];
 __fs32 s_tfree __packed2__;
 __fs16 s_tinode;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 char s_fname[6];
 char s_fpack[6];
 s32 s_fill[14];
 __fs32 s_state;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 s32 s_magic;
 __fs32 s_type;
};
#define V7_NICINOD 100
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define V7_NICFREE 50
struct v7_super_block {
 __fs16 s_isize;
 __fs32 s_fsize __packed2__;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __fs16 s_nfree;
 sysv_zone_t s_free[V7_NICFREE];
 __fs16 s_ninode;
 sysv_ino_t s_inode[V7_NICINOD];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 char s_flock;
 char s_ilock;
 char s_fmod;
 char s_ronly;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __fs32 s_time __packed2__;
 __fs32 s_tfree __packed2__;
 __fs16 s_tinode;
 __fs16 s_m;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __fs16 s_n;
 char s_fname[6];
 char s_fpack[6];
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define V7_NFILES 1024
#define V7_MAXSIZE 0x00ffffff
#define COH_NICINOD 100
#define COH_NICFREE 64
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct coh_super_block {
 __fs16 s_isize;
 __fs32 s_fsize __packed2__;
 __fs16 s_nfree;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 sysv_zone_t s_free[COH_NICFREE] __packed2__;
 __fs16 s_ninode;
 sysv_ino_t s_inode[COH_NICINOD];
 char s_flock;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 char s_ilock;
 char s_fmod;
 char s_ronly;
 __fs32 s_time __packed2__;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __fs32 s_tfree __packed2__;
 __fs16 s_tinode;
 __fs16 s_interleave_m;
 __fs16 s_interleave_n;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 char s_fname[6];
 char s_fpack[6];
 __fs32 s_unique;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct sysv_inode {
 __fs16 i_mode;
 __fs16 i_nlink;
 __fs16 i_uid;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __fs16 i_gid;
 __fs32 i_size;
 u8 i_data[3*(10+1+1+1)];
 u8 i_gen;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __fs32 i_atime;
 __fs32 i_mtime;
 __fs32 i_ctime;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SYSV_NAMELEN 14
struct sysv_dir_entry {
 sysv_ino_t inode;
 char name[SYSV_NAMELEN];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define SYSV_DIRSIZE sizeof(struct sysv_dir_entry)
#endif
