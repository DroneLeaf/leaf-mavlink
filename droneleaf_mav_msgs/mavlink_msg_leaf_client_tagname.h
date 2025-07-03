#pragma once
// MESSAGE LEAF_CLIENT_TAGNAME PACKING

#define MAVLINK_MSG_ID_LEAF_CLIENT_TAGNAME 77018


typedef struct __mavlink_leaf_client_tagname_t {
 char tagname[64]; /*<  The tag name of the client*/
} mavlink_leaf_client_tagname_t;

#define MAVLINK_MSG_ID_LEAF_CLIENT_TAGNAME_LEN 64
#define MAVLINK_MSG_ID_LEAF_CLIENT_TAGNAME_MIN_LEN 64
#define MAVLINK_MSG_ID_77018_LEN 64
#define MAVLINK_MSG_ID_77018_MIN_LEN 64

#define MAVLINK_MSG_ID_LEAF_CLIENT_TAGNAME_CRC 234
#define MAVLINK_MSG_ID_77018_CRC 234

#define MAVLINK_MSG_LEAF_CLIENT_TAGNAME_FIELD_TAGNAME_LEN 64

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_LEAF_CLIENT_TAGNAME { \
    77018, \
    "LEAF_CLIENT_TAGNAME", \
    1, \
    {  { "tagname", NULL, MAVLINK_TYPE_CHAR, 64, 0, offsetof(mavlink_leaf_client_tagname_t, tagname) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_LEAF_CLIENT_TAGNAME { \
    "LEAF_CLIENT_TAGNAME", \
    1, \
    {  { "tagname", NULL, MAVLINK_TYPE_CHAR, 64, 0, offsetof(mavlink_leaf_client_tagname_t, tagname) }, \
         } \
}
#endif

/**
 * @brief Pack a leaf_client_tagname message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param tagname  The tag name of the client
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_client_tagname_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               const char *tagname)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_CLIENT_TAGNAME_LEN];

    _mav_put_char_array(buf, 0, tagname, 64);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_CLIENT_TAGNAME_LEN);
#else
    mavlink_leaf_client_tagname_t packet;

    mav_array_assign_char(packet.tagname, tagname, 64);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_CLIENT_TAGNAME_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_CLIENT_TAGNAME;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_LEAF_CLIENT_TAGNAME_MIN_LEN, MAVLINK_MSG_ID_LEAF_CLIENT_TAGNAME_LEN, MAVLINK_MSG_ID_LEAF_CLIENT_TAGNAME_CRC);
}

/**
 * @brief Pack a leaf_client_tagname message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param tagname  The tag name of the client
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_client_tagname_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               const char *tagname)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_CLIENT_TAGNAME_LEN];

    _mav_put_char_array(buf, 0, tagname, 64);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_CLIENT_TAGNAME_LEN);
#else
    mavlink_leaf_client_tagname_t packet;

    mav_array_memcpy(packet.tagname, tagname, sizeof(char)*64);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_CLIENT_TAGNAME_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_CLIENT_TAGNAME;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_CLIENT_TAGNAME_MIN_LEN, MAVLINK_MSG_ID_LEAF_CLIENT_TAGNAME_LEN, MAVLINK_MSG_ID_LEAF_CLIENT_TAGNAME_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_CLIENT_TAGNAME_MIN_LEN, MAVLINK_MSG_ID_LEAF_CLIENT_TAGNAME_LEN);
#endif
}

/**
 * @brief Pack a leaf_client_tagname message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param tagname  The tag name of the client
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_client_tagname_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   const char *tagname)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_CLIENT_TAGNAME_LEN];

    _mav_put_char_array(buf, 0, tagname, 64);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_CLIENT_TAGNAME_LEN);
#else
    mavlink_leaf_client_tagname_t packet;

    mav_array_assign_char(packet.tagname, tagname, 64);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_CLIENT_TAGNAME_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_CLIENT_TAGNAME;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_LEAF_CLIENT_TAGNAME_MIN_LEN, MAVLINK_MSG_ID_LEAF_CLIENT_TAGNAME_LEN, MAVLINK_MSG_ID_LEAF_CLIENT_TAGNAME_CRC);
}

/**
 * @brief Encode a leaf_client_tagname struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param leaf_client_tagname C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_client_tagname_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_leaf_client_tagname_t* leaf_client_tagname)
{
    return mavlink_msg_leaf_client_tagname_pack(system_id, component_id, msg, leaf_client_tagname->tagname);
}

/**
 * @brief Encode a leaf_client_tagname struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param leaf_client_tagname C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_client_tagname_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_leaf_client_tagname_t* leaf_client_tagname)
{
    return mavlink_msg_leaf_client_tagname_pack_chan(system_id, component_id, chan, msg, leaf_client_tagname->tagname);
}

/**
 * @brief Encode a leaf_client_tagname struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param leaf_client_tagname C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_client_tagname_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_leaf_client_tagname_t* leaf_client_tagname)
{
    return mavlink_msg_leaf_client_tagname_pack_status(system_id, component_id, _status, msg,  leaf_client_tagname->tagname);
}

/**
 * @brief Send a leaf_client_tagname message
 * @param chan MAVLink channel to send the message
 *
 * @param tagname  The tag name of the client
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_leaf_client_tagname_send(mavlink_channel_t chan, const char *tagname)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_CLIENT_TAGNAME_LEN];

    _mav_put_char_array(buf, 0, tagname, 64);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_CLIENT_TAGNAME, buf, MAVLINK_MSG_ID_LEAF_CLIENT_TAGNAME_MIN_LEN, MAVLINK_MSG_ID_LEAF_CLIENT_TAGNAME_LEN, MAVLINK_MSG_ID_LEAF_CLIENT_TAGNAME_CRC);
#else
    mavlink_leaf_client_tagname_t packet;

    mav_array_assign_char(packet.tagname, tagname, 64);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_CLIENT_TAGNAME, (const char *)&packet, MAVLINK_MSG_ID_LEAF_CLIENT_TAGNAME_MIN_LEN, MAVLINK_MSG_ID_LEAF_CLIENT_TAGNAME_LEN, MAVLINK_MSG_ID_LEAF_CLIENT_TAGNAME_CRC);
#endif
}

/**
 * @brief Send a leaf_client_tagname message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_leaf_client_tagname_send_struct(mavlink_channel_t chan, const mavlink_leaf_client_tagname_t* leaf_client_tagname)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_leaf_client_tagname_send(chan, leaf_client_tagname->tagname);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_CLIENT_TAGNAME, (const char *)leaf_client_tagname, MAVLINK_MSG_ID_LEAF_CLIENT_TAGNAME_MIN_LEN, MAVLINK_MSG_ID_LEAF_CLIENT_TAGNAME_LEN, MAVLINK_MSG_ID_LEAF_CLIENT_TAGNAME_CRC);
#endif
}

#if MAVLINK_MSG_ID_LEAF_CLIENT_TAGNAME_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_leaf_client_tagname_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  const char *tagname)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;

    _mav_put_char_array(buf, 0, tagname, 64);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_CLIENT_TAGNAME, buf, MAVLINK_MSG_ID_LEAF_CLIENT_TAGNAME_MIN_LEN, MAVLINK_MSG_ID_LEAF_CLIENT_TAGNAME_LEN, MAVLINK_MSG_ID_LEAF_CLIENT_TAGNAME_CRC);
#else
    mavlink_leaf_client_tagname_t *packet = (mavlink_leaf_client_tagname_t *)msgbuf;

    mav_array_assign_char(packet->tagname, tagname, 64);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_CLIENT_TAGNAME, (const char *)packet, MAVLINK_MSG_ID_LEAF_CLIENT_TAGNAME_MIN_LEN, MAVLINK_MSG_ID_LEAF_CLIENT_TAGNAME_LEN, MAVLINK_MSG_ID_LEAF_CLIENT_TAGNAME_CRC);
#endif
}
#endif

#endif

// MESSAGE LEAF_CLIENT_TAGNAME UNPACKING


/**
 * @brief Get field tagname from leaf_client_tagname message
 *
 * @return  The tag name of the client
 */
static inline uint16_t mavlink_msg_leaf_client_tagname_get_tagname(const mavlink_message_t* msg, char *tagname)
{
    return _MAV_RETURN_char_array(msg, tagname, 64,  0);
}

/**
 * @brief Decode a leaf_client_tagname message into a struct
 *
 * @param msg The message to decode
 * @param leaf_client_tagname C-struct to decode the message contents into
 */
static inline void mavlink_msg_leaf_client_tagname_decode(const mavlink_message_t* msg, mavlink_leaf_client_tagname_t* leaf_client_tagname)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_leaf_client_tagname_get_tagname(msg, leaf_client_tagname->tagname);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_LEAF_CLIENT_TAGNAME_LEN? msg->len : MAVLINK_MSG_ID_LEAF_CLIENT_TAGNAME_LEN;
        memset(leaf_client_tagname, 0, MAVLINK_MSG_ID_LEAF_CLIENT_TAGNAME_LEN);
    memcpy(leaf_client_tagname, _MAV_PAYLOAD(msg), len);
#endif
}
