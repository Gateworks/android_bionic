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
#ifndef _LINUX_LP_H
#define _LINUX_LP_H
#include <linux/wait.h>
#include <linux/mutex.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <uapi/linux/lp.h>
#define LP_PARPORT_UNSPEC -4
#define LP_PARPORT_AUTO -3
#define LP_PARPORT_OFF -2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define LP_PARPORT_NONE -1
#define LP_F(minor) lp_table[(minor)].flags
#define LP_CHAR(minor) lp_table[(minor)].chars
#define LP_TIME(minor) lp_table[(minor)].time
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define LP_WAIT(minor) lp_table[(minor)].wait
#define LP_IRQ(minor) lp_table[(minor)].dev->port->irq
#ifdef LP_STATS
#define LP_STAT(minor) lp_table[(minor)].stats
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#define LP_BUFFER_SIZE PAGE_SIZE
#define LP_BASE(x) lp_table[(x)].dev->port->base
#ifdef LP_STATS
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct lp_stats {
 unsigned long chars;
 unsigned long sleeps;
 unsigned int maxrun;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int maxwait;
 unsigned int meanwait;
 unsigned int mdev;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
struct lp_struct {
 struct pardevice *dev;
 unsigned long flags;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int chars;
 unsigned int time;
 unsigned int wait;
 char *lp_buffer;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#ifdef LP_STATS
 unsigned int lastcall;
 unsigned int runchars;
 struct lp_stats stats;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
 wait_queue_head_t waitq;
 unsigned int last_error;
 struct mutex port_mutex;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 wait_queue_head_t dataq;
 long timeout;
 unsigned int best_mode;
 unsigned int current_mode;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long bits;
};
#define LP_PINTEN 0x10
#define LP_PSELECP 0x08
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define LP_PINITP 0x04
#define LP_PAUTOLF 0x02
#define LP_PSTROBE 0x01
#define LP_DUMMY 0x00
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define LP_DELAY 50
#endif
