#pragma once
// MESSAGE LEAF_MRFT_STATUS PACKING

#define MAVLINK_MSG_ID_LEAF_MRFT_STATUS 77019


typedef struct __mavlink_leaf_mrft_status_t {
 uint8_t roll; /*<  The roll MRFT status*/
 uint8_t pitch; /*<  The pitch MRFT status*/
 uint8_t alt; /*<  The altitude MRFT status*/
 uint8_t x; /*<  The x MRFT status*/
 uint8_t y; /*<  The y MRFT status*/
} mavlink_leaf_mrft_status_t;

#define MAVLINK_MSG_ID_LEAF_MRFT_STATUS_LEN 5
#define MAVLINK_MSG_ID_LEAF_MRFT_STATUS_MIN_LEN 5
#define MAVLINK_MSG_ID_77019_LEN 5
#define MAVLINK_MSG_ID_77019_MIN_LEN 5

#define MAVLINK_MSG_ID_LEAF_MRFT_STATUS_CRC 198
#define MAVLINK_MSG_ID_77019_CRC 198



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_LEAF_MRFT_STATUS { \
    77019, \
    "LEAF_MRFT_STATUS", \
    5, \
    {  { "roll", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_leaf_mrft_status_t, roll) }, \
         { "pitch", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_leaf_mrft_status_t, pitch) }, \
         { "alt", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_leaf_mrft_status_t, alt) }, \
         { "x", NULL, MAVLINK_TYPE_UINT8_T, 0, 3, offsetof(mavlink_leaf_mrft_status_t, x) }, \
         { "y", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_leaf_mrft_status_t, y) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_LEAF_MRFT_STATUS { \
    "LEAF_MRFT_STATUS", \
    5, \
    {  { "roll", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_leaf_mrft_status_t, roll) }, \
         { "pitch", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_leaf_mrft_status_t, pitch) }, \
         { "alt", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_leaf_mrft_status_t, alt) }, \
         { "x", NULL, MAVLINK_TYPE_UINT8_T, 0, 3, offsetof(mavlink_leaf_mrft_status_t, x) }, \
         { "y", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_leaf_mrft_status_t, y) }, \
         } \
}
#endif

/**
 * @brief Pack a leaf_mrft_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param roll  The roll MRFT status
 * @param pitch  The pitch MRFT status
 * @param alt  The altitude MRFT status
 * @param x  The x MRFT status
 * @param y  The y MRFT status
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_mrft_status_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t roll, uint8_t pitch, uint8_t alt, uint8_t x, uint8_t y)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_MRFT_STATUS_LEN];
    _mav_put_uint8_t(buf, 0, roll);
    _mav_put_uint8_t(buf, 1, pitch);
    _mav_put_uint8_t(buf, 2, alt);
    _mav_put_uint8_t(buf, 3, x);
    _mav_put_uint8_t(buf, 4, y);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_MRFT_STATUS_LEN);
#else
    mavlink_leaf_mrft_status_t packet;
    packet.roll = roll;
    packet.pitch = pitch;
    packet.alt = alt;
    packet.x = x;
    packet.y = y;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_MRFT_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_MRFT_STATUS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_LEAF_MRFT_STATUS_MIN_LEN, MAVLINK_MSG_ID_LEAF_MRFT_STATUS_LEN, MAVLINK_MSG_ID_LEAF_MRFT_STATUS_CRC);
}

/**
 * @brief Pack a leaf_mrft_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param roll  The roll MRFT status
 * @param pitch  The pitch MRFT status
 * @param alt  The altitude MRFT status
 * @param x  The x MRFT status
 * @param y  The y MRFT status
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_mrft_status_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t roll, uint8_t pitch, uint8_t alt, uint8_t x, uint8_t y)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_MRFT_STATUS_LEN];
    _mav_put_uint8_t(buf, 0, roll);
    _mav_put_uint8_t(buf, 1, pitch);
    _mav_put_uint8_t(buf, 2, alt);
    _mav_put_uint8_t(buf, 3, x);
    _mav_put_uint8_t(buf, 4, y);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_MRFT_STATUS_LEN);
#else
    mavlink_leaf_mrft_status_t packet;
    packet.roll = roll;
    packet.pitch = pitch;
    packet.alt = alt;
    packet.x = x;
    packet.y = y;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_MRFT_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_MRFT_STATUS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_MRFT_STATUS_MIN_LEN, MAVLINK_MSG_ID_LEAF_MRFT_STATUS_LEN, MAVLINK_MSG_ID_LEAF_MRFT_STATUS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_MRFT_STATUS_MIN_LEN, MAVLINK_MSG_ID_LEAF_MRFT_STATUS_LEN);
#endif
}

/**
 * @brief Pack a leaf_mrft_status message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param roll  The roll MRFT status
 * @param pitch  The pitch MRFT status
 * @param alt  The altitude MRFT status
 * @param x  The x MRFT status
 * @param y  The y MRFT status
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_mrft_status_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t roll,uint8_t pitch,uint8_t alt,uint8_t x,uint8_t y)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_MRFT_STATUS_LEN];
    _mav_put_uint8_t(buf, 0, roll);
    _mav_put_uint8_t(buf, 1, pitch);
    _mav_put_uint8_t(buf, 2, alt);
    _mav_put_uint8_t(buf, 3, x);
    _mav_put_uint8_t(buf, 4, y);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_MRFT_STATUS_LEN);
#else
    mavlink_leaf_mrft_status_t packet;
    packet.roll = roll;
    packet.pitch = pitch;
    packet.alt = alt;
    packet.x = x;
    packet.y = y;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_MRFT_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_MRFT_STATUS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_LEAF_MRFT_STATUS_MIN_LEN, MAVLINK_MSG_ID_LEAF_MRFT_STATUS_LEN, MAVLINK_MSG_ID_LEAF_MRFT_STATUS_CRC);
}

/**
 * @brief Encode a leaf_mrft_status struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param leaf_mrft_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_mrft_status_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_leaf_mrft_status_t* leaf_mrft_status)
{
    return mavlink_msg_leaf_mrft_status_pack(system_id, component_id, msg, leaf_mrft_status->roll, leaf_mrft_status->pitch, leaf_mrft_status->alt, leaf_mrft_status->x, leaf_mrft_status->y);
}

/**
 * @brief Encode a leaf_mrft_status struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param leaf_mrft_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_mrft_status_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_leaf_mrft_status_t* leaf_mrft_status)
{
    return mavlink_msg_leaf_mrft_status_pack_chan(system_id, component_id, chan, msg, leaf_mrft_status->roll, leaf_mrft_status->pitch, leaf_mrft_status->alt, leaf_mrft_status->x, leaf_mrft_status->y);
}

/**
 * @brief Encode a leaf_mrft_status struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param leaf_mrft_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_mrft_status_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_leaf_mrft_status_t* leaf_mrft_status)
{
    return mavlink_msg_leaf_mrft_status_pack_status(system_id, component_id, _status, msg,  leaf_mrft_status->roll, leaf_mrft_status->pitch, leaf_mrft_status->alt, leaf_mrft_status->x, leaf_mrft_status->y);
}

/**
 * @brief Send a leaf_mrft_status message
 * @param chan MAVLink channel to send the message
 *
 * @param roll  The roll MRFT status
 * @param pitch  The pitch MRFT status
 * @param alt  The altitude MRFT status
 * @param x  The x MRFT status
 * @param y  The y MRFT status
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_leaf_mrft_status_send(mavlink_channel_t chan, uint8_t roll, uint8_t pitch, uint8_t alt, uint8_t x, uint8_t y)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_MRFT_STATUS_LEN];
    _mav_put_uint8_t(buf, 0, roll);
    _mav_put_uint8_t(buf, 1, pitch);
    _mav_put_uint8_t(buf, 2, alt);
    _mav_put_uint8_t(buf, 3, x);
    _mav_put_uint8_t(buf, 4, y);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_MRFT_STATUS, buf, MAVLINK_MSG_ID_LEAF_MRFT_STATUS_MIN_LEN, MAVLINK_MSG_ID_LEAF_MRFT_STATUS_LEN, MAVLINK_MSG_ID_LEAF_MRFT_STATUS_CRC);
#else
    mavlink_leaf_mrft_status_t packet;
    packet.roll = roll;
    packet.pitch = pitch;
    packet.alt = alt;
    packet.x = x;
    packet.y = y;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_MRFT_STATUS, (const char *)&packet, MAVLINK_MSG_ID_LEAF_MRFT_STATUS_MIN_LEN, MAVLINK_MSG_ID_LEAF_MRFT_STATUS_LEN, MAVLINK_MSG_ID_LEAF_MRFT_STATUS_CRC);
#endif
}

/**
 * @brief Send a leaf_mrft_status message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_leaf_mrft_status_send_struct(mavlink_channel_t chan, const mavlink_leaf_mrft_status_t* leaf_mrft_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_leaf_mrft_status_send(chan, leaf_mrft_status->roll, leaf_mrft_status->pitch, leaf_mrft_status->alt, leaf_mrft_status->x, leaf_mrft_status->y);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_MRFT_STATUS, (const char *)leaf_mrft_status, MAVLINK_MSG_ID_LEAF_MRFT_STATUS_MIN_LEN, MAVLINK_MSG_ID_LEAF_MRFT_STATUS_LEN, MAVLINK_MSG_ID_LEAF_MRFT_STATUS_CRC);
#endif
}

#if MAVLINK_MSG_ID_LEAF_MRFT_STATUS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_leaf_mrft_status_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t roll, uint8_t pitch, uint8_t alt, uint8_t x, uint8_t y)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, roll);
    _mav_put_uint8_t(buf, 1, pitch);
    _mav_put_uint8_t(buf, 2, alt);
    _mav_put_uint8_t(buf, 3, x);
    _mav_put_uint8_t(buf, 4, y);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_MRFT_STATUS, buf, MAVLINK_MSG_ID_LEAF_MRFT_STATUS_MIN_LEN, MAVLINK_MSG_ID_LEAF_MRFT_STATUS_LEN, MAVLINK_MSG_ID_LEAF_MRFT_STATUS_CRC);
#else
    mavlink_leaf_mrft_status_t *packet = (mavlink_leaf_mrft_status_t *)msgbuf;
    packet->roll = roll;
    packet->pitch = pitch;
    packet->alt = alt;
    packet->x = x;
    packet->y = y;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_MRFT_STATUS, (const char *)packet, MAVLINK_MSG_ID_LEAF_MRFT_STATUS_MIN_LEN, MAVLINK_MSG_ID_LEAF_MRFT_STATUS_LEN, MAVLINK_MSG_ID_LEAF_MRFT_STATUS_CRC);
#endif
}
#endif

#endif

// MESSAGE LEAF_MRFT_STATUS UNPACKING


/**
 * @brief Get field roll from leaf_mrft_status message
 *
 * @return  The roll MRFT status
 */
static inline uint8_t mavlink_msg_leaf_mrft_status_get_roll(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field pitch from leaf_mrft_status message
 *
 * @return  The pitch MRFT status
 */
static inline uint8_t mavlink_msg_leaf_mrft_status_get_pitch(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Get field alt from leaf_mrft_status message
 *
 * @return  The altitude MRFT status
 */
static inline uint8_t mavlink_msg_leaf_mrft_status_get_alt(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  2);
}

/**
 * @brief Get field x from leaf_mrft_status message
 *
 * @return  The x MRFT status
 */
static inline uint8_t mavlink_msg_leaf_mrft_status_get_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  3);
}

/**
 * @brief Get field y from leaf_mrft_status message
 *
 * @return  The y MRFT status
 */
static inline uint8_t mavlink_msg_leaf_mrft_status_get_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  4);
}

/**
 * @brief Decode a leaf_mrft_status message into a struct
 *
 * @param msg The message to decode
 * @param leaf_mrft_status C-struct to decode the message contents into
 */
static inline void mavlink_msg_leaf_mrft_status_decode(const mavlink_message_t* msg, mavlink_leaf_mrft_status_t* leaf_mrft_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    leaf_mrft_status->roll = mavlink_msg_leaf_mrft_status_get_roll(msg);
    leaf_mrft_status->pitch = mavlink_msg_leaf_mrft_status_get_pitch(msg);
    leaf_mrft_status->alt = mavlink_msg_leaf_mrft_status_get_alt(msg);
    leaf_mrft_status->x = mavlink_msg_leaf_mrft_status_get_x(msg);
    leaf_mrft_status->y = mavlink_msg_leaf_mrft_status_get_y(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_LEAF_MRFT_STATUS_LEN? msg->len : MAVLINK_MSG_ID_LEAF_MRFT_STATUS_LEN;
        memset(leaf_mrft_status, 0, MAVLINK_MSG_ID_LEAF_MRFT_STATUS_LEN);
    memcpy(leaf_mrft_status, _MAV_PAYLOAD(msg), len);
#endif
}
