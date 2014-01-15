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
#ifndef _LINUX_RING_BUFFER_H
#define _LINUX_RING_BUFFER_H
#include <linux/kmemcheck.h>
#include <linux/mm.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/seq_file.h>
#include <linux/poll.h>
struct ring_buffer;
struct ring_buffer_iter;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct ring_buffer_event {
 kmemcheck_bitfield_begin(bitfield);
 u32 type_len:5, time_delta:27;
 kmemcheck_bitfield_end(bitfield);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 array[];
};
enum ring_buffer_type {
 RINGBUF_TYPE_DATA_TYPE_LEN_MAX = 28,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 RINGBUF_TYPE_PADDING,
 RINGBUF_TYPE_TIME_EXTEND,
 RINGBUF_TYPE_TIME_STAMP,
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct ring_buffer *
__ring_buffer_alloc(unsigned long size, unsigned flags, struct lock_class_key *key);
#define ring_buffer_alloc(size, flags)  ({   static struct lock_class_key __key;   __ring_buffer_alloc((size), (flags), &__key);  })
#define RING_BUFFER_ALL_CPUS -1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct ring_buffer_event *ring_buffer_lock_reserve(struct ring_buffer *buffer,
 unsigned long length);
struct ring_buffer_event *
ring_buffer_peek(struct ring_buffer *buffer, int cpu, u64 *ts,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long *lost_events);
struct ring_buffer_event *
ring_buffer_consume(struct ring_buffer *buffer, int cpu, u64 *ts,
 unsigned long *lost_events);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct ring_buffer_iter *
ring_buffer_read_prepare(struct ring_buffer *buffer, int cpu);
struct ring_buffer_event *
ring_buffer_iter_peek(struct ring_buffer_iter *iter, u64 *ts);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct ring_buffer_event *
ring_buffer_read(struct ring_buffer_iter *iter, u64 *ts);
struct trace_seq;
enum ring_buffer_flags {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 RB_FL_OVERWRITE = 1 << 0,
};
#endif
