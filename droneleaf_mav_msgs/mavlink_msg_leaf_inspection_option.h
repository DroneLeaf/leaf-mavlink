#pragma once
// MESSAGE LEAF_INSPECTION_OPTION PACKING

#define MAVLINK_MSG_ID_LEAF_INSPECTION_OPTION 77020


typedef struct __mavlink_leaf_inspection_option_t {
 uint8_t option; /*<  The new leaf inspection option.*/
} mavlink_leaf_inspection_option_t;

#define MAVLINK_MSG_ID_LEAF_INSPECTION_OPTION_LEN 1
#define MAVLINK_MSG_ID_LEAF_INSPECTION_OPTION_MIN_LEN 1
#define MAVLINK_MSG_ID_77020_LEN 1
#define MAVLINK_MSG_ID_77020_MIN_LEN 1

#define MAVLINK_MSG_ID_LEAF_INSPECTION_OPTION_CRC 196
#define MAVLINK_MSG_ID_77020_CRC 196



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_LEAF_INSPECTION_OPTION { \
    77020, \
    "LEAF_INSPECTION_OPTION", \
    1, \
    {  { "option", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_leaf_inspection_option_t, option) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_LEAF_INSPECTION_OPTION { \
    "LEAF_INSPECTION_OPTION", \
    1, \
    {  { "option", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_leaf_inspection_option_t, option) }, \
         } \
}
#endif

/**
 * @brief Pack a leaf_inspection_option message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param option  The new leaf inspection option.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_inspection_option_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t option)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_INSPECTION_OPTION_LEN];
    _mav_put_uint8_t(buf, 0, option);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_INSPECTION_OPTION_LEN);
#else
    mavlink_leaf_inspection_option_t packet;
    packet.option = option;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_INSPECTION_OPTION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_INSPECTION_OPTION;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_LEAF_INSPECTION_OPTION_MIN_LEN, MAVLINK_MSG_ID_LEAF_INSPECTION_OPTION_LEN, MAVLINK_MSG_ID_LEAF_INSPECTION_OPTION_CRC);
}

/**
 * @brief Pack a leaf_inspection_option message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param option  The new leaf inspection option.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_inspection_option_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t option)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_INSPECTION_OPTION_LEN];
    _mav_put_uint8_t(buf, 0, option);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_INSPECTION_OPTION_LEN);
#else
    mavlink_leaf_inspection_option_t packet;
    packet.option = option;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_INSPECTION_OPTION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_INSPECTION_OPTION;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_INSPECTION_OPTION_MIN_LEN, MAVLINK_MSG_ID_LEAF_INSPECTION_OPTION_LEN, MAVLINK_MSG_ID_LEAF_INSPECTION_OPTION_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_INSPECTION_OPTION_MIN_LEN, MAVLINK_MSG_ID_LEAF_INSPECTION_OPTION_LEN);
#endif
}

/**
 * @brief Pack a leaf_inspection_option message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param option  The new leaf inspection option.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_inspection_option_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t option)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_INSPECTION_OPTION_LEN];
    _mav_put_uint8_t(buf, 0, option);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_INSPECTION_OPTION_LEN);
#else
    mavlink_leaf_inspection_option_t packet;
    packet.option = option;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_INSPECTION_OPTION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_INSPECTION_OPTION;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_LEAF_INSPECTION_OPTION_MIN_LEN, MAVLINK_MSG_ID_LEAF_INSPECTION_OPTION_LEN, MAVLINK_MSG_ID_LEAF_INSPECTION_OPTION_CRC);
}

/**
 * @brief Encode a leaf_inspection_option struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param leaf_inspection_option C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_inspection_option_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_leaf_inspection_option_t* leaf_inspection_option)
{
    return mavlink_msg_leaf_inspection_option_pack(system_id, component_id, msg, leaf_inspection_option->option);
}

/**
 * @brief Encode a leaf_inspection_option struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param leaf_inspection_option C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_inspection_option_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_leaf_inspection_option_t* leaf_inspection_option)
{
    return mavlink_msg_leaf_inspection_option_pack_chan(system_id, component_id, chan, msg, leaf_inspection_option->option);
}

/**
 * @brief Encode a leaf_inspection_option struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param leaf_inspection_option C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_inspection_option_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_leaf_inspection_option_t* leaf_inspection_option)
{
    return mavlink_msg_leaf_inspection_option_pack_status(system_id, component_id, _status, msg,  leaf_inspection_option->option);
}

/**
 * @brief Send a leaf_inspection_option message
 * @param chan MAVLink channel to send the message
 *
 * @param option  The new leaf inspection option.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_leaf_inspection_option_send(mavlink_channel_t chan, uint8_t option)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_INSPECTION_OPTION_LEN];
    _mav_put_uint8_t(buf, 0, option);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_INSPECTION_OPTION, buf, MAVLINK_MSG_ID_LEAF_INSPECTION_OPTION_MIN_LEN, MAVLINK_MSG_ID_LEAF_INSPECTION_OPTION_LEN, MAVLINK_MSG_ID_LEAF_INSPECTION_OPTION_CRC);
#else
    mavlink_leaf_inspection_option_t packet;
    packet.option = option;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_INSPECTION_OPTION, (const char *)&packet, MAVLINK_MSG_ID_LEAF_INSPECTION_OPTION_MIN_LEN, MAVLINK_MSG_ID_LEAF_INSPECTION_OPTION_LEN, MAVLINK_MSG_ID_LEAF_INSPECTION_OPTION_CRC);
#endif
}

/**
 * @brief Send a leaf_inspection_option message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_leaf_inspection_option_send_struct(mavlink_channel_t chan, const mavlink_leaf_inspection_option_t* leaf_inspection_option)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_leaf_inspection_option_send(chan, leaf_inspection_option->option);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_INSPECTION_OPTION, (const char *)leaf_inspection_option, MAVLINK_MSG_ID_LEAF_INSPECTION_OPTION_MIN_LEN, MAVLINK_MSG_ID_LEAF_INSPECTION_OPTION_LEN, MAVLINK_MSG_ID_LEAF_INSPECTION_OPTION_CRC);
#endif
}

#if MAVLINK_MSG_ID_LEAF_INSPECTION_OPTION_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_leaf_inspection_option_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t option)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, option);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_INSPECTION_OPTION, buf, MAVLINK_MSG_ID_LEAF_INSPECTION_OPTION_MIN_LEN, MAVLINK_MSG_ID_LEAF_INSPECTION_OPTION_LEN, MAVLINK_MSG_ID_LEAF_INSPECTION_OPTION_CRC);
#else
    mavlink_leaf_inspection_option_t *packet = (mavlink_leaf_inspection_option_t *)msgbuf;
    packet->option = option;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_INSPECTION_OPTION, (const char *)packet, MAVLINK_MSG_ID_LEAF_INSPECTION_OPTION_MIN_LEN, MAVLINK_MSG_ID_LEAF_INSPECTION_OPTION_LEN, MAVLINK_MSG_ID_LEAF_INSPECTION_OPTION_CRC);
#endif
}
#endif

#endif

// MESSAGE LEAF_INSPECTION_OPTION UNPACKING


/**
 * @brief Get field option from leaf_inspection_option message
 *
 * @return  The new leaf inspection option.
 */
static inline uint8_t mavlink_msg_leaf_inspection_option_get_option(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Decode a leaf_inspection_option message into a struct
 *
 * @param msg The message to decode
 * @param leaf_inspection_option C-struct to decode the message contents into
 */
static inline void mavlink_msg_leaf_inspection_option_decode(const mavlink_message_t* msg, mavlink_leaf_inspection_option_t* leaf_inspection_option)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    leaf_inspection_option->option = mavlink_msg_leaf_inspection_option_get_option(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_LEAF_INSPECTION_OPTION_LEN? msg->len : MAVLINK_MSG_ID_LEAF_INSPECTION_OPTION_LEN;
        memset(leaf_inspection_option, 0, MAVLINK_MSG_ID_LEAF_INSPECTION_OPTION_LEN);
    memcpy(leaf_inspection_option, _MAV_PAYLOAD(msg), len);
#endif
}
