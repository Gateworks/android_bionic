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
#ifndef RENESAS_USB_H
#define RENESAS_USB_H
#include <linux/platform_device.h>
#include <linux/usb/ch9.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum {
 USBHS_HOST = 0,
 USBHS_GADGET,
 USBHS_MAX,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct renesas_usbhs_driver_callback {
 int (*notify_hotplug)(struct platform_device *pdev);
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct renesas_usbhs_platform_callback {
 int (*hardware_init)(struct platform_device *pdev);
 int (*hardware_exit)(struct platform_device *pdev);
 int (*power_ctrl)(struct platform_device *pdev,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void __iomem *base, int enable);
 int (*phy_reset)(struct platform_device *pdev);
 int (*get_id)(struct platform_device *pdev);
 int (*get_vbus)(struct platform_device *pdev);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*set_vbus)(struct platform_device *pdev, int enable);
};
struct renesas_usbhs_driver_param {
 u32 *pipe_type;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int pipe_size;
 int buswait_bwait;
 int detection_delay;
 int d0_tx_id;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int d0_rx_id;
 int d1_tx_id;
 int d1_rx_id;
 int pio_dma_border;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 has_otg:1;
 u32 has_sudmac:1;
};
struct renesas_usbhs_platform_info {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct renesas_usbhs_platform_callback platform_callback;
 struct renesas_usbhs_driver_callback driver_callback;
 struct renesas_usbhs_driver_param driver_param;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define renesas_usbhs_get_info(pdev)  ((struct renesas_usbhs_platform_info *)(pdev)->dev.platform_data)
#define renesas_usbhs_call_notify_hotplug(pdev)   ({   struct renesas_usbhs_driver_callback *dc;   dc = &(renesas_usbhs_get_info(pdev)->driver_callback);   if (dc && dc->notify_hotplug)   dc->notify_hotplug(pdev);   })
#endif
