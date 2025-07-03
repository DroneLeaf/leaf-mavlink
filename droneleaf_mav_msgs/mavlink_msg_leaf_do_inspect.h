#pragma once
// MESSAGE LEAF_DO_INSPECT PACKING

#define MAVLINK_MSG_ID_LEAF_DO_INSPECT 77014


typedef struct __mavlink_leaf_do_inspect_t {
 uint8_t target_system; /*<  The system needs to perform inspection*/
 uint8_t slap; /*<  The slap to inspect, 1 or 2 or 0 for both*/
} mavlink_leaf_do_inspect_t;

#define MAVLINK_MSG_ID_LEAF_DO_INSPECT_LEN 2
#define MAVLINK_MSG_ID_LEAF_DO_INSPECT_MIN_LEN 2
#define MAVLINK_MSG_ID_77014_LEN 2
#define MAVLINK_MSG_ID_77014_MIN_LEN 2

#define MAVLINK_MSG_ID_LEAF_DO_INSPECT_CRC 54
#define MAVLINK_MSG_ID_77014_CRC 54



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_LEAF_DO_INSPECT { \
    77014, \
    "LEAF_DO_INSPECT", \
    2, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_leaf_do_inspect_t, target_system) }, \
         { "slap", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_leaf_do_inspect_t, slap) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_LEAF_DO_INSPECT { \
    "LEAF_DO_INSPECT", \
    2, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_leaf_do_inspect_t, target_system) }, \
         { "slap", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_leaf_do_inspect_t, slap) }, \
         } \
}
#endif

/**
 * @brief Pack a leaf_do_inspect message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system  The system needs to perform inspection
 * @param slap  The slap to inspect, 1 or 2 or 0 for both
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_do_inspect_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t target_system, uint8_t slap)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_DO_INSPECT_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, slap);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_DO_INSPECT_LEN);
#else
    mavlink_leaf_do_inspect_t packet;
    packet.target_system = target_system;
    packet.slap = slap;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_DO_INSPECT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_DO_INSPECT;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_LEAF_DO_INSPECT_MIN_LEN, MAVLINK_MSG_ID_LEAF_DO_INSPECT_LEN, MAVLINK_MSG_ID_LEAF_DO_INSPECT_CRC);
}

/**
 * @brief Pack a leaf_do_inspect message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system  The system needs to perform inspection
 * @param slap  The slap to inspect, 1 or 2 or 0 for both
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_do_inspect_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t target_system, uint8_t slap)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_DO_INSPECT_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, slap);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_DO_INSPECT_LEN);
#else
    mavlink_leaf_do_inspect_t packet;
    packet.target_system = target_system;
    packet.slap = slap;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_DO_INSPECT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_DO_INSPECT;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_DO_INSPECT_MIN_LEN, MAVLINK_MSG_ID_LEAF_DO_INSPECT_LEN, MAVLINK_MSG_ID_LEAF_DO_INSPECT_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_DO_INSPECT_MIN_LEN, MAVLINK_MSG_ID_LEAF_DO_INSPECT_LEN);
#endif
}

/**
 * @brief Pack a leaf_do_inspect message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param target_system  The system needs to perform inspection
 * @param slap  The slap to inspect, 1 or 2 or 0 for both
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_do_inspect_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t target_system,uint8_t slap)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_DO_INSPECT_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, slap);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_DO_INSPECT_LEN);
#else
    mavlink_leaf_do_inspect_t packet;
    packet.target_system = target_system;
    packet.slap = slap;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_DO_INSPECT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_DO_INSPECT;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_LEAF_DO_INSPECT_MIN_LEN, MAVLINK_MSG_ID_LEAF_DO_INSPECT_LEN, MAVLINK_MSG_ID_LEAF_DO_INSPECT_CRC);
}

/**
 * @brief Encode a leaf_do_inspect struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param leaf_do_inspect C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_do_inspect_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_leaf_do_inspect_t* leaf_do_inspect)
{
    return mavlink_msg_leaf_do_inspect_pack(system_id, component_id, msg, leaf_do_inspect->target_system, leaf_do_inspect->slap);
}

/**
 * @brief Encode a leaf_do_inspect struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param leaf_do_inspect C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_do_inspect_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_leaf_do_inspect_t* leaf_do_inspect)
{
    return mavlink_msg_leaf_do_inspect_pack_chan(system_id, component_id, chan, msg, leaf_do_inspect->target_system, leaf_do_inspect->slap);
}

/**
 * @brief Encode a leaf_do_inspect struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param leaf_do_inspect C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_do_inspect_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_leaf_do_inspect_t* leaf_do_inspect)
{
    return mavlink_msg_leaf_do_inspect_pack_status(system_id, component_id, _status, msg,  leaf_do_inspect->target_system, leaf_do_inspect->slap);
}

/**
 * @brief Send a leaf_do_inspect message
 * @param chan MAVLink channel to send the message
 *
 * @param target_system  The system needs to perform inspection
 * @param slap  The slap to inspect, 1 or 2 or 0 for both
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_leaf_do_inspect_send(mavlink_channel_t chan, uint8_t target_system, uint8_t slap)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_DO_INSPECT_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, slap);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_DO_INSPECT, buf, MAVLINK_MSG_ID_LEAF_DO_INSPECT_MIN_LEN, MAVLINK_MSG_ID_LEAF_DO_INSPECT_LEN, MAVLINK_MSG_ID_LEAF_DO_INSPECT_CRC);
#else
    mavlink_leaf_do_inspect_t packet;
    packet.target_system = target_system;
    packet.slap = slap;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_DO_INSPECT, (const char *)&packet, MAVLINK_MSG_ID_LEAF_DO_INSPECT_MIN_LEN, MAVLINK_MSG_ID_LEAF_DO_INSPECT_LEN, MAVLINK_MSG_ID_LEAF_DO_INSPECT_CRC);
#endif
}

/**
 * @brief Send a leaf_do_inspect message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_leaf_do_inspect_send_struct(mavlink_channel_t chan, const mavlink_leaf_do_inspect_t* leaf_do_inspect)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_leaf_do_inspect_send(chan, leaf_do_inspect->target_system, leaf_do_inspect->slap);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_DO_INSPECT, (const char *)leaf_do_inspect, MAVLINK_MSG_ID_LEAF_DO_INSPECT_MIN_LEN, MAVLINK_MSG_ID_LEAF_DO_INSPECT_LEN, MAVLINK_MSG_ID_LEAF_DO_INSPECT_CRC);
#endif
}

#if MAVLINK_MSG_ID_LEAF_DO_INSPECT_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_leaf_do_inspect_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t target_system, uint8_t slap)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, slap);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_DO_INSPECT, buf, MAVLINK_MSG_ID_LEAF_DO_INSPECT_MIN_LEN, MAVLINK_MSG_ID_LEAF_DO_INSPECT_LEN, MAVLINK_MSG_ID_LEAF_DO_INSPECT_CRC);
#else
    mavlink_leaf_do_inspect_t *packet = (mavlink_leaf_do_inspect_t *)msgbuf;
    packet->target_system = target_system;
    packet->slap = slap;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_DO_INSPECT, (const char *)packet, MAVLINK_MSG_ID_LEAF_DO_INSPECT_MIN_LEN, MAVLINK_MSG_ID_LEAF_DO_INSPECT_LEN, MAVLINK_MSG_ID_LEAF_DO_INSPECT_CRC);
#endif
}
#endif

#endif

// MESSAGE LEAF_DO_INSPECT UNPACKING


/**
 * @brief Get field target_system from leaf_do_inspect message
 *
 * @return  The system needs to perform inspection
 */
static inline uint8_t mavlink_msg_leaf_do_inspect_get_target_system(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field slap from leaf_do_inspect message
 *
 * @return  The slap to inspect, 1 or 2 or 0 for both
 */
static inline uint8_t mavlink_msg_leaf_do_inspect_get_slap(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Decode a leaf_do_inspect message into a struct
 *
 * @param msg The message to decode
 * @param leaf_do_inspect C-struct to decode the message contents into
 */
static inline void mavlink_msg_leaf_do_inspect_decode(const mavlink_message_t* msg, mavlink_leaf_do_inspect_t* leaf_do_inspect)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    leaf_do_inspect->target_system = mavlink_msg_leaf_do_inspect_get_target_system(msg);
    leaf_do_inspect->slap = mavlink_msg_leaf_do_inspect_get_slap(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_LEAF_DO_INSPECT_LEN? msg->len : MAVLINK_MSG_ID_LEAF_DO_INSPECT_LEN;
        memset(leaf_do_inspect, 0, MAVLINK_MSG_ID_LEAF_DO_INSPECT_LEN);
    memcpy(leaf_do_inspect, _MAV_PAYLOAD(msg), len);
#endif
}
