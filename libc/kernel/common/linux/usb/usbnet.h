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
#ifndef __LINUX_USB_USBNET_H
#define __LINUX_USB_USBNET_H
struct usbnet {
 struct usb_device *udev;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct usb_interface *intf;
 struct driver_info *driver_info;
 const char *driver_name;
 void *driver_priv;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 wait_queue_head_t *wait;
 struct mutex phy_mutex;
 unsigned char suspend_count;
 unsigned char pkt_cnt, pkt_err;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned in, out;
 struct usb_host_endpoint *status;
 unsigned maxpacket;
 struct timer_list delay;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct net_device *net;
 int msg_enable;
 unsigned long data[5];
 u32 xid;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 hard_mtu;
 size_t rx_urb_size;
 struct mii_if_info mii;
 struct sk_buff_head rxq;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct sk_buff_head txq;
 struct sk_buff_head done;
 struct sk_buff_head rxq_pause;
 struct urb *interrupt;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned interrupt_count;
 struct mutex interrupt_mutex;
 struct usb_anchor deferred;
 struct tasklet_struct bh;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long flags;
#define EVENT_TX_HALT 0
#define EVENT_RX_HALT 1
#define EVENT_RX_MEMORY 2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define EVENT_STS_SPLIT 3
#define EVENT_LINK_RESET 4
#define EVENT_RX_PAUSED 5
#define EVENT_DEV_ASLEEP 6
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define EVENT_DEV_OPEN 7
#define EVENT_DEVICE_REPORT_IDLE 8
#define EVENT_NO_RUNTIME_PM 9
#define EVENT_RX_KILL 10
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define EVENT_LINK_CHANGE 11
};
struct driver_info {
 char *description;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int flags;
#define FLAG_FRAMING_NC 0x0001
#define FLAG_FRAMING_GL 0x0002
#define FLAG_FRAMING_Z 0x0004
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define FLAG_FRAMING_RN 0x0008
#define FLAG_NO_SETINT 0x0010
#define FLAG_ETHER 0x0020
#define FLAG_FRAMING_AX 0x0040
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define FLAG_WLAN 0x0080
#define FLAG_AVOID_UNLINK_URBS 0x0100
#define FLAG_SEND_ZLP 0x0200
#define FLAG_WWAN 0x0400
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define FLAG_LINK_INTR 0x0800
#define FLAG_POINTTOPOINT 0x1000
#define FLAG_MULTI_PACKET 0x2000
#define FLAG_RX_ASSEMBLE 0x4000
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define FLAG_NOARP 0x8000
 int (*bind)(struct usbnet *, struct usb_interface *);
 void (*unbind)(struct usbnet *, struct usb_interface *);
 int (*reset)(struct usbnet *);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*stop)(struct usbnet *);
 int (*check_connect)(struct usbnet *);
 int (*manage_power)(struct usbnet *, int);
 void (*status)(struct usbnet *, struct urb *);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*link_reset)(struct usbnet *);
 int (*rx_fixup)(struct usbnet *dev, struct sk_buff *skb);
 struct sk_buff *(*tx_fixup)(struct usbnet *dev,
 struct sk_buff *skb, gfp_t flags);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*early_init)(struct usbnet *dev);
 void (*indication)(struct usbnet *dev, void *ind, int indlen);
 int in;
 int out;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long data;
};
struct cdc_state {
 struct usb_cdc_header_desc *header;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct usb_cdc_union_desc *u;
 struct usb_cdc_ether_desc *ether;
 struct usb_interface *control;
 struct usb_interface *data;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define DEFAULT_FILTER (USB_CDC_PACKET_TYPE_BROADCAST   |USB_CDC_PACKET_TYPE_ALL_MULTICAST   |USB_CDC_PACKET_TYPE_PROMISCUOUS   |USB_CDC_PACKET_TYPE_DIRECTED)
enum skb_state {
 illegal = 0,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 tx_start, tx_done,
 rx_start, rx_done, rx_cleanup,
 unlink_start
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct skb_data {
 struct urb *urb;
 struct usbnet *dev;
 enum skb_state state;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 size_t length;
};
#endif
