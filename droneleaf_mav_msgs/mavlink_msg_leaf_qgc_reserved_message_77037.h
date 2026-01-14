#pragma once
// MESSAGE LEAF_QGC_RESERVED_MESSAGE_77037 PACKING

#define MAVLINK_MSG_ID_LEAF_QGC_RESERVED_MESSAGE_77037 77037


typedef struct __mavlink_leaf_qgc_reserved_message_77037_t {
 uint8_t reserved; /*<  Reserved field*/
} mavlink_leaf_qgc_reserved_message_77037_t;

#define MAVLINK_MSG_ID_LEAF_QGC_RESERVED_MESSAGE_77037_LEN 1
#define MAVLINK_MSG_ID_LEAF_QGC_RESERVED_MESSAGE_77037_MIN_LEN 1
#define MAVLINK_MSG_ID_77037_LEN 1
#define MAVLINK_MSG_ID_77037_MIN_LEN 1

#define MAVLINK_MSG_ID_LEAF_QGC_RESERVED_MESSAGE_77037_CRC 219
#define MAVLINK_MSG_ID_77037_CRC 219



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_LEAF_QGC_RESERVED_MESSAGE_77037 { \
    77037, \
    "LEAF_QGC_RESERVED_MESSAGE_77037", \
    1, \
    {  { "reserved", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_leaf_qgc_reserved_message_77037_t, reserved) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_LEAF_QGC_RESERVED_MESSAGE_77037 { \
    "LEAF_QGC_RESERVED_MESSAGE_77037", \
    1, \
    {  { "reserved", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_leaf_qgc_reserved_message_77037_t, reserved) }, \
         } \
}
#endif

/**
 * @brief Pack a leaf_qgc_reserved_message_77037 message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param reserved  Reserved field
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_qgc_reserved_message_77037_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t reserved)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_QGC_RESERVED_MESSAGE_77037_LEN];
    _mav_put_uint8_t(buf, 0, reserved);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_QGC_RESERVED_MESSAGE_77037_LEN);
#else
    mavlink_leaf_qgc_reserved_message_77037_t packet;
    packet.reserved = reserved;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_QGC_RESERVED_MESSAGE_77037_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_QGC_RESERVED_MESSAGE_77037;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_LEAF_QGC_RESERVED_MESSAGE_77037_MIN_LEN, MAVLINK_MSG_ID_LEAF_QGC_RESERVED_MESSAGE_77037_LEN, MAVLINK_MSG_ID_LEAF_QGC_RESERVED_MESSAGE_77037_CRC);
}

/**
 * @brief Pack a leaf_qgc_reserved_message_77037 message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param reserved  Reserved field
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_qgc_reserved_message_77037_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t reserved)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_QGC_RESERVED_MESSAGE_77037_LEN];
    _mav_put_uint8_t(buf, 0, reserved);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_QGC_RESERVED_MESSAGE_77037_LEN);
#else
    mavlink_leaf_qgc_reserved_message_77037_t packet;
    packet.reserved = reserved;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_QGC_RESERVED_MESSAGE_77037_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_QGC_RESERVED_MESSAGE_77037;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_QGC_RESERVED_MESSAGE_77037_MIN_LEN, MAVLINK_MSG_ID_LEAF_QGC_RESERVED_MESSAGE_77037_LEN, MAVLINK_MSG_ID_LEAF_QGC_RESERVED_MESSAGE_77037_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_QGC_RESERVED_MESSAGE_77037_MIN_LEN, MAVLINK_MSG_ID_LEAF_QGC_RESERVED_MESSAGE_77037_LEN);
#endif
}

/**
 * @brief Pack a leaf_qgc_reserved_message_77037 message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param reserved  Reserved field
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_qgc_reserved_message_77037_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t reserved)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_QGC_RESERVED_MESSAGE_77037_LEN];
    _mav_put_uint8_t(buf, 0, reserved);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_QGC_RESERVED_MESSAGE_77037_LEN);
#else
    mavlink_leaf_qgc_reserved_message_77037_t packet;
    packet.reserved = reserved;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_QGC_RESERVED_MESSAGE_77037_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_QGC_RESERVED_MESSAGE_77037;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_LEAF_QGC_RESERVED_MESSAGE_77037_MIN_LEN, MAVLINK_MSG_ID_LEAF_QGC_RESERVED_MESSAGE_77037_LEN, MAVLINK_MSG_ID_LEAF_QGC_RESERVED_MESSAGE_77037_CRC);
}

/**
 * @brief Encode a leaf_qgc_reserved_message_77037 struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param leaf_qgc_reserved_message_77037 C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_qgc_reserved_message_77037_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_leaf_qgc_reserved_message_77037_t* leaf_qgc_reserved_message_77037)
{
    return mavlink_msg_leaf_qgc_reserved_message_77037_pack(system_id, component_id, msg, leaf_qgc_reserved_message_77037->reserved);
}

/**
 * @brief Encode a leaf_qgc_reserved_message_77037 struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param leaf_qgc_reserved_message_77037 C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_qgc_reserved_message_77037_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_leaf_qgc_reserved_message_77037_t* leaf_qgc_reserved_message_77037)
{
    return mavlink_msg_leaf_qgc_reserved_message_77037_pack_chan(system_id, component_id, chan, msg, leaf_qgc_reserved_message_77037->reserved);
}

/**
 * @brief Encode a leaf_qgc_reserved_message_77037 struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param leaf_qgc_reserved_message_77037 C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_qgc_reserved_message_77037_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_leaf_qgc_reserved_message_77037_t* leaf_qgc_reserved_message_77037)
{
    return mavlink_msg_leaf_qgc_reserved_message_77037_pack_status(system_id, component_id, _status, msg,  leaf_qgc_reserved_message_77037->reserved);
}

/**
 * @brief Send a leaf_qgc_reserved_message_77037 message
 * @param chan MAVLink channel to send the message
 *
 * @param reserved  Reserved field
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_leaf_qgc_reserved_message_77037_send(mavlink_channel_t chan, uint8_t reserved)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_QGC_RESERVED_MESSAGE_77037_LEN];
    _mav_put_uint8_t(buf, 0, reserved);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_QGC_RESERVED_MESSAGE_77037, buf, MAVLINK_MSG_ID_LEAF_QGC_RESERVED_MESSAGE_77037_MIN_LEN, MAVLINK_MSG_ID_LEAF_QGC_RESERVED_MESSAGE_77037_LEN, MAVLINK_MSG_ID_LEAF_QGC_RESERVED_MESSAGE_77037_CRC);
#else
    mavlink_leaf_qgc_reserved_message_77037_t packet;
    packet.reserved = reserved;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_QGC_RESERVED_MESSAGE_77037, (const char *)&packet, MAVLINK_MSG_ID_LEAF_QGC_RESERVED_MESSAGE_77037_MIN_LEN, MAVLINK_MSG_ID_LEAF_QGC_RESERVED_MESSAGE_77037_LEN, MAVLINK_MSG_ID_LEAF_QGC_RESERVED_MESSAGE_77037_CRC);
#endif
}

/**
 * @brief Send a leaf_qgc_reserved_message_77037 message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_leaf_qgc_reserved_message_77037_send_struct(mavlink_channel_t chan, const mavlink_leaf_qgc_reserved_message_77037_t* leaf_qgc_reserved_message_77037)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_leaf_qgc_reserved_message_77037_send(chan, leaf_qgc_reserved_message_77037->reserved);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_QGC_RESERVED_MESSAGE_77037, (const char *)leaf_qgc_reserved_message_77037, MAVLINK_MSG_ID_LEAF_QGC_RESERVED_MESSAGE_77037_MIN_LEN, MAVLINK_MSG_ID_LEAF_QGC_RESERVED_MESSAGE_77037_LEN, MAVLINK_MSG_ID_LEAF_QGC_RESERVED_MESSAGE_77037_CRC);
#endif
}

#if MAVLINK_MSG_ID_LEAF_QGC_RESERVED_MESSAGE_77037_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_leaf_qgc_reserved_message_77037_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t reserved)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, reserved);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_QGC_RESERVED_MESSAGE_77037, buf, MAVLINK_MSG_ID_LEAF_QGC_RESERVED_MESSAGE_77037_MIN_LEN, MAVLINK_MSG_ID_LEAF_QGC_RESERVED_MESSAGE_77037_LEN, MAVLINK_MSG_ID_LEAF_QGC_RESERVED_MESSAGE_77037_CRC);
#else
    mavlink_leaf_qgc_reserved_message_77037_t *packet = (mavlink_leaf_qgc_reserved_message_77037_t *)msgbuf;
    packet->reserved = reserved;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_QGC_RESERVED_MESSAGE_77037, (const char *)packet, MAVLINK_MSG_ID_LEAF_QGC_RESERVED_MESSAGE_77037_MIN_LEN, MAVLINK_MSG_ID_LEAF_QGC_RESERVED_MESSAGE_77037_LEN, MAVLINK_MSG_ID_LEAF_QGC_RESERVED_MESSAGE_77037_CRC);
#endif
}
#endif

#endif

// MESSAGE LEAF_QGC_RESERVED_MESSAGE_77037 UNPACKING


/**
 * @brief Get field reserved from leaf_qgc_reserved_message_77037 message
 *
 * @return  Reserved field
 */
static inline uint8_t mavlink_msg_leaf_qgc_reserved_message_77037_get_reserved(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Decode a leaf_qgc_reserved_message_77037 message into a struct
 *
 * @param msg The message to decode
 * @param leaf_qgc_reserved_message_77037 C-struct to decode the message contents into
 */
static inline void mavlink_msg_leaf_qgc_reserved_message_77037_decode(const mavlink_message_t* msg, mavlink_leaf_qgc_reserved_message_77037_t* leaf_qgc_reserved_message_77037)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    leaf_qgc_reserved_message_77037->reserved = mavlink_msg_leaf_qgc_reserved_message_77037_get_reserved(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_LEAF_QGC_RESERVED_MESSAGE_77037_LEN? msg->len : MAVLINK_MSG_ID_LEAF_QGC_RESERVED_MESSAGE_77037_LEN;
        memset(leaf_qgc_reserved_message_77037, 0, MAVLINK_MSG_ID_LEAF_QGC_RESERVED_MESSAGE_77037_LEN);
    memcpy(leaf_qgc_reserved_message_77037, _MAV_PAYLOAD(msg), len);
#endif
}
