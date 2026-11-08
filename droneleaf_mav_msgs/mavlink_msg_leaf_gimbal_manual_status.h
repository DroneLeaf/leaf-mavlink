#pragma once
// MESSAGE LEAF_GIMBAL_MANUAL_STATUS PACKING

#define MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_STATUS 77076


typedef struct __mavlink_leaf_gimbal_manual_status_t {
 uint32_t request_id; /*<  Request ID this status answers.*/
 float pan_min_deg; /*< [deg] Lowest accepted pan setpoint.*/
 float pan_max_deg; /*< [deg] Highest accepted pan setpoint.*/
 float tilt_min_deg; /*< [deg] Lowest accepted tilt setpoint.*/
 float tilt_max_deg; /*< [deg] Highest accepted tilt setpoint.*/
 float pan_command_deg; /*< [deg] Pan command held when this status was built.*/
 float tilt_command_deg; /*< [deg] Tilt command held when this status was built.*/
 uint8_t active; /*<  1 manual control active, 0 automatic behaviour.*/
 uint8_t session_state; /*<  0 initializing, 1 ready, 2 fault or disabled.*/
} mavlink_leaf_gimbal_manual_status_t;

#define MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_STATUS_LEN 30
#define MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_STATUS_MIN_LEN 30
#define MAVLINK_MSG_ID_77076_LEN 30
#define MAVLINK_MSG_ID_77076_MIN_LEN 30

#define MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_STATUS_CRC 190
#define MAVLINK_MSG_ID_77076_CRC 190



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_LEAF_GIMBAL_MANUAL_STATUS { \
    77076, \
    "LEAF_GIMBAL_MANUAL_STATUS", \
    9, \
    {  { "request_id", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_leaf_gimbal_manual_status_t, request_id) }, \
         { "active", NULL, MAVLINK_TYPE_UINT8_T, 0, 28, offsetof(mavlink_leaf_gimbal_manual_status_t, active) }, \
         { "session_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 29, offsetof(mavlink_leaf_gimbal_manual_status_t, session_state) }, \
         { "pan_min_deg", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_leaf_gimbal_manual_status_t, pan_min_deg) }, \
         { "pan_max_deg", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_leaf_gimbal_manual_status_t, pan_max_deg) }, \
         { "tilt_min_deg", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_leaf_gimbal_manual_status_t, tilt_min_deg) }, \
         { "tilt_max_deg", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_leaf_gimbal_manual_status_t, tilt_max_deg) }, \
         { "pan_command_deg", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_leaf_gimbal_manual_status_t, pan_command_deg) }, \
         { "tilt_command_deg", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_leaf_gimbal_manual_status_t, tilt_command_deg) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_LEAF_GIMBAL_MANUAL_STATUS { \
    "LEAF_GIMBAL_MANUAL_STATUS", \
    9, \
    {  { "request_id", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_leaf_gimbal_manual_status_t, request_id) }, \
         { "active", NULL, MAVLINK_TYPE_UINT8_T, 0, 28, offsetof(mavlink_leaf_gimbal_manual_status_t, active) }, \
         { "session_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 29, offsetof(mavlink_leaf_gimbal_manual_status_t, session_state) }, \
         { "pan_min_deg", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_leaf_gimbal_manual_status_t, pan_min_deg) }, \
         { "pan_max_deg", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_leaf_gimbal_manual_status_t, pan_max_deg) }, \
         { "tilt_min_deg", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_leaf_gimbal_manual_status_t, tilt_min_deg) }, \
         { "tilt_max_deg", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_leaf_gimbal_manual_status_t, tilt_max_deg) }, \
         { "pan_command_deg", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_leaf_gimbal_manual_status_t, pan_command_deg) }, \
         { "tilt_command_deg", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_leaf_gimbal_manual_status_t, tilt_command_deg) }, \
         } \
}
#endif

/**
 * @brief Pack a leaf_gimbal_manual_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param request_id  Request ID this status answers.
 * @param active  1 manual control active, 0 automatic behaviour.
 * @param session_state  0 initializing, 1 ready, 2 fault or disabled.
 * @param pan_min_deg [deg] Lowest accepted pan setpoint.
 * @param pan_max_deg [deg] Highest accepted pan setpoint.
 * @param tilt_min_deg [deg] Lowest accepted tilt setpoint.
 * @param tilt_max_deg [deg] Highest accepted tilt setpoint.
 * @param pan_command_deg [deg] Pan command held when this status was built.
 * @param tilt_command_deg [deg] Tilt command held when this status was built.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_gimbal_manual_status_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t request_id, uint8_t active, uint8_t session_state, float pan_min_deg, float pan_max_deg, float tilt_min_deg, float tilt_max_deg, float pan_command_deg, float tilt_command_deg)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_STATUS_LEN];
    _mav_put_uint32_t(buf, 0, request_id);
    _mav_put_float(buf, 4, pan_min_deg);
    _mav_put_float(buf, 8, pan_max_deg);
    _mav_put_float(buf, 12, tilt_min_deg);
    _mav_put_float(buf, 16, tilt_max_deg);
    _mav_put_float(buf, 20, pan_command_deg);
    _mav_put_float(buf, 24, tilt_command_deg);
    _mav_put_uint8_t(buf, 28, active);
    _mav_put_uint8_t(buf, 29, session_state);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_STATUS_LEN);
#else
    mavlink_leaf_gimbal_manual_status_t packet;
    packet.request_id = request_id;
    packet.pan_min_deg = pan_min_deg;
    packet.pan_max_deg = pan_max_deg;
    packet.tilt_min_deg = tilt_min_deg;
    packet.tilt_max_deg = tilt_max_deg;
    packet.pan_command_deg = pan_command_deg;
    packet.tilt_command_deg = tilt_command_deg;
    packet.active = active;
    packet.session_state = session_state;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_STATUS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_STATUS_MIN_LEN, MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_STATUS_LEN, MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_STATUS_CRC);
}

/**
 * @brief Pack a leaf_gimbal_manual_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param request_id  Request ID this status answers.
 * @param active  1 manual control active, 0 automatic behaviour.
 * @param session_state  0 initializing, 1 ready, 2 fault or disabled.
 * @param pan_min_deg [deg] Lowest accepted pan setpoint.
 * @param pan_max_deg [deg] Highest accepted pan setpoint.
 * @param tilt_min_deg [deg] Lowest accepted tilt setpoint.
 * @param tilt_max_deg [deg] Highest accepted tilt setpoint.
 * @param pan_command_deg [deg] Pan command held when this status was built.
 * @param tilt_command_deg [deg] Tilt command held when this status was built.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_gimbal_manual_status_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint32_t request_id, uint8_t active, uint8_t session_state, float pan_min_deg, float pan_max_deg, float tilt_min_deg, float tilt_max_deg, float pan_command_deg, float tilt_command_deg)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_STATUS_LEN];
    _mav_put_uint32_t(buf, 0, request_id);
    _mav_put_float(buf, 4, pan_min_deg);
    _mav_put_float(buf, 8, pan_max_deg);
    _mav_put_float(buf, 12, tilt_min_deg);
    _mav_put_float(buf, 16, tilt_max_deg);
    _mav_put_float(buf, 20, pan_command_deg);
    _mav_put_float(buf, 24, tilt_command_deg);
    _mav_put_uint8_t(buf, 28, active);
    _mav_put_uint8_t(buf, 29, session_state);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_STATUS_LEN);
#else
    mavlink_leaf_gimbal_manual_status_t packet;
    packet.request_id = request_id;
    packet.pan_min_deg = pan_min_deg;
    packet.pan_max_deg = pan_max_deg;
    packet.tilt_min_deg = tilt_min_deg;
    packet.tilt_max_deg = tilt_max_deg;
    packet.pan_command_deg = pan_command_deg;
    packet.tilt_command_deg = tilt_command_deg;
    packet.active = active;
    packet.session_state = session_state;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_STATUS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_STATUS_MIN_LEN, MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_STATUS_LEN, MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_STATUS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_STATUS_MIN_LEN, MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_STATUS_LEN);
#endif
}

/**
 * @brief Pack a leaf_gimbal_manual_status message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param request_id  Request ID this status answers.
 * @param active  1 manual control active, 0 automatic behaviour.
 * @param session_state  0 initializing, 1 ready, 2 fault or disabled.
 * @param pan_min_deg [deg] Lowest accepted pan setpoint.
 * @param pan_max_deg [deg] Highest accepted pan setpoint.
 * @param tilt_min_deg [deg] Lowest accepted tilt setpoint.
 * @param tilt_max_deg [deg] Highest accepted tilt setpoint.
 * @param pan_command_deg [deg] Pan command held when this status was built.
 * @param tilt_command_deg [deg] Tilt command held when this status was built.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_gimbal_manual_status_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t request_id,uint8_t active,uint8_t session_state,float pan_min_deg,float pan_max_deg,float tilt_min_deg,float tilt_max_deg,float pan_command_deg,float tilt_command_deg)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_STATUS_LEN];
    _mav_put_uint32_t(buf, 0, request_id);
    _mav_put_float(buf, 4, pan_min_deg);
    _mav_put_float(buf, 8, pan_max_deg);
    _mav_put_float(buf, 12, tilt_min_deg);
    _mav_put_float(buf, 16, tilt_max_deg);
    _mav_put_float(buf, 20, pan_command_deg);
    _mav_put_float(buf, 24, tilt_command_deg);
    _mav_put_uint8_t(buf, 28, active);
    _mav_put_uint8_t(buf, 29, session_state);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_STATUS_LEN);
#else
    mavlink_leaf_gimbal_manual_status_t packet;
    packet.request_id = request_id;
    packet.pan_min_deg = pan_min_deg;
    packet.pan_max_deg = pan_max_deg;
    packet.tilt_min_deg = tilt_min_deg;
    packet.tilt_max_deg = tilt_max_deg;
    packet.pan_command_deg = pan_command_deg;
    packet.tilt_command_deg = tilt_command_deg;
    packet.active = active;
    packet.session_state = session_state;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_STATUS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_STATUS_MIN_LEN, MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_STATUS_LEN, MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_STATUS_CRC);
}

/**
 * @brief Encode a leaf_gimbal_manual_status struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param leaf_gimbal_manual_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_gimbal_manual_status_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_leaf_gimbal_manual_status_t* leaf_gimbal_manual_status)
{
    return mavlink_msg_leaf_gimbal_manual_status_pack(system_id, component_id, msg, leaf_gimbal_manual_status->request_id, leaf_gimbal_manual_status->active, leaf_gimbal_manual_status->session_state, leaf_gimbal_manual_status->pan_min_deg, leaf_gimbal_manual_status->pan_max_deg, leaf_gimbal_manual_status->tilt_min_deg, leaf_gimbal_manual_status->tilt_max_deg, leaf_gimbal_manual_status->pan_command_deg, leaf_gimbal_manual_status->tilt_command_deg);
}

/**
 * @brief Encode a leaf_gimbal_manual_status struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param leaf_gimbal_manual_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_gimbal_manual_status_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_leaf_gimbal_manual_status_t* leaf_gimbal_manual_status)
{
    return mavlink_msg_leaf_gimbal_manual_status_pack_chan(system_id, component_id, chan, msg, leaf_gimbal_manual_status->request_id, leaf_gimbal_manual_status->active, leaf_gimbal_manual_status->session_state, leaf_gimbal_manual_status->pan_min_deg, leaf_gimbal_manual_status->pan_max_deg, leaf_gimbal_manual_status->tilt_min_deg, leaf_gimbal_manual_status->tilt_max_deg, leaf_gimbal_manual_status->pan_command_deg, leaf_gimbal_manual_status->tilt_command_deg);
}

/**
 * @brief Encode a leaf_gimbal_manual_status struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param leaf_gimbal_manual_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_gimbal_manual_status_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_leaf_gimbal_manual_status_t* leaf_gimbal_manual_status)
{
    return mavlink_msg_leaf_gimbal_manual_status_pack_status(system_id, component_id, _status, msg,  leaf_gimbal_manual_status->request_id, leaf_gimbal_manual_status->active, leaf_gimbal_manual_status->session_state, leaf_gimbal_manual_status->pan_min_deg, leaf_gimbal_manual_status->pan_max_deg, leaf_gimbal_manual_status->tilt_min_deg, leaf_gimbal_manual_status->tilt_max_deg, leaf_gimbal_manual_status->pan_command_deg, leaf_gimbal_manual_status->tilt_command_deg);
}

/**
 * @brief Send a leaf_gimbal_manual_status message
 * @param chan MAVLink channel to send the message
 *
 * @param request_id  Request ID this status answers.
 * @param active  1 manual control active, 0 automatic behaviour.
 * @param session_state  0 initializing, 1 ready, 2 fault or disabled.
 * @param pan_min_deg [deg] Lowest accepted pan setpoint.
 * @param pan_max_deg [deg] Highest accepted pan setpoint.
 * @param tilt_min_deg [deg] Lowest accepted tilt setpoint.
 * @param tilt_max_deg [deg] Highest accepted tilt setpoint.
 * @param pan_command_deg [deg] Pan command held when this status was built.
 * @param tilt_command_deg [deg] Tilt command held when this status was built.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_leaf_gimbal_manual_status_send(mavlink_channel_t chan, uint32_t request_id, uint8_t active, uint8_t session_state, float pan_min_deg, float pan_max_deg, float tilt_min_deg, float tilt_max_deg, float pan_command_deg, float tilt_command_deg)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_STATUS_LEN];
    _mav_put_uint32_t(buf, 0, request_id);
    _mav_put_float(buf, 4, pan_min_deg);
    _mav_put_float(buf, 8, pan_max_deg);
    _mav_put_float(buf, 12, tilt_min_deg);
    _mav_put_float(buf, 16, tilt_max_deg);
    _mav_put_float(buf, 20, pan_command_deg);
    _mav_put_float(buf, 24, tilt_command_deg);
    _mav_put_uint8_t(buf, 28, active);
    _mav_put_uint8_t(buf, 29, session_state);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_STATUS, buf, MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_STATUS_MIN_LEN, MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_STATUS_LEN, MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_STATUS_CRC);
#else
    mavlink_leaf_gimbal_manual_status_t packet;
    packet.request_id = request_id;
    packet.pan_min_deg = pan_min_deg;
    packet.pan_max_deg = pan_max_deg;
    packet.tilt_min_deg = tilt_min_deg;
    packet.tilt_max_deg = tilt_max_deg;
    packet.pan_command_deg = pan_command_deg;
    packet.tilt_command_deg = tilt_command_deg;
    packet.active = active;
    packet.session_state = session_state;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_STATUS, (const char *)&packet, MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_STATUS_MIN_LEN, MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_STATUS_LEN, MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_STATUS_CRC);
#endif
}

/**
 * @brief Send a leaf_gimbal_manual_status message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_leaf_gimbal_manual_status_send_struct(mavlink_channel_t chan, const mavlink_leaf_gimbal_manual_status_t* leaf_gimbal_manual_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_leaf_gimbal_manual_status_send(chan, leaf_gimbal_manual_status->request_id, leaf_gimbal_manual_status->active, leaf_gimbal_manual_status->session_state, leaf_gimbal_manual_status->pan_min_deg, leaf_gimbal_manual_status->pan_max_deg, leaf_gimbal_manual_status->tilt_min_deg, leaf_gimbal_manual_status->tilt_max_deg, leaf_gimbal_manual_status->pan_command_deg, leaf_gimbal_manual_status->tilt_command_deg);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_STATUS, (const char *)leaf_gimbal_manual_status, MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_STATUS_MIN_LEN, MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_STATUS_LEN, MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_STATUS_CRC);
#endif
}

#if MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_STATUS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_leaf_gimbal_manual_status_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t request_id, uint8_t active, uint8_t session_state, float pan_min_deg, float pan_max_deg, float tilt_min_deg, float tilt_max_deg, float pan_command_deg, float tilt_command_deg)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, request_id);
    _mav_put_float(buf, 4, pan_min_deg);
    _mav_put_float(buf, 8, pan_max_deg);
    _mav_put_float(buf, 12, tilt_min_deg);
    _mav_put_float(buf, 16, tilt_max_deg);
    _mav_put_float(buf, 20, pan_command_deg);
    _mav_put_float(buf, 24, tilt_command_deg);
    _mav_put_uint8_t(buf, 28, active);
    _mav_put_uint8_t(buf, 29, session_state);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_STATUS, buf, MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_STATUS_MIN_LEN, MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_STATUS_LEN, MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_STATUS_CRC);
#else
    mavlink_leaf_gimbal_manual_status_t *packet = (mavlink_leaf_gimbal_manual_status_t *)msgbuf;
    packet->request_id = request_id;
    packet->pan_min_deg = pan_min_deg;
    packet->pan_max_deg = pan_max_deg;
    packet->tilt_min_deg = tilt_min_deg;
    packet->tilt_max_deg = tilt_max_deg;
    packet->pan_command_deg = pan_command_deg;
    packet->tilt_command_deg = tilt_command_deg;
    packet->active = active;
    packet->session_state = session_state;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_STATUS, (const char *)packet, MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_STATUS_MIN_LEN, MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_STATUS_LEN, MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_STATUS_CRC);
#endif
}
#endif

#endif

// MESSAGE LEAF_GIMBAL_MANUAL_STATUS UNPACKING


/**
 * @brief Get field request_id from leaf_gimbal_manual_status message
 *
 * @return  Request ID this status answers.
 */
static inline uint32_t mavlink_msg_leaf_gimbal_manual_status_get_request_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field active from leaf_gimbal_manual_status message
 *
 * @return  1 manual control active, 0 automatic behaviour.
 */
static inline uint8_t mavlink_msg_leaf_gimbal_manual_status_get_active(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  28);
}

/**
 * @brief Get field session_state from leaf_gimbal_manual_status message
 *
 * @return  0 initializing, 1 ready, 2 fault or disabled.
 */
static inline uint8_t mavlink_msg_leaf_gimbal_manual_status_get_session_state(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  29);
}

/**
 * @brief Get field pan_min_deg from leaf_gimbal_manual_status message
 *
 * @return [deg] Lowest accepted pan setpoint.
 */
static inline float mavlink_msg_leaf_gimbal_manual_status_get_pan_min_deg(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field pan_max_deg from leaf_gimbal_manual_status message
 *
 * @return [deg] Highest accepted pan setpoint.
 */
static inline float mavlink_msg_leaf_gimbal_manual_status_get_pan_max_deg(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field tilt_min_deg from leaf_gimbal_manual_status message
 *
 * @return [deg] Lowest accepted tilt setpoint.
 */
static inline float mavlink_msg_leaf_gimbal_manual_status_get_tilt_min_deg(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field tilt_max_deg from leaf_gimbal_manual_status message
 *
 * @return [deg] Highest accepted tilt setpoint.
 */
static inline float mavlink_msg_leaf_gimbal_manual_status_get_tilt_max_deg(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field pan_command_deg from leaf_gimbal_manual_status message
 *
 * @return [deg] Pan command held when this status was built.
 */
static inline float mavlink_msg_leaf_gimbal_manual_status_get_pan_command_deg(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field tilt_command_deg from leaf_gimbal_manual_status message
 *
 * @return [deg] Tilt command held when this status was built.
 */
static inline float mavlink_msg_leaf_gimbal_manual_status_get_tilt_command_deg(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Decode a leaf_gimbal_manual_status message into a struct
 *
 * @param msg The message to decode
 * @param leaf_gimbal_manual_status C-struct to decode the message contents into
 */
static inline void mavlink_msg_leaf_gimbal_manual_status_decode(const mavlink_message_t* msg, mavlink_leaf_gimbal_manual_status_t* leaf_gimbal_manual_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    leaf_gimbal_manual_status->request_id = mavlink_msg_leaf_gimbal_manual_status_get_request_id(msg);
    leaf_gimbal_manual_status->pan_min_deg = mavlink_msg_leaf_gimbal_manual_status_get_pan_min_deg(msg);
    leaf_gimbal_manual_status->pan_max_deg = mavlink_msg_leaf_gimbal_manual_status_get_pan_max_deg(msg);
    leaf_gimbal_manual_status->tilt_min_deg = mavlink_msg_leaf_gimbal_manual_status_get_tilt_min_deg(msg);
    leaf_gimbal_manual_status->tilt_max_deg = mavlink_msg_leaf_gimbal_manual_status_get_tilt_max_deg(msg);
    leaf_gimbal_manual_status->pan_command_deg = mavlink_msg_leaf_gimbal_manual_status_get_pan_command_deg(msg);
    leaf_gimbal_manual_status->tilt_command_deg = mavlink_msg_leaf_gimbal_manual_status_get_tilt_command_deg(msg);
    leaf_gimbal_manual_status->active = mavlink_msg_leaf_gimbal_manual_status_get_active(msg);
    leaf_gimbal_manual_status->session_state = mavlink_msg_leaf_gimbal_manual_status_get_session_state(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_STATUS_LEN? msg->len : MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_STATUS_LEN;
        memset(leaf_gimbal_manual_status, 0, MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_STATUS_LEN);
    memcpy(leaf_gimbal_manual_status, _MAV_PAYLOAD(msg), len);
#endif
}
