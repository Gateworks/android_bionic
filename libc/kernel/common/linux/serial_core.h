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
#ifndef LINUX_SERIAL_CORE_H
#define LINUX_SERIAL_CORE_H
#include <linux/compiler.h>
#include <linux/interrupt.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/circ_buf.h>
#include <linux/spinlock.h>
#include <linux/sched.h>
#include <linux/tty.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/mutex.h>
#include <linux/sysrq.h>
#include <uapi/linux/serial_core.h>
#define uart_console(port) (0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct uart_port;
struct serial_struct;
struct device;
struct uart_ops {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int (*tx_empty)(struct uart_port *);
 void (*set_mctrl)(struct uart_port *, unsigned int mctrl);
 unsigned int (*get_mctrl)(struct uart_port *);
 void (*stop_tx)(struct uart_port *);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void (*start_tx)(struct uart_port *);
 void (*throttle)(struct uart_port *);
 void (*unthrottle)(struct uart_port *);
 void (*send_xchar)(struct uart_port *, char ch);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void (*stop_rx)(struct uart_port *);
 void (*enable_ms)(struct uart_port *);
 void (*break_ctl)(struct uart_port *, int ctl);
 int (*startup)(struct uart_port *);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void (*shutdown)(struct uart_port *);
 void (*flush_buffer)(struct uart_port *);
 void (*set_termios)(struct uart_port *, struct ktermios *new,
 struct ktermios *old);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void (*set_ldisc)(struct uart_port *, int new);
 void (*pm)(struct uart_port *, unsigned int state,
 unsigned int oldstate);
 int (*set_wake)(struct uart_port *, unsigned int state);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void (*wake_peer)(struct uart_port *);
 const char *(*type)(struct uart_port *);
 void (*release_port)(struct uart_port *);
 int (*request_port)(struct uart_port *);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void (*config_port)(struct uart_port *, int);
 int (*verify_port)(struct uart_port *, struct serial_struct *);
 int (*ioctl)(struct uart_port *, unsigned int, unsigned long);
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NO_POLL_CHAR 0x00ff0000
#define UART_CONFIG_TYPE (1 << 0)
#define UART_CONFIG_IRQ (1 << 1)
struct uart_icount {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 cts;
 __u32 dsr;
 __u32 rng;
 __u32 dcd;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 rx;
 __u32 tx;
 __u32 frame;
 __u32 overrun;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 parity;
 __u32 brk;
 __u32 buf_overrun;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
typedef unsigned int __bitwise__ upf_t;
struct uart_port {
 spinlock_t lock;
 unsigned long iobase;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned char __iomem *membase;
 unsigned int (*serial_in)(struct uart_port *, int);
 void (*serial_out)(struct uart_port *, int, int);
 void (*set_termios)(struct uart_port *,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct ktermios *new,
 struct ktermios *old);
 int (*handle_irq)(struct uart_port *);
 void (*pm)(struct uart_port *, unsigned int state,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int old);
 void (*handle_break)(struct uart_port *);
 unsigned int irq;
 unsigned long irqflags;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int uartclk;
 unsigned int fifosize;
 unsigned char x_char;
 unsigned char regshift;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned char iotype;
 unsigned char unused1;
#define UPIO_PORT (0)
#define UPIO_HUB6 (1)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define UPIO_MEM (2)
#define UPIO_MEM32 (3)
#define UPIO_AU (4)
#define UPIO_TSI (5)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int read_status_mask;
 unsigned int ignore_status_mask;
 struct uart_state *state;
 struct uart_icount icount;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct console *cons;
#ifdef SUPPORT_SYSRQ
 unsigned long sysrq;
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 upf_t flags;
#define UPF_FOURPORT ((__force upf_t) (1 << 1))
#define UPF_SAK ((__force upf_t) (1 << 2))
#define UPF_SPD_MASK ((__force upf_t) (0x1030))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define UPF_SPD_HI ((__force upf_t) (0x0010))
#define UPF_SPD_VHI ((__force upf_t) (0x0020))
#define UPF_SPD_CUST ((__force upf_t) (0x0030))
#define UPF_SPD_SHI ((__force upf_t) (0x1000))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define UPF_SPD_WARP ((__force upf_t) (0x1010))
#define UPF_SKIP_TEST ((__force upf_t) (1 << 6))
#define UPF_AUTO_IRQ ((__force upf_t) (1 << 7))
#define UPF_HARDPPS_CD ((__force upf_t) (1 << 11))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define UPF_LOW_LATENCY ((__force upf_t) (1 << 13))
#define UPF_BUGGY_UART ((__force upf_t) (1 << 14))
#define UPF_NO_TXEN_TEST ((__force upf_t) (1 << 15))
#define UPF_MAGIC_MULTIPLIER ((__force upf_t) (1 << 16))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define UPF_HARD_FLOW ((__force upf_t) (1 << 21))
#define UPF_SOFT_FLOW ((__force upf_t) (1 << 22))
#define UPF_CONS_FLOW ((__force upf_t) (1 << 23))
#define UPF_SHARE_IRQ ((__force upf_t) (1 << 24))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define UPF_EXAR_EFR ((__force upf_t) (1 << 25))
#define UPF_BUG_THRE ((__force upf_t) (1 << 26))
#define UPF_FIXED_TYPE ((__force upf_t) (1 << 27))
#define UPF_BOOT_AUTOCONF ((__force upf_t) (1 << 28))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define UPF_FIXED_PORT ((__force upf_t) (1 << 29))
#define UPF_DEAD ((__force upf_t) (1 << 30))
#define UPF_IOREMAP ((__force upf_t) (1 << 31))
#define UPF_CHANGE_MASK ((__force upf_t) (0x17fff))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define UPF_USR_MASK ((__force upf_t) (UPF_SPD_MASK|UPF_LOW_LATENCY))
 unsigned int mctrl;
 unsigned int timeout;
 unsigned int type;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 const struct uart_ops *ops;
 unsigned int custom_divisor;
 unsigned int line;
 resource_size_t mapbase;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct device *dev;
 unsigned char hub6;
 unsigned char suspended;
 unsigned char irq_wake;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned char unused[2];
 void *private_data;
};
enum uart_pm_state {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 UART_PM_STATE_ON = 0,
 UART_PM_STATE_OFF = 3,
 UART_PM_STATE_UNDEFINED,
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct uart_state {
 struct tty_port port;
 enum uart_pm_state pm_state;
 struct circ_buf xmit;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct uart_port *uart_port;
};
#define UART_XMIT_SIZE PAGE_SIZE
#define WAKEUP_CHARS 256
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct module;
struct tty_driver;
struct uart_driver {
 struct module *owner;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 const char *driver_name;
 const char *dev_name;
 int major;
 int minor;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int nr;
 struct console *cons;
 struct uart_state *state;
 struct tty_driver *tty_driver;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct uart_port *uart_get_console(struct uart_port *ports, int nr,
 struct console *c);
struct tty_driver *uart_console_device(struct console *co, int *index);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define uart_circ_empty(circ) ((circ)->head == (circ)->tail)
#define uart_circ_clear(circ) ((circ)->head = (circ)->tail = 0)
#define uart_circ_chars_pending(circ)   (CIRC_CNT((circ)->head, (circ)->tail, UART_XMIT_SIZE))
#define uart_circ_chars_free(circ)   (CIRC_SPACE((circ)->head, (circ)->tail, UART_XMIT_SIZE))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#ifdef SUPPORT_SYSRQ
#else
#define uart_handle_sysrq_char(port,ch) ({ (void)port; 0; })
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#ifdef SUPPORT_SYSRQ
#endif
#define UART_ENABLE_MS(port,cflag) ((port)->flags & UPF_HARDPPS_CD ||   (cflag) & CRTSCTS ||   !((cflag) & CLOCAL))
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
