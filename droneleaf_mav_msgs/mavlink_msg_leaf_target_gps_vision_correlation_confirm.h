#pragma once
// MESSAGE LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM PACKING

#define MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM 77056


typedef struct __mavlink_leaf_target_gps_vision_correlation_confirm_t {
 uint8_t target_system; /*<  The target system*/
 uint8_t correlation_between_target_gps_and_vision_confirmed; /*<  1 = the operator confirms the target GPS and the vision track are the same target; 0 = not confirmed*/
} mavlink_leaf_target_gps_vision_correlation_confirm_t;

#define MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_LEN 2
#define MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_MIN_LEN 2
#define MAVLINK_MSG_ID_77056_LEN 2
#define MAVLINK_MSG_ID_77056_MIN_LEN 2

#define MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_CRC 64
#define MAVLINK_MSG_ID_77056_CRC 64



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM { \
    77056, \
    "LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM", \
    2, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_leaf_target_gps_vision_correlation_confirm_t, target_system) }, \
         { "correlation_between_target_gps_and_vision_confirmed", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_leaf_target_gps_vision_correlation_confirm_t, correlation_between_target_gps_and_vision_confirmed) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM { \
    "LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM", \
    2, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_leaf_target_gps_vision_correlation_confirm_t, target_system) }, \
         { "correlation_between_target_gps_and_vision_confirmed", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_leaf_target_gps_vision_correlation_confirm_t, correlation_between_target_gps_and_vision_confirmed) }, \
         } \
}
#endif

/**
 * @brief Pack a leaf_target_gps_vision_correlation_confirm message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system  The target system
 * @param correlation_between_target_gps_and_vision_confirmed  1 = the operator confirms the target GPS and the vision track are the same target; 0 = not confirmed
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_target_gps_vision_correlation_confirm_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t target_system, uint8_t correlation_between_target_gps_and_vision_confirmed)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, correlation_between_target_gps_and_vision_confirmed);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_LEN);
#else
    mavlink_leaf_target_gps_vision_correlation_confirm_t packet;
    packet.target_system = target_system;
    packet.correlation_between_target_gps_and_vision_confirmed = correlation_between_target_gps_and_vision_confirmed;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_MIN_LEN, MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_LEN, MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_CRC);
}

/**
 * @brief Pack a leaf_target_gps_vision_correlation_confirm message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system  The target system
 * @param correlation_between_target_gps_and_vision_confirmed  1 = the operator confirms the target GPS and the vision track are the same target; 0 = not confirmed
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_target_gps_vision_correlation_confirm_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t target_system, uint8_t correlation_between_target_gps_and_vision_confirmed)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, correlation_between_target_gps_and_vision_confirmed);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_LEN);
#else
    mavlink_leaf_target_gps_vision_correlation_confirm_t packet;
    packet.target_system = target_system;
    packet.correlation_between_target_gps_and_vision_confirmed = correlation_between_target_gps_and_vision_confirmed;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_MIN_LEN, MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_LEN, MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_MIN_LEN, MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_LEN);
#endif
}

/**
 * @brief Pack a leaf_target_gps_vision_correlation_confirm message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param target_system  The target system
 * @param correlation_between_target_gps_and_vision_confirmed  1 = the operator confirms the target GPS and the vision track are the same target; 0 = not confirmed
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_target_gps_vision_correlation_confirm_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t target_system,uint8_t correlation_between_target_gps_and_vision_confirmed)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, correlation_between_target_gps_and_vision_confirmed);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_LEN);
#else
    mavlink_leaf_target_gps_vision_correlation_confirm_t packet;
    packet.target_system = target_system;
    packet.correlation_between_target_gps_and_vision_confirmed = correlation_between_target_gps_and_vision_confirmed;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_MIN_LEN, MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_LEN, MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_CRC);
}

/**
 * @brief Encode a leaf_target_gps_vision_correlation_confirm struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param leaf_target_gps_vision_correlation_confirm C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_target_gps_vision_correlation_confirm_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_leaf_target_gps_vision_correlation_confirm_t* leaf_target_gps_vision_correlation_confirm)
{
    return mavlink_msg_leaf_target_gps_vision_correlation_confirm_pack(system_id, component_id, msg, leaf_target_gps_vision_correlation_confirm->target_system, leaf_target_gps_vision_correlation_confirm->correlation_between_target_gps_and_vision_confirmed);
}

/**
 * @brief Encode a leaf_target_gps_vision_correlation_confirm struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param leaf_target_gps_vision_correlation_confirm C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_target_gps_vision_correlation_confirm_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_leaf_target_gps_vision_correlation_confirm_t* leaf_target_gps_vision_correlation_confirm)
{
    return mavlink_msg_leaf_target_gps_vision_correlation_confirm_pack_chan(system_id, component_id, chan, msg, leaf_target_gps_vision_correlation_confirm->target_system, leaf_target_gps_vision_correlation_confirm->correlation_between_target_gps_and_vision_confirmed);
}

/**
 * @brief Encode a leaf_target_gps_vision_correlation_confirm struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param leaf_target_gps_vision_correlation_confirm C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_target_gps_vision_correlation_confirm_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_leaf_target_gps_vision_correlation_confirm_t* leaf_target_gps_vision_correlation_confirm)
{
    return mavlink_msg_leaf_target_gps_vision_correlation_confirm_pack_status(system_id, component_id, _status, msg,  leaf_target_gps_vision_correlation_confirm->target_system, leaf_target_gps_vision_correlation_confirm->correlation_between_target_gps_and_vision_confirmed);
}

/**
 * @brief Send a leaf_target_gps_vision_correlation_confirm message
 * @param chan MAVLink channel to send the message
 *
 * @param target_system  The target system
 * @param correlation_between_target_gps_and_vision_confirmed  1 = the operator confirms the target GPS and the vision track are the same target; 0 = not confirmed
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_leaf_target_gps_vision_correlation_confirm_send(mavlink_channel_t chan, uint8_t target_system, uint8_t correlation_between_target_gps_and_vision_confirmed)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, correlation_between_target_gps_and_vision_confirmed);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM, buf, MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_MIN_LEN, MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_LEN, MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_CRC);
#else
    mavlink_leaf_target_gps_vision_correlation_confirm_t packet;
    packet.target_system = target_system;
    packet.correlation_between_target_gps_and_vision_confirmed = correlation_between_target_gps_and_vision_confirmed;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM, (const char *)&packet, MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_MIN_LEN, MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_LEN, MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_CRC);
#endif
}

/**
 * @brief Send a leaf_target_gps_vision_correlation_confirm message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_leaf_target_gps_vision_correlation_confirm_send_struct(mavlink_channel_t chan, const mavlink_leaf_target_gps_vision_correlation_confirm_t* leaf_target_gps_vision_correlation_confirm)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_leaf_target_gps_vision_correlation_confirm_send(chan, leaf_target_gps_vision_correlation_confirm->target_system, leaf_target_gps_vision_correlation_confirm->correlation_between_target_gps_and_vision_confirmed);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM, (const char *)leaf_target_gps_vision_correlation_confirm, MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_MIN_LEN, MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_LEN, MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_CRC);
#endif
}

#if MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_leaf_target_gps_vision_correlation_confirm_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t target_system, uint8_t correlation_between_target_gps_and_vision_confirmed)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, correlation_between_target_gps_and_vision_confirmed);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM, buf, MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_MIN_LEN, MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_LEN, MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_CRC);
#else
    mavlink_leaf_target_gps_vision_correlation_confirm_t *packet = (mavlink_leaf_target_gps_vision_correlation_confirm_t *)msgbuf;
    packet->target_system = target_system;
    packet->correlation_between_target_gps_and_vision_confirmed = correlation_between_target_gps_and_vision_confirmed;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM, (const char *)packet, MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_MIN_LEN, MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_LEN, MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_CRC);
#endif
}
#endif

#endif

// MESSAGE LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM UNPACKING


/**
 * @brief Get field target_system from leaf_target_gps_vision_correlation_confirm message
 *
 * @return  The target system
 */
static inline uint8_t mavlink_msg_leaf_target_gps_vision_correlation_confirm_get_target_system(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field correlation_between_target_gps_and_vision_confirmed from leaf_target_gps_vision_correlation_confirm message
 *
 * @return  1 = the operator confirms the target GPS and the vision track are the same target; 0 = not confirmed
 */
static inline uint8_t mavlink_msg_leaf_target_gps_vision_correlation_confirm_get_correlation_between_target_gps_and_vision_confirmed(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Decode a leaf_target_gps_vision_correlation_confirm message into a struct
 *
 * @param msg The message to decode
 * @param leaf_target_gps_vision_correlation_confirm C-struct to decode the message contents into
 */
static inline void mavlink_msg_leaf_target_gps_vision_correlation_confirm_decode(const mavlink_message_t* msg, mavlink_leaf_target_gps_vision_correlation_confirm_t* leaf_target_gps_vision_correlation_confirm)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    leaf_target_gps_vision_correlation_confirm->target_system = mavlink_msg_leaf_target_gps_vision_correlation_confirm_get_target_system(msg);
    leaf_target_gps_vision_correlation_confirm->correlation_between_target_gps_and_vision_confirmed = mavlink_msg_leaf_target_gps_vision_correlation_confirm_get_correlation_between_target_gps_and_vision_confirmed(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_LEN? msg->len : MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_LEN;
        memset(leaf_target_gps_vision_correlation_confirm, 0, MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_LEN);
    memcpy(leaf_target_gps_vision_correlation_confirm, _MAV_PAYLOAD(msg), len);
#endif
}
