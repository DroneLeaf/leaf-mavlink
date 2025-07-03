#pragma once
// MESSAGE LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_POS PACKING

#define MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_POS 77030


typedef struct __mavlink_leaf_external_trajectory_offset_enu_pos_t {
 float x; /*< [m] X Position in ENU frame*/
 float y; /*< [m] Y Position in ENU frame*/
 float z; /*< [m] Z Position in ENU frame*/
} mavlink_leaf_external_trajectory_offset_enu_pos_t;

#define MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_POS_LEN 12
#define MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_POS_MIN_LEN 12
#define MAVLINK_MSG_ID_77030_LEN 12
#define MAVLINK_MSG_ID_77030_MIN_LEN 12

#define MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_POS_CRC 90
#define MAVLINK_MSG_ID_77030_CRC 90



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_POS { \
    77030, \
    "LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_POS", \
    3, \
    {  { "x", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_leaf_external_trajectory_offset_enu_pos_t, x) }, \
         { "y", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_leaf_external_trajectory_offset_enu_pos_t, y) }, \
         { "z", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_leaf_external_trajectory_offset_enu_pos_t, z) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_POS { \
    "LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_POS", \
    3, \
    {  { "x", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_leaf_external_trajectory_offset_enu_pos_t, x) }, \
         { "y", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_leaf_external_trajectory_offset_enu_pos_t, y) }, \
         { "z", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_leaf_external_trajectory_offset_enu_pos_t, z) }, \
         } \
}
#endif

/**
 * @brief Pack a leaf_external_trajectory_offset_enu_pos message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param x [m] X Position in ENU frame
 * @param y [m] Y Position in ENU frame
 * @param z [m] Z Position in ENU frame
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_external_trajectory_offset_enu_pos_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               float x, float y, float z)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_POS_LEN];
    _mav_put_float(buf, 0, x);
    _mav_put_float(buf, 4, y);
    _mav_put_float(buf, 8, z);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_POS_LEN);
#else
    mavlink_leaf_external_trajectory_offset_enu_pos_t packet;
    packet.x = x;
    packet.y = y;
    packet.z = z;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_POS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_POS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_POS_MIN_LEN, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_POS_LEN, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_POS_CRC);
}

/**
 * @brief Pack a leaf_external_trajectory_offset_enu_pos message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param x [m] X Position in ENU frame
 * @param y [m] Y Position in ENU frame
 * @param z [m] Z Position in ENU frame
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_external_trajectory_offset_enu_pos_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               float x, float y, float z)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_POS_LEN];
    _mav_put_float(buf, 0, x);
    _mav_put_float(buf, 4, y);
    _mav_put_float(buf, 8, z);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_POS_LEN);
#else
    mavlink_leaf_external_trajectory_offset_enu_pos_t packet;
    packet.x = x;
    packet.y = y;
    packet.z = z;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_POS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_POS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_POS_MIN_LEN, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_POS_LEN, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_POS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_POS_MIN_LEN, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_POS_LEN);
#endif
}

/**
 * @brief Pack a leaf_external_trajectory_offset_enu_pos message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param x [m] X Position in ENU frame
 * @param y [m] Y Position in ENU frame
 * @param z [m] Z Position in ENU frame
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_external_trajectory_offset_enu_pos_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   float x,float y,float z)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_POS_LEN];
    _mav_put_float(buf, 0, x);
    _mav_put_float(buf, 4, y);
    _mav_put_float(buf, 8, z);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_POS_LEN);
#else
    mavlink_leaf_external_trajectory_offset_enu_pos_t packet;
    packet.x = x;
    packet.y = y;
    packet.z = z;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_POS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_POS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_POS_MIN_LEN, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_POS_LEN, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_POS_CRC);
}

/**
 * @brief Encode a leaf_external_trajectory_offset_enu_pos struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param leaf_external_trajectory_offset_enu_pos C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_external_trajectory_offset_enu_pos_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_leaf_external_trajectory_offset_enu_pos_t* leaf_external_trajectory_offset_enu_pos)
{
    return mavlink_msg_leaf_external_trajectory_offset_enu_pos_pack(system_id, component_id, msg, leaf_external_trajectory_offset_enu_pos->x, leaf_external_trajectory_offset_enu_pos->y, leaf_external_trajectory_offset_enu_pos->z);
}

/**
 * @brief Encode a leaf_external_trajectory_offset_enu_pos struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param leaf_external_trajectory_offset_enu_pos C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_external_trajectory_offset_enu_pos_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_leaf_external_trajectory_offset_enu_pos_t* leaf_external_trajectory_offset_enu_pos)
{
    return mavlink_msg_leaf_external_trajectory_offset_enu_pos_pack_chan(system_id, component_id, chan, msg, leaf_external_trajectory_offset_enu_pos->x, leaf_external_trajectory_offset_enu_pos->y, leaf_external_trajectory_offset_enu_pos->z);
}

/**
 * @brief Encode a leaf_external_trajectory_offset_enu_pos struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param leaf_external_trajectory_offset_enu_pos C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_external_trajectory_offset_enu_pos_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_leaf_external_trajectory_offset_enu_pos_t* leaf_external_trajectory_offset_enu_pos)
{
    return mavlink_msg_leaf_external_trajectory_offset_enu_pos_pack_status(system_id, component_id, _status, msg,  leaf_external_trajectory_offset_enu_pos->x, leaf_external_trajectory_offset_enu_pos->y, leaf_external_trajectory_offset_enu_pos->z);
}

/**
 * @brief Send a leaf_external_trajectory_offset_enu_pos message
 * @param chan MAVLink channel to send the message
 *
 * @param x [m] X Position in ENU frame
 * @param y [m] Y Position in ENU frame
 * @param z [m] Z Position in ENU frame
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_leaf_external_trajectory_offset_enu_pos_send(mavlink_channel_t chan, float x, float y, float z)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_POS_LEN];
    _mav_put_float(buf, 0, x);
    _mav_put_float(buf, 4, y);
    _mav_put_float(buf, 8, z);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_POS, buf, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_POS_MIN_LEN, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_POS_LEN, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_POS_CRC);
#else
    mavlink_leaf_external_trajectory_offset_enu_pos_t packet;
    packet.x = x;
    packet.y = y;
    packet.z = z;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_POS, (const char *)&packet, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_POS_MIN_LEN, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_POS_LEN, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_POS_CRC);
#endif
}

/**
 * @brief Send a leaf_external_trajectory_offset_enu_pos message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_leaf_external_trajectory_offset_enu_pos_send_struct(mavlink_channel_t chan, const mavlink_leaf_external_trajectory_offset_enu_pos_t* leaf_external_trajectory_offset_enu_pos)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_leaf_external_trajectory_offset_enu_pos_send(chan, leaf_external_trajectory_offset_enu_pos->x, leaf_external_trajectory_offset_enu_pos->y, leaf_external_trajectory_offset_enu_pos->z);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_POS, (const char *)leaf_external_trajectory_offset_enu_pos, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_POS_MIN_LEN, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_POS_LEN, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_POS_CRC);
#endif
}

#if MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_POS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_leaf_external_trajectory_offset_enu_pos_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  float x, float y, float z)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, x);
    _mav_put_float(buf, 4, y);
    _mav_put_float(buf, 8, z);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_POS, buf, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_POS_MIN_LEN, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_POS_LEN, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_POS_CRC);
#else
    mavlink_leaf_external_trajectory_offset_enu_pos_t *packet = (mavlink_leaf_external_trajectory_offset_enu_pos_t *)msgbuf;
    packet->x = x;
    packet->y = y;
    packet->z = z;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_POS, (const char *)packet, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_POS_MIN_LEN, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_POS_LEN, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_POS_CRC);
#endif
}
#endif

#endif

// MESSAGE LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_POS UNPACKING


/**
 * @brief Get field x from leaf_external_trajectory_offset_enu_pos message
 *
 * @return [m] X Position in ENU frame
 */
static inline float mavlink_msg_leaf_external_trajectory_offset_enu_pos_get_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field y from leaf_external_trajectory_offset_enu_pos message
 *
 * @return [m] Y Position in ENU frame
 */
static inline float mavlink_msg_leaf_external_trajectory_offset_enu_pos_get_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field z from leaf_external_trajectory_offset_enu_pos message
 *
 * @return [m] Z Position in ENU frame
 */
static inline float mavlink_msg_leaf_external_trajectory_offset_enu_pos_get_z(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Decode a leaf_external_trajectory_offset_enu_pos message into a struct
 *
 * @param msg The message to decode
 * @param leaf_external_trajectory_offset_enu_pos C-struct to decode the message contents into
 */
static inline void mavlink_msg_leaf_external_trajectory_offset_enu_pos_decode(const mavlink_message_t* msg, mavlink_leaf_external_trajectory_offset_enu_pos_t* leaf_external_trajectory_offset_enu_pos)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    leaf_external_trajectory_offset_enu_pos->x = mavlink_msg_leaf_external_trajectory_offset_enu_pos_get_x(msg);
    leaf_external_trajectory_offset_enu_pos->y = mavlink_msg_leaf_external_trajectory_offset_enu_pos_get_y(msg);
    leaf_external_trajectory_offset_enu_pos->z = mavlink_msg_leaf_external_trajectory_offset_enu_pos_get_z(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_POS_LEN? msg->len : MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_POS_LEN;
        memset(leaf_external_trajectory_offset_enu_pos, 0, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_POS_LEN);
    memcpy(leaf_external_trajectory_offset_enu_pos, _MAV_PAYLOAD(msg), len);
#endif
}
