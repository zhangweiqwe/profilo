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
#ifndef _UAPI_LINUX_TIMERFD_H
#define _UAPI_LINUX_TIMERFD_H
#define UAPI_LINUX_TIMERFD_H
#define UAPI_LINUX_TIMERFD_H_
#define NDK_ANDROID_SUPPORT_UAPI_LINUX_TIMERFD_H
#define NDK_ANDROID_SUPPORT_UAPI_LINUX_TIMERFD_H_
#define NDK_ANDROID_SUPPORT_LINUX_TIMERFD_H
#define NDK_ANDROID_SUPPORT_LINUX_TIMERFD_H_
#define _LINUX_TIMERFD_H
#define _LINUX_TIMERFD_H_
#define _UAPI_LINUX_TIMERFD_H_
#include <museum/8.1.0/bionic/libc/linux/types.h>
#include <museum/8.1.0/bionic/libc/linux/fcntl.h>
#include <museum/8.1.0/bionic/libc/linux/ioctl.h>
#define TFD_TIMER_ABSTIME (1 << 0)
#define TFD_TIMER_CANCEL_ON_SET (1 << 1)
#define TFD_CLOEXEC O_CLOEXEC
#define TFD_NONBLOCK O_NONBLOCK
#define TFD_IOC_SET_TICKS _IOW('T', 0, __u64)
#endif
