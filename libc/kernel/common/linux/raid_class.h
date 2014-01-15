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
#include <linux/transport_class.h>
struct raid_template {
 struct transport_container raid_attrs;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct raid_function_template {
 void *cookie;
 int (*is_raid)(struct device *);
 void (*get_resync)(struct device *);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void (*get_state)(struct device *);
};
enum raid_state {
 RAID_STATE_UNKNOWN = 0,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 RAID_STATE_ACTIVE,
 RAID_STATE_DEGRADED,
 RAID_STATE_RESYNCING,
 RAID_STATE_OFFLINE,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
enum raid_level {
 RAID_LEVEL_UNKNOWN = 0,
 RAID_LEVEL_LINEAR,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 RAID_LEVEL_0,
 RAID_LEVEL_1,
 RAID_LEVEL_10,
 RAID_LEVEL_1E,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 RAID_LEVEL_3,
 RAID_LEVEL_4,
 RAID_LEVEL_5,
 RAID_LEVEL_50,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 RAID_LEVEL_6,
};
struct raid_data {
 int component_count;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 enum raid_level level;
 enum raid_state state;
 int resync;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define RAID_MAX_RESYNC (10000)
#define DEFINE_RAID_ATTRIBUTE(type, attr)  static inline void  raid_set_##attr(struct raid_template *r, struct device *dev, type value) {   struct device *device =   attribute_container_find_class_device(&r->raid_attrs.ac, dev);  struct raid_data *rd;   BUG_ON(!device);   rd = dev_get_drvdata(device);   rd->attr = value;  }  static inline type  raid_get_##attr(struct raid_template *r, struct device *dev) {   struct device *device =   attribute_container_find_class_device(&r->raid_attrs.ac, dev);  struct raid_data *rd;   BUG_ON(!device);   rd = dev_get_drvdata(device);   return rd->attr;  }
