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
#ifndef _TRANSPORT_CLASS_H_
#define _TRANSPORT_CLASS_H_
#include <linux/device.h>
#include <linux/bug.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/attribute_container.h>
struct transport_container;
struct transport_class {
 struct class class;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*setup)(struct transport_container *, struct device *,
 struct device *);
 int (*configure)(struct transport_container *, struct device *,
 struct device *);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*remove)(struct transport_container *, struct device *,
 struct device *);
};
#define DECLARE_TRANSPORT_CLASS(cls, nm, su, rm, cfg)  struct transport_class cls = {   .class = {   .name = nm,   },   .setup = su,   .remove = rm,   .configure = cfg,  }
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct anon_transport_class {
 struct transport_class tclass;
 struct attribute_container container;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DECLARE_ANON_TRANSPORT_CLASS(cls, mtch, cfg)  struct anon_transport_class cls = {   .tclass = {   .configure = cfg,   },   . container = {   .match = mtch,   },  }
#define class_to_transport_class(x)   container_of(x, struct transport_class, class)
struct transport_container {
 struct attribute_container ac;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 const struct attribute_group *statistics;
};
#define attribute_container_to_transport_container(x)   container_of(x, struct transport_container, ac)
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
