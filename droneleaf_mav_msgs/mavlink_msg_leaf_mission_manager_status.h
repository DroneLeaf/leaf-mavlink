#pragma once
// MESSAGE LEAF_MISSION_MANAGER_STATUS PACKING

#define MAVLINK_MSG_ID_LEAF_MISSION_MANAGER_STATUS 77035


typedef struct __mavlink_leaf_mission_manager_status_t {
 uint8_t status; /*<  The current mission status.*/
 uint8_t joystick_mode; /*<  The current joystick mode.*/
} mavlink_leaf_mission_manager_status_t;

#define MAVLINK_MSG_ID_LEAF_MISSION_MANAGER_STATUS_LEN 2
#define MAVLINK_MSG_ID_LEAF_MISSION_MANAGER_STATUS_MIN_LEN 2
#define MAVLINK_MSG_ID_77035_LEN 2
#define MAVLINK_MSG_ID_77035_MIN_LEN 2

#define MAVLINK_MSG_ID_LEAF_MISSION_MANAGER_STATUS_CRC 34
#define MAVLINK_MSG_ID_77035_CRC 34



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_LEAF_MISSION_MANAGER_STATUS { \
    77035, \
    "LEAF_MISSION_MANAGER_STATUS", \
    2, \
    {  { "status", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_leaf_mission_manager_status_t, status) }, \
         { "joystick_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_leaf_mission_manager_status_t, joystick_mode) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_LEAF_MISSION_MANAGER_STATUS { \
    "LEAF_MISSION_MANAGER_STATUS", \
    2, \
    {  { "status", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_leaf_mission_manager_status_t, status) }, \
         { "joystick_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_leaf_mission_manager_status_t, joystick_mode) }, \
         } \
}
#endif

/**
 * @brief Pack a leaf_mission_manager_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param status  The current mission status.
 * @param joystick_mode  The current joystick mode.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_mission_manager_status_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t status, uint8_t joystick_mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_MISSION_MANAGER_STATUS_LEN];
    _mav_put_uint8_t(buf, 0, status);
    _mav_put_uint8_t(buf, 1, joystick_mode);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_MISSION_MANAGER_STATUS_LEN);
#else
    mavlink_leaf_mission_manager_status_t packet;
    packet.status = status;
    packet.joystick_mode = joystick_mode;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_MISSION_MANAGER_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_MISSION_MANAGER_STATUS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_LEAF_MISSION_MANAGER_STATUS_MIN_LEN, MAVLINK_MSG_ID_LEAF_MISSION_MANAGER_STATUS_LEN, MAVLINK_MSG_ID_LEAF_MISSION_MANAGER_STATUS_CRC);
}

/**
 * @brief Pack a leaf_mission_manager_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param status  The current mission status.
 * @param joystick_mode  The current joystick mode.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_mission_manager_status_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t status, uint8_t joystick_mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_MISSION_MANAGER_STATUS_LEN];
    _mav_put_uint8_t(buf, 0, status);
    _mav_put_uint8_t(buf, 1, joystick_mode);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_MISSION_MANAGER_STATUS_LEN);
#else
    mavlink_leaf_mission_manager_status_t packet;
    packet.status = status;
    packet.joystick_mode = joystick_mode;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_MISSION_MANAGER_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_MISSION_MANAGER_STATUS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_MISSION_MANAGER_STATUS_MIN_LEN, MAVLINK_MSG_ID_LEAF_MISSION_MANAGER_STATUS_LEN, MAVLINK_MSG_ID_LEAF_MISSION_MANAGER_STATUS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_MISSION_MANAGER_STATUS_MIN_LEN, MAVLINK_MSG_ID_LEAF_MISSION_MANAGER_STATUS_LEN);
#endif
}

/**
 * @brief Pack a leaf_mission_manager_status message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param status  The current mission status.
 * @param joystick_mode  The current joystick mode.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_mission_manager_status_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t status,uint8_t joystick_mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_MISSION_MANAGER_STATUS_LEN];
    _mav_put_uint8_t(buf, 0, status);
    _mav_put_uint8_t(buf, 1, joystick_mode);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_MISSION_MANAGER_STATUS_LEN);
#else
    mavlink_leaf_mission_manager_status_t packet;
    packet.status = status;
    packet.joystick_mode = joystick_mode;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_MISSION_MANAGER_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_MISSION_MANAGER_STATUS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_LEAF_MISSION_MANAGER_STATUS_MIN_LEN, MAVLINK_MSG_ID_LEAF_MISSION_MANAGER_STATUS_LEN, MAVLINK_MSG_ID_LEAF_MISSION_MANAGER_STATUS_CRC);
}

/**
 * @brief Encode a leaf_mission_manager_status struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param leaf_mission_manager_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_mission_manager_status_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_leaf_mission_manager_status_t* leaf_mission_manager_status)
{
    return mavlink_msg_leaf_mission_manager_status_pack(system_id, component_id, msg, leaf_mission_manager_status->status, leaf_mission_manager_status->joystick_mode);
}

/**
 * @brief Encode a leaf_mission_manager_status struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param leaf_mission_manager_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_mission_manager_status_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_leaf_mission_manager_status_t* leaf_mission_manager_status)
{
    return mavlink_msg_leaf_mission_manager_status_pack_chan(system_id, component_id, chan, msg, leaf_mission_manager_status->status, leaf_mission_manager_status->joystick_mode);
}

/**
 * @brief Encode a leaf_mission_manager_status struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param leaf_mission_manager_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_mission_manager_status_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_leaf_mission_manager_status_t* leaf_mission_manager_status)
{
    return mavlink_msg_leaf_mission_manager_status_pack_status(system_id, component_id, _status, msg,  leaf_mission_manager_status->status, leaf_mission_manager_status->joystick_mode);
}

/**
 * @brief Send a leaf_mission_manager_status message
 * @param chan MAVLink channel to send the message
 *
 * @param status  The current mission status.
 * @param joystick_mode  The current joystick mode.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_leaf_mission_manager_status_send(mavlink_channel_t chan, uint8_t status, uint8_t joystick_mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_MISSION_MANAGER_STATUS_LEN];
    _mav_put_uint8_t(buf, 0, status);
    _mav_put_uint8_t(buf, 1, joystick_mode);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_MISSION_MANAGER_STATUS, buf, MAVLINK_MSG_ID_LEAF_MISSION_MANAGER_STATUS_MIN_LEN, MAVLINK_MSG_ID_LEAF_MISSION_MANAGER_STATUS_LEN, MAVLINK_MSG_ID_LEAF_MISSION_MANAGER_STATUS_CRC);
#else
    mavlink_leaf_mission_manager_status_t packet;
    packet.status = status;
    packet.joystick_mode = joystick_mode;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_MISSION_MANAGER_STATUS, (const char *)&packet, MAVLINK_MSG_ID_LEAF_MISSION_MANAGER_STATUS_MIN_LEN, MAVLINK_MSG_ID_LEAF_MISSION_MANAGER_STATUS_LEN, MAVLINK_MSG_ID_LEAF_MISSION_MANAGER_STATUS_CRC);
#endif
}

/**
 * @brief Send a leaf_mission_manager_status message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_leaf_mission_manager_status_send_struct(mavlink_channel_t chan, const mavlink_leaf_mission_manager_status_t* leaf_mission_manager_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_leaf_mission_manager_status_send(chan, leaf_mission_manager_status->status, leaf_mission_manager_status->joystick_mode);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_MISSION_MANAGER_STATUS, (const char *)leaf_mission_manager_status, MAVLINK_MSG_ID_LEAF_MISSION_MANAGER_STATUS_MIN_LEN, MAVLINK_MSG_ID_LEAF_MISSION_MANAGER_STATUS_LEN, MAVLINK_MSG_ID_LEAF_MISSION_MANAGER_STATUS_CRC);
#endif
}

#if MAVLINK_MSG_ID_LEAF_MISSION_MANAGER_STATUS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_leaf_mission_manager_status_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t status, uint8_t joystick_mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, status);
    _mav_put_uint8_t(buf, 1, joystick_mode);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_MISSION_MANAGER_STATUS, buf, MAVLINK_MSG_ID_LEAF_MISSION_MANAGER_STATUS_MIN_LEN, MAVLINK_MSG_ID_LEAF_MISSION_MANAGER_STATUS_LEN, MAVLINK_MSG_ID_LEAF_MISSION_MANAGER_STATUS_CRC);
#else
    mavlink_leaf_mission_manager_status_t *packet = (mavlink_leaf_mission_manager_status_t *)msgbuf;
    packet->status = status;
    packet->joystick_mode = joystick_mode;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_MISSION_MANAGER_STATUS, (const char *)packet, MAVLINK_MSG_ID_LEAF_MISSION_MANAGER_STATUS_MIN_LEN, MAVLINK_MSG_ID_LEAF_MISSION_MANAGER_STATUS_LEN, MAVLINK_MSG_ID_LEAF_MISSION_MANAGER_STATUS_CRC);
#endif
}
#endif

#endif

// MESSAGE LEAF_MISSION_MANAGER_STATUS UNPACKING


/**
 * @brief Get field status from leaf_mission_manager_status message
 *
 * @return  The current mission status.
 */
static inline uint8_t mavlink_msg_leaf_mission_manager_status_get_status(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field joystick_mode from leaf_mission_manager_status message
 *
 * @return  The current joystick mode.
 */
static inline uint8_t mavlink_msg_leaf_mission_manager_status_get_joystick_mode(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Decode a leaf_mission_manager_status message into a struct
 *
 * @param msg The message to decode
 * @param leaf_mission_manager_status C-struct to decode the message contents into
 */
static inline void mavlink_msg_leaf_mission_manager_status_decode(const mavlink_message_t* msg, mavlink_leaf_mission_manager_status_t* leaf_mission_manager_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    leaf_mission_manager_status->status = mavlink_msg_leaf_mission_manager_status_get_status(msg);
    leaf_mission_manager_status->joystick_mode = mavlink_msg_leaf_mission_manager_status_get_joystick_mode(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_LEAF_MISSION_MANAGER_STATUS_LEN? msg->len : MAVLINK_MSG_ID_LEAF_MISSION_MANAGER_STATUS_LEN;
        memset(leaf_mission_manager_status, 0, MAVLINK_MSG_ID_LEAF_MISSION_MANAGER_STATUS_LEN);
    memcpy(leaf_mission_manager_status, _MAV_PAYLOAD(msg), len);
#endif
}
