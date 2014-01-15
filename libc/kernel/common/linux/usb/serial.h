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
#ifndef __LINUX_USB_SERIAL_H
#define __LINUX_USB_SERIAL_H
#include <linux/kref.h>
#include <linux/mutex.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/serial.h>
#include <linux/sysrq.h>
#include <linux/kfifo.h>
#define SERIAL_TTY_MAJOR 188
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SERIAL_TTY_MINORS 254
#define SERIAL_TTY_NO_MINOR 255
#define MAX_NUM_PORTS 8
#define RELEVANT_IFLAG(iflag) (iflag & (IGNBRK|BRKINT|IGNPAR|PARMRK|INPCK))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define USB_SERIAL_WRITE_BUSY 0
struct usb_serial_port {
 struct usb_serial *serial;
 struct tty_port port;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 spinlock_t lock;
 unsigned char number;
 unsigned char *interrupt_in_buffer;
 struct urb *interrupt_in_urb;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 interrupt_in_endpointAddress;
 unsigned char *interrupt_out_buffer;
 int interrupt_out_size;
 struct urb *interrupt_out_urb;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 interrupt_out_endpointAddress;
 unsigned char *bulk_in_buffer;
 int bulk_in_size;
 struct urb *read_urb;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 bulk_in_endpointAddress;
 unsigned char *bulk_in_buffers[2];
 struct urb *read_urbs[2];
 unsigned long read_urbs_free;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned char *bulk_out_buffer;
 int bulk_out_size;
 struct urb *write_urb;
 struct kfifo write_fifo;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned char *bulk_out_buffers[2];
 struct urb *write_urbs[2];
 unsigned long write_urbs_free;
 __u8 bulk_out_endpointAddress;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct async_icount icount;
 int tx_bytes;
 unsigned long flags;
 wait_queue_head_t write_wait;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 char throttled;
 char throttle_req;
 unsigned long sysrq;
 struct device dev;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define to_usb_serial_port(d) container_of(d, struct usb_serial_port, dev)
struct usb_serial {
 struct usb_device *dev;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct usb_serial_driver *type;
 struct usb_interface *interface;
 unsigned char disconnected:1;
 unsigned char suspending:1;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned char attached:1;
 unsigned char minor;
 unsigned char num_ports;
 unsigned char num_port_pointers;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 char num_interrupt_in;
 char num_interrupt_out;
 char num_bulk_in;
 char num_bulk_out;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct usb_serial_port *port[MAX_NUM_PORTS];
 struct kref kref;
 struct mutex disc_mutex;
 void *private;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define to_usb_serial(d) container_of(d, struct usb_serial, kref)
struct usb_serial_driver {
 const char *description;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 const struct usb_device_id *id_table;
 char num_ports;
 struct device_driver driver;
 struct usb_driver *usb_driver;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct usb_dynids dynids;
 size_t bulk_in_size;
 size_t bulk_out_size;
 int (*probe)(struct usb_serial *serial, const struct usb_device_id *id);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*attach)(struct usb_serial *serial);
 int (*calc_num_ports) (struct usb_serial *serial);
 void (*disconnect)(struct usb_serial *serial);
 void (*release)(struct usb_serial *serial);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*port_probe)(struct usb_serial_port *port);
 int (*port_remove)(struct usb_serial_port *port);
 int (*suspend)(struct usb_serial *serial, pm_message_t message);
 int (*resume)(struct usb_serial *serial);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*reset_resume)(struct usb_serial *serial);
 int (*open)(struct tty_struct *tty, struct usb_serial_port *port);
 void (*close)(struct usb_serial_port *port);
 int (*write)(struct tty_struct *tty, struct usb_serial_port *port,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 const unsigned char *buf, int count);
 int (*write_room)(struct tty_struct *tty);
 int (*ioctl)(struct tty_struct *tty,
 unsigned int cmd, unsigned long arg);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void (*set_termios)(struct tty_struct *tty,
 struct usb_serial_port *port, struct ktermios *old);
 void (*break_ctl)(struct tty_struct *tty, int break_state);
 int (*chars_in_buffer)(struct tty_struct *tty);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void (*wait_until_sent)(struct tty_struct *tty, long timeout);
 bool (*tx_empty)(struct usb_serial_port *port);
 void (*throttle)(struct tty_struct *tty);
 void (*unthrottle)(struct tty_struct *tty);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*tiocmget)(struct tty_struct *tty);
 int (*tiocmset)(struct tty_struct *tty,
 unsigned int set, unsigned int clear);
 int (*tiocmiwait)(struct tty_struct *tty, unsigned long arg);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*get_icount)(struct tty_struct *tty,
 struct serial_icounter_struct *icount);
 void (*dtr_rts)(struct usb_serial_port *port, int on);
 int (*carrier_raised)(struct usb_serial_port *port);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void (*init_termios)(struct tty_struct *tty);
 void (*read_int_callback)(struct urb *urb);
 void (*write_int_callback)(struct urb *urb);
 void (*read_bulk_callback)(struct urb *urb);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void (*write_bulk_callback)(struct urb *urb);
 void (*process_read_urb)(struct urb *urb);
 int (*prepare_write_buffer)(struct usb_serial_port *port,
 void *dest, size_t size);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define to_usb_serial_driver(d)   container_of(d, struct usb_serial_driver, driver)
#define dev_err_console(usport, fmt, ...)  do {   static bool __print_once;   struct usb_serial_port *__port = (usport);     if (!__port->port.console || !__print_once) {   __print_once = true;   dev_err(&__port->dev, fmt, ##__VA_ARGS__);   }  } while (0)
#define usb_serial_module_driver(__name, __serial_drivers, __ids)  static int __init usb_serial_module_init(void)  {   return usb_serial_register_drivers(__serial_drivers,   __name, __ids);  }  module_init(usb_serial_module_init);  static void __exit usb_serial_module_exit(void)  {   usb_serial_deregister_drivers(__serial_drivers);  }  module_exit(usb_serial_module_exit);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define module_usb_serial_driver(__serial_drivers, __ids)   usb_serial_module_driver(KBUILD_MODNAME, __serial_drivers, __ids)
#endif
