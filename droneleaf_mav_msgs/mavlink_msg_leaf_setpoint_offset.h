#pragma once
// MESSAGE LEAF_SETPOINT_OFFSET PACKING

#define MAVLINK_MSG_ID_LEAF_SETPOINT_OFFSET 77043


typedef struct __mavlink_leaf_setpoint_offset_t {
 float x; /*< [m] X position*/
 float y; /*< [m] Y position*/
 float z; /*< [m] Z position*/
 float yaw; /*< [rad] Yaw angle*/
} mavlink_leaf_setpoint_offset_t;

#define MAVLINK_MSG_ID_LEAF_SETPOINT_OFFSET_LEN 16
#define MAVLINK_MSG_ID_LEAF_SETPOINT_OFFSET_MIN_LEN 16
#define MAVLINK_MSG_ID_77043_LEN 16
#define MAVLINK_MSG_ID_77043_MIN_LEN 16

#define MAVLINK_MSG_ID_LEAF_SETPOINT_OFFSET_CRC 57
#define MAVLINK_MSG_ID_77043_CRC 57



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_LEAF_SETPOINT_OFFSET { \
    77043, \
    "LEAF_SETPOINT_OFFSET", \
    4, \
    {  { "x", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_leaf_setpoint_offset_t, x) }, \
         { "y", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_leaf_setpoint_offset_t, y) }, \
         { "z", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_leaf_setpoint_offset_t, z) }, \
         { "yaw", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_leaf_setpoint_offset_t, yaw) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_LEAF_SETPOINT_OFFSET { \
    "LEAF_SETPOINT_OFFSET", \
    4, \
    {  { "x", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_leaf_setpoint_offset_t, x) }, \
         { "y", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_leaf_setpoint_offset_t, y) }, \
         { "z", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_leaf_setpoint_offset_t, z) }, \
         { "yaw", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_leaf_setpoint_offset_t, yaw) }, \
         } \
}
#endif

/**
 * @brief Pack a leaf_setpoint_offset message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param x [m] X position
 * @param y [m] Y position
 * @param z [m] Z position
 * @param yaw [rad] Yaw angle
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_setpoint_offset_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               float x, float y, float z, float yaw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_SETPOINT_OFFSET_LEN];
    _mav_put_float(buf, 0, x);
    _mav_put_float(buf, 4, y);
    _mav_put_float(buf, 8, z);
    _mav_put_float(buf, 12, yaw);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_SETPOINT_OFFSET_LEN);
#else
    mavlink_leaf_setpoint_offset_t packet;
    packet.x = x;
    packet.y = y;
    packet.z = z;
    packet.yaw = yaw;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_SETPOINT_OFFSET_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_SETPOINT_OFFSET;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_LEAF_SETPOINT_OFFSET_MIN_LEN, MAVLINK_MSG_ID_LEAF_SETPOINT_OFFSET_LEN, MAVLINK_MSG_ID_LEAF_SETPOINT_OFFSET_CRC);
}

/**
 * @brief Pack a leaf_setpoint_offset message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param x [m] X position
 * @param y [m] Y position
 * @param z [m] Z position
 * @param yaw [rad] Yaw angle
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_setpoint_offset_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               float x, float y, float z, float yaw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_SETPOINT_OFFSET_LEN];
    _mav_put_float(buf, 0, x);
    _mav_put_float(buf, 4, y);
    _mav_put_float(buf, 8, z);
    _mav_put_float(buf, 12, yaw);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_SETPOINT_OFFSET_LEN);
#else
    mavlink_leaf_setpoint_offset_t packet;
    packet.x = x;
    packet.y = y;
    packet.z = z;
    packet.yaw = yaw;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_SETPOINT_OFFSET_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_SETPOINT_OFFSET;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_SETPOINT_OFFSET_MIN_LEN, MAVLINK_MSG_ID_LEAF_SETPOINT_OFFSET_LEN, MAVLINK_MSG_ID_LEAF_SETPOINT_OFFSET_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_SETPOINT_OFFSET_MIN_LEN, MAVLINK_MSG_ID_LEAF_SETPOINT_OFFSET_LEN);
#endif
}

/**
 * @brief Pack a leaf_setpoint_offset message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param x [m] X position
 * @param y [m] Y position
 * @param z [m] Z position
 * @param yaw [rad] Yaw angle
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_setpoint_offset_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   float x,float y,float z,float yaw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_SETPOINT_OFFSET_LEN];
    _mav_put_float(buf, 0, x);
    _mav_put_float(buf, 4, y);
    _mav_put_float(buf, 8, z);
    _mav_put_float(buf, 12, yaw);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_SETPOINT_OFFSET_LEN);
#else
    mavlink_leaf_setpoint_offset_t packet;
    packet.x = x;
    packet.y = y;
    packet.z = z;
    packet.yaw = yaw;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_SETPOINT_OFFSET_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_SETPOINT_OFFSET;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_LEAF_SETPOINT_OFFSET_MIN_LEN, MAVLINK_MSG_ID_LEAF_SETPOINT_OFFSET_LEN, MAVLINK_MSG_ID_LEAF_SETPOINT_OFFSET_CRC);
}

/**
 * @brief Encode a leaf_setpoint_offset struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param leaf_setpoint_offset C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_setpoint_offset_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_leaf_setpoint_offset_t* leaf_setpoint_offset)
{
    return mavlink_msg_leaf_setpoint_offset_pack(system_id, component_id, msg, leaf_setpoint_offset->x, leaf_setpoint_offset->y, leaf_setpoint_offset->z, leaf_setpoint_offset->yaw);
}

/**
 * @brief Encode a leaf_setpoint_offset struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param leaf_setpoint_offset C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_setpoint_offset_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_leaf_setpoint_offset_t* leaf_setpoint_offset)
{
    return mavlink_msg_leaf_setpoint_offset_pack_chan(system_id, component_id, chan, msg, leaf_setpoint_offset->x, leaf_setpoint_offset->y, leaf_setpoint_offset->z, leaf_setpoint_offset->yaw);
}

/**
 * @brief Encode a leaf_setpoint_offset struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param leaf_setpoint_offset C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_setpoint_offset_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_leaf_setpoint_offset_t* leaf_setpoint_offset)
{
    return mavlink_msg_leaf_setpoint_offset_pack_status(system_id, component_id, _status, msg,  leaf_setpoint_offset->x, leaf_setpoint_offset->y, leaf_setpoint_offset->z, leaf_setpoint_offset->yaw);
}

/**
 * @brief Send a leaf_setpoint_offset message
 * @param chan MAVLink channel to send the message
 *
 * @param x [m] X position
 * @param y [m] Y position
 * @param z [m] Z position
 * @param yaw [rad] Yaw angle
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_leaf_setpoint_offset_send(mavlink_channel_t chan, float x, float y, float z, float yaw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_SETPOINT_OFFSET_LEN];
    _mav_put_float(buf, 0, x);
    _mav_put_float(buf, 4, y);
    _mav_put_float(buf, 8, z);
    _mav_put_float(buf, 12, yaw);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_SETPOINT_OFFSET, buf, MAVLINK_MSG_ID_LEAF_SETPOINT_OFFSET_MIN_LEN, MAVLINK_MSG_ID_LEAF_SETPOINT_OFFSET_LEN, MAVLINK_MSG_ID_LEAF_SETPOINT_OFFSET_CRC);
#else
    mavlink_leaf_setpoint_offset_t packet;
    packet.x = x;
    packet.y = y;
    packet.z = z;
    packet.yaw = yaw;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_SETPOINT_OFFSET, (const char *)&packet, MAVLINK_MSG_ID_LEAF_SETPOINT_OFFSET_MIN_LEN, MAVLINK_MSG_ID_LEAF_SETPOINT_OFFSET_LEN, MAVLINK_MSG_ID_LEAF_SETPOINT_OFFSET_CRC);
#endif
}

/**
 * @brief Send a leaf_setpoint_offset message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_leaf_setpoint_offset_send_struct(mavlink_channel_t chan, const mavlink_leaf_setpoint_offset_t* leaf_setpoint_offset)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_leaf_setpoint_offset_send(chan, leaf_setpoint_offset->x, leaf_setpoint_offset->y, leaf_setpoint_offset->z, leaf_setpoint_offset->yaw);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_SETPOINT_OFFSET, (const char *)leaf_setpoint_offset, MAVLINK_MSG_ID_LEAF_SETPOINT_OFFSET_MIN_LEN, MAVLINK_MSG_ID_LEAF_SETPOINT_OFFSET_LEN, MAVLINK_MSG_ID_LEAF_SETPOINT_OFFSET_CRC);
#endif
}

#if MAVLINK_MSG_ID_LEAF_SETPOINT_OFFSET_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_leaf_setpoint_offset_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  float x, float y, float z, float yaw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, x);
    _mav_put_float(buf, 4, y);
    _mav_put_float(buf, 8, z);
    _mav_put_float(buf, 12, yaw);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_SETPOINT_OFFSET, buf, MAVLINK_MSG_ID_LEAF_SETPOINT_OFFSET_MIN_LEN, MAVLINK_MSG_ID_LEAF_SETPOINT_OFFSET_LEN, MAVLINK_MSG_ID_LEAF_SETPOINT_OFFSET_CRC);
#else
    mavlink_leaf_setpoint_offset_t *packet = (mavlink_leaf_setpoint_offset_t *)msgbuf;
    packet->x = x;
    packet->y = y;
    packet->z = z;
    packet->yaw = yaw;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_SETPOINT_OFFSET, (const char *)packet, MAVLINK_MSG_ID_LEAF_SETPOINT_OFFSET_MIN_LEN, MAVLINK_MSG_ID_LEAF_SETPOINT_OFFSET_LEN, MAVLINK_MSG_ID_LEAF_SETPOINT_OFFSET_CRC);
#endif
}
#endif

#endif

// MESSAGE LEAF_SETPOINT_OFFSET UNPACKING


/**
 * @brief Get field x from leaf_setpoint_offset message
 *
 * @return [m] X position
 */
static inline float mavlink_msg_leaf_setpoint_offset_get_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field y from leaf_setpoint_offset message
 *
 * @return [m] Y position
 */
static inline float mavlink_msg_leaf_setpoint_offset_get_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field z from leaf_setpoint_offset message
 *
 * @return [m] Z position
 */
static inline float mavlink_msg_leaf_setpoint_offset_get_z(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field yaw from leaf_setpoint_offset message
 *
 * @return [rad] Yaw angle
 */
static inline float mavlink_msg_leaf_setpoint_offset_get_yaw(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Decode a leaf_setpoint_offset message into a struct
 *
 * @param msg The message to decode
 * @param leaf_setpoint_offset C-struct to decode the message contents into
 */
static inline void mavlink_msg_leaf_setpoint_offset_decode(const mavlink_message_t* msg, mavlink_leaf_setpoint_offset_t* leaf_setpoint_offset)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    leaf_setpoint_offset->x = mavlink_msg_leaf_setpoint_offset_get_x(msg);
    leaf_setpoint_offset->y = mavlink_msg_leaf_setpoint_offset_get_y(msg);
    leaf_setpoint_offset->z = mavlink_msg_leaf_setpoint_offset_get_z(msg);
    leaf_setpoint_offset->yaw = mavlink_msg_leaf_setpoint_offset_get_yaw(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_LEAF_SETPOINT_OFFSET_LEN? msg->len : MAVLINK_MSG_ID_LEAF_SETPOINT_OFFSET_LEN;
        memset(leaf_setpoint_offset, 0, MAVLINK_MSG_ID_LEAF_SETPOINT_OFFSET_LEN);
    memcpy(leaf_setpoint_offset, _MAV_PAYLOAD(msg), len);
#endif
}
