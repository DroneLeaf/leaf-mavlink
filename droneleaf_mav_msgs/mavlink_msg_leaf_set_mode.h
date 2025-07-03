#pragma once
// MESSAGE LEAF_SET_MODE PACKING

#define MAVLINK_MSG_ID_LEAF_SET_MODE 77001


typedef struct __mavlink_leaf_set_mode_t {
 uint8_t target_system; /*<  The system setting the mode*/
 uint8_t mode; /*<  The new leaf mode.*/
} mavlink_leaf_set_mode_t;

#define MAVLINK_MSG_ID_LEAF_SET_MODE_LEN 2
#define MAVLINK_MSG_ID_LEAF_SET_MODE_MIN_LEN 2
#define MAVLINK_MSG_ID_77001_LEN 2
#define MAVLINK_MSG_ID_77001_MIN_LEN 2

#define MAVLINK_MSG_ID_LEAF_SET_MODE_CRC 92
#define MAVLINK_MSG_ID_77001_CRC 92



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_LEAF_SET_MODE { \
    77001, \
    "LEAF_SET_MODE", \
    2, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_leaf_set_mode_t, target_system) }, \
         { "mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_leaf_set_mode_t, mode) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_LEAF_SET_MODE { \
    "LEAF_SET_MODE", \
    2, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_leaf_set_mode_t, target_system) }, \
         { "mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_leaf_set_mode_t, mode) }, \
         } \
}
#endif

/**
 * @brief Pack a leaf_set_mode message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system  The system setting the mode
 * @param mode  The new leaf mode.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_set_mode_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t target_system, uint8_t mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_SET_MODE_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, mode);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_SET_MODE_LEN);
#else
    mavlink_leaf_set_mode_t packet;
    packet.target_system = target_system;
    packet.mode = mode;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_SET_MODE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_SET_MODE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_LEAF_SET_MODE_MIN_LEN, MAVLINK_MSG_ID_LEAF_SET_MODE_LEN, MAVLINK_MSG_ID_LEAF_SET_MODE_CRC);
}

/**
 * @brief Pack a leaf_set_mode message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system  The system setting the mode
 * @param mode  The new leaf mode.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_set_mode_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t target_system, uint8_t mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_SET_MODE_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, mode);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_SET_MODE_LEN);
#else
    mavlink_leaf_set_mode_t packet;
    packet.target_system = target_system;
    packet.mode = mode;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_SET_MODE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_SET_MODE;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_SET_MODE_MIN_LEN, MAVLINK_MSG_ID_LEAF_SET_MODE_LEN, MAVLINK_MSG_ID_LEAF_SET_MODE_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_SET_MODE_MIN_LEN, MAVLINK_MSG_ID_LEAF_SET_MODE_LEN);
#endif
}

/**
 * @brief Pack a leaf_set_mode message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param target_system  The system setting the mode
 * @param mode  The new leaf mode.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_set_mode_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t target_system,uint8_t mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_SET_MODE_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, mode);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_SET_MODE_LEN);
#else
    mavlink_leaf_set_mode_t packet;
    packet.target_system = target_system;
    packet.mode = mode;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_SET_MODE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_SET_MODE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_LEAF_SET_MODE_MIN_LEN, MAVLINK_MSG_ID_LEAF_SET_MODE_LEN, MAVLINK_MSG_ID_LEAF_SET_MODE_CRC);
}

/**
 * @brief Encode a leaf_set_mode struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param leaf_set_mode C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_set_mode_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_leaf_set_mode_t* leaf_set_mode)
{
    return mavlink_msg_leaf_set_mode_pack(system_id, component_id, msg, leaf_set_mode->target_system, leaf_set_mode->mode);
}

/**
 * @brief Encode a leaf_set_mode struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param leaf_set_mode C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_set_mode_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_leaf_set_mode_t* leaf_set_mode)
{
    return mavlink_msg_leaf_set_mode_pack_chan(system_id, component_id, chan, msg, leaf_set_mode->target_system, leaf_set_mode->mode);
}

/**
 * @brief Encode a leaf_set_mode struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param leaf_set_mode C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_set_mode_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_leaf_set_mode_t* leaf_set_mode)
{
    return mavlink_msg_leaf_set_mode_pack_status(system_id, component_id, _status, msg,  leaf_set_mode->target_system, leaf_set_mode->mode);
}

/**
 * @brief Send a leaf_set_mode message
 * @param chan MAVLink channel to send the message
 *
 * @param target_system  The system setting the mode
 * @param mode  The new leaf mode.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_leaf_set_mode_send(mavlink_channel_t chan, uint8_t target_system, uint8_t mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_SET_MODE_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, mode);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_SET_MODE, buf, MAVLINK_MSG_ID_LEAF_SET_MODE_MIN_LEN, MAVLINK_MSG_ID_LEAF_SET_MODE_LEN, MAVLINK_MSG_ID_LEAF_SET_MODE_CRC);
#else
    mavlink_leaf_set_mode_t packet;
    packet.target_system = target_system;
    packet.mode = mode;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_SET_MODE, (const char *)&packet, MAVLINK_MSG_ID_LEAF_SET_MODE_MIN_LEN, MAVLINK_MSG_ID_LEAF_SET_MODE_LEN, MAVLINK_MSG_ID_LEAF_SET_MODE_CRC);
#endif
}

/**
 * @brief Send a leaf_set_mode message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_leaf_set_mode_send_struct(mavlink_channel_t chan, const mavlink_leaf_set_mode_t* leaf_set_mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_leaf_set_mode_send(chan, leaf_set_mode->target_system, leaf_set_mode->mode);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_SET_MODE, (const char *)leaf_set_mode, MAVLINK_MSG_ID_LEAF_SET_MODE_MIN_LEN, MAVLINK_MSG_ID_LEAF_SET_MODE_LEN, MAVLINK_MSG_ID_LEAF_SET_MODE_CRC);
#endif
}

#if MAVLINK_MSG_ID_LEAF_SET_MODE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_leaf_set_mode_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t target_system, uint8_t mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, mode);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_SET_MODE, buf, MAVLINK_MSG_ID_LEAF_SET_MODE_MIN_LEN, MAVLINK_MSG_ID_LEAF_SET_MODE_LEN, MAVLINK_MSG_ID_LEAF_SET_MODE_CRC);
#else
    mavlink_leaf_set_mode_t *packet = (mavlink_leaf_set_mode_t *)msgbuf;
    packet->target_system = target_system;
    packet->mode = mode;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_SET_MODE, (const char *)packet, MAVLINK_MSG_ID_LEAF_SET_MODE_MIN_LEN, MAVLINK_MSG_ID_LEAF_SET_MODE_LEN, MAVLINK_MSG_ID_LEAF_SET_MODE_CRC);
#endif
}
#endif

#endif

// MESSAGE LEAF_SET_MODE UNPACKING


/**
 * @brief Get field target_system from leaf_set_mode message
 *
 * @return  The system setting the mode
 */
static inline uint8_t mavlink_msg_leaf_set_mode_get_target_system(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field mode from leaf_set_mode message
 *
 * @return  The new leaf mode.
 */
static inline uint8_t mavlink_msg_leaf_set_mode_get_mode(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Decode a leaf_set_mode message into a struct
 *
 * @param msg The message to decode
 * @param leaf_set_mode C-struct to decode the message contents into
 */
static inline void mavlink_msg_leaf_set_mode_decode(const mavlink_message_t* msg, mavlink_leaf_set_mode_t* leaf_set_mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    leaf_set_mode->target_system = mavlink_msg_leaf_set_mode_get_target_system(msg);
    leaf_set_mode->mode = mavlink_msg_leaf_set_mode_get_mode(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_LEAF_SET_MODE_LEN? msg->len : MAVLINK_MSG_ID_LEAF_SET_MODE_LEN;
        memset(leaf_set_mode, 0, MAVLINK_MSG_ID_LEAF_SET_MODE_LEN);
    memcpy(leaf_set_mode, _MAV_PAYLOAD(msg), len);
#endif
}
