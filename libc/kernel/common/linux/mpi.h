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
#ifndef G10_MPI_H
#define G10_MPI_H
#include <linux/types.h>
#define SHA1_DIGEST_LENGTH 20
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define BYTES_PER_MPI_LIMB (BITS_PER_LONG / 8)
#define BITS_PER_MPI_LIMB BITS_PER_LONG
typedef unsigned long int mpi_limb_t;
typedef signed long int mpi_limb_signed_t;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct gcry_mpi {
 int alloced;
 int nlimbs;
 int nbits;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int sign;
 unsigned flags;
 mpi_limb_t *d;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
typedef struct gcry_mpi *MPI;
#define mpi_get_nlimbs(a) ((a)->nlimbs)
#define mpi_is_neg(a) ((a)->sign)
#define log_mpidump g10_log_mpidump
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
