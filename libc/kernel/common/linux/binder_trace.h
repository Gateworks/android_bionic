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
#undef TRACE_SYSTEM
#define TRACE_SYSTEM binder
#if !defined(_BINDER_TRACE_H) || defined(TRACE_HEADER_MULTI_READ)
#define _BINDER_TRACE_H
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/tracepoint.h>
struct binder_buffer;
struct binder_node;
struct binder_proc;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct binder_ref;
struct binder_thread;
struct binder_transaction;
#define DEFINE_BINDER_LOCK_EVENT(name)  DEFINE_EVENT(binder_lock_class, name,   TP_PROTO(const char *func),   TP_ARGS(func))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DEFINE_BINDER_FUNCTION_RETURN_EVENT(name)  DEFINE_EVENT(binder_function_return_class, name,   TP_PROTO(int ret),   TP_ARGS(ret))
#endif
#undef TRACE_INCLUDE_PATH
#undef TRACE_INCLUDE_FILE
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define TRACE_INCLUDE_PATH .
#define TRACE_INCLUDE_FILE binder_trace
#include <trace/define_trace.h>
