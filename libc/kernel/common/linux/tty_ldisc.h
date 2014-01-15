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
#ifndef _LINUX_TTY_LDISC_H
#define _LINUX_TTY_LDISC_H
#include <linux/fs.h>
#include <linux/wait.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/wait.h>
struct tty_ldisc_ops {
 int magic;
 char *name;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int num;
 int flags;
 int (*open)(struct tty_struct *);
 void (*close)(struct tty_struct *);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void (*flush_buffer)(struct tty_struct *tty);
 ssize_t (*chars_in_buffer)(struct tty_struct *tty);
 ssize_t (*read)(struct tty_struct *tty, struct file *file,
 unsigned char __user *buf, size_t nr);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 ssize_t (*write)(struct tty_struct *tty, struct file *file,
 const unsigned char *buf, size_t nr);
 int (*ioctl)(struct tty_struct *tty, struct file *file,
 unsigned int cmd, unsigned long arg);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 long (*compat_ioctl)(struct tty_struct *tty, struct file *file,
 unsigned int cmd, unsigned long arg);
 void (*set_termios)(struct tty_struct *tty, struct ktermios *old);
 unsigned int (*poll)(struct tty_struct *, struct file *,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct poll_table_struct *);
 int (*hangup)(struct tty_struct *tty);
 void (*receive_buf)(struct tty_struct *, const unsigned char *cp,
 char *fp, int count);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void (*write_wakeup)(struct tty_struct *);
 void (*dcd_change)(struct tty_struct *, unsigned int);
 struct module *owner;
 int refcount;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct tty_ldisc {
 struct tty_ldisc_ops *ops;
 atomic_t users;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 wait_queue_head_t wq_idle;
};
#define TTY_LDISC_MAGIC 0x5403
#define LDISC_FLAG_DEFINED 0x00000001
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MODULE_ALIAS_LDISC(ldisc)   MODULE_ALIAS("tty-ldisc-" __stringify(ldisc))
#endif
