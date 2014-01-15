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
#ifndef __LINUX_USB_PHY_H
#define __LINUX_USB_PHY_H
#include <linux/notifier.h>
#include <linux/usb.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum usb_phy_interface {
 USBPHY_INTERFACE_MODE_UNKNOWN,
 USBPHY_INTERFACE_MODE_UTMI,
 USBPHY_INTERFACE_MODE_UTMIW,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 USBPHY_INTERFACE_MODE_ULPI,
 USBPHY_INTERFACE_MODE_SERIAL,
 USBPHY_INTERFACE_MODE_HSIC,
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum usb_phy_events {
 USB_EVENT_NONE,
 USB_EVENT_VBUS,
 USB_EVENT_ID,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 USB_EVENT_CHARGER,
 USB_EVENT_ENUMERATED,
};
enum usb_phy_type {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 USB_PHY_TYPE_UNDEFINED,
 USB_PHY_TYPE_USB2,
 USB_PHY_TYPE_USB3,
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum usb_otg_state {
 OTG_STATE_UNDEFINED = 0,
 OTG_STATE_B_IDLE,
 OTG_STATE_B_SRP_INIT,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 OTG_STATE_B_PERIPHERAL,
 OTG_STATE_B_WAIT_ACON,
 OTG_STATE_B_HOST,
 OTG_STATE_A_IDLE,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 OTG_STATE_A_WAIT_VRISE,
 OTG_STATE_A_WAIT_BCON,
 OTG_STATE_A_HOST,
 OTG_STATE_A_SUSPEND,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 OTG_STATE_A_PERIPHERAL,
 OTG_STATE_A_WAIT_VFALL,
 OTG_STATE_A_VBUS_ERR,
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct usb_phy;
struct usb_otg;
struct usb_phy_io_ops {
 int (*read)(struct usb_phy *x, u32 reg);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*write)(struct usb_phy *x, u32 val, u32 reg);
};
struct usb_phy {
 struct device *dev;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 const char *label;
 unsigned int flags;
 enum usb_phy_type type;
 enum usb_otg_state state;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 enum usb_phy_events last_event;
 struct usb_otg *otg;
 struct device *io_dev;
 struct usb_phy_io_ops *io_ops;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void __iomem *io_priv;
 struct atomic_notifier_head notifier;
 u16 port_status;
 u16 port_change;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*init)(struct usb_phy *x);
 void (*shutdown)(struct usb_phy *x);
 int (*set_vbus)(struct usb_phy *x, int on);
 int (*set_power)(struct usb_phy *x,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned mA);
 int (*set_suspend)(struct usb_phy *x,
 int suspend);
 int (*set_wakeup)(struct usb_phy *x, bool enabled);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*notify_connect)(struct usb_phy *x,
 enum usb_device_speed speed);
 int (*notify_disconnect)(struct usb_phy *x,
 enum usb_device_speed speed);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*notify_suspend)(struct usb_phy *x,
 enum usb_device_speed speed);
 int (*notify_resume)(struct usb_phy *x,
 enum usb_device_speed speed);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct usb_phy_bind {
 const char *dev_name;
 const char *phy_dev_name;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 index;
 struct usb_phy *phy;
};
#if ???
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#else
#endif
#endif
