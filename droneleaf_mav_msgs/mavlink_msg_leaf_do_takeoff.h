#pragma once
// MESSAGE LEAF_DO_TAKEOFF PACKING

#define MAVLINK_MSG_ID_LEAF_DO_TAKEOFF 77005


typedef struct __mavlink_leaf_do_takeoff_t {
 float altitude; /*<  The altitude to takeoff to*/
 uint8_t target_system; /*<  The system needs to takeoff*/
} mavlink_leaf_do_takeoff_t;

#define MAVLINK_MSG_ID_LEAF_DO_TAKEOFF_LEN 5
#define MAVLINK_MSG_ID_LEAF_DO_TAKEOFF_MIN_LEN 5
#define MAVLINK_MSG_ID_77005_LEN 5
#define MAVLINK_MSG_ID_77005_MIN_LEN 5

#define MAVLINK_MSG_ID_LEAF_DO_TAKEOFF_CRC 214
#define MAVLINK_MSG_ID_77005_CRC 214



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_LEAF_DO_TAKEOFF { \
    77005, \
    "LEAF_DO_TAKEOFF", \
    2, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_leaf_do_takeoff_t, target_system) }, \
         { "altitude", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_leaf_do_takeoff_t, altitude) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_LEAF_DO_TAKEOFF { \
    "LEAF_DO_TAKEOFF", \
    2, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_leaf_do_takeoff_t, target_system) }, \
         { "altitude", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_leaf_do_takeoff_t, altitude) }, \
         } \
}
#endif

/**
 * @brief Pack a leaf_do_takeoff message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system  The system needs to takeoff
 * @param altitude  The altitude to takeoff to
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_do_takeoff_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t target_system, float altitude)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_DO_TAKEOFF_LEN];
    _mav_put_float(buf, 0, altitude);
    _mav_put_uint8_t(buf, 4, target_system);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_DO_TAKEOFF_LEN);
#else
    mavlink_leaf_do_takeoff_t packet;
    packet.altitude = altitude;
    packet.target_system = target_system;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_DO_TAKEOFF_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_DO_TAKEOFF;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_LEAF_DO_TAKEOFF_MIN_LEN, MAVLINK_MSG_ID_LEAF_DO_TAKEOFF_LEN, MAVLINK_MSG_ID_LEAF_DO_TAKEOFF_CRC);
}

/**
 * @brief Pack a leaf_do_takeoff message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system  The system needs to takeoff
 * @param altitude  The altitude to takeoff to
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_do_takeoff_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t target_system, float altitude)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_DO_TAKEOFF_LEN];
    _mav_put_float(buf, 0, altitude);
    _mav_put_uint8_t(buf, 4, target_system);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_DO_TAKEOFF_LEN);
#else
    mavlink_leaf_do_takeoff_t packet;
    packet.altitude = altitude;
    packet.target_system = target_system;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_DO_TAKEOFF_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_DO_TAKEOFF;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_DO_TAKEOFF_MIN_LEN, MAVLINK_MSG_ID_LEAF_DO_TAKEOFF_LEN, MAVLINK_MSG_ID_LEAF_DO_TAKEOFF_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_DO_TAKEOFF_MIN_LEN, MAVLINK_MSG_ID_LEAF_DO_TAKEOFF_LEN);
#endif
}

/**
 * @brief Pack a leaf_do_takeoff message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param target_system  The system needs to takeoff
 * @param altitude  The altitude to takeoff to
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_do_takeoff_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t target_system,float altitude)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_DO_TAKEOFF_LEN];
    _mav_put_float(buf, 0, altitude);
    _mav_put_uint8_t(buf, 4, target_system);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_DO_TAKEOFF_LEN);
#else
    mavlink_leaf_do_takeoff_t packet;
    packet.altitude = altitude;
    packet.target_system = target_system;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_DO_TAKEOFF_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_DO_TAKEOFF;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_LEAF_DO_TAKEOFF_MIN_LEN, MAVLINK_MSG_ID_LEAF_DO_TAKEOFF_LEN, MAVLINK_MSG_ID_LEAF_DO_TAKEOFF_CRC);
}

/**
 * @brief Encode a leaf_do_takeoff struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param leaf_do_takeoff C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_do_takeoff_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_leaf_do_takeoff_t* leaf_do_takeoff)
{
    return mavlink_msg_leaf_do_takeoff_pack(system_id, component_id, msg, leaf_do_takeoff->target_system, leaf_do_takeoff->altitude);
}

/**
 * @brief Encode a leaf_do_takeoff struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param leaf_do_takeoff C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_do_takeoff_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_leaf_do_takeoff_t* leaf_do_takeoff)
{
    return mavlink_msg_leaf_do_takeoff_pack_chan(system_id, component_id, chan, msg, leaf_do_takeoff->target_system, leaf_do_takeoff->altitude);
}

/**
 * @brief Encode a leaf_do_takeoff struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param leaf_do_takeoff C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_do_takeoff_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_leaf_do_takeoff_t* leaf_do_takeoff)
{
    return mavlink_msg_leaf_do_takeoff_pack_status(system_id, component_id, _status, msg,  leaf_do_takeoff->target_system, leaf_do_takeoff->altitude);
}

/**
 * @brief Send a leaf_do_takeoff message
 * @param chan MAVLink channel to send the message
 *
 * @param target_system  The system needs to takeoff
 * @param altitude  The altitude to takeoff to
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_leaf_do_takeoff_send(mavlink_channel_t chan, uint8_t target_system, float altitude)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_DO_TAKEOFF_LEN];
    _mav_put_float(buf, 0, altitude);
    _mav_put_uint8_t(buf, 4, target_system);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_DO_TAKEOFF, buf, MAVLINK_MSG_ID_LEAF_DO_TAKEOFF_MIN_LEN, MAVLINK_MSG_ID_LEAF_DO_TAKEOFF_LEN, MAVLINK_MSG_ID_LEAF_DO_TAKEOFF_CRC);
#else
    mavlink_leaf_do_takeoff_t packet;
    packet.altitude = altitude;
    packet.target_system = target_system;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_DO_TAKEOFF, (const char *)&packet, MAVLINK_MSG_ID_LEAF_DO_TAKEOFF_MIN_LEN, MAVLINK_MSG_ID_LEAF_DO_TAKEOFF_LEN, MAVLINK_MSG_ID_LEAF_DO_TAKEOFF_CRC);
#endif
}

/**
 * @brief Send a leaf_do_takeoff message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_leaf_do_takeoff_send_struct(mavlink_channel_t chan, const mavlink_leaf_do_takeoff_t* leaf_do_takeoff)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_leaf_do_takeoff_send(chan, leaf_do_takeoff->target_system, leaf_do_takeoff->altitude);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_DO_TAKEOFF, (const char *)leaf_do_takeoff, MAVLINK_MSG_ID_LEAF_DO_TAKEOFF_MIN_LEN, MAVLINK_MSG_ID_LEAF_DO_TAKEOFF_LEN, MAVLINK_MSG_ID_LEAF_DO_TAKEOFF_CRC);
#endif
}

#if MAVLINK_MSG_ID_LEAF_DO_TAKEOFF_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_leaf_do_takeoff_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t target_system, float altitude)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, altitude);
    _mav_put_uint8_t(buf, 4, target_system);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_DO_TAKEOFF, buf, MAVLINK_MSG_ID_LEAF_DO_TAKEOFF_MIN_LEN, MAVLINK_MSG_ID_LEAF_DO_TAKEOFF_LEN, MAVLINK_MSG_ID_LEAF_DO_TAKEOFF_CRC);
#else
    mavlink_leaf_do_takeoff_t *packet = (mavlink_leaf_do_takeoff_t *)msgbuf;
    packet->altitude = altitude;
    packet->target_system = target_system;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_DO_TAKEOFF, (const char *)packet, MAVLINK_MSG_ID_LEAF_DO_TAKEOFF_MIN_LEN, MAVLINK_MSG_ID_LEAF_DO_TAKEOFF_LEN, MAVLINK_MSG_ID_LEAF_DO_TAKEOFF_CRC);
#endif
}
#endif

#endif

// MESSAGE LEAF_DO_TAKEOFF UNPACKING


/**
 * @brief Get field target_system from leaf_do_takeoff message
 *
 * @return  The system needs to takeoff
 */
static inline uint8_t mavlink_msg_leaf_do_takeoff_get_target_system(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  4);
}

/**
 * @brief Get field altitude from leaf_do_takeoff message
 *
 * @return  The altitude to takeoff to
 */
static inline float mavlink_msg_leaf_do_takeoff_get_altitude(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Decode a leaf_do_takeoff message into a struct
 *
 * @param msg The message to decode
 * @param leaf_do_takeoff C-struct to decode the message contents into
 */
static inline void mavlink_msg_leaf_do_takeoff_decode(const mavlink_message_t* msg, mavlink_leaf_do_takeoff_t* leaf_do_takeoff)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    leaf_do_takeoff->altitude = mavlink_msg_leaf_do_takeoff_get_altitude(msg);
    leaf_do_takeoff->target_system = mavlink_msg_leaf_do_takeoff_get_target_system(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_LEAF_DO_TAKEOFF_LEN? msg->len : MAVLINK_MSG_ID_LEAF_DO_TAKEOFF_LEN;
        memset(leaf_do_takeoff, 0, MAVLINK_MSG_ID_LEAF_DO_TAKEOFF_LEN);
    memcpy(leaf_do_takeoff, _MAV_PAYLOAD(msg), len);
#endif
}
