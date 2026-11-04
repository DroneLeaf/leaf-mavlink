#pragma once
// MESSAGE LEAF_GIMBAL_MATCHED_ATTITUDE PACKING

#define MAVLINK_MSG_ID_LEAF_GIMBAL_MATCHED_ATTITUDE 77074


typedef struct __mavlink_leaf_gimbal_matched_attitude_t {
 double pan_rad; /*< [rad] LOS-matched inner pan (C40D pitch).*/
 double tilt_rad; /*< [rad] LOS-matched outer tilt (C40D roll).*/
 uint8_t valid; /*<  Current observation matched_attitude.valid: 1 valid, 0 invalid. Ignore angles when 0.*/
} mavlink_leaf_gimbal_matched_attitude_t;

#define MAVLINK_MSG_ID_LEAF_GIMBAL_MATCHED_ATTITUDE_LEN 17
#define MAVLINK_MSG_ID_LEAF_GIMBAL_MATCHED_ATTITUDE_MIN_LEN 17
#define MAVLINK_MSG_ID_77074_LEN 17
#define MAVLINK_MSG_ID_77074_MIN_LEN 17

#define MAVLINK_MSG_ID_LEAF_GIMBAL_MATCHED_ATTITUDE_CRC 200
#define MAVLINK_MSG_ID_77074_CRC 200



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_LEAF_GIMBAL_MATCHED_ATTITUDE { \
    77074, \
    "LEAF_GIMBAL_MATCHED_ATTITUDE", \
    3, \
    {  { "pan_rad", NULL, MAVLINK_TYPE_DOUBLE, 0, 0, offsetof(mavlink_leaf_gimbal_matched_attitude_t, pan_rad) }, \
         { "tilt_rad", NULL, MAVLINK_TYPE_DOUBLE, 0, 8, offsetof(mavlink_leaf_gimbal_matched_attitude_t, tilt_rad) }, \
         { "valid", NULL, MAVLINK_TYPE_UINT8_T, 0, 16, offsetof(mavlink_leaf_gimbal_matched_attitude_t, valid) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_LEAF_GIMBAL_MATCHED_ATTITUDE { \
    "LEAF_GIMBAL_MATCHED_ATTITUDE", \
    3, \
    {  { "pan_rad", NULL, MAVLINK_TYPE_DOUBLE, 0, 0, offsetof(mavlink_leaf_gimbal_matched_attitude_t, pan_rad) }, \
         { "tilt_rad", NULL, MAVLINK_TYPE_DOUBLE, 0, 8, offsetof(mavlink_leaf_gimbal_matched_attitude_t, tilt_rad) }, \
         { "valid", NULL, MAVLINK_TYPE_UINT8_T, 0, 16, offsetof(mavlink_leaf_gimbal_matched_attitude_t, valid) }, \
         } \
}
#endif

/**
 * @brief Pack a leaf_gimbal_matched_attitude message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param pan_rad [rad] LOS-matched inner pan (C40D pitch).
 * @param tilt_rad [rad] LOS-matched outer tilt (C40D roll).
 * @param valid  Current observation matched_attitude.valid: 1 valid, 0 invalid. Ignore angles when 0.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_gimbal_matched_attitude_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               double pan_rad, double tilt_rad, uint8_t valid)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_GIMBAL_MATCHED_ATTITUDE_LEN];
    _mav_put_double(buf, 0, pan_rad);
    _mav_put_double(buf, 8, tilt_rad);
    _mav_put_uint8_t(buf, 16, valid);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_GIMBAL_MATCHED_ATTITUDE_LEN);
#else
    mavlink_leaf_gimbal_matched_attitude_t packet;
    packet.pan_rad = pan_rad;
    packet.tilt_rad = tilt_rad;
    packet.valid = valid;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_GIMBAL_MATCHED_ATTITUDE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_GIMBAL_MATCHED_ATTITUDE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_LEAF_GIMBAL_MATCHED_ATTITUDE_MIN_LEN, MAVLINK_MSG_ID_LEAF_GIMBAL_MATCHED_ATTITUDE_LEN, MAVLINK_MSG_ID_LEAF_GIMBAL_MATCHED_ATTITUDE_CRC);
}

/**
 * @brief Pack a leaf_gimbal_matched_attitude message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param pan_rad [rad] LOS-matched inner pan (C40D pitch).
 * @param tilt_rad [rad] LOS-matched outer tilt (C40D roll).
 * @param valid  Current observation matched_attitude.valid: 1 valid, 0 invalid. Ignore angles when 0.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_gimbal_matched_attitude_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               double pan_rad, double tilt_rad, uint8_t valid)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_GIMBAL_MATCHED_ATTITUDE_LEN];
    _mav_put_double(buf, 0, pan_rad);
    _mav_put_double(buf, 8, tilt_rad);
    _mav_put_uint8_t(buf, 16, valid);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_GIMBAL_MATCHED_ATTITUDE_LEN);
#else
    mavlink_leaf_gimbal_matched_attitude_t packet;
    packet.pan_rad = pan_rad;
    packet.tilt_rad = tilt_rad;
    packet.valid = valid;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_GIMBAL_MATCHED_ATTITUDE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_GIMBAL_MATCHED_ATTITUDE;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_GIMBAL_MATCHED_ATTITUDE_MIN_LEN, MAVLINK_MSG_ID_LEAF_GIMBAL_MATCHED_ATTITUDE_LEN, MAVLINK_MSG_ID_LEAF_GIMBAL_MATCHED_ATTITUDE_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_GIMBAL_MATCHED_ATTITUDE_MIN_LEN, MAVLINK_MSG_ID_LEAF_GIMBAL_MATCHED_ATTITUDE_LEN);
#endif
}

/**
 * @brief Pack a leaf_gimbal_matched_attitude message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param pan_rad [rad] LOS-matched inner pan (C40D pitch).
 * @param tilt_rad [rad] LOS-matched outer tilt (C40D roll).
 * @param valid  Current observation matched_attitude.valid: 1 valid, 0 invalid. Ignore angles when 0.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_gimbal_matched_attitude_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   double pan_rad,double tilt_rad,uint8_t valid)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_GIMBAL_MATCHED_ATTITUDE_LEN];
    _mav_put_double(buf, 0, pan_rad);
    _mav_put_double(buf, 8, tilt_rad);
    _mav_put_uint8_t(buf, 16, valid);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_GIMBAL_MATCHED_ATTITUDE_LEN);
#else
    mavlink_leaf_gimbal_matched_attitude_t packet;
    packet.pan_rad = pan_rad;
    packet.tilt_rad = tilt_rad;
    packet.valid = valid;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_GIMBAL_MATCHED_ATTITUDE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_GIMBAL_MATCHED_ATTITUDE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_LEAF_GIMBAL_MATCHED_ATTITUDE_MIN_LEN, MAVLINK_MSG_ID_LEAF_GIMBAL_MATCHED_ATTITUDE_LEN, MAVLINK_MSG_ID_LEAF_GIMBAL_MATCHED_ATTITUDE_CRC);
}

/**
 * @brief Encode a leaf_gimbal_matched_attitude struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param leaf_gimbal_matched_attitude C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_gimbal_matched_attitude_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_leaf_gimbal_matched_attitude_t* leaf_gimbal_matched_attitude)
{
    return mavlink_msg_leaf_gimbal_matched_attitude_pack(system_id, component_id, msg, leaf_gimbal_matched_attitude->pan_rad, leaf_gimbal_matched_attitude->tilt_rad, leaf_gimbal_matched_attitude->valid);
}

/**
 * @brief Encode a leaf_gimbal_matched_attitude struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param leaf_gimbal_matched_attitude C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_gimbal_matched_attitude_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_leaf_gimbal_matched_attitude_t* leaf_gimbal_matched_attitude)
{
    return mavlink_msg_leaf_gimbal_matched_attitude_pack_chan(system_id, component_id, chan, msg, leaf_gimbal_matched_attitude->pan_rad, leaf_gimbal_matched_attitude->tilt_rad, leaf_gimbal_matched_attitude->valid);
}

/**
 * @brief Encode a leaf_gimbal_matched_attitude struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param leaf_gimbal_matched_attitude C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_gimbal_matched_attitude_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_leaf_gimbal_matched_attitude_t* leaf_gimbal_matched_attitude)
{
    return mavlink_msg_leaf_gimbal_matched_attitude_pack_status(system_id, component_id, _status, msg,  leaf_gimbal_matched_attitude->pan_rad, leaf_gimbal_matched_attitude->tilt_rad, leaf_gimbal_matched_attitude->valid);
}

/**
 * @brief Send a leaf_gimbal_matched_attitude message
 * @param chan MAVLink channel to send the message
 *
 * @param pan_rad [rad] LOS-matched inner pan (C40D pitch).
 * @param tilt_rad [rad] LOS-matched outer tilt (C40D roll).
 * @param valid  Current observation matched_attitude.valid: 1 valid, 0 invalid. Ignore angles when 0.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_leaf_gimbal_matched_attitude_send(mavlink_channel_t chan, double pan_rad, double tilt_rad, uint8_t valid)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_GIMBAL_MATCHED_ATTITUDE_LEN];
    _mav_put_double(buf, 0, pan_rad);
    _mav_put_double(buf, 8, tilt_rad);
    _mav_put_uint8_t(buf, 16, valid);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_GIMBAL_MATCHED_ATTITUDE, buf, MAVLINK_MSG_ID_LEAF_GIMBAL_MATCHED_ATTITUDE_MIN_LEN, MAVLINK_MSG_ID_LEAF_GIMBAL_MATCHED_ATTITUDE_LEN, MAVLINK_MSG_ID_LEAF_GIMBAL_MATCHED_ATTITUDE_CRC);
#else
    mavlink_leaf_gimbal_matched_attitude_t packet;
    packet.pan_rad = pan_rad;
    packet.tilt_rad = tilt_rad;
    packet.valid = valid;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_GIMBAL_MATCHED_ATTITUDE, (const char *)&packet, MAVLINK_MSG_ID_LEAF_GIMBAL_MATCHED_ATTITUDE_MIN_LEN, MAVLINK_MSG_ID_LEAF_GIMBAL_MATCHED_ATTITUDE_LEN, MAVLINK_MSG_ID_LEAF_GIMBAL_MATCHED_ATTITUDE_CRC);
#endif
}

/**
 * @brief Send a leaf_gimbal_matched_attitude message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_leaf_gimbal_matched_attitude_send_struct(mavlink_channel_t chan, const mavlink_leaf_gimbal_matched_attitude_t* leaf_gimbal_matched_attitude)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_leaf_gimbal_matched_attitude_send(chan, leaf_gimbal_matched_attitude->pan_rad, leaf_gimbal_matched_attitude->tilt_rad, leaf_gimbal_matched_attitude->valid);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_GIMBAL_MATCHED_ATTITUDE, (const char *)leaf_gimbal_matched_attitude, MAVLINK_MSG_ID_LEAF_GIMBAL_MATCHED_ATTITUDE_MIN_LEN, MAVLINK_MSG_ID_LEAF_GIMBAL_MATCHED_ATTITUDE_LEN, MAVLINK_MSG_ID_LEAF_GIMBAL_MATCHED_ATTITUDE_CRC);
#endif
}

#if MAVLINK_MSG_ID_LEAF_GIMBAL_MATCHED_ATTITUDE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_leaf_gimbal_matched_attitude_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  double pan_rad, double tilt_rad, uint8_t valid)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_double(buf, 0, pan_rad);
    _mav_put_double(buf, 8, tilt_rad);
    _mav_put_uint8_t(buf, 16, valid);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_GIMBAL_MATCHED_ATTITUDE, buf, MAVLINK_MSG_ID_LEAF_GIMBAL_MATCHED_ATTITUDE_MIN_LEN, MAVLINK_MSG_ID_LEAF_GIMBAL_MATCHED_ATTITUDE_LEN, MAVLINK_MSG_ID_LEAF_GIMBAL_MATCHED_ATTITUDE_CRC);
#else
    mavlink_leaf_gimbal_matched_attitude_t *packet = (mavlink_leaf_gimbal_matched_attitude_t *)msgbuf;
    packet->pan_rad = pan_rad;
    packet->tilt_rad = tilt_rad;
    packet->valid = valid;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_GIMBAL_MATCHED_ATTITUDE, (const char *)packet, MAVLINK_MSG_ID_LEAF_GIMBAL_MATCHED_ATTITUDE_MIN_LEN, MAVLINK_MSG_ID_LEAF_GIMBAL_MATCHED_ATTITUDE_LEN, MAVLINK_MSG_ID_LEAF_GIMBAL_MATCHED_ATTITUDE_CRC);
#endif
}
#endif

#endif

// MESSAGE LEAF_GIMBAL_MATCHED_ATTITUDE UNPACKING


/**
 * @brief Get field pan_rad from leaf_gimbal_matched_attitude message
 *
 * @return [rad] LOS-matched inner pan (C40D pitch).
 */
static inline double mavlink_msg_leaf_gimbal_matched_attitude_get_pan_rad(const mavlink_message_t* msg)
{
    return _MAV_RETURN_double(msg,  0);
}

/**
 * @brief Get field tilt_rad from leaf_gimbal_matched_attitude message
 *
 * @return [rad] LOS-matched outer tilt (C40D roll).
 */
static inline double mavlink_msg_leaf_gimbal_matched_attitude_get_tilt_rad(const mavlink_message_t* msg)
{
    return _MAV_RETURN_double(msg,  8);
}

/**
 * @brief Get field valid from leaf_gimbal_matched_attitude message
 *
 * @return  Current observation matched_attitude.valid: 1 valid, 0 invalid. Ignore angles when 0.
 */
static inline uint8_t mavlink_msg_leaf_gimbal_matched_attitude_get_valid(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  16);
}

/**
 * @brief Decode a leaf_gimbal_matched_attitude message into a struct
 *
 * @param msg The message to decode
 * @param leaf_gimbal_matched_attitude C-struct to decode the message contents into
 */
static inline void mavlink_msg_leaf_gimbal_matched_attitude_decode(const mavlink_message_t* msg, mavlink_leaf_gimbal_matched_attitude_t* leaf_gimbal_matched_attitude)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    leaf_gimbal_matched_attitude->pan_rad = mavlink_msg_leaf_gimbal_matched_attitude_get_pan_rad(msg);
    leaf_gimbal_matched_attitude->tilt_rad = mavlink_msg_leaf_gimbal_matched_attitude_get_tilt_rad(msg);
    leaf_gimbal_matched_attitude->valid = mavlink_msg_leaf_gimbal_matched_attitude_get_valid(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_LEAF_GIMBAL_MATCHED_ATTITUDE_LEN? msg->len : MAVLINK_MSG_ID_LEAF_GIMBAL_MATCHED_ATTITUDE_LEN;
        memset(leaf_gimbal_matched_attitude, 0, MAVLINK_MSG_ID_LEAF_GIMBAL_MATCHED_ATTITUDE_LEN);
    memcpy(leaf_gimbal_matched_attitude, _MAV_PAYLOAD(msg), len);
#endif
}
