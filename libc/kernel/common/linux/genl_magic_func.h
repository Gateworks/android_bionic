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
#ifndef GENL_MAGIC_FUNC_H
#define GENL_MAGIC_FUNC_H
#include <linux/genl_magic_struct.h>
#undef GENL_mc_group
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define GENL_mc_group(group)
#undef GENL_notification
#define GENL_notification(op_name, op_num, mcast_group, tla_list)
#undef GENL_op
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define GENL_op(op_name, op_num, handler, tla_list)
#undef GENL_struct
#define GENL_struct(tag_name, tag_number, s_name, s_fields)   [tag_name] = { .type = NLA_NESTED },
#include GENL_MAGIC_INCLUDE_FILE
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#undef GENL_struct
#define GENL_struct(tag_name, tag_number, s_name, s_fields)  static struct nla_policy s_name ## _nl_policy[] __read_mostly =  { s_fields };
#undef __field
#define __field(attr_nr, attr_flag, name, nla_type, _type, __get,   __put, __is_signed)   [attr_nr] = { .type = nla_type },
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#undef __array
#define __array(attr_nr, attr_flag, name, nla_type, _type, maxlen,   __get, __put, __is_signed)   [attr_nr] = { .type = nla_type,   .len = maxlen - (nla_type == NLA_NUL_STRING) },
#include GENL_MAGIC_INCLUDE_FILE
#ifndef pr_info
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define pr_info(args...) fprintf(stderr, args);
#endif
#ifdef GENL_MAGIC_DEBUG
#define DPRINT_TLA(a, op, b) pr_info("%s %s %s\n", a, op, b);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DPRINT_FIELD(dir, nla_type, name, s, nla)   do {   if (s)   dprint_field(dir, nla_type, #name, &s->name);   else if (nla)   dprint_field(dir, nla_type, #name,   (nla_type == NLA_FLAG) ? NULL   : nla_data(nla));   } while (0)
#define DPRINT_ARRAY(dir, nla_type, name, s, nla)   do {   if (s)   dprint_array(dir, nla_type, #name,   s->name, s->name ## _len);   else if (nla)   dprint_array(dir, nla_type, #name,   nla_data(nla), nla_len(nla));   } while (0)
#else
#define DPRINT_TLA(a, op, b) do {} while (0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DPRINT_FIELD(dir, nla_type, name, s, nla) do {} while (0)
#define DPRINT_ARRAY(dir, nla_type, name, s, nla) do {} while (0)
#endif
#ifndef BUILD_BUG_ON
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define BUILD_BUG_ON(condition) ((void)BUILD_BUG_ON_ZERO(condition))
#define BUILD_BUG_ON_ZERO(e) (sizeof(struct { int:-!!(e); }))
#define BUILD_BUG_ON_NULL(e) ((void *)sizeof(struct { int:-!!(e); }))
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#undef GENL_struct
#define GENL_struct(tag_name, tag_number, s_name, s_fields)     static int __ ## s_name ## _from_attrs(struct s_name *s,   struct genl_info *info, bool exclude_invariants)  {   const int maxtype = ARRAY_SIZE(s_name ## _nl_policy)-1;   struct nlattr *tla = info->attrs[tag_number];   struct nlattr **ntb = nested_attr_tb;   struct nlattr *nla;   int err;   BUILD_BUG_ON(ARRAY_SIZE(s_name ## _nl_policy) > ARRAY_SIZE(nested_attr_tb));   if (!tla)   return -ENOMSG;   DPRINT_TLA(#s_name, "<=-", #tag_name);   err = drbd_nla_parse_nested(ntb, maxtype, tla, s_name ## _nl_policy);   if (err)   return err;     s_fields   return 0;  } __attribute__((unused))  static int s_name ## _from_attrs(struct s_name *s,   struct genl_info *info)  {   return __ ## s_name ## _from_attrs(s, info, false);  } __attribute__((unused))  static int s_name ## _from_attrs_for_change(struct s_name *s,   struct genl_info *info)  {   return __ ## s_name ## _from_attrs(s, info, true);  } __attribute__((unused))
#define __assign(attr_nr, attr_flag, name, nla_type, type, assignment...)   nla = ntb[attr_nr];   if (nla) {   if (exclude_invariants && ((attr_flag) & DRBD_F_INVARIANT)) {   pr_info("<< must not change invariant attr: %s\n", #name);   return -EEXIST;   }   assignment;   } else if (exclude_invariants && ((attr_flag) & DRBD_F_INVARIANT)) {           } else if ((attr_flag) & DRBD_F_REQUIRED) {   pr_info("<< missing attr: %s\n", #name);   return -ENOMSG;   }
#undef __field
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __field(attr_nr, attr_flag, name, nla_type, type, __get, __put,   __is_signed)   __assign(attr_nr, attr_flag, name, nla_type, type,   if (s)   s->name = __get(nla);   DPRINT_FIELD("<<", nla_type, name, s, nla))
#undef __array
#define __array(attr_nr, attr_flag, name, nla_type, type, maxlen,   __get, __put, __is_signed)   __assign(attr_nr, attr_flag, name, nla_type, type,   if (s)   s->name ## _len =   __get(s->name, nla, maxlen);   DPRINT_ARRAY("<<", nla_type, name, s, nla))
#include GENL_MAGIC_INCLUDE_FILE
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#undef GENL_struct
#define GENL_struct(tag_name, tag_number, s_name, s_fields)
#undef GENL_op
#define GENL_op(op_name, op_num, handler, tla_list)   case op_num: return #op_name;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include GENL_MAGIC_INCLUDE_FILE
#endif
