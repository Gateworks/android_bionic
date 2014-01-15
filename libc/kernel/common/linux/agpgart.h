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
#ifndef _AGP_H
#define _AGP_H 1
#include <linux/mutex.h>
#include <linux/agp_backend.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <uapi/linux/agpgart.h>
#define AGPGART_MINOR 175
struct agp_info {
 struct agp_version version;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 bridge_id;
 u32 agp_mode;
 unsigned long aper_base;
 size_t aper_size;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 size_t pg_total;
 size_t pg_system;
 size_t pg_used;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct agp_setup {
 u32 agp_mode;
};
struct agp_segment {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 off_t pg_start;
 size_t pg_count;
 int prot;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct agp_segment_priv {
 off_t pg_start;
 size_t pg_count;
 pgprot_t prot;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct agp_region {
 pid_t pid;
 size_t seg_count;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct agp_segment *seg_list;
};
struct agp_allocate {
 int key;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 size_t pg_count;
 u32 type;
 u32 physical;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct agp_bind {
 int key;
 off_t pg_start;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct agp_unbind {
 int key;
 u32 priority;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct agp_client {
 struct agp_client *next;
 struct agp_client *prev;
 pid_t pid;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int num_segments;
 struct agp_segment_priv **segments;
};
struct agp_controller {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct agp_controller *next;
 struct agp_controller *prev;
 pid_t pid;
 int num_clients;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct agp_memory *pool;
 struct agp_client *clients;
};
#define AGP_FF_ALLOW_CLIENT 0
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define AGP_FF_ALLOW_CONTROLLER 1
#define AGP_FF_IS_CLIENT 2
#define AGP_FF_IS_CONTROLLER 3
#define AGP_FF_IS_VALID 4
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct agp_file_private {
 struct agp_file_private *next;
 struct agp_file_private *prev;
 pid_t my_pid;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long access_flags;
};
struct agp_front_data {
 struct mutex agp_mutex;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct agp_controller *current_controller;
 struct agp_controller *controllers;
 struct agp_file_private *file_priv_list;
 bool used_by_controller;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 bool backend_acquired;
};
#endif
