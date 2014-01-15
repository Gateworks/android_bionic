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
#ifndef DRBD_GENL_STRUCT_H
#define DRBD_GENL_STRUCT_H
struct drbd_genlmsghdr {
 __u32 minor;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 union {
 __u32 flags;
 __s32 ret_code;
 };
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
enum {
 DRBD_GENL_F_SET_DEFAULTS = 1,
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum drbd_state_info_bcast_reason {
 SIB_GET_STATUS_REPLY = 1,
 SIB_STATE_CHANGE = 2,
 SIB_HELPER_PRE = 3,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 SIB_HELPER_POST = 4,
 SIB_SYNC_PROGRESS = 5,
};
#undef linux
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/drbd.h>
#define GENL_MAGIC_VERSION API_VERSION
#define GENL_MAGIC_FAMILY drbd
#define GENL_MAGIC_FAMILY_HDRSZ sizeof(struct drbd_genlmsghdr)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define GENL_MAGIC_INCLUDE_FILE <linux/drbd_genl.h>
#include <linux/genl_magic_struct.h>
#endif
