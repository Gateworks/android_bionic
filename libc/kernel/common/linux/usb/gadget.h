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
#ifndef __LINUX_USB_GADGET_H
#define __LINUX_USB_GADGET_H
#include <linux/device.h>
#include <linux/errno.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/init.h>
#include <linux/list.h>
#include <linux/slab.h>
#include <linux/scatterlist.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/types.h>
#include <linux/usb/ch9.h>
struct usb_ep;
struct usb_request {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void *buf;
 unsigned length;
 dma_addr_t dma;
 struct scatterlist *sg;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned num_sgs;
 unsigned num_mapped_sgs;
 unsigned stream_id:16;
 unsigned no_interrupt:1;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned zero:1;
 unsigned short_not_ok:1;
 void (*complete)(struct usb_ep *ep,
 struct usb_request *req);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void *context;
 int status;
 unsigned actual;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct usb_ep_ops {
 int (*enable) (struct usb_ep *ep,
 const struct usb_endpoint_descriptor *desc);
 int (*disable) (struct usb_ep *ep);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct usb_request *(*alloc_request) (struct usb_ep *ep,
 gfp_t gfp_flags);
 void (*free_request) (struct usb_ep *ep, struct usb_request *req);
 int (*queue) (struct usb_ep *ep, struct usb_request *req,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 gfp_t gfp_flags);
 int (*dequeue) (struct usb_ep *ep, struct usb_request *req);
 int (*set_halt) (struct usb_ep *ep, int value);
 int (*set_wedge) (struct usb_ep *ep);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*fifo_status) (struct usb_ep *ep);
 void (*fifo_flush) (struct usb_ep *ep);
};
struct usb_ep {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void *driver_data;
 const char *name;
 const struct usb_ep_ops *ops;
 unsigned maxpacket:16;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned max_streams:16;
 unsigned mult:2;
 unsigned maxburst:5;
 u8 address;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 const struct usb_endpoint_descriptor *desc;
 const struct usb_ss_ep_comp_descriptor *comp_desc;
};
struct usb_dcd_config_params {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 bU1devExitLat;
#define USB_DEFAULT_U1_DEV_EXIT_LAT 0x01
 __le16 bU2DevExitLat;
#define USB_DEFAULT_U2_DEV_EXIT_LAT 0x1F4
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct usb_gadget;
struct usb_gadget_driver;
struct usb_gadget_ops {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*get_frame)(struct usb_gadget *);
 int (*wakeup)(struct usb_gadget *);
 int (*set_selfpowered) (struct usb_gadget *, int is_selfpowered);
 int (*vbus_session) (struct usb_gadget *, int is_active);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*vbus_draw) (struct usb_gadget *, unsigned mA);
 int (*pullup) (struct usb_gadget *, int is_on);
 int (*ioctl)(struct usb_gadget *,
 unsigned code, unsigned long param);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void (*get_config_params)(struct usb_dcd_config_params *);
 int (*udc_start)(struct usb_gadget *,
 struct usb_gadget_driver *);
 int (*udc_stop)(struct usb_gadget *,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct usb_gadget_driver *);
};
struct usb_gadget {
 const struct usb_gadget_ops *ops;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct usb_ep *ep0;
 enum usb_device_speed speed;
 enum usb_device_speed max_speed;
 enum usb_device_state state;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned sg_supported:1;
 unsigned is_otg:1;
 unsigned is_a_peripheral:1;
 unsigned b_hnp_enable:1;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned a_hnp_support:1;
 unsigned a_alt_hnp_support:1;
 const char *name;
 struct device dev;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned out_epnum;
 unsigned in_epnum;
};
#define gadget_for_each_ep(tmp, gadget)   list_for_each_entry(tmp, &(gadget)->ep_list, ep_list)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct usb_gadget_driver {
 char *function;
 enum usb_device_speed max_speed;
 int (*bind)(struct usb_gadget *gadget,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct usb_gadget_driver *driver);
 void (*unbind)(struct usb_gadget *);
 int (*setup)(struct usb_gadget *,
 const struct usb_ctrlrequest *);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void (*disconnect)(struct usb_gadget *);
 void (*suspend)(struct usb_gadget *);
 void (*resume)(struct usb_gadget *);
 struct device_driver driver;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct usb_string {
 u8 id;
 const char *s;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct usb_gadget_strings {
 u16 language;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct usb_gadget_string_container {
 u8 *stash[0];
};
struct usb_descriptor_header **usb_copy_descriptors(
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct usb_descriptor_header **);
struct usb_function;
#endif
