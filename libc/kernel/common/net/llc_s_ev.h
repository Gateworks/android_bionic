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
#ifndef LLC_S_EV_H
#define LLC_S_EV_H
#include <linux/skbuff.h>
#define LLC_SAP_EV_TYPE_SIMPLE 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define LLC_SAP_EV_TYPE_CONDITION 2
#define LLC_SAP_EV_TYPE_PRIM 3
#define LLC_SAP_EV_TYPE_PDU 4
#define LLC_SAP_EV_TYPE_ACK_TMR 5
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define LLC_SAP_EV_TYPE_RPT_STATUS 6
#define LLC_SAP_EV_ACTIVATION_REQ 1
#define LLC_SAP_EV_RX_UI 2
#define LLC_SAP_EV_UNITDATA_REQ 3
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define LLC_SAP_EV_XID_REQ 4
#define LLC_SAP_EV_RX_XID_C 5
#define LLC_SAP_EV_RX_XID_R 6
#define LLC_SAP_EV_TEST_REQ 7
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define LLC_SAP_EV_RX_TEST_C 8
#define LLC_SAP_EV_RX_TEST_R 9
#define LLC_SAP_EV_DEACTIVATION_REQ 10
struct llc_sap_state_ev {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 prim;
 u8 prim_type;
 u8 type;
 u8 reason;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 ind_cfm_flag;
 struct llc_addr saddr;
 struct llc_addr daddr;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct llc_sap;
typedef int (*llc_sap_ev_t)(struct llc_sap *sap, struct sk_buff *skb);
#endif
