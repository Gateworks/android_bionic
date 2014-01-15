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
#ifndef __PNFS_OSD_XDR_H__
#define __PNFS_OSD_XDR_H__
#include <linux/nfs_fs.h>
enum pnfs_osd_raid_algorithm4 {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 PNFS_OSD_RAID_0 = 1,
 PNFS_OSD_RAID_4 = 2,
 PNFS_OSD_RAID_5 = 3,
 PNFS_OSD_RAID_PQ = 4
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct pnfs_osd_data_map {
 u32 odm_num_comps;
 u64 odm_stripe_unit;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 odm_group_width;
 u32 odm_group_depth;
 u32 odm_mirror_cnt;
 u32 odm_raid_algorithm;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct pnfs_osd_objid {
 struct nfs4_deviceid oid_device_id;
 u64 oid_partition_id;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u64 oid_object_id;
};
#define _DEVID_LO(oid_device_id)   (unsigned long long)be64_to_cpup((__be64 *)(oid_device_id)->data)
#define _DEVID_HI(oid_device_id)   (unsigned long long)be64_to_cpup(((__be64 *)(oid_device_id)->data) + 1)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum pnfs_osd_version {
 PNFS_OSD_MISSING = 0,
 PNFS_OSD_VERSION_1 = 1,
 PNFS_OSD_VERSION_2 = 2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct pnfs_osd_opaque_cred {
 u32 cred_len;
 void *cred;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
enum pnfs_osd_cap_key_sec {
 PNFS_OSD_CAP_KEY_SEC_NONE = 0,
 PNFS_OSD_CAP_KEY_SEC_SSV = 1,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct pnfs_osd_object_cred {
 struct pnfs_osd_objid oc_object_id;
 u32 oc_osd_version;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 oc_cap_key_sec;
 struct pnfs_osd_opaque_cred oc_cap_key;
 struct pnfs_osd_opaque_cred oc_cap;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct pnfs_osd_layout {
 struct pnfs_osd_data_map olo_map;
 u32 olo_comps_index;
 u32 olo_num_comps;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct pnfs_osd_object_cred *olo_comps;
};
enum pnfs_osd_targetid_type {
 OBJ_TARGET_ANON = 1,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 OBJ_TARGET_SCSI_NAME = 2,
 OBJ_TARGET_SCSI_DEVICE_ID = 3,
};
struct pnfs_osd_targetid {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 oti_type;
 struct nfs4_string oti_scsi_device_id;
};
struct pnfs_osd_net_addr {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct nfs4_string r_netid;
 struct nfs4_string r_addr;
};
struct pnfs_osd_targetaddr {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 ota_available;
 struct pnfs_osd_net_addr ota_netaddr;
};
struct pnfs_osd_deviceaddr {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct pnfs_osd_targetid oda_targetid;
 struct pnfs_osd_targetaddr oda_targetaddr;
 u8 oda_lun[8];
 struct nfs4_string oda_systemid;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct pnfs_osd_object_cred oda_root_obj_cred;
 struct nfs4_string oda_osdname;
};
struct pnfs_osd_layoutupdate {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 dsu_valid;
 s64 dsu_delta;
 u32 olu_ioerr_flag;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum pnfs_osd_errno {
 PNFS_OSD_ERR_EIO = 1,
 PNFS_OSD_ERR_NOT_FOUND = 2,
 PNFS_OSD_ERR_NO_SPACE = 3,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 PNFS_OSD_ERR_BAD_CRED = 4,
 PNFS_OSD_ERR_NO_ACCESS = 5,
 PNFS_OSD_ERR_UNREACHABLE = 6,
 PNFS_OSD_ERR_RESOURCE = 7
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct pnfs_osd_ioerr {
 struct pnfs_osd_objid oer_component;
 u64 oer_comp_offset;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u64 oer_comp_length;
 u32 oer_iswrite;
 u32 oer_errno;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct pnfs_osd_xdr_decode_layout_iter {
 unsigned total_comps;
 unsigned decoded_comps;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
