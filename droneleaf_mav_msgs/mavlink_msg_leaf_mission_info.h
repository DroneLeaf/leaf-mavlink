#pragma once
// MESSAGE LEAF_MISSION_INFO PACKING

#define MAVLINK_MSG_ID_LEAF_MISSION_INFO 77049


typedef struct __mavlink_leaf_mission_info_t {
 char mission_id[64]; /*<  The id of the active mission*/
 char mission_name[64]; /*<  The name of the active mission*/
 uint8_t mission_type; /*<  The type of mission currently loaded*/
 uint8_t joystick_mode; /*<  The joystick mode*/
} mavlink_leaf_mission_info_t;

#define MAVLINK_MSG_ID_LEAF_MISSION_INFO_LEN 130
#define MAVLINK_MSG_ID_LEAF_MISSION_INFO_MIN_LEN 130
#define MAVLINK_MSG_ID_77049_LEN 130
#define MAVLINK_MSG_ID_77049_MIN_LEN 130

#define MAVLINK_MSG_ID_LEAF_MISSION_INFO_CRC 100
#define MAVLINK_MSG_ID_77049_CRC 100

#define MAVLINK_MSG_LEAF_MISSION_INFO_FIELD_MISSION_ID_LEN 64
#define MAVLINK_MSG_LEAF_MISSION_INFO_FIELD_MISSION_NAME_LEN 64

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_LEAF_MISSION_INFO { \
    77049, \
    "LEAF_MISSION_INFO", \
    4, \
    {  { "mission_id", NULL, MAVLINK_TYPE_CHAR, 64, 0, offsetof(mavlink_leaf_mission_info_t, mission_id) }, \
         { "mission_name", NULL, MAVLINK_TYPE_CHAR, 64, 64, offsetof(mavlink_leaf_mission_info_t, mission_name) }, \
         { "mission_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 128, offsetof(mavlink_leaf_mission_info_t, mission_type) }, \
         { "joystick_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 129, offsetof(mavlink_leaf_mission_info_t, joystick_mode) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_LEAF_MISSION_INFO { \
    "LEAF_MISSION_INFO", \
    4, \
    {  { "mission_id", NULL, MAVLINK_TYPE_CHAR, 64, 0, offsetof(mavlink_leaf_mission_info_t, mission_id) }, \
         { "mission_name", NULL, MAVLINK_TYPE_CHAR, 64, 64, offsetof(mavlink_leaf_mission_info_t, mission_name) }, \
         { "mission_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 128, offsetof(mavlink_leaf_mission_info_t, mission_type) }, \
         { "joystick_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 129, offsetof(mavlink_leaf_mission_info_t, joystick_mode) }, \
         } \
}
#endif

/**
 * @brief Pack a leaf_mission_info message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param mission_id  The id of the active mission
 * @param mission_name  The name of the active mission
 * @param mission_type  The type of mission currently loaded
 * @param joystick_mode  The joystick mode
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_mission_info_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               const char *mission_id, const char *mission_name, uint8_t mission_type, uint8_t joystick_mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_MISSION_INFO_LEN];
    _mav_put_uint8_t(buf, 128, mission_type);
    _mav_put_uint8_t(buf, 129, joystick_mode);
    _mav_put_char_array(buf, 0, mission_id, 64);
    _mav_put_char_array(buf, 64, mission_name, 64);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_MISSION_INFO_LEN);
#else
    mavlink_leaf_mission_info_t packet;
    packet.mission_type = mission_type;
    packet.joystick_mode = joystick_mode;
    mav_array_assign_char(packet.mission_id, mission_id, 64);
    mav_array_assign_char(packet.mission_name, mission_name, 64);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_MISSION_INFO_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_MISSION_INFO;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_LEAF_MISSION_INFO_MIN_LEN, MAVLINK_MSG_ID_LEAF_MISSION_INFO_LEN, MAVLINK_MSG_ID_LEAF_MISSION_INFO_CRC);
}

/**
 * @brief Pack a leaf_mission_info message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param mission_id  The id of the active mission
 * @param mission_name  The name of the active mission
 * @param mission_type  The type of mission currently loaded
 * @param joystick_mode  The joystick mode
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_mission_info_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               const char *mission_id, const char *mission_name, uint8_t mission_type, uint8_t joystick_mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_MISSION_INFO_LEN];
    _mav_put_uint8_t(buf, 128, mission_type);
    _mav_put_uint8_t(buf, 129, joystick_mode);
    _mav_put_char_array(buf, 0, mission_id, 64);
    _mav_put_char_array(buf, 64, mission_name, 64);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_MISSION_INFO_LEN);
#else
    mavlink_leaf_mission_info_t packet;
    packet.mission_type = mission_type;
    packet.joystick_mode = joystick_mode;
    mav_array_memcpy(packet.mission_id, mission_id, sizeof(char)*64);
    mav_array_memcpy(packet.mission_name, mission_name, sizeof(char)*64);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_MISSION_INFO_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_MISSION_INFO;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_MISSION_INFO_MIN_LEN, MAVLINK_MSG_ID_LEAF_MISSION_INFO_LEN, MAVLINK_MSG_ID_LEAF_MISSION_INFO_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_MISSION_INFO_MIN_LEN, MAVLINK_MSG_ID_LEAF_MISSION_INFO_LEN);
#endif
}

/**
 * @brief Pack a leaf_mission_info message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param mission_id  The id of the active mission
 * @param mission_name  The name of the active mission
 * @param mission_type  The type of mission currently loaded
 * @param joystick_mode  The joystick mode
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_mission_info_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   const char *mission_id,const char *mission_name,uint8_t mission_type,uint8_t joystick_mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_MISSION_INFO_LEN];
    _mav_put_uint8_t(buf, 128, mission_type);
    _mav_put_uint8_t(buf, 129, joystick_mode);
    _mav_put_char_array(buf, 0, mission_id, 64);
    _mav_put_char_array(buf, 64, mission_name, 64);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_MISSION_INFO_LEN);
#else
    mavlink_leaf_mission_info_t packet;
    packet.mission_type = mission_type;
    packet.joystick_mode = joystick_mode;
    mav_array_assign_char(packet.mission_id, mission_id, 64);
    mav_array_assign_char(packet.mission_name, mission_name, 64);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_MISSION_INFO_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_MISSION_INFO;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_LEAF_MISSION_INFO_MIN_LEN, MAVLINK_MSG_ID_LEAF_MISSION_INFO_LEN, MAVLINK_MSG_ID_LEAF_MISSION_INFO_CRC);
}

/**
 * @brief Encode a leaf_mission_info struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param leaf_mission_info C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_mission_info_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_leaf_mission_info_t* leaf_mission_info)
{
    return mavlink_msg_leaf_mission_info_pack(system_id, component_id, msg, leaf_mission_info->mission_id, leaf_mission_info->mission_name, leaf_mission_info->mission_type, leaf_mission_info->joystick_mode);
}

/**
 * @brief Encode a leaf_mission_info struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param leaf_mission_info C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_mission_info_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_leaf_mission_info_t* leaf_mission_info)
{
    return mavlink_msg_leaf_mission_info_pack_chan(system_id, component_id, chan, msg, leaf_mission_info->mission_id, leaf_mission_info->mission_name, leaf_mission_info->mission_type, leaf_mission_info->joystick_mode);
}

/**
 * @brief Encode a leaf_mission_info struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param leaf_mission_info C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_mission_info_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_leaf_mission_info_t* leaf_mission_info)
{
    return mavlink_msg_leaf_mission_info_pack_status(system_id, component_id, _status, msg,  leaf_mission_info->mission_id, leaf_mission_info->mission_name, leaf_mission_info->mission_type, leaf_mission_info->joystick_mode);
}

/**
 * @brief Send a leaf_mission_info message
 * @param chan MAVLink channel to send the message
 *
 * @param mission_id  The id of the active mission
 * @param mission_name  The name of the active mission
 * @param mission_type  The type of mission currently loaded
 * @param joystick_mode  The joystick mode
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_leaf_mission_info_send(mavlink_channel_t chan, const char *mission_id, const char *mission_name, uint8_t mission_type, uint8_t joystick_mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_MISSION_INFO_LEN];
    _mav_put_uint8_t(buf, 128, mission_type);
    _mav_put_uint8_t(buf, 129, joystick_mode);
    _mav_put_char_array(buf, 0, mission_id, 64);
    _mav_put_char_array(buf, 64, mission_name, 64);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_MISSION_INFO, buf, MAVLINK_MSG_ID_LEAF_MISSION_INFO_MIN_LEN, MAVLINK_MSG_ID_LEAF_MISSION_INFO_LEN, MAVLINK_MSG_ID_LEAF_MISSION_INFO_CRC);
#else
    mavlink_leaf_mission_info_t packet;
    packet.mission_type = mission_type;
    packet.joystick_mode = joystick_mode;
    mav_array_assign_char(packet.mission_id, mission_id, 64);
    mav_array_assign_char(packet.mission_name, mission_name, 64);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_MISSION_INFO, (const char *)&packet, MAVLINK_MSG_ID_LEAF_MISSION_INFO_MIN_LEN, MAVLINK_MSG_ID_LEAF_MISSION_INFO_LEN, MAVLINK_MSG_ID_LEAF_MISSION_INFO_CRC);
#endif
}

/**
 * @brief Send a leaf_mission_info message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_leaf_mission_info_send_struct(mavlink_channel_t chan, const mavlink_leaf_mission_info_t* leaf_mission_info)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_leaf_mission_info_send(chan, leaf_mission_info->mission_id, leaf_mission_info->mission_name, leaf_mission_info->mission_type, leaf_mission_info->joystick_mode);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_MISSION_INFO, (const char *)leaf_mission_info, MAVLINK_MSG_ID_LEAF_MISSION_INFO_MIN_LEN, MAVLINK_MSG_ID_LEAF_MISSION_INFO_LEN, MAVLINK_MSG_ID_LEAF_MISSION_INFO_CRC);
#endif
}

#if MAVLINK_MSG_ID_LEAF_MISSION_INFO_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_leaf_mission_info_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  const char *mission_id, const char *mission_name, uint8_t mission_type, uint8_t joystick_mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 128, mission_type);
    _mav_put_uint8_t(buf, 129, joystick_mode);
    _mav_put_char_array(buf, 0, mission_id, 64);
    _mav_put_char_array(buf, 64, mission_name, 64);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_MISSION_INFO, buf, MAVLINK_MSG_ID_LEAF_MISSION_INFO_MIN_LEN, MAVLINK_MSG_ID_LEAF_MISSION_INFO_LEN, MAVLINK_MSG_ID_LEAF_MISSION_INFO_CRC);
#else
    mavlink_leaf_mission_info_t *packet = (mavlink_leaf_mission_info_t *)msgbuf;
    packet->mission_type = mission_type;
    packet->joystick_mode = joystick_mode;
    mav_array_assign_char(packet->mission_id, mission_id, 64);
    mav_array_assign_char(packet->mission_name, mission_name, 64);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_MISSION_INFO, (const char *)packet, MAVLINK_MSG_ID_LEAF_MISSION_INFO_MIN_LEN, MAVLINK_MSG_ID_LEAF_MISSION_INFO_LEN, MAVLINK_MSG_ID_LEAF_MISSION_INFO_CRC);
#endif
}
#endif

#endif

// MESSAGE LEAF_MISSION_INFO UNPACKING


/**
 * @brief Get field mission_id from leaf_mission_info message
 *
 * @return  The id of the active mission
 */
static inline uint16_t mavlink_msg_leaf_mission_info_get_mission_id(const mavlink_message_t* msg, char *mission_id)
{
    return _MAV_RETURN_char_array(msg, mission_id, 64,  0);
}

/**
 * @brief Get field mission_name from leaf_mission_info message
 *
 * @return  The name of the active mission
 */
static inline uint16_t mavlink_msg_leaf_mission_info_get_mission_name(const mavlink_message_t* msg, char *mission_name)
{
    return _MAV_RETURN_char_array(msg, mission_name, 64,  64);
}

/**
 * @brief Get field mission_type from leaf_mission_info message
 *
 * @return  The type of mission currently loaded
 */
static inline uint8_t mavlink_msg_leaf_mission_info_get_mission_type(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  128);
}

/**
 * @brief Get field joystick_mode from leaf_mission_info message
 *
 * @return  The joystick mode
 */
static inline uint8_t mavlink_msg_leaf_mission_info_get_joystick_mode(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  129);
}

/**
 * @brief Decode a leaf_mission_info message into a struct
 *
 * @param msg The message to decode
 * @param leaf_mission_info C-struct to decode the message contents into
 */
static inline void mavlink_msg_leaf_mission_info_decode(const mavlink_message_t* msg, mavlink_leaf_mission_info_t* leaf_mission_info)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_leaf_mission_info_get_mission_id(msg, leaf_mission_info->mission_id);
    mavlink_msg_leaf_mission_info_get_mission_name(msg, leaf_mission_info->mission_name);
    leaf_mission_info->mission_type = mavlink_msg_leaf_mission_info_get_mission_type(msg);
    leaf_mission_info->joystick_mode = mavlink_msg_leaf_mission_info_get_joystick_mode(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_LEAF_MISSION_INFO_LEN? msg->len : MAVLINK_MSG_ID_LEAF_MISSION_INFO_LEN;
        memset(leaf_mission_info, 0, MAVLINK_MSG_ID_LEAF_MISSION_INFO_LEN);
    memcpy(leaf_mission_info, _MAV_PAYLOAD(msg), len);
#endif
}
