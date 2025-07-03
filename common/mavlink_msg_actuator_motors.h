#pragma once
// MESSAGE ACTUATOR_MOTORS PACKING

#define MAVLINK_MSG_ID_ACTUATOR_MOTORS 211


typedef struct __mavlink_actuator_motors_t {
 float control[12]; /*<  range: [-1, 1]*/
} mavlink_actuator_motors_t;

#define MAVLINK_MSG_ID_ACTUATOR_MOTORS_LEN 48
#define MAVLINK_MSG_ID_ACTUATOR_MOTORS_MIN_LEN 48
#define MAVLINK_MSG_ID_211_LEN 48
#define MAVLINK_MSG_ID_211_MIN_LEN 48

#define MAVLINK_MSG_ID_ACTUATOR_MOTORS_CRC 113
#define MAVLINK_MSG_ID_211_CRC 113

#define MAVLINK_MSG_ACTUATOR_MOTORS_FIELD_CONTROL_LEN 12

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ACTUATOR_MOTORS { \
    211, \
    "ACTUATOR_MOTORS", \
    1, \
    {  { "control", NULL, MAVLINK_TYPE_FLOAT, 12, 0, offsetof(mavlink_actuator_motors_t, control) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ACTUATOR_MOTORS { \
    "ACTUATOR_MOTORS", \
    1, \
    {  { "control", NULL, MAVLINK_TYPE_FLOAT, 12, 0, offsetof(mavlink_actuator_motors_t, control) }, \
         } \
}
#endif

/**
 * @brief Pack a actuator_motors message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param control  range: [-1, 1]
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_actuator_motors_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               const float *control)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ACTUATOR_MOTORS_LEN];

    _mav_put_float_array(buf, 0, control, 12);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ACTUATOR_MOTORS_LEN);
#else
    mavlink_actuator_motors_t packet;

    mav_array_assign_float(packet.control, control, 12);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ACTUATOR_MOTORS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ACTUATOR_MOTORS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ACTUATOR_MOTORS_MIN_LEN, MAVLINK_MSG_ID_ACTUATOR_MOTORS_LEN, MAVLINK_MSG_ID_ACTUATOR_MOTORS_CRC);
}

/**
 * @brief Pack a actuator_motors message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param control  range: [-1, 1]
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_actuator_motors_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               const float *control)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ACTUATOR_MOTORS_LEN];

    _mav_put_float_array(buf, 0, control, 12);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ACTUATOR_MOTORS_LEN);
#else
    mavlink_actuator_motors_t packet;

    mav_array_memcpy(packet.control, control, sizeof(float)*12);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ACTUATOR_MOTORS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ACTUATOR_MOTORS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_ACTUATOR_MOTORS_MIN_LEN, MAVLINK_MSG_ID_ACTUATOR_MOTORS_LEN, MAVLINK_MSG_ID_ACTUATOR_MOTORS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_ACTUATOR_MOTORS_MIN_LEN, MAVLINK_MSG_ID_ACTUATOR_MOTORS_LEN);
#endif
}

/**
 * @brief Pack a actuator_motors message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param control  range: [-1, 1]
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_actuator_motors_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   const float *control)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ACTUATOR_MOTORS_LEN];

    _mav_put_float_array(buf, 0, control, 12);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ACTUATOR_MOTORS_LEN);
#else
    mavlink_actuator_motors_t packet;

    mav_array_assign_float(packet.control, control, 12);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ACTUATOR_MOTORS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ACTUATOR_MOTORS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ACTUATOR_MOTORS_MIN_LEN, MAVLINK_MSG_ID_ACTUATOR_MOTORS_LEN, MAVLINK_MSG_ID_ACTUATOR_MOTORS_CRC);
}

/**
 * @brief Encode a actuator_motors struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param actuator_motors C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_actuator_motors_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_actuator_motors_t* actuator_motors)
{
    return mavlink_msg_actuator_motors_pack(system_id, component_id, msg, actuator_motors->control);
}

/**
 * @brief Encode a actuator_motors struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param actuator_motors C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_actuator_motors_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_actuator_motors_t* actuator_motors)
{
    return mavlink_msg_actuator_motors_pack_chan(system_id, component_id, chan, msg, actuator_motors->control);
}

/**
 * @brief Encode a actuator_motors struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param actuator_motors C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_actuator_motors_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_actuator_motors_t* actuator_motors)
{
    return mavlink_msg_actuator_motors_pack_status(system_id, component_id, _status, msg,  actuator_motors->control);
}

/**
 * @brief Send a actuator_motors message
 * @param chan MAVLink channel to send the message
 *
 * @param control  range: [-1, 1]
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_actuator_motors_send(mavlink_channel_t chan, const float *control)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ACTUATOR_MOTORS_LEN];

    _mav_put_float_array(buf, 0, control, 12);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ACTUATOR_MOTORS, buf, MAVLINK_MSG_ID_ACTUATOR_MOTORS_MIN_LEN, MAVLINK_MSG_ID_ACTUATOR_MOTORS_LEN, MAVLINK_MSG_ID_ACTUATOR_MOTORS_CRC);
#else
    mavlink_actuator_motors_t packet;

    mav_array_assign_float(packet.control, control, 12);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ACTUATOR_MOTORS, (const char *)&packet, MAVLINK_MSG_ID_ACTUATOR_MOTORS_MIN_LEN, MAVLINK_MSG_ID_ACTUATOR_MOTORS_LEN, MAVLINK_MSG_ID_ACTUATOR_MOTORS_CRC);
#endif
}

/**
 * @brief Send a actuator_motors message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_actuator_motors_send_struct(mavlink_channel_t chan, const mavlink_actuator_motors_t* actuator_motors)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_actuator_motors_send(chan, actuator_motors->control);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ACTUATOR_MOTORS, (const char *)actuator_motors, MAVLINK_MSG_ID_ACTUATOR_MOTORS_MIN_LEN, MAVLINK_MSG_ID_ACTUATOR_MOTORS_LEN, MAVLINK_MSG_ID_ACTUATOR_MOTORS_CRC);
#endif
}

#if MAVLINK_MSG_ID_ACTUATOR_MOTORS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_actuator_motors_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  const float *control)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;

    _mav_put_float_array(buf, 0, control, 12);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ACTUATOR_MOTORS, buf, MAVLINK_MSG_ID_ACTUATOR_MOTORS_MIN_LEN, MAVLINK_MSG_ID_ACTUATOR_MOTORS_LEN, MAVLINK_MSG_ID_ACTUATOR_MOTORS_CRC);
#else
    mavlink_actuator_motors_t *packet = (mavlink_actuator_motors_t *)msgbuf;

    mav_array_assign_float(packet->control, control, 12);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ACTUATOR_MOTORS, (const char *)packet, MAVLINK_MSG_ID_ACTUATOR_MOTORS_MIN_LEN, MAVLINK_MSG_ID_ACTUATOR_MOTORS_LEN, MAVLINK_MSG_ID_ACTUATOR_MOTORS_CRC);
#endif
}
#endif

#endif

// MESSAGE ACTUATOR_MOTORS UNPACKING


/**
 * @brief Get field control from actuator_motors message
 *
 * @return  range: [-1, 1]
 */
static inline uint16_t mavlink_msg_actuator_motors_get_control(const mavlink_message_t* msg, float *control)
{
    return _MAV_RETURN_float_array(msg, control, 12,  0);
}

/**
 * @brief Decode a actuator_motors message into a struct
 *
 * @param msg The message to decode
 * @param actuator_motors C-struct to decode the message contents into
 */
static inline void mavlink_msg_actuator_motors_decode(const mavlink_message_t* msg, mavlink_actuator_motors_t* actuator_motors)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_actuator_motors_get_control(msg, actuator_motors->control);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ACTUATOR_MOTORS_LEN? msg->len : MAVLINK_MSG_ID_ACTUATOR_MOTORS_LEN;
        memset(actuator_motors, 0, MAVLINK_MSG_ID_ACTUATOR_MOTORS_LEN);
    memcpy(actuator_motors, _MAV_PAYLOAD(msg), len);
#endif
}
