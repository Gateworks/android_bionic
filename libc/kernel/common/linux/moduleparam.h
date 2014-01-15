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
#ifndef _LINUX_MODULE_PARAMS_H
#define _LINUX_MODULE_PARAMS_H
#include <linux/init.h>
#include <linux/stringify.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/kernel.h>
#ifdef MODULE
#define MODULE_PARAM_PREFIX
#else
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MODULE_PARAM_PREFIX KBUILD_MODNAME "."
#endif
#define MAX_PARAM_PREFIX_LEN (64 - sizeof(unsigned long))
#ifdef MODULE
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __MODULE_INFO(tag, name, info)  static const char __UNIQUE_ID(name)[]   __used __attribute__((section(".modinfo"), unused, aligned(1)))   = __stringify(tag) "=" info
#else
#define __MODULE_INFO(tag, name, info)   struct __UNIQUE_ID(name) {}
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __MODULE_PARM_TYPE(name, _type)   __MODULE_INFO(parmtype, name##type, #name ":" _type)
#define MODULE_PARM_DESC(_parm, desc)   __MODULE_INFO(parm, _parm, #_parm ":" desc)
struct kernel_param;
struct kernel_param_ops {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*set)(const char *val, const struct kernel_param *kp);
 int (*get)(char *buffer, const struct kernel_param *kp);
 void (*free)(void *arg);
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct kernel_param {
 const char *name;
 const struct kernel_param_ops *ops;
 u16 perm;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 s16 level;
 union {
 void *arg;
 const struct kparam_string *str;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 const struct kparam_array *arr;
 };
};
struct kparam_string {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int maxlen;
 char *string;
};
struct kparam_array
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
{
 unsigned int max;
 unsigned int elemsize;
 unsigned int *num;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 const struct kernel_param_ops *ops;
 void *elem;
};
#define module_param(name, type, perm)   module_param_named(name, name, type, perm)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define module_param_named(name, value, type, perm)   param_check_##type(name, &(value));   module_param_cb(name, &param_ops_##type, &value, perm);   __MODULE_PARM_TYPE(name, #type)
#define module_param_cb(name, ops, arg, perm)   __module_param_call(MODULE_PARAM_PREFIX, name, ops, arg, perm, -1)
#define __level_param_cb(name, ops, arg, perm, level)   __module_param_call(MODULE_PARAM_PREFIX, name, ops, arg, perm, level)
#define core_param_cb(name, ops, arg, perm)   __level_param_cb(name, ops, arg, perm, 1)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define postcore_param_cb(name, ops, arg, perm)   __level_param_cb(name, ops, arg, perm, 2)
#define arch_param_cb(name, ops, arg, perm)   __level_param_cb(name, ops, arg, perm, 3)
#define subsys_param_cb(name, ops, arg, perm)   __level_param_cb(name, ops, arg, perm, 4)
#define fs_param_cb(name, ops, arg, perm)   __level_param_cb(name, ops, arg, perm, 5)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define device_param_cb(name, ops, arg, perm)   __level_param_cb(name, ops, arg, perm, 6)
#define late_param_cb(name, ops, arg, perm)   __level_param_cb(name, ops, arg, perm, 7)
#define __moduleparam_const const
#define __module_param_call(prefix, name, ops, arg, perm, level)       static int __param_perm_check_##name __attribute__((unused)) =   BUILD_BUG_ON_ZERO((perm) < 0 || (perm) > 0777 || ((perm) & 2))   + BUILD_BUG_ON_ZERO(sizeof(""prefix) > MAX_PARAM_PREFIX_LEN);   static const char __param_str_##name[] = prefix #name;   static struct kernel_param __moduleparam_const __param_##name   __used   __attribute__ ((unused,__section__ ("__param"),aligned(sizeof(void *))))   = { __param_str_##name, ops, perm, level, { arg } }
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define module_param_call(name, set, get, arg, perm)   static struct kernel_param_ops __param_ops_##name =   { (void *)set, (void *)get };   __module_param_call(MODULE_PARAM_PREFIX,   name, &__param_ops_##name, arg,   (perm) + sizeof(__check_old_set_param(set))*0, -1)
#define kparam_block_sysfs_write(name)   do {   BUG_ON(!(__param_##name.perm & 0222));   __kernel_param_lock();   } while (0)
#define kparam_unblock_sysfs_write(name)   do {   BUG_ON(!(__param_##name.perm & 0222));   __kernel_param_unlock();   } while (0)
#define kparam_block_sysfs_read(name)   do {   BUG_ON(!(__param_##name.perm & 0444));   __kernel_param_lock();   } while (0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define kparam_unblock_sysfs_read(name)   do {   BUG_ON(!(__param_##name.perm & 0444));   __kernel_param_unlock();   } while (0)
#ifndef MODULE
#define core_param(name, var, type, perm)   param_check_##type(name, &(var));   __module_param_call("", name, &param_ops_##type, &var, perm, -1)
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define module_param_string(name, string, len, perm)   static const struct kparam_string __param_string_##name   = { len, string };   __module_param_call(MODULE_PARAM_PREFIX, name,   &param_ops_string,   .str = &__param_string_##name, perm, -1);   __MODULE_PARM_TYPE(name, "string")
#define __param_check(name, p, type)   static inline type *__check_##name(void) { return(p); }
#define param_check_byte(name, p) __param_check(name, p, unsigned char)
#define param_check_short(name, p) __param_check(name, p, short)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define param_check_ushort(name, p) __param_check(name, p, unsigned short)
#define param_check_int(name, p) __param_check(name, p, int)
#define param_check_uint(name, p) __param_check(name, p, unsigned int)
#define param_check_long(name, p) __param_check(name, p, long)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define param_check_ulong(name, p) __param_check(name, p, unsigned long)
#define param_check_charp(name, p) __param_check(name, p, char *)
#define param_check_bool(name, p) __param_check(name, p, bool)
#define param_check_invbool(name, p) __param_check(name, p, bool)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define param_get_bint param_get_int
#define param_check_bint param_check_int
#define module_param_array(name, type, nump, perm)   module_param_array_named(name, name, type, nump, perm)
#define module_param_array_named(name, array, type, nump, perm)   param_check_##type(name, &(array)[0]);   static const struct kparam_array __param_arr_##name   = { .max = ARRAY_SIZE(array), .num = nump,   .ops = &param_ops_##type,   .elemsize = sizeof(array[0]), .elem = array };   __module_param_call(MODULE_PARAM_PREFIX, name,   &param_array_ops,   .arr = &__param_arr_##name,   perm, -1);   __MODULE_PARM_TYPE(name, "array of " #type)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct module;
#endif
