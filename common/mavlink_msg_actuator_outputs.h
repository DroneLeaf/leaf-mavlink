#pragma once
// MESSAGE ACTUATOR_OUTPUTS PACKING

#define MAVLINK_MSG_ID_ACTUATOR_OUTPUTS 208


typedef struct __mavlink_actuator_outputs_t {
 uint32_t noutputs; /*<  valid outputs*/
 float output[16]; /*<  output data, in natural output units*/
} mavlink_actuator_outputs_t;

#define MAVLINK_MSG_ID_ACTUATOR_OUTPUTS_LEN 68
#define MAVLINK_MSG_ID_ACTUATOR_OUTPUTS_MIN_LEN 68
#define MAVLINK_MSG_ID_208_LEN 68
#define MAVLINK_MSG_ID_208_MIN_LEN 68

#define MAVLINK_MSG_ID_ACTUATOR_OUTPUTS_CRC 53
#define MAVLINK_MSG_ID_208_CRC 53

#define MAVLINK_MSG_ACTUATOR_OUTPUTS_FIELD_OUTPUT_LEN 16

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ACTUATOR_OUTPUTS { \
    208, \
    "ACTUATOR_OUTPUTS", \
    2, \
    {  { "noutputs", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_actuator_outputs_t, noutputs) }, \
         { "output", NULL, MAVLINK_TYPE_FLOAT, 16, 4, offsetof(mavlink_actuator_outputs_t, output) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ACTUATOR_OUTPUTS { \
    "ACTUATOR_OUTPUTS", \
    2, \
    {  { "noutputs", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_actuator_outputs_t, noutputs) }, \
         { "output", NULL, MAVLINK_TYPE_FLOAT, 16, 4, offsetof(mavlink_actuator_outputs_t, output) }, \
         } \
}
#endif

/**
 * @brief Pack a actuator_outputs message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param noutputs  valid outputs
 * @param output  output data, in natural output units
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_actuator_outputs_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t noutputs, const float *output)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ACTUATOR_OUTPUTS_LEN];
    _mav_put_uint32_t(buf, 0, noutputs);
    _mav_put_float_array(buf, 4, output, 16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ACTUATOR_OUTPUTS_LEN);
#else
    mavlink_actuator_outputs_t packet;
    packet.noutputs = noutputs;
    mav_array_assign_float(packet.output, output, 16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ACTUATOR_OUTPUTS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ACTUATOR_OUTPUTS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ACTUATOR_OUTPUTS_MIN_LEN, MAVLINK_MSG_ID_ACTUATOR_OUTPUTS_LEN, MAVLINK_MSG_ID_ACTUATOR_OUTPUTS_CRC);
}

/**
 * @brief Pack a actuator_outputs message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param noutputs  valid outputs
 * @param output  output data, in natural output units
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_actuator_outputs_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint32_t noutputs, const float *output)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ACTUATOR_OUTPUTS_LEN];
    _mav_put_uint32_t(buf, 0, noutputs);
    _mav_put_float_array(buf, 4, output, 16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ACTUATOR_OUTPUTS_LEN);
#else
    mavlink_actuator_outputs_t packet;
    packet.noutputs = noutputs;
    mav_array_memcpy(packet.output, output, sizeof(float)*16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ACTUATOR_OUTPUTS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ACTUATOR_OUTPUTS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_ACTUATOR_OUTPUTS_MIN_LEN, MAVLINK_MSG_ID_ACTUATOR_OUTPUTS_LEN, MAVLINK_MSG_ID_ACTUATOR_OUTPUTS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_ACTUATOR_OUTPUTS_MIN_LEN, MAVLINK_MSG_ID_ACTUATOR_OUTPUTS_LEN);
#endif
}

/**
 * @brief Pack a actuator_outputs message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param noutputs  valid outputs
 * @param output  output data, in natural output units
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_actuator_outputs_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t noutputs,const float *output)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ACTUATOR_OUTPUTS_LEN];
    _mav_put_uint32_t(buf, 0, noutputs);
    _mav_put_float_array(buf, 4, output, 16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ACTUATOR_OUTPUTS_LEN);
#else
    mavlink_actuator_outputs_t packet;
    packet.noutputs = noutputs;
    mav_array_assign_float(packet.output, output, 16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ACTUATOR_OUTPUTS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ACTUATOR_OUTPUTS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ACTUATOR_OUTPUTS_MIN_LEN, MAVLINK_MSG_ID_ACTUATOR_OUTPUTS_LEN, MAVLINK_MSG_ID_ACTUATOR_OUTPUTS_CRC);
}

/**
 * @brief Encode a actuator_outputs struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param actuator_outputs C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_actuator_outputs_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_actuator_outputs_t* actuator_outputs)
{
    return mavlink_msg_actuator_outputs_pack(system_id, component_id, msg, actuator_outputs->noutputs, actuator_outputs->output);
}

/**
 * @brief Encode a actuator_outputs struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param actuator_outputs C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_actuator_outputs_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_actuator_outputs_t* actuator_outputs)
{
    return mavlink_msg_actuator_outputs_pack_chan(system_id, component_id, chan, msg, actuator_outputs->noutputs, actuator_outputs->output);
}

/**
 * @brief Encode a actuator_outputs struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param actuator_outputs C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_actuator_outputs_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_actuator_outputs_t* actuator_outputs)
{
    return mavlink_msg_actuator_outputs_pack_status(system_id, component_id, _status, msg,  actuator_outputs->noutputs, actuator_outputs->output);
}

/**
 * @brief Send a actuator_outputs message
 * @param chan MAVLink channel to send the message
 *
 * @param noutputs  valid outputs
 * @param output  output data, in natural output units
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_actuator_outputs_send(mavlink_channel_t chan, uint32_t noutputs, const float *output)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ACTUATOR_OUTPUTS_LEN];
    _mav_put_uint32_t(buf, 0, noutputs);
    _mav_put_float_array(buf, 4, output, 16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ACTUATOR_OUTPUTS, buf, MAVLINK_MSG_ID_ACTUATOR_OUTPUTS_MIN_LEN, MAVLINK_MSG_ID_ACTUATOR_OUTPUTS_LEN, MAVLINK_MSG_ID_ACTUATOR_OUTPUTS_CRC);
#else
    mavlink_actuator_outputs_t packet;
    packet.noutputs = noutputs;
    mav_array_assign_float(packet.output, output, 16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ACTUATOR_OUTPUTS, (const char *)&packet, MAVLINK_MSG_ID_ACTUATOR_OUTPUTS_MIN_LEN, MAVLINK_MSG_ID_ACTUATOR_OUTPUTS_LEN, MAVLINK_MSG_ID_ACTUATOR_OUTPUTS_CRC);
#endif
}

/**
 * @brief Send a actuator_outputs message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_actuator_outputs_send_struct(mavlink_channel_t chan, const mavlink_actuator_outputs_t* actuator_outputs)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_actuator_outputs_send(chan, actuator_outputs->noutputs, actuator_outputs->output);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ACTUATOR_OUTPUTS, (const char *)actuator_outputs, MAVLINK_MSG_ID_ACTUATOR_OUTPUTS_MIN_LEN, MAVLINK_MSG_ID_ACTUATOR_OUTPUTS_LEN, MAVLINK_MSG_ID_ACTUATOR_OUTPUTS_CRC);
#endif
}

#if MAVLINK_MSG_ID_ACTUATOR_OUTPUTS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_actuator_outputs_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t noutputs, const float *output)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, noutputs);
    _mav_put_float_array(buf, 4, output, 16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ACTUATOR_OUTPUTS, buf, MAVLINK_MSG_ID_ACTUATOR_OUTPUTS_MIN_LEN, MAVLINK_MSG_ID_ACTUATOR_OUTPUTS_LEN, MAVLINK_MSG_ID_ACTUATOR_OUTPUTS_CRC);
#else
    mavlink_actuator_outputs_t *packet = (mavlink_actuator_outputs_t *)msgbuf;
    packet->noutputs = noutputs;
    mav_array_assign_float(packet->output, output, 16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ACTUATOR_OUTPUTS, (const char *)packet, MAVLINK_MSG_ID_ACTUATOR_OUTPUTS_MIN_LEN, MAVLINK_MSG_ID_ACTUATOR_OUTPUTS_LEN, MAVLINK_MSG_ID_ACTUATOR_OUTPUTS_CRC);
#endif
}
#endif

#endif

// MESSAGE ACTUATOR_OUTPUTS UNPACKING


/**
 * @brief Get field noutputs from actuator_outputs message
 *
 * @return  valid outputs
 */
static inline uint32_t mavlink_msg_actuator_outputs_get_noutputs(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field output from actuator_outputs message
 *
 * @return  output data, in natural output units
 */
static inline uint16_t mavlink_msg_actuator_outputs_get_output(const mavlink_message_t* msg, float *output)
{
    return _MAV_RETURN_float_array(msg, output, 16,  4);
}

/**
 * @brief Decode a actuator_outputs message into a struct
 *
 * @param msg The message to decode
 * @param actuator_outputs C-struct to decode the message contents into
 */
static inline void mavlink_msg_actuator_outputs_decode(const mavlink_message_t* msg, mavlink_actuator_outputs_t* actuator_outputs)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    actuator_outputs->noutputs = mavlink_msg_actuator_outputs_get_noutputs(msg);
    mavlink_msg_actuator_outputs_get_output(msg, actuator_outputs->output);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ACTUATOR_OUTPUTS_LEN? msg->len : MAVLINK_MSG_ID_ACTUATOR_OUTPUTS_LEN;
        memset(actuator_outputs, 0, MAVLINK_MSG_ID_ACTUATOR_OUTPUTS_LEN);
    memcpy(actuator_outputs, _MAV_PAYLOAD(msg), len);
#endif
}
