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
#include <linux/hil.h>
#include <linux/time.h>
#include <linux/interrupt.h>
#include <linux/semaphore.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/serio.h>
#include <linux/list.h>
typedef struct hil_mlc hil_mlc;
enum hilse_act {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 HILSE_OUT = 0,
 HILSE_CTS,
 HILSE_OUT_LAST,
 HILSE_OUT_DISC,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 HILSE_FUNC,
 HILSE_IN = 0x100,
 HILSE_EXPECT,
 HILSE_EXPECT_LAST,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 HILSE_EXPECT_DISC
};
typedef int (hilse_func) (hil_mlc *mlc, int arg);
struct hilse_node {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 enum hilse_act act;
 union {
 hilse_func *func;
 hil_packet packet;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 } object;
 int arg;
 int good;
 int bad;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int ugly;
};
typedef int (hil_mlc_cts) (hil_mlc *mlc);
typedef void (hil_mlc_out) (hil_mlc *mlc);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
typedef int (hil_mlc_in) (hil_mlc *mlc, suseconds_t timeout);
struct hil_mlc_devinfo {
 uint8_t idd[16];
 uint8_t rsc[16];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint8_t exd[16];
 uint8_t rnm[16];
};
struct hil_mlc_serio_map {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 hil_mlc *mlc;
 int di_revmap;
 int didx;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define HIL_MLC_DEVMEM 16
struct hil_mlc {
 rwlock_t lock;
 void *priv;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int seidx;
 int istarted, ostarted;
 hil_mlc_cts *cts;
 struct semaphore csem;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 hil_mlc_out *out;
 struct semaphore osem;
 hil_packet opacket;
 hil_mlc_in *in;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct semaphore isem;
 hil_packet ipacket[16];
 hil_packet imatch;
 int icount;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct timeval instart;
 suseconds_t intimeout;
 int ddi;
 int lcv;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct timeval lcv_tv;
 int di_map[7];
 struct hil_mlc_devinfo di[HIL_MLC_DEVMEM];
 struct serio *serio[HIL_MLC_DEVMEM];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct hil_mlc_serio_map serio_map[HIL_MLC_DEVMEM];
 hil_packet serio_opacket[HIL_MLC_DEVMEM];
 int serio_oidx[HIL_MLC_DEVMEM];
 struct hil_mlc_devinfo di_scratch;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int opercnt;
 struct tasklet_struct *tasklet;
};
