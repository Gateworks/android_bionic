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
#ifndef __LINUX_BRIDGE_NETFILTER_H
#define __LINUX_BRIDGE_NETFILTER_H
#include <uapi/linux/netfilter_bridge.h>
enum nf_br_hook_priorities {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 NF_BR_PRI_FIRST = INT_MIN,
 NF_BR_PRI_NAT_DST_BRIDGED = -300,
 NF_BR_PRI_FILTER_BRIDGED = -200,
 NF_BR_PRI_BRNF = 0,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 NF_BR_PRI_NAT_DST_OTHER = 100,
 NF_BR_PRI_FILTER_OTHER = 200,
 NF_BR_PRI_NAT_SRC = 300,
 NF_BR_PRI_LAST = INT_MAX,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define nf_bridge_maybe_copy_header(skb) (0)
#define nf_bridge_pad(skb) (0)
#define br_drop_fake_rtable(skb) do { } while (0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
