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
#ifndef __LINUX_FILTER_H__
#define __LINUX_FILTER_H__
#include <linux/atomic.h>
#include <linux/compat.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <uapi/linux/filter.h>
struct sk_buff;
struct sock;
struct sk_filter
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
{
 atomic_t refcnt;
 unsigned int len;
 unsigned int (*bpf_func)(const struct sk_buff *skb,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 const struct sock_filter *filter);
 struct rcu_head rcu;
 struct sock_filter insns[0];
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SK_RUN_FILTER(FILTER, SKB) sk_run_filter(SKB, FILTER->insns)
enum {
 BPF_S_RET_K = 1,
 BPF_S_RET_A,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 BPF_S_ALU_ADD_K,
 BPF_S_ALU_ADD_X,
 BPF_S_ALU_SUB_K,
 BPF_S_ALU_SUB_X,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 BPF_S_ALU_MUL_K,
 BPF_S_ALU_MUL_X,
 BPF_S_ALU_DIV_X,
 BPF_S_ALU_MOD_K,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 BPF_S_ALU_MOD_X,
 BPF_S_ALU_AND_K,
 BPF_S_ALU_AND_X,
 BPF_S_ALU_OR_K,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 BPF_S_ALU_OR_X,
 BPF_S_ALU_XOR_K,
 BPF_S_ALU_XOR_X,
 BPF_S_ALU_LSH_K,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 BPF_S_ALU_LSH_X,
 BPF_S_ALU_RSH_K,
 BPF_S_ALU_RSH_X,
 BPF_S_ALU_NEG,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 BPF_S_LD_W_ABS,
 BPF_S_LD_H_ABS,
 BPF_S_LD_B_ABS,
 BPF_S_LD_W_LEN,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 BPF_S_LD_W_IND,
 BPF_S_LD_H_IND,
 BPF_S_LD_B_IND,
 BPF_S_LD_IMM,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 BPF_S_LDX_W_LEN,
 BPF_S_LDX_B_MSH,
 BPF_S_LDX_IMM,
 BPF_S_MISC_TAX,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 BPF_S_MISC_TXA,
 BPF_S_ALU_DIV_K,
 BPF_S_LD_MEM,
 BPF_S_LDX_MEM,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 BPF_S_ST,
 BPF_S_STX,
 BPF_S_JMP_JA,
 BPF_S_JMP_JEQ_K,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 BPF_S_JMP_JEQ_X,
 BPF_S_JMP_JGE_K,
 BPF_S_JMP_JGE_X,
 BPF_S_JMP_JGT_K,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 BPF_S_JMP_JGT_X,
 BPF_S_JMP_JSET_K,
 BPF_S_JMP_JSET_X,
 BPF_S_ANC_PROTOCOL,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 BPF_S_ANC_PKTTYPE,
 BPF_S_ANC_IFINDEX,
 BPF_S_ANC_NLATTR,
 BPF_S_ANC_NLATTR_NEST,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 BPF_S_ANC_MARK,
 BPF_S_ANC_QUEUE,
 BPF_S_ANC_HATYPE,
 BPF_S_ANC_RXHASH,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 BPF_S_ANC_CPU,
 BPF_S_ANC_ALU_XOR_X,
 BPF_S_ANC_SECCOMP_LD_W,
 BPF_S_ANC_VLAN_TAG,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 BPF_S_ANC_VLAN_TAG_PRESENT,
 BPF_S_ANC_PAY_OFFSET,
};
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
