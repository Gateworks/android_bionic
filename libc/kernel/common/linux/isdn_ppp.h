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
#ifndef _LINUX_ISDN_PPP_H
#define _LINUX_ISDN_PPP_H
#include <uapi/linux/isdn_ppp.h>
#define DECOMP_ERR_NOMEM (-10)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MP_END_FRAG 0x40
#define MP_BEGIN_FRAG 0x80
#define MP_MAX_QUEUE_LEN 16
#define IPPP_RESET_MAXDATABYTES 32
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct isdn_ppp_resetparams {
 unsigned char valid:1;
 unsigned char rsend:1;
 unsigned char idval:1;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned char dtval:1;
 unsigned char expra:1;
 unsigned char id;
 unsigned short maxdlen;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned short dlen;
 unsigned char *data;
};
struct isdn_ppp_compressor {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct isdn_ppp_compressor *next, *prev;
 struct module *owner;
 int num;
 void *(*alloc) (struct isdn_ppp_comp_data *);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void (*free) (void *state);
 int (*init) (void *state, struct isdn_ppp_comp_data *,
 int unit,int debug);
 void (*reset) (void *state, unsigned char code, unsigned char id,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned char *data, unsigned len,
 struct isdn_ppp_resetparams *rsparm);
 int (*compress) (void *state, struct sk_buff *in,
 struct sk_buff *skb_out, int proto);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*decompress) (void *state,struct sk_buff *in,
 struct sk_buff *skb_out,
 struct isdn_ppp_resetparams *rsparm);
 void (*incomp) (void *state, struct sk_buff *in,int proto);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void (*stat) (void *state, struct compstat *stats);
};
typedef struct {
 unsigned long seqerrs;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long frame_drops;
 unsigned long overflows;
 unsigned long max_queue_len;
} isdn_mppp_stats;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
typedef struct {
 int mp_mrru;
 struct sk_buff * frags;
 long frames;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int seq;
 spinlock_t lock;
 int ref_ct;
 isdn_mppp_stats stats;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
} ippp_bundle;
#define NUM_RCV_BUFFS 64
struct ippp_buf_queue {
 struct ippp_buf_queue *next;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct ippp_buf_queue *last;
 char *buf;
 int len;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum ippp_ccp_reset_states {
 CCPResetIdle,
 CCPResetSentReq,
 CCPResetRcvdReq,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 CCPResetSentAck,
 CCPResetRcvdAck
};
struct ippp_ccp_reset_state {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 enum ippp_ccp_reset_states state;
 struct ippp_struct *is;
 unsigned char id;
 unsigned char ta:1;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned char expra:1;
 int dlen;
 struct timer_list timer;
 unsigned char data[IPPP_RESET_MAXDATABYTES];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct ippp_ccp_reset {
 struct ippp_ccp_reset_state *rs[256];
 unsigned char lastid;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct ippp_struct {
 struct ippp_struct *next_link;
 int state;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 spinlock_t buflock;
 struct ippp_buf_queue rq[NUM_RCV_BUFFS];
 struct ippp_buf_queue *first;
 struct ippp_buf_queue *last;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 wait_queue_head_t wq;
 struct task_struct *tk;
 unsigned int mpppcfg;
 unsigned int pppcfg;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int mru;
 unsigned int mpmru;
 unsigned int mpmtu;
 unsigned int maxcid;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct isdn_net_local_s *lp;
 int unit;
 int minor;
 unsigned int last_link_seqno;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 long mp_seqno;
 unsigned long debug;
 struct isdn_ppp_compressor *compressor,*decompressor;
 struct isdn_ppp_compressor *link_compressor,*link_decompressor;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void *decomp_stat,*comp_stat,*link_decomp_stat,*link_comp_stat;
 struct ippp_ccp_reset *reset;
 unsigned long compflags;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
