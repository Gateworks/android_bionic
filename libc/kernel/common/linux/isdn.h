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
#ifndef __ISDN_H__
#define __ISDN_H__
#include <linux/errno.h>
#include <linux/fs.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/major.h>
#include <asm/io.h>
#include <linux/kernel.h>
#include <linux/signal.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/slab.h>
#include <linux/timer.h>
#include <linux/wait.h>
#include <linux/tty.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/tty_flip.h>
#include <linux/serial_reg.h>
#include <linux/fcntl.h>
#include <linux/types.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/interrupt.h>
#include <linux/ip.h>
#include <linux/in.h>
#include <linux/netdevice.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/etherdevice.h>
#include <linux/skbuff.h>
#include <linux/tcp.h>
#include <linux/mutex.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <uapi/linux/isdn.h>
#define ISDN_TTY_MAJOR 43
#define ISDN_TTYAUX_MAJOR 44
#define ISDN_MAJOR 45
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ISDN_MINOR_B 0
#define ISDN_MINOR_BMAX (ISDN_MAX_CHANNELS-1)
#define ISDN_MINOR_CTRL 64
#define ISDN_MINOR_CTRLMAX (64 + (ISDN_MAX_CHANNELS-1))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ISDN_MINOR_PPP 128
#define ISDN_MINOR_PPPMAX (128 + (ISDN_MAX_CHANNELS-1))
#define ISDN_MINOR_STATUS 255
#include <linux/isdnif.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ISDN_DRVIOCTL_MASK 0x7f
#define ISDN_SERVICE_VOICE 1
#define ISDN_SERVICE_AB 1<<1
#define ISDN_SERVICE_X21 1<<2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ISDN_SERVICE_G4 1<<3
#define ISDN_SERVICE_BTX 1<<4
#define ISDN_SERVICE_DFUE 1<<5
#define ISDN_SERVICE_X25 1<<6
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ISDN_SERVICE_TTX 1<<7
#define ISDN_SERVICE_MIXED 1<<8
#define ISDN_SERVICE_FW 1<<9
#define ISDN_SERVICE_GTEL 1<<10
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ISDN_SERVICE_BTXN 1<<11
#define ISDN_SERVICE_BTEL 1<<12
#define USG_NONE(x) ((x & ISDN_USAGE_MASK)==ISDN_USAGE_NONE)
#define USG_RAW(x) ((x & ISDN_USAGE_MASK)==ISDN_USAGE_RAW)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define USG_MODEM(x) ((x & ISDN_USAGE_MASK)==ISDN_USAGE_MODEM)
#define USG_VOICE(x) ((x & ISDN_USAGE_MASK)==ISDN_USAGE_VOICE)
#define USG_NET(x) ((x & ISDN_USAGE_MASK)==ISDN_USAGE_NET)
#define USG_FAX(x) ((x & ISDN_USAGE_MASK)==ISDN_USAGE_FAX)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define USG_OUTGOING(x) ((x & ISDN_USAGE_OUTGOING)==ISDN_USAGE_OUTGOING)
#define USG_MODEMORVOICE(x) (((x & ISDN_USAGE_MASK)==ISDN_USAGE_MODEM) ||   ((x & ISDN_USAGE_MASK)==ISDN_USAGE_VOICE) )
#define ISDN_TIMER_RES 4
#define ISDN_TIMER_02SEC (HZ/ISDN_TIMER_RES/5)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ISDN_TIMER_1SEC (HZ/ISDN_TIMER_RES)
#define ISDN_TIMER_RINGING 5
#define ISDN_TIMER_KEEPINT 10
#define ISDN_TIMER_MODEMREAD 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ISDN_TIMER_MODEMPLUS 2
#define ISDN_TIMER_MODEMRING 4
#define ISDN_TIMER_MODEMXMIT 8
#define ISDN_TIMER_NETDIAL 16
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ISDN_TIMER_NETHANGUP 32
#define ISDN_TIMER_CARRIER 256
#define ISDN_TIMER_FAST (ISDN_TIMER_MODEMREAD | ISDN_TIMER_MODEMPLUS |   ISDN_TIMER_MODEMXMIT)
#define ISDN_TIMER_SLOW (ISDN_TIMER_MODEMRING | ISDN_TIMER_NETHANGUP |   ISDN_TIMER_NETDIAL | ISDN_TIMER_CARRIER)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ISDN_TIMER_DTIMEOUT10 (10*HZ/(ISDN_TIMER_02SEC*(ISDN_TIMER_RES+1)))
#define ISDN_TIMER_DTIMEOUT15 (15*HZ/(ISDN_TIMER_02SEC*(ISDN_TIMER_RES+1)))
#define ISDN_TIMER_DTIMEOUT60 (60*HZ/(ISDN_TIMER_02SEC*(ISDN_TIMER_RES+1)))
#define ISDN_GLOBAL_STOPPED 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ISDN_NET_CONNECTED 0x01
#define ISDN_NET_SECURE 0x02
#define ISDN_NET_CALLBACK 0x04
#define ISDN_NET_CBHUP 0x08
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ISDN_NET_CBOUT 0x10
#define ISDN_NET_MAGIC 0x49344C02
typedef struct {
 void *next;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 char num[ISDN_MSNLEN];
} isdn_net_phone;
typedef struct isdn_net_local_s {
 ulong magic;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct net_device_stats stats;
 int isdn_device;
 int isdn_channel;
 int ppp_slot;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int pre_device;
 int pre_channel;
 int exclusive;
 int flags;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int dialretry;
 int dialmax;
 int cbdelay;
 int dtimer;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 char msn[ISDN_MSNLEN];
 u_char cbhup;
 u_char dialstate;
 u_char p_encap;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u_char l2_proto;
 u_char l3_proto;
 int huptimer;
 int charge;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 ulong chargetime;
 int hupflags;
 int outgoing;
 int onhtime;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int chargeint;
 int onum;
 int cps;
 int transcount;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int sqfull;
 ulong sqfull_stamp;
 ulong slavedelay;
 int triggercps;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 isdn_net_phone *phone[2];
 isdn_net_phone *dial;
 struct net_device *master;
 struct net_device *slave;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct isdn_net_local_s *next;
 struct isdn_net_local_s *last;
 struct isdn_net_dev_s *netdev;
 struct sk_buff_head super_tx_queue;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 atomic_t frame_cnt;
 spinlock_t xmit_lock;
 int pppbind;
 int dialtimeout;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int dialwait;
 ulong dialstarted;
 ulong dialwait_timer;
 int huptimeout;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 ulong cisco_myseq;
 ulong cisco_mineseen;
 ulong cisco_yourseq;
 int cisco_keepalive_period;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 ulong cisco_last_slarp_in;
 char cisco_line_state;
 char cisco_debserint;
 struct timer_list cisco_timer;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
} isdn_net_local;
typedef struct isdn_net_dev_s {
 isdn_net_local *local;
 isdn_net_local *queue;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 spinlock_t queue_lock;
 void *next;
 struct net_device *dev;
} isdn_net_dev;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ISDN_ASYNC_MAGIC 0x49344C01
#define ISDN_SERIAL_XMIT_SIZE 1024
#define ISDN_SERIAL_XMIT_MAX 4000
typedef struct atemu {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u_char profile[ISDN_MODEM_NUMREG];
 u_char mdmreg[ISDN_MODEM_NUMREG];
 char pmsn[ISDN_MSNLEN];
 char msn[ISDN_MSNLEN];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 char plmsn[ISDN_LMSNLEN];
 char lmsn[ISDN_LMSNLEN];
 char cpn[ISDN_MSNLEN];
 char connmsg[ISDN_CMSGLEN];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int mdmcmdl;
 int pluscount;
 u_long lastplus;
 int carrierwait;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 char mdmcmd[255];
 unsigned int charge;
} atemu;
typedef struct modem_info {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int magic;
 struct tty_port port;
 int x_char;
 int mcr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int msr;
 int lsr;
 int line;
 int online;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int dialing;
 int rcvsched;
 int isdn_driver;
 int isdn_channel;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int drv_index;
 int ncarrier;
 unsigned char last_cause[8];
 unsigned char last_num[ISDN_MSNLEN];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned char last_l2;
 unsigned char last_si;
 unsigned char last_lhup;
 unsigned char last_dir;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct timer_list nc_timer;
 int send_outstanding;
 int xmit_size;
 int xmit_count;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct sk_buff_head xmit_queue;
 atomic_t xmit_lock;
 atemu emu;
 spinlock_t readlock;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
} modem_info;
#define ISDN_MODEM_WINSIZE 8
typedef struct _isdn_modem {
 int refcount;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct tty_driver *tty_modem;
 struct tty_struct *modem_table[ISDN_MAX_CHANNELS];
 struct ktermios *modem_termios[ISDN_MAX_CHANNELS];
 struct ktermios *modem_termios_locked[ISDN_MAX_CHANNELS];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 modem_info info[ISDN_MAX_CHANNELS];
} isdn_modem_t;
#define V110_BUFSIZE 1024
typedef struct {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int nbytes;
 int nbits;
 unsigned char key;
 int decodelen;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int SyncInit;
 unsigned char *OnlineFrame;
 unsigned char *OfflineFrame;
 int framelen;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int skbuser;
 int skbidle;
 int introducer;
 int dbit;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned char b;
 int skbres;
 int maxsize;
 unsigned char *encodebuf;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned char decodebuf[V110_BUFSIZE];
} isdn_v110_stream;
typedef struct {
 char *next;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 char *private;
} infostruct;
#define DRV_FLAG_RUNNING 1
#define DRV_FLAG_REJBUS 2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DRV_FLAG_LOADED 4
typedef struct _isdn_driver {
 ulong online;
 ulong flags;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int locks;
 int channels;
 wait_queue_head_t st_waitq;
 int maxbufsize;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long pktcount;
 int stavail;
 isdn_if *interface;
 int *rcverr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int *rcvcount;
 struct sk_buff_head *rpqueue;
 wait_queue_head_t *rcv_waitq;
 wait_queue_head_t *snd_waitq;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 char msn2eaz[10][ISDN_MSNLEN];
} isdn_driver_t;
typedef struct isdn_devt {
 struct module *owner;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 spinlock_t lock;
 unsigned short flags;
 int drivers;
 int channels;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int net_verbose;
 int modempoll;
 spinlock_t timerlock;
 int tflags;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int global_flags;
 infostruct *infochain;
 wait_queue_head_t info_waitq;
 struct timer_list timer;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int chanmap[ISDN_MAX_CHANNELS];
 int drvmap[ISDN_MAX_CHANNELS];
 int usage[ISDN_MAX_CHANNELS];
 char num[ISDN_MAX_CHANNELS][ISDN_MSNLEN];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int m_idx[ISDN_MAX_CHANNELS];
 isdn_driver_t *drv[ISDN_MAX_DRIVERS];
 isdn_net_dev *netdev;
 char drvid[ISDN_MAX_DRIVERS][20];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct task_struct *profd;
 isdn_modem_t mdm;
 isdn_net_dev *rx_netdev[ISDN_MAX_CHANNELS];
 isdn_net_dev *st_netdev[ISDN_MAX_CHANNELS];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 ulong ibytes[ISDN_MAX_CHANNELS];
 ulong obytes[ISDN_MAX_CHANNELS];
 int v110emu[ISDN_MAX_CHANNELS];
 atomic_t v110use[ISDN_MAX_CHANNELS];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 isdn_v110_stream *v110[ISDN_MAX_CHANNELS];
 struct mutex mtx;
 unsigned long global_features;
} isdn_dev;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
