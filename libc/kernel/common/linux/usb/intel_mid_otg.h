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
#ifndef __INTEL_MID_OTG_H
#define __INTEL_MID_OTG_H
#include <linux/pm.h>
#include <linux/usb/otg.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/notifier.h>
struct intel_mid_otg_xceiv;
struct otg_hsm {
 int a_bus_resume;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int a_bus_suspend;
 int a_conn;
 int a_sess_vld;
 int a_srp_det;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int a_vbus_vld;
 int b_bus_resume;
 int b_bus_suspend;
 int b_conn;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int b_se0_srp;
 int b_ssend_srp;
 int b_sess_end;
 int b_sess_vld;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int id;
#define ID_B 0x05
#define ID_A 0x04
#define ID_ACA_C 0x03
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ID_ACA_B 0x02
#define ID_ACA_A 0x01
 int power_up;
 int adp_change;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int test_device;
 int a_set_b_hnp_en;
 int b_srp_done;
 int b_hnp_enable;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int hnp_poll_enable;
 int a_wait_vrise_tmout;
 int a_wait_bcon_tmout;
 int a_aidl_bdis_tmout;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int a_bidl_adis_tmout;
 int a_bidl_adis_tmr;
 int a_wait_vfall_tmout;
 int b_ase0_brst_tmout;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int b_bus_suspend_tmout;
 int b_srp_init_tmout;
 int b_srp_fail_tmout;
 int b_srp_fail_tmr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int b_adp_sense_tmout;
 int a_bus_drop;
 int a_bus_req;
 int a_clr_err;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int b_bus_req;
 int a_suspend_req;
 int b_bus_suspend_vld;
 int drv_vbus;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int loc_conn;
 int loc_sof;
 int vbus_srp_up;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct iotg_ulpi_access_ops {
 int (*read)(struct intel_mid_otg_xceiv *iotg, u8 reg, u8 *val);
 int (*write)(struct intel_mid_otg_xceiv *iotg, u8 reg, u8 val);
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define OTG_A_DEVICE 0x0
#define OTG_B_DEVICE 0x1
struct intel_mid_otg_xceiv {
 struct usb_phy otg;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct otg_hsm hsm;
 void __iomem *base;
 struct iotg_ulpi_access_ops ulpi_ops;
 struct atomic_notifier_head iotg_notifier;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*start_host)(struct intel_mid_otg_xceiv *iotg);
 int (*stop_host)(struct intel_mid_otg_xceiv *iotg);
 int (*start_peripheral)(struct intel_mid_otg_xceiv *iotg);
 int (*stop_peripheral)(struct intel_mid_otg_xceiv *iotg);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*set_adp_probe)(struct intel_mid_otg_xceiv *iotg,
 bool enabled, int dev);
 int (*set_adp_sense)(struct intel_mid_otg_xceiv *iotg,
 bool enabled);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define MID_OTG_NOTIFY_CONNECT 0x0001
#define MID_OTG_NOTIFY_DISCONN 0x0002
#define MID_OTG_NOTIFY_HSUSPEND 0x0003
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MID_OTG_NOTIFY_HRESUME 0x0004
#define MID_OTG_NOTIFY_CSUSPEND 0x0005
#define MID_OTG_NOTIFY_CRESUME 0x0006
#define MID_OTG_NOTIFY_HOSTADD 0x0007
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MID_OTG_NOTIFY_HOSTREMOVE 0x0008
#define MID_OTG_NOTIFY_CLIENTADD 0x0009
#define MID_OTG_NOTIFY_CLIENTREMOVE 0x000a
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
