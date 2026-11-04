#pragma once
// MESSAGE LEAF_GIMBAL_SINE_RESPONSE PACKING

#define MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_RESPONSE 77066


typedef struct __mavlink_leaf_gimbal_sine_response_t {
 uint32_t request_id; /*<  Request ID, or zero for a hardware cancellation.*/
 uint8_t result; /*<  0 accepted, 1 disabled/not ready, 2 invalid action/axes, 3 trajectory outside workspace, 4 already running, 5 hardware fault cancellation.*/
 uint8_t active_axis_mask; /*<  Active excitation axes after this request; 0 stopped, 1 pitch/pan, 2 roll/tilt, 3 both.*/
 uint8_t session_state; /*<  0 initializing, 1 ready, 2 fault.*/
} mavlink_leaf_gimbal_sine_response_t;

#define MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_RESPONSE_LEN 7
#define MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_RESPONSE_MIN_LEN 7
#define MAVLINK_MSG_ID_77066_LEN 7
#define MAVLINK_MSG_ID_77066_MIN_LEN 7

#define MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_RESPONSE_CRC 146
#define MAVLINK_MSG_ID_77066_CRC 146



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_LEAF_GIMBAL_SINE_RESPONSE { \
    77066, \
    "LEAF_GIMBAL_SINE_RESPONSE", \
    4, \
    {  { "request_id", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_leaf_gimbal_sine_response_t, request_id) }, \
         { "result", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_leaf_gimbal_sine_response_t, result) }, \
         { "active_axis_mask", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_leaf_gimbal_sine_response_t, active_axis_mask) }, \
         { "session_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_leaf_gimbal_sine_response_t, session_state) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_LEAF_GIMBAL_SINE_RESPONSE { \
    "LEAF_GIMBAL_SINE_RESPONSE", \
    4, \
    {  { "request_id", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_leaf_gimbal_sine_response_t, request_id) }, \
         { "result", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_leaf_gimbal_sine_response_t, result) }, \
         { "active_axis_mask", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_leaf_gimbal_sine_response_t, active_axis_mask) }, \
         { "session_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_leaf_gimbal_sine_response_t, session_state) }, \
         } \
}
#endif

/**
 * @brief Pack a leaf_gimbal_sine_response message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param request_id  Request ID, or zero for a hardware cancellation.
 * @param result  0 accepted, 1 disabled/not ready, 2 invalid action/axes, 3 trajectory outside workspace, 4 already running, 5 hardware fault cancellation.
 * @param active_axis_mask  Active excitation axes after this request; 0 stopped, 1 pitch/pan, 2 roll/tilt, 3 both.
 * @param session_state  0 initializing, 1 ready, 2 fault.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_gimbal_sine_response_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t request_id, uint8_t result, uint8_t active_axis_mask, uint8_t session_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_RESPONSE_LEN];
    _mav_put_uint32_t(buf, 0, request_id);
    _mav_put_uint8_t(buf, 4, result);
    _mav_put_uint8_t(buf, 5, active_axis_mask);
    _mav_put_uint8_t(buf, 6, session_state);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_RESPONSE_LEN);
#else
    mavlink_leaf_gimbal_sine_response_t packet;
    packet.request_id = request_id;
    packet.result = result;
    packet.active_axis_mask = active_axis_mask;
    packet.session_state = session_state;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_RESPONSE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_RESPONSE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_RESPONSE_MIN_LEN, MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_RESPONSE_LEN, MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_RESPONSE_CRC);
}

/**
 * @brief Pack a leaf_gimbal_sine_response message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param request_id  Request ID, or zero for a hardware cancellation.
 * @param result  0 accepted, 1 disabled/not ready, 2 invalid action/axes, 3 trajectory outside workspace, 4 already running, 5 hardware fault cancellation.
 * @param active_axis_mask  Active excitation axes after this request; 0 stopped, 1 pitch/pan, 2 roll/tilt, 3 both.
 * @param session_state  0 initializing, 1 ready, 2 fault.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_gimbal_sine_response_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint32_t request_id, uint8_t result, uint8_t active_axis_mask, uint8_t session_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_RESPONSE_LEN];
    _mav_put_uint32_t(buf, 0, request_id);
    _mav_put_uint8_t(buf, 4, result);
    _mav_put_uint8_t(buf, 5, active_axis_mask);
    _mav_put_uint8_t(buf, 6, session_state);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_RESPONSE_LEN);
#else
    mavlink_leaf_gimbal_sine_response_t packet;
    packet.request_id = request_id;
    packet.result = result;
    packet.active_axis_mask = active_axis_mask;
    packet.session_state = session_state;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_RESPONSE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_RESPONSE;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_RESPONSE_MIN_LEN, MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_RESPONSE_LEN, MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_RESPONSE_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_RESPONSE_MIN_LEN, MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_RESPONSE_LEN);
#endif
}

/**
 * @brief Pack a leaf_gimbal_sine_response message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param request_id  Request ID, or zero for a hardware cancellation.
 * @param result  0 accepted, 1 disabled/not ready, 2 invalid action/axes, 3 trajectory outside workspace, 4 already running, 5 hardware fault cancellation.
 * @param active_axis_mask  Active excitation axes after this request; 0 stopped, 1 pitch/pan, 2 roll/tilt, 3 both.
 * @param session_state  0 initializing, 1 ready, 2 fault.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_gimbal_sine_response_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t request_id,uint8_t result,uint8_t active_axis_mask,uint8_t session_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_RESPONSE_LEN];
    _mav_put_uint32_t(buf, 0, request_id);
    _mav_put_uint8_t(buf, 4, result);
    _mav_put_uint8_t(buf, 5, active_axis_mask);
    _mav_put_uint8_t(buf, 6, session_state);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_RESPONSE_LEN);
#else
    mavlink_leaf_gimbal_sine_response_t packet;
    packet.request_id = request_id;
    packet.result = result;
    packet.active_axis_mask = active_axis_mask;
    packet.session_state = session_state;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_RESPONSE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_RESPONSE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_RESPONSE_MIN_LEN, MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_RESPONSE_LEN, MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_RESPONSE_CRC);
}

/**
 * @brief Encode a leaf_gimbal_sine_response struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param leaf_gimbal_sine_response C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_gimbal_sine_response_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_leaf_gimbal_sine_response_t* leaf_gimbal_sine_response)
{
    return mavlink_msg_leaf_gimbal_sine_response_pack(system_id, component_id, msg, leaf_gimbal_sine_response->request_id, leaf_gimbal_sine_response->result, leaf_gimbal_sine_response->active_axis_mask, leaf_gimbal_sine_response->session_state);
}

/**
 * @brief Encode a leaf_gimbal_sine_response struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param leaf_gimbal_sine_response C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_gimbal_sine_response_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_leaf_gimbal_sine_response_t* leaf_gimbal_sine_response)
{
    return mavlink_msg_leaf_gimbal_sine_response_pack_chan(system_id, component_id, chan, msg, leaf_gimbal_sine_response->request_id, leaf_gimbal_sine_response->result, leaf_gimbal_sine_response->active_axis_mask, leaf_gimbal_sine_response->session_state);
}

/**
 * @brief Encode a leaf_gimbal_sine_response struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param leaf_gimbal_sine_response C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_gimbal_sine_response_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_leaf_gimbal_sine_response_t* leaf_gimbal_sine_response)
{
    return mavlink_msg_leaf_gimbal_sine_response_pack_status(system_id, component_id, _status, msg,  leaf_gimbal_sine_response->request_id, leaf_gimbal_sine_response->result, leaf_gimbal_sine_response->active_axis_mask, leaf_gimbal_sine_response->session_state);
}

/**
 * @brief Send a leaf_gimbal_sine_response message
 * @param chan MAVLink channel to send the message
 *
 * @param request_id  Request ID, or zero for a hardware cancellation.
 * @param result  0 accepted, 1 disabled/not ready, 2 invalid action/axes, 3 trajectory outside workspace, 4 already running, 5 hardware fault cancellation.
 * @param active_axis_mask  Active excitation axes after this request; 0 stopped, 1 pitch/pan, 2 roll/tilt, 3 both.
 * @param session_state  0 initializing, 1 ready, 2 fault.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_leaf_gimbal_sine_response_send(mavlink_channel_t chan, uint32_t request_id, uint8_t result, uint8_t active_axis_mask, uint8_t session_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_RESPONSE_LEN];
    _mav_put_uint32_t(buf, 0, request_id);
    _mav_put_uint8_t(buf, 4, result);
    _mav_put_uint8_t(buf, 5, active_axis_mask);
    _mav_put_uint8_t(buf, 6, session_state);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_RESPONSE, buf, MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_RESPONSE_MIN_LEN, MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_RESPONSE_LEN, MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_RESPONSE_CRC);
#else
    mavlink_leaf_gimbal_sine_response_t packet;
    packet.request_id = request_id;
    packet.result = result;
    packet.active_axis_mask = active_axis_mask;
    packet.session_state = session_state;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_RESPONSE, (const char *)&packet, MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_RESPONSE_MIN_LEN, MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_RESPONSE_LEN, MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_RESPONSE_CRC);
#endif
}

/**
 * @brief Send a leaf_gimbal_sine_response message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_leaf_gimbal_sine_response_send_struct(mavlink_channel_t chan, const mavlink_leaf_gimbal_sine_response_t* leaf_gimbal_sine_response)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_leaf_gimbal_sine_response_send(chan, leaf_gimbal_sine_response->request_id, leaf_gimbal_sine_response->result, leaf_gimbal_sine_response->active_axis_mask, leaf_gimbal_sine_response->session_state);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_RESPONSE, (const char *)leaf_gimbal_sine_response, MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_RESPONSE_MIN_LEN, MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_RESPONSE_LEN, MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_RESPONSE_CRC);
#endif
}

#if MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_RESPONSE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_leaf_gimbal_sine_response_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t request_id, uint8_t result, uint8_t active_axis_mask, uint8_t session_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, request_id);
    _mav_put_uint8_t(buf, 4, result);
    _mav_put_uint8_t(buf, 5, active_axis_mask);
    _mav_put_uint8_t(buf, 6, session_state);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_RESPONSE, buf, MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_RESPONSE_MIN_LEN, MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_RESPONSE_LEN, MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_RESPONSE_CRC);
#else
    mavlink_leaf_gimbal_sine_response_t *packet = (mavlink_leaf_gimbal_sine_response_t *)msgbuf;
    packet->request_id = request_id;
    packet->result = result;
    packet->active_axis_mask = active_axis_mask;
    packet->session_state = session_state;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_RESPONSE, (const char *)packet, MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_RESPONSE_MIN_LEN, MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_RESPONSE_LEN, MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_RESPONSE_CRC);
#endif
}
#endif

#endif

// MESSAGE LEAF_GIMBAL_SINE_RESPONSE UNPACKING


/**
 * @brief Get field request_id from leaf_gimbal_sine_response message
 *
 * @return  Request ID, or zero for a hardware cancellation.
 */
static inline uint32_t mavlink_msg_leaf_gimbal_sine_response_get_request_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field result from leaf_gimbal_sine_response message
 *
 * @return  0 accepted, 1 disabled/not ready, 2 invalid action/axes, 3 trajectory outside workspace, 4 already running, 5 hardware fault cancellation.
 */
static inline uint8_t mavlink_msg_leaf_gimbal_sine_response_get_result(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  4);
}

/**
 * @brief Get field active_axis_mask from leaf_gimbal_sine_response message
 *
 * @return  Active excitation axes after this request; 0 stopped, 1 pitch/pan, 2 roll/tilt, 3 both.
 */
static inline uint8_t mavlink_msg_leaf_gimbal_sine_response_get_active_axis_mask(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  5);
}

/**
 * @brief Get field session_state from leaf_gimbal_sine_response message
 *
 * @return  0 initializing, 1 ready, 2 fault.
 */
static inline uint8_t mavlink_msg_leaf_gimbal_sine_response_get_session_state(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  6);
}

/**
 * @brief Decode a leaf_gimbal_sine_response message into a struct
 *
 * @param msg The message to decode
 * @param leaf_gimbal_sine_response C-struct to decode the message contents into
 */
static inline void mavlink_msg_leaf_gimbal_sine_response_decode(const mavlink_message_t* msg, mavlink_leaf_gimbal_sine_response_t* leaf_gimbal_sine_response)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    leaf_gimbal_sine_response->request_id = mavlink_msg_leaf_gimbal_sine_response_get_request_id(msg);
    leaf_gimbal_sine_response->result = mavlink_msg_leaf_gimbal_sine_response_get_result(msg);
    leaf_gimbal_sine_response->active_axis_mask = mavlink_msg_leaf_gimbal_sine_response_get_active_axis_mask(msg);
    leaf_gimbal_sine_response->session_state = mavlink_msg_leaf_gimbal_sine_response_get_session_state(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_RESPONSE_LEN? msg->len : MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_RESPONSE_LEN;
        memset(leaf_gimbal_sine_response, 0, MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_RESPONSE_LEN);
    memcpy(leaf_gimbal_sine_response, _MAV_PAYLOAD(msg), len);
#endif
}
