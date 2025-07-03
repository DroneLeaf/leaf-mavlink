#pragma once
// MESSAGE VEHICLE_ATTITUDE PACKING

#define MAVLINK_MSG_ID_VEHICLE_ATTITUDE 202


typedef struct __mavlink_vehicle_attitude_t {
 float q_w; /*<  Quaternion rotation from the FRD body frame to the NED earth frame (w component).*/
 float q_x; /*<  Quaternion rotation from the FRD body frame to the NED earth frame (x component).*/
 float q_y; /*<  Quaternion rotation from the FRD body frame to the NED earth frame (y component).*/
 float q_z; /*<  Quaternion rotation from the FRD body frame to the NED earth frame (z component).*/
 float delta_q_w; /*<  Amount by which quaternion w has changed during last reset.*/
 float delta_q_x; /*<  Amount by which quaternion x has changed during last reset.*/
 float delta_q_y; /*<  Amount by which quaternion y has changed during last reset.*/
 float delta_q_z; /*<  Amount by which quaternion z has changed during last reset.*/
} mavlink_vehicle_attitude_t;

#define MAVLINK_MSG_ID_VEHICLE_ATTITUDE_LEN 32
#define MAVLINK_MSG_ID_VEHICLE_ATTITUDE_MIN_LEN 32
#define MAVLINK_MSG_ID_202_LEN 32
#define MAVLINK_MSG_ID_202_MIN_LEN 32

#define MAVLINK_MSG_ID_VEHICLE_ATTITUDE_CRC 186
#define MAVLINK_MSG_ID_202_CRC 186



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_VEHICLE_ATTITUDE { \
    202, \
    "VEHICLE_ATTITUDE", \
    8, \
    {  { "q_w", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_vehicle_attitude_t, q_w) }, \
         { "q_x", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_vehicle_attitude_t, q_x) }, \
         { "q_y", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_vehicle_attitude_t, q_y) }, \
         { "q_z", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_vehicle_attitude_t, q_z) }, \
         { "delta_q_w", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_vehicle_attitude_t, delta_q_w) }, \
         { "delta_q_x", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_vehicle_attitude_t, delta_q_x) }, \
         { "delta_q_y", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_vehicle_attitude_t, delta_q_y) }, \
         { "delta_q_z", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_vehicle_attitude_t, delta_q_z) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_VEHICLE_ATTITUDE { \
    "VEHICLE_ATTITUDE", \
    8, \
    {  { "q_w", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_vehicle_attitude_t, q_w) }, \
         { "q_x", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_vehicle_attitude_t, q_x) }, \
         { "q_y", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_vehicle_attitude_t, q_y) }, \
         { "q_z", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_vehicle_attitude_t, q_z) }, \
         { "delta_q_w", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_vehicle_attitude_t, delta_q_w) }, \
         { "delta_q_x", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_vehicle_attitude_t, delta_q_x) }, \
         { "delta_q_y", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_vehicle_attitude_t, delta_q_y) }, \
         { "delta_q_z", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_vehicle_attitude_t, delta_q_z) }, \
         } \
}
#endif

/**
 * @brief Pack a vehicle_attitude message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param q_w  Quaternion rotation from the FRD body frame to the NED earth frame (w component).
 * @param q_x  Quaternion rotation from the FRD body frame to the NED earth frame (x component).
 * @param q_y  Quaternion rotation from the FRD body frame to the NED earth frame (y component).
 * @param q_z  Quaternion rotation from the FRD body frame to the NED earth frame (z component).
 * @param delta_q_w  Amount by which quaternion w has changed during last reset.
 * @param delta_q_x  Amount by which quaternion x has changed during last reset.
 * @param delta_q_y  Amount by which quaternion y has changed during last reset.
 * @param delta_q_z  Amount by which quaternion z has changed during last reset.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_vehicle_attitude_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               float q_w, float q_x, float q_y, float q_z, float delta_q_w, float delta_q_x, float delta_q_y, float delta_q_z)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_VEHICLE_ATTITUDE_LEN];
    _mav_put_float(buf, 0, q_w);
    _mav_put_float(buf, 4, q_x);
    _mav_put_float(buf, 8, q_y);
    _mav_put_float(buf, 12, q_z);
    _mav_put_float(buf, 16, delta_q_w);
    _mav_put_float(buf, 20, delta_q_x);
    _mav_put_float(buf, 24, delta_q_y);
    _mav_put_float(buf, 28, delta_q_z);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_VEHICLE_ATTITUDE_LEN);
#else
    mavlink_vehicle_attitude_t packet;
    packet.q_w = q_w;
    packet.q_x = q_x;
    packet.q_y = q_y;
    packet.q_z = q_z;
    packet.delta_q_w = delta_q_w;
    packet.delta_q_x = delta_q_x;
    packet.delta_q_y = delta_q_y;
    packet.delta_q_z = delta_q_z;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_VEHICLE_ATTITUDE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_VEHICLE_ATTITUDE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_VEHICLE_ATTITUDE_MIN_LEN, MAVLINK_MSG_ID_VEHICLE_ATTITUDE_LEN, MAVLINK_MSG_ID_VEHICLE_ATTITUDE_CRC);
}

/**
 * @brief Pack a vehicle_attitude message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param q_w  Quaternion rotation from the FRD body frame to the NED earth frame (w component).
 * @param q_x  Quaternion rotation from the FRD body frame to the NED earth frame (x component).
 * @param q_y  Quaternion rotation from the FRD body frame to the NED earth frame (y component).
 * @param q_z  Quaternion rotation from the FRD body frame to the NED earth frame (z component).
 * @param delta_q_w  Amount by which quaternion w has changed during last reset.
 * @param delta_q_x  Amount by which quaternion x has changed during last reset.
 * @param delta_q_y  Amount by which quaternion y has changed during last reset.
 * @param delta_q_z  Amount by which quaternion z has changed during last reset.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_vehicle_attitude_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               float q_w, float q_x, float q_y, float q_z, float delta_q_w, float delta_q_x, float delta_q_y, float delta_q_z)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_VEHICLE_ATTITUDE_LEN];
    _mav_put_float(buf, 0, q_w);
    _mav_put_float(buf, 4, q_x);
    _mav_put_float(buf, 8, q_y);
    _mav_put_float(buf, 12, q_z);
    _mav_put_float(buf, 16, delta_q_w);
    _mav_put_float(buf, 20, delta_q_x);
    _mav_put_float(buf, 24, delta_q_y);
    _mav_put_float(buf, 28, delta_q_z);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_VEHICLE_ATTITUDE_LEN);
#else
    mavlink_vehicle_attitude_t packet;
    packet.q_w = q_w;
    packet.q_x = q_x;
    packet.q_y = q_y;
    packet.q_z = q_z;
    packet.delta_q_w = delta_q_w;
    packet.delta_q_x = delta_q_x;
    packet.delta_q_y = delta_q_y;
    packet.delta_q_z = delta_q_z;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_VEHICLE_ATTITUDE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_VEHICLE_ATTITUDE;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_VEHICLE_ATTITUDE_MIN_LEN, MAVLINK_MSG_ID_VEHICLE_ATTITUDE_LEN, MAVLINK_MSG_ID_VEHICLE_ATTITUDE_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_VEHICLE_ATTITUDE_MIN_LEN, MAVLINK_MSG_ID_VEHICLE_ATTITUDE_LEN);
#endif
}

/**
 * @brief Pack a vehicle_attitude message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param q_w  Quaternion rotation from the FRD body frame to the NED earth frame (w component).
 * @param q_x  Quaternion rotation from the FRD body frame to the NED earth frame (x component).
 * @param q_y  Quaternion rotation from the FRD body frame to the NED earth frame (y component).
 * @param q_z  Quaternion rotation from the FRD body frame to the NED earth frame (z component).
 * @param delta_q_w  Amount by which quaternion w has changed during last reset.
 * @param delta_q_x  Amount by which quaternion x has changed during last reset.
 * @param delta_q_y  Amount by which quaternion y has changed during last reset.
 * @param delta_q_z  Amount by which quaternion z has changed during last reset.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_vehicle_attitude_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   float q_w,float q_x,float q_y,float q_z,float delta_q_w,float delta_q_x,float delta_q_y,float delta_q_z)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_VEHICLE_ATTITUDE_LEN];
    _mav_put_float(buf, 0, q_w);
    _mav_put_float(buf, 4, q_x);
    _mav_put_float(buf, 8, q_y);
    _mav_put_float(buf, 12, q_z);
    _mav_put_float(buf, 16, delta_q_w);
    _mav_put_float(buf, 20, delta_q_x);
    _mav_put_float(buf, 24, delta_q_y);
    _mav_put_float(buf, 28, delta_q_z);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_VEHICLE_ATTITUDE_LEN);
#else
    mavlink_vehicle_attitude_t packet;
    packet.q_w = q_w;
    packet.q_x = q_x;
    packet.q_y = q_y;
    packet.q_z = q_z;
    packet.delta_q_w = delta_q_w;
    packet.delta_q_x = delta_q_x;
    packet.delta_q_y = delta_q_y;
    packet.delta_q_z = delta_q_z;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_VEHICLE_ATTITUDE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_VEHICLE_ATTITUDE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_VEHICLE_ATTITUDE_MIN_LEN, MAVLINK_MSG_ID_VEHICLE_ATTITUDE_LEN, MAVLINK_MSG_ID_VEHICLE_ATTITUDE_CRC);
}

/**
 * @brief Encode a vehicle_attitude struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param vehicle_attitude C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_vehicle_attitude_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_vehicle_attitude_t* vehicle_attitude)
{
    return mavlink_msg_vehicle_attitude_pack(system_id, component_id, msg, vehicle_attitude->q_w, vehicle_attitude->q_x, vehicle_attitude->q_y, vehicle_attitude->q_z, vehicle_attitude->delta_q_w, vehicle_attitude->delta_q_x, vehicle_attitude->delta_q_y, vehicle_attitude->delta_q_z);
}

/**
 * @brief Encode a vehicle_attitude struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param vehicle_attitude C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_vehicle_attitude_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_vehicle_attitude_t* vehicle_attitude)
{
    return mavlink_msg_vehicle_attitude_pack_chan(system_id, component_id, chan, msg, vehicle_attitude->q_w, vehicle_attitude->q_x, vehicle_attitude->q_y, vehicle_attitude->q_z, vehicle_attitude->delta_q_w, vehicle_attitude->delta_q_x, vehicle_attitude->delta_q_y, vehicle_attitude->delta_q_z);
}

/**
 * @brief Encode a vehicle_attitude struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param vehicle_attitude C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_vehicle_attitude_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_vehicle_attitude_t* vehicle_attitude)
{
    return mavlink_msg_vehicle_attitude_pack_status(system_id, component_id, _status, msg,  vehicle_attitude->q_w, vehicle_attitude->q_x, vehicle_attitude->q_y, vehicle_attitude->q_z, vehicle_attitude->delta_q_w, vehicle_attitude->delta_q_x, vehicle_attitude->delta_q_y, vehicle_attitude->delta_q_z);
}

/**
 * @brief Send a vehicle_attitude message
 * @param chan MAVLink channel to send the message
 *
 * @param q_w  Quaternion rotation from the FRD body frame to the NED earth frame (w component).
 * @param q_x  Quaternion rotation from the FRD body frame to the NED earth frame (x component).
 * @param q_y  Quaternion rotation from the FRD body frame to the NED earth frame (y component).
 * @param q_z  Quaternion rotation from the FRD body frame to the NED earth frame (z component).
 * @param delta_q_w  Amount by which quaternion w has changed during last reset.
 * @param delta_q_x  Amount by which quaternion x has changed during last reset.
 * @param delta_q_y  Amount by which quaternion y has changed during last reset.
 * @param delta_q_z  Amount by which quaternion z has changed during last reset.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_vehicle_attitude_send(mavlink_channel_t chan, float q_w, float q_x, float q_y, float q_z, float delta_q_w, float delta_q_x, float delta_q_y, float delta_q_z)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_VEHICLE_ATTITUDE_LEN];
    _mav_put_float(buf, 0, q_w);
    _mav_put_float(buf, 4, q_x);
    _mav_put_float(buf, 8, q_y);
    _mav_put_float(buf, 12, q_z);
    _mav_put_float(buf, 16, delta_q_w);
    _mav_put_float(buf, 20, delta_q_x);
    _mav_put_float(buf, 24, delta_q_y);
    _mav_put_float(buf, 28, delta_q_z);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VEHICLE_ATTITUDE, buf, MAVLINK_MSG_ID_VEHICLE_ATTITUDE_MIN_LEN, MAVLINK_MSG_ID_VEHICLE_ATTITUDE_LEN, MAVLINK_MSG_ID_VEHICLE_ATTITUDE_CRC);
#else
    mavlink_vehicle_attitude_t packet;
    packet.q_w = q_w;
    packet.q_x = q_x;
    packet.q_y = q_y;
    packet.q_z = q_z;
    packet.delta_q_w = delta_q_w;
    packet.delta_q_x = delta_q_x;
    packet.delta_q_y = delta_q_y;
    packet.delta_q_z = delta_q_z;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VEHICLE_ATTITUDE, (const char *)&packet, MAVLINK_MSG_ID_VEHICLE_ATTITUDE_MIN_LEN, MAVLINK_MSG_ID_VEHICLE_ATTITUDE_LEN, MAVLINK_MSG_ID_VEHICLE_ATTITUDE_CRC);
#endif
}

/**
 * @brief Send a vehicle_attitude message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_vehicle_attitude_send_struct(mavlink_channel_t chan, const mavlink_vehicle_attitude_t* vehicle_attitude)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_vehicle_attitude_send(chan, vehicle_attitude->q_w, vehicle_attitude->q_x, vehicle_attitude->q_y, vehicle_attitude->q_z, vehicle_attitude->delta_q_w, vehicle_attitude->delta_q_x, vehicle_attitude->delta_q_y, vehicle_attitude->delta_q_z);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VEHICLE_ATTITUDE, (const char *)vehicle_attitude, MAVLINK_MSG_ID_VEHICLE_ATTITUDE_MIN_LEN, MAVLINK_MSG_ID_VEHICLE_ATTITUDE_LEN, MAVLINK_MSG_ID_VEHICLE_ATTITUDE_CRC);
#endif
}

#if MAVLINK_MSG_ID_VEHICLE_ATTITUDE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_vehicle_attitude_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  float q_w, float q_x, float q_y, float q_z, float delta_q_w, float delta_q_x, float delta_q_y, float delta_q_z)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, q_w);
    _mav_put_float(buf, 4, q_x);
    _mav_put_float(buf, 8, q_y);
    _mav_put_float(buf, 12, q_z);
    _mav_put_float(buf, 16, delta_q_w);
    _mav_put_float(buf, 20, delta_q_x);
    _mav_put_float(buf, 24, delta_q_y);
    _mav_put_float(buf, 28, delta_q_z);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VEHICLE_ATTITUDE, buf, MAVLINK_MSG_ID_VEHICLE_ATTITUDE_MIN_LEN, MAVLINK_MSG_ID_VEHICLE_ATTITUDE_LEN, MAVLINK_MSG_ID_VEHICLE_ATTITUDE_CRC);
#else
    mavlink_vehicle_attitude_t *packet = (mavlink_vehicle_attitude_t *)msgbuf;
    packet->q_w = q_w;
    packet->q_x = q_x;
    packet->q_y = q_y;
    packet->q_z = q_z;
    packet->delta_q_w = delta_q_w;
    packet->delta_q_x = delta_q_x;
    packet->delta_q_y = delta_q_y;
    packet->delta_q_z = delta_q_z;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VEHICLE_ATTITUDE, (const char *)packet, MAVLINK_MSG_ID_VEHICLE_ATTITUDE_MIN_LEN, MAVLINK_MSG_ID_VEHICLE_ATTITUDE_LEN, MAVLINK_MSG_ID_VEHICLE_ATTITUDE_CRC);
#endif
}
#endif

#endif

// MESSAGE VEHICLE_ATTITUDE UNPACKING


/**
 * @brief Get field q_w from vehicle_attitude message
 *
 * @return  Quaternion rotation from the FRD body frame to the NED earth frame (w component).
 */
static inline float mavlink_msg_vehicle_attitude_get_q_w(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field q_x from vehicle_attitude message
 *
 * @return  Quaternion rotation from the FRD body frame to the NED earth frame (x component).
 */
static inline float mavlink_msg_vehicle_attitude_get_q_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field q_y from vehicle_attitude message
 *
 * @return  Quaternion rotation from the FRD body frame to the NED earth frame (y component).
 */
static inline float mavlink_msg_vehicle_attitude_get_q_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field q_z from vehicle_attitude message
 *
 * @return  Quaternion rotation from the FRD body frame to the NED earth frame (z component).
 */
static inline float mavlink_msg_vehicle_attitude_get_q_z(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field delta_q_w from vehicle_attitude message
 *
 * @return  Amount by which quaternion w has changed during last reset.
 */
static inline float mavlink_msg_vehicle_attitude_get_delta_q_w(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field delta_q_x from vehicle_attitude message
 *
 * @return  Amount by which quaternion x has changed during last reset.
 */
static inline float mavlink_msg_vehicle_attitude_get_delta_q_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field delta_q_y from vehicle_attitude message
 *
 * @return  Amount by which quaternion y has changed during last reset.
 */
static inline float mavlink_msg_vehicle_attitude_get_delta_q_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field delta_q_z from vehicle_attitude message
 *
 * @return  Amount by which quaternion z has changed during last reset.
 */
static inline float mavlink_msg_vehicle_attitude_get_delta_q_z(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Decode a vehicle_attitude message into a struct
 *
 * @param msg The message to decode
 * @param vehicle_attitude C-struct to decode the message contents into
 */
static inline void mavlink_msg_vehicle_attitude_decode(const mavlink_message_t* msg, mavlink_vehicle_attitude_t* vehicle_attitude)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    vehicle_attitude->q_w = mavlink_msg_vehicle_attitude_get_q_w(msg);
    vehicle_attitude->q_x = mavlink_msg_vehicle_attitude_get_q_x(msg);
    vehicle_attitude->q_y = mavlink_msg_vehicle_attitude_get_q_y(msg);
    vehicle_attitude->q_z = mavlink_msg_vehicle_attitude_get_q_z(msg);
    vehicle_attitude->delta_q_w = mavlink_msg_vehicle_attitude_get_delta_q_w(msg);
    vehicle_attitude->delta_q_x = mavlink_msg_vehicle_attitude_get_delta_q_x(msg);
    vehicle_attitude->delta_q_y = mavlink_msg_vehicle_attitude_get_delta_q_y(msg);
    vehicle_attitude->delta_q_z = mavlink_msg_vehicle_attitude_get_delta_q_z(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_VEHICLE_ATTITUDE_LEN? msg->len : MAVLINK_MSG_ID_VEHICLE_ATTITUDE_LEN;
        memset(vehicle_attitude, 0, MAVLINK_MSG_ID_VEHICLE_ATTITUDE_LEN);
    memcpy(vehicle_attitude, _MAV_PAYLOAD(msg), len);
#endif
}
