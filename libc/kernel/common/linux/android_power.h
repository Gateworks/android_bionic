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
#ifndef _LINUX_ANDROID_POWER_H
#define _LINUX_ANDROID_POWER_H
#include <linux/list.h>
typedef struct
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
{
 int lock_count;
 int flags;
 const char *name;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int expires;
} android_suspend_lock_t;
#define ANDROID_SUSPEND_LOCK_FLAG_COUNTED (1U << 0)
#define ANDROID_SUSPEND_LOCK_FLAG_USER_READABLE (1U << 1)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ANDROID_SUSPEND_LOCK_FLAG_USER_SET (1U << 2)
#define ANDROID_SUSPEND_LOCK_FLAG_USER_CLEAR (1U << 3)
#define ANDROID_SUSPEND_LOCK_FLAG_USER_INC (1U << 4)
#define ANDROID_SUSPEND_LOCK_FLAG_USER_DEC (1U << 5)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ANDROID_SUSPEND_LOCK_FLAG_USER_VISIBLE_MASK (0x1fU << 1)
#define ANDROID_SUSPEND_LOCK_AUTO_EXPIRE (1U << 6)
typedef struct android_early_suspend android_early_suspend_t;
struct android_early_suspend
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
{
 int level;
 void (*suspend)(android_early_suspend_t *h);
 void (*resume)(android_early_suspend_t *h);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
typedef enum {
 ANDROID_CHARGING_STATE_UNKNOWN,
 ANDROID_CHARGING_STATE_DISCHARGE,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 ANDROID_CHARGING_STATE_MAINTAIN,
 ANDROID_CHARGING_STATE_SLOW,
 ANDROID_CHARGING_STATE_NORMAL,
 ANDROID_CHARGING_STATE_FAST,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 ANDROID_CHARGING_STATE_OVERHEAT
} android_charging_state_t;
#endif
