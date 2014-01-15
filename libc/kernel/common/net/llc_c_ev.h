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
#ifndef LLC_C_EV_H
#define LLC_C_EV_H
#include <net/sock.h>
#define LLC_CONN_EV_TYPE_SIMPLE 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define LLC_CONN_EV_TYPE_CONDITION 2
#define LLC_CONN_EV_TYPE_PRIM 3
#define LLC_CONN_EV_TYPE_PDU 4
#define LLC_CONN_EV_TYPE_ACK_TMR 5
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define LLC_CONN_EV_TYPE_P_TMR 6
#define LLC_CONN_EV_TYPE_REJ_TMR 7
#define LLC_CONN_EV_TYPE_BUSY_TMR 8
#define LLC_CONN_EV_TYPE_RPT_STATUS 9
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define LLC_CONN_EV_TYPE_SENDACK_TMR 10
#define NBR_CONN_EV 5
#define LLC_CONN_EV_CONN_REQ 1
#define LLC_CONN_EV_CONN_RESP 2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define LLC_CONN_EV_DATA_REQ 3
#define LLC_CONN_EV_DISC_REQ 4
#define LLC_CONN_EV_RESET_REQ 5
#define LLC_CONN_EV_RESET_RESP 6
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define LLC_CONN_EV_LOCAL_BUSY_DETECTED 7
#define LLC_CONN_EV_LOCAL_BUSY_CLEARED 8
#define LLC_CONN_EV_RX_BAD_PDU 9
#define LLC_CONN_EV_RX_DISC_CMD_Pbit_SET_X 10
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define LLC_CONN_EV_RX_DM_RSP_Fbit_SET_X 11
#define LLC_CONN_EV_RX_FRMR_RSP_Fbit_SET_X 12
#define LLC_CONN_EV_RX_I_CMD_Pbit_SET_X 13
#define LLC_CONN_EV_RX_I_CMD_Pbit_SET_X_UNEXPD_Ns 14
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define LLC_CONN_EV_RX_I_CMD_Pbit_SET_X_INVAL_Ns 15
#define LLC_CONN_EV_RX_I_RSP_Fbit_SET_X 16
#define LLC_CONN_EV_RX_I_RSP_Fbit_SET_X_UNEXPD_Ns 17
#define LLC_CONN_EV_RX_I_RSP_Fbit_SET_X_INVAL_Ns 18
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define LLC_CONN_EV_RX_REJ_CMD_Pbit_SET_X 19
#define LLC_CONN_EV_RX_REJ_RSP_Fbit_SET_X 20
#define LLC_CONN_EV_RX_RNR_CMD_Pbit_SET_X 21
#define LLC_CONN_EV_RX_RNR_RSP_Fbit_SET_X 22
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define LLC_CONN_EV_RX_RR_CMD_Pbit_SET_X 23
#define LLC_CONN_EV_RX_RR_RSP_Fbit_SET_X 24
#define LLC_CONN_EV_RX_SABME_CMD_Pbit_SET_X 25
#define LLC_CONN_EV_RX_UA_RSP_Fbit_SET_X 26
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define LLC_CONN_EV_RX_XXX_CMD_Pbit_SET_X 27
#define LLC_CONN_EV_RX_XXX_RSP_Fbit_SET_X 28
#define LLC_CONN_EV_RX_XXX_YYY 29
#define LLC_CONN_EV_RX_ZZZ_CMD_Pbit_SET_X_INVAL_Nr 30
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define LLC_CONN_EV_RX_ZZZ_RSP_Fbit_SET_X_INVAL_Nr 31
#define LLC_CONN_EV_P_TMR_EXP 32
#define LLC_CONN_EV_ACK_TMR_EXP 33
#define LLC_CONN_EV_REJ_TMR_EXP 34
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define LLC_CONN_EV_BUSY_TMR_EXP 35
#define LLC_CONN_EV_RX_XXX_CMD_Pbit_SET_1 36
#define LLC_CONN_EV_RX_XXX_CMD_Pbit_SET_0 37
#define LLC_CONN_EV_RX_I_CMD_Pbit_SET_0_UNEXPD_Ns 38
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define LLC_CONN_EV_RX_I_RSP_Fbit_SET_0_UNEXPD_Ns 39
#define LLC_CONN_EV_RX_I_RSP_Fbit_SET_1_UNEXPD_Ns 40
#define LLC_CONN_EV_RX_I_CMD_Pbit_SET_1_UNEXPD_Ns 41
#define LLC_CONN_EV_RX_I_CMD_Pbit_SET_0 42
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define LLC_CONN_EV_RX_I_RSP_Fbit_SET_0 43
#define LLC_CONN_EV_RX_I_CMD_Pbit_SET_1 44
#define LLC_CONN_EV_RX_RR_CMD_Pbit_SET_0 45
#define LLC_CONN_EV_RX_RR_RSP_Fbit_SET_0 46
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define LLC_CONN_EV_RX_RR_RSP_Fbit_SET_1 47
#define LLC_CONN_EV_RX_RR_CMD_Pbit_SET_1 48
#define LLC_CONN_EV_RX_RNR_CMD_Pbit_SET_0 49
#define LLC_CONN_EV_RX_RNR_RSP_Fbit_SET_0 50
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define LLC_CONN_EV_RX_RNR_RSP_Fbit_SET_1 51
#define LLC_CONN_EV_RX_RNR_CMD_Pbit_SET_1 52
#define LLC_CONN_EV_RX_REJ_CMD_Pbit_SET_0 53
#define LLC_CONN_EV_RX_REJ_RSP_Fbit_SET_0 54
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define LLC_CONN_EV_RX_REJ_CMD_Pbit_SET_1 55
#define LLC_CONN_EV_RX_I_RSP_Fbit_SET_1 56
#define LLC_CONN_EV_RX_REJ_RSP_Fbit_SET_1 57
#define LLC_CONN_EV_RX_XXX_RSP_Fbit_SET_1 58
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define LLC_CONN_EV_TX_BUFF_FULL 59
#define LLC_CONN_EV_INIT_P_F_CYCLE 100
#define LLC_CONN_EV_QFY_DATA_FLAG_EQ_1 1
#define LLC_CONN_EV_QFY_DATA_FLAG_EQ_0 2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define LLC_CONN_EV_QFY_DATA_FLAG_EQ_2 3
#define LLC_CONN_EV_QFY_P_FLAG_EQ_1 4
#define LLC_CONN_EV_QFY_P_FLAG_EQ_0 5
#define LLC_CONN_EV_QFY_P_FLAG_EQ_Fbit 6
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define LLC_CONN_EV_QFY_REMOTE_BUSY_EQ_0 7
#define LLC_CONN_EV_QFY_RETRY_CNT_LT_N2 8
#define LLC_CONN_EV_QFY_RETRY_CNT_GTE_N2 9
#define LLC_CONN_EV_QFY_S_FLAG_EQ_1 10
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define LLC_CONN_EV_QFY_S_FLAG_EQ_0 11
#define LLC_CONN_EV_QFY_INIT_P_F_CYCLE 12
struct llc_conn_state_ev {
 u8 type;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 prim;
 u8 prim_type;
 u8 reason;
 u8 status;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 ind_prim;
 u8 cfm_prim;
};
typedef int (*llc_conn_ev_t)(struct sock *sk, struct sk_buff *skb);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
typedef int (*llc_conn_ev_qfyr_t)(struct sock *sk, struct sk_buff *skb);
#endif
