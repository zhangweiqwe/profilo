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
#ifndef SCSI_NETLINK_FC_H
#define SCSI_NETLINK_FC_H
#define _SCSI_NETLINK_FC_H
#define _SCSI_NETLINK_FC_H_
#define _UAPI_SCSI_NETLINK_FC_H
#define _UAPI_SCSI_NETLINK_FC_H_
#define _UAPISCSI_NETLINK_FC_H
#define _UAPISCSI_NETLINK_FC_H_
#define SCSI_NETLINK_FC_H_
#include <museum/7.0.0/bionic/libc/scsi/scsi_netlink.h>
#define FC_NL_ASYNC_EVENT 0x0100
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define FC_NL_MSGALIGN(len) (((len) + 7) & ~7)
struct fc_nl_event {
  struct scsi_nl_hdr snlh;
  uint64_t seconds;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  uint64_t vendor_id;
  uint16_t host_no;
  uint16_t event_datalen;
  uint32_t event_num;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  uint32_t event_code;
  uint32_t event_data;
} __attribute__((aligned(sizeof(uint64_t))));
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
