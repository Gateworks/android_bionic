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
#ifndef __RFKILL_H
#define __RFKILL_H
#include <uapi/linux/rfkill.h>
enum rfkill_user_states {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 RFKILL_USER_STATE_SOFT_BLOCKED = RFKILL_STATE_SOFT_BLOCKED,
 RFKILL_USER_STATE_UNBLOCKED = RFKILL_STATE_UNBLOCKED,
 RFKILL_USER_STATE_HARD_BLOCKED = RFKILL_STATE_HARD_BLOCKED,
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#undef RFKILL_STATE_SOFT_BLOCKED
#undef RFKILL_STATE_UNBLOCKED
#undef RFKILL_STATE_HARD_BLOCKED
#include <linux/kernel.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/list.h>
#include <linux/mutex.h>
#include <linux/leds.h>
#include <linux/err.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct device;
struct rfkill;
struct rfkill_ops {
 void (*poll)(struct rfkill *rfkill, void *data);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void (*query)(struct rfkill *rfkill, void *data);
 int (*set_block)(void *data, bool blocked);
};
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
