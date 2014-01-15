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
#ifndef __EFS_VH_H__
#define __EFS_VH_H__
#define VHMAGIC 0xbe5a941
#define NPARTAB 16
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NVDIR 15
#define BFNAMESIZE 16
#define VDNAMESIZE 8
struct volume_directory {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 char vd_name[VDNAMESIZE];
 __be32 vd_lbn;
 __be32 vd_nbytes;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct partition_table {
 __be32 pt_nblks;
 __be32 pt_firstlbn;
 __be32 pt_type;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct volume_header {
 __be32 vh_magic;
 __be16 vh_rootpt;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __be16 vh_swappt;
 char vh_bootfile[BFNAMESIZE];
 char pad[48];
 struct volume_directory vh_vd[NVDIR];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct partition_table vh_pt[NPARTAB];
 __be32 vh_csum;
 __be32 vh_fill;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SGI_SYSV 0x05
#define SGI_EFS 0x07
#define IS_EFS(x) (((x) == SGI_EFS) || ((x) == SGI_SYSV))
struct pt_types {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int pt_type;
 char *pt_name;
};
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
