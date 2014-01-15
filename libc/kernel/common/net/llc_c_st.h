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
#ifndef LLC_C_ST_H
#define LLC_C_ST_H
#define LLC_CONN_OUT_OF_SVC 0
#define LLC_CONN_STATE_ADM 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define LLC_CONN_STATE_SETUP 2
#define LLC_CONN_STATE_NORMAL 3
#define LLC_CONN_STATE_BUSY 4
#define LLC_CONN_STATE_REJ 5
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define LLC_CONN_STATE_AWAIT 6
#define LLC_CONN_STATE_AWAIT_BUSY 7
#define LLC_CONN_STATE_AWAIT_REJ 8
#define LLC_CONN_STATE_D_CONN 9
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define LLC_CONN_STATE_RESET 10
#define LLC_CONN_STATE_ERROR 11
#define LLC_CONN_STATE_TEMP 12
#define NBR_CONN_STATES 12
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NO_STATE_CHANGE 100
struct llc_conn_state_trans {
 llc_conn_ev_t ev;
 u8 next_state;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 llc_conn_ev_qfyr_t *ev_qualifiers;
 llc_conn_action_t *ev_actions;
};
struct llc_conn_state {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 current_state;
 struct llc_conn_state_trans **transitions;
};
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
