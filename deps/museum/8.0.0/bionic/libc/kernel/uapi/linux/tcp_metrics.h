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
#ifndef _LINUX_TCP_METRICS_H
#define _LINUX_TCP_METRICS_H
#define LINUX_TCP_METRICS_H
#define LINUX_TCP_METRICS_H_
#define _UAPI_LINUX_TCP_METRICS_H
#define _UAPI_LINUX_TCP_METRICS_H_
#define _LINUX_TCP_METRICS_H_
#include <museum/8.0.0/bionic/libc/linux/types.h>
#define TCP_METRICS_GENL_NAME "tcp_metrics"
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define TCP_METRICS_GENL_VERSION 0x1
enum tcp_metric_index {
  TCP_METRIC_RTT,
  TCP_METRIC_RTTVAR,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  TCP_METRIC_SSTHRESH,
  TCP_METRIC_CWND,
  TCP_METRIC_REORDERING,
  TCP_METRIC_RTT_US,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  TCP_METRIC_RTTVAR_US,
  __TCP_METRIC_MAX,
};
#define TCP_METRIC_MAX (__TCP_METRIC_MAX - 1)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum {
  TCP_METRICS_ATTR_UNSPEC,
  TCP_METRICS_ATTR_ADDR_IPV4,
  TCP_METRICS_ATTR_ADDR_IPV6,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  TCP_METRICS_ATTR_AGE,
  TCP_METRICS_ATTR_TW_TSVAL,
  TCP_METRICS_ATTR_TW_TS_STAMP,
  TCP_METRICS_ATTR_VALS,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  TCP_METRICS_ATTR_FOPEN_MSS,
  TCP_METRICS_ATTR_FOPEN_SYN_DROPS,
  TCP_METRICS_ATTR_FOPEN_SYN_DROP_TS,
  TCP_METRICS_ATTR_FOPEN_COOKIE,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  TCP_METRICS_ATTR_SADDR_IPV4,
  TCP_METRICS_ATTR_SADDR_IPV6,
  TCP_METRICS_ATTR_PAD,
  __TCP_METRICS_ATTR_MAX,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define TCP_METRICS_ATTR_MAX (__TCP_METRICS_ATTR_MAX - 1)
enum {
  TCP_METRICS_CMD_UNSPEC,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  TCP_METRICS_CMD_GET,
  TCP_METRICS_CMD_DEL,
  __TCP_METRICS_CMD_MAX,
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define TCP_METRICS_CMD_MAX (__TCP_METRICS_CMD_MAX - 1)
#endif
