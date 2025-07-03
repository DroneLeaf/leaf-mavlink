#pragma once
// MESSAGE LEAF_HEARTBEAT PACKING

#define MAVLINK_MSG_ID_LEAF_HEARTBEAT 77022


typedef struct __mavlink_leaf_heartbeat_t {
 uint8_t status; /*<  The status of the system*/
 uint8_t mode; /*<  The mode of the system*/
 char profile[64]; /*<  The profile of the system*/
 char version[64]; /*<  The version of the system*/
} mavlink_leaf_heartbeat_t;

#define MAVLINK_MSG_ID_LEAF_HEARTBEAT_LEN 130
#define MAVLINK_MSG_ID_LEAF_HEARTBEAT_MIN_LEN 130
#define MAVLINK_MSG_ID_77022_LEN 130
#define MAVLINK_MSG_ID_77022_MIN_LEN 130

#define MAVLINK_MSG_ID_LEAF_HEARTBEAT_CRC 7
#define MAVLINK_MSG_ID_77022_CRC 7

#define MAVLINK_MSG_LEAF_HEARTBEAT_FIELD_PROFILE_LEN 64
#define MAVLINK_MSG_LEAF_HEARTBEAT_FIELD_VERSION_LEN 64

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_LEAF_HEARTBEAT { \
    77022, \
    "LEAF_HEARTBEAT", \
    4, \
    {  { "status", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_leaf_heartbeat_t, status) }, \
         { "mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_leaf_heartbeat_t, mode) }, \
         { "profile", NULL, MAVLINK_TYPE_CHAR, 64, 2, offsetof(mavlink_leaf_heartbeat_t, profile) }, \
         { "version", NULL, MAVLINK_TYPE_CHAR, 64, 66, offsetof(mavlink_leaf_heartbeat_t, version) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_LEAF_HEARTBEAT { \
    "LEAF_HEARTBEAT", \
    4, \
    {  { "status", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_leaf_heartbeat_t, status) }, \
         { "mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_leaf_heartbeat_t, mode) }, \
         { "profile", NULL, MAVLINK_TYPE_CHAR, 64, 2, offsetof(mavlink_leaf_heartbeat_t, profile) }, \
         { "version", NULL, MAVLINK_TYPE_CHAR, 64, 66, offsetof(mavlink_leaf_heartbeat_t, version) }, \
         } \
}
#endif

/**
 * @brief Pack a leaf_heartbeat message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param status  The status of the system
 * @param mode  The mode of the system
 * @param profile  The profile of the system
 * @param version  The version of the system
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_heartbeat_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t status, uint8_t mode, const char *profile, const char *version)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_HEARTBEAT_LEN];
    _mav_put_uint8_t(buf, 0, status);
    _mav_put_uint8_t(buf, 1, mode);
    _mav_put_char_array(buf, 2, profile, 64);
    _mav_put_char_array(buf, 66, version, 64);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_HEARTBEAT_LEN);
#else
    mavlink_leaf_heartbeat_t packet;
    packet.status = status;
    packet.mode = mode;
    mav_array_assign_char(packet.profile, profile, 64);
    mav_array_assign_char(packet.version, version, 64);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_HEARTBEAT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_HEARTBEAT;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_LEAF_HEARTBEAT_MIN_LEN, MAVLINK_MSG_ID_LEAF_HEARTBEAT_LEN, MAVLINK_MSG_ID_LEAF_HEARTBEAT_CRC);
}

/**
 * @brief Pack a leaf_heartbeat message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param status  The status of the system
 * @param mode  The mode of the system
 * @param profile  The profile of the system
 * @param version  The version of the system
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_heartbeat_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t status, uint8_t mode, const char *profile, const char *version)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_HEARTBEAT_LEN];
    _mav_put_uint8_t(buf, 0, status);
    _mav_put_uint8_t(buf, 1, mode);
    _mav_put_char_array(buf, 2, profile, 64);
    _mav_put_char_array(buf, 66, version, 64);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_HEARTBEAT_LEN);
#else
    mavlink_leaf_heartbeat_t packet;
    packet.status = status;
    packet.mode = mode;
    mav_array_memcpy(packet.profile, profile, sizeof(char)*64);
    mav_array_memcpy(packet.version, version, sizeof(char)*64);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_HEARTBEAT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_HEARTBEAT;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_HEARTBEAT_MIN_LEN, MAVLINK_MSG_ID_LEAF_HEARTBEAT_LEN, MAVLINK_MSG_ID_LEAF_HEARTBEAT_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_HEARTBEAT_MIN_LEN, MAVLINK_MSG_ID_LEAF_HEARTBEAT_LEN);
#endif
}

/**
 * @brief Pack a leaf_heartbeat message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param status  The status of the system
 * @param mode  The mode of the system
 * @param profile  The profile of the system
 * @param version  The version of the system
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_heartbeat_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t status,uint8_t mode,const char *profile,const char *version)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_HEARTBEAT_LEN];
    _mav_put_uint8_t(buf, 0, status);
    _mav_put_uint8_t(buf, 1, mode);
    _mav_put_char_array(buf, 2, profile, 64);
    _mav_put_char_array(buf, 66, version, 64);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_HEARTBEAT_LEN);
#else
    mavlink_leaf_heartbeat_t packet;
    packet.status = status;
    packet.mode = mode;
    mav_array_assign_char(packet.profile, profile, 64);
    mav_array_assign_char(packet.version, version, 64);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_HEARTBEAT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_HEARTBEAT;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_LEAF_HEARTBEAT_MIN_LEN, MAVLINK_MSG_ID_LEAF_HEARTBEAT_LEN, MAVLINK_MSG_ID_LEAF_HEARTBEAT_CRC);
}

/**
 * @brief Encode a leaf_heartbeat struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param leaf_heartbeat C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_heartbeat_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_leaf_heartbeat_t* leaf_heartbeat)
{
    return mavlink_msg_leaf_heartbeat_pack(system_id, component_id, msg, leaf_heartbeat->status, leaf_heartbeat->mode, leaf_heartbeat->profile, leaf_heartbeat->version);
}

/**
 * @brief Encode a leaf_heartbeat struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param leaf_heartbeat C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_heartbeat_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_leaf_heartbeat_t* leaf_heartbeat)
{
    return mavlink_msg_leaf_heartbeat_pack_chan(system_id, component_id, chan, msg, leaf_heartbeat->status, leaf_heartbeat->mode, leaf_heartbeat->profile, leaf_heartbeat->version);
}

/**
 * @brief Encode a leaf_heartbeat struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param leaf_heartbeat C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_heartbeat_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_leaf_heartbeat_t* leaf_heartbeat)
{
    return mavlink_msg_leaf_heartbeat_pack_status(system_id, component_id, _status, msg,  leaf_heartbeat->status, leaf_heartbeat->mode, leaf_heartbeat->profile, leaf_heartbeat->version);
}

/**
 * @brief Send a leaf_heartbeat message
 * @param chan MAVLink channel to send the message
 *
 * @param status  The status of the system
 * @param mode  The mode of the system
 * @param profile  The profile of the system
 * @param version  The version of the system
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_leaf_heartbeat_send(mavlink_channel_t chan, uint8_t status, uint8_t mode, const char *profile, const char *version)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_HEARTBEAT_LEN];
    _mav_put_uint8_t(buf, 0, status);
    _mav_put_uint8_t(buf, 1, mode);
    _mav_put_char_array(buf, 2, profile, 64);
    _mav_put_char_array(buf, 66, version, 64);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_HEARTBEAT, buf, MAVLINK_MSG_ID_LEAF_HEARTBEAT_MIN_LEN, MAVLINK_MSG_ID_LEAF_HEARTBEAT_LEN, MAVLINK_MSG_ID_LEAF_HEARTBEAT_CRC);
#else
    mavlink_leaf_heartbeat_t packet;
    packet.status = status;
    packet.mode = mode;
    mav_array_assign_char(packet.profile, profile, 64);
    mav_array_assign_char(packet.version, version, 64);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_HEARTBEAT, (const char *)&packet, MAVLINK_MSG_ID_LEAF_HEARTBEAT_MIN_LEN, MAVLINK_MSG_ID_LEAF_HEARTBEAT_LEN, MAVLINK_MSG_ID_LEAF_HEARTBEAT_CRC);
#endif
}

/**
 * @brief Send a leaf_heartbeat message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_leaf_heartbeat_send_struct(mavlink_channel_t chan, const mavlink_leaf_heartbeat_t* leaf_heartbeat)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_leaf_heartbeat_send(chan, leaf_heartbeat->status, leaf_heartbeat->mode, leaf_heartbeat->profile, leaf_heartbeat->version);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_HEARTBEAT, (const char *)leaf_heartbeat, MAVLINK_MSG_ID_LEAF_HEARTBEAT_MIN_LEN, MAVLINK_MSG_ID_LEAF_HEARTBEAT_LEN, MAVLINK_MSG_ID_LEAF_HEARTBEAT_CRC);
#endif
}

#if MAVLINK_MSG_ID_LEAF_HEARTBEAT_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_leaf_heartbeat_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t status, uint8_t mode, const char *profile, const char *version)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, status);
    _mav_put_uint8_t(buf, 1, mode);
    _mav_put_char_array(buf, 2, profile, 64);
    _mav_put_char_array(buf, 66, version, 64);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_HEARTBEAT, buf, MAVLINK_MSG_ID_LEAF_HEARTBEAT_MIN_LEN, MAVLINK_MSG_ID_LEAF_HEARTBEAT_LEN, MAVLINK_MSG_ID_LEAF_HEARTBEAT_CRC);
#else
    mavlink_leaf_heartbeat_t *packet = (mavlink_leaf_heartbeat_t *)msgbuf;
    packet->status = status;
    packet->mode = mode;
    mav_array_assign_char(packet->profile, profile, 64);
    mav_array_assign_char(packet->version, version, 64);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_HEARTBEAT, (const char *)packet, MAVLINK_MSG_ID_LEAF_HEARTBEAT_MIN_LEN, MAVLINK_MSG_ID_LEAF_HEARTBEAT_LEN, MAVLINK_MSG_ID_LEAF_HEARTBEAT_CRC);
#endif
}
#endif

#endif

// MESSAGE LEAF_HEARTBEAT UNPACKING


/**
 * @brief Get field status from leaf_heartbeat message
 *
 * @return  The status of the system
 */
static inline uint8_t mavlink_msg_leaf_heartbeat_get_status(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field mode from leaf_heartbeat message
 *
 * @return  The mode of the system
 */
static inline uint8_t mavlink_msg_leaf_heartbeat_get_mode(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Get field profile from leaf_heartbeat message
 *
 * @return  The profile of the system
 */
static inline uint16_t mavlink_msg_leaf_heartbeat_get_profile(const mavlink_message_t* msg, char *profile)
{
    return _MAV_RETURN_char_array(msg, profile, 64,  2);
}

/**
 * @brief Get field version from leaf_heartbeat message
 *
 * @return  The version of the system
 */
static inline uint16_t mavlink_msg_leaf_heartbeat_get_version(const mavlink_message_t* msg, char *version)
{
    return _MAV_RETURN_char_array(msg, version, 64,  66);
}

/**
 * @brief Decode a leaf_heartbeat message into a struct
 *
 * @param msg The message to decode
 * @param leaf_heartbeat C-struct to decode the message contents into
 */
static inline void mavlink_msg_leaf_heartbeat_decode(const mavlink_message_t* msg, mavlink_leaf_heartbeat_t* leaf_heartbeat)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    leaf_heartbeat->status = mavlink_msg_leaf_heartbeat_get_status(msg);
    leaf_heartbeat->mode = mavlink_msg_leaf_heartbeat_get_mode(msg);
    mavlink_msg_leaf_heartbeat_get_profile(msg, leaf_heartbeat->profile);
    mavlink_msg_leaf_heartbeat_get_version(msg, leaf_heartbeat->version);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_LEAF_HEARTBEAT_LEN? msg->len : MAVLINK_MSG_ID_LEAF_HEARTBEAT_LEN;
        memset(leaf_heartbeat, 0, MAVLINK_MSG_ID_LEAF_HEARTBEAT_LEN);
    memcpy(leaf_heartbeat, _MAV_PAYLOAD(msg), len);
#endif
}
