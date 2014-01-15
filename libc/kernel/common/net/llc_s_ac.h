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
#ifndef LLC_S_AC_H
#define LLC_S_AC_H
#define SAP_ACT_UNITDATA_IND 1
#define SAP_ACT_SEND_UI 2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SAP_ACT_SEND_XID_C 3
#define SAP_ACT_SEND_XID_R 4
#define SAP_ACT_SEND_TEST_C 5
#define SAP_ACT_SEND_TEST_R 6
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SAP_ACT_REPORT_STATUS 7
#define SAP_ACT_XID_IND 8
#define SAP_ACT_TEST_IND 9
typedef int (*llc_sap_action_t)(struct llc_sap *sap, struct sk_buff *skb);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
