#pragma once
// MESSAGE LEAF_QGC_MISSION_START PACKING

#define MAVLINK_MSG_ID_LEAF_QGC_MISSION_START 77037


typedef struct __mavlink_leaf_qgc_mission_start_t {
 char mission_id[64]; /*<  The id of the mission to start*/
} mavlink_leaf_qgc_mission_start_t;

#define MAVLINK_MSG_ID_LEAF_QGC_MISSION_START_LEN 64
#define MAVLINK_MSG_ID_LEAF_QGC_MISSION_START_MIN_LEN 64
#define MAVLINK_MSG_ID_77037_LEN 64
#define MAVLINK_MSG_ID_77037_MIN_LEN 64

#define MAVLINK_MSG_ID_LEAF_QGC_MISSION_START_CRC 192
#define MAVLINK_MSG_ID_77037_CRC 192

#define MAVLINK_MSG_LEAF_QGC_MISSION_START_FIELD_MISSION_ID_LEN 64

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_LEAF_QGC_MISSION_START { \
    77037, \
    "LEAF_QGC_MISSION_START", \
    1, \
    {  { "mission_id", NULL, MAVLINK_TYPE_CHAR, 64, 0, offsetof(mavlink_leaf_qgc_mission_start_t, mission_id) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_LEAF_QGC_MISSION_START { \
    "LEAF_QGC_MISSION_START", \
    1, \
    {  { "mission_id", NULL, MAVLINK_TYPE_CHAR, 64, 0, offsetof(mavlink_leaf_qgc_mission_start_t, mission_id) }, \
         } \
}
#endif

/**
 * @brief Pack a leaf_qgc_mission_start message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param mission_id  The id of the mission to start
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_qgc_mission_start_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               const char *mission_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_QGC_MISSION_START_LEN];

    _mav_put_char_array(buf, 0, mission_id, 64);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_QGC_MISSION_START_LEN);
#else
    mavlink_leaf_qgc_mission_start_t packet;

    mav_array_assign_char(packet.mission_id, mission_id, 64);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_QGC_MISSION_START_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_QGC_MISSION_START;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_LEAF_QGC_MISSION_START_MIN_LEN, MAVLINK_MSG_ID_LEAF_QGC_MISSION_START_LEN, MAVLINK_MSG_ID_LEAF_QGC_MISSION_START_CRC);
}

/**
 * @brief Pack a leaf_qgc_mission_start message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param mission_id  The id of the mission to start
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_qgc_mission_start_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               const char *mission_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_QGC_MISSION_START_LEN];

    _mav_put_char_array(buf, 0, mission_id, 64);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_QGC_MISSION_START_LEN);
#else
    mavlink_leaf_qgc_mission_start_t packet;

    mav_array_memcpy(packet.mission_id, mission_id, sizeof(char)*64);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_QGC_MISSION_START_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_QGC_MISSION_START;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_QGC_MISSION_START_MIN_LEN, MAVLINK_MSG_ID_LEAF_QGC_MISSION_START_LEN, MAVLINK_MSG_ID_LEAF_QGC_MISSION_START_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_QGC_MISSION_START_MIN_LEN, MAVLINK_MSG_ID_LEAF_QGC_MISSION_START_LEN);
#endif
}

/**
 * @brief Pack a leaf_qgc_mission_start message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param mission_id  The id of the mission to start
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_qgc_mission_start_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   const char *mission_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_QGC_MISSION_START_LEN];

    _mav_put_char_array(buf, 0, mission_id, 64);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_QGC_MISSION_START_LEN);
#else
    mavlink_leaf_qgc_mission_start_t packet;

    mav_array_assign_char(packet.mission_id, mission_id, 64);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_QGC_MISSION_START_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_QGC_MISSION_START;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_LEAF_QGC_MISSION_START_MIN_LEN, MAVLINK_MSG_ID_LEAF_QGC_MISSION_START_LEN, MAVLINK_MSG_ID_LEAF_QGC_MISSION_START_CRC);
}

/**
 * @brief Encode a leaf_qgc_mission_start struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param leaf_qgc_mission_start C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_qgc_mission_start_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_leaf_qgc_mission_start_t* leaf_qgc_mission_start)
{
    return mavlink_msg_leaf_qgc_mission_start_pack(system_id, component_id, msg, leaf_qgc_mission_start->mission_id);
}

/**
 * @brief Encode a leaf_qgc_mission_start struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param leaf_qgc_mission_start C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_qgc_mission_start_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_leaf_qgc_mission_start_t* leaf_qgc_mission_start)
{
    return mavlink_msg_leaf_qgc_mission_start_pack_chan(system_id, component_id, chan, msg, leaf_qgc_mission_start->mission_id);
}

/**
 * @brief Encode a leaf_qgc_mission_start struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param leaf_qgc_mission_start C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_qgc_mission_start_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_leaf_qgc_mission_start_t* leaf_qgc_mission_start)
{
    return mavlink_msg_leaf_qgc_mission_start_pack_status(system_id, component_id, _status, msg,  leaf_qgc_mission_start->mission_id);
}

/**
 * @brief Send a leaf_qgc_mission_start message
 * @param chan MAVLink channel to send the message
 *
 * @param mission_id  The id of the mission to start
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_leaf_qgc_mission_start_send(mavlink_channel_t chan, const char *mission_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_QGC_MISSION_START_LEN];

    _mav_put_char_array(buf, 0, mission_id, 64);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_QGC_MISSION_START, buf, MAVLINK_MSG_ID_LEAF_QGC_MISSION_START_MIN_LEN, MAVLINK_MSG_ID_LEAF_QGC_MISSION_START_LEN, MAVLINK_MSG_ID_LEAF_QGC_MISSION_START_CRC);
#else
    mavlink_leaf_qgc_mission_start_t packet;

    mav_array_assign_char(packet.mission_id, mission_id, 64);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_QGC_MISSION_START, (const char *)&packet, MAVLINK_MSG_ID_LEAF_QGC_MISSION_START_MIN_LEN, MAVLINK_MSG_ID_LEAF_QGC_MISSION_START_LEN, MAVLINK_MSG_ID_LEAF_QGC_MISSION_START_CRC);
#endif
}

/**
 * @brief Send a leaf_qgc_mission_start message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_leaf_qgc_mission_start_send_struct(mavlink_channel_t chan, const mavlink_leaf_qgc_mission_start_t* leaf_qgc_mission_start)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_leaf_qgc_mission_start_send(chan, leaf_qgc_mission_start->mission_id);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_QGC_MISSION_START, (const char *)leaf_qgc_mission_start, MAVLINK_MSG_ID_LEAF_QGC_MISSION_START_MIN_LEN, MAVLINK_MSG_ID_LEAF_QGC_MISSION_START_LEN, MAVLINK_MSG_ID_LEAF_QGC_MISSION_START_CRC);
#endif
}

#if MAVLINK_MSG_ID_LEAF_QGC_MISSION_START_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_leaf_qgc_mission_start_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  const char *mission_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;

    _mav_put_char_array(buf, 0, mission_id, 64);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_QGC_MISSION_START, buf, MAVLINK_MSG_ID_LEAF_QGC_MISSION_START_MIN_LEN, MAVLINK_MSG_ID_LEAF_QGC_MISSION_START_LEN, MAVLINK_MSG_ID_LEAF_QGC_MISSION_START_CRC);
#else
    mavlink_leaf_qgc_mission_start_t *packet = (mavlink_leaf_qgc_mission_start_t *)msgbuf;

    mav_array_assign_char(packet->mission_id, mission_id, 64);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_QGC_MISSION_START, (const char *)packet, MAVLINK_MSG_ID_LEAF_QGC_MISSION_START_MIN_LEN, MAVLINK_MSG_ID_LEAF_QGC_MISSION_START_LEN, MAVLINK_MSG_ID_LEAF_QGC_MISSION_START_CRC);
#endif
}
#endif

#endif

// MESSAGE LEAF_QGC_MISSION_START UNPACKING


/**
 * @brief Get field mission_id from leaf_qgc_mission_start message
 *
 * @return  The id of the mission to start
 */
static inline uint16_t mavlink_msg_leaf_qgc_mission_start_get_mission_id(const mavlink_message_t* msg, char *mission_id)
{
    return _MAV_RETURN_char_array(msg, mission_id, 64,  0);
}

/**
 * @brief Decode a leaf_qgc_mission_start message into a struct
 *
 * @param msg The message to decode
 * @param leaf_qgc_mission_start C-struct to decode the message contents into
 */
static inline void mavlink_msg_leaf_qgc_mission_start_decode(const mavlink_message_t* msg, mavlink_leaf_qgc_mission_start_t* leaf_qgc_mission_start)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_leaf_qgc_mission_start_get_mission_id(msg, leaf_qgc_mission_start->mission_id);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_LEAF_QGC_MISSION_START_LEN? msg->len : MAVLINK_MSG_ID_LEAF_QGC_MISSION_START_LEN;
        memset(leaf_qgc_mission_start, 0, MAVLINK_MSG_ID_LEAF_QGC_MISSION_START_LEN);
    memcpy(leaf_qgc_mission_start, _MAV_PAYLOAD(msg), len);
#endif
}
