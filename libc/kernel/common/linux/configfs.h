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
#ifndef _CONFIGFS_H_
#define _CONFIGFS_H_
#include <linux/kernel.h>
#include <linux/types.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/list.h>
#include <linux/kref.h>
#include <linux/mutex.h>
#include <linux/err.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/atomic.h>
#define CONFIGFS_ITEM_NAME_LEN 20
struct module;
struct configfs_item_operations;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct configfs_group_operations;
struct configfs_attribute;
struct configfs_subsystem;
struct config_item {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 char *ci_name;
 char ci_namebuf[CONFIGFS_ITEM_NAME_LEN];
 struct kref ci_kref;
 struct config_item *ci_parent;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct config_group *ci_group;
 struct config_item_type *ci_type;
 struct dentry *ci_dentry;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct config_item_type {
 struct module *ct_owner;
 struct configfs_item_operations *ct_item_ops;
 struct configfs_group_operations *ct_group_ops;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct configfs_attribute **ct_attrs;
};
struct config_group {
 struct config_item cg_item;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct configfs_subsystem *cg_subsys;
 struct config_group **default_groups;
};
struct configfs_attribute {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 const char *ca_name;
 struct module *ca_owner;
 umode_t ca_mode;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CONFIGFS_ATTR_STRUCT(_item)  struct _item##_attribute {   struct configfs_attribute attr;   ssize_t (*show)(struct _item *, char *);   ssize_t (*store)(struct _item *, const char *, size_t);  }
#define __CONFIGFS_ATTR(_name, _mode, _show, _store)  {   .attr = {   .ca_name = __stringify(_name),   .ca_mode = _mode,   .ca_owner = THIS_MODULE,   },   .show = _show,   .store = _store,  }
#define __CONFIGFS_ATTR_RO(_name, _show)  {   .attr = {   .ca_name = __stringify(_name),   .ca_mode = 0444,   .ca_owner = THIS_MODULE,   },   .show = _show,  }
#define CONFIGFS_ATTR_OPS(_item)  static ssize_t _item##_attr_show(struct config_item *item,   struct configfs_attribute *attr,   char *page)  {   struct _item *_item = to_##_item(item);   struct _item##_attribute *_item##_attr =   container_of(attr, struct _item##_attribute, attr);   ssize_t ret = 0;     if (_item##_attr->show)   ret = _item##_attr->show(_item, page);   return ret;  }  static ssize_t _item##_attr_store(struct config_item *item,   struct configfs_attribute *attr,   const char *page, size_t count)  {   struct _item *_item = to_##_item(item);   struct _item##_attribute *_item##_attr =   container_of(attr, struct _item##_attribute, attr);   ssize_t ret = -EINVAL;     if (_item##_attr->store)   ret = _item##_attr->store(_item, page, count);   return ret;  }
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct configfs_item_operations {
 void (*release)(struct config_item *);
 ssize_t (*show_attribute)(struct config_item *, struct configfs_attribute *,char *);
 ssize_t (*store_attribute)(struct config_item *,struct configfs_attribute *,const char *, size_t);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*allow_link)(struct config_item *src, struct config_item *target);
 int (*drop_link)(struct config_item *src, struct config_item *target);
};
struct configfs_group_operations {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct config_item *(*make_item)(struct config_group *group, const char *name);
 struct config_group *(*make_group)(struct config_group *group, const char *name);
 int (*commit_item)(struct config_item *item);
 void (*disconnect_notify)(struct config_group *group, struct config_item *item);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void (*drop_item)(struct config_group *group, struct config_item *item);
};
struct configfs_subsystem {
 struct config_group su_group;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct mutex su_mutex;
};
#endif
