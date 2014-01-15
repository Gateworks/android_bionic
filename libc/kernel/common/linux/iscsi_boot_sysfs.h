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
#ifndef _ISCSI_BOOT_SYSFS_
#define _ISCSI_BOOT_SYSFS_
enum iscsi_boot_eth_properties_enum {
 ISCSI_BOOT_ETH_INDEX,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 ISCSI_BOOT_ETH_FLAGS,
 ISCSI_BOOT_ETH_IP_ADDR,
 ISCSI_BOOT_ETH_SUBNET_MASK,
 ISCSI_BOOT_ETH_ORIGIN,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 ISCSI_BOOT_ETH_GATEWAY,
 ISCSI_BOOT_ETH_PRIMARY_DNS,
 ISCSI_BOOT_ETH_SECONDARY_DNS,
 ISCSI_BOOT_ETH_DHCP,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 ISCSI_BOOT_ETH_VLAN,
 ISCSI_BOOT_ETH_MAC,
 ISCSI_BOOT_ETH_HOSTNAME,
 ISCSI_BOOT_ETH_END_MARKER,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
enum iscsi_boot_tgt_properties_enum {
 ISCSI_BOOT_TGT_INDEX,
 ISCSI_BOOT_TGT_FLAGS,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 ISCSI_BOOT_TGT_IP_ADDR,
 ISCSI_BOOT_TGT_PORT,
 ISCSI_BOOT_TGT_LUN,
 ISCSI_BOOT_TGT_CHAP_TYPE,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 ISCSI_BOOT_TGT_NIC_ASSOC,
 ISCSI_BOOT_TGT_NAME,
 ISCSI_BOOT_TGT_CHAP_NAME,
 ISCSI_BOOT_TGT_CHAP_SECRET,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 ISCSI_BOOT_TGT_REV_CHAP_NAME,
 ISCSI_BOOT_TGT_REV_CHAP_SECRET,
 ISCSI_BOOT_TGT_END_MARKER,
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum iscsi_boot_initiator_properties_enum {
 ISCSI_BOOT_INI_INDEX,
 ISCSI_BOOT_INI_FLAGS,
 ISCSI_BOOT_INI_ISNS_SERVER,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 ISCSI_BOOT_INI_SLP_SERVER,
 ISCSI_BOOT_INI_PRI_RADIUS_SERVER,
 ISCSI_BOOT_INI_SEC_RADIUS_SERVER,
 ISCSI_BOOT_INI_INITIATOR_NAME,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 ISCSI_BOOT_INI_END_MARKER,
};
struct attribute_group;
struct iscsi_boot_kobj {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct kobject kobj;
 struct attribute_group *attr_group;
 void *data;
 ssize_t (*show) (void *data, int type, char *buf);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 umode_t (*is_visible) (void *data, int type);
 void (*release) (void *data);
};
struct iscsi_boot_kset {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct kset *kset;
};
struct iscsi_boot_kobj *
iscsi_boot_create_initiator(struct iscsi_boot_kset *boot_kset, int index,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void *data,
 ssize_t (*show) (void *data, int type, char *buf),
 umode_t (*is_visible) (void *data, int type),
 void (*release) (void *data));
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct iscsi_boot_kobj *
iscsi_boot_create_ethernet(struct iscsi_boot_kset *boot_kset, int index,
 void *data,
 ssize_t (*show) (void *data, int type, char *buf),
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 umode_t (*is_visible) (void *data, int type),
 void (*release) (void *data));
struct iscsi_boot_kobj *
iscsi_boot_create_target(struct iscsi_boot_kset *boot_kset, int index,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void *data,
 ssize_t (*show) (void *data, int type, char *buf),
 umode_t (*is_visible) (void *data, int type),
 void (*release) (void *data));
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct iscsi_boot_kset *iscsi_boot_create_kset(const char *set_name);
struct iscsi_boot_kset *iscsi_boot_create_host_kset(unsigned int hostno);
#endif
