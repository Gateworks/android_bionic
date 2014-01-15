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
#ifndef _LINUX_USB_C67X00_H
#define _LINUX_USB_C67X00_H
#define C67X00_SIE_UNUSED 0
#define C67X00_SIE_HOST 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define C67X00_SIE_PERIPHERAL_A 2
#define C67X00_SIE_PERIPHERAL_B 3
#define c67x00_sie_config(config, n) (((config)>>(4*(n)))&0x3)
#define C67X00_SIE1_UNUSED (C67X00_SIE_UNUSED << 0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define C67X00_SIE1_HOST (C67X00_SIE_HOST << 0)
#define C67X00_SIE1_PERIPHERAL_A (C67X00_SIE_PERIPHERAL_A << 0)
#define C67X00_SIE1_PERIPHERAL_B (C67X00_SIE_PERIPHERAL_B << 0)
#define C67X00_SIE2_UNUSED (C67X00_SIE_UNUSED << 4)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define C67X00_SIE2_HOST (C67X00_SIE_HOST << 4)
#define C67X00_SIE2_PERIPHERAL_A (C67X00_SIE_PERIPHERAL_A << 4)
#define C67X00_SIE2_PERIPHERAL_B (C67X00_SIE_PERIPHERAL_B << 4)
struct c67x00_platform_data {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int sie_config;
 unsigned long hpi_regstep;
};
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
