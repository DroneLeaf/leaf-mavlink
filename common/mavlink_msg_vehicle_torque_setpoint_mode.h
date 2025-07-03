#pragma once
// MESSAGE VEHICLE_TORQUE_SETPOINT_MODE PACKING

#define MAVLINK_MSG_ID_VEHICLE_TORQUE_SETPOINT_MODE 209


typedef struct __mavlink_vehicle_torque_setpoint_mode_t {
 float xyz[3]; /*<  torque setpoint about X, Y, Z body axis*/
} mavlink_vehicle_torque_setpoint_mode_t;

#define MAVLINK_MSG_ID_VEHICLE_TORQUE_SETPOINT_MODE_LEN 12
#define MAVLINK_MSG_ID_VEHICLE_TORQUE_SETPOINT_MODE_MIN_LEN 12
#define MAVLINK_MSG_ID_209_LEN 12
#define MAVLINK_MSG_ID_209_MIN_LEN 12

#define MAVLINK_MSG_ID_VEHICLE_TORQUE_SETPOINT_MODE_CRC 200
#define MAVLINK_MSG_ID_209_CRC 200

#define MAVLINK_MSG_VEHICLE_TORQUE_SETPOINT_MODE_FIELD_XYZ_LEN 3

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_VEHICLE_TORQUE_SETPOINT_MODE { \
    209, \
    "VEHICLE_TORQUE_SETPOINT_MODE", \
    1, \
    {  { "xyz", NULL, MAVLINK_TYPE_FLOAT, 3, 0, offsetof(mavlink_vehicle_torque_setpoint_mode_t, xyz) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_VEHICLE_TORQUE_SETPOINT_MODE { \
    "VEHICLE_TORQUE_SETPOINT_MODE", \
    1, \
    {  { "xyz", NULL, MAVLINK_TYPE_FLOAT, 3, 0, offsetof(mavlink_vehicle_torque_setpoint_mode_t, xyz) }, \
         } \
}
#endif

/**
 * @brief Pack a vehicle_torque_setpoint_mode message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param xyz  torque setpoint about X, Y, Z body axis
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_vehicle_torque_setpoint_mode_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               const float *xyz)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_VEHICLE_TORQUE_SETPOINT_MODE_LEN];

    _mav_put_float_array(buf, 0, xyz, 3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_VEHICLE_TORQUE_SETPOINT_MODE_LEN);
#else
    mavlink_vehicle_torque_setpoint_mode_t packet;

    mav_array_assign_float(packet.xyz, xyz, 3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_VEHICLE_TORQUE_SETPOINT_MODE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_VEHICLE_TORQUE_SETPOINT_MODE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_VEHICLE_TORQUE_SETPOINT_MODE_MIN_LEN, MAVLINK_MSG_ID_VEHICLE_TORQUE_SETPOINT_MODE_LEN, MAVLINK_MSG_ID_VEHICLE_TORQUE_SETPOINT_MODE_CRC);
}

/**
 * @brief Pack a vehicle_torque_setpoint_mode message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param xyz  torque setpoint about X, Y, Z body axis
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_vehicle_torque_setpoint_mode_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               const float *xyz)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_VEHICLE_TORQUE_SETPOINT_MODE_LEN];

    _mav_put_float_array(buf, 0, xyz, 3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_VEHICLE_TORQUE_SETPOINT_MODE_LEN);
#else
    mavlink_vehicle_torque_setpoint_mode_t packet;

    mav_array_memcpy(packet.xyz, xyz, sizeof(float)*3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_VEHICLE_TORQUE_SETPOINT_MODE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_VEHICLE_TORQUE_SETPOINT_MODE;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_VEHICLE_TORQUE_SETPOINT_MODE_MIN_LEN, MAVLINK_MSG_ID_VEHICLE_TORQUE_SETPOINT_MODE_LEN, MAVLINK_MSG_ID_VEHICLE_TORQUE_SETPOINT_MODE_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_VEHICLE_TORQUE_SETPOINT_MODE_MIN_LEN, MAVLINK_MSG_ID_VEHICLE_TORQUE_SETPOINT_MODE_LEN);
#endif
}

/**
 * @brief Pack a vehicle_torque_setpoint_mode message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param xyz  torque setpoint about X, Y, Z body axis
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_vehicle_torque_setpoint_mode_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   const float *xyz)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_VEHICLE_TORQUE_SETPOINT_MODE_LEN];

    _mav_put_float_array(buf, 0, xyz, 3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_VEHICLE_TORQUE_SETPOINT_MODE_LEN);
#else
    mavlink_vehicle_torque_setpoint_mode_t packet;

    mav_array_assign_float(packet.xyz, xyz, 3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_VEHICLE_TORQUE_SETPOINT_MODE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_VEHICLE_TORQUE_SETPOINT_MODE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_VEHICLE_TORQUE_SETPOINT_MODE_MIN_LEN, MAVLINK_MSG_ID_VEHICLE_TORQUE_SETPOINT_MODE_LEN, MAVLINK_MSG_ID_VEHICLE_TORQUE_SETPOINT_MODE_CRC);
}

/**
 * @brief Encode a vehicle_torque_setpoint_mode struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param vehicle_torque_setpoint_mode C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_vehicle_torque_setpoint_mode_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_vehicle_torque_setpoint_mode_t* vehicle_torque_setpoint_mode)
{
    return mavlink_msg_vehicle_torque_setpoint_mode_pack(system_id, component_id, msg, vehicle_torque_setpoint_mode->xyz);
}

/**
 * @brief Encode a vehicle_torque_setpoint_mode struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param vehicle_torque_setpoint_mode C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_vehicle_torque_setpoint_mode_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_vehicle_torque_setpoint_mode_t* vehicle_torque_setpoint_mode)
{
    return mavlink_msg_vehicle_torque_setpoint_mode_pack_chan(system_id, component_id, chan, msg, vehicle_torque_setpoint_mode->xyz);
}

/**
 * @brief Encode a vehicle_torque_setpoint_mode struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param vehicle_torque_setpoint_mode C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_vehicle_torque_setpoint_mode_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_vehicle_torque_setpoint_mode_t* vehicle_torque_setpoint_mode)
{
    return mavlink_msg_vehicle_torque_setpoint_mode_pack_status(system_id, component_id, _status, msg,  vehicle_torque_setpoint_mode->xyz);
}

/**
 * @brief Send a vehicle_torque_setpoint_mode message
 * @param chan MAVLink channel to send the message
 *
 * @param xyz  torque setpoint about X, Y, Z body axis
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_vehicle_torque_setpoint_mode_send(mavlink_channel_t chan, const float *xyz)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_VEHICLE_TORQUE_SETPOINT_MODE_LEN];

    _mav_put_float_array(buf, 0, xyz, 3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VEHICLE_TORQUE_SETPOINT_MODE, buf, MAVLINK_MSG_ID_VEHICLE_TORQUE_SETPOINT_MODE_MIN_LEN, MAVLINK_MSG_ID_VEHICLE_TORQUE_SETPOINT_MODE_LEN, MAVLINK_MSG_ID_VEHICLE_TORQUE_SETPOINT_MODE_CRC);
#else
    mavlink_vehicle_torque_setpoint_mode_t packet;

    mav_array_assign_float(packet.xyz, xyz, 3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VEHICLE_TORQUE_SETPOINT_MODE, (const char *)&packet, MAVLINK_MSG_ID_VEHICLE_TORQUE_SETPOINT_MODE_MIN_LEN, MAVLINK_MSG_ID_VEHICLE_TORQUE_SETPOINT_MODE_LEN, MAVLINK_MSG_ID_VEHICLE_TORQUE_SETPOINT_MODE_CRC);
#endif
}

/**
 * @brief Send a vehicle_torque_setpoint_mode message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_vehicle_torque_setpoint_mode_send_struct(mavlink_channel_t chan, const mavlink_vehicle_torque_setpoint_mode_t* vehicle_torque_setpoint_mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_vehicle_torque_setpoint_mode_send(chan, vehicle_torque_setpoint_mode->xyz);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VEHICLE_TORQUE_SETPOINT_MODE, (const char *)vehicle_torque_setpoint_mode, MAVLINK_MSG_ID_VEHICLE_TORQUE_SETPOINT_MODE_MIN_LEN, MAVLINK_MSG_ID_VEHICLE_TORQUE_SETPOINT_MODE_LEN, MAVLINK_MSG_ID_VEHICLE_TORQUE_SETPOINT_MODE_CRC);
#endif
}

#if MAVLINK_MSG_ID_VEHICLE_TORQUE_SETPOINT_MODE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_vehicle_torque_setpoint_mode_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  const float *xyz)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;

    _mav_put_float_array(buf, 0, xyz, 3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VEHICLE_TORQUE_SETPOINT_MODE, buf, MAVLINK_MSG_ID_VEHICLE_TORQUE_SETPOINT_MODE_MIN_LEN, MAVLINK_MSG_ID_VEHICLE_TORQUE_SETPOINT_MODE_LEN, MAVLINK_MSG_ID_VEHICLE_TORQUE_SETPOINT_MODE_CRC);
#else
    mavlink_vehicle_torque_setpoint_mode_t *packet = (mavlink_vehicle_torque_setpoint_mode_t *)msgbuf;

    mav_array_assign_float(packet->xyz, xyz, 3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VEHICLE_TORQUE_SETPOINT_MODE, (const char *)packet, MAVLINK_MSG_ID_VEHICLE_TORQUE_SETPOINT_MODE_MIN_LEN, MAVLINK_MSG_ID_VEHICLE_TORQUE_SETPOINT_MODE_LEN, MAVLINK_MSG_ID_VEHICLE_TORQUE_SETPOINT_MODE_CRC);
#endif
}
#endif

#endif

// MESSAGE VEHICLE_TORQUE_SETPOINT_MODE UNPACKING


/**
 * @brief Get field xyz from vehicle_torque_setpoint_mode message
 *
 * @return  torque setpoint about X, Y, Z body axis
 */
static inline uint16_t mavlink_msg_vehicle_torque_setpoint_mode_get_xyz(const mavlink_message_t* msg, float *xyz)
{
    return _MAV_RETURN_float_array(msg, xyz, 3,  0);
}

/**
 * @brief Decode a vehicle_torque_setpoint_mode message into a struct
 *
 * @param msg The message to decode
 * @param vehicle_torque_setpoint_mode C-struct to decode the message contents into
 */
static inline void mavlink_msg_vehicle_torque_setpoint_mode_decode(const mavlink_message_t* msg, mavlink_vehicle_torque_setpoint_mode_t* vehicle_torque_setpoint_mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_vehicle_torque_setpoint_mode_get_xyz(msg, vehicle_torque_setpoint_mode->xyz);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_VEHICLE_TORQUE_SETPOINT_MODE_LEN? msg->len : MAVLINK_MSG_ID_VEHICLE_TORQUE_SETPOINT_MODE_LEN;
        memset(vehicle_torque_setpoint_mode, 0, MAVLINK_MSG_ID_VEHICLE_TORQUE_SETPOINT_MODE_LEN);
    memcpy(vehicle_torque_setpoint_mode, _MAV_PAYLOAD(msg), len);
#endif
}
