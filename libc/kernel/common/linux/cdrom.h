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
#ifndef _LINUX_CDROM_H
#define _LINUX_CDROM_H
#include <linux/fs.h>
#include <linux/list.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <uapi/linux/cdrom.h>
struct packet_command
{
 unsigned char cmd[CDROM_PACKET_SIZE];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned char *buffer;
 unsigned int buflen;
 int stat;
 struct request_sense *sense;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned char data_direction;
 int quiet;
 int timeout;
 void *reserved[1];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define CDDA_OLD 0
#define CDDA_BPC_SINGLE 1
#define CDDA_BPC_FULL 2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct cdrom_device_info {
 struct cdrom_device_ops *ops;
 struct gendisk *disk;
 void *handle;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int mask;
 int speed;
 int capacity;
 unsigned int options : 30;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned mc_flags : 2;
 unsigned int vfs_events;
 unsigned int ioctl_events;
 int use_count;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 char name[20];
 __u8 sanyo_slot : 2;
 __u8 keeplocked : 1;
 __u8 reserved : 5;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int cdda_method;
 __u8 last_sense;
 __u8 media_written;
 unsigned short mmc3_profile;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int for_data;
 int (*exit)(struct cdrom_device_info *);
 int mrw_mode_page;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct cdrom_device_ops {
 int (*open) (struct cdrom_device_info *, int);
 void (*release) (struct cdrom_device_info *);
 int (*drive_status) (struct cdrom_device_info *, int);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int (*check_events) (struct cdrom_device_info *cdi,
 unsigned int clearing, int slot);
 int (*media_changed) (struct cdrom_device_info *, int);
 int (*tray_move) (struct cdrom_device_info *, int);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*lock_door) (struct cdrom_device_info *, int);
 int (*select_speed) (struct cdrom_device_info *, int);
 int (*select_disc) (struct cdrom_device_info *, int);
 int (*get_last_session) (struct cdrom_device_info *,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct cdrom_multisession *);
 int (*get_mcn) (struct cdrom_device_info *,
 struct cdrom_mcn *);
 int (*reset) (struct cdrom_device_info *);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*audio_ioctl) (struct cdrom_device_info *,unsigned int, void *);
 const int capability;
 int n_minors;
 int (*generic_packet) (struct cdrom_device_info *,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct packet_command *);
};
typedef struct {
 int data;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int audio;
 int cdi;
 int xa;
 long error;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
} tracktype;
#define CDROM_MAX_SLOTS 256
struct cdrom_mechstat_header {
#ifdef __BIG_ENDIAN_BITFIELD
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 fault : 1;
 __u8 changer_state : 2;
 __u8 curslot : 5;
 __u8 mech_state : 3;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 door_open : 1;
 __u8 reserved1 : 4;
#elif defined(__LITTLE_ENDIAN_BITFIELD)
 __u8 curslot : 5;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 changer_state : 2;
 __u8 fault : 1;
 __u8 reserved1 : 4;
 __u8 door_open : 1;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 mech_state : 3;
#endif
 __u8 curlba[3];
 __u8 nslots;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u16 slot_tablelen;
};
struct cdrom_slot {
#ifdef __BIG_ENDIAN_BITFIELD
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 disc_present : 1;
 __u8 reserved1 : 6;
 __u8 change : 1;
#elif defined(__LITTLE_ENDIAN_BITFIELD)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 change : 1;
 __u8 reserved1 : 6;
 __u8 disc_present : 1;
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 reserved2[3];
};
struct cdrom_changer_info {
 struct cdrom_mechstat_header hdr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct cdrom_slot slots[CDROM_MAX_SLOTS];
};
typedef enum {
 mechtype_caddy = 0,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 mechtype_tray = 1,
 mechtype_popup = 2,
 mechtype_individual_changer = 4,
 mechtype_cartridge_changer = 5
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
} mechtype_t;
typedef struct {
#ifdef __BIG_ENDIAN_BITFIELD
 __u8 ps : 1;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 reserved1 : 1;
 __u8 page_code : 6;
 __u8 page_length;
 __u8 reserved2 : 1;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 bufe : 1;
 __u8 ls_v : 1;
 __u8 test_write : 1;
 __u8 write_type : 4;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 multi_session : 2;
 __u8 fp : 1;
 __u8 copy : 1;
 __u8 track_mode : 4;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 reserved3 : 4;
 __u8 data_block_type : 4;
#elif defined(__LITTLE_ENDIAN_BITFIELD)
 __u8 page_code : 6;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 reserved1 : 1;
 __u8 ps : 1;
 __u8 page_length;
 __u8 write_type : 4;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 test_write : 1;
 __u8 ls_v : 1;
 __u8 bufe : 1;
 __u8 reserved2 : 1;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 track_mode : 4;
 __u8 copy : 1;
 __u8 fp : 1;
 __u8 multi_session : 2;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 data_block_type : 4;
 __u8 reserved3 : 4;
#endif
 __u8 link_size;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 reserved4;
#ifdef __BIG_ENDIAN_BITFIELD
 __u8 reserved5 : 2;
 __u8 app_code : 6;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#elif defined(__LITTLE_ENDIAN_BITFIELD)
 __u8 app_code : 6;
 __u8 reserved5 : 2;
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 session_format;
 __u8 reserved6;
 __be32 packet_size;
 __u16 audio_pause;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 mcn[16];
 __u8 isrc[16];
 __u8 subhdr0;
 __u8 subhdr1;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 subhdr2;
 __u8 subhdr3;
} __attribute__((packed)) write_param_page;
struct modesel_head
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
{
 __u8 reserved1;
 __u8 medium;
 __u8 reserved2;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 block_desc_length;
 __u8 density;
 __u8 number_of_blocks_hi;
 __u8 number_of_blocks_med;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 number_of_blocks_lo;
 __u8 reserved3;
 __u8 block_length_hi;
 __u8 block_length_med;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 block_length_lo;
};
typedef struct {
 __u16 report_key_length;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 reserved1;
 __u8 reserved2;
#ifdef __BIG_ENDIAN_BITFIELD
 __u8 type_code : 2;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 vra : 3;
 __u8 ucca : 3;
#elif defined(__LITTLE_ENDIAN_BITFIELD)
 __u8 ucca : 3;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 vra : 3;
 __u8 type_code : 2;
#endif
 __u8 region_mask;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 rpc_scheme;
 __u8 reserved3;
} rpc_state_t;
struct event_header {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __be16 data_len;
#ifdef __BIG_ENDIAN_BITFIELD
 __u8 nea : 1;
 __u8 reserved1 : 4;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 notification_class : 3;
#elif defined(__LITTLE_ENDIAN_BITFIELD)
 __u8 notification_class : 3;
 __u8 reserved1 : 4;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 nea : 1;
#endif
 __u8 supp_event_class;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct media_event_desc {
#ifdef __BIG_ENDIAN_BITFIELD
 __u8 reserved1 : 4;
 __u8 media_event_code : 4;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 reserved2 : 6;
 __u8 media_present : 1;
 __u8 door_open : 1;
#elif defined(__LITTLE_ENDIAN_BITFIELD)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 media_event_code : 4;
 __u8 reserved1 : 4;
 __u8 door_open : 1;
 __u8 media_present : 1;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 reserved2 : 6;
#endif
 __u8 start_slot;
 __u8 end_slot;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#endif
