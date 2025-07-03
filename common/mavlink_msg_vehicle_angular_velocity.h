#pragma once
// MESSAGE VEHICLE_ANGULAR_VELOCITY PACKING

#define MAVLINK_MSG_ID_VEHICLE_ANGULAR_VELOCITY 203


typedef struct __mavlink_vehicle_angular_velocity_t {
 float angular_velocity_x; /*< [rad/s] X component of angular velocity, positive is rolling to the right.*/
 float angular_velocity_y; /*< [rad/s] Y component of angular velocity, positive is pitching up.*/
 float angular_velocity_z; /*< [rad/s] Z component of angular velocity, positive is yawing to the right.*/
} mavlink_vehicle_angular_velocity_t;

#define MAVLINK_MSG_ID_VEHICLE_ANGULAR_VELOCITY_LEN 12
#define MAVLINK_MSG_ID_VEHICLE_ANGULAR_VELOCITY_MIN_LEN 12
#define MAVLINK_MSG_ID_203_LEN 12
#define MAVLINK_MSG_ID_203_MIN_LEN 12

#define MAVLINK_MSG_ID_VEHICLE_ANGULAR_VELOCITY_CRC 80
#define MAVLINK_MSG_ID_203_CRC 80



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_VEHICLE_ANGULAR_VELOCITY { \
    203, \
    "VEHICLE_ANGULAR_VELOCITY", \
    3, \
    {  { "angular_velocity_x", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_vehicle_angular_velocity_t, angular_velocity_x) }, \
         { "angular_velocity_y", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_vehicle_angular_velocity_t, angular_velocity_y) }, \
         { "angular_velocity_z", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_vehicle_angular_velocity_t, angular_velocity_z) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_VEHICLE_ANGULAR_VELOCITY { \
    "VEHICLE_ANGULAR_VELOCITY", \
    3, \
    {  { "angular_velocity_x", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_vehicle_angular_velocity_t, angular_velocity_x) }, \
         { "angular_velocity_y", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_vehicle_angular_velocity_t, angular_velocity_y) }, \
         { "angular_velocity_z", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_vehicle_angular_velocity_t, angular_velocity_z) }, \
         } \
}
#endif

/**
 * @brief Pack a vehicle_angular_velocity message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param angular_velocity_x [rad/s] X component of angular velocity, positive is rolling to the right.
 * @param angular_velocity_y [rad/s] Y component of angular velocity, positive is pitching up.
 * @param angular_velocity_z [rad/s] Z component of angular velocity, positive is yawing to the right.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_vehicle_angular_velocity_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               float angular_velocity_x, float angular_velocity_y, float angular_velocity_z)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_VEHICLE_ANGULAR_VELOCITY_LEN];
    _mav_put_float(buf, 0, angular_velocity_x);
    _mav_put_float(buf, 4, angular_velocity_y);
    _mav_put_float(buf, 8, angular_velocity_z);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_VEHICLE_ANGULAR_VELOCITY_LEN);
#else
    mavlink_vehicle_angular_velocity_t packet;
    packet.angular_velocity_x = angular_velocity_x;
    packet.angular_velocity_y = angular_velocity_y;
    packet.angular_velocity_z = angular_velocity_z;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_VEHICLE_ANGULAR_VELOCITY_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_VEHICLE_ANGULAR_VELOCITY;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_VEHICLE_ANGULAR_VELOCITY_MIN_LEN, MAVLINK_MSG_ID_VEHICLE_ANGULAR_VELOCITY_LEN, MAVLINK_MSG_ID_VEHICLE_ANGULAR_VELOCITY_CRC);
}

/**
 * @brief Pack a vehicle_angular_velocity message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param angular_velocity_x [rad/s] X component of angular velocity, positive is rolling to the right.
 * @param angular_velocity_y [rad/s] Y component of angular velocity, positive is pitching up.
 * @param angular_velocity_z [rad/s] Z component of angular velocity, positive is yawing to the right.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_vehicle_angular_velocity_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               float angular_velocity_x, float angular_velocity_y, float angular_velocity_z)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_VEHICLE_ANGULAR_VELOCITY_LEN];
    _mav_put_float(buf, 0, angular_velocity_x);
    _mav_put_float(buf, 4, angular_velocity_y);
    _mav_put_float(buf, 8, angular_velocity_z);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_VEHICLE_ANGULAR_VELOCITY_LEN);
#else
    mavlink_vehicle_angular_velocity_t packet;
    packet.angular_velocity_x = angular_velocity_x;
    packet.angular_velocity_y = angular_velocity_y;
    packet.angular_velocity_z = angular_velocity_z;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_VEHICLE_ANGULAR_VELOCITY_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_VEHICLE_ANGULAR_VELOCITY;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_VEHICLE_ANGULAR_VELOCITY_MIN_LEN, MAVLINK_MSG_ID_VEHICLE_ANGULAR_VELOCITY_LEN, MAVLINK_MSG_ID_VEHICLE_ANGULAR_VELOCITY_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_VEHICLE_ANGULAR_VELOCITY_MIN_LEN, MAVLINK_MSG_ID_VEHICLE_ANGULAR_VELOCITY_LEN);
#endif
}

/**
 * @brief Pack a vehicle_angular_velocity message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param angular_velocity_x [rad/s] X component of angular velocity, positive is rolling to the right.
 * @param angular_velocity_y [rad/s] Y component of angular velocity, positive is pitching up.
 * @param angular_velocity_z [rad/s] Z component of angular velocity, positive is yawing to the right.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_vehicle_angular_velocity_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   float angular_velocity_x,float angular_velocity_y,float angular_velocity_z)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_VEHICLE_ANGULAR_VELOCITY_LEN];
    _mav_put_float(buf, 0, angular_velocity_x);
    _mav_put_float(buf, 4, angular_velocity_y);
    _mav_put_float(buf, 8, angular_velocity_z);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_VEHICLE_ANGULAR_VELOCITY_LEN);
#else
    mavlink_vehicle_angular_velocity_t packet;
    packet.angular_velocity_x = angular_velocity_x;
    packet.angular_velocity_y = angular_velocity_y;
    packet.angular_velocity_z = angular_velocity_z;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_VEHICLE_ANGULAR_VELOCITY_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_VEHICLE_ANGULAR_VELOCITY;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_VEHICLE_ANGULAR_VELOCITY_MIN_LEN, MAVLINK_MSG_ID_VEHICLE_ANGULAR_VELOCITY_LEN, MAVLINK_MSG_ID_VEHICLE_ANGULAR_VELOCITY_CRC);
}

/**
 * @brief Encode a vehicle_angular_velocity struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param vehicle_angular_velocity C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_vehicle_angular_velocity_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_vehicle_angular_velocity_t* vehicle_angular_velocity)
{
    return mavlink_msg_vehicle_angular_velocity_pack(system_id, component_id, msg, vehicle_angular_velocity->angular_velocity_x, vehicle_angular_velocity->angular_velocity_y, vehicle_angular_velocity->angular_velocity_z);
}

/**
 * @brief Encode a vehicle_angular_velocity struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param vehicle_angular_velocity C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_vehicle_angular_velocity_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_vehicle_angular_velocity_t* vehicle_angular_velocity)
{
    return mavlink_msg_vehicle_angular_velocity_pack_chan(system_id, component_id, chan, msg, vehicle_angular_velocity->angular_velocity_x, vehicle_angular_velocity->angular_velocity_y, vehicle_angular_velocity->angular_velocity_z);
}

/**
 * @brief Encode a vehicle_angular_velocity struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param vehicle_angular_velocity C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_vehicle_angular_velocity_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_vehicle_angular_velocity_t* vehicle_angular_velocity)
{
    return mavlink_msg_vehicle_angular_velocity_pack_status(system_id, component_id, _status, msg,  vehicle_angular_velocity->angular_velocity_x, vehicle_angular_velocity->angular_velocity_y, vehicle_angular_velocity->angular_velocity_z);
}

/**
 * @brief Send a vehicle_angular_velocity message
 * @param chan MAVLink channel to send the message
 *
 * @param angular_velocity_x [rad/s] X component of angular velocity, positive is rolling to the right.
 * @param angular_velocity_y [rad/s] Y component of angular velocity, positive is pitching up.
 * @param angular_velocity_z [rad/s] Z component of angular velocity, positive is yawing to the right.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_vehicle_angular_velocity_send(mavlink_channel_t chan, float angular_velocity_x, float angular_velocity_y, float angular_velocity_z)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_VEHICLE_ANGULAR_VELOCITY_LEN];
    _mav_put_float(buf, 0, angular_velocity_x);
    _mav_put_float(buf, 4, angular_velocity_y);
    _mav_put_float(buf, 8, angular_velocity_z);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VEHICLE_ANGULAR_VELOCITY, buf, MAVLINK_MSG_ID_VEHICLE_ANGULAR_VELOCITY_MIN_LEN, MAVLINK_MSG_ID_VEHICLE_ANGULAR_VELOCITY_LEN, MAVLINK_MSG_ID_VEHICLE_ANGULAR_VELOCITY_CRC);
#else
    mavlink_vehicle_angular_velocity_t packet;
    packet.angular_velocity_x = angular_velocity_x;
    packet.angular_velocity_y = angular_velocity_y;
    packet.angular_velocity_z = angular_velocity_z;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VEHICLE_ANGULAR_VELOCITY, (const char *)&packet, MAVLINK_MSG_ID_VEHICLE_ANGULAR_VELOCITY_MIN_LEN, MAVLINK_MSG_ID_VEHICLE_ANGULAR_VELOCITY_LEN, MAVLINK_MSG_ID_VEHICLE_ANGULAR_VELOCITY_CRC);
#endif
}

/**
 * @brief Send a vehicle_angular_velocity message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_vehicle_angular_velocity_send_struct(mavlink_channel_t chan, const mavlink_vehicle_angular_velocity_t* vehicle_angular_velocity)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_vehicle_angular_velocity_send(chan, vehicle_angular_velocity->angular_velocity_x, vehicle_angular_velocity->angular_velocity_y, vehicle_angular_velocity->angular_velocity_z);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VEHICLE_ANGULAR_VELOCITY, (const char *)vehicle_angular_velocity, MAVLINK_MSG_ID_VEHICLE_ANGULAR_VELOCITY_MIN_LEN, MAVLINK_MSG_ID_VEHICLE_ANGULAR_VELOCITY_LEN, MAVLINK_MSG_ID_VEHICLE_ANGULAR_VELOCITY_CRC);
#endif
}

#if MAVLINK_MSG_ID_VEHICLE_ANGULAR_VELOCITY_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_vehicle_angular_velocity_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  float angular_velocity_x, float angular_velocity_y, float angular_velocity_z)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, angular_velocity_x);
    _mav_put_float(buf, 4, angular_velocity_y);
    _mav_put_float(buf, 8, angular_velocity_z);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VEHICLE_ANGULAR_VELOCITY, buf, MAVLINK_MSG_ID_VEHICLE_ANGULAR_VELOCITY_MIN_LEN, MAVLINK_MSG_ID_VEHICLE_ANGULAR_VELOCITY_LEN, MAVLINK_MSG_ID_VEHICLE_ANGULAR_VELOCITY_CRC);
#else
    mavlink_vehicle_angular_velocity_t *packet = (mavlink_vehicle_angular_velocity_t *)msgbuf;
    packet->angular_velocity_x = angular_velocity_x;
    packet->angular_velocity_y = angular_velocity_y;
    packet->angular_velocity_z = angular_velocity_z;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VEHICLE_ANGULAR_VELOCITY, (const char *)packet, MAVLINK_MSG_ID_VEHICLE_ANGULAR_VELOCITY_MIN_LEN, MAVLINK_MSG_ID_VEHICLE_ANGULAR_VELOCITY_LEN, MAVLINK_MSG_ID_VEHICLE_ANGULAR_VELOCITY_CRC);
#endif
}
#endif

#endif

// MESSAGE VEHICLE_ANGULAR_VELOCITY UNPACKING


/**
 * @brief Get field angular_velocity_x from vehicle_angular_velocity message
 *
 * @return [rad/s] X component of angular velocity, positive is rolling to the right.
 */
static inline float mavlink_msg_vehicle_angular_velocity_get_angular_velocity_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field angular_velocity_y from vehicle_angular_velocity message
 *
 * @return [rad/s] Y component of angular velocity, positive is pitching up.
 */
static inline float mavlink_msg_vehicle_angular_velocity_get_angular_velocity_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field angular_velocity_z from vehicle_angular_velocity message
 *
 * @return [rad/s] Z component of angular velocity, positive is yawing to the right.
 */
static inline float mavlink_msg_vehicle_angular_velocity_get_angular_velocity_z(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Decode a vehicle_angular_velocity message into a struct
 *
 * @param msg The message to decode
 * @param vehicle_angular_velocity C-struct to decode the message contents into
 */
static inline void mavlink_msg_vehicle_angular_velocity_decode(const mavlink_message_t* msg, mavlink_vehicle_angular_velocity_t* vehicle_angular_velocity)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    vehicle_angular_velocity->angular_velocity_x = mavlink_msg_vehicle_angular_velocity_get_angular_velocity_x(msg);
    vehicle_angular_velocity->angular_velocity_y = mavlink_msg_vehicle_angular_velocity_get_angular_velocity_y(msg);
    vehicle_angular_velocity->angular_velocity_z = mavlink_msg_vehicle_angular_velocity_get_angular_velocity_z(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_VEHICLE_ANGULAR_VELOCITY_LEN? msg->len : MAVLINK_MSG_ID_VEHICLE_ANGULAR_VELOCITY_LEN;
        memset(vehicle_angular_velocity, 0, MAVLINK_MSG_ID_VEHICLE_ANGULAR_VELOCITY_LEN);
    memcpy(vehicle_angular_velocity, _MAV_PAYLOAD(msg), len);
#endif
}
