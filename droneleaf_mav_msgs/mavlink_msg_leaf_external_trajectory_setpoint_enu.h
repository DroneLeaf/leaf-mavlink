#pragma once
// MESSAGE LEAF_EXTERNAL_TRAJECTORY_SETPOINT_ENU PACKING

#define MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_SETPOINT_ENU 77026


typedef struct __mavlink_leaf_external_trajectory_setpoint_enu_t {
 float x; /*< [m] X Position in ENU frame*/
 float y; /*< [m] Y Position in ENU frame*/
 float z; /*< [m] Z Position in ENU frame*/
 float vx; /*< [m/s] X velocity in ENU frame*/
 float vy; /*< [m/s] Y velocity in ENU frame*/
 float vz; /*< [m/s] Z velocity in ENU frame*/
 float afx; /*< [m/s/s] X acceleration or force in ENU frame in meter / s^2 or N*/
 float afy; /*< [m/s/s] Y acceleration or force in ENU frame in meter / s^2 or N*/
 float afz; /*< [m/s/s] Z acceleration or force in ENU frame in meter / s^2 or N*/
 float yaw; /*< [rad] yaw setpoint*/
 float yaw_rate; /*< [rad/s] yaw rate setpoint*/
} mavlink_leaf_external_trajectory_setpoint_enu_t;

#define MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_SETPOINT_ENU_LEN 44
#define MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_SETPOINT_ENU_MIN_LEN 44
#define MAVLINK_MSG_ID_77026_LEN 44
#define MAVLINK_MSG_ID_77026_MIN_LEN 44

#define MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_SETPOINT_ENU_CRC 54
#define MAVLINK_MSG_ID_77026_CRC 54



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_LEAF_EXTERNAL_TRAJECTORY_SETPOINT_ENU { \
    77026, \
    "LEAF_EXTERNAL_TRAJECTORY_SETPOINT_ENU", \
    11, \
    {  { "x", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_leaf_external_trajectory_setpoint_enu_t, x) }, \
         { "y", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_leaf_external_trajectory_setpoint_enu_t, y) }, \
         { "z", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_leaf_external_trajectory_setpoint_enu_t, z) }, \
         { "vx", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_leaf_external_trajectory_setpoint_enu_t, vx) }, \
         { "vy", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_leaf_external_trajectory_setpoint_enu_t, vy) }, \
         { "vz", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_leaf_external_trajectory_setpoint_enu_t, vz) }, \
         { "afx", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_leaf_external_trajectory_setpoint_enu_t, afx) }, \
         { "afy", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_leaf_external_trajectory_setpoint_enu_t, afy) }, \
         { "afz", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_leaf_external_trajectory_setpoint_enu_t, afz) }, \
         { "yaw", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_leaf_external_trajectory_setpoint_enu_t, yaw) }, \
         { "yaw_rate", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_leaf_external_trajectory_setpoint_enu_t, yaw_rate) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_LEAF_EXTERNAL_TRAJECTORY_SETPOINT_ENU { \
    "LEAF_EXTERNAL_TRAJECTORY_SETPOINT_ENU", \
    11, \
    {  { "x", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_leaf_external_trajectory_setpoint_enu_t, x) }, \
         { "y", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_leaf_external_trajectory_setpoint_enu_t, y) }, \
         { "z", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_leaf_external_trajectory_setpoint_enu_t, z) }, \
         { "vx", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_leaf_external_trajectory_setpoint_enu_t, vx) }, \
         { "vy", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_leaf_external_trajectory_setpoint_enu_t, vy) }, \
         { "vz", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_leaf_external_trajectory_setpoint_enu_t, vz) }, \
         { "afx", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_leaf_external_trajectory_setpoint_enu_t, afx) }, \
         { "afy", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_leaf_external_trajectory_setpoint_enu_t, afy) }, \
         { "afz", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_leaf_external_trajectory_setpoint_enu_t, afz) }, \
         { "yaw", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_leaf_external_trajectory_setpoint_enu_t, yaw) }, \
         { "yaw_rate", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_leaf_external_trajectory_setpoint_enu_t, yaw_rate) }, \
         } \
}
#endif

/**
 * @brief Pack a leaf_external_trajectory_setpoint_enu message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param x [m] X Position in ENU frame
 * @param y [m] Y Position in ENU frame
 * @param z [m] Z Position in ENU frame
 * @param vx [m/s] X velocity in ENU frame
 * @param vy [m/s] Y velocity in ENU frame
 * @param vz [m/s] Z velocity in ENU frame
 * @param afx [m/s/s] X acceleration or force in ENU frame in meter / s^2 or N
 * @param afy [m/s/s] Y acceleration or force in ENU frame in meter / s^2 or N
 * @param afz [m/s/s] Z acceleration or force in ENU frame in meter / s^2 or N
 * @param yaw [rad] yaw setpoint
 * @param yaw_rate [rad/s] yaw rate setpoint
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_external_trajectory_setpoint_enu_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               float x, float y, float z, float vx, float vy, float vz, float afx, float afy, float afz, float yaw, float yaw_rate)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_SETPOINT_ENU_LEN];
    _mav_put_float(buf, 0, x);
    _mav_put_float(buf, 4, y);
    _mav_put_float(buf, 8, z);
    _mav_put_float(buf, 12, vx);
    _mav_put_float(buf, 16, vy);
    _mav_put_float(buf, 20, vz);
    _mav_put_float(buf, 24, afx);
    _mav_put_float(buf, 28, afy);
    _mav_put_float(buf, 32, afz);
    _mav_put_float(buf, 36, yaw);
    _mav_put_float(buf, 40, yaw_rate);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_SETPOINT_ENU_LEN);
#else
    mavlink_leaf_external_trajectory_setpoint_enu_t packet;
    packet.x = x;
    packet.y = y;
    packet.z = z;
    packet.vx = vx;
    packet.vy = vy;
    packet.vz = vz;
    packet.afx = afx;
    packet.afy = afy;
    packet.afz = afz;
    packet.yaw = yaw;
    packet.yaw_rate = yaw_rate;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_SETPOINT_ENU_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_SETPOINT_ENU;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_SETPOINT_ENU_MIN_LEN, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_SETPOINT_ENU_LEN, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_SETPOINT_ENU_CRC);
}

/**
 * @brief Pack a leaf_external_trajectory_setpoint_enu message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param x [m] X Position in ENU frame
 * @param y [m] Y Position in ENU frame
 * @param z [m] Z Position in ENU frame
 * @param vx [m/s] X velocity in ENU frame
 * @param vy [m/s] Y velocity in ENU frame
 * @param vz [m/s] Z velocity in ENU frame
 * @param afx [m/s/s] X acceleration or force in ENU frame in meter / s^2 or N
 * @param afy [m/s/s] Y acceleration or force in ENU frame in meter / s^2 or N
 * @param afz [m/s/s] Z acceleration or force in ENU frame in meter / s^2 or N
 * @param yaw [rad] yaw setpoint
 * @param yaw_rate [rad/s] yaw rate setpoint
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_external_trajectory_setpoint_enu_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               float x, float y, float z, float vx, float vy, float vz, float afx, float afy, float afz, float yaw, float yaw_rate)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_SETPOINT_ENU_LEN];
    _mav_put_float(buf, 0, x);
    _mav_put_float(buf, 4, y);
    _mav_put_float(buf, 8, z);
    _mav_put_float(buf, 12, vx);
    _mav_put_float(buf, 16, vy);
    _mav_put_float(buf, 20, vz);
    _mav_put_float(buf, 24, afx);
    _mav_put_float(buf, 28, afy);
    _mav_put_float(buf, 32, afz);
    _mav_put_float(buf, 36, yaw);
    _mav_put_float(buf, 40, yaw_rate);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_SETPOINT_ENU_LEN);
#else
    mavlink_leaf_external_trajectory_setpoint_enu_t packet;
    packet.x = x;
    packet.y = y;
    packet.z = z;
    packet.vx = vx;
    packet.vy = vy;
    packet.vz = vz;
    packet.afx = afx;
    packet.afy = afy;
    packet.afz = afz;
    packet.yaw = yaw;
    packet.yaw_rate = yaw_rate;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_SETPOINT_ENU_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_SETPOINT_ENU;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_SETPOINT_ENU_MIN_LEN, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_SETPOINT_ENU_LEN, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_SETPOINT_ENU_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_SETPOINT_ENU_MIN_LEN, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_SETPOINT_ENU_LEN);
#endif
}

/**
 * @brief Pack a leaf_external_trajectory_setpoint_enu message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param x [m] X Position in ENU frame
 * @param y [m] Y Position in ENU frame
 * @param z [m] Z Position in ENU frame
 * @param vx [m/s] X velocity in ENU frame
 * @param vy [m/s] Y velocity in ENU frame
 * @param vz [m/s] Z velocity in ENU frame
 * @param afx [m/s/s] X acceleration or force in ENU frame in meter / s^2 or N
 * @param afy [m/s/s] Y acceleration or force in ENU frame in meter / s^2 or N
 * @param afz [m/s/s] Z acceleration or force in ENU frame in meter / s^2 or N
 * @param yaw [rad] yaw setpoint
 * @param yaw_rate [rad/s] yaw rate setpoint
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_external_trajectory_setpoint_enu_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   float x,float y,float z,float vx,float vy,float vz,float afx,float afy,float afz,float yaw,float yaw_rate)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_SETPOINT_ENU_LEN];
    _mav_put_float(buf, 0, x);
    _mav_put_float(buf, 4, y);
    _mav_put_float(buf, 8, z);
    _mav_put_float(buf, 12, vx);
    _mav_put_float(buf, 16, vy);
    _mav_put_float(buf, 20, vz);
    _mav_put_float(buf, 24, afx);
    _mav_put_float(buf, 28, afy);
    _mav_put_float(buf, 32, afz);
    _mav_put_float(buf, 36, yaw);
    _mav_put_float(buf, 40, yaw_rate);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_SETPOINT_ENU_LEN);
#else
    mavlink_leaf_external_trajectory_setpoint_enu_t packet;
    packet.x = x;
    packet.y = y;
    packet.z = z;
    packet.vx = vx;
    packet.vy = vy;
    packet.vz = vz;
    packet.afx = afx;
    packet.afy = afy;
    packet.afz = afz;
    packet.yaw = yaw;
    packet.yaw_rate = yaw_rate;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_SETPOINT_ENU_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_SETPOINT_ENU;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_SETPOINT_ENU_MIN_LEN, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_SETPOINT_ENU_LEN, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_SETPOINT_ENU_CRC);
}

/**
 * @brief Encode a leaf_external_trajectory_setpoint_enu struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param leaf_external_trajectory_setpoint_enu C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_external_trajectory_setpoint_enu_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_leaf_external_trajectory_setpoint_enu_t* leaf_external_trajectory_setpoint_enu)
{
    return mavlink_msg_leaf_external_trajectory_setpoint_enu_pack(system_id, component_id, msg, leaf_external_trajectory_setpoint_enu->x, leaf_external_trajectory_setpoint_enu->y, leaf_external_trajectory_setpoint_enu->z, leaf_external_trajectory_setpoint_enu->vx, leaf_external_trajectory_setpoint_enu->vy, leaf_external_trajectory_setpoint_enu->vz, leaf_external_trajectory_setpoint_enu->afx, leaf_external_trajectory_setpoint_enu->afy, leaf_external_trajectory_setpoint_enu->afz, leaf_external_trajectory_setpoint_enu->yaw, leaf_external_trajectory_setpoint_enu->yaw_rate);
}

/**
 * @brief Encode a leaf_external_trajectory_setpoint_enu struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param leaf_external_trajectory_setpoint_enu C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_external_trajectory_setpoint_enu_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_leaf_external_trajectory_setpoint_enu_t* leaf_external_trajectory_setpoint_enu)
{
    return mavlink_msg_leaf_external_trajectory_setpoint_enu_pack_chan(system_id, component_id, chan, msg, leaf_external_trajectory_setpoint_enu->x, leaf_external_trajectory_setpoint_enu->y, leaf_external_trajectory_setpoint_enu->z, leaf_external_trajectory_setpoint_enu->vx, leaf_external_trajectory_setpoint_enu->vy, leaf_external_trajectory_setpoint_enu->vz, leaf_external_trajectory_setpoint_enu->afx, leaf_external_trajectory_setpoint_enu->afy, leaf_external_trajectory_setpoint_enu->afz, leaf_external_trajectory_setpoint_enu->yaw, leaf_external_trajectory_setpoint_enu->yaw_rate);
}

/**
 * @brief Encode a leaf_external_trajectory_setpoint_enu struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param leaf_external_trajectory_setpoint_enu C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_external_trajectory_setpoint_enu_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_leaf_external_trajectory_setpoint_enu_t* leaf_external_trajectory_setpoint_enu)
{
    return mavlink_msg_leaf_external_trajectory_setpoint_enu_pack_status(system_id, component_id, _status, msg,  leaf_external_trajectory_setpoint_enu->x, leaf_external_trajectory_setpoint_enu->y, leaf_external_trajectory_setpoint_enu->z, leaf_external_trajectory_setpoint_enu->vx, leaf_external_trajectory_setpoint_enu->vy, leaf_external_trajectory_setpoint_enu->vz, leaf_external_trajectory_setpoint_enu->afx, leaf_external_trajectory_setpoint_enu->afy, leaf_external_trajectory_setpoint_enu->afz, leaf_external_trajectory_setpoint_enu->yaw, leaf_external_trajectory_setpoint_enu->yaw_rate);
}

/**
 * @brief Send a leaf_external_trajectory_setpoint_enu message
 * @param chan MAVLink channel to send the message
 *
 * @param x [m] X Position in ENU frame
 * @param y [m] Y Position in ENU frame
 * @param z [m] Z Position in ENU frame
 * @param vx [m/s] X velocity in ENU frame
 * @param vy [m/s] Y velocity in ENU frame
 * @param vz [m/s] Z velocity in ENU frame
 * @param afx [m/s/s] X acceleration or force in ENU frame in meter / s^2 or N
 * @param afy [m/s/s] Y acceleration or force in ENU frame in meter / s^2 or N
 * @param afz [m/s/s] Z acceleration or force in ENU frame in meter / s^2 or N
 * @param yaw [rad] yaw setpoint
 * @param yaw_rate [rad/s] yaw rate setpoint
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_leaf_external_trajectory_setpoint_enu_send(mavlink_channel_t chan, float x, float y, float z, float vx, float vy, float vz, float afx, float afy, float afz, float yaw, float yaw_rate)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_SETPOINT_ENU_LEN];
    _mav_put_float(buf, 0, x);
    _mav_put_float(buf, 4, y);
    _mav_put_float(buf, 8, z);
    _mav_put_float(buf, 12, vx);
    _mav_put_float(buf, 16, vy);
    _mav_put_float(buf, 20, vz);
    _mav_put_float(buf, 24, afx);
    _mav_put_float(buf, 28, afy);
    _mav_put_float(buf, 32, afz);
    _mav_put_float(buf, 36, yaw);
    _mav_put_float(buf, 40, yaw_rate);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_SETPOINT_ENU, buf, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_SETPOINT_ENU_MIN_LEN, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_SETPOINT_ENU_LEN, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_SETPOINT_ENU_CRC);
#else
    mavlink_leaf_external_trajectory_setpoint_enu_t packet;
    packet.x = x;
    packet.y = y;
    packet.z = z;
    packet.vx = vx;
    packet.vy = vy;
    packet.vz = vz;
    packet.afx = afx;
    packet.afy = afy;
    packet.afz = afz;
    packet.yaw = yaw;
    packet.yaw_rate = yaw_rate;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_SETPOINT_ENU, (const char *)&packet, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_SETPOINT_ENU_MIN_LEN, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_SETPOINT_ENU_LEN, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_SETPOINT_ENU_CRC);
#endif
}

/**
 * @brief Send a leaf_external_trajectory_setpoint_enu message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_leaf_external_trajectory_setpoint_enu_send_struct(mavlink_channel_t chan, const mavlink_leaf_external_trajectory_setpoint_enu_t* leaf_external_trajectory_setpoint_enu)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_leaf_external_trajectory_setpoint_enu_send(chan, leaf_external_trajectory_setpoint_enu->x, leaf_external_trajectory_setpoint_enu->y, leaf_external_trajectory_setpoint_enu->z, leaf_external_trajectory_setpoint_enu->vx, leaf_external_trajectory_setpoint_enu->vy, leaf_external_trajectory_setpoint_enu->vz, leaf_external_trajectory_setpoint_enu->afx, leaf_external_trajectory_setpoint_enu->afy, leaf_external_trajectory_setpoint_enu->afz, leaf_external_trajectory_setpoint_enu->yaw, leaf_external_trajectory_setpoint_enu->yaw_rate);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_SETPOINT_ENU, (const char *)leaf_external_trajectory_setpoint_enu, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_SETPOINT_ENU_MIN_LEN, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_SETPOINT_ENU_LEN, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_SETPOINT_ENU_CRC);
#endif
}

#if MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_SETPOINT_ENU_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_leaf_external_trajectory_setpoint_enu_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  float x, float y, float z, float vx, float vy, float vz, float afx, float afy, float afz, float yaw, float yaw_rate)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, x);
    _mav_put_float(buf, 4, y);
    _mav_put_float(buf, 8, z);
    _mav_put_float(buf, 12, vx);
    _mav_put_float(buf, 16, vy);
    _mav_put_float(buf, 20, vz);
    _mav_put_float(buf, 24, afx);
    _mav_put_float(buf, 28, afy);
    _mav_put_float(buf, 32, afz);
    _mav_put_float(buf, 36, yaw);
    _mav_put_float(buf, 40, yaw_rate);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_SETPOINT_ENU, buf, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_SETPOINT_ENU_MIN_LEN, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_SETPOINT_ENU_LEN, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_SETPOINT_ENU_CRC);
#else
    mavlink_leaf_external_trajectory_setpoint_enu_t *packet = (mavlink_leaf_external_trajectory_setpoint_enu_t *)msgbuf;
    packet->x = x;
    packet->y = y;
    packet->z = z;
    packet->vx = vx;
    packet->vy = vy;
    packet->vz = vz;
    packet->afx = afx;
    packet->afy = afy;
    packet->afz = afz;
    packet->yaw = yaw;
    packet->yaw_rate = yaw_rate;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_SETPOINT_ENU, (const char *)packet, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_SETPOINT_ENU_MIN_LEN, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_SETPOINT_ENU_LEN, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_SETPOINT_ENU_CRC);
#endif
}
#endif

#endif

// MESSAGE LEAF_EXTERNAL_TRAJECTORY_SETPOINT_ENU UNPACKING


/**
 * @brief Get field x from leaf_external_trajectory_setpoint_enu message
 *
 * @return [m] X Position in ENU frame
 */
static inline float mavlink_msg_leaf_external_trajectory_setpoint_enu_get_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field y from leaf_external_trajectory_setpoint_enu message
 *
 * @return [m] Y Position in ENU frame
 */
static inline float mavlink_msg_leaf_external_trajectory_setpoint_enu_get_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field z from leaf_external_trajectory_setpoint_enu message
 *
 * @return [m] Z Position in ENU frame
 */
static inline float mavlink_msg_leaf_external_trajectory_setpoint_enu_get_z(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field vx from leaf_external_trajectory_setpoint_enu message
 *
 * @return [m/s] X velocity in ENU frame
 */
static inline float mavlink_msg_leaf_external_trajectory_setpoint_enu_get_vx(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field vy from leaf_external_trajectory_setpoint_enu message
 *
 * @return [m/s] Y velocity in ENU frame
 */
static inline float mavlink_msg_leaf_external_trajectory_setpoint_enu_get_vy(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field vz from leaf_external_trajectory_setpoint_enu message
 *
 * @return [m/s] Z velocity in ENU frame
 */
static inline float mavlink_msg_leaf_external_trajectory_setpoint_enu_get_vz(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field afx from leaf_external_trajectory_setpoint_enu message
 *
 * @return [m/s/s] X acceleration or force in ENU frame in meter / s^2 or N
 */
static inline float mavlink_msg_leaf_external_trajectory_setpoint_enu_get_afx(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field afy from leaf_external_trajectory_setpoint_enu message
 *
 * @return [m/s/s] Y acceleration or force in ENU frame in meter / s^2 or N
 */
static inline float mavlink_msg_leaf_external_trajectory_setpoint_enu_get_afy(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Get field afz from leaf_external_trajectory_setpoint_enu message
 *
 * @return [m/s/s] Z acceleration or force in ENU frame in meter / s^2 or N
 */
static inline float mavlink_msg_leaf_external_trajectory_setpoint_enu_get_afz(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  32);
}

/**
 * @brief Get field yaw from leaf_external_trajectory_setpoint_enu message
 *
 * @return [rad] yaw setpoint
 */
static inline float mavlink_msg_leaf_external_trajectory_setpoint_enu_get_yaw(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  36);
}

/**
 * @brief Get field yaw_rate from leaf_external_trajectory_setpoint_enu message
 *
 * @return [rad/s] yaw rate setpoint
 */
static inline float mavlink_msg_leaf_external_trajectory_setpoint_enu_get_yaw_rate(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  40);
}

/**
 * @brief Decode a leaf_external_trajectory_setpoint_enu message into a struct
 *
 * @param msg The message to decode
 * @param leaf_external_trajectory_setpoint_enu C-struct to decode the message contents into
 */
static inline void mavlink_msg_leaf_external_trajectory_setpoint_enu_decode(const mavlink_message_t* msg, mavlink_leaf_external_trajectory_setpoint_enu_t* leaf_external_trajectory_setpoint_enu)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    leaf_external_trajectory_setpoint_enu->x = mavlink_msg_leaf_external_trajectory_setpoint_enu_get_x(msg);
    leaf_external_trajectory_setpoint_enu->y = mavlink_msg_leaf_external_trajectory_setpoint_enu_get_y(msg);
    leaf_external_trajectory_setpoint_enu->z = mavlink_msg_leaf_external_trajectory_setpoint_enu_get_z(msg);
    leaf_external_trajectory_setpoint_enu->vx = mavlink_msg_leaf_external_trajectory_setpoint_enu_get_vx(msg);
    leaf_external_trajectory_setpoint_enu->vy = mavlink_msg_leaf_external_trajectory_setpoint_enu_get_vy(msg);
    leaf_external_trajectory_setpoint_enu->vz = mavlink_msg_leaf_external_trajectory_setpoint_enu_get_vz(msg);
    leaf_external_trajectory_setpoint_enu->afx = mavlink_msg_leaf_external_trajectory_setpoint_enu_get_afx(msg);
    leaf_external_trajectory_setpoint_enu->afy = mavlink_msg_leaf_external_trajectory_setpoint_enu_get_afy(msg);
    leaf_external_trajectory_setpoint_enu->afz = mavlink_msg_leaf_external_trajectory_setpoint_enu_get_afz(msg);
    leaf_external_trajectory_setpoint_enu->yaw = mavlink_msg_leaf_external_trajectory_setpoint_enu_get_yaw(msg);
    leaf_external_trajectory_setpoint_enu->yaw_rate = mavlink_msg_leaf_external_trajectory_setpoint_enu_get_yaw_rate(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_SETPOINT_ENU_LEN? msg->len : MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_SETPOINT_ENU_LEN;
        memset(leaf_external_trajectory_setpoint_enu, 0, MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_SETPOINT_ENU_LEN);
    memcpy(leaf_external_trajectory_setpoint_enu, _MAV_PAYLOAD(msg), len);
#endif
}
