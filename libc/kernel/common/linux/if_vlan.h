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
#ifndef _LINUX_IF_VLAN_H_
#define _LINUX_IF_VLAN_H_
#include <linux/netdevice.h>
#include <linux/etherdevice.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/rtnetlink.h>
#include <linux/bug.h>
#include <uapi/linux/if_vlan.h>
#define VLAN_HLEN 4
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define VLAN_ETH_HLEN 18
#define VLAN_ETH_ZLEN 64
#define VLAN_ETH_DATA_LEN 1500
#define VLAN_ETH_FRAME_LEN 1518
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct vlan_hdr {
 __be16 h_vlan_TCI;
 __be16 h_vlan_encapsulated_proto;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct vlan_ethhdr {
 unsigned char h_dest[ETH_ALEN];
 unsigned char h_source[ETH_ALEN];
 __be16 h_vlan_proto;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __be16 h_vlan_TCI;
 __be16 h_vlan_encapsulated_proto;
};
#include <linux/skbuff.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define VLAN_PRIO_MASK 0xe000
#define VLAN_PRIO_SHIFT 13
#define VLAN_CFI_MASK 0x1000
#define VLAN_TAG_PRESENT VLAN_CFI_MASK
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define VLAN_VID_MASK 0x0fff
#define VLAN_N_VID 4096
#define vlan_tx_tag_present(__skb) ((__skb)->vlan_tci & VLAN_TAG_PRESENT)
#define vlan_tx_tag_get(__skb) ((__skb)->vlan_tci & ~VLAN_TAG_PRESENT)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define vlan_tx_tag_get_id(__skb) ((__skb)->vlan_tci & VLAN_VID_MASK)
#define HAVE_VLAN_PUT_TAG
#define HAVE_VLAN_GET_TAG
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
