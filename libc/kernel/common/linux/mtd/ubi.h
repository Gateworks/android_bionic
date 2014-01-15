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
#ifndef __LINUX_UBI_H__
#define __LINUX_UBI_H__
#include <linux/ioctl.h>
#include <linux/types.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <mtd/ubi-user.h>
#define UBI_ALL -1
enum {
 UBI_READONLY = 1,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 UBI_READWRITE,
 UBI_EXCLUSIVE
};
struct ubi_volume_info {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int ubi_num;
 int vol_id;
 int size;
 long long used_bytes;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int used_ebs;
 int vol_type;
 int corrupted;
 int upd_marker;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int alignment;
 int usable_leb_size;
 int name_len;
 const char *name;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 dev_t cdev;
};
struct ubi_device_info {
 int ubi_num;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int leb_size;
 int leb_start;
 int min_io_size;
 int max_write_size;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int ro_mode;
 dev_t cdev;
};
enum {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 UBI_VOLUME_ADDED,
 UBI_VOLUME_REMOVED,
 UBI_VOLUME_RESIZED,
 UBI_VOLUME_RENAMED,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 UBI_VOLUME_UPDATED,
};
struct ubi_notification {
 struct ubi_device_info di;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct ubi_volume_info vi;
};
struct ubi_volume_desc;
struct ubi_volume_desc *ubi_open_volume(int ubi_num, int vol_id, int mode);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct ubi_volume_desc *ubi_open_volume_nm(int ubi_num, const char *name,
 int mode);
struct ubi_volume_desc *ubi_open_volume_path(const char *pathname, int mode);
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
