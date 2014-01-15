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
#ifndef _SLHC_H
#define _SLHC_H
#include <linux/ip.h>
#include <linux/tcp.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SL_TYPE_IP 0x40
#define SL_TYPE_UNCOMPRESSED_TCP 0x70
#define SL_TYPE_COMPRESSED_TCP 0x80
#define SL_TYPE_ERROR 0x00
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NEW_C 0x40
#define NEW_I 0x20
#define NEW_S 0x08
#define NEW_A 0x04
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NEW_W 0x02
#define NEW_U 0x01
#define SPECIAL_I (NEW_S|NEW_W|NEW_U)
#define SPECIAL_D (NEW_S|NEW_A|NEW_W|NEW_U)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SPECIALS_MASK (NEW_S|NEW_A|NEW_W|NEW_U)
#define TCP_PUSH_BIT 0x10
typedef __u8 byte_t;
typedef __u32 int32;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct cstate {
 byte_t cs_this;
 struct cstate *next;
 struct iphdr cs_ip;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct tcphdr cs_tcp;
 unsigned char cs_ipopt[64];
 unsigned char cs_tcpopt[64];
 int cs_hsize;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define NULLSLSTATE (struct cstate *)0
struct slcompress {
 struct cstate *tstate;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct cstate *rstate;
 byte_t tslot_limit;
 byte_t rslot_limit;
 byte_t xmit_oldest;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 byte_t xmit_current;
 byte_t recv_current;
 byte_t flags;
#define SLF_TOSS 0x01
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int32 sls_o_nontcp;
 int32 sls_o_tcp;
 int32 sls_o_uncompressed;
 int32 sls_o_compressed;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int32 sls_o_searches;
 int32 sls_o_misses;
 int32 sls_i_uncompressed;
 int32 sls_i_compressed;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int32 sls_i_error;
 int32 sls_i_tossed;
 int32 sls_i_runt;
 int32 sls_i_badcheck;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define NULLSLCOMPR (struct slcompress *)0
struct slcompress *slhc_init(int rslots, int tslots);
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
