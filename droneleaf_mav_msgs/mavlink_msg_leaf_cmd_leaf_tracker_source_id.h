#pragma once
// MESSAGE LEAF_CMD_LEAF_TRACKER_SOURCE_ID PACKING

#define MAVLINK_MSG_ID_LEAF_CMD_LEAF_TRACKER_SOURCE_ID 77057


typedef struct __mavlink_leaf_cmd_leaf_tracker_source_id_t {
 uint8_t target_system; /*<  The target system*/
 uint8_t source_id; /*<  Camera source id (0=WIDE, 1=NARROW, 2=THERMAL, 3=AUX)*/
} mavlink_leaf_cmd_leaf_tracker_source_id_t;

#define MAVLINK_MSG_ID_LEAF_CMD_LEAF_TRACKER_SOURCE_ID_LEN 2
#define MAVLINK_MSG_ID_LEAF_CMD_LEAF_TRACKER_SOURCE_ID_MIN_LEN 2
#define MAVLINK_MSG_ID_77057_LEN 2
#define MAVLINK_MSG_ID_77057_MIN_LEN 2

#define MAVLINK_MSG_ID_LEAF_CMD_LEAF_TRACKER_SOURCE_ID_CRC 157
#define MAVLINK_MSG_ID_77057_CRC 157



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_LEAF_CMD_LEAF_TRACKER_SOURCE_ID { \
    77057, \
    "LEAF_CMD_LEAF_TRACKER_SOURCE_ID", \
    2, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_leaf_cmd_leaf_tracker_source_id_t, target_system) }, \
         { "source_id", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_leaf_cmd_leaf_tracker_source_id_t, source_id) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_LEAF_CMD_LEAF_TRACKER_SOURCE_ID { \
    "LEAF_CMD_LEAF_TRACKER_SOURCE_ID", \
    2, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_leaf_cmd_leaf_tracker_source_id_t, target_system) }, \
         { "source_id", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_leaf_cmd_leaf_tracker_source_id_t, source_id) }, \
         } \
}
#endif

/**
 * @brief Pack a leaf_cmd_leaf_tracker_source_id message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system  The target system
 * @param source_id  Camera source id (0=WIDE, 1=NARROW, 2=THERMAL, 3=AUX)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_cmd_leaf_tracker_source_id_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t target_system, uint8_t source_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_CMD_LEAF_TRACKER_SOURCE_ID_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, source_id);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_CMD_LEAF_TRACKER_SOURCE_ID_LEN);
#else
    mavlink_leaf_cmd_leaf_tracker_source_id_t packet;
    packet.target_system = target_system;
    packet.source_id = source_id;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_CMD_LEAF_TRACKER_SOURCE_ID_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_CMD_LEAF_TRACKER_SOURCE_ID;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_LEAF_CMD_LEAF_TRACKER_SOURCE_ID_MIN_LEN, MAVLINK_MSG_ID_LEAF_CMD_LEAF_TRACKER_SOURCE_ID_LEN, MAVLINK_MSG_ID_LEAF_CMD_LEAF_TRACKER_SOURCE_ID_CRC);
}

/**
 * @brief Pack a leaf_cmd_leaf_tracker_source_id message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system  The target system
 * @param source_id  Camera source id (0=WIDE, 1=NARROW, 2=THERMAL, 3=AUX)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_cmd_leaf_tracker_source_id_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t target_system, uint8_t source_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_CMD_LEAF_TRACKER_SOURCE_ID_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, source_id);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_CMD_LEAF_TRACKER_SOURCE_ID_LEN);
#else
    mavlink_leaf_cmd_leaf_tracker_source_id_t packet;
    packet.target_system = target_system;
    packet.source_id = source_id;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_CMD_LEAF_TRACKER_SOURCE_ID_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_CMD_LEAF_TRACKER_SOURCE_ID;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_CMD_LEAF_TRACKER_SOURCE_ID_MIN_LEN, MAVLINK_MSG_ID_LEAF_CMD_LEAF_TRACKER_SOURCE_ID_LEN, MAVLINK_MSG_ID_LEAF_CMD_LEAF_TRACKER_SOURCE_ID_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_CMD_LEAF_TRACKER_SOURCE_ID_MIN_LEN, MAVLINK_MSG_ID_LEAF_CMD_LEAF_TRACKER_SOURCE_ID_LEN);
#endif
}

/**
 * @brief Pack a leaf_cmd_leaf_tracker_source_id message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param target_system  The target system
 * @param source_id  Camera source id (0=WIDE, 1=NARROW, 2=THERMAL, 3=AUX)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_cmd_leaf_tracker_source_id_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t target_system,uint8_t source_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_CMD_LEAF_TRACKER_SOURCE_ID_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, source_id);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_CMD_LEAF_TRACKER_SOURCE_ID_LEN);
#else
    mavlink_leaf_cmd_leaf_tracker_source_id_t packet;
    packet.target_system = target_system;
    packet.source_id = source_id;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_CMD_LEAF_TRACKER_SOURCE_ID_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_CMD_LEAF_TRACKER_SOURCE_ID;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_LEAF_CMD_LEAF_TRACKER_SOURCE_ID_MIN_LEN, MAVLINK_MSG_ID_LEAF_CMD_LEAF_TRACKER_SOURCE_ID_LEN, MAVLINK_MSG_ID_LEAF_CMD_LEAF_TRACKER_SOURCE_ID_CRC);
}

/**
 * @brief Encode a leaf_cmd_leaf_tracker_source_id struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param leaf_cmd_leaf_tracker_source_id C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_cmd_leaf_tracker_source_id_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_leaf_cmd_leaf_tracker_source_id_t* leaf_cmd_leaf_tracker_source_id)
{
    return mavlink_msg_leaf_cmd_leaf_tracker_source_id_pack(system_id, component_id, msg, leaf_cmd_leaf_tracker_source_id->target_system, leaf_cmd_leaf_tracker_source_id->source_id);
}

/**
 * @brief Encode a leaf_cmd_leaf_tracker_source_id struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param leaf_cmd_leaf_tracker_source_id C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_cmd_leaf_tracker_source_id_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_leaf_cmd_leaf_tracker_source_id_t* leaf_cmd_leaf_tracker_source_id)
{
    return mavlink_msg_leaf_cmd_leaf_tracker_source_id_pack_chan(system_id, component_id, chan, msg, leaf_cmd_leaf_tracker_source_id->target_system, leaf_cmd_leaf_tracker_source_id->source_id);
}

/**
 * @brief Encode a leaf_cmd_leaf_tracker_source_id struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param leaf_cmd_leaf_tracker_source_id C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_cmd_leaf_tracker_source_id_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_leaf_cmd_leaf_tracker_source_id_t* leaf_cmd_leaf_tracker_source_id)
{
    return mavlink_msg_leaf_cmd_leaf_tracker_source_id_pack_status(system_id, component_id, _status, msg,  leaf_cmd_leaf_tracker_source_id->target_system, leaf_cmd_leaf_tracker_source_id->source_id);
}

/**
 * @brief Send a leaf_cmd_leaf_tracker_source_id message
 * @param chan MAVLink channel to send the message
 *
 * @param target_system  The target system
 * @param source_id  Camera source id (0=WIDE, 1=NARROW, 2=THERMAL, 3=AUX)
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_leaf_cmd_leaf_tracker_source_id_send(mavlink_channel_t chan, uint8_t target_system, uint8_t source_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_CMD_LEAF_TRACKER_SOURCE_ID_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, source_id);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_CMD_LEAF_TRACKER_SOURCE_ID, buf, MAVLINK_MSG_ID_LEAF_CMD_LEAF_TRACKER_SOURCE_ID_MIN_LEN, MAVLINK_MSG_ID_LEAF_CMD_LEAF_TRACKER_SOURCE_ID_LEN, MAVLINK_MSG_ID_LEAF_CMD_LEAF_TRACKER_SOURCE_ID_CRC);
#else
    mavlink_leaf_cmd_leaf_tracker_source_id_t packet;
    packet.target_system = target_system;
    packet.source_id = source_id;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_CMD_LEAF_TRACKER_SOURCE_ID, (const char *)&packet, MAVLINK_MSG_ID_LEAF_CMD_LEAF_TRACKER_SOURCE_ID_MIN_LEN, MAVLINK_MSG_ID_LEAF_CMD_LEAF_TRACKER_SOURCE_ID_LEN, MAVLINK_MSG_ID_LEAF_CMD_LEAF_TRACKER_SOURCE_ID_CRC);
#endif
}

/**
 * @brief Send a leaf_cmd_leaf_tracker_source_id message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_leaf_cmd_leaf_tracker_source_id_send_struct(mavlink_channel_t chan, const mavlink_leaf_cmd_leaf_tracker_source_id_t* leaf_cmd_leaf_tracker_source_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_leaf_cmd_leaf_tracker_source_id_send(chan, leaf_cmd_leaf_tracker_source_id->target_system, leaf_cmd_leaf_tracker_source_id->source_id);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_CMD_LEAF_TRACKER_SOURCE_ID, (const char *)leaf_cmd_leaf_tracker_source_id, MAVLINK_MSG_ID_LEAF_CMD_LEAF_TRACKER_SOURCE_ID_MIN_LEN, MAVLINK_MSG_ID_LEAF_CMD_LEAF_TRACKER_SOURCE_ID_LEN, MAVLINK_MSG_ID_LEAF_CMD_LEAF_TRACKER_SOURCE_ID_CRC);
#endif
}

#if MAVLINK_MSG_ID_LEAF_CMD_LEAF_TRACKER_SOURCE_ID_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_leaf_cmd_leaf_tracker_source_id_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t target_system, uint8_t source_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, source_id);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_CMD_LEAF_TRACKER_SOURCE_ID, buf, MAVLINK_MSG_ID_LEAF_CMD_LEAF_TRACKER_SOURCE_ID_MIN_LEN, MAVLINK_MSG_ID_LEAF_CMD_LEAF_TRACKER_SOURCE_ID_LEN, MAVLINK_MSG_ID_LEAF_CMD_LEAF_TRACKER_SOURCE_ID_CRC);
#else
    mavlink_leaf_cmd_leaf_tracker_source_id_t *packet = (mavlink_leaf_cmd_leaf_tracker_source_id_t *)msgbuf;
    packet->target_system = target_system;
    packet->source_id = source_id;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_CMD_LEAF_TRACKER_SOURCE_ID, (const char *)packet, MAVLINK_MSG_ID_LEAF_CMD_LEAF_TRACKER_SOURCE_ID_MIN_LEN, MAVLINK_MSG_ID_LEAF_CMD_LEAF_TRACKER_SOURCE_ID_LEN, MAVLINK_MSG_ID_LEAF_CMD_LEAF_TRACKER_SOURCE_ID_CRC);
#endif
}
#endif

#endif

// MESSAGE LEAF_CMD_LEAF_TRACKER_SOURCE_ID UNPACKING


/**
 * @brief Get field target_system from leaf_cmd_leaf_tracker_source_id message
 *
 * @return  The target system
 */
static inline uint8_t mavlink_msg_leaf_cmd_leaf_tracker_source_id_get_target_system(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field source_id from leaf_cmd_leaf_tracker_source_id message
 *
 * @return  Camera source id (0=WIDE, 1=NARROW, 2=THERMAL, 3=AUX)
 */
static inline uint8_t mavlink_msg_leaf_cmd_leaf_tracker_source_id_get_source_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Decode a leaf_cmd_leaf_tracker_source_id message into a struct
 *
 * @param msg The message to decode
 * @param leaf_cmd_leaf_tracker_source_id C-struct to decode the message contents into
 */
static inline void mavlink_msg_leaf_cmd_leaf_tracker_source_id_decode(const mavlink_message_t* msg, mavlink_leaf_cmd_leaf_tracker_source_id_t* leaf_cmd_leaf_tracker_source_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    leaf_cmd_leaf_tracker_source_id->target_system = mavlink_msg_leaf_cmd_leaf_tracker_source_id_get_target_system(msg);
    leaf_cmd_leaf_tracker_source_id->source_id = mavlink_msg_leaf_cmd_leaf_tracker_source_id_get_source_id(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_LEAF_CMD_LEAF_TRACKER_SOURCE_ID_LEN? msg->len : MAVLINK_MSG_ID_LEAF_CMD_LEAF_TRACKER_SOURCE_ID_LEN;
        memset(leaf_cmd_leaf_tracker_source_id, 0, MAVLINK_MSG_ID_LEAF_CMD_LEAF_TRACKER_SOURCE_ID_LEN);
    memcpy(leaf_cmd_leaf_tracker_source_id, _MAV_PAYLOAD(msg), len);
#endif
}
