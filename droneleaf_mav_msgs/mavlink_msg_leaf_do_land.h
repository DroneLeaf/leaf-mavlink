#pragma once
// MESSAGE LEAF_DO_LAND PACKING

#define MAVLINK_MSG_ID_LEAF_DO_LAND 77006


typedef struct __mavlink_leaf_do_land_t {
 uint8_t target_system; /*<  The system needs to land*/
} mavlink_leaf_do_land_t;

#define MAVLINK_MSG_ID_LEAF_DO_LAND_LEN 1
#define MAVLINK_MSG_ID_LEAF_DO_LAND_MIN_LEN 1
#define MAVLINK_MSG_ID_77006_LEN 1
#define MAVLINK_MSG_ID_77006_MIN_LEN 1

#define MAVLINK_MSG_ID_LEAF_DO_LAND_CRC 168
#define MAVLINK_MSG_ID_77006_CRC 168



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_LEAF_DO_LAND { \
    77006, \
    "LEAF_DO_LAND", \
    1, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_leaf_do_land_t, target_system) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_LEAF_DO_LAND { \
    "LEAF_DO_LAND", \
    1, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_leaf_do_land_t, target_system) }, \
         } \
}
#endif

/**
 * @brief Pack a leaf_do_land message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system  The system needs to land
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_do_land_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t target_system)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_DO_LAND_LEN];
    _mav_put_uint8_t(buf, 0, target_system);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_DO_LAND_LEN);
#else
    mavlink_leaf_do_land_t packet;
    packet.target_system = target_system;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_DO_LAND_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_DO_LAND;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_LEAF_DO_LAND_MIN_LEN, MAVLINK_MSG_ID_LEAF_DO_LAND_LEN, MAVLINK_MSG_ID_LEAF_DO_LAND_CRC);
}

/**
 * @brief Pack a leaf_do_land message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system  The system needs to land
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_do_land_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t target_system)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_DO_LAND_LEN];
    _mav_put_uint8_t(buf, 0, target_system);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_DO_LAND_LEN);
#else
    mavlink_leaf_do_land_t packet;
    packet.target_system = target_system;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_DO_LAND_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_DO_LAND;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_DO_LAND_MIN_LEN, MAVLINK_MSG_ID_LEAF_DO_LAND_LEN, MAVLINK_MSG_ID_LEAF_DO_LAND_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_DO_LAND_MIN_LEN, MAVLINK_MSG_ID_LEAF_DO_LAND_LEN);
#endif
}

/**
 * @brief Pack a leaf_do_land message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param target_system  The system needs to land
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_do_land_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t target_system)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_DO_LAND_LEN];
    _mav_put_uint8_t(buf, 0, target_system);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_DO_LAND_LEN);
#else
    mavlink_leaf_do_land_t packet;
    packet.target_system = target_system;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_DO_LAND_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_DO_LAND;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_LEAF_DO_LAND_MIN_LEN, MAVLINK_MSG_ID_LEAF_DO_LAND_LEN, MAVLINK_MSG_ID_LEAF_DO_LAND_CRC);
}

/**
 * @brief Encode a leaf_do_land struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param leaf_do_land C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_do_land_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_leaf_do_land_t* leaf_do_land)
{
    return mavlink_msg_leaf_do_land_pack(system_id, component_id, msg, leaf_do_land->target_system);
}

/**
 * @brief Encode a leaf_do_land struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param leaf_do_land C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_do_land_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_leaf_do_land_t* leaf_do_land)
{
    return mavlink_msg_leaf_do_land_pack_chan(system_id, component_id, chan, msg, leaf_do_land->target_system);
}

/**
 * @brief Encode a leaf_do_land struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param leaf_do_land C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_do_land_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_leaf_do_land_t* leaf_do_land)
{
    return mavlink_msg_leaf_do_land_pack_status(system_id, component_id, _status, msg,  leaf_do_land->target_system);
}

/**
 * @brief Send a leaf_do_land message
 * @param chan MAVLink channel to send the message
 *
 * @param target_system  The system needs to land
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_leaf_do_land_send(mavlink_channel_t chan, uint8_t target_system)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_DO_LAND_LEN];
    _mav_put_uint8_t(buf, 0, target_system);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_DO_LAND, buf, MAVLINK_MSG_ID_LEAF_DO_LAND_MIN_LEN, MAVLINK_MSG_ID_LEAF_DO_LAND_LEN, MAVLINK_MSG_ID_LEAF_DO_LAND_CRC);
#else
    mavlink_leaf_do_land_t packet;
    packet.target_system = target_system;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_DO_LAND, (const char *)&packet, MAVLINK_MSG_ID_LEAF_DO_LAND_MIN_LEN, MAVLINK_MSG_ID_LEAF_DO_LAND_LEN, MAVLINK_MSG_ID_LEAF_DO_LAND_CRC);
#endif
}

/**
 * @brief Send a leaf_do_land message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_leaf_do_land_send_struct(mavlink_channel_t chan, const mavlink_leaf_do_land_t* leaf_do_land)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_leaf_do_land_send(chan, leaf_do_land->target_system);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_DO_LAND, (const char *)leaf_do_land, MAVLINK_MSG_ID_LEAF_DO_LAND_MIN_LEN, MAVLINK_MSG_ID_LEAF_DO_LAND_LEN, MAVLINK_MSG_ID_LEAF_DO_LAND_CRC);
#endif
}

#if MAVLINK_MSG_ID_LEAF_DO_LAND_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_leaf_do_land_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t target_system)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, target_system);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_DO_LAND, buf, MAVLINK_MSG_ID_LEAF_DO_LAND_MIN_LEN, MAVLINK_MSG_ID_LEAF_DO_LAND_LEN, MAVLINK_MSG_ID_LEAF_DO_LAND_CRC);
#else
    mavlink_leaf_do_land_t *packet = (mavlink_leaf_do_land_t *)msgbuf;
    packet->target_system = target_system;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_DO_LAND, (const char *)packet, MAVLINK_MSG_ID_LEAF_DO_LAND_MIN_LEN, MAVLINK_MSG_ID_LEAF_DO_LAND_LEN, MAVLINK_MSG_ID_LEAF_DO_LAND_CRC);
#endif
}
#endif

#endif

// MESSAGE LEAF_DO_LAND UNPACKING


/**
 * @brief Get field target_system from leaf_do_land message
 *
 * @return  The system needs to land
 */
static inline uint8_t mavlink_msg_leaf_do_land_get_target_system(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Decode a leaf_do_land message into a struct
 *
 * @param msg The message to decode
 * @param leaf_do_land C-struct to decode the message contents into
 */
static inline void mavlink_msg_leaf_do_land_decode(const mavlink_message_t* msg, mavlink_leaf_do_land_t* leaf_do_land)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    leaf_do_land->target_system = mavlink_msg_leaf_do_land_get_target_system(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_LEAF_DO_LAND_LEN? msg->len : MAVLINK_MSG_ID_LEAF_DO_LAND_LEN;
        memset(leaf_do_land, 0, MAVLINK_MSG_ID_LEAF_DO_LAND_LEN);
    memcpy(leaf_do_land, _MAV_PAYLOAD(msg), len);
#endif
}
