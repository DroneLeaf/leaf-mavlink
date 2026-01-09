#pragma once
// MESSAGE LEAF_MISSION_HEARTBEAT PACKING

#define MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT 77044


typedef struct __mavlink_leaf_mission_heartbeat_t {
 uint8_t mission_status; /*<  The mission status*/
 uint8_t joystick_mode; /*<  The joystick mode*/
 char mission_id[64]; /*<  The id of the mission*/
 uint8_t queue_count; /*<  The number of missions in the queue*/
 uint8_t predefined_actions_status; /*<  The predefined actions status*/
} mavlink_leaf_mission_heartbeat_t;

#define MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_LEN 68
#define MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_MIN_LEN 68
#define MAVLINK_MSG_ID_77044_LEN 68
#define MAVLINK_MSG_ID_77044_MIN_LEN 68

#define MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_CRC 10
#define MAVLINK_MSG_ID_77044_CRC 10

#define MAVLINK_MSG_LEAF_MISSION_HEARTBEAT_FIELD_MISSION_ID_LEN 64

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_LEAF_MISSION_HEARTBEAT { \
    77044, \
    "LEAF_MISSION_HEARTBEAT", \
    5, \
    {  { "mission_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_leaf_mission_heartbeat_t, mission_status) }, \
         { "joystick_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_leaf_mission_heartbeat_t, joystick_mode) }, \
         { "mission_id", NULL, MAVLINK_TYPE_CHAR, 64, 2, offsetof(mavlink_leaf_mission_heartbeat_t, mission_id) }, \
         { "queue_count", NULL, MAVLINK_TYPE_UINT8_T, 0, 66, offsetof(mavlink_leaf_mission_heartbeat_t, queue_count) }, \
         { "predefined_actions_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 67, offsetof(mavlink_leaf_mission_heartbeat_t, predefined_actions_status) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_LEAF_MISSION_HEARTBEAT { \
    "LEAF_MISSION_HEARTBEAT", \
    5, \
    {  { "mission_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_leaf_mission_heartbeat_t, mission_status) }, \
         { "joystick_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_leaf_mission_heartbeat_t, joystick_mode) }, \
         { "mission_id", NULL, MAVLINK_TYPE_CHAR, 64, 2, offsetof(mavlink_leaf_mission_heartbeat_t, mission_id) }, \
         { "queue_count", NULL, MAVLINK_TYPE_UINT8_T, 0, 66, offsetof(mavlink_leaf_mission_heartbeat_t, queue_count) }, \
         { "predefined_actions_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 67, offsetof(mavlink_leaf_mission_heartbeat_t, predefined_actions_status) }, \
         } \
}
#endif

/**
 * @brief Pack a leaf_mission_heartbeat message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param mission_status  The mission status
 * @param joystick_mode  The joystick mode
 * @param mission_id  The id of the mission
 * @param queue_count  The number of missions in the queue
 * @param predefined_actions_status  The predefined actions status
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_mission_heartbeat_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t mission_status, uint8_t joystick_mode, const char *mission_id, uint8_t queue_count, uint8_t predefined_actions_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_LEN];
    _mav_put_uint8_t(buf, 0, mission_status);
    _mav_put_uint8_t(buf, 1, joystick_mode);
    _mav_put_uint8_t(buf, 66, queue_count);
    _mav_put_uint8_t(buf, 67, predefined_actions_status);
    _mav_put_char_array(buf, 2, mission_id, 64);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_LEN);
#else
    mavlink_leaf_mission_heartbeat_t packet;
    packet.mission_status = mission_status;
    packet.joystick_mode = joystick_mode;
    packet.queue_count = queue_count;
    packet.predefined_actions_status = predefined_actions_status;
    mav_array_assign_char(packet.mission_id, mission_id, 64);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_MIN_LEN, MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_LEN, MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_CRC);
}

/**
 * @brief Pack a leaf_mission_heartbeat message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param mission_status  The mission status
 * @param joystick_mode  The joystick mode
 * @param mission_id  The id of the mission
 * @param queue_count  The number of missions in the queue
 * @param predefined_actions_status  The predefined actions status
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_mission_heartbeat_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t mission_status, uint8_t joystick_mode, const char *mission_id, uint8_t queue_count, uint8_t predefined_actions_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_LEN];
    _mav_put_uint8_t(buf, 0, mission_status);
    _mav_put_uint8_t(buf, 1, joystick_mode);
    _mav_put_uint8_t(buf, 66, queue_count);
    _mav_put_uint8_t(buf, 67, predefined_actions_status);
    _mav_put_char_array(buf, 2, mission_id, 64);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_LEN);
#else
    mavlink_leaf_mission_heartbeat_t packet;
    packet.mission_status = mission_status;
    packet.joystick_mode = joystick_mode;
    packet.queue_count = queue_count;
    packet.predefined_actions_status = predefined_actions_status;
    mav_array_memcpy(packet.mission_id, mission_id, sizeof(char)*64);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_MIN_LEN, MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_LEN, MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_MIN_LEN, MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_LEN);
#endif
}

/**
 * @brief Pack a leaf_mission_heartbeat message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param mission_status  The mission status
 * @param joystick_mode  The joystick mode
 * @param mission_id  The id of the mission
 * @param queue_count  The number of missions in the queue
 * @param predefined_actions_status  The predefined actions status
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_mission_heartbeat_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t mission_status,uint8_t joystick_mode,const char *mission_id,uint8_t queue_count,uint8_t predefined_actions_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_LEN];
    _mav_put_uint8_t(buf, 0, mission_status);
    _mav_put_uint8_t(buf, 1, joystick_mode);
    _mav_put_uint8_t(buf, 66, queue_count);
    _mav_put_uint8_t(buf, 67, predefined_actions_status);
    _mav_put_char_array(buf, 2, mission_id, 64);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_LEN);
#else
    mavlink_leaf_mission_heartbeat_t packet;
    packet.mission_status = mission_status;
    packet.joystick_mode = joystick_mode;
    packet.queue_count = queue_count;
    packet.predefined_actions_status = predefined_actions_status;
    mav_array_assign_char(packet.mission_id, mission_id, 64);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_MIN_LEN, MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_LEN, MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_CRC);
}

/**
 * @brief Encode a leaf_mission_heartbeat struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param leaf_mission_heartbeat C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_mission_heartbeat_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_leaf_mission_heartbeat_t* leaf_mission_heartbeat)
{
    return mavlink_msg_leaf_mission_heartbeat_pack(system_id, component_id, msg, leaf_mission_heartbeat->mission_status, leaf_mission_heartbeat->joystick_mode, leaf_mission_heartbeat->mission_id, leaf_mission_heartbeat->queue_count, leaf_mission_heartbeat->predefined_actions_status);
}

/**
 * @brief Encode a leaf_mission_heartbeat struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param leaf_mission_heartbeat C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_mission_heartbeat_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_leaf_mission_heartbeat_t* leaf_mission_heartbeat)
{
    return mavlink_msg_leaf_mission_heartbeat_pack_chan(system_id, component_id, chan, msg, leaf_mission_heartbeat->mission_status, leaf_mission_heartbeat->joystick_mode, leaf_mission_heartbeat->mission_id, leaf_mission_heartbeat->queue_count, leaf_mission_heartbeat->predefined_actions_status);
}

/**
 * @brief Encode a leaf_mission_heartbeat struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param leaf_mission_heartbeat C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_mission_heartbeat_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_leaf_mission_heartbeat_t* leaf_mission_heartbeat)
{
    return mavlink_msg_leaf_mission_heartbeat_pack_status(system_id, component_id, _status, msg,  leaf_mission_heartbeat->mission_status, leaf_mission_heartbeat->joystick_mode, leaf_mission_heartbeat->mission_id, leaf_mission_heartbeat->queue_count, leaf_mission_heartbeat->predefined_actions_status);
}

/**
 * @brief Send a leaf_mission_heartbeat message
 * @param chan MAVLink channel to send the message
 *
 * @param mission_status  The mission status
 * @param joystick_mode  The joystick mode
 * @param mission_id  The id of the mission
 * @param queue_count  The number of missions in the queue
 * @param predefined_actions_status  The predefined actions status
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_leaf_mission_heartbeat_send(mavlink_channel_t chan, uint8_t mission_status, uint8_t joystick_mode, const char *mission_id, uint8_t queue_count, uint8_t predefined_actions_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_LEN];
    _mav_put_uint8_t(buf, 0, mission_status);
    _mav_put_uint8_t(buf, 1, joystick_mode);
    _mav_put_uint8_t(buf, 66, queue_count);
    _mav_put_uint8_t(buf, 67, predefined_actions_status);
    _mav_put_char_array(buf, 2, mission_id, 64);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT, buf, MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_MIN_LEN, MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_LEN, MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_CRC);
#else
    mavlink_leaf_mission_heartbeat_t packet;
    packet.mission_status = mission_status;
    packet.joystick_mode = joystick_mode;
    packet.queue_count = queue_count;
    packet.predefined_actions_status = predefined_actions_status;
    mav_array_assign_char(packet.mission_id, mission_id, 64);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT, (const char *)&packet, MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_MIN_LEN, MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_LEN, MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_CRC);
#endif
}

/**
 * @brief Send a leaf_mission_heartbeat message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_leaf_mission_heartbeat_send_struct(mavlink_channel_t chan, const mavlink_leaf_mission_heartbeat_t* leaf_mission_heartbeat)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_leaf_mission_heartbeat_send(chan, leaf_mission_heartbeat->mission_status, leaf_mission_heartbeat->joystick_mode, leaf_mission_heartbeat->mission_id, leaf_mission_heartbeat->queue_count, leaf_mission_heartbeat->predefined_actions_status);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT, (const char *)leaf_mission_heartbeat, MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_MIN_LEN, MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_LEN, MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_CRC);
#endif
}

#if MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_leaf_mission_heartbeat_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t mission_status, uint8_t joystick_mode, const char *mission_id, uint8_t queue_count, uint8_t predefined_actions_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, mission_status);
    _mav_put_uint8_t(buf, 1, joystick_mode);
    _mav_put_uint8_t(buf, 66, queue_count);
    _mav_put_uint8_t(buf, 67, predefined_actions_status);
    _mav_put_char_array(buf, 2, mission_id, 64);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT, buf, MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_MIN_LEN, MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_LEN, MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_CRC);
#else
    mavlink_leaf_mission_heartbeat_t *packet = (mavlink_leaf_mission_heartbeat_t *)msgbuf;
    packet->mission_status = mission_status;
    packet->joystick_mode = joystick_mode;
    packet->queue_count = queue_count;
    packet->predefined_actions_status = predefined_actions_status;
    mav_array_assign_char(packet->mission_id, mission_id, 64);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT, (const char *)packet, MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_MIN_LEN, MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_LEN, MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_CRC);
#endif
}
#endif

#endif

// MESSAGE LEAF_MISSION_HEARTBEAT UNPACKING


/**
 * @brief Get field mission_status from leaf_mission_heartbeat message
 *
 * @return  The mission status
 */
static inline uint8_t mavlink_msg_leaf_mission_heartbeat_get_mission_status(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field joystick_mode from leaf_mission_heartbeat message
 *
 * @return  The joystick mode
 */
static inline uint8_t mavlink_msg_leaf_mission_heartbeat_get_joystick_mode(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Get field mission_id from leaf_mission_heartbeat message
 *
 * @return  The id of the mission
 */
static inline uint16_t mavlink_msg_leaf_mission_heartbeat_get_mission_id(const mavlink_message_t* msg, char *mission_id)
{
    return _MAV_RETURN_char_array(msg, mission_id, 64,  2);
}

/**
 * @brief Get field queue_count from leaf_mission_heartbeat message
 *
 * @return  The number of missions in the queue
 */
static inline uint8_t mavlink_msg_leaf_mission_heartbeat_get_queue_count(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  66);
}

/**
 * @brief Get field predefined_actions_status from leaf_mission_heartbeat message
 *
 * @return  The predefined actions status
 */
static inline uint8_t mavlink_msg_leaf_mission_heartbeat_get_predefined_actions_status(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  67);
}

/**
 * @brief Decode a leaf_mission_heartbeat message into a struct
 *
 * @param msg The message to decode
 * @param leaf_mission_heartbeat C-struct to decode the message contents into
 */
static inline void mavlink_msg_leaf_mission_heartbeat_decode(const mavlink_message_t* msg, mavlink_leaf_mission_heartbeat_t* leaf_mission_heartbeat)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    leaf_mission_heartbeat->mission_status = mavlink_msg_leaf_mission_heartbeat_get_mission_status(msg);
    leaf_mission_heartbeat->joystick_mode = mavlink_msg_leaf_mission_heartbeat_get_joystick_mode(msg);
    mavlink_msg_leaf_mission_heartbeat_get_mission_id(msg, leaf_mission_heartbeat->mission_id);
    leaf_mission_heartbeat->queue_count = mavlink_msg_leaf_mission_heartbeat_get_queue_count(msg);
    leaf_mission_heartbeat->predefined_actions_status = mavlink_msg_leaf_mission_heartbeat_get_predefined_actions_status(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_LEN? msg->len : MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_LEN;
        memset(leaf_mission_heartbeat, 0, MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_LEN);
    memcpy(leaf_mission_heartbeat, _MAV_PAYLOAD(msg), len);
#endif
}
