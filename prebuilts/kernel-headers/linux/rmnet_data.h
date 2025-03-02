#ifndef _RMNET_DATA_H_
#define _RMNET_DATA_H_

#include <linux/types.h>

/* RMNET Constants */
#define RMNET_MAX_STR_LEN 128  // Increased from 16 for safety

/* RMNET Netlink Protocol */
#define RMNET_NETLINK_PROTO 31

/* RMNET Netlink Message Types */
#define RMNET_NETLINK_MSG_COMMAND    0
#define RMNET_NETLINK_MSG_RETURNCODE 1
#define RMNET_NETLINK_MSG_RETURNDATA 2

/* RMNET Netlink Commands */
#define RMNET_NETLINK_ASSOCIATE_NETWORK_DEVICE     1
#define RMNET_NETLINK_UNASSOCIATE_NETWORK_DEVICE   2
#define RMNET_NETLINK_GET_NETWORK_DEVICE_ASSOCIATED 3
#define RMNET_NETLINK_SET_LINK_EGRESS_DATA_FORMAT  4

/* RMNET Config Status */
#define RMNET_CONFIG_OK 0

/* RMNET Egress Format Flags */
#define RMNET_EGRESS_FORMAT__RESERVED__     (1<<0)
#define RMNET_EGRESS_FORMAT_MAP             (1<<1)
#define RMNET_EGRESS_FORMAT_AGGREGATION     (1<<2)
#define RMNET_EGRESS_FORMAT_MUXING          (1<<3)
#define RMNET_EGRESS_FORMAT_MAP_CKSUMV3     (1<<4)
#define RMNET_EGRESS_FORMAT_MAP_CKSUMV4     (1<<5)

struct rmnet_nl_msg_s {
    uint16_t message_type;
    uint16_t arg_length;
    uint8_t  data[RMNET_MAX_STR_LEN];
};

#endif /* _RMNET_DATA_H_ */