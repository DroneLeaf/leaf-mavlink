#pragma once
// MESSAGE LEAF_SAY_TO_QGC PACKING

#define MAVLINK_MSG_ID_LEAF_SAY_TO_QGC 77016


typedef struct __mavlink_leaf_say_to_qgc_t {
 uint8_t target_system; /*<  The system needs to say something to QGC*/
 char content[64]; /*<  The message to say*/
} mavlink_leaf_say_to_qgc_t;

#define MAVLINK_MSG_ID_LEAF_SAY_TO_QGC_LEN 65
#define MAVLINK_MSG_ID_LEAF_SAY_TO_QGC_MIN_LEN 65
#define MAVLINK_MSG_ID_77016_LEN 65
#define MAVLINK_MSG_ID_77016_MIN_LEN 65

#define MAVLINK_MSG_ID_LEAF_SAY_TO_QGC_CRC 23
#define MAVLINK_MSG_ID_77016_CRC 23

#define MAVLINK_MSG_LEAF_SAY_TO_QGC_FIELD_CONTENT_LEN 64

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_LEAF_SAY_TO_QGC { \
    77016, \
    "LEAF_SAY_TO_QGC", \
    2, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_leaf_say_to_qgc_t, target_system) }, \
         { "content", NULL, MAVLINK_TYPE_CHAR, 64, 1, offsetof(mavlink_leaf_say_to_qgc_t, content) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_LEAF_SAY_TO_QGC { \
    "LEAF_SAY_TO_QGC", \
    2, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_leaf_say_to_qgc_t, target_system) }, \
         { "content", NULL, MAVLINK_TYPE_CHAR, 64, 1, offsetof(mavlink_leaf_say_to_qgc_t, content) }, \
         } \
}
#endif

/**
 * @brief Pack a leaf_say_to_qgc message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system  The system needs to say something to QGC
 * @param content  The message to say
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_say_to_qgc_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t target_system, const char *content)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_SAY_TO_QGC_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_char_array(buf, 1, content, 64);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_SAY_TO_QGC_LEN);
#else
    mavlink_leaf_say_to_qgc_t packet;
    packet.target_system = target_system;
    mav_array_assign_char(packet.content, content, 64);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_SAY_TO_QGC_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_SAY_TO_QGC;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_LEAF_SAY_TO_QGC_MIN_LEN, MAVLINK_MSG_ID_LEAF_SAY_TO_QGC_LEN, MAVLINK_MSG_ID_LEAF_SAY_TO_QGC_CRC);
}

/**
 * @brief Pack a leaf_say_to_qgc message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system  The system needs to say something to QGC
 * @param content  The message to say
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_say_to_qgc_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t target_system, const char *content)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_SAY_TO_QGC_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_char_array(buf, 1, content, 64);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_SAY_TO_QGC_LEN);
#else
    mavlink_leaf_say_to_qgc_t packet;
    packet.target_system = target_system;
    mav_array_memcpy(packet.content, content, sizeof(char)*64);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_SAY_TO_QGC_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_SAY_TO_QGC;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_SAY_TO_QGC_MIN_LEN, MAVLINK_MSG_ID_LEAF_SAY_TO_QGC_LEN, MAVLINK_MSG_ID_LEAF_SAY_TO_QGC_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_SAY_TO_QGC_MIN_LEN, MAVLINK_MSG_ID_LEAF_SAY_TO_QGC_LEN);
#endif
}

/**
 * @brief Pack a leaf_say_to_qgc message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param target_system  The system needs to say something to QGC
 * @param content  The message to say
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_say_to_qgc_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t target_system,const char *content)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_SAY_TO_QGC_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_char_array(buf, 1, content, 64);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_SAY_TO_QGC_LEN);
#else
    mavlink_leaf_say_to_qgc_t packet;
    packet.target_system = target_system;
    mav_array_assign_char(packet.content, content, 64);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_SAY_TO_QGC_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_SAY_TO_QGC;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_LEAF_SAY_TO_QGC_MIN_LEN, MAVLINK_MSG_ID_LEAF_SAY_TO_QGC_LEN, MAVLINK_MSG_ID_LEAF_SAY_TO_QGC_CRC);
}

/**
 * @brief Encode a leaf_say_to_qgc struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param leaf_say_to_qgc C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_say_to_qgc_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_leaf_say_to_qgc_t* leaf_say_to_qgc)
{
    return mavlink_msg_leaf_say_to_qgc_pack(system_id, component_id, msg, leaf_say_to_qgc->target_system, leaf_say_to_qgc->content);
}

/**
 * @brief Encode a leaf_say_to_qgc struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param leaf_say_to_qgc C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_say_to_qgc_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_leaf_say_to_qgc_t* leaf_say_to_qgc)
{
    return mavlink_msg_leaf_say_to_qgc_pack_chan(system_id, component_id, chan, msg, leaf_say_to_qgc->target_system, leaf_say_to_qgc->content);
}

/**
 * @brief Encode a leaf_say_to_qgc struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param leaf_say_to_qgc C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_say_to_qgc_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_leaf_say_to_qgc_t* leaf_say_to_qgc)
{
    return mavlink_msg_leaf_say_to_qgc_pack_status(system_id, component_id, _status, msg,  leaf_say_to_qgc->target_system, leaf_say_to_qgc->content);
}

/**
 * @brief Send a leaf_say_to_qgc message
 * @param chan MAVLink channel to send the message
 *
 * @param target_system  The system needs to say something to QGC
 * @param content  The message to say
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_leaf_say_to_qgc_send(mavlink_channel_t chan, uint8_t target_system, const char *content)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_SAY_TO_QGC_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_char_array(buf, 1, content, 64);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_SAY_TO_QGC, buf, MAVLINK_MSG_ID_LEAF_SAY_TO_QGC_MIN_LEN, MAVLINK_MSG_ID_LEAF_SAY_TO_QGC_LEN, MAVLINK_MSG_ID_LEAF_SAY_TO_QGC_CRC);
#else
    mavlink_leaf_say_to_qgc_t packet;
    packet.target_system = target_system;
    mav_array_assign_char(packet.content, content, 64);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_SAY_TO_QGC, (const char *)&packet, MAVLINK_MSG_ID_LEAF_SAY_TO_QGC_MIN_LEN, MAVLINK_MSG_ID_LEAF_SAY_TO_QGC_LEN, MAVLINK_MSG_ID_LEAF_SAY_TO_QGC_CRC);
#endif
}

/**
 * @brief Send a leaf_say_to_qgc message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_leaf_say_to_qgc_send_struct(mavlink_channel_t chan, const mavlink_leaf_say_to_qgc_t* leaf_say_to_qgc)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_leaf_say_to_qgc_send(chan, leaf_say_to_qgc->target_system, leaf_say_to_qgc->content);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_SAY_TO_QGC, (const char *)leaf_say_to_qgc, MAVLINK_MSG_ID_LEAF_SAY_TO_QGC_MIN_LEN, MAVLINK_MSG_ID_LEAF_SAY_TO_QGC_LEN, MAVLINK_MSG_ID_LEAF_SAY_TO_QGC_CRC);
#endif
}

#if MAVLINK_MSG_ID_LEAF_SAY_TO_QGC_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_leaf_say_to_qgc_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t target_system, const char *content)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_char_array(buf, 1, content, 64);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_SAY_TO_QGC, buf, MAVLINK_MSG_ID_LEAF_SAY_TO_QGC_MIN_LEN, MAVLINK_MSG_ID_LEAF_SAY_TO_QGC_LEN, MAVLINK_MSG_ID_LEAF_SAY_TO_QGC_CRC);
#else
    mavlink_leaf_say_to_qgc_t *packet = (mavlink_leaf_say_to_qgc_t *)msgbuf;
    packet->target_system = target_system;
    mav_array_assign_char(packet->content, content, 64);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_SAY_TO_QGC, (const char *)packet, MAVLINK_MSG_ID_LEAF_SAY_TO_QGC_MIN_LEN, MAVLINK_MSG_ID_LEAF_SAY_TO_QGC_LEN, MAVLINK_MSG_ID_LEAF_SAY_TO_QGC_CRC);
#endif
}
#endif

#endif

// MESSAGE LEAF_SAY_TO_QGC UNPACKING


/**
 * @brief Get field target_system from leaf_say_to_qgc message
 *
 * @return  The system needs to say something to QGC
 */
static inline uint8_t mavlink_msg_leaf_say_to_qgc_get_target_system(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field content from leaf_say_to_qgc message
 *
 * @return  The message to say
 */
static inline uint16_t mavlink_msg_leaf_say_to_qgc_get_content(const mavlink_message_t* msg, char *content)
{
    return _MAV_RETURN_char_array(msg, content, 64,  1);
}

/**
 * @brief Decode a leaf_say_to_qgc message into a struct
 *
 * @param msg The message to decode
 * @param leaf_say_to_qgc C-struct to decode the message contents into
 */
static inline void mavlink_msg_leaf_say_to_qgc_decode(const mavlink_message_t* msg, mavlink_leaf_say_to_qgc_t* leaf_say_to_qgc)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    leaf_say_to_qgc->target_system = mavlink_msg_leaf_say_to_qgc_get_target_system(msg);
    mavlink_msg_leaf_say_to_qgc_get_content(msg, leaf_say_to_qgc->content);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_LEAF_SAY_TO_QGC_LEN? msg->len : MAVLINK_MSG_ID_LEAF_SAY_TO_QGC_LEN;
        memset(leaf_say_to_qgc, 0, MAVLINK_MSG_ID_LEAF_SAY_TO_QGC_LEN);
    memcpy(leaf_say_to_qgc, _MAV_PAYLOAD(msg), len);
#endif
}
