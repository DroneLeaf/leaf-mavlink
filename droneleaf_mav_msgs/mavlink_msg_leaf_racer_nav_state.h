#pragma once
// MESSAGE LEAF_RACER_NAV_STATE PACKING

#define MAVLINK_MSG_ID_LEAF_RACER_NAV_STATE 77079


typedef struct __mavlink_leaf_racer_nav_state_t {
 float roll_rad; /*< [rad] Roll, positive right wing down.*/
 float pitch_rad; /*< [rad] Pitch, positive nose up.*/
 float yaw_rad; /*< [rad] INS heading, counter-clockwise from East (ENU); compass heading = 90 deg - yaw_rad. Not referenced to true North until the INS heading has been aligned.*/
 float climb_m_s; /*< [m/s] INS vertical velocity, positive up.*/
} mavlink_leaf_racer_nav_state_t;

#define MAVLINK_MSG_ID_LEAF_RACER_NAV_STATE_LEN 16
#define MAVLINK_MSG_ID_LEAF_RACER_NAV_STATE_MIN_LEN 16
#define MAVLINK_MSG_ID_77079_LEN 16
#define MAVLINK_MSG_ID_77079_MIN_LEN 16

#define MAVLINK_MSG_ID_LEAF_RACER_NAV_STATE_CRC 103
#define MAVLINK_MSG_ID_77079_CRC 103



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_LEAF_RACER_NAV_STATE { \
    77079, \
    "LEAF_RACER_NAV_STATE", \
    4, \
    {  { "roll_rad", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_leaf_racer_nav_state_t, roll_rad) }, \
         { "pitch_rad", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_leaf_racer_nav_state_t, pitch_rad) }, \
         { "yaw_rad", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_leaf_racer_nav_state_t, yaw_rad) }, \
         { "climb_m_s", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_leaf_racer_nav_state_t, climb_m_s) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_LEAF_RACER_NAV_STATE { \
    "LEAF_RACER_NAV_STATE", \
    4, \
    {  { "roll_rad", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_leaf_racer_nav_state_t, roll_rad) }, \
         { "pitch_rad", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_leaf_racer_nav_state_t, pitch_rad) }, \
         { "yaw_rad", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_leaf_racer_nav_state_t, yaw_rad) }, \
         { "climb_m_s", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_leaf_racer_nav_state_t, climb_m_s) }, \
         } \
}
#endif

/**
 * @brief Pack a leaf_racer_nav_state message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param roll_rad [rad] Roll, positive right wing down.
 * @param pitch_rad [rad] Pitch, positive nose up.
 * @param yaw_rad [rad] INS heading, counter-clockwise from East (ENU); compass heading = 90 deg - yaw_rad. Not referenced to true North until the INS heading has been aligned.
 * @param climb_m_s [m/s] INS vertical velocity, positive up.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_racer_nav_state_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               float roll_rad, float pitch_rad, float yaw_rad, float climb_m_s)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_RACER_NAV_STATE_LEN];
    _mav_put_float(buf, 0, roll_rad);
    _mav_put_float(buf, 4, pitch_rad);
    _mav_put_float(buf, 8, yaw_rad);
    _mav_put_float(buf, 12, climb_m_s);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_RACER_NAV_STATE_LEN);
#else
    mavlink_leaf_racer_nav_state_t packet;
    packet.roll_rad = roll_rad;
    packet.pitch_rad = pitch_rad;
    packet.yaw_rad = yaw_rad;
    packet.climb_m_s = climb_m_s;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_RACER_NAV_STATE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_RACER_NAV_STATE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_LEAF_RACER_NAV_STATE_MIN_LEN, MAVLINK_MSG_ID_LEAF_RACER_NAV_STATE_LEN, MAVLINK_MSG_ID_LEAF_RACER_NAV_STATE_CRC);
}

/**
 * @brief Pack a leaf_racer_nav_state message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param roll_rad [rad] Roll, positive right wing down.
 * @param pitch_rad [rad] Pitch, positive nose up.
 * @param yaw_rad [rad] INS heading, counter-clockwise from East (ENU); compass heading = 90 deg - yaw_rad. Not referenced to true North until the INS heading has been aligned.
 * @param climb_m_s [m/s] INS vertical velocity, positive up.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_racer_nav_state_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               float roll_rad, float pitch_rad, float yaw_rad, float climb_m_s)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_RACER_NAV_STATE_LEN];
    _mav_put_float(buf, 0, roll_rad);
    _mav_put_float(buf, 4, pitch_rad);
    _mav_put_float(buf, 8, yaw_rad);
    _mav_put_float(buf, 12, climb_m_s);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_RACER_NAV_STATE_LEN);
#else
    mavlink_leaf_racer_nav_state_t packet;
    packet.roll_rad = roll_rad;
    packet.pitch_rad = pitch_rad;
    packet.yaw_rad = yaw_rad;
    packet.climb_m_s = climb_m_s;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_RACER_NAV_STATE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_RACER_NAV_STATE;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_RACER_NAV_STATE_MIN_LEN, MAVLINK_MSG_ID_LEAF_RACER_NAV_STATE_LEN, MAVLINK_MSG_ID_LEAF_RACER_NAV_STATE_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_RACER_NAV_STATE_MIN_LEN, MAVLINK_MSG_ID_LEAF_RACER_NAV_STATE_LEN);
#endif
}

/**
 * @brief Pack a leaf_racer_nav_state message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param roll_rad [rad] Roll, positive right wing down.
 * @param pitch_rad [rad] Pitch, positive nose up.
 * @param yaw_rad [rad] INS heading, counter-clockwise from East (ENU); compass heading = 90 deg - yaw_rad. Not referenced to true North until the INS heading has been aligned.
 * @param climb_m_s [m/s] INS vertical velocity, positive up.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_racer_nav_state_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   float roll_rad,float pitch_rad,float yaw_rad,float climb_m_s)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_RACER_NAV_STATE_LEN];
    _mav_put_float(buf, 0, roll_rad);
    _mav_put_float(buf, 4, pitch_rad);
    _mav_put_float(buf, 8, yaw_rad);
    _mav_put_float(buf, 12, climb_m_s);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_RACER_NAV_STATE_LEN);
#else
    mavlink_leaf_racer_nav_state_t packet;
    packet.roll_rad = roll_rad;
    packet.pitch_rad = pitch_rad;
    packet.yaw_rad = yaw_rad;
    packet.climb_m_s = climb_m_s;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_RACER_NAV_STATE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_RACER_NAV_STATE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_LEAF_RACER_NAV_STATE_MIN_LEN, MAVLINK_MSG_ID_LEAF_RACER_NAV_STATE_LEN, MAVLINK_MSG_ID_LEAF_RACER_NAV_STATE_CRC);
}

/**
 * @brief Encode a leaf_racer_nav_state struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param leaf_racer_nav_state C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_racer_nav_state_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_leaf_racer_nav_state_t* leaf_racer_nav_state)
{
    return mavlink_msg_leaf_racer_nav_state_pack(system_id, component_id, msg, leaf_racer_nav_state->roll_rad, leaf_racer_nav_state->pitch_rad, leaf_racer_nav_state->yaw_rad, leaf_racer_nav_state->climb_m_s);
}

/**
 * @brief Encode a leaf_racer_nav_state struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param leaf_racer_nav_state C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_racer_nav_state_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_leaf_racer_nav_state_t* leaf_racer_nav_state)
{
    return mavlink_msg_leaf_racer_nav_state_pack_chan(system_id, component_id, chan, msg, leaf_racer_nav_state->roll_rad, leaf_racer_nav_state->pitch_rad, leaf_racer_nav_state->yaw_rad, leaf_racer_nav_state->climb_m_s);
}

/**
 * @brief Encode a leaf_racer_nav_state struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param leaf_racer_nav_state C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_racer_nav_state_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_leaf_racer_nav_state_t* leaf_racer_nav_state)
{
    return mavlink_msg_leaf_racer_nav_state_pack_status(system_id, component_id, _status, msg,  leaf_racer_nav_state->roll_rad, leaf_racer_nav_state->pitch_rad, leaf_racer_nav_state->yaw_rad, leaf_racer_nav_state->climb_m_s);
}

/**
 * @brief Send a leaf_racer_nav_state message
 * @param chan MAVLink channel to send the message
 *
 * @param roll_rad [rad] Roll, positive right wing down.
 * @param pitch_rad [rad] Pitch, positive nose up.
 * @param yaw_rad [rad] INS heading, counter-clockwise from East (ENU); compass heading = 90 deg - yaw_rad. Not referenced to true North until the INS heading has been aligned.
 * @param climb_m_s [m/s] INS vertical velocity, positive up.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_leaf_racer_nav_state_send(mavlink_channel_t chan, float roll_rad, float pitch_rad, float yaw_rad, float climb_m_s)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_RACER_NAV_STATE_LEN];
    _mav_put_float(buf, 0, roll_rad);
    _mav_put_float(buf, 4, pitch_rad);
    _mav_put_float(buf, 8, yaw_rad);
    _mav_put_float(buf, 12, climb_m_s);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_RACER_NAV_STATE, buf, MAVLINK_MSG_ID_LEAF_RACER_NAV_STATE_MIN_LEN, MAVLINK_MSG_ID_LEAF_RACER_NAV_STATE_LEN, MAVLINK_MSG_ID_LEAF_RACER_NAV_STATE_CRC);
#else
    mavlink_leaf_racer_nav_state_t packet;
    packet.roll_rad = roll_rad;
    packet.pitch_rad = pitch_rad;
    packet.yaw_rad = yaw_rad;
    packet.climb_m_s = climb_m_s;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_RACER_NAV_STATE, (const char *)&packet, MAVLINK_MSG_ID_LEAF_RACER_NAV_STATE_MIN_LEN, MAVLINK_MSG_ID_LEAF_RACER_NAV_STATE_LEN, MAVLINK_MSG_ID_LEAF_RACER_NAV_STATE_CRC);
#endif
}

/**
 * @brief Send a leaf_racer_nav_state message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_leaf_racer_nav_state_send_struct(mavlink_channel_t chan, const mavlink_leaf_racer_nav_state_t* leaf_racer_nav_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_leaf_racer_nav_state_send(chan, leaf_racer_nav_state->roll_rad, leaf_racer_nav_state->pitch_rad, leaf_racer_nav_state->yaw_rad, leaf_racer_nav_state->climb_m_s);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_RACER_NAV_STATE, (const char *)leaf_racer_nav_state, MAVLINK_MSG_ID_LEAF_RACER_NAV_STATE_MIN_LEN, MAVLINK_MSG_ID_LEAF_RACER_NAV_STATE_LEN, MAVLINK_MSG_ID_LEAF_RACER_NAV_STATE_CRC);
#endif
}

#if MAVLINK_MSG_ID_LEAF_RACER_NAV_STATE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_leaf_racer_nav_state_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  float roll_rad, float pitch_rad, float yaw_rad, float climb_m_s)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, roll_rad);
    _mav_put_float(buf, 4, pitch_rad);
    _mav_put_float(buf, 8, yaw_rad);
    _mav_put_float(buf, 12, climb_m_s);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_RACER_NAV_STATE, buf, MAVLINK_MSG_ID_LEAF_RACER_NAV_STATE_MIN_LEN, MAVLINK_MSG_ID_LEAF_RACER_NAV_STATE_LEN, MAVLINK_MSG_ID_LEAF_RACER_NAV_STATE_CRC);
#else
    mavlink_leaf_racer_nav_state_t *packet = (mavlink_leaf_racer_nav_state_t *)msgbuf;
    packet->roll_rad = roll_rad;
    packet->pitch_rad = pitch_rad;
    packet->yaw_rad = yaw_rad;
    packet->climb_m_s = climb_m_s;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_RACER_NAV_STATE, (const char *)packet, MAVLINK_MSG_ID_LEAF_RACER_NAV_STATE_MIN_LEN, MAVLINK_MSG_ID_LEAF_RACER_NAV_STATE_LEN, MAVLINK_MSG_ID_LEAF_RACER_NAV_STATE_CRC);
#endif
}
#endif

#endif

// MESSAGE LEAF_RACER_NAV_STATE UNPACKING


/**
 * @brief Get field roll_rad from leaf_racer_nav_state message
 *
 * @return [rad] Roll, positive right wing down.
 */
static inline float mavlink_msg_leaf_racer_nav_state_get_roll_rad(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field pitch_rad from leaf_racer_nav_state message
 *
 * @return [rad] Pitch, positive nose up.
 */
static inline float mavlink_msg_leaf_racer_nav_state_get_pitch_rad(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field yaw_rad from leaf_racer_nav_state message
 *
 * @return [rad] INS heading, counter-clockwise from East (ENU); compass heading = 90 deg - yaw_rad. Not referenced to true North until the INS heading has been aligned.
 */
static inline float mavlink_msg_leaf_racer_nav_state_get_yaw_rad(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field climb_m_s from leaf_racer_nav_state message
 *
 * @return [m/s] INS vertical velocity, positive up.
 */
static inline float mavlink_msg_leaf_racer_nav_state_get_climb_m_s(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Decode a leaf_racer_nav_state message into a struct
 *
 * @param msg The message to decode
 * @param leaf_racer_nav_state C-struct to decode the message contents into
 */
static inline void mavlink_msg_leaf_racer_nav_state_decode(const mavlink_message_t* msg, mavlink_leaf_racer_nav_state_t* leaf_racer_nav_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    leaf_racer_nav_state->roll_rad = mavlink_msg_leaf_racer_nav_state_get_roll_rad(msg);
    leaf_racer_nav_state->pitch_rad = mavlink_msg_leaf_racer_nav_state_get_pitch_rad(msg);
    leaf_racer_nav_state->yaw_rad = mavlink_msg_leaf_racer_nav_state_get_yaw_rad(msg);
    leaf_racer_nav_state->climb_m_s = mavlink_msg_leaf_racer_nav_state_get_climb_m_s(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_LEAF_RACER_NAV_STATE_LEN? msg->len : MAVLINK_MSG_ID_LEAF_RACER_NAV_STATE_LEN;
        memset(leaf_racer_nav_state, 0, MAVLINK_MSG_ID_LEAF_RACER_NAV_STATE_LEN);
    memcpy(leaf_racer_nav_state, _MAV_PAYLOAD(msg), len);
#endif
}
