#pragma once
// MESSAGE LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_ORI PACKING

#define MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_ORI 77031


typedef struct __mavlink_leaf_external_trajectory_offset_enu_ori_t {
 float x; /*< [rad] X orientation in rad*/
 float y; /*< [rad] Y orientation in rad*/
 float z; /*< [rad] Z orientation in rad*/
} mavlink_leaf_external_trajectory_offset_enu_ori_t;

#define MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_ORI_LEN 12
#define MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_ORI_MIN_LEN 12
#define MAVLINK_MSG_ID_77031_LEN 12
#define MAVLINK_MSG_ID_77031_MIN_LEN 12

#define MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_ORI_CRC 150
#define MAVLINK_MSG_ID_77031_CRC 150



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_ORI { \
    77031, \
    "LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_ORI", \
    3, \
    {  { "x", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_leaf_external_trajectory_offset_enu_ori_t, x) }, \
         { "y", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_leaf_external_trajectory_offset_enu_ori_t, y) }, \
         { "z", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_leaf_external_trajectory_offset_enu_ori_t, z) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_ORI { \
    "LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_ORI", \
    3, \
    {  { "x", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_leaf_external_trajectory_offset_enu_ori_t, x) }, \
         { "y", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_leaf_external_trajectory_offset_enu_ori_t, y) }, \
         { "z", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_leaf_external_trajectory_offset_enu_ori_t, z) }, \
         } \
}
#endif

/**
 * @brief Pack a leaf_external_trajectory_offset_enu_ori message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param x [rad] X orientation in rad
 * @param y [rad] Y orientation in rad
 * @param z [rad] Z orientation in rad
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_external_trajectory_offset_enu_ori_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               float x, float y, float z)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_ORI_LEN];
    _mav_put_float(buf, 0, x);
    _mav_put_float(buf, 4, y);
    _mav_put_float(buf, 8, z);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_ORI_LEN);
#else
    mavlink_leaf_external_trajectory_offset_enu_ori_t packet;
    packet.x = x;
    packet.y = y;
    packet.z = z;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_ORI_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_ORI;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_ORI_MIN_LEN, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_ORI_LEN, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_ORI_CRC);
}

/**
 * @brief Pack a leaf_external_trajectory_offset_enu_ori message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param x [rad] X orientation in rad
 * @param y [rad] Y orientation in rad
 * @param z [rad] Z orientation in rad
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_external_trajectory_offset_enu_ori_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               float x, float y, float z)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_ORI_LEN];
    _mav_put_float(buf, 0, x);
    _mav_put_float(buf, 4, y);
    _mav_put_float(buf, 8, z);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_ORI_LEN);
#else
    mavlink_leaf_external_trajectory_offset_enu_ori_t packet;
    packet.x = x;
    packet.y = y;
    packet.z = z;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_ORI_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_ORI;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_ORI_MIN_LEN, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_ORI_LEN, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_ORI_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_ORI_MIN_LEN, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_ORI_LEN);
#endif
}

/**
 * @brief Pack a leaf_external_trajectory_offset_enu_ori message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param x [rad] X orientation in rad
 * @param y [rad] Y orientation in rad
 * @param z [rad] Z orientation in rad
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_external_trajectory_offset_enu_ori_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   float x,float y,float z)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_ORI_LEN];
    _mav_put_float(buf, 0, x);
    _mav_put_float(buf, 4, y);
    _mav_put_float(buf, 8, z);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_ORI_LEN);
#else
    mavlink_leaf_external_trajectory_offset_enu_ori_t packet;
    packet.x = x;
    packet.y = y;
    packet.z = z;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_ORI_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_ORI;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_ORI_MIN_LEN, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_ORI_LEN, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_ORI_CRC);
}

/**
 * @brief Encode a leaf_external_trajectory_offset_enu_ori struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param leaf_external_trajectory_offset_enu_ori C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_external_trajectory_offset_enu_ori_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_leaf_external_trajectory_offset_enu_ori_t* leaf_external_trajectory_offset_enu_ori)
{
    return mavlink_msg_leaf_external_trajectory_offset_enu_ori_pack(system_id, component_id, msg, leaf_external_trajectory_offset_enu_ori->x, leaf_external_trajectory_offset_enu_ori->y, leaf_external_trajectory_offset_enu_ori->z);
}

/**
 * @brief Encode a leaf_external_trajectory_offset_enu_ori struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param leaf_external_trajectory_offset_enu_ori C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_external_trajectory_offset_enu_ori_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_leaf_external_trajectory_offset_enu_ori_t* leaf_external_trajectory_offset_enu_ori)
{
    return mavlink_msg_leaf_external_trajectory_offset_enu_ori_pack_chan(system_id, component_id, chan, msg, leaf_external_trajectory_offset_enu_ori->x, leaf_external_trajectory_offset_enu_ori->y, leaf_external_trajectory_offset_enu_ori->z);
}

/**
 * @brief Encode a leaf_external_trajectory_offset_enu_ori struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param leaf_external_trajectory_offset_enu_ori C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_external_trajectory_offset_enu_ori_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_leaf_external_trajectory_offset_enu_ori_t* leaf_external_trajectory_offset_enu_ori)
{
    return mavlink_msg_leaf_external_trajectory_offset_enu_ori_pack_status(system_id, component_id, _status, msg,  leaf_external_trajectory_offset_enu_ori->x, leaf_external_trajectory_offset_enu_ori->y, leaf_external_trajectory_offset_enu_ori->z);
}

/**
 * @brief Send a leaf_external_trajectory_offset_enu_ori message
 * @param chan MAVLink channel to send the message
 *
 * @param x [rad] X orientation in rad
 * @param y [rad] Y orientation in rad
 * @param z [rad] Z orientation in rad
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_leaf_external_trajectory_offset_enu_ori_send(mavlink_channel_t chan, float x, float y, float z)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_ORI_LEN];
    _mav_put_float(buf, 0, x);
    _mav_put_float(buf, 4, y);
    _mav_put_float(buf, 8, z);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_ORI, buf, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_ORI_MIN_LEN, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_ORI_LEN, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_ORI_CRC);
#else
    mavlink_leaf_external_trajectory_offset_enu_ori_t packet;
    packet.x = x;
    packet.y = y;
    packet.z = z;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_ORI, (const char *)&packet, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_ORI_MIN_LEN, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_ORI_LEN, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_ORI_CRC);
#endif
}

/**
 * @brief Send a leaf_external_trajectory_offset_enu_ori message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_leaf_external_trajectory_offset_enu_ori_send_struct(mavlink_channel_t chan, const mavlink_leaf_external_trajectory_offset_enu_ori_t* leaf_external_trajectory_offset_enu_ori)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_leaf_external_trajectory_offset_enu_ori_send(chan, leaf_external_trajectory_offset_enu_ori->x, leaf_external_trajectory_offset_enu_ori->y, leaf_external_trajectory_offset_enu_ori->z);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_ORI, (const char *)leaf_external_trajectory_offset_enu_ori, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_ORI_MIN_LEN, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_ORI_LEN, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_ORI_CRC);
#endif
}

#if MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_ORI_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_leaf_external_trajectory_offset_enu_ori_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  float x, float y, float z)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, x);
    _mav_put_float(buf, 4, y);
    _mav_put_float(buf, 8, z);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_ORI, buf, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_ORI_MIN_LEN, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_ORI_LEN, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_ORI_CRC);
#else
    mavlink_leaf_external_trajectory_offset_enu_ori_t *packet = (mavlink_leaf_external_trajectory_offset_enu_ori_t *)msgbuf;
    packet->x = x;
    packet->y = y;
    packet->z = z;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_ORI, (const char *)packet, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_ORI_MIN_LEN, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_ORI_LEN, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_ORI_CRC);
#endif
}
#endif

#endif

// MESSAGE LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_ORI UNPACKING


/**
 * @brief Get field x from leaf_external_trajectory_offset_enu_ori message
 *
 * @return [rad] X orientation in rad
 */
static inline float mavlink_msg_leaf_external_trajectory_offset_enu_ori_get_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field y from leaf_external_trajectory_offset_enu_ori message
 *
 * @return [rad] Y orientation in rad
 */
static inline float mavlink_msg_leaf_external_trajectory_offset_enu_ori_get_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field z from leaf_external_trajectory_offset_enu_ori message
 *
 * @return [rad] Z orientation in rad
 */
static inline float mavlink_msg_leaf_external_trajectory_offset_enu_ori_get_z(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Decode a leaf_external_trajectory_offset_enu_ori message into a struct
 *
 * @param msg The message to decode
 * @param leaf_external_trajectory_offset_enu_ori C-struct to decode the message contents into
 */
static inline void mavlink_msg_leaf_external_trajectory_offset_enu_ori_decode(const mavlink_message_t* msg, mavlink_leaf_external_trajectory_offset_enu_ori_t* leaf_external_trajectory_offset_enu_ori)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    leaf_external_trajectory_offset_enu_ori->x = mavlink_msg_leaf_external_trajectory_offset_enu_ori_get_x(msg);
    leaf_external_trajectory_offset_enu_ori->y = mavlink_msg_leaf_external_trajectory_offset_enu_ori_get_y(msg);
    leaf_external_trajectory_offset_enu_ori->z = mavlink_msg_leaf_external_trajectory_offset_enu_ori_get_z(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_ORI_LEN? msg->len : MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_ORI_LEN;
        memset(leaf_external_trajectory_offset_enu_ori, 0, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_ORI_LEN);
    memcpy(leaf_external_trajectory_offset_enu_ori, _MAV_PAYLOAD(msg), len);
#endif
}
