#pragma once
// MESSAGE LEAF_GIMBAL_SINE_CONTROL PACKING

#define MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_CONTROL 77065


typedef struct __mavlink_leaf_gimbal_sine_control_t {
 uint32_t request_id; /*<  Ground station request correlation ID.*/
 uint8_t target_system; /*<  Aircraft MAVLink system ID; broadcast is not accepted.*/
 uint8_t target_component; /*<  LeafFC component ID.*/
 uint8_t action; /*<  0 STOP, 1 START.*/
 uint8_t axis_mask; /*<  Bit 0 pitch/inner pan; bit 1 roll/outer tilt. START requires 1, 2 or 3; ignored for STOP.*/
} mavlink_leaf_gimbal_sine_control_t;

#define MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_CONTROL_LEN 8
#define MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_CONTROL_MIN_LEN 8
#define MAVLINK_MSG_ID_77065_LEN 8
#define MAVLINK_MSG_ID_77065_MIN_LEN 8

#define MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_CONTROL_CRC 10
#define MAVLINK_MSG_ID_77065_CRC 10



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_LEAF_GIMBAL_SINE_CONTROL { \
    77065, \
    "LEAF_GIMBAL_SINE_CONTROL", \
    5, \
    {  { "request_id", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_leaf_gimbal_sine_control_t, request_id) }, \
         { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_leaf_gimbal_sine_control_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_leaf_gimbal_sine_control_t, target_component) }, \
         { "action", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_leaf_gimbal_sine_control_t, action) }, \
         { "axis_mask", NULL, MAVLINK_TYPE_UINT8_T, 0, 7, offsetof(mavlink_leaf_gimbal_sine_control_t, axis_mask) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_LEAF_GIMBAL_SINE_CONTROL { \
    "LEAF_GIMBAL_SINE_CONTROL", \
    5, \
    {  { "request_id", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_leaf_gimbal_sine_control_t, request_id) }, \
         { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_leaf_gimbal_sine_control_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_leaf_gimbal_sine_control_t, target_component) }, \
         { "action", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_leaf_gimbal_sine_control_t, action) }, \
         { "axis_mask", NULL, MAVLINK_TYPE_UINT8_T, 0, 7, offsetof(mavlink_leaf_gimbal_sine_control_t, axis_mask) }, \
         } \
}
#endif

/**
 * @brief Pack a leaf_gimbal_sine_control message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param request_id  Ground station request correlation ID.
 * @param target_system  Aircraft MAVLink system ID; broadcast is not accepted.
 * @param target_component  LeafFC component ID.
 * @param action  0 STOP, 1 START.
 * @param axis_mask  Bit 0 pitch/inner pan; bit 1 roll/outer tilt. START requires 1, 2 or 3; ignored for STOP.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_gimbal_sine_control_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t request_id, uint8_t target_system, uint8_t target_component, uint8_t action, uint8_t axis_mask)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_CONTROL_LEN];
    _mav_put_uint32_t(buf, 0, request_id);
    _mav_put_uint8_t(buf, 4, target_system);
    _mav_put_uint8_t(buf, 5, target_component);
    _mav_put_uint8_t(buf, 6, action);
    _mav_put_uint8_t(buf, 7, axis_mask);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_CONTROL_LEN);
#else
    mavlink_leaf_gimbal_sine_control_t packet;
    packet.request_id = request_id;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.action = action;
    packet.axis_mask = axis_mask;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_CONTROL_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_CONTROL;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_CONTROL_MIN_LEN, MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_CONTROL_LEN, MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_CONTROL_CRC);
}

/**
 * @brief Pack a leaf_gimbal_sine_control message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param request_id  Ground station request correlation ID.
 * @param target_system  Aircraft MAVLink system ID; broadcast is not accepted.
 * @param target_component  LeafFC component ID.
 * @param action  0 STOP, 1 START.
 * @param axis_mask  Bit 0 pitch/inner pan; bit 1 roll/outer tilt. START requires 1, 2 or 3; ignored for STOP.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_gimbal_sine_control_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint32_t request_id, uint8_t target_system, uint8_t target_component, uint8_t action, uint8_t axis_mask)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_CONTROL_LEN];
    _mav_put_uint32_t(buf, 0, request_id);
    _mav_put_uint8_t(buf, 4, target_system);
    _mav_put_uint8_t(buf, 5, target_component);
    _mav_put_uint8_t(buf, 6, action);
    _mav_put_uint8_t(buf, 7, axis_mask);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_CONTROL_LEN);
#else
    mavlink_leaf_gimbal_sine_control_t packet;
    packet.request_id = request_id;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.action = action;
    packet.axis_mask = axis_mask;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_CONTROL_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_CONTROL;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_CONTROL_MIN_LEN, MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_CONTROL_LEN, MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_CONTROL_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_CONTROL_MIN_LEN, MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_CONTROL_LEN);
#endif
}

/**
 * @brief Pack a leaf_gimbal_sine_control message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param request_id  Ground station request correlation ID.
 * @param target_system  Aircraft MAVLink system ID; broadcast is not accepted.
 * @param target_component  LeafFC component ID.
 * @param action  0 STOP, 1 START.
 * @param axis_mask  Bit 0 pitch/inner pan; bit 1 roll/outer tilt. START requires 1, 2 or 3; ignored for STOP.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_gimbal_sine_control_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t request_id,uint8_t target_system,uint8_t target_component,uint8_t action,uint8_t axis_mask)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_CONTROL_LEN];
    _mav_put_uint32_t(buf, 0, request_id);
    _mav_put_uint8_t(buf, 4, target_system);
    _mav_put_uint8_t(buf, 5, target_component);
    _mav_put_uint8_t(buf, 6, action);
    _mav_put_uint8_t(buf, 7, axis_mask);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_CONTROL_LEN);
#else
    mavlink_leaf_gimbal_sine_control_t packet;
    packet.request_id = request_id;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.action = action;
    packet.axis_mask = axis_mask;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_CONTROL_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_CONTROL;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_CONTROL_MIN_LEN, MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_CONTROL_LEN, MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_CONTROL_CRC);
}

/**
 * @brief Encode a leaf_gimbal_sine_control struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param leaf_gimbal_sine_control C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_gimbal_sine_control_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_leaf_gimbal_sine_control_t* leaf_gimbal_sine_control)
{
    return mavlink_msg_leaf_gimbal_sine_control_pack(system_id, component_id, msg, leaf_gimbal_sine_control->request_id, leaf_gimbal_sine_control->target_system, leaf_gimbal_sine_control->target_component, leaf_gimbal_sine_control->action, leaf_gimbal_sine_control->axis_mask);
}

/**
 * @brief Encode a leaf_gimbal_sine_control struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param leaf_gimbal_sine_control C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_gimbal_sine_control_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_leaf_gimbal_sine_control_t* leaf_gimbal_sine_control)
{
    return mavlink_msg_leaf_gimbal_sine_control_pack_chan(system_id, component_id, chan, msg, leaf_gimbal_sine_control->request_id, leaf_gimbal_sine_control->target_system, leaf_gimbal_sine_control->target_component, leaf_gimbal_sine_control->action, leaf_gimbal_sine_control->axis_mask);
}

/**
 * @brief Encode a leaf_gimbal_sine_control struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param leaf_gimbal_sine_control C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_gimbal_sine_control_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_leaf_gimbal_sine_control_t* leaf_gimbal_sine_control)
{
    return mavlink_msg_leaf_gimbal_sine_control_pack_status(system_id, component_id, _status, msg,  leaf_gimbal_sine_control->request_id, leaf_gimbal_sine_control->target_system, leaf_gimbal_sine_control->target_component, leaf_gimbal_sine_control->action, leaf_gimbal_sine_control->axis_mask);
}

/**
 * @brief Send a leaf_gimbal_sine_control message
 * @param chan MAVLink channel to send the message
 *
 * @param request_id  Ground station request correlation ID.
 * @param target_system  Aircraft MAVLink system ID; broadcast is not accepted.
 * @param target_component  LeafFC component ID.
 * @param action  0 STOP, 1 START.
 * @param axis_mask  Bit 0 pitch/inner pan; bit 1 roll/outer tilt. START requires 1, 2 or 3; ignored for STOP.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_leaf_gimbal_sine_control_send(mavlink_channel_t chan, uint32_t request_id, uint8_t target_system, uint8_t target_component, uint8_t action, uint8_t axis_mask)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_CONTROL_LEN];
    _mav_put_uint32_t(buf, 0, request_id);
    _mav_put_uint8_t(buf, 4, target_system);
    _mav_put_uint8_t(buf, 5, target_component);
    _mav_put_uint8_t(buf, 6, action);
    _mav_put_uint8_t(buf, 7, axis_mask);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_CONTROL, buf, MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_CONTROL_MIN_LEN, MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_CONTROL_LEN, MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_CONTROL_CRC);
#else
    mavlink_leaf_gimbal_sine_control_t packet;
    packet.request_id = request_id;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.action = action;
    packet.axis_mask = axis_mask;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_CONTROL, (const char *)&packet, MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_CONTROL_MIN_LEN, MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_CONTROL_LEN, MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_CONTROL_CRC);
#endif
}

/**
 * @brief Send a leaf_gimbal_sine_control message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_leaf_gimbal_sine_control_send_struct(mavlink_channel_t chan, const mavlink_leaf_gimbal_sine_control_t* leaf_gimbal_sine_control)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_leaf_gimbal_sine_control_send(chan, leaf_gimbal_sine_control->request_id, leaf_gimbal_sine_control->target_system, leaf_gimbal_sine_control->target_component, leaf_gimbal_sine_control->action, leaf_gimbal_sine_control->axis_mask);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_CONTROL, (const char *)leaf_gimbal_sine_control, MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_CONTROL_MIN_LEN, MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_CONTROL_LEN, MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_CONTROL_CRC);
#endif
}

#if MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_CONTROL_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_leaf_gimbal_sine_control_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t request_id, uint8_t target_system, uint8_t target_component, uint8_t action, uint8_t axis_mask)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, request_id);
    _mav_put_uint8_t(buf, 4, target_system);
    _mav_put_uint8_t(buf, 5, target_component);
    _mav_put_uint8_t(buf, 6, action);
    _mav_put_uint8_t(buf, 7, axis_mask);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_CONTROL, buf, MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_CONTROL_MIN_LEN, MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_CONTROL_LEN, MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_CONTROL_CRC);
#else
    mavlink_leaf_gimbal_sine_control_t *packet = (mavlink_leaf_gimbal_sine_control_t *)msgbuf;
    packet->request_id = request_id;
    packet->target_system = target_system;
    packet->target_component = target_component;
    packet->action = action;
    packet->axis_mask = axis_mask;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_CONTROL, (const char *)packet, MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_CONTROL_MIN_LEN, MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_CONTROL_LEN, MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_CONTROL_CRC);
#endif
}
#endif

#endif

// MESSAGE LEAF_GIMBAL_SINE_CONTROL UNPACKING


/**
 * @brief Get field request_id from leaf_gimbal_sine_control message
 *
 * @return  Ground station request correlation ID.
 */
static inline uint32_t mavlink_msg_leaf_gimbal_sine_control_get_request_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field target_system from leaf_gimbal_sine_control message
 *
 * @return  Aircraft MAVLink system ID; broadcast is not accepted.
 */
static inline uint8_t mavlink_msg_leaf_gimbal_sine_control_get_target_system(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  4);
}

/**
 * @brief Get field target_component from leaf_gimbal_sine_control message
 *
 * @return  LeafFC component ID.
 */
static inline uint8_t mavlink_msg_leaf_gimbal_sine_control_get_target_component(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  5);
}

/**
 * @brief Get field action from leaf_gimbal_sine_control message
 *
 * @return  0 STOP, 1 START.
 */
static inline uint8_t mavlink_msg_leaf_gimbal_sine_control_get_action(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  6);
}

/**
 * @brief Get field axis_mask from leaf_gimbal_sine_control message
 *
 * @return  Bit 0 pitch/inner pan; bit 1 roll/outer tilt. START requires 1, 2 or 3; ignored for STOP.
 */
static inline uint8_t mavlink_msg_leaf_gimbal_sine_control_get_axis_mask(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  7);
}

/**
 * @brief Decode a leaf_gimbal_sine_control message into a struct
 *
 * @param msg The message to decode
 * @param leaf_gimbal_sine_control C-struct to decode the message contents into
 */
static inline void mavlink_msg_leaf_gimbal_sine_control_decode(const mavlink_message_t* msg, mavlink_leaf_gimbal_sine_control_t* leaf_gimbal_sine_control)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    leaf_gimbal_sine_control->request_id = mavlink_msg_leaf_gimbal_sine_control_get_request_id(msg);
    leaf_gimbal_sine_control->target_system = mavlink_msg_leaf_gimbal_sine_control_get_target_system(msg);
    leaf_gimbal_sine_control->target_component = mavlink_msg_leaf_gimbal_sine_control_get_target_component(msg);
    leaf_gimbal_sine_control->action = mavlink_msg_leaf_gimbal_sine_control_get_action(msg);
    leaf_gimbal_sine_control->axis_mask = mavlink_msg_leaf_gimbal_sine_control_get_axis_mask(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_CONTROL_LEN? msg->len : MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_CONTROL_LEN;
        memset(leaf_gimbal_sine_control, 0, MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_CONTROL_LEN);
    memcpy(leaf_gimbal_sine_control, _MAV_PAYLOAD(msg), len);
#endif
}
