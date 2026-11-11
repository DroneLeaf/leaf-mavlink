#pragma once
// MESSAGE LEAF_BF_BOX_NAMES PACKING

#define MAVLINK_MSG_ID_LEAF_BF_BOX_NAMES 77053


typedef struct __mavlink_leaf_bf_box_names_t {
 char box_names[230]; /*<  Semicolon-separated Betaflight box names of this chunk*/
 uint8_t chunk_index; /*<  Index of this chunk, 0-based*/
 uint8_t chunk_count; /*<  Number of chunks in the full list*/
} mavlink_leaf_bf_box_names_t;

#define MAVLINK_MSG_ID_LEAF_BF_BOX_NAMES_LEN 232
#define MAVLINK_MSG_ID_LEAF_BF_BOX_NAMES_MIN_LEN 230
#define MAVLINK_MSG_ID_77053_LEN 232
#define MAVLINK_MSG_ID_77053_MIN_LEN 230

#define MAVLINK_MSG_ID_LEAF_BF_BOX_NAMES_CRC 102
#define MAVLINK_MSG_ID_77053_CRC 102

#define MAVLINK_MSG_LEAF_BF_BOX_NAMES_FIELD_BOX_NAMES_LEN 230

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_LEAF_BF_BOX_NAMES { \
    77053, \
    "LEAF_BF_BOX_NAMES", \
    3, \
    {  { "box_names", NULL, MAVLINK_TYPE_CHAR, 230, 0, offsetof(mavlink_leaf_bf_box_names_t, box_names) }, \
         { "chunk_index", NULL, MAVLINK_TYPE_UINT8_T, 0, 230, offsetof(mavlink_leaf_bf_box_names_t, chunk_index) }, \
         { "chunk_count", NULL, MAVLINK_TYPE_UINT8_T, 0, 231, offsetof(mavlink_leaf_bf_box_names_t, chunk_count) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_LEAF_BF_BOX_NAMES { \
    "LEAF_BF_BOX_NAMES", \
    3, \
    {  { "box_names", NULL, MAVLINK_TYPE_CHAR, 230, 0, offsetof(mavlink_leaf_bf_box_names_t, box_names) }, \
         { "chunk_index", NULL, MAVLINK_TYPE_UINT8_T, 0, 230, offsetof(mavlink_leaf_bf_box_names_t, chunk_index) }, \
         { "chunk_count", NULL, MAVLINK_TYPE_UINT8_T, 0, 231, offsetof(mavlink_leaf_bf_box_names_t, chunk_count) }, \
         } \
}
#endif

/**
 * @brief Pack a leaf_bf_box_names message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param box_names  Semicolon-separated Betaflight box names of this chunk
 * @param chunk_index  Index of this chunk, 0-based
 * @param chunk_count  Number of chunks in the full list
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_bf_box_names_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               const char *box_names, uint8_t chunk_index, uint8_t chunk_count)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_BF_BOX_NAMES_LEN];
    _mav_put_uint8_t(buf, 230, chunk_index);
    _mav_put_uint8_t(buf, 231, chunk_count);
    _mav_put_char_array(buf, 0, box_names, 230);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_BF_BOX_NAMES_LEN);
#else
    mavlink_leaf_bf_box_names_t packet;
    packet.chunk_index = chunk_index;
    packet.chunk_count = chunk_count;
    mav_array_assign_char(packet.box_names, box_names, 230);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_BF_BOX_NAMES_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_BF_BOX_NAMES;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_LEAF_BF_BOX_NAMES_MIN_LEN, MAVLINK_MSG_ID_LEAF_BF_BOX_NAMES_LEN, MAVLINK_MSG_ID_LEAF_BF_BOX_NAMES_CRC);
}

/**
 * @brief Pack a leaf_bf_box_names message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param box_names  Semicolon-separated Betaflight box names of this chunk
 * @param chunk_index  Index of this chunk, 0-based
 * @param chunk_count  Number of chunks in the full list
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_bf_box_names_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               const char *box_names, uint8_t chunk_index, uint8_t chunk_count)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_BF_BOX_NAMES_LEN];
    _mav_put_uint8_t(buf, 230, chunk_index);
    _mav_put_uint8_t(buf, 231, chunk_count);
    _mav_put_char_array(buf, 0, box_names, 230);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_BF_BOX_NAMES_LEN);
#else
    mavlink_leaf_bf_box_names_t packet;
    packet.chunk_index = chunk_index;
    packet.chunk_count = chunk_count;
    mav_array_memcpy(packet.box_names, box_names, sizeof(char)*230);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_BF_BOX_NAMES_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_BF_BOX_NAMES;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_BF_BOX_NAMES_MIN_LEN, MAVLINK_MSG_ID_LEAF_BF_BOX_NAMES_LEN, MAVLINK_MSG_ID_LEAF_BF_BOX_NAMES_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_BF_BOX_NAMES_MIN_LEN, MAVLINK_MSG_ID_LEAF_BF_BOX_NAMES_LEN);
#endif
}

/**
 * @brief Pack a leaf_bf_box_names message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param box_names  Semicolon-separated Betaflight box names of this chunk
 * @param chunk_index  Index of this chunk, 0-based
 * @param chunk_count  Number of chunks in the full list
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_bf_box_names_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   const char *box_names,uint8_t chunk_index,uint8_t chunk_count)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_BF_BOX_NAMES_LEN];
    _mav_put_uint8_t(buf, 230, chunk_index);
    _mav_put_uint8_t(buf, 231, chunk_count);
    _mav_put_char_array(buf, 0, box_names, 230);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_BF_BOX_NAMES_LEN);
#else
    mavlink_leaf_bf_box_names_t packet;
    packet.chunk_index = chunk_index;
    packet.chunk_count = chunk_count;
    mav_array_assign_char(packet.box_names, box_names, 230);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_BF_BOX_NAMES_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_BF_BOX_NAMES;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_LEAF_BF_BOX_NAMES_MIN_LEN, MAVLINK_MSG_ID_LEAF_BF_BOX_NAMES_LEN, MAVLINK_MSG_ID_LEAF_BF_BOX_NAMES_CRC);
}

/**
 * @brief Encode a leaf_bf_box_names struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param leaf_bf_box_names C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_bf_box_names_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_leaf_bf_box_names_t* leaf_bf_box_names)
{
    return mavlink_msg_leaf_bf_box_names_pack(system_id, component_id, msg, leaf_bf_box_names->box_names, leaf_bf_box_names->chunk_index, leaf_bf_box_names->chunk_count);
}

/**
 * @brief Encode a leaf_bf_box_names struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param leaf_bf_box_names C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_bf_box_names_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_leaf_bf_box_names_t* leaf_bf_box_names)
{
    return mavlink_msg_leaf_bf_box_names_pack_chan(system_id, component_id, chan, msg, leaf_bf_box_names->box_names, leaf_bf_box_names->chunk_index, leaf_bf_box_names->chunk_count);
}

/**
 * @brief Encode a leaf_bf_box_names struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param leaf_bf_box_names C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_bf_box_names_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_leaf_bf_box_names_t* leaf_bf_box_names)
{
    return mavlink_msg_leaf_bf_box_names_pack_status(system_id, component_id, _status, msg,  leaf_bf_box_names->box_names, leaf_bf_box_names->chunk_index, leaf_bf_box_names->chunk_count);
}

/**
 * @brief Send a leaf_bf_box_names message
 * @param chan MAVLink channel to send the message
 *
 * @param box_names  Semicolon-separated Betaflight box names of this chunk
 * @param chunk_index  Index of this chunk, 0-based
 * @param chunk_count  Number of chunks in the full list
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_leaf_bf_box_names_send(mavlink_channel_t chan, const char *box_names, uint8_t chunk_index, uint8_t chunk_count)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_BF_BOX_NAMES_LEN];
    _mav_put_uint8_t(buf, 230, chunk_index);
    _mav_put_uint8_t(buf, 231, chunk_count);
    _mav_put_char_array(buf, 0, box_names, 230);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_BF_BOX_NAMES, buf, MAVLINK_MSG_ID_LEAF_BF_BOX_NAMES_MIN_LEN, MAVLINK_MSG_ID_LEAF_BF_BOX_NAMES_LEN, MAVLINK_MSG_ID_LEAF_BF_BOX_NAMES_CRC);
#else
    mavlink_leaf_bf_box_names_t packet;
    packet.chunk_index = chunk_index;
    packet.chunk_count = chunk_count;
    mav_array_assign_char(packet.box_names, box_names, 230);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_BF_BOX_NAMES, (const char *)&packet, MAVLINK_MSG_ID_LEAF_BF_BOX_NAMES_MIN_LEN, MAVLINK_MSG_ID_LEAF_BF_BOX_NAMES_LEN, MAVLINK_MSG_ID_LEAF_BF_BOX_NAMES_CRC);
#endif
}

/**
 * @brief Send a leaf_bf_box_names message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_leaf_bf_box_names_send_struct(mavlink_channel_t chan, const mavlink_leaf_bf_box_names_t* leaf_bf_box_names)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_leaf_bf_box_names_send(chan, leaf_bf_box_names->box_names, leaf_bf_box_names->chunk_index, leaf_bf_box_names->chunk_count);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_BF_BOX_NAMES, (const char *)leaf_bf_box_names, MAVLINK_MSG_ID_LEAF_BF_BOX_NAMES_MIN_LEN, MAVLINK_MSG_ID_LEAF_BF_BOX_NAMES_LEN, MAVLINK_MSG_ID_LEAF_BF_BOX_NAMES_CRC);
#endif
}

#if MAVLINK_MSG_ID_LEAF_BF_BOX_NAMES_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_leaf_bf_box_names_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  const char *box_names, uint8_t chunk_index, uint8_t chunk_count)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 230, chunk_index);
    _mav_put_uint8_t(buf, 231, chunk_count);
    _mav_put_char_array(buf, 0, box_names, 230);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_BF_BOX_NAMES, buf, MAVLINK_MSG_ID_LEAF_BF_BOX_NAMES_MIN_LEN, MAVLINK_MSG_ID_LEAF_BF_BOX_NAMES_LEN, MAVLINK_MSG_ID_LEAF_BF_BOX_NAMES_CRC);
#else
    mavlink_leaf_bf_box_names_t *packet = (mavlink_leaf_bf_box_names_t *)msgbuf;
    packet->chunk_index = chunk_index;
    packet->chunk_count = chunk_count;
    mav_array_assign_char(packet->box_names, box_names, 230);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_BF_BOX_NAMES, (const char *)packet, MAVLINK_MSG_ID_LEAF_BF_BOX_NAMES_MIN_LEN, MAVLINK_MSG_ID_LEAF_BF_BOX_NAMES_LEN, MAVLINK_MSG_ID_LEAF_BF_BOX_NAMES_CRC);
#endif
}
#endif

#endif

// MESSAGE LEAF_BF_BOX_NAMES UNPACKING


/**
 * @brief Get field box_names from leaf_bf_box_names message
 *
 * @return  Semicolon-separated Betaflight box names of this chunk
 */
static inline uint16_t mavlink_msg_leaf_bf_box_names_get_box_names(const mavlink_message_t* msg, char *box_names)
{
    return _MAV_RETURN_char_array(msg, box_names, 230,  0);
}

/**
 * @brief Get field chunk_index from leaf_bf_box_names message
 *
 * @return  Index of this chunk, 0-based
 */
static inline uint8_t mavlink_msg_leaf_bf_box_names_get_chunk_index(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  230);
}

/**
 * @brief Get field chunk_count from leaf_bf_box_names message
 *
 * @return  Number of chunks in the full list
 */
static inline uint8_t mavlink_msg_leaf_bf_box_names_get_chunk_count(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  231);
}

/**
 * @brief Decode a leaf_bf_box_names message into a struct
 *
 * @param msg The message to decode
 * @param leaf_bf_box_names C-struct to decode the message contents into
 */
static inline void mavlink_msg_leaf_bf_box_names_decode(const mavlink_message_t* msg, mavlink_leaf_bf_box_names_t* leaf_bf_box_names)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_leaf_bf_box_names_get_box_names(msg, leaf_bf_box_names->box_names);
    leaf_bf_box_names->chunk_index = mavlink_msg_leaf_bf_box_names_get_chunk_index(msg);
    leaf_bf_box_names->chunk_count = mavlink_msg_leaf_bf_box_names_get_chunk_count(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_LEAF_BF_BOX_NAMES_LEN? msg->len : MAVLINK_MSG_ID_LEAF_BF_BOX_NAMES_LEN;
        memset(leaf_bf_box_names, 0, MAVLINK_MSG_ID_LEAF_BF_BOX_NAMES_LEN);
    memcpy(leaf_bf_box_names, _MAV_PAYLOAD(msg), len);
#endif
}
