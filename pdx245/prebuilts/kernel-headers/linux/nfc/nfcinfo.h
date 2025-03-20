#ifndef _LINUX_NFCINFO_H
#define _LINUX_NFCINFO_H

#include <linux/types.h>
#include <linux/ioctl.h>

/* NFC IOCTL */
#define NFCC_GET_INFO  _IOR('N', 0x20, unsigned int)

/* NFC chip information structure */
struct nqx_info {
    __u8 chip_type;
    __u8 rom_version;
    __u8 fw_major;
    __u8 fw_minor;
};

struct nqx_uinfo {
    __u32 i;
    struct nqx_info info;  // Nested structure for the actual chip info
};

#endif /* _LINUX_NFCINFO_H */
