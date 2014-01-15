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
#ifndef _LINUX_TRACEPOINT_H
#define _LINUX_TRACEPOINT_H
#include <linux/errno.h>
#include <linux/types.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/rcupdate.h>
#include <linux/static_key.h>
struct module;
struct tracepoint;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct tracepoint_func {
 void *func;
 void *data;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct tracepoint {
 const char *name;
 struct static_key key;
 void (*regfunc)(void);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void (*unregfunc)(void);
 struct tracepoint_func __rcu *funcs;
};
struct tracepoint_iter {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct tracepoint * const *tracepoint;
};
#define PARAMS(args...) args
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#ifndef DECLARE_TRACE
#define TP_PROTO(args...) args
#define TP_ARGS(args...) args
#define TP_CONDITION(args...) args
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __DECLARE_TRACE(name, proto, args, cond, data_proto, data_args)   static inline void trace_##name(proto)   { }   static inline void trace_##name##_rcuidle(proto)   { }   static inline int   register_trace_##name(void (*probe)(data_proto),   void *data)   {   return -ENOSYS;   }   static inline int   unregister_trace_##name(void (*probe)(data_proto),   void *data)   {   return -ENOSYS;   }   static inline void check_trace_callback_type_##name(void (*cb)(data_proto))   {   }
#define DEFINE_TRACE_FN(name, reg, unreg)
#define DEFINE_TRACE(name)
#define EXPORT_TRACEPOINT_SYMBOL_GPL(name)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define EXPORT_TRACEPOINT_SYMBOL(name)
#define DECLARE_TRACE_NOARGS(name)   __DECLARE_TRACE(name, void, , 1, void *__data, __data)
#define DECLARE_TRACE(name, proto, args)   __DECLARE_TRACE(name, PARAMS(proto), PARAMS(args), 1,   PARAMS(void *__data, proto),   PARAMS(__data, args))
#define DECLARE_TRACE_CONDITION(name, proto, args, cond)   __DECLARE_TRACE(name, PARAMS(proto), PARAMS(args), PARAMS(cond),   PARAMS(void *__data, proto),   PARAMS(__data, args))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define TRACE_EVENT_FLAGS(event, flag)
#endif
#ifndef TRACE_EVENT
#define DECLARE_EVENT_CLASS(name, proto, args, tstruct, assign, print)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DEFINE_EVENT(template, name, proto, args)   DECLARE_TRACE(name, PARAMS(proto), PARAMS(args))
#define DEFINE_EVENT_PRINT(template, name, proto, args, print)   DECLARE_TRACE(name, PARAMS(proto), PARAMS(args))
#define DEFINE_EVENT_CONDITION(template, name, proto,   args, cond)   DECLARE_TRACE_CONDITION(name, PARAMS(proto),   PARAMS(args), PARAMS(cond))
#define TRACE_EVENT(name, proto, args, struct, assign, print)   DECLARE_TRACE(name, PARAMS(proto), PARAMS(args))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define TRACE_EVENT_FN(name, proto, args, struct,   assign, print, reg, unreg)   DECLARE_TRACE(name, PARAMS(proto), PARAMS(args))
#define TRACE_EVENT_CONDITION(name, proto, args, cond,   struct, assign, print)   DECLARE_TRACE_CONDITION(name, PARAMS(proto),   PARAMS(args), PARAMS(cond))
#define TRACE_EVENT_FLAGS(event, flag)
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
