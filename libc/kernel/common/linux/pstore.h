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
#ifndef _LINUX_PSTORE_H
#define _LINUX_PSTORE_H
#include <linux/time.h>
#include <linux/kmsg_dump.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/mutex.h>
#include <linux/types.h>
#include <linux/spinlock.h>
#include <linux/errno.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum pstore_type_id {
 PSTORE_TYPE_DMESG = 0,
 PSTORE_TYPE_MCE = 1,
 PSTORE_TYPE_CONSOLE = 2,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 PSTORE_TYPE_FTRACE = 3,
 PSTORE_TYPE_UNKNOWN = 255
};
struct module;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct pstore_info {
 struct module *owner;
 char *name;
 spinlock_t buf_lock;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 char *buf;
 size_t bufsize;
 struct mutex read_mutex;
 int (*open)(struct pstore_info *psi);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*close)(struct pstore_info *psi);
 ssize_t (*read)(u64 *id, enum pstore_type_id *type,
 int *count, struct timespec *time, char **buf,
 struct pstore_info *psi);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*write)(enum pstore_type_id type,
 enum kmsg_dump_reason reason, u64 *id,
 unsigned int part, int count, size_t size,
 struct pstore_info *psi);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*write_buf)(enum pstore_type_id type,
 enum kmsg_dump_reason reason, u64 *id,
 unsigned int part, const char *buf, size_t size,
 struct pstore_info *psi);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*erase)(enum pstore_type_id type, u64 id,
 int count, struct timespec time,
 struct pstore_info *psi);
 void *data;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#endif
