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
#ifndef __PDA_POWER_H__
#define __PDA_POWER_H__
#define PDA_POWER_CHARGE_AC (1 << 0)
#define PDA_POWER_CHARGE_USB (1 << 1)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct device;
struct pda_power_pdata {
 int (*init)(struct device *dev);
 int (*is_ac_online)(void);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*is_usb_online)(void);
 void (*set_charge)(int flags);
 void (*exit)(struct device *dev);
 int (*suspend)(pm_message_t state);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*resume)(void);
 char **supplied_to;
 size_t num_supplicants;
 unsigned int wait_for_status;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int wait_for_charger;
 unsigned int polling_interval;
 unsigned long ac_max_uA;
 bool use_otg_notifier;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#endif
