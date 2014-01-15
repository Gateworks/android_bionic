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
#ifndef __MTD_FLASHCHIP_H__
#define __MTD_FLASHCHIP_H__
#include <linux/sched.h>
#include <linux/mutex.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
typedef enum {
 FL_READY,
 FL_STATUS,
 FL_CFI_QUERY,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 FL_JEDEC_QUERY,
 FL_ERASING,
 FL_ERASE_SUSPENDING,
 FL_ERASE_SUSPENDED,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 FL_WRITING,
 FL_WRITING_TO_BUFFER,
 FL_OTP_WRITE,
 FL_WRITE_SUSPENDING,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 FL_WRITE_SUSPENDED,
 FL_PM_SUSPENDED,
 FL_SYNCING,
 FL_UNLOADING,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 FL_LOCKING,
 FL_UNLOCKING,
 FL_POINT,
 FL_XIP_WHILE_ERASING,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 FL_XIP_WHILE_WRITING,
 FL_SHUTDOWN,
 FL_READING,
 FL_CACHEDPRG,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 FL_RESETING,
 FL_OTPING,
 FL_PREPARING_ERASE,
 FL_VERIFYING_ERASE,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 FL_UNKNOWN
} flstate_t;
struct flchip {
 unsigned long start;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int ref_point_counter;
 flstate_t state;
 flstate_t oldstate;
 unsigned int write_suspended:1;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int erase_suspended:1;
 unsigned long in_progress_block_addr;
 struct mutex mutex;
 wait_queue_head_t wq;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int word_write_time;
 int buffer_write_time;
 int erase_time;
 int word_write_time_max;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int buffer_write_time_max;
 int erase_time_max;
 void *priv;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct flchip_shared {
 struct mutex lock;
 struct flchip *writing;
 struct flchip *erasing;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#endif
