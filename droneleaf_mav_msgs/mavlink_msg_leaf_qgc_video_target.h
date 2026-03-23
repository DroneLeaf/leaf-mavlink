#pragma once
// MESSAGE LEAF_QGC_VIDEO_TARGET PACKING

#define MAVLINK_MSG_ID_LEAF_QGC_VIDEO_TARGET 77045


typedef struct __mavlink_leaf_qgc_video_target_t {
 float x; /*<  Top-left X or click X, normalized [0..1]*/
 float y; /*<  Top-left Y or click Y, normalized [0..1]*/
 float w; /*<  Width of ROI, normalized [0..1]. 0 means click.*/
 float h; /*<  Height of ROI, normalized [0..1]. 0 means click.*/
} mavlink_leaf_qgc_video_target_t;

#define MAVLINK_MSG_ID_LEAF_QGC_VIDEO_TARGET_LEN 16
#define MAVLINK_MSG_ID_LEAF_QGC_VIDEO_TARGET_MIN_LEN 16
#define MAVLINK_MSG_ID_77045_LEN 16
#define MAVLINK_MSG_ID_77045_MIN_LEN 16

#define MAVLINK_MSG_ID_LEAF_QGC_VIDEO_TARGET_CRC 28
#define MAVLINK_MSG_ID_77045_CRC 28



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_LEAF_QGC_VIDEO_TARGET { \
    77045, \
    "LEAF_QGC_VIDEO_TARGET", \
    4, \
    {  { "x", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_leaf_qgc_video_target_t, x) }, \
         { "y", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_leaf_qgc_video_target_t, y) }, \
         { "w", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_leaf_qgc_video_target_t, w) }, \
         { "h", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_leaf_qgc_video_target_t, h) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_LEAF_QGC_VIDEO_TARGET { \
    "LEAF_QGC_VIDEO_TARGET", \
    4, \
    {  { "x", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_leaf_qgc_video_target_t, x) }, \
         { "y", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_leaf_qgc_video_target_t, y) }, \
         { "w", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_leaf_qgc_video_target_t, w) }, \
         { "h", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_leaf_qgc_video_target_t, h) }, \
         } \
}
#endif

/**
 * @brief Pack a leaf_qgc_video_target message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param x  Top-left X or click X, normalized [0..1]
 * @param y  Top-left Y or click Y, normalized [0..1]
 * @param w  Width of ROI, normalized [0..1]. 0 means click.
 * @param h  Height of ROI, normalized [0..1]. 0 means click.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_qgc_video_target_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               float x, float y, float w, float h)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_QGC_VIDEO_TARGET_LEN];
    _mav_put_float(buf, 0, x);
    _mav_put_float(buf, 4, y);
    _mav_put_float(buf, 8, w);
    _mav_put_float(buf, 12, h);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_QGC_VIDEO_TARGET_LEN);
#else
    mavlink_leaf_qgc_video_target_t packet;
    packet.x = x;
    packet.y = y;
    packet.w = w;
    packet.h = h;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_QGC_VIDEO_TARGET_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_QGC_VIDEO_TARGET;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_LEAF_QGC_VIDEO_TARGET_MIN_LEN, MAVLINK_MSG_ID_LEAF_QGC_VIDEO_TARGET_LEN, MAVLINK_MSG_ID_LEAF_QGC_VIDEO_TARGET_CRC);
}

/**
 * @brief Pack a leaf_qgc_video_target message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param x  Top-left X or click X, normalized [0..1]
 * @param y  Top-left Y or click Y, normalized [0..1]
 * @param w  Width of ROI, normalized [0..1]. 0 means click.
 * @param h  Height of ROI, normalized [0..1]. 0 means click.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_qgc_video_target_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               float x, float y, float w, float h)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_QGC_VIDEO_TARGET_LEN];
    _mav_put_float(buf, 0, x);
    _mav_put_float(buf, 4, y);
    _mav_put_float(buf, 8, w);
    _mav_put_float(buf, 12, h);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_QGC_VIDEO_TARGET_LEN);
#else
    mavlink_leaf_qgc_video_target_t packet;
    packet.x = x;
    packet.y = y;
    packet.w = w;
    packet.h = h;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_QGC_VIDEO_TARGET_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_QGC_VIDEO_TARGET;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_QGC_VIDEO_TARGET_MIN_LEN, MAVLINK_MSG_ID_LEAF_QGC_VIDEO_TARGET_LEN, MAVLINK_MSG_ID_LEAF_QGC_VIDEO_TARGET_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_QGC_VIDEO_TARGET_MIN_LEN, MAVLINK_MSG_ID_LEAF_QGC_VIDEO_TARGET_LEN);
#endif
}

/**
 * @brief Pack a leaf_qgc_video_target message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param x  Top-left X or click X, normalized [0..1]
 * @param y  Top-left Y or click Y, normalized [0..1]
 * @param w  Width of ROI, normalized [0..1]. 0 means click.
 * @param h  Height of ROI, normalized [0..1]. 0 means click.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_qgc_video_target_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   float x,float y,float w,float h)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_QGC_VIDEO_TARGET_LEN];
    _mav_put_float(buf, 0, x);
    _mav_put_float(buf, 4, y);
    _mav_put_float(buf, 8, w);
    _mav_put_float(buf, 12, h);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_QGC_VIDEO_TARGET_LEN);
#else
    mavlink_leaf_qgc_video_target_t packet;
    packet.x = x;
    packet.y = y;
    packet.w = w;
    packet.h = h;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_QGC_VIDEO_TARGET_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_QGC_VIDEO_TARGET;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_LEAF_QGC_VIDEO_TARGET_MIN_LEN, MAVLINK_MSG_ID_LEAF_QGC_VIDEO_TARGET_LEN, MAVLINK_MSG_ID_LEAF_QGC_VIDEO_TARGET_CRC);
}

/**
 * @brief Encode a leaf_qgc_video_target struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param leaf_qgc_video_target C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_qgc_video_target_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_leaf_qgc_video_target_t* leaf_qgc_video_target)
{
    return mavlink_msg_leaf_qgc_video_target_pack(system_id, component_id, msg, leaf_qgc_video_target->x, leaf_qgc_video_target->y, leaf_qgc_video_target->w, leaf_qgc_video_target->h);
}

/**
 * @brief Encode a leaf_qgc_video_target struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param leaf_qgc_video_target C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_qgc_video_target_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_leaf_qgc_video_target_t* leaf_qgc_video_target)
{
    return mavlink_msg_leaf_qgc_video_target_pack_chan(system_id, component_id, chan, msg, leaf_qgc_video_target->x, leaf_qgc_video_target->y, leaf_qgc_video_target->w, leaf_qgc_video_target->h);
}

/**
 * @brief Encode a leaf_qgc_video_target struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param leaf_qgc_video_target C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_qgc_video_target_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_leaf_qgc_video_target_t* leaf_qgc_video_target)
{
    return mavlink_msg_leaf_qgc_video_target_pack_status(system_id, component_id, _status, msg,  leaf_qgc_video_target->x, leaf_qgc_video_target->y, leaf_qgc_video_target->w, leaf_qgc_video_target->h);
}

/**
 * @brief Send a leaf_qgc_video_target message
 * @param chan MAVLink channel to send the message
 *
 * @param x  Top-left X or click X, normalized [0..1]
 * @param y  Top-left Y or click Y, normalized [0..1]
 * @param w  Width of ROI, normalized [0..1]. 0 means click.
 * @param h  Height of ROI, normalized [0..1]. 0 means click.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_leaf_qgc_video_target_send(mavlink_channel_t chan, float x, float y, float w, float h)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_QGC_VIDEO_TARGET_LEN];
    _mav_put_float(buf, 0, x);
    _mav_put_float(buf, 4, y);
    _mav_put_float(buf, 8, w);
    _mav_put_float(buf, 12, h);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_QGC_VIDEO_TARGET, buf, MAVLINK_MSG_ID_LEAF_QGC_VIDEO_TARGET_MIN_LEN, MAVLINK_MSG_ID_LEAF_QGC_VIDEO_TARGET_LEN, MAVLINK_MSG_ID_LEAF_QGC_VIDEO_TARGET_CRC);
#else
    mavlink_leaf_qgc_video_target_t packet;
    packet.x = x;
    packet.y = y;
    packet.w = w;
    packet.h = h;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_QGC_VIDEO_TARGET, (const char *)&packet, MAVLINK_MSG_ID_LEAF_QGC_VIDEO_TARGET_MIN_LEN, MAVLINK_MSG_ID_LEAF_QGC_VIDEO_TARGET_LEN, MAVLINK_MSG_ID_LEAF_QGC_VIDEO_TARGET_CRC);
#endif
}

/**
 * @brief Send a leaf_qgc_video_target message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_leaf_qgc_video_target_send_struct(mavlink_channel_t chan, const mavlink_leaf_qgc_video_target_t* leaf_qgc_video_target)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_leaf_qgc_video_target_send(chan, leaf_qgc_video_target->x, leaf_qgc_video_target->y, leaf_qgc_video_target->w, leaf_qgc_video_target->h);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_QGC_VIDEO_TARGET, (const char *)leaf_qgc_video_target, MAVLINK_MSG_ID_LEAF_QGC_VIDEO_TARGET_MIN_LEN, MAVLINK_MSG_ID_LEAF_QGC_VIDEO_TARGET_LEN, MAVLINK_MSG_ID_LEAF_QGC_VIDEO_TARGET_CRC);
#endif
}

#if MAVLINK_MSG_ID_LEAF_QGC_VIDEO_TARGET_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_leaf_qgc_video_target_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  float x, float y, float w, float h)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, x);
    _mav_put_float(buf, 4, y);
    _mav_put_float(buf, 8, w);
    _mav_put_float(buf, 12, h);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_QGC_VIDEO_TARGET, buf, MAVLINK_MSG_ID_LEAF_QGC_VIDEO_TARGET_MIN_LEN, MAVLINK_MSG_ID_LEAF_QGC_VIDEO_TARGET_LEN, MAVLINK_MSG_ID_LEAF_QGC_VIDEO_TARGET_CRC);
#else
    mavlink_leaf_qgc_video_target_t *packet = (mavlink_leaf_qgc_video_target_t *)msgbuf;
    packet->x = x;
    packet->y = y;
    packet->w = w;
    packet->h = h;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_QGC_VIDEO_TARGET, (const char *)packet, MAVLINK_MSG_ID_LEAF_QGC_VIDEO_TARGET_MIN_LEN, MAVLINK_MSG_ID_LEAF_QGC_VIDEO_TARGET_LEN, MAVLINK_MSG_ID_LEAF_QGC_VIDEO_TARGET_CRC);
#endif
}
#endif

#endif

// MESSAGE LEAF_QGC_VIDEO_TARGET UNPACKING


/**
 * @brief Get field x from leaf_qgc_video_target message
 *
 * @return  Top-left X or click X, normalized [0..1]
 */
static inline float mavlink_msg_leaf_qgc_video_target_get_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field y from leaf_qgc_video_target message
 *
 * @return  Top-left Y or click Y, normalized [0..1]
 */
static inline float mavlink_msg_leaf_qgc_video_target_get_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field w from leaf_qgc_video_target message
 *
 * @return  Width of ROI, normalized [0..1]. 0 means click.
 */
static inline float mavlink_msg_leaf_qgc_video_target_get_w(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field h from leaf_qgc_video_target message
 *
 * @return  Height of ROI, normalized [0..1]. 0 means click.
 */
static inline float mavlink_msg_leaf_qgc_video_target_get_h(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Decode a leaf_qgc_video_target message into a struct
 *
 * @param msg The message to decode
 * @param leaf_qgc_video_target C-struct to decode the message contents into
 */
static inline void mavlink_msg_leaf_qgc_video_target_decode(const mavlink_message_t* msg, mavlink_leaf_qgc_video_target_t* leaf_qgc_video_target)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    leaf_qgc_video_target->x = mavlink_msg_leaf_qgc_video_target_get_x(msg);
    leaf_qgc_video_target->y = mavlink_msg_leaf_qgc_video_target_get_y(msg);
    leaf_qgc_video_target->w = mavlink_msg_leaf_qgc_video_target_get_w(msg);
    leaf_qgc_video_target->h = mavlink_msg_leaf_qgc_video_target_get_h(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_LEAF_QGC_VIDEO_TARGET_LEN? msg->len : MAVLINK_MSG_ID_LEAF_QGC_VIDEO_TARGET_LEN;
        memset(leaf_qgc_video_target, 0, MAVLINK_MSG_ID_LEAF_QGC_VIDEO_TARGET_LEN);
    memcpy(leaf_qgc_video_target, _MAV_PAYLOAD(msg), len);
#endif
}
