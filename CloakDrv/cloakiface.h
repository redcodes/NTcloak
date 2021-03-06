#pragma once
#ifndef __CLOAKIFACE_H
#define __CLOAKIFACE_H

#ifdef CLOAKDRV_UM
#include <winternl.h>
#include <winioctl.h>
#else
#include <wdm.h>
#endif

#define CLOAKDRV_DEVICE_NAME L"\\Device\\CloakDrv"

#ifndef CLOAKDRV_UM
UNICODE_STRING gDeviceName = RTL_CONSTANT_STRING(CLOAKDRV_DEVICE_NAME);
#endif

#define IOCTL_CLOAKDRV_SET_HIDE					CTL_CODE(FILE_DEVICE_UNKNOWN, 0x800, METHOD_BUFFERED, FILE_ALL_ACCESS)
#define IOCTL_CLOAKDRV_UNSET_HIDE				CTL_CODE(FILE_DEVICE_UNKNOWN, 0x801, METHOD_BUFFERED, FILE_ALL_ACCESS)
#define IOCTL_CLOAKDRV_SET_INACCESSIBLE			CTL_CODE(FILE_DEVICE_UNKNOWN, 0x802, METHOD_BUFFERED, FILE_ALL_ACCESS)
#define IOCTL_CLOAKDRV_UNSET_INACCESSIBLE		CTL_CODE(FILE_DEVICE_UNKNOWN, 0x803, METHOD_BUFFERED, FILE_ALL_ACCESS)
#define IOCTL_CLOAKDRV_SET_READONLY				CTL_CODE(FILE_DEVICE_UNKNOWN, 0x804, METHOD_BUFFERED, FILE_ALL_ACCESS)
#define IOCTL_CLOAKDRV_UNSET_READONLY			CTL_CODE(FILE_DEVICE_UNKNOWN, 0x805, METHOD_BUFFERED, FILE_ALL_ACCESS)
#define IOCTL_CLOAKDRV_SET_WRITESPOOF_SOURCE	CTL_CODE(FILE_DEVICE_UNKNOWN, 0x806, METHOD_BUFFERED, FILE_ALL_ACCESS)
#define IOCTL_CLOAKDRV_SET_WRITESPOOF_TARGET	CTL_CODE(FILE_DEVICE_UNKNOWN, 0x807, METHOD_BUFFERED, FILE_ALL_ACCESS)
#define IOCTL_CLOAKDRV_UNSET_WRITESPOOF			CTL_CODE(FILE_DEVICE_UNKNOWN, 0x808, METHOD_BUFFERED, FILE_ALL_ACCESS)

#endif