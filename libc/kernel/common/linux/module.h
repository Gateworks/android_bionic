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
#ifndef _LINUX_MODULE_H
#define _LINUX_MODULE_H
#include <linux/list.h>
#include <linux/stat.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/compiler.h>
#include <linux/cache.h>
#include <linux/kmod.h>
#include <linux/elf.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/stringify.h>
#include <linux/kobject.h>
#include <linux/moduleparam.h>
#include <linux/tracepoint.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/export.h>
#include <linux/percpu.h>
#include <asm/module.h>
#define MODULE_SIG_STRING "~Module signature appended~\n"
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MODULE_SUPPORTED_DEVICE(name)
#define MODULE_NAME_LEN MAX_PARAM_PREFIX_LEN
struct modversion_info
{
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long crc;
 char name[MODULE_NAME_LEN];
};
struct module;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct module_kobject {
 struct kobject kobj;
 struct module *mod;
 struct kobject *drivers_dir;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct module_param_attrs *mp;
};
struct module_attribute {
 struct attribute attr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 ssize_t (*show)(struct module_attribute *, struct module_kobject *,
 char *);
 ssize_t (*store)(struct module_attribute *, struct module_kobject *,
 const char *, size_t count);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void (*setup)(struct module *, const char *);
 int (*test)(struct module *);
 void (*free)(struct module *);
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct module_version_attribute {
 struct module_attribute mattr;
 const char *module_name;
 const char *version;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
} __attribute__ ((__aligned__(sizeof(void *))));
struct exception_table_entry;
#ifdef MODULE
#define MODULE_GENERIC_TABLE(gtype,name)  extern const struct gtype##_id __mod_##gtype##_table   __attribute__ ((unused, alias(__stringify(name))))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#else
#define MODULE_GENERIC_TABLE(gtype,name)
#endif
#define MODULE_INFO(tag, info) __MODULE_INFO(tag, tag, info)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MODULE_ALIAS(_alias) MODULE_INFO(alias, _alias)
#define MODULE_LICENSE(_license) MODULE_INFO(license, _license)
#define MODULE_AUTHOR(_author) MODULE_INFO(author, _author)
#define MODULE_DESCRIPTION(_description) MODULE_INFO(description, _description)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MODULE_DEVICE_TABLE(type,name)   MODULE_GENERIC_TABLE(type##_device,name)
#define MODULE_VERSION(_version) MODULE_INFO(version, _version)
#define MODULE_FIRMWARE(_firmware) MODULE_INFO(firmware, _firmware)
struct notifier_block;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define symbol_get(x) ({ extern typeof(x) x __attribute__((weak)); &(x); })
#define symbol_put(x) do { } while(0)
#define symbol_put_addr(x) do { } while(0)
#define module_name(mod) "kernel"
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define module_put_and_exit(code) do_exit(code)
#define symbol_request(x) try_then_request_module(symbol_get(x), "symbol:" #x)
#define __MODULE_STRING(x) __stringify(x)
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
