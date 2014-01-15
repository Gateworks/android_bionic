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
#ifndef LINUX_MLD_H
#define LINUX_MLD_H
#include <linux/in6.h>
#include <linux/icmpv6.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct mld_msg {
 struct icmp6hdr mld_hdr;
 struct in6_addr mld_mca;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define mld_type mld_hdr.icmp6_type
#define mld_code mld_hdr.icmp6_code
#define mld_cksum mld_hdr.icmp6_cksum
#define mld_maxdelay mld_hdr.icmp6_maxdelay
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define mld_reserved mld_hdr.icmp6_dataun.un_data16[1]
struct mld2_grec {
 __u8 grec_type;
 __u8 grec_auxwords;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __be16 grec_nsrcs;
 struct in6_addr grec_mca;
 struct in6_addr grec_src[0];
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct mld2_report {
 struct icmp6hdr mld2r_hdr;
 struct mld2_grec mld2r_grec[0];
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define mld2r_type mld2r_hdr.icmp6_type
#define mld2r_resv1 mld2r_hdr.icmp6_code
#define mld2r_cksum mld2r_hdr.icmp6_cksum
#define mld2r_resv2 mld2r_hdr.icmp6_dataun.un_data16[0]
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define mld2r_ngrec mld2r_hdr.icmp6_dataun.un_data16[1]
struct mld2_query {
 struct icmp6hdr mld2q_hdr;
 struct in6_addr mld2q_mca;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#ifdef __LITTLE_ENDIAN_BITFIELD
 __u8 mld2q_qrv:3,
 mld2q_suppress:1,
 mld2q_resv2:4;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#elif defined(__BIG_ENDIAN_BITFIELD)
 __u8 mld2q_resv2:4,
 mld2q_suppress:1,
 mld2q_qrv:3;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#else
#error "Please fix <asm/byteorder.h>"
#endif
 __u8 mld2q_qqic;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __be16 mld2q_nsrcs;
 struct in6_addr mld2q_srcs[0];
};
#define mld2q_type mld2q_hdr.icmp6_type
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define mld2q_code mld2q_hdr.icmp6_code
#define mld2q_cksum mld2q_hdr.icmp6_cksum
#define mld2q_mrc mld2q_hdr.icmp6_maxdelay
#define mld2q_resv1 mld2q_hdr.icmp6_dataun.un_data16[1]
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MLDV2_MASK(value, nb) ((nb)>=32 ? (value) : ((1<<(nb))-1) & (value))
#define MLDV2_EXP(thresh, nbmant, nbexp, value)   ((value) < (thresh) ? (value) :   ((MLDV2_MASK(value, nbmant) | (1<<(nbmant))) <<   (MLDV2_MASK((value) >> (nbmant), nbexp) + (nbexp))))
#define MLDV2_MRC(value) MLDV2_EXP(0x8000, 12, 3, value)
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
