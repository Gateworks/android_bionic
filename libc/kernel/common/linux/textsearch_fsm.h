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
#ifndef __LINUX_TEXTSEARCH_FSM_H
#define __LINUX_TEXTSEARCH_FSM_H
#include <linux/types.h>
enum {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 TS_FSM_SPECIFIC,
 TS_FSM_WILDCARD,
 TS_FSM_DIGIT,
 TS_FSM_XDIGIT,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 TS_FSM_PRINT,
 TS_FSM_ALPHA,
 TS_FSM_ALNUM,
 TS_FSM_ASCII,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 TS_FSM_CNTRL,
 TS_FSM_GRAPH,
 TS_FSM_LOWER,
 TS_FSM_UPPER,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 TS_FSM_PUNCT,
 TS_FSM_SPACE,
 __TS_FSM_TYPE_MAX,
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define TS_FSM_TYPE_MAX (__TS_FSM_TYPE_MAX - 1)
enum {
 TS_FSM_SINGLE,
 TS_FSM_PERHAPS,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 TS_FSM_ANY,
 TS_FSM_MULTI,
 TS_FSM_HEAD_IGNORE,
 __TS_FSM_RECUR_MAX,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define TS_FSM_RECUR_MAX (__TS_FSM_RECUR_MAX - 1)
struct ts_fsm_token
{
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u16 type;
 __u8 recur;
 __u8 value;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
