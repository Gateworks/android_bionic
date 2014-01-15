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
#ifndef _PTP_CLASSIFY_H_
#define _PTP_CLASSIFY_H_
#include <linux/if_ether.h>
#include <linux/if_vlan.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/ip.h>
#include <linux/filter.h>
#include <netinet/in.h>
#define PTP_CLASS_NONE 0x00
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PTP_CLASS_V1 0x01
#define PTP_CLASS_V2 0x02
#define PTP_CLASS_VMASK 0x0f
#define PTP_CLASS_IPV4 0x10
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PTP_CLASS_IPV6 0x20
#define PTP_CLASS_L2 0x30
#define PTP_CLASS_VLAN 0x40
#define PTP_CLASS_PMASK 0xf0
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PTP_CLASS_V1_IPV4 (PTP_CLASS_V1 | PTP_CLASS_IPV4)
#define PTP_CLASS_V1_IPV6 (PTP_CLASS_V1 | PTP_CLASS_IPV6)
#define PTP_CLASS_V2_IPV4 (PTP_CLASS_V2 | PTP_CLASS_IPV4)
#define PTP_CLASS_V2_IPV6 (PTP_CLASS_V2 | PTP_CLASS_IPV6)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PTP_CLASS_V2_L2 (PTP_CLASS_V2 | PTP_CLASS_L2)
#define PTP_CLASS_V2_VLAN (PTP_CLASS_V2 | PTP_CLASS_VLAN)
#define PTP_EV_PORT 319
#define PTP_GEN_BIT 0x08
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define OFF_ETYPE 12
#define OFF_IHL 14
#define OFF_FRAG 20
#define OFF_PROTO4 23
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define OFF_NEXT 6
#define OFF_UDP_DST 2
#define OFF_PTP_SOURCE_UUID 22
#define OFF_PTP_SEQUENCE_ID 30
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define OFF_PTP_CONTROL 32
#define IPV4_HLEN(data) (((struct iphdr *)(data + OFF_IHL))->ihl << 2)
#define IP6_HLEN 40
#define UDP_HLEN 8
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define RELOFF_DST4 (ETH_HLEN + OFF_UDP_DST)
#define OFF_DST6 (ETH_HLEN + IP6_HLEN + OFF_UDP_DST)
#define OFF_PTP6 (ETH_HLEN + IP6_HLEN + UDP_HLEN)
#define OP_AND (BPF_ALU | BPF_AND | BPF_K)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define OP_JEQ (BPF_JMP | BPF_JEQ | BPF_K)
#define OP_JSET (BPF_JMP | BPF_JSET | BPF_K)
#define OP_LDB (BPF_LD | BPF_B | BPF_ABS)
#define OP_LDH (BPF_LD | BPF_H | BPF_ABS)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define OP_LDHI (BPF_LD | BPF_H | BPF_IND)
#define OP_LDX (BPF_LDX | BPF_B | BPF_MSH)
#define OP_OR (BPF_ALU | BPF_OR | BPF_K)
#define OP_RETA (BPF_RET | BPF_A)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define OP_RETK (BPF_RET | BPF_K)
#define PTP_FILTER   {OP_LDH, 0, 0, OFF_ETYPE },     {OP_JEQ, 0, 12, ETH_P_IP },     {OP_LDB, 0, 0, OFF_PROTO4 },     {OP_JEQ, 0, 9, IPPROTO_UDP },     {OP_LDH, 0, 0, OFF_FRAG },     {OP_JSET, 7, 0, 0x1fff },     {OP_LDX, 0, 0, OFF_IHL },     {OP_LDHI, 0, 0, RELOFF_DST4 },     {OP_JEQ, 0, 4, PTP_EV_PORT },     {OP_LDHI, 0, 0, ETH_HLEN + UDP_HLEN },     {OP_AND, 0, 0, PTP_CLASS_VMASK },     {OP_OR, 0, 0, PTP_CLASS_IPV4 },     {OP_RETA, 0, 0, 0 },      {OP_RETK, 0, 0, PTP_CLASS_NONE },      {OP_JEQ, 0, 9, ETH_P_IPV6 },     {OP_LDB, 0, 0, ETH_HLEN + OFF_NEXT },     {OP_JEQ, 0, 6, IPPROTO_UDP },     {OP_LDH, 0, 0, OFF_DST6 },     {OP_JEQ, 0, 4, PTP_EV_PORT },     {OP_LDH, 0, 0, OFF_PTP6 },     {OP_AND, 0, 0, PTP_CLASS_VMASK },     {OP_OR, 0, 0, PTP_CLASS_IPV6 },     {OP_RETA, 0, 0, 0 },      {OP_RETK, 0, 0, PTP_CLASS_NONE },      {OP_JEQ, 0, 9, ETH_P_8021Q },     {OP_LDH, 0, 0, OFF_ETYPE + 4 },     {OP_JEQ, 0, 15, ETH_P_1588 },     {OP_LDB, 0, 0, ETH_HLEN + VLAN_HLEN },     {OP_AND, 0, 0, PTP_GEN_BIT },     {OP_JEQ, 0, 12, 0 },     {OP_LDH, 0, 0, ETH_HLEN + VLAN_HLEN },     {OP_AND, 0, 0, PTP_CLASS_VMASK },     {OP_OR, 0, 0, PTP_CLASS_VLAN },     {OP_RETA, 0, 0, 0 },      {OP_JEQ, 0, 7, ETH_P_1588 },     {OP_LDB, 0, 0, ETH_HLEN },     {OP_AND, 0, 0, PTP_GEN_BIT },     {OP_JEQ, 0, 4, 0 },     {OP_LDH, 0, 0, ETH_HLEN },     {OP_AND, 0, 0, PTP_CLASS_VMASK },     {OP_OR, 0, 0, PTP_CLASS_L2 },     {OP_RETA, 0, 0, 0 },      {OP_RETK, 0, 0, PTP_CLASS_NONE },
#endif
