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
#ifndef GENL_MAGIC_STRUCT_H
#define GENL_MAGIC_STRUCT_H
#ifndef GENL_MAGIC_FAMILY
#error "you need to define GENL_MAGIC_FAMILY before inclusion"
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#ifndef GENL_MAGIC_VERSION
#error "you need to define GENL_MAGIC_VERSION before inclusion"
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#ifndef GENL_MAGIC_INCLUDE_FILE
#error "you need to define GENL_MAGIC_INCLUDE_FILE before inclusion"
#endif
#include <linux/genetlink.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/types.h>
#define CONCAT__(a,b) a ## b
#define CONCAT_(a,b) CONCAT__(a,b)
#define DRBD_GENLA_F_MANDATORY (1 << 14)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DRBD_F_REQUIRED (1 << 0)
#define DRBD_F_SENSITIVE (1 << 1)
#define DRBD_F_INVARIANT (1 << 2)
#define __nla_type(x) ((__u16)((x) & NLA_TYPE_MASK & ~DRBD_GENLA_F_MANDATORY))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __flg_field(attr_nr, attr_flag, name)   __field(attr_nr, attr_flag, name, NLA_U8, char,   nla_get_u8, nla_put_u8, false)
#define __u8_field(attr_nr, attr_flag, name)   __field(attr_nr, attr_flag, name, NLA_U8, unsigned char,   nla_get_u8, nla_put_u8, false)
#define __u16_field(attr_nr, attr_flag, name)   __field(attr_nr, attr_flag, name, NLA_U16, __u16,   nla_get_u16, nla_put_u16, false)
#define __u32_field(attr_nr, attr_flag, name)   __field(attr_nr, attr_flag, name, NLA_U32, __u32,   nla_get_u32, nla_put_u32, false)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __s32_field(attr_nr, attr_flag, name)   __field(attr_nr, attr_flag, name, NLA_U32, __s32,   nla_get_u32, nla_put_u32, true)
#define __u64_field(attr_nr, attr_flag, name)   __field(attr_nr, attr_flag, name, NLA_U64, __u64,   nla_get_u64, nla_put_u64, false)
#define __str_field(attr_nr, attr_flag, name, maxlen)   __array(attr_nr, attr_flag, name, NLA_NUL_STRING, char, maxlen,   nla_strlcpy, nla_put, false)
#define __bin_field(attr_nr, attr_flag, name, maxlen)   __array(attr_nr, attr_flag, name, NLA_BINARY, char, maxlen,   nla_memcpy, nla_put, false)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __flg_field_def(attr_nr, attr_flag, name, default)   __flg_field(attr_nr, attr_flag, name)
#define __u32_field_def(attr_nr, attr_flag, name, default)   __u32_field(attr_nr, attr_flag, name)
#define __s32_field_def(attr_nr, attr_flag, name, default)   __s32_field(attr_nr, attr_flag, name)
#define __str_field_def(attr_nr, attr_flag, name, maxlen)   __str_field(attr_nr, attr_flag, name, maxlen)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define GENL_op_init(args...) args
#define GENL_doit(handler)   .doit = handler,   .flags = GENL_ADMIN_PERM,
#define GENL_dumpit(handler)   .dumpit = handler,   .flags = GENL_ADMIN_PERM,
#undef GENL_struct
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define GENL_struct(tag_name, tag_number, s_name, s_fields)
#undef GENL_mc_group
#define GENL_mc_group(group)
#undef GENL_notification
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define GENL_notification(op_name, op_num, mcast_group, tla_list)   op_name = op_num,
#undef GENL_op
#define GENL_op(op_name, op_num, handler, tla_list)   op_name = op_num,
enum {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include GENL_MAGIC_INCLUDE_FILE
};
#undef GENL_notification
#define GENL_notification(op_name, op_num, mcast_group, tla_list)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#undef GENL_op
#define GENL_op(op_name, op_num, handler, attr_list)
#undef GENL_struct
#define GENL_struct(tag_name, tag_number, s_name, s_fields)   tag_name = tag_number,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum {
#include GENL_MAGIC_INCLUDE_FILE
};
#undef GENL_struct
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define GENL_struct(tag_name, tag_number, s_name, s_fields)  enum {   s_fields  };
#undef __field
#define __field(attr_nr, attr_flag, name, nla_type, type,   __get, __put, __is_signed)   T_ ## name = (__u16)(attr_nr | ((attr_flag) & DRBD_GENLA_F_MANDATORY)),
#undef __array
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __array(attr_nr, attr_flag, name, nla_type, type,   maxlen, __get, __put, __is_signed)   T_ ## name = (__u16)(attr_nr | ((attr_flag) & DRBD_GENLA_F_MANDATORY)),
#include GENL_MAGIC_INCLUDE_FILE
#undef GENL_struct
#define GENL_struct(tag_name, tag_number, s_name, s_fields)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#undef GENL_op
#define GENL_op(op_name, op_num, handler, attr_list)   case op_name:
#undef GENL_notification
#define GENL_notification(op_name, op_num, mcast_group, tla_list)   case op_name:
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include GENL_MAGIC_INCLUDE_FILE
#undef GENL_op
#define GENL_op(op_name, op_num, handler, attr_list)
#undef GENL_notification
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define GENL_notification(op_name, op_num, mcast_group, tla_list)
#undef GENL_struct
#define GENL_struct(tag_name, tag_number, s_name, s_fields)   case tag_number:
#include GENL_MAGIC_INCLUDE_FILE
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#undef GENL_struct
#define GENL_struct(tag_name, tag_number, s_name, s_fields)  static inline void ct_assert_unique_ ## s_name ## _attributes(void)  {   switch (0) {   s_fields   ;   }  }
#undef __field
#define __field(attr_nr, attr_flag, name, nla_type, type, __get, __put,   __is_signed)   case attr_nr:
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#undef __array
#define __array(attr_nr, attr_flag, name, nla_type, type, maxlen,   __get, __put, __is_signed)   case attr_nr:
#include GENL_MAGIC_INCLUDE_FILE
#undef GENL_struct
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define GENL_struct(tag_name, tag_number, s_name, s_fields)  struct s_name { s_fields };
#undef __field
#define __field(attr_nr, attr_flag, name, nla_type, type, __get, __put,   __is_signed)   type name;
#undef __array
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __array(attr_nr, attr_flag, name, nla_type, type, maxlen,   __get, __put, __is_signed)   type name[maxlen];   __u32 name ## _len;
#include GENL_MAGIC_INCLUDE_FILE
#undef GENL_struct
#define GENL_struct(tag_name, tag_number, s_name, s_fields)  enum {   s_fields  };
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#undef __field
#define __field(attr_nr, attr_flag, name, nla_type, type, __get, __put,   is_signed)   F_ ## name ## _IS_SIGNED = is_signed,
#undef __array
#define __array(attr_nr, attr_flag, name, nla_type, type, maxlen,   __get, __put, is_signed)   F_ ## name ## _IS_SIGNED = is_signed,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include GENL_MAGIC_INCLUDE_FILE
#endif
