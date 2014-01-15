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
#ifndef LLC_PDU_H
#define LLC_PDU_H
#include <linux/if_ether.h>
#define LLC_PDU_LEN_I 4
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define LLC_PDU_LEN_S 4
#define LLC_PDU_LEN_U 3
#define LLC_GLOBAL_SAP 0xFF
#define LLC_NULL_SAP 0x00
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define LLC_MGMT_INDIV 0x02
#define LLC_MGMT_GRP 0x03
#define LLC_RDE_SAP 0xA6
#define LLC_ISO_RESERVED_SAP 0x02
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define LLC_SAP_GROUP_DSAP 0x01
#define LLC_SAP_RESP_SSAP 0x01
#define LLC_PDU_GROUP_DSAP_MASK 0x01
#define LLC_PDU_IS_GROUP_DSAP(pdu)   ((pdu->dsap & LLC_PDU_GROUP_DSAP_MASK) ? 0 : 1)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define LLC_PDU_IS_INDIV_DSAP(pdu)   (!(pdu->dsap & LLC_PDU_GROUP_DSAP_MASK) ? 0 : 1)
#define LLC_PDU_CMD_RSP_MASK 0x01
#define LLC_PDU_CMD 0
#define LLC_PDU_RSP 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define LLC_PDU_IS_CMD(pdu) ((pdu->ssap & LLC_PDU_RSP) ? 0 : 1)
#define LLC_PDU_IS_RSP(pdu) ((pdu->ssap & LLC_PDU_RSP) ? 1 : 0)
#define LLC_PDU_TYPE_I_MASK 0x01
#define LLC_PDU_TYPE_S_MASK 0x03
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define LLC_PDU_TYPE_U_MASK 0x03
#define LLC_PDU_TYPE_MASK 0x03
#define LLC_PDU_TYPE_I 0
#define LLC_PDU_TYPE_S 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define LLC_PDU_TYPE_U 3
#define LLC_PDU_TYPE_IS_I(pdu)   ((!(pdu->ctrl_1 & LLC_PDU_TYPE_I_MASK)) ? 1 : 0)
#define LLC_PDU_TYPE_IS_U(pdu)   (((pdu->ctrl_1 & LLC_PDU_TYPE_U_MASK) == LLC_PDU_TYPE_U) ? 1 : 0)
#define LLC_PDU_TYPE_IS_S(pdu)   (((pdu->ctrl_1 & LLC_PDU_TYPE_S_MASK) == LLC_PDU_TYPE_S) ? 1 : 0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define LLC_U_PF_BIT_MASK 0x10
#define LLC_U_PF_IS_1(pdu) ((pdu->ctrl_1 & LLC_U_PF_BIT_MASK) ? 1 : 0)
#define LLC_U_PF_IS_0(pdu) ((!(pdu->ctrl_1 & LLC_U_PF_BIT_MASK)) ? 1 : 0)
#define LLC_U_PDU_CMD_MASK 0xEC
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define LLC_U_PDU_CMD(pdu) (pdu->ctrl_1 & LLC_U_PDU_CMD_MASK)
#define LLC_U_PDU_RSP(pdu) (pdu->ctrl_1 & LLC_U_PDU_CMD_MASK)
#define LLC_1_PDU_CMD_UI 0x00
#define LLC_1_PDU_CMD_XID 0xAC
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define LLC_1_PDU_CMD_TEST 0xE0
#define LLC_2_PDU_CMD_SABME 0x6C
#define LLC_2_PDU_CMD_DISC 0x40
#define LLC_2_PDU_RSP_UA 0x60
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define LLC_2_PDU_RSP_DM 0x0C
#define LLC_2_PDU_RSP_FRMR 0x84
#define LLC_XID_FMT_ID 0x81
#define LLC_XID_CLASS_ZEROS_MASK 0xE0
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define LLC_XID_CLASS_MASK 0x1F
#define LLC_XID_NULL_CLASS_1 0x01
#define LLC_XID_NULL_CLASS_2 0x03
#define LLC_XID_NULL_CLASS_3 0x05
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define LLC_XID_NULL_CLASS_4 0x07
#define LLC_XID_NNULL_TYPE_1 0x01
#define LLC_XID_NNULL_TYPE_2 0x02
#define LLC_XID_NNULL_TYPE_3 0x04
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define LLC_XID_NNULL_TYPE_1_2 0x03
#define LLC_XID_NNULL_TYPE_1_3 0x05
#define LLC_XID_NNULL_TYPE_2_3 0x06
#define LLC_XID_NNULL_ALL 0x07
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define LLC_XID_RW_MASK 0xFE
#define LLC_XID_MIN_RW 0x02
#define LLC_2_SEQ_NBR_MODULO ((u8) 128)
#define LLC_I_GET_NS(pdu) (u8)((pdu->ctrl_1 & 0xFE) >> 1)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define LLC_I_GET_NR(pdu) (u8)((pdu->ctrl_2 & 0xFE) >> 1)
#define LLC_I_PF_BIT_MASK 0x01
#define LLC_I_PF_IS_0(pdu) ((!(pdu->ctrl_2 & LLC_I_PF_BIT_MASK)) ? 1 : 0)
#define LLC_I_PF_IS_1(pdu) ((pdu->ctrl_2 & LLC_I_PF_BIT_MASK) ? 1 : 0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define LLC_S_PDU_CMD_MASK 0x0C
#define LLC_S_PDU_CMD(pdu) (pdu->ctrl_1 & LLC_S_PDU_CMD_MASK)
#define LLC_S_PDU_RSP(pdu) (pdu->ctrl_1 & LLC_S_PDU_CMD_MASK)
#define LLC_2_PDU_CMD_RR 0x00
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define LLC_2_PDU_RSP_RR 0x00
#define LLC_2_PDU_CMD_REJ 0x08
#define LLC_2_PDU_RSP_REJ 0x08
#define LLC_2_PDU_CMD_RNR 0x04
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define LLC_2_PDU_RSP_RNR 0x04
#define LLC_S_PF_BIT_MASK 0x01
#define LLC_S_PF_IS_0(pdu) ((!(pdu->ctrl_2 & LLC_S_PF_BIT_MASK)) ? 1 : 0)
#define LLC_S_PF_IS_1(pdu) ((pdu->ctrl_2 & LLC_S_PF_BIT_MASK) ? 1 : 0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PDU_SUPV_GET_Nr(pdu) ((pdu->ctrl_2 & 0xFE) >> 1)
#define PDU_GET_NEXT_Vr(sn) (++sn & ~LLC_2_SEQ_NBR_MODULO)
#define FRMR_INFO_LENGTH 5
#define FRMR_INFO_SET_REJ_CNTRL(info,rej_ctrl)   info->rej_pdu_ctrl = ((*((u8 *) rej_ctrl) &   LLC_PDU_TYPE_U) != LLC_PDU_TYPE_U ?   (u16)*((u16 *) rej_ctrl) :   (((u16) *((u8 *) rej_ctrl)) & 0x00FF))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define FRMR_INFO_SET_Vs(info,vs) (info->curr_ssv = (((u8) vs) << 1))
#define FRMR_INFO_SET_Vr(info,vr) (info->curr_rsv = (((u8) vr) << 1))
#define FRMR_INFO_SET_C_R_BIT(info, cr) (info->curr_rsv |= (((u8) cr) & 0x01))
#define FRMR_INFO_SET_INVALID_PDU_CTRL_IND(info, ind)   (info->ind_bits = ((info->ind_bits & 0xFE) | (((u8) ind) & 0x01)))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define FRMR_INFO_SET_INVALID_PDU_INFO_IND(info, ind)   (info->ind_bits = ( (info->ind_bits & 0xFD) | (((u8) ind) & 0x02)))
#define FRMR_INFO_SET_PDU_INFO_2LONG_IND(info, ind)   (info->ind_bits = ( (info->ind_bits & 0xFB) | (((u8) ind) & 0x04)))
#define FRMR_INFO_SET_PDU_INVALID_Nr_IND(info, ind)   (info->ind_bits = ( (info->ind_bits & 0xF7) | (((u8) ind) & 0x08)))
#define FRMR_INFO_SET_PDU_INVALID_Ns_IND(info, ind)   (info->ind_bits = ( (info->ind_bits & 0xEF) | (((u8) ind) & 0x10)))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct llc_pdu_sn {
 u8 dsap;
 u8 ssap;
 u8 ctrl_1;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 ctrl_2;
} __packed;
struct llc_pdu_un {
 u8 dsap;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 ssap;
 u8 ctrl_1;
} __packed;
struct llc_xid_info {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 fmt_id;
 u8 type;
 u8 rw;
} __packed;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct llc_frmr_info {
 u16 rej_pdu_ctrl;
 u8 curr_ssv;
 u8 curr_rsv;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 ind_bits;
} __packed;
#endif
