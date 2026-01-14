#pragma once
// MESSAGE LEAF_ACK_MISSION_COMPLETE PACKING

#define MAVLINK_MSG_ID_LEAF_ACK_MISSION_COMPLETE 77034


typedef struct __mavlink_leaf_ack_mission_complete_t {
 uint8_t target_system; /*<  The system that completed the mission*/
 char mission_id[64]; /*<  The id of the completed mission*/
} mavlink_leaf_ack_mission_complete_t;

#define MAVLINK_MSG_ID_LEAF_ACK_MISSION_COMPLETE_LEN 65
#define MAVLINK_MSG_ID_LEAF_ACK_MISSION_COMPLETE_MIN_LEN 65
#define MAVLINK_MSG_ID_77034_LEN 65
#define MAVLINK_MSG_ID_77034_MIN_LEN 65

#define MAVLINK_MSG_ID_LEAF_ACK_MISSION_COMPLETE_CRC 14
#define MAVLINK_MSG_ID_77034_CRC 14

#define MAVLINK_MSG_LEAF_ACK_MISSION_COMPLETE_FIELD_MISSION_ID_LEN 64

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_LEAF_ACK_MISSION_COMPLETE { \
    77034, \
    "LEAF_ACK_MISSION_COMPLETE", \
    2, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_leaf_ack_mission_complete_t, target_system) }, \
         { "mission_id", NULL, MAVLINK_TYPE_CHAR, 64, 1, offsetof(mavlink_leaf_ack_mission_complete_t, mission_id) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_LEAF_ACK_MISSION_COMPLETE { \
    "LEAF_ACK_MISSION_COMPLETE", \
    2, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_leaf_ack_mission_complete_t, target_system) }, \
         { "mission_id", NULL, MAVLINK_TYPE_CHAR, 64, 1, offsetof(mavlink_leaf_ack_mission_complete_t, mission_id) }, \
         } \
}
#endif

/**
 * @brief Pack a leaf_ack_mission_complete message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system  The system that completed the mission
 * @param mission_id  The id of the completed mission
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_ack_mission_complete_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t target_system, const char *mission_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_ACK_MISSION_COMPLETE_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_char_array(buf, 1, mission_id, 64);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_ACK_MISSION_COMPLETE_LEN);
#else
    mavlink_leaf_ack_mission_complete_t packet;
    packet.target_system = target_system;
    mav_array_assign_char(packet.mission_id, mission_id, 64);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_ACK_MISSION_COMPLETE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_ACK_MISSION_COMPLETE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_LEAF_ACK_MISSION_COMPLETE_MIN_LEN, MAVLINK_MSG_ID_LEAF_ACK_MISSION_COMPLETE_LEN, MAVLINK_MSG_ID_LEAF_ACK_MISSION_COMPLETE_CRC);
}

/**
 * @brief Pack a leaf_ack_mission_complete message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system  The system that completed the mission
 * @param mission_id  The id of the completed mission
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_ack_mission_complete_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t target_system, const char *mission_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_ACK_MISSION_COMPLETE_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_char_array(buf, 1, mission_id, 64);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_ACK_MISSION_COMPLETE_LEN);
#else
    mavlink_leaf_ack_mission_complete_t packet;
    packet.target_system = target_system;
    mav_array_memcpy(packet.mission_id, mission_id, sizeof(char)*64);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_ACK_MISSION_COMPLETE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_ACK_MISSION_COMPLETE;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_ACK_MISSION_COMPLETE_MIN_LEN, MAVLINK_MSG_ID_LEAF_ACK_MISSION_COMPLETE_LEN, MAVLINK_MSG_ID_LEAF_ACK_MISSION_COMPLETE_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_ACK_MISSION_COMPLETE_MIN_LEN, MAVLINK_MSG_ID_LEAF_ACK_MISSION_COMPLETE_LEN);
#endif
}

/**
 * @brief Pack a leaf_ack_mission_complete message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param target_system  The system that completed the mission
 * @param mission_id  The id of the completed mission
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_ack_mission_complete_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t target_system,const char *mission_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_ACK_MISSION_COMPLETE_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_char_array(buf, 1, mission_id, 64);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_ACK_MISSION_COMPLETE_LEN);
#else
    mavlink_leaf_ack_mission_complete_t packet;
    packet.target_system = target_system;
    mav_array_assign_char(packet.mission_id, mission_id, 64);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_ACK_MISSION_COMPLETE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_ACK_MISSION_COMPLETE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_LEAF_ACK_MISSION_COMPLETE_MIN_LEN, MAVLINK_MSG_ID_LEAF_ACK_MISSION_COMPLETE_LEN, MAVLINK_MSG_ID_LEAF_ACK_MISSION_COMPLETE_CRC);
}

/**
 * @brief Encode a leaf_ack_mission_complete struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param leaf_ack_mission_complete C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_ack_mission_complete_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_leaf_ack_mission_complete_t* leaf_ack_mission_complete)
{
    return mavlink_msg_leaf_ack_mission_complete_pack(system_id, component_id, msg, leaf_ack_mission_complete->target_system, leaf_ack_mission_complete->mission_id);
}

/**
 * @brief Encode a leaf_ack_mission_complete struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param leaf_ack_mission_complete C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_ack_mission_complete_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_leaf_ack_mission_complete_t* leaf_ack_mission_complete)
{
    return mavlink_msg_leaf_ack_mission_complete_pack_chan(system_id, component_id, chan, msg, leaf_ack_mission_complete->target_system, leaf_ack_mission_complete->mission_id);
}

/**
 * @brief Encode a leaf_ack_mission_complete struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param leaf_ack_mission_complete C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_ack_mission_complete_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_leaf_ack_mission_complete_t* leaf_ack_mission_complete)
{
    return mavlink_msg_leaf_ack_mission_complete_pack_status(system_id, component_id, _status, msg,  leaf_ack_mission_complete->target_system, leaf_ack_mission_complete->mission_id);
}

/**
 * @brief Send a leaf_ack_mission_complete message
 * @param chan MAVLink channel to send the message
 *
 * @param target_system  The system that completed the mission
 * @param mission_id  The id of the completed mission
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_leaf_ack_mission_complete_send(mavlink_channel_t chan, uint8_t target_system, const char *mission_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_ACK_MISSION_COMPLETE_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_char_array(buf, 1, mission_id, 64);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_ACK_MISSION_COMPLETE, buf, MAVLINK_MSG_ID_LEAF_ACK_MISSION_COMPLETE_MIN_LEN, MAVLINK_MSG_ID_LEAF_ACK_MISSION_COMPLETE_LEN, MAVLINK_MSG_ID_LEAF_ACK_MISSION_COMPLETE_CRC);
#else
    mavlink_leaf_ack_mission_complete_t packet;
    packet.target_system = target_system;
    mav_array_assign_char(packet.mission_id, mission_id, 64);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_ACK_MISSION_COMPLETE, (const char *)&packet, MAVLINK_MSG_ID_LEAF_ACK_MISSION_COMPLETE_MIN_LEN, MAVLINK_MSG_ID_LEAF_ACK_MISSION_COMPLETE_LEN, MAVLINK_MSG_ID_LEAF_ACK_MISSION_COMPLETE_CRC);
#endif
}

/**
 * @brief Send a leaf_ack_mission_complete message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_leaf_ack_mission_complete_send_struct(mavlink_channel_t chan, const mavlink_leaf_ack_mission_complete_t* leaf_ack_mission_complete)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_leaf_ack_mission_complete_send(chan, leaf_ack_mission_complete->target_system, leaf_ack_mission_complete->mission_id);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_ACK_MISSION_COMPLETE, (const char *)leaf_ack_mission_complete, MAVLINK_MSG_ID_LEAF_ACK_MISSION_COMPLETE_MIN_LEN, MAVLINK_MSG_ID_LEAF_ACK_MISSION_COMPLETE_LEN, MAVLINK_MSG_ID_LEAF_ACK_MISSION_COMPLETE_CRC);
#endif
}

#if MAVLINK_MSG_ID_LEAF_ACK_MISSION_COMPLETE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_leaf_ack_mission_complete_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t target_system, const char *mission_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_char_array(buf, 1, mission_id, 64);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_ACK_MISSION_COMPLETE, buf, MAVLINK_MSG_ID_LEAF_ACK_MISSION_COMPLETE_MIN_LEN, MAVLINK_MSG_ID_LEAF_ACK_MISSION_COMPLETE_LEN, MAVLINK_MSG_ID_LEAF_ACK_MISSION_COMPLETE_CRC);
#else
    mavlink_leaf_ack_mission_complete_t *packet = (mavlink_leaf_ack_mission_complete_t *)msgbuf;
    packet->target_system = target_system;
    mav_array_assign_char(packet->mission_id, mission_id, 64);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_ACK_MISSION_COMPLETE, (const char *)packet, MAVLINK_MSG_ID_LEAF_ACK_MISSION_COMPLETE_MIN_LEN, MAVLINK_MSG_ID_LEAF_ACK_MISSION_COMPLETE_LEN, MAVLINK_MSG_ID_LEAF_ACK_MISSION_COMPLETE_CRC);
#endif
}
#endif

#endif

// MESSAGE LEAF_ACK_MISSION_COMPLETE UNPACKING


/**
 * @brief Get field target_system from leaf_ack_mission_complete message
 *
 * @return  The system that completed the mission
 */
static inline uint8_t mavlink_msg_leaf_ack_mission_complete_get_target_system(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field mission_id from leaf_ack_mission_complete message
 *
 * @return  The id of the completed mission
 */
static inline uint16_t mavlink_msg_leaf_ack_mission_complete_get_mission_id(const mavlink_message_t* msg, char *mission_id)
{
    return _MAV_RETURN_char_array(msg, mission_id, 64,  1);
}

/**
 * @brief Decode a leaf_ack_mission_complete message into a struct
 *
 * @param msg The message to decode
 * @param leaf_ack_mission_complete C-struct to decode the message contents into
 */
static inline void mavlink_msg_leaf_ack_mission_complete_decode(const mavlink_message_t* msg, mavlink_leaf_ack_mission_complete_t* leaf_ack_mission_complete)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    leaf_ack_mission_complete->target_system = mavlink_msg_leaf_ack_mission_complete_get_target_system(msg);
    mavlink_msg_leaf_ack_mission_complete_get_mission_id(msg, leaf_ack_mission_complete->mission_id);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_LEAF_ACK_MISSION_COMPLETE_LEN? msg->len : MAVLINK_MSG_ID_LEAF_ACK_MISSION_COMPLETE_LEN;
        memset(leaf_ack_mission_complete, 0, MAVLINK_MSG_ID_LEAF_ACK_MISSION_COMPLETE_LEN);
    memcpy(leaf_ack_mission_complete, _MAV_PAYLOAD(msg), len);
#endif
}
