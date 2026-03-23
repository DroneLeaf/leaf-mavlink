#pragma once
// MESSAGE LEAF_QGC_VIDEO_CLEAR PACKING

#define MAVLINK_MSG_ID_LEAF_QGC_VIDEO_CLEAR 77046


typedef struct __mavlink_leaf_qgc_video_clear_t {
 uint8_t clear; /*<  1 to clear tracker, 0 reserved*/
} mavlink_leaf_qgc_video_clear_t;

#define MAVLINK_MSG_ID_LEAF_QGC_VIDEO_CLEAR_LEN 1
#define MAVLINK_MSG_ID_LEAF_QGC_VIDEO_CLEAR_MIN_LEN 1
#define MAVLINK_MSG_ID_77046_LEN 1
#define MAVLINK_MSG_ID_77046_MIN_LEN 1

#define MAVLINK_MSG_ID_LEAF_QGC_VIDEO_CLEAR_CRC 2
#define MAVLINK_MSG_ID_77046_CRC 2



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_LEAF_QGC_VIDEO_CLEAR { \
    77046, \
    "LEAF_QGC_VIDEO_CLEAR", \
    1, \
    {  { "clear", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_leaf_qgc_video_clear_t, clear) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_LEAF_QGC_VIDEO_CLEAR { \
    "LEAF_QGC_VIDEO_CLEAR", \
    1, \
    {  { "clear", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_leaf_qgc_video_clear_t, clear) }, \
         } \
}
#endif

/**
 * @brief Pack a leaf_qgc_video_clear message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param clear  1 to clear tracker, 0 reserved
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_qgc_video_clear_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t clear)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_QGC_VIDEO_CLEAR_LEN];
    _mav_put_uint8_t(buf, 0, clear);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_QGC_VIDEO_CLEAR_LEN);
#else
    mavlink_leaf_qgc_video_clear_t packet;
    packet.clear = clear;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_QGC_VIDEO_CLEAR_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_QGC_VIDEO_CLEAR;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_LEAF_QGC_VIDEO_CLEAR_MIN_LEN, MAVLINK_MSG_ID_LEAF_QGC_VIDEO_CLEAR_LEN, MAVLINK_MSG_ID_LEAF_QGC_VIDEO_CLEAR_CRC);
}

/**
 * @brief Pack a leaf_qgc_video_clear message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param clear  1 to clear tracker, 0 reserved
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_qgc_video_clear_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t clear)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_QGC_VIDEO_CLEAR_LEN];
    _mav_put_uint8_t(buf, 0, clear);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_QGC_VIDEO_CLEAR_LEN);
#else
    mavlink_leaf_qgc_video_clear_t packet;
    packet.clear = clear;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_QGC_VIDEO_CLEAR_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_QGC_VIDEO_CLEAR;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_QGC_VIDEO_CLEAR_MIN_LEN, MAVLINK_MSG_ID_LEAF_QGC_VIDEO_CLEAR_LEN, MAVLINK_MSG_ID_LEAF_QGC_VIDEO_CLEAR_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_QGC_VIDEO_CLEAR_MIN_LEN, MAVLINK_MSG_ID_LEAF_QGC_VIDEO_CLEAR_LEN);
#endif
}

/**
 * @brief Pack a leaf_qgc_video_clear message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param clear  1 to clear tracker, 0 reserved
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_qgc_video_clear_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t clear)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_QGC_VIDEO_CLEAR_LEN];
    _mav_put_uint8_t(buf, 0, clear);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_QGC_VIDEO_CLEAR_LEN);
#else
    mavlink_leaf_qgc_video_clear_t packet;
    packet.clear = clear;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_QGC_VIDEO_CLEAR_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_QGC_VIDEO_CLEAR;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_LEAF_QGC_VIDEO_CLEAR_MIN_LEN, MAVLINK_MSG_ID_LEAF_QGC_VIDEO_CLEAR_LEN, MAVLINK_MSG_ID_LEAF_QGC_VIDEO_CLEAR_CRC);
}

/**
 * @brief Encode a leaf_qgc_video_clear struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param leaf_qgc_video_clear C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_qgc_video_clear_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_leaf_qgc_video_clear_t* leaf_qgc_video_clear)
{
    return mavlink_msg_leaf_qgc_video_clear_pack(system_id, component_id, msg, leaf_qgc_video_clear->clear);
}

/**
 * @brief Encode a leaf_qgc_video_clear struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param leaf_qgc_video_clear C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_qgc_video_clear_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_leaf_qgc_video_clear_t* leaf_qgc_video_clear)
{
    return mavlink_msg_leaf_qgc_video_clear_pack_chan(system_id, component_id, chan, msg, leaf_qgc_video_clear->clear);
}

/**
 * @brief Encode a leaf_qgc_video_clear struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param leaf_qgc_video_clear C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_qgc_video_clear_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_leaf_qgc_video_clear_t* leaf_qgc_video_clear)
{
    return mavlink_msg_leaf_qgc_video_clear_pack_status(system_id, component_id, _status, msg,  leaf_qgc_video_clear->clear);
}

/**
 * @brief Send a leaf_qgc_video_clear message
 * @param chan MAVLink channel to send the message
 *
 * @param clear  1 to clear tracker, 0 reserved
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_leaf_qgc_video_clear_send(mavlink_channel_t chan, uint8_t clear)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_QGC_VIDEO_CLEAR_LEN];
    _mav_put_uint8_t(buf, 0, clear);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_QGC_VIDEO_CLEAR, buf, MAVLINK_MSG_ID_LEAF_QGC_VIDEO_CLEAR_MIN_LEN, MAVLINK_MSG_ID_LEAF_QGC_VIDEO_CLEAR_LEN, MAVLINK_MSG_ID_LEAF_QGC_VIDEO_CLEAR_CRC);
#else
    mavlink_leaf_qgc_video_clear_t packet;
    packet.clear = clear;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_QGC_VIDEO_CLEAR, (const char *)&packet, MAVLINK_MSG_ID_LEAF_QGC_VIDEO_CLEAR_MIN_LEN, MAVLINK_MSG_ID_LEAF_QGC_VIDEO_CLEAR_LEN, MAVLINK_MSG_ID_LEAF_QGC_VIDEO_CLEAR_CRC);
#endif
}

/**
 * @brief Send a leaf_qgc_video_clear message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_leaf_qgc_video_clear_send_struct(mavlink_channel_t chan, const mavlink_leaf_qgc_video_clear_t* leaf_qgc_video_clear)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_leaf_qgc_video_clear_send(chan, leaf_qgc_video_clear->clear);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_QGC_VIDEO_CLEAR, (const char *)leaf_qgc_video_clear, MAVLINK_MSG_ID_LEAF_QGC_VIDEO_CLEAR_MIN_LEN, MAVLINK_MSG_ID_LEAF_QGC_VIDEO_CLEAR_LEN, MAVLINK_MSG_ID_LEAF_QGC_VIDEO_CLEAR_CRC);
#endif
}

#if MAVLINK_MSG_ID_LEAF_QGC_VIDEO_CLEAR_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_leaf_qgc_video_clear_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t clear)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, clear);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_QGC_VIDEO_CLEAR, buf, MAVLINK_MSG_ID_LEAF_QGC_VIDEO_CLEAR_MIN_LEN, MAVLINK_MSG_ID_LEAF_QGC_VIDEO_CLEAR_LEN, MAVLINK_MSG_ID_LEAF_QGC_VIDEO_CLEAR_CRC);
#else
    mavlink_leaf_qgc_video_clear_t *packet = (mavlink_leaf_qgc_video_clear_t *)msgbuf;
    packet->clear = clear;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_QGC_VIDEO_CLEAR, (const char *)packet, MAVLINK_MSG_ID_LEAF_QGC_VIDEO_CLEAR_MIN_LEN, MAVLINK_MSG_ID_LEAF_QGC_VIDEO_CLEAR_LEN, MAVLINK_MSG_ID_LEAF_QGC_VIDEO_CLEAR_CRC);
#endif
}
#endif

#endif

// MESSAGE LEAF_QGC_VIDEO_CLEAR UNPACKING


/**
 * @brief Get field clear from leaf_qgc_video_clear message
 *
 * @return  1 to clear tracker, 0 reserved
 */
static inline uint8_t mavlink_msg_leaf_qgc_video_clear_get_clear(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Decode a leaf_qgc_video_clear message into a struct
 *
 * @param msg The message to decode
 * @param leaf_qgc_video_clear C-struct to decode the message contents into
 */
static inline void mavlink_msg_leaf_qgc_video_clear_decode(const mavlink_message_t* msg, mavlink_leaf_qgc_video_clear_t* leaf_qgc_video_clear)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    leaf_qgc_video_clear->clear = mavlink_msg_leaf_qgc_video_clear_get_clear(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_LEAF_QGC_VIDEO_CLEAR_LEN? msg->len : MAVLINK_MSG_ID_LEAF_QGC_VIDEO_CLEAR_LEN;
        memset(leaf_qgc_video_clear, 0, MAVLINK_MSG_ID_LEAF_QGC_VIDEO_CLEAR_LEN);
    memcpy(leaf_qgc_video_clear, _MAV_PAYLOAD(msg), len);
#endif
}
