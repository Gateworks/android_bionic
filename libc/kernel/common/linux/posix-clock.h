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
#ifndef _LINUX_POSIX_CLOCK_H_
#define _LINUX_POSIX_CLOCK_H_
#include <linux/cdev.h>
#include <linux/fs.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/poll.h>
#include <linux/posix-timers.h>
#include <linux/rwsem.h>
struct posix_clock;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct posix_clock_operations {
 struct module *owner;
 int (*clock_adjtime)(struct posix_clock *pc, struct timex *tx);
 int (*clock_gettime)(struct posix_clock *pc, struct timespec *ts);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*clock_getres) (struct posix_clock *pc, struct timespec *ts);
 int (*clock_settime)(struct posix_clock *pc,
 const struct timespec *ts);
 int (*timer_create) (struct posix_clock *pc, struct k_itimer *kit);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*timer_delete) (struct posix_clock *pc, struct k_itimer *kit);
 void (*timer_gettime)(struct posix_clock *pc,
 struct k_itimer *kit, struct itimerspec *tsp);
 int (*timer_settime)(struct posix_clock *pc,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct k_itimer *kit, int flags,
 struct itimerspec *tsp, struct itimerspec *old);
 int (*fasync) (struct posix_clock *pc,
 int fd, struct file *file, int on);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 long (*ioctl) (struct posix_clock *pc,
 unsigned int cmd, unsigned long arg);
 int (*mmap) (struct posix_clock *pc,
 struct vm_area_struct *vma);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*open) (struct posix_clock *pc, fmode_t f_mode);
 uint (*poll) (struct posix_clock *pc,
 struct file *file, poll_table *wait);
 int (*release) (struct posix_clock *pc);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 ssize_t (*read) (struct posix_clock *pc,
 uint flags, char __user *buf, size_t cnt);
};
struct posix_clock {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct posix_clock_operations ops;
 struct cdev cdev;
 struct kref kref;
 struct rw_semaphore rwsem;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 bool zombie;
 void (*release)(struct posix_clock *clk);
};
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
