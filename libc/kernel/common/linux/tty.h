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
#ifndef _LINUX_TTY_H
#define _LINUX_TTY_H
#include <linux/fs.h>
#include <linux/major.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/termios.h>
#include <linux/workqueue.h>
#include <linux/tty_driver.h>
#include <linux/tty_ldisc.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/mutex.h>
#include <linux/tty_flags.h>
#include <uapi/linux/tty.h>
#define NR_UNIX98_PTY_DEFAULT 4096
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NR_UNIX98_PTY_RESERVE 1024
#define NR_UNIX98_PTY_MAX (1 << MINORBITS)
#define __DISABLED_CHAR '\0'
struct tty_buffer {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct tty_buffer *next;
 char *char_buf_ptr;
 unsigned char *flag_buf_ptr;
 int used;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int size;
 int commit;
 int read;
 unsigned long data[0];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define TTY_BUFFER_PAGE (((PAGE_SIZE - sizeof(struct tty_buffer)) / 2) & ~0xFF)
struct tty_bufhead {
 spinlock_t lock;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct tty_buffer *head;
 struct tty_buffer *tail;
 struct tty_buffer *free;
 int memory_used;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define TTY_NORMAL 0
#define TTY_BREAK 1
#define TTY_FRAME 2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define TTY_PARITY 3
#define TTY_OVERRUN 4
#define INTR_CHAR(tty) ((tty)->termios.c_cc[VINTR])
#define QUIT_CHAR(tty) ((tty)->termios.c_cc[VQUIT])
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ERASE_CHAR(tty) ((tty)->termios.c_cc[VERASE])
#define KILL_CHAR(tty) ((tty)->termios.c_cc[VKILL])
#define EOF_CHAR(tty) ((tty)->termios.c_cc[VEOF])
#define TIME_CHAR(tty) ((tty)->termios.c_cc[VTIME])
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MIN_CHAR(tty) ((tty)->termios.c_cc[VMIN])
#define SWTC_CHAR(tty) ((tty)->termios.c_cc[VSWTC])
#define START_CHAR(tty) ((tty)->termios.c_cc[VSTART])
#define STOP_CHAR(tty) ((tty)->termios.c_cc[VSTOP])
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SUSP_CHAR(tty) ((tty)->termios.c_cc[VSUSP])
#define EOL_CHAR(tty) ((tty)->termios.c_cc[VEOL])
#define REPRINT_CHAR(tty) ((tty)->termios.c_cc[VREPRINT])
#define DISCARD_CHAR(tty) ((tty)->termios.c_cc[VDISCARD])
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WERASE_CHAR(tty) ((tty)->termios.c_cc[VWERASE])
#define LNEXT_CHAR(tty) ((tty)->termios.c_cc[VLNEXT])
#define EOL2_CHAR(tty) ((tty)->termios.c_cc[VEOL2])
#define _I_FLAG(tty, f) ((tty)->termios.c_iflag & (f))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define _O_FLAG(tty, f) ((tty)->termios.c_oflag & (f))
#define _C_FLAG(tty, f) ((tty)->termios.c_cflag & (f))
#define _L_FLAG(tty, f) ((tty)->termios.c_lflag & (f))
#define I_IGNBRK(tty) _I_FLAG((tty), IGNBRK)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define I_BRKINT(tty) _I_FLAG((tty), BRKINT)
#define I_IGNPAR(tty) _I_FLAG((tty), IGNPAR)
#define I_PARMRK(tty) _I_FLAG((tty), PARMRK)
#define I_INPCK(tty) _I_FLAG((tty), INPCK)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define I_ISTRIP(tty) _I_FLAG((tty), ISTRIP)
#define I_INLCR(tty) _I_FLAG((tty), INLCR)
#define I_IGNCR(tty) _I_FLAG((tty), IGNCR)
#define I_ICRNL(tty) _I_FLAG((tty), ICRNL)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define I_IUCLC(tty) _I_FLAG((tty), IUCLC)
#define I_IXON(tty) _I_FLAG((tty), IXON)
#define I_IXANY(tty) _I_FLAG((tty), IXANY)
#define I_IXOFF(tty) _I_FLAG((tty), IXOFF)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define I_IMAXBEL(tty) _I_FLAG((tty), IMAXBEL)
#define I_IUTF8(tty) _I_FLAG((tty), IUTF8)
#define O_OPOST(tty) _O_FLAG((tty), OPOST)
#define O_OLCUC(tty) _O_FLAG((tty), OLCUC)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define O_ONLCR(tty) _O_FLAG((tty), ONLCR)
#define O_OCRNL(tty) _O_FLAG((tty), OCRNL)
#define O_ONOCR(tty) _O_FLAG((tty), ONOCR)
#define O_ONLRET(tty) _O_FLAG((tty), ONLRET)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define O_OFILL(tty) _O_FLAG((tty), OFILL)
#define O_OFDEL(tty) _O_FLAG((tty), OFDEL)
#define O_NLDLY(tty) _O_FLAG((tty), NLDLY)
#define O_CRDLY(tty) _O_FLAG((tty), CRDLY)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define O_TABDLY(tty) _O_FLAG((tty), TABDLY)
#define O_BSDLY(tty) _O_FLAG((tty), BSDLY)
#define O_VTDLY(tty) _O_FLAG((tty), VTDLY)
#define O_FFDLY(tty) _O_FLAG((tty), FFDLY)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define C_BAUD(tty) _C_FLAG((tty), CBAUD)
#define C_CSIZE(tty) _C_FLAG((tty), CSIZE)
#define C_CSTOPB(tty) _C_FLAG((tty), CSTOPB)
#define C_CREAD(tty) _C_FLAG((tty), CREAD)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define C_PARENB(tty) _C_FLAG((tty), PARENB)
#define C_PARODD(tty) _C_FLAG((tty), PARODD)
#define C_HUPCL(tty) _C_FLAG((tty), HUPCL)
#define C_CLOCAL(tty) _C_FLAG((tty), CLOCAL)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define C_CIBAUD(tty) _C_FLAG((tty), CIBAUD)
#define C_CRTSCTS(tty) _C_FLAG((tty), CRTSCTS)
#define L_ISIG(tty) _L_FLAG((tty), ISIG)
#define L_ICANON(tty) _L_FLAG((tty), ICANON)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define L_XCASE(tty) _L_FLAG((tty), XCASE)
#define L_ECHO(tty) _L_FLAG((tty), ECHO)
#define L_ECHOE(tty) _L_FLAG((tty), ECHOE)
#define L_ECHOK(tty) _L_FLAG((tty), ECHOK)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define L_ECHONL(tty) _L_FLAG((tty), ECHONL)
#define L_NOFLSH(tty) _L_FLAG((tty), NOFLSH)
#define L_TOSTOP(tty) _L_FLAG((tty), TOSTOP)
#define L_ECHOCTL(tty) _L_FLAG((tty), ECHOCTL)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define L_ECHOPRT(tty) _L_FLAG((tty), ECHOPRT)
#define L_ECHOKE(tty) _L_FLAG((tty), ECHOKE)
#define L_FLUSHO(tty) _L_FLAG((tty), FLUSHO)
#define L_PENDIN(tty) _L_FLAG((tty), PENDIN)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define L_IEXTEN(tty) _L_FLAG((tty), IEXTEN)
#define L_EXTPROC(tty) _L_FLAG((tty), EXTPROC)
struct device;
struct signal_struct;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct tty_port;
struct tty_port_operations {
 int (*carrier_raised)(struct tty_port *port);
 void (*dtr_rts)(struct tty_port *port, int raise);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void (*shutdown)(struct tty_port *port);
 void (*drop)(struct tty_port *port);
 int (*activate)(struct tty_port *port, struct tty_struct *tty);
 void (*destruct)(struct tty_port *port);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct tty_port {
 struct tty_bufhead buf;
 struct tty_struct *tty;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct tty_struct *itty;
 const struct tty_port_operations *ops;
 spinlock_t lock;
 int blocked_open;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int count;
 wait_queue_head_t open_wait;
 wait_queue_head_t close_wait;
 wait_queue_head_t delta_msr_wait;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long flags;
 unsigned long iflags;
#define TTYP_FLUSHING 1
#define TTYP_FLUSHPENDING 2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned char console:1,
 low_latency:1;
 struct mutex mutex;
 struct mutex buf_mutex;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned char *xmit_buf;
 unsigned int close_delay;
 unsigned int closing_wait;
 int drain_delay;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct kref kref;
};
struct tty_operations;
struct tty_struct {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int magic;
 struct kref kref;
 struct device *dev;
 struct tty_driver *driver;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 const struct tty_operations *ops;
 int index;
 struct mutex ldisc_mutex;
 struct tty_ldisc *ldisc;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct mutex atomic_write_lock;
 struct mutex legacy_mutex;
 struct mutex termios_mutex;
 spinlock_t ctrl_lock;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct ktermios termios, termios_locked;
 struct termiox *termiox;
 char name[64];
 struct pid *pgrp;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct pid *session;
 unsigned long flags;
 int count;
 struct winsize winsize;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned char stopped:1, hw_stopped:1, flow_stopped:1, packet:1;
 unsigned char ctrl_status;
 unsigned int receive_room;
 int flow_change;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct tty_struct *link;
 struct fasync_struct *fasync;
 int alt_speed;
 wait_queue_head_t write_wait;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 wait_queue_head_t read_wait;
 void *disc_data;
 void *driver_data;
#define N_TTY_BUF_SIZE 4096
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned char closing:1;
 unsigned short minimum_to_wake;
 unsigned char *write_buf;
 int write_cnt;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct tty_port *port;
};
struct tty_file_private {
 struct tty_struct *tty;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct file *file;
};
#define TTY_MAGIC 0x5401
#define TTY_THROTTLED 0
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define TTY_IO_ERROR 1
#define TTY_OTHER_CLOSED 2
#define TTY_EXCLUSIVE 3
#define TTY_DEBUG 4
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define TTY_DO_WRITE_WAKEUP 5
#define TTY_PUSH 6
#define TTY_CLOSING 7
#define TTY_LDISC 9
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define TTY_LDISC_CHANGING 10
#define TTY_LDISC_OPEN 11
#define TTY_HW_COOK_OUT 14
#define TTY_HW_COOK_IN 15
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define TTY_PTY_LOCK 16
#define TTY_NO_WRITE_SPLIT 17
#define TTY_HUPPED 18
#define TTY_HUPPING 21
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define TTY_LDISC_HALTED 22
#define TTY_WRITE_FLUSH(tty) tty_write_flush((tty))
#define TTY_THROTTLE_SAFE 1
#define TTY_UNTHROTTLE_SAFE 2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define tty_is_writelocked(tty) (mutex_is_locked(&tty->atomic_write_lock))
#define wait_event_interruptible_tty(tty, wq, condition)  ({   int __ret = 0;   if (!(condition)) {   __wait_event_interruptible_tty(tty, wq, condition, __ret);   }   __ret;  })
#define __wait_event_interruptible_tty(tty, wq, condition, ret)  do {   DEFINE_WAIT(__wait);     for (;;) {   prepare_to_wait(&wq, &__wait, TASK_INTERRUPTIBLE);   if (condition)   break;   if (!signal_pending(current)) {   tty_unlock(tty);   schedule();   tty_lock(tty);   continue;   }   ret = -ERESTARTSYS;   break;   }   finish_wait(&wq, &__wait);  } while (0)
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
