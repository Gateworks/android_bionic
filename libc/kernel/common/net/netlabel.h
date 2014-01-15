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
#ifndef _NETLABEL_H
#define _NETLABEL_H
#include <linux/types.h>
#include <linux/slab.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/net.h>
#include <linux/skbuff.h>
#include <linux/in.h>
#include <linux/in6.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <net/netlink.h>
#include <net/request_sock.h>
#include <linux/atomic.h>
struct cipso_v4_doi;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NETLBL_PROTO_VERSION 3
#define NETLBL_NLTYPE_NONE 0
#define NETLBL_NLTYPE_MGMT 1
#define NETLBL_NLTYPE_MGMT_NAME "NLBL_MGMT"
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NETLBL_NLTYPE_RIPSO 2
#define NETLBL_NLTYPE_RIPSO_NAME "NLBL_RIPSO"
#define NETLBL_NLTYPE_CIPSOV4 3
#define NETLBL_NLTYPE_CIPSOV4_NAME "NLBL_CIPSOv4"
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NETLBL_NLTYPE_CIPSOV6 4
#define NETLBL_NLTYPE_CIPSOV6_NAME "NLBL_CIPSOv6"
#define NETLBL_NLTYPE_UNLABELED 5
#define NETLBL_NLTYPE_UNLABELED_NAME "NLBL_UNLBL"
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NETLBL_NLTYPE_ADDRSELECT 6
#define NETLBL_NLTYPE_ADDRSELECT_NAME "NLBL_ADRSEL"
struct netlbl_audit {
 u32 secid;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 kuid_t loginuid;
 u32 sessionid;
};
struct netlbl_lsm_cache {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 atomic_t refcount;
 void (*free) (const void *data);
 void *data;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NETLBL_CATMAP_MAPTYPE u64
#define NETLBL_CATMAP_MAPCNT 4
#define NETLBL_CATMAP_MAPSIZE (sizeof(NETLBL_CATMAP_MAPTYPE) * 8)
#define NETLBL_CATMAP_SIZE (NETLBL_CATMAP_MAPSIZE *   NETLBL_CATMAP_MAPCNT)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NETLBL_CATMAP_BIT (NETLBL_CATMAP_MAPTYPE)0x01
struct netlbl_lsm_secattr_catmap {
 u32 startbit;
 NETLBL_CATMAP_MAPTYPE bitmap[NETLBL_CATMAP_MAPCNT];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct netlbl_lsm_secattr_catmap *next;
};
struct netlbl_lsm_secattr {
 u32 flags;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NETLBL_SECATTR_NONE 0x00000000
#define NETLBL_SECATTR_DOMAIN 0x00000001
#define NETLBL_SECATTR_DOMAIN_CPY (NETLBL_SECATTR_DOMAIN |   NETLBL_SECATTR_FREE_DOMAIN)
#define NETLBL_SECATTR_CACHE 0x00000002
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NETLBL_SECATTR_MLS_LVL 0x00000004
#define NETLBL_SECATTR_MLS_CAT 0x00000008
#define NETLBL_SECATTR_SECID 0x00000010
#define NETLBL_SECATTR_FREE_DOMAIN 0x01000000
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NETLBL_SECATTR_CACHEABLE (NETLBL_SECATTR_MLS_LVL |   NETLBL_SECATTR_MLS_CAT |   NETLBL_SECATTR_SECID)
 u32 type;
 char *domain;
 struct netlbl_lsm_cache *cache;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct {
 struct {
 struct netlbl_lsm_secattr_catmap *cat;
 u32 lvl;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 } mls;
 u32 secid;
 } attr;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
