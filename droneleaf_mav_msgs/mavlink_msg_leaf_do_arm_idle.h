#pragma once
// MESSAGE LEAF_DO_ARM_IDLE PACKING

#define MAVLINK_MSG_ID_LEAF_DO_ARM_IDLE 77017


typedef struct __mavlink_leaf_do_arm_idle_t {
 uint8_t target_system; /*<  The system needs to idle*/
 uint8_t enable; /*<  1 to idle, 0 to disarm*/
} mavlink_leaf_do_arm_idle_t;

#define MAVLINK_MSG_ID_LEAF_DO_ARM_IDLE_LEN 2
#define MAVLINK_MSG_ID_LEAF_DO_ARM_IDLE_MIN_LEN 2
#define MAVLINK_MSG_ID_77017_LEN 2
#define MAVLINK_MSG_ID_77017_MIN_LEN 2

#define MAVLINK_MSG_ID_LEAF_DO_ARM_IDLE_CRC 114
#define MAVLINK_MSG_ID_77017_CRC 114



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_LEAF_DO_ARM_IDLE { \
    77017, \
    "LEAF_DO_ARM_IDLE", \
    2, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_leaf_do_arm_idle_t, target_system) }, \
         { "enable", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_leaf_do_arm_idle_t, enable) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_LEAF_DO_ARM_IDLE { \
    "LEAF_DO_ARM_IDLE", \
    2, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_leaf_do_arm_idle_t, target_system) }, \
         { "enable", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_leaf_do_arm_idle_t, enable) }, \
         } \
}
#endif

/**
 * @brief Pack a leaf_do_arm_idle message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system  The system needs to idle
 * @param enable  1 to idle, 0 to disarm
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_do_arm_idle_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t target_system, uint8_t enable)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_DO_ARM_IDLE_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, enable);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_DO_ARM_IDLE_LEN);
#else
    mavlink_leaf_do_arm_idle_t packet;
    packet.target_system = target_system;
    packet.enable = enable;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_DO_ARM_IDLE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_DO_ARM_IDLE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_LEAF_DO_ARM_IDLE_MIN_LEN, MAVLINK_MSG_ID_LEAF_DO_ARM_IDLE_LEN, MAVLINK_MSG_ID_LEAF_DO_ARM_IDLE_CRC);
}

/**
 * @brief Pack a leaf_do_arm_idle message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system  The system needs to idle
 * @param enable  1 to idle, 0 to disarm
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_do_arm_idle_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t target_system, uint8_t enable)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_DO_ARM_IDLE_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, enable);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_DO_ARM_IDLE_LEN);
#else
    mavlink_leaf_do_arm_idle_t packet;
    packet.target_system = target_system;
    packet.enable = enable;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_DO_ARM_IDLE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_DO_ARM_IDLE;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_DO_ARM_IDLE_MIN_LEN, MAVLINK_MSG_ID_LEAF_DO_ARM_IDLE_LEN, MAVLINK_MSG_ID_LEAF_DO_ARM_IDLE_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_DO_ARM_IDLE_MIN_LEN, MAVLINK_MSG_ID_LEAF_DO_ARM_IDLE_LEN);
#endif
}

/**
 * @brief Pack a leaf_do_arm_idle message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param target_system  The system needs to idle
 * @param enable  1 to idle, 0 to disarm
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_do_arm_idle_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t target_system,uint8_t enable)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_DO_ARM_IDLE_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, enable);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_DO_ARM_IDLE_LEN);
#else
    mavlink_leaf_do_arm_idle_t packet;
    packet.target_system = target_system;
    packet.enable = enable;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_DO_ARM_IDLE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_DO_ARM_IDLE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_LEAF_DO_ARM_IDLE_MIN_LEN, MAVLINK_MSG_ID_LEAF_DO_ARM_IDLE_LEN, MAVLINK_MSG_ID_LEAF_DO_ARM_IDLE_CRC);
}

/**
 * @brief Encode a leaf_do_arm_idle struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param leaf_do_arm_idle C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_do_arm_idle_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_leaf_do_arm_idle_t* leaf_do_arm_idle)
{
    return mavlink_msg_leaf_do_arm_idle_pack(system_id, component_id, msg, leaf_do_arm_idle->target_system, leaf_do_arm_idle->enable);
}

/**
 * @brief Encode a leaf_do_arm_idle struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param leaf_do_arm_idle C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_do_arm_idle_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_leaf_do_arm_idle_t* leaf_do_arm_idle)
{
    return mavlink_msg_leaf_do_arm_idle_pack_chan(system_id, component_id, chan, msg, leaf_do_arm_idle->target_system, leaf_do_arm_idle->enable);
}

/**
 * @brief Encode a leaf_do_arm_idle struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param leaf_do_arm_idle C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_do_arm_idle_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_leaf_do_arm_idle_t* leaf_do_arm_idle)
{
    return mavlink_msg_leaf_do_arm_idle_pack_status(system_id, component_id, _status, msg,  leaf_do_arm_idle->target_system, leaf_do_arm_idle->enable);
}

/**
 * @brief Send a leaf_do_arm_idle message
 * @param chan MAVLink channel to send the message
 *
 * @param target_system  The system needs to idle
 * @param enable  1 to idle, 0 to disarm
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_leaf_do_arm_idle_send(mavlink_channel_t chan, uint8_t target_system, uint8_t enable)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_DO_ARM_IDLE_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, enable);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_DO_ARM_IDLE, buf, MAVLINK_MSG_ID_LEAF_DO_ARM_IDLE_MIN_LEN, MAVLINK_MSG_ID_LEAF_DO_ARM_IDLE_LEN, MAVLINK_MSG_ID_LEAF_DO_ARM_IDLE_CRC);
#else
    mavlink_leaf_do_arm_idle_t packet;
    packet.target_system = target_system;
    packet.enable = enable;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_DO_ARM_IDLE, (const char *)&packet, MAVLINK_MSG_ID_LEAF_DO_ARM_IDLE_MIN_LEN, MAVLINK_MSG_ID_LEAF_DO_ARM_IDLE_LEN, MAVLINK_MSG_ID_LEAF_DO_ARM_IDLE_CRC);
#endif
}

/**
 * @brief Send a leaf_do_arm_idle message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_leaf_do_arm_idle_send_struct(mavlink_channel_t chan, const mavlink_leaf_do_arm_idle_t* leaf_do_arm_idle)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_leaf_do_arm_idle_send(chan, leaf_do_arm_idle->target_system, leaf_do_arm_idle->enable);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_DO_ARM_IDLE, (const char *)leaf_do_arm_idle, MAVLINK_MSG_ID_LEAF_DO_ARM_IDLE_MIN_LEN, MAVLINK_MSG_ID_LEAF_DO_ARM_IDLE_LEN, MAVLINK_MSG_ID_LEAF_DO_ARM_IDLE_CRC);
#endif
}

#if MAVLINK_MSG_ID_LEAF_DO_ARM_IDLE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_leaf_do_arm_idle_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t target_system, uint8_t enable)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, enable);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_DO_ARM_IDLE, buf, MAVLINK_MSG_ID_LEAF_DO_ARM_IDLE_MIN_LEN, MAVLINK_MSG_ID_LEAF_DO_ARM_IDLE_LEN, MAVLINK_MSG_ID_LEAF_DO_ARM_IDLE_CRC);
#else
    mavlink_leaf_do_arm_idle_t *packet = (mavlink_leaf_do_arm_idle_t *)msgbuf;
    packet->target_system = target_system;
    packet->enable = enable;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_DO_ARM_IDLE, (const char *)packet, MAVLINK_MSG_ID_LEAF_DO_ARM_IDLE_MIN_LEN, MAVLINK_MSG_ID_LEAF_DO_ARM_IDLE_LEN, MAVLINK_MSG_ID_LEAF_DO_ARM_IDLE_CRC);
#endif
}
#endif

#endif

// MESSAGE LEAF_DO_ARM_IDLE UNPACKING


/**
 * @brief Get field target_system from leaf_do_arm_idle message
 *
 * @return  The system needs to idle
 */
static inline uint8_t mavlink_msg_leaf_do_arm_idle_get_target_system(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field enable from leaf_do_arm_idle message
 *
 * @return  1 to idle, 0 to disarm
 */
static inline uint8_t mavlink_msg_leaf_do_arm_idle_get_enable(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Decode a leaf_do_arm_idle message into a struct
 *
 * @param msg The message to decode
 * @param leaf_do_arm_idle C-struct to decode the message contents into
 */
static inline void mavlink_msg_leaf_do_arm_idle_decode(const mavlink_message_t* msg, mavlink_leaf_do_arm_idle_t* leaf_do_arm_idle)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    leaf_do_arm_idle->target_system = mavlink_msg_leaf_do_arm_idle_get_target_system(msg);
    leaf_do_arm_idle->enable = mavlink_msg_leaf_do_arm_idle_get_enable(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_LEAF_DO_ARM_IDLE_LEN? msg->len : MAVLINK_MSG_ID_LEAF_DO_ARM_IDLE_LEN;
        memset(leaf_do_arm_idle, 0, MAVLINK_MSG_ID_LEAF_DO_ARM_IDLE_LEN);
    memcpy(leaf_do_arm_idle, _MAV_PAYLOAD(msg), len);
#endif
}
