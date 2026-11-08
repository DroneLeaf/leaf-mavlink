#pragma once
// MESSAGE LEAF_GIMBAL_MANUAL_CONTROL PACKING

#define MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_CONTROL 77075


typedef struct __mavlink_leaf_gimbal_manual_control_t {
 uint32_t request_id; /*<  Ground station request correlation ID.*/
 float pan_setpoint_deg; /*< [deg] Pan setpoint; used only for SETPOINT.*/
 float tilt_setpoint_deg; /*< [deg] Tilt setpoint; used only for SETPOINT.*/
 uint8_t target_system; /*<  Aircraft MAVLink system ID; broadcast is not accepted.*/
 uint8_t target_component; /*<  LeafFC component ID.*/
 uint8_t action; /*<  0 DEACTIVATE, 1 ACTIVATE, 2 SETPOINT.*/
} mavlink_leaf_gimbal_manual_control_t;

#define MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_CONTROL_LEN 15
#define MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_CONTROL_MIN_LEN 15
#define MAVLINK_MSG_ID_77075_LEN 15
#define MAVLINK_MSG_ID_77075_MIN_LEN 15

#define MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_CONTROL_CRC 151
#define MAVLINK_MSG_ID_77075_CRC 151



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_LEAF_GIMBAL_MANUAL_CONTROL { \
    77075, \
    "LEAF_GIMBAL_MANUAL_CONTROL", \
    6, \
    {  { "request_id", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_leaf_gimbal_manual_control_t, request_id) }, \
         { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 12, offsetof(mavlink_leaf_gimbal_manual_control_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 13, offsetof(mavlink_leaf_gimbal_manual_control_t, target_component) }, \
         { "action", NULL, MAVLINK_TYPE_UINT8_T, 0, 14, offsetof(mavlink_leaf_gimbal_manual_control_t, action) }, \
         { "pan_setpoint_deg", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_leaf_gimbal_manual_control_t, pan_setpoint_deg) }, \
         { "tilt_setpoint_deg", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_leaf_gimbal_manual_control_t, tilt_setpoint_deg) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_LEAF_GIMBAL_MANUAL_CONTROL { \
    "LEAF_GIMBAL_MANUAL_CONTROL", \
    6, \
    {  { "request_id", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_leaf_gimbal_manual_control_t, request_id) }, \
         { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 12, offsetof(mavlink_leaf_gimbal_manual_control_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 13, offsetof(mavlink_leaf_gimbal_manual_control_t, target_component) }, \
         { "action", NULL, MAVLINK_TYPE_UINT8_T, 0, 14, offsetof(mavlink_leaf_gimbal_manual_control_t, action) }, \
         { "pan_setpoint_deg", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_leaf_gimbal_manual_control_t, pan_setpoint_deg) }, \
         { "tilt_setpoint_deg", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_leaf_gimbal_manual_control_t, tilt_setpoint_deg) }, \
         } \
}
#endif

/**
 * @brief Pack a leaf_gimbal_manual_control message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param request_id  Ground station request correlation ID.
 * @param target_system  Aircraft MAVLink system ID; broadcast is not accepted.
 * @param target_component  LeafFC component ID.
 * @param action  0 DEACTIVATE, 1 ACTIVATE, 2 SETPOINT.
 * @param pan_setpoint_deg [deg] Pan setpoint; used only for SETPOINT.
 * @param tilt_setpoint_deg [deg] Tilt setpoint; used only for SETPOINT.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_gimbal_manual_control_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t request_id, uint8_t target_system, uint8_t target_component, uint8_t action, float pan_setpoint_deg, float tilt_setpoint_deg)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_CONTROL_LEN];
    _mav_put_uint32_t(buf, 0, request_id);
    _mav_put_float(buf, 4, pan_setpoint_deg);
    _mav_put_float(buf, 8, tilt_setpoint_deg);
    _mav_put_uint8_t(buf, 12, target_system);
    _mav_put_uint8_t(buf, 13, target_component);
    _mav_put_uint8_t(buf, 14, action);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_CONTROL_LEN);
#else
    mavlink_leaf_gimbal_manual_control_t packet;
    packet.request_id = request_id;
    packet.pan_setpoint_deg = pan_setpoint_deg;
    packet.tilt_setpoint_deg = tilt_setpoint_deg;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.action = action;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_CONTROL_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_CONTROL;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_CONTROL_MIN_LEN, MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_CONTROL_LEN, MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_CONTROL_CRC);
}

/**
 * @brief Pack a leaf_gimbal_manual_control message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param request_id  Ground station request correlation ID.
 * @param target_system  Aircraft MAVLink system ID; broadcast is not accepted.
 * @param target_component  LeafFC component ID.
 * @param action  0 DEACTIVATE, 1 ACTIVATE, 2 SETPOINT.
 * @param pan_setpoint_deg [deg] Pan setpoint; used only for SETPOINT.
 * @param tilt_setpoint_deg [deg] Tilt setpoint; used only for SETPOINT.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_gimbal_manual_control_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint32_t request_id, uint8_t target_system, uint8_t target_component, uint8_t action, float pan_setpoint_deg, float tilt_setpoint_deg)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_CONTROL_LEN];
    _mav_put_uint32_t(buf, 0, request_id);
    _mav_put_float(buf, 4, pan_setpoint_deg);
    _mav_put_float(buf, 8, tilt_setpoint_deg);
    _mav_put_uint8_t(buf, 12, target_system);
    _mav_put_uint8_t(buf, 13, target_component);
    _mav_put_uint8_t(buf, 14, action);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_CONTROL_LEN);
#else
    mavlink_leaf_gimbal_manual_control_t packet;
    packet.request_id = request_id;
    packet.pan_setpoint_deg = pan_setpoint_deg;
    packet.tilt_setpoint_deg = tilt_setpoint_deg;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.action = action;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_CONTROL_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_CONTROL;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_CONTROL_MIN_LEN, MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_CONTROL_LEN, MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_CONTROL_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_CONTROL_MIN_LEN, MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_CONTROL_LEN);
#endif
}

/**
 * @brief Pack a leaf_gimbal_manual_control message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param request_id  Ground station request correlation ID.
 * @param target_system  Aircraft MAVLink system ID; broadcast is not accepted.
 * @param target_component  LeafFC component ID.
 * @param action  0 DEACTIVATE, 1 ACTIVATE, 2 SETPOINT.
 * @param pan_setpoint_deg [deg] Pan setpoint; used only for SETPOINT.
 * @param tilt_setpoint_deg [deg] Tilt setpoint; used only for SETPOINT.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_gimbal_manual_control_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t request_id,uint8_t target_system,uint8_t target_component,uint8_t action,float pan_setpoint_deg,float tilt_setpoint_deg)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_CONTROL_LEN];
    _mav_put_uint32_t(buf, 0, request_id);
    _mav_put_float(buf, 4, pan_setpoint_deg);
    _mav_put_float(buf, 8, tilt_setpoint_deg);
    _mav_put_uint8_t(buf, 12, target_system);
    _mav_put_uint8_t(buf, 13, target_component);
    _mav_put_uint8_t(buf, 14, action);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_CONTROL_LEN);
#else
    mavlink_leaf_gimbal_manual_control_t packet;
    packet.request_id = request_id;
    packet.pan_setpoint_deg = pan_setpoint_deg;
    packet.tilt_setpoint_deg = tilt_setpoint_deg;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.action = action;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_CONTROL_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_CONTROL;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_CONTROL_MIN_LEN, MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_CONTROL_LEN, MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_CONTROL_CRC);
}

/**
 * @brief Encode a leaf_gimbal_manual_control struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param leaf_gimbal_manual_control C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_gimbal_manual_control_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_leaf_gimbal_manual_control_t* leaf_gimbal_manual_control)
{
    return mavlink_msg_leaf_gimbal_manual_control_pack(system_id, component_id, msg, leaf_gimbal_manual_control->request_id, leaf_gimbal_manual_control->target_system, leaf_gimbal_manual_control->target_component, leaf_gimbal_manual_control->action, leaf_gimbal_manual_control->pan_setpoint_deg, leaf_gimbal_manual_control->tilt_setpoint_deg);
}

/**
 * @brief Encode a leaf_gimbal_manual_control struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param leaf_gimbal_manual_control C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_gimbal_manual_control_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_leaf_gimbal_manual_control_t* leaf_gimbal_manual_control)
{
    return mavlink_msg_leaf_gimbal_manual_control_pack_chan(system_id, component_id, chan, msg, leaf_gimbal_manual_control->request_id, leaf_gimbal_manual_control->target_system, leaf_gimbal_manual_control->target_component, leaf_gimbal_manual_control->action, leaf_gimbal_manual_control->pan_setpoint_deg, leaf_gimbal_manual_control->tilt_setpoint_deg);
}

/**
 * @brief Encode a leaf_gimbal_manual_control struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param leaf_gimbal_manual_control C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_gimbal_manual_control_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_leaf_gimbal_manual_control_t* leaf_gimbal_manual_control)
{
    return mavlink_msg_leaf_gimbal_manual_control_pack_status(system_id, component_id, _status, msg,  leaf_gimbal_manual_control->request_id, leaf_gimbal_manual_control->target_system, leaf_gimbal_manual_control->target_component, leaf_gimbal_manual_control->action, leaf_gimbal_manual_control->pan_setpoint_deg, leaf_gimbal_manual_control->tilt_setpoint_deg);
}

/**
 * @brief Send a leaf_gimbal_manual_control message
 * @param chan MAVLink channel to send the message
 *
 * @param request_id  Ground station request correlation ID.
 * @param target_system  Aircraft MAVLink system ID; broadcast is not accepted.
 * @param target_component  LeafFC component ID.
 * @param action  0 DEACTIVATE, 1 ACTIVATE, 2 SETPOINT.
 * @param pan_setpoint_deg [deg] Pan setpoint; used only for SETPOINT.
 * @param tilt_setpoint_deg [deg] Tilt setpoint; used only for SETPOINT.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_leaf_gimbal_manual_control_send(mavlink_channel_t chan, uint32_t request_id, uint8_t target_system, uint8_t target_component, uint8_t action, float pan_setpoint_deg, float tilt_setpoint_deg)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_CONTROL_LEN];
    _mav_put_uint32_t(buf, 0, request_id);
    _mav_put_float(buf, 4, pan_setpoint_deg);
    _mav_put_float(buf, 8, tilt_setpoint_deg);
    _mav_put_uint8_t(buf, 12, target_system);
    _mav_put_uint8_t(buf, 13, target_component);
    _mav_put_uint8_t(buf, 14, action);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_CONTROL, buf, MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_CONTROL_MIN_LEN, MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_CONTROL_LEN, MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_CONTROL_CRC);
#else
    mavlink_leaf_gimbal_manual_control_t packet;
    packet.request_id = request_id;
    packet.pan_setpoint_deg = pan_setpoint_deg;
    packet.tilt_setpoint_deg = tilt_setpoint_deg;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.action = action;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_CONTROL, (const char *)&packet, MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_CONTROL_MIN_LEN, MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_CONTROL_LEN, MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_CONTROL_CRC);
#endif
}

/**
 * @brief Send a leaf_gimbal_manual_control message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_leaf_gimbal_manual_control_send_struct(mavlink_channel_t chan, const mavlink_leaf_gimbal_manual_control_t* leaf_gimbal_manual_control)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_leaf_gimbal_manual_control_send(chan, leaf_gimbal_manual_control->request_id, leaf_gimbal_manual_control->target_system, leaf_gimbal_manual_control->target_component, leaf_gimbal_manual_control->action, leaf_gimbal_manual_control->pan_setpoint_deg, leaf_gimbal_manual_control->tilt_setpoint_deg);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_CONTROL, (const char *)leaf_gimbal_manual_control, MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_CONTROL_MIN_LEN, MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_CONTROL_LEN, MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_CONTROL_CRC);
#endif
}

#if MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_CONTROL_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_leaf_gimbal_manual_control_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t request_id, uint8_t target_system, uint8_t target_component, uint8_t action, float pan_setpoint_deg, float tilt_setpoint_deg)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, request_id);
    _mav_put_float(buf, 4, pan_setpoint_deg);
    _mav_put_float(buf, 8, tilt_setpoint_deg);
    _mav_put_uint8_t(buf, 12, target_system);
    _mav_put_uint8_t(buf, 13, target_component);
    _mav_put_uint8_t(buf, 14, action);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_CONTROL, buf, MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_CONTROL_MIN_LEN, MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_CONTROL_LEN, MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_CONTROL_CRC);
#else
    mavlink_leaf_gimbal_manual_control_t *packet = (mavlink_leaf_gimbal_manual_control_t *)msgbuf;
    packet->request_id = request_id;
    packet->pan_setpoint_deg = pan_setpoint_deg;
    packet->tilt_setpoint_deg = tilt_setpoint_deg;
    packet->target_system = target_system;
    packet->target_component = target_component;
    packet->action = action;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_CONTROL, (const char *)packet, MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_CONTROL_MIN_LEN, MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_CONTROL_LEN, MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_CONTROL_CRC);
#endif
}
#endif

#endif

// MESSAGE LEAF_GIMBAL_MANUAL_CONTROL UNPACKING


/**
 * @brief Get field request_id from leaf_gimbal_manual_control message
 *
 * @return  Ground station request correlation ID.
 */
static inline uint32_t mavlink_msg_leaf_gimbal_manual_control_get_request_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field target_system from leaf_gimbal_manual_control message
 *
 * @return  Aircraft MAVLink system ID; broadcast is not accepted.
 */
static inline uint8_t mavlink_msg_leaf_gimbal_manual_control_get_target_system(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  12);
}

/**
 * @brief Get field target_component from leaf_gimbal_manual_control message
 *
 * @return  LeafFC component ID.
 */
static inline uint8_t mavlink_msg_leaf_gimbal_manual_control_get_target_component(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  13);
}

/**
 * @brief Get field action from leaf_gimbal_manual_control message
 *
 * @return  0 DEACTIVATE, 1 ACTIVATE, 2 SETPOINT.
 */
static inline uint8_t mavlink_msg_leaf_gimbal_manual_control_get_action(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  14);
}

/**
 * @brief Get field pan_setpoint_deg from leaf_gimbal_manual_control message
 *
 * @return [deg] Pan setpoint; used only for SETPOINT.
 */
static inline float mavlink_msg_leaf_gimbal_manual_control_get_pan_setpoint_deg(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field tilt_setpoint_deg from leaf_gimbal_manual_control message
 *
 * @return [deg] Tilt setpoint; used only for SETPOINT.
 */
static inline float mavlink_msg_leaf_gimbal_manual_control_get_tilt_setpoint_deg(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Decode a leaf_gimbal_manual_control message into a struct
 *
 * @param msg The message to decode
 * @param leaf_gimbal_manual_control C-struct to decode the message contents into
 */
static inline void mavlink_msg_leaf_gimbal_manual_control_decode(const mavlink_message_t* msg, mavlink_leaf_gimbal_manual_control_t* leaf_gimbal_manual_control)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    leaf_gimbal_manual_control->request_id = mavlink_msg_leaf_gimbal_manual_control_get_request_id(msg);
    leaf_gimbal_manual_control->pan_setpoint_deg = mavlink_msg_leaf_gimbal_manual_control_get_pan_setpoint_deg(msg);
    leaf_gimbal_manual_control->tilt_setpoint_deg = mavlink_msg_leaf_gimbal_manual_control_get_tilt_setpoint_deg(msg);
    leaf_gimbal_manual_control->target_system = mavlink_msg_leaf_gimbal_manual_control_get_target_system(msg);
    leaf_gimbal_manual_control->target_component = mavlink_msg_leaf_gimbal_manual_control_get_target_component(msg);
    leaf_gimbal_manual_control->action = mavlink_msg_leaf_gimbal_manual_control_get_action(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_CONTROL_LEN? msg->len : MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_CONTROL_LEN;
        memset(leaf_gimbal_manual_control, 0, MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_CONTROL_LEN);
    memcpy(leaf_gimbal_manual_control, _MAV_PAYLOAD(msg), len);
#endif
}
