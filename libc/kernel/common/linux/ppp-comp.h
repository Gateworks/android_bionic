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
#ifndef _NET_PPP_COMP_H
#define _NET_PPP_COMP_H
#include <uapi/linux/ppp-comp.h>
struct module;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#ifndef DO_BSD_COMPRESS
#define DO_BSD_COMPRESS 1
#endif
#ifndef DO_DEFLATE
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DO_DEFLATE 1
#endif
#define DO_PREDICTOR_1 0
#define DO_PREDICTOR_2 0
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct compressor {
 int compress_proto;
 void *(*comp_alloc) (unsigned char *options, int opt_len);
 void (*comp_free) (void *state);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*comp_init) (void *state, unsigned char *options,
 int opt_len, int unit, int opthdr, int debug);
 void (*comp_reset) (void *state);
 int (*compress) (void *state, unsigned char *rptr,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned char *obuf, int isize, int osize);
 void (*comp_stat) (void *state, struct compstat *stats);
 void *(*decomp_alloc) (unsigned char *options, int opt_len);
 void (*decomp_free) (void *state);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*decomp_init) (void *state, unsigned char *options,
 int opt_len, int unit, int opthdr, int mru,
 int debug);
 void (*decomp_reset) (void *state);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*decompress) (void *state, unsigned char *ibuf, int isize,
 unsigned char *obuf, int osize);
 void (*incomp) (void *state, unsigned char *ibuf, int icnt);
 void (*decomp_stat) (void *state, struct compstat *stats);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct module *owner;
 unsigned int comp_extra;
};
#define DECOMP_ERROR -1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DECOMP_FATALERROR -2
#endif
