#pragma once
// MESSAGE LEAF_DO_SWITCH_MRFT_ROLL PACKING

#define MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_ROLL 77009


typedef struct __mavlink_leaf_do_switch_mrft_roll_t {
 uint8_t target_system; /*<  The system needs to switch to MRFT roll controller*/
 uint8_t enable; /*<  1 to switch on, 0 to switch back off*/
} mavlink_leaf_do_switch_mrft_roll_t;

#define MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_ROLL_LEN 2
#define MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_ROLL_MIN_LEN 2
#define MAVLINK_MSG_ID_77009_LEN 2
#define MAVLINK_MSG_ID_77009_MIN_LEN 2

#define MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_ROLL_CRC 137
#define MAVLINK_MSG_ID_77009_CRC 137



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_LEAF_DO_SWITCH_MRFT_ROLL { \
    77009, \
    "LEAF_DO_SWITCH_MRFT_ROLL", \
    2, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_leaf_do_switch_mrft_roll_t, target_system) }, \
         { "enable", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_leaf_do_switch_mrft_roll_t, enable) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_LEAF_DO_SWITCH_MRFT_ROLL { \
    "LEAF_DO_SWITCH_MRFT_ROLL", \
    2, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_leaf_do_switch_mrft_roll_t, target_system) }, \
         { "enable", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_leaf_do_switch_mrft_roll_t, enable) }, \
         } \
}
#endif

/**
 * @brief Pack a leaf_do_switch_mrft_roll message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system  The system needs to switch to MRFT roll controller
 * @param enable  1 to switch on, 0 to switch back off
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_do_switch_mrft_roll_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t target_system, uint8_t enable)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_ROLL_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, enable);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_ROLL_LEN);
#else
    mavlink_leaf_do_switch_mrft_roll_t packet;
    packet.target_system = target_system;
    packet.enable = enable;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_ROLL_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_ROLL;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_ROLL_MIN_LEN, MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_ROLL_LEN, MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_ROLL_CRC);
}

/**
 * @brief Pack a leaf_do_switch_mrft_roll message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system  The system needs to switch to MRFT roll controller
 * @param enable  1 to switch on, 0 to switch back off
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_do_switch_mrft_roll_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t target_system, uint8_t enable)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_ROLL_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, enable);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_ROLL_LEN);
#else
    mavlink_leaf_do_switch_mrft_roll_t packet;
    packet.target_system = target_system;
    packet.enable = enable;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_ROLL_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_ROLL;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_ROLL_MIN_LEN, MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_ROLL_LEN, MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_ROLL_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_ROLL_MIN_LEN, MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_ROLL_LEN);
#endif
}

/**
 * @brief Pack a leaf_do_switch_mrft_roll message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param target_system  The system needs to switch to MRFT roll controller
 * @param enable  1 to switch on, 0 to switch back off
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_do_switch_mrft_roll_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t target_system,uint8_t enable)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_ROLL_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, enable);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_ROLL_LEN);
#else
    mavlink_leaf_do_switch_mrft_roll_t packet;
    packet.target_system = target_system;
    packet.enable = enable;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_ROLL_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_ROLL;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_ROLL_MIN_LEN, MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_ROLL_LEN, MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_ROLL_CRC);
}

/**
 * @brief Encode a leaf_do_switch_mrft_roll struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param leaf_do_switch_mrft_roll C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_do_switch_mrft_roll_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_leaf_do_switch_mrft_roll_t* leaf_do_switch_mrft_roll)
{
    return mavlink_msg_leaf_do_switch_mrft_roll_pack(system_id, component_id, msg, leaf_do_switch_mrft_roll->target_system, leaf_do_switch_mrft_roll->enable);
}

/**
 * @brief Encode a leaf_do_switch_mrft_roll struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param leaf_do_switch_mrft_roll C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_do_switch_mrft_roll_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_leaf_do_switch_mrft_roll_t* leaf_do_switch_mrft_roll)
{
    return mavlink_msg_leaf_do_switch_mrft_roll_pack_chan(system_id, component_id, chan, msg, leaf_do_switch_mrft_roll->target_system, leaf_do_switch_mrft_roll->enable);
}

/**
 * @brief Encode a leaf_do_switch_mrft_roll struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param leaf_do_switch_mrft_roll C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_do_switch_mrft_roll_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_leaf_do_switch_mrft_roll_t* leaf_do_switch_mrft_roll)
{
    return mavlink_msg_leaf_do_switch_mrft_roll_pack_status(system_id, component_id, _status, msg,  leaf_do_switch_mrft_roll->target_system, leaf_do_switch_mrft_roll->enable);
}

/**
 * @brief Send a leaf_do_switch_mrft_roll message
 * @param chan MAVLink channel to send the message
 *
 * @param target_system  The system needs to switch to MRFT roll controller
 * @param enable  1 to switch on, 0 to switch back off
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_leaf_do_switch_mrft_roll_send(mavlink_channel_t chan, uint8_t target_system, uint8_t enable)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_ROLL_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, enable);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_ROLL, buf, MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_ROLL_MIN_LEN, MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_ROLL_LEN, MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_ROLL_CRC);
#else
    mavlink_leaf_do_switch_mrft_roll_t packet;
    packet.target_system = target_system;
    packet.enable = enable;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_ROLL, (const char *)&packet, MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_ROLL_MIN_LEN, MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_ROLL_LEN, MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_ROLL_CRC);
#endif
}

/**
 * @brief Send a leaf_do_switch_mrft_roll message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_leaf_do_switch_mrft_roll_send_struct(mavlink_channel_t chan, const mavlink_leaf_do_switch_mrft_roll_t* leaf_do_switch_mrft_roll)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_leaf_do_switch_mrft_roll_send(chan, leaf_do_switch_mrft_roll->target_system, leaf_do_switch_mrft_roll->enable);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_ROLL, (const char *)leaf_do_switch_mrft_roll, MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_ROLL_MIN_LEN, MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_ROLL_LEN, MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_ROLL_CRC);
#endif
}

#if MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_ROLL_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_leaf_do_switch_mrft_roll_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t target_system, uint8_t enable)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, enable);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_ROLL, buf, MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_ROLL_MIN_LEN, MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_ROLL_LEN, MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_ROLL_CRC);
#else
    mavlink_leaf_do_switch_mrft_roll_t *packet = (mavlink_leaf_do_switch_mrft_roll_t *)msgbuf;
    packet->target_system = target_system;
    packet->enable = enable;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_ROLL, (const char *)packet, MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_ROLL_MIN_LEN, MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_ROLL_LEN, MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_ROLL_CRC);
#endif
}
#endif

#endif

// MESSAGE LEAF_DO_SWITCH_MRFT_ROLL UNPACKING


/**
 * @brief Get field target_system from leaf_do_switch_mrft_roll message
 *
 * @return  The system needs to switch to MRFT roll controller
 */
static inline uint8_t mavlink_msg_leaf_do_switch_mrft_roll_get_target_system(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field enable from leaf_do_switch_mrft_roll message
 *
 * @return  1 to switch on, 0 to switch back off
 */
static inline uint8_t mavlink_msg_leaf_do_switch_mrft_roll_get_enable(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Decode a leaf_do_switch_mrft_roll message into a struct
 *
 * @param msg The message to decode
 * @param leaf_do_switch_mrft_roll C-struct to decode the message contents into
 */
static inline void mavlink_msg_leaf_do_switch_mrft_roll_decode(const mavlink_message_t* msg, mavlink_leaf_do_switch_mrft_roll_t* leaf_do_switch_mrft_roll)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    leaf_do_switch_mrft_roll->target_system = mavlink_msg_leaf_do_switch_mrft_roll_get_target_system(msg);
    leaf_do_switch_mrft_roll->enable = mavlink_msg_leaf_do_switch_mrft_roll_get_enable(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_ROLL_LEN? msg->len : MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_ROLL_LEN;
        memset(leaf_do_switch_mrft_roll, 0, MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_ROLL_LEN);
    memcpy(leaf_do_switch_mrft_roll, _MAV_PAYLOAD(msg), len);
#endif
}
