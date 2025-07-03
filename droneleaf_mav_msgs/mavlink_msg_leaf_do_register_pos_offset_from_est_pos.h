#pragma once
// MESSAGE LEAF_DO_REGISTER_POS_OFFSET_FROM_EST_POS PACKING

#define MAVLINK_MSG_ID_LEAF_DO_REGISTER_POS_OFFSET_FROM_EST_POS 77007


typedef struct __mavlink_leaf_do_register_pos_offset_from_est_pos_t {
 uint8_t target_system; /*<  The system needs to go into emergency mode*/
 uint8_t reg; /*<  1 to register, 0 to unregister*/
} mavlink_leaf_do_register_pos_offset_from_est_pos_t;

#define MAVLINK_MSG_ID_LEAF_DO_REGISTER_POS_OFFSET_FROM_EST_POS_LEN 2
#define MAVLINK_MSG_ID_LEAF_DO_REGISTER_POS_OFFSET_FROM_EST_POS_MIN_LEN 2
#define MAVLINK_MSG_ID_77007_LEN 2
#define MAVLINK_MSG_ID_77007_MIN_LEN 2

#define MAVLINK_MSG_ID_LEAF_DO_REGISTER_POS_OFFSET_FROM_EST_POS_CRC 222
#define MAVLINK_MSG_ID_77007_CRC 222



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_LEAF_DO_REGISTER_POS_OFFSET_FROM_EST_POS { \
    77007, \
    "LEAF_DO_REGISTER_POS_OFFSET_FROM_EST_POS", \
    2, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_leaf_do_register_pos_offset_from_est_pos_t, target_system) }, \
         { "reg", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_leaf_do_register_pos_offset_from_est_pos_t, reg) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_LEAF_DO_REGISTER_POS_OFFSET_FROM_EST_POS { \
    "LEAF_DO_REGISTER_POS_OFFSET_FROM_EST_POS", \
    2, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_leaf_do_register_pos_offset_from_est_pos_t, target_system) }, \
         { "reg", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_leaf_do_register_pos_offset_from_est_pos_t, reg) }, \
         } \
}
#endif

/**
 * @brief Pack a leaf_do_register_pos_offset_from_est_pos message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system  The system needs to go into emergency mode
 * @param reg  1 to register, 0 to unregister
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_do_register_pos_offset_from_est_pos_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t target_system, uint8_t reg)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_DO_REGISTER_POS_OFFSET_FROM_EST_POS_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, reg);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_DO_REGISTER_POS_OFFSET_FROM_EST_POS_LEN);
#else
    mavlink_leaf_do_register_pos_offset_from_est_pos_t packet;
    packet.target_system = target_system;
    packet.reg = reg;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_DO_REGISTER_POS_OFFSET_FROM_EST_POS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_DO_REGISTER_POS_OFFSET_FROM_EST_POS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_LEAF_DO_REGISTER_POS_OFFSET_FROM_EST_POS_MIN_LEN, MAVLINK_MSG_ID_LEAF_DO_REGISTER_POS_OFFSET_FROM_EST_POS_LEN, MAVLINK_MSG_ID_LEAF_DO_REGISTER_POS_OFFSET_FROM_EST_POS_CRC);
}

/**
 * @brief Pack a leaf_do_register_pos_offset_from_est_pos message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system  The system needs to go into emergency mode
 * @param reg  1 to register, 0 to unregister
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_do_register_pos_offset_from_est_pos_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t target_system, uint8_t reg)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_DO_REGISTER_POS_OFFSET_FROM_EST_POS_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, reg);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_DO_REGISTER_POS_OFFSET_FROM_EST_POS_LEN);
#else
    mavlink_leaf_do_register_pos_offset_from_est_pos_t packet;
    packet.target_system = target_system;
    packet.reg = reg;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_DO_REGISTER_POS_OFFSET_FROM_EST_POS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_DO_REGISTER_POS_OFFSET_FROM_EST_POS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_DO_REGISTER_POS_OFFSET_FROM_EST_POS_MIN_LEN, MAVLINK_MSG_ID_LEAF_DO_REGISTER_POS_OFFSET_FROM_EST_POS_LEN, MAVLINK_MSG_ID_LEAF_DO_REGISTER_POS_OFFSET_FROM_EST_POS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_DO_REGISTER_POS_OFFSET_FROM_EST_POS_MIN_LEN, MAVLINK_MSG_ID_LEAF_DO_REGISTER_POS_OFFSET_FROM_EST_POS_LEN);
#endif
}

/**
 * @brief Pack a leaf_do_register_pos_offset_from_est_pos message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param target_system  The system needs to go into emergency mode
 * @param reg  1 to register, 0 to unregister
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_do_register_pos_offset_from_est_pos_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t target_system,uint8_t reg)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_DO_REGISTER_POS_OFFSET_FROM_EST_POS_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, reg);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_DO_REGISTER_POS_OFFSET_FROM_EST_POS_LEN);
#else
    mavlink_leaf_do_register_pos_offset_from_est_pos_t packet;
    packet.target_system = target_system;
    packet.reg = reg;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_DO_REGISTER_POS_OFFSET_FROM_EST_POS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_DO_REGISTER_POS_OFFSET_FROM_EST_POS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_LEAF_DO_REGISTER_POS_OFFSET_FROM_EST_POS_MIN_LEN, MAVLINK_MSG_ID_LEAF_DO_REGISTER_POS_OFFSET_FROM_EST_POS_LEN, MAVLINK_MSG_ID_LEAF_DO_REGISTER_POS_OFFSET_FROM_EST_POS_CRC);
}

/**
 * @brief Encode a leaf_do_register_pos_offset_from_est_pos struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param leaf_do_register_pos_offset_from_est_pos C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_do_register_pos_offset_from_est_pos_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_leaf_do_register_pos_offset_from_est_pos_t* leaf_do_register_pos_offset_from_est_pos)
{
    return mavlink_msg_leaf_do_register_pos_offset_from_est_pos_pack(system_id, component_id, msg, leaf_do_register_pos_offset_from_est_pos->target_system, leaf_do_register_pos_offset_from_est_pos->reg);
}

/**
 * @brief Encode a leaf_do_register_pos_offset_from_est_pos struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param leaf_do_register_pos_offset_from_est_pos C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_do_register_pos_offset_from_est_pos_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_leaf_do_register_pos_offset_from_est_pos_t* leaf_do_register_pos_offset_from_est_pos)
{
    return mavlink_msg_leaf_do_register_pos_offset_from_est_pos_pack_chan(system_id, component_id, chan, msg, leaf_do_register_pos_offset_from_est_pos->target_system, leaf_do_register_pos_offset_from_est_pos->reg);
}

/**
 * @brief Encode a leaf_do_register_pos_offset_from_est_pos struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param leaf_do_register_pos_offset_from_est_pos C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_do_register_pos_offset_from_est_pos_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_leaf_do_register_pos_offset_from_est_pos_t* leaf_do_register_pos_offset_from_est_pos)
{
    return mavlink_msg_leaf_do_register_pos_offset_from_est_pos_pack_status(system_id, component_id, _status, msg,  leaf_do_register_pos_offset_from_est_pos->target_system, leaf_do_register_pos_offset_from_est_pos->reg);
}

/**
 * @brief Send a leaf_do_register_pos_offset_from_est_pos message
 * @param chan MAVLink channel to send the message
 *
 * @param target_system  The system needs to go into emergency mode
 * @param reg  1 to register, 0 to unregister
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_leaf_do_register_pos_offset_from_est_pos_send(mavlink_channel_t chan, uint8_t target_system, uint8_t reg)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_DO_REGISTER_POS_OFFSET_FROM_EST_POS_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, reg);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_DO_REGISTER_POS_OFFSET_FROM_EST_POS, buf, MAVLINK_MSG_ID_LEAF_DO_REGISTER_POS_OFFSET_FROM_EST_POS_MIN_LEN, MAVLINK_MSG_ID_LEAF_DO_REGISTER_POS_OFFSET_FROM_EST_POS_LEN, MAVLINK_MSG_ID_LEAF_DO_REGISTER_POS_OFFSET_FROM_EST_POS_CRC);
#else
    mavlink_leaf_do_register_pos_offset_from_est_pos_t packet;
    packet.target_system = target_system;
    packet.reg = reg;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_DO_REGISTER_POS_OFFSET_FROM_EST_POS, (const char *)&packet, MAVLINK_MSG_ID_LEAF_DO_REGISTER_POS_OFFSET_FROM_EST_POS_MIN_LEN, MAVLINK_MSG_ID_LEAF_DO_REGISTER_POS_OFFSET_FROM_EST_POS_LEN, MAVLINK_MSG_ID_LEAF_DO_REGISTER_POS_OFFSET_FROM_EST_POS_CRC);
#endif
}

/**
 * @brief Send a leaf_do_register_pos_offset_from_est_pos message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_leaf_do_register_pos_offset_from_est_pos_send_struct(mavlink_channel_t chan, const mavlink_leaf_do_register_pos_offset_from_est_pos_t* leaf_do_register_pos_offset_from_est_pos)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_leaf_do_register_pos_offset_from_est_pos_send(chan, leaf_do_register_pos_offset_from_est_pos->target_system, leaf_do_register_pos_offset_from_est_pos->reg);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_DO_REGISTER_POS_OFFSET_FROM_EST_POS, (const char *)leaf_do_register_pos_offset_from_est_pos, MAVLINK_MSG_ID_LEAF_DO_REGISTER_POS_OFFSET_FROM_EST_POS_MIN_LEN, MAVLINK_MSG_ID_LEAF_DO_REGISTER_POS_OFFSET_FROM_EST_POS_LEN, MAVLINK_MSG_ID_LEAF_DO_REGISTER_POS_OFFSET_FROM_EST_POS_CRC);
#endif
}

#if MAVLINK_MSG_ID_LEAF_DO_REGISTER_POS_OFFSET_FROM_EST_POS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_leaf_do_register_pos_offset_from_est_pos_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t target_system, uint8_t reg)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, reg);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_DO_REGISTER_POS_OFFSET_FROM_EST_POS, buf, MAVLINK_MSG_ID_LEAF_DO_REGISTER_POS_OFFSET_FROM_EST_POS_MIN_LEN, MAVLINK_MSG_ID_LEAF_DO_REGISTER_POS_OFFSET_FROM_EST_POS_LEN, MAVLINK_MSG_ID_LEAF_DO_REGISTER_POS_OFFSET_FROM_EST_POS_CRC);
#else
    mavlink_leaf_do_register_pos_offset_from_est_pos_t *packet = (mavlink_leaf_do_register_pos_offset_from_est_pos_t *)msgbuf;
    packet->target_system = target_system;
    packet->reg = reg;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_DO_REGISTER_POS_OFFSET_FROM_EST_POS, (const char *)packet, MAVLINK_MSG_ID_LEAF_DO_REGISTER_POS_OFFSET_FROM_EST_POS_MIN_LEN, MAVLINK_MSG_ID_LEAF_DO_REGISTER_POS_OFFSET_FROM_EST_POS_LEN, MAVLINK_MSG_ID_LEAF_DO_REGISTER_POS_OFFSET_FROM_EST_POS_CRC);
#endif
}
#endif

#endif

// MESSAGE LEAF_DO_REGISTER_POS_OFFSET_FROM_EST_POS UNPACKING


/**
 * @brief Get field target_system from leaf_do_register_pos_offset_from_est_pos message
 *
 * @return  The system needs to go into emergency mode
 */
static inline uint8_t mavlink_msg_leaf_do_register_pos_offset_from_est_pos_get_target_system(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field reg from leaf_do_register_pos_offset_from_est_pos message
 *
 * @return  1 to register, 0 to unregister
 */
static inline uint8_t mavlink_msg_leaf_do_register_pos_offset_from_est_pos_get_reg(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Decode a leaf_do_register_pos_offset_from_est_pos message into a struct
 *
 * @param msg The message to decode
 * @param leaf_do_register_pos_offset_from_est_pos C-struct to decode the message contents into
 */
static inline void mavlink_msg_leaf_do_register_pos_offset_from_est_pos_decode(const mavlink_message_t* msg, mavlink_leaf_do_register_pos_offset_from_est_pos_t* leaf_do_register_pos_offset_from_est_pos)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    leaf_do_register_pos_offset_from_est_pos->target_system = mavlink_msg_leaf_do_register_pos_offset_from_est_pos_get_target_system(msg);
    leaf_do_register_pos_offset_from_est_pos->reg = mavlink_msg_leaf_do_register_pos_offset_from_est_pos_get_reg(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_LEAF_DO_REGISTER_POS_OFFSET_FROM_EST_POS_LEN? msg->len : MAVLINK_MSG_ID_LEAF_DO_REGISTER_POS_OFFSET_FROM_EST_POS_LEN;
        memset(leaf_do_register_pos_offset_from_est_pos, 0, MAVLINK_MSG_ID_LEAF_DO_REGISTER_POS_OFFSET_FROM_EST_POS_LEN);
    memcpy(leaf_do_register_pos_offset_from_est_pos, _MAV_PAYLOAD(msg), len);
#endif
}
