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
#ifndef _LINUX_TTY_DRIVER_H
#define _LINUX_TTY_DRIVER_H
#include <linux/export.h>
#include <linux/fs.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/list.h>
#include <linux/cdev.h>
#include <linux/termios.h>
struct tty_struct;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct tty_driver;
struct serial_icounter_struct;
struct tty_operations {
 struct tty_struct * (*lookup)(struct tty_driver *driver,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct inode *inode, int idx);
 int (*install)(struct tty_driver *driver, struct tty_struct *tty);
 void (*remove)(struct tty_driver *driver, struct tty_struct *tty);
 int (*open)(struct tty_struct * tty, struct file * filp);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void (*close)(struct tty_struct * tty, struct file * filp);
 void (*shutdown)(struct tty_struct *tty);
 void (*cleanup)(struct tty_struct *tty);
 int (*write)(struct tty_struct * tty,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 const unsigned char *buf, int count);
 int (*put_char)(struct tty_struct *tty, unsigned char ch);
 void (*flush_chars)(struct tty_struct *tty);
 int (*write_room)(struct tty_struct *tty);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*chars_in_buffer)(struct tty_struct *tty);
 int (*ioctl)(struct tty_struct *tty,
 unsigned int cmd, unsigned long arg);
 long (*compat_ioctl)(struct tty_struct *tty,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int cmd, unsigned long arg);
 void (*set_termios)(struct tty_struct *tty, struct ktermios * old);
 void (*throttle)(struct tty_struct * tty);
 void (*unthrottle)(struct tty_struct * tty);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void (*stop)(struct tty_struct *tty);
 void (*start)(struct tty_struct *tty);
 void (*hangup)(struct tty_struct *tty);
 int (*break_ctl)(struct tty_struct *tty, int state);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void (*flush_buffer)(struct tty_struct *tty);
 void (*set_ldisc)(struct tty_struct *tty);
 void (*wait_until_sent)(struct tty_struct *tty, int timeout);
 void (*send_xchar)(struct tty_struct *tty, char ch);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*tiocmget)(struct tty_struct *tty);
 int (*tiocmset)(struct tty_struct *tty,
 unsigned int set, unsigned int clear);
 int (*resize)(struct tty_struct *tty, struct winsize *ws);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*set_termiox)(struct tty_struct *tty, struct termiox *tnew);
 int (*get_icount)(struct tty_struct *tty,
 struct serial_icounter_struct *icount);
 const struct file_operations *proc_fops;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct tty_driver {
 int magic;
 struct kref kref;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct cdev *cdevs;
 struct module *owner;
 const char *driver_name;
 const char *name;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int name_base;
 int major;
 int minor_start;
 unsigned int num;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 short type;
 short subtype;
 struct ktermios init_termios;
 unsigned long flags;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct proc_dir_entry *proc_entry;
 struct tty_driver *other;
 struct tty_struct **ttys;
 struct tty_port **ports;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct ktermios **termios;
 void *driver_state;
 const struct tty_operations *ops;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define tty_alloc_driver(lines, flags)   __tty_alloc_driver(lines, THIS_MODULE, flags)
#define TTY_DRIVER_MAGIC 0x5402
#define TTY_DRIVER_INSTALLED 0x0001
#define TTY_DRIVER_RESET_TERMIOS 0x0002
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define TTY_DRIVER_REAL_RAW 0x0004
#define TTY_DRIVER_DYNAMIC_DEV 0x0008
#define TTY_DRIVER_DEVPTS_MEM 0x0010
#define TTY_DRIVER_HARDWARE_BREAK 0x0020
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define TTY_DRIVER_DYNAMIC_ALLOC 0x0040
#define TTY_DRIVER_UNNUMBERED_NODE 0x0080
#define TTY_DRIVER_TYPE_SYSTEM 0x0001
#define TTY_DRIVER_TYPE_CONSOLE 0x0002
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define TTY_DRIVER_TYPE_SERIAL 0x0003
#define TTY_DRIVER_TYPE_PTY 0x0004
#define TTY_DRIVER_TYPE_SCC 0x0005
#define TTY_DRIVER_TYPE_SYSCONS 0x0006
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SYSTEM_TYPE_TTY 0x0001
#define SYSTEM_TYPE_CONSOLE 0x0002
#define SYSTEM_TYPE_SYSCONS 0x0003
#define SYSTEM_TYPE_SYSPTMX 0x0004
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PTY_TYPE_MASTER 0x0001
#define PTY_TYPE_SLAVE 0x0002
#define SERIAL_TYPE_NORMAL 1
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
