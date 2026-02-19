#pragma once
// MESSAGE LEAF_DO_SWITCH_MRFT_YAW PACKING

#define MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_YAW 77046


typedef struct __mavlink_leaf_do_switch_mrft_yaw_t {
 uint8_t target_system; /*<  The system needs to switch to MRFT yaw controller*/
 uint8_t enable; /*<  1 to switch on, 0 to switch back off*/
} mavlink_leaf_do_switch_mrft_yaw_t;

#define MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_YAW_LEN 2
#define MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_YAW_MIN_LEN 2
#define MAVLINK_MSG_ID_77046_LEN 2
#define MAVLINK_MSG_ID_77046_MIN_LEN 2

#define MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_YAW_CRC 65
#define MAVLINK_MSG_ID_77046_CRC 65



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_LEAF_DO_SWITCH_MRFT_YAW { \
    77046, \
    "LEAF_DO_SWITCH_MRFT_YAW", \
    2, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_leaf_do_switch_mrft_yaw_t, target_system) }, \
         { "enable", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_leaf_do_switch_mrft_yaw_t, enable) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_LEAF_DO_SWITCH_MRFT_YAW { \
    "LEAF_DO_SWITCH_MRFT_YAW", \
    2, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_leaf_do_switch_mrft_yaw_t, target_system) }, \
         { "enable", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_leaf_do_switch_mrft_yaw_t, enable) }, \
         } \
}
#endif

/**
 * @brief Pack a leaf_do_switch_mrft_yaw message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system  The system needs to switch to MRFT yaw controller
 * @param enable  1 to switch on, 0 to switch back off
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_do_switch_mrft_yaw_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t target_system, uint8_t enable)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_YAW_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, enable);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_YAW_LEN);
#else
    mavlink_leaf_do_switch_mrft_yaw_t packet;
    packet.target_system = target_system;
    packet.enable = enable;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_YAW_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_YAW;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_YAW_MIN_LEN, MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_YAW_LEN, MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_YAW_CRC);
}

/**
 * @brief Pack a leaf_do_switch_mrft_yaw message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system  The system needs to switch to MRFT yaw controller
 * @param enable  1 to switch on, 0 to switch back off
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_do_switch_mrft_yaw_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t target_system, uint8_t enable)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_YAW_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, enable);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_YAW_LEN);
#else
    mavlink_leaf_do_switch_mrft_yaw_t packet;
    packet.target_system = target_system;
    packet.enable = enable;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_YAW_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_YAW;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_YAW_MIN_LEN, MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_YAW_LEN, MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_YAW_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_YAW_MIN_LEN, MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_YAW_LEN);
#endif
}

/**
 * @brief Pack a leaf_do_switch_mrft_yaw message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param target_system  The system needs to switch to MRFT yaw controller
 * @param enable  1 to switch on, 0 to switch back off
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_do_switch_mrft_yaw_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t target_system,uint8_t enable)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_YAW_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, enable);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_YAW_LEN);
#else
    mavlink_leaf_do_switch_mrft_yaw_t packet;
    packet.target_system = target_system;
    packet.enable = enable;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_YAW_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_YAW;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_YAW_MIN_LEN, MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_YAW_LEN, MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_YAW_CRC);
}

/**
 * @brief Encode a leaf_do_switch_mrft_yaw struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param leaf_do_switch_mrft_yaw C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_do_switch_mrft_yaw_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_leaf_do_switch_mrft_yaw_t* leaf_do_switch_mrft_yaw)
{
    return mavlink_msg_leaf_do_switch_mrft_yaw_pack(system_id, component_id, msg, leaf_do_switch_mrft_yaw->target_system, leaf_do_switch_mrft_yaw->enable);
}

/**
 * @brief Encode a leaf_do_switch_mrft_yaw struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param leaf_do_switch_mrft_yaw C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_do_switch_mrft_yaw_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_leaf_do_switch_mrft_yaw_t* leaf_do_switch_mrft_yaw)
{
    return mavlink_msg_leaf_do_switch_mrft_yaw_pack_chan(system_id, component_id, chan, msg, leaf_do_switch_mrft_yaw->target_system, leaf_do_switch_mrft_yaw->enable);
}

/**
 * @brief Encode a leaf_do_switch_mrft_yaw struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param leaf_do_switch_mrft_yaw C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_do_switch_mrft_yaw_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_leaf_do_switch_mrft_yaw_t* leaf_do_switch_mrft_yaw)
{
    return mavlink_msg_leaf_do_switch_mrft_yaw_pack_status(system_id, component_id, _status, msg,  leaf_do_switch_mrft_yaw->target_system, leaf_do_switch_mrft_yaw->enable);
}

/**
 * @brief Send a leaf_do_switch_mrft_yaw message
 * @param chan MAVLink channel to send the message
 *
 * @param target_system  The system needs to switch to MRFT yaw controller
 * @param enable  1 to switch on, 0 to switch back off
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_leaf_do_switch_mrft_yaw_send(mavlink_channel_t chan, uint8_t target_system, uint8_t enable)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_YAW_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, enable);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_YAW, buf, MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_YAW_MIN_LEN, MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_YAW_LEN, MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_YAW_CRC);
#else
    mavlink_leaf_do_switch_mrft_yaw_t packet;
    packet.target_system = target_system;
    packet.enable = enable;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_YAW, (const char *)&packet, MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_YAW_MIN_LEN, MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_YAW_LEN, MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_YAW_CRC);
#endif
}

/**
 * @brief Send a leaf_do_switch_mrft_yaw message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_leaf_do_switch_mrft_yaw_send_struct(mavlink_channel_t chan, const mavlink_leaf_do_switch_mrft_yaw_t* leaf_do_switch_mrft_yaw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_leaf_do_switch_mrft_yaw_send(chan, leaf_do_switch_mrft_yaw->target_system, leaf_do_switch_mrft_yaw->enable);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_YAW, (const char *)leaf_do_switch_mrft_yaw, MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_YAW_MIN_LEN, MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_YAW_LEN, MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_YAW_CRC);
#endif
}

#if MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_YAW_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_leaf_do_switch_mrft_yaw_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t target_system, uint8_t enable)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, enable);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_YAW, buf, MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_YAW_MIN_LEN, MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_YAW_LEN, MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_YAW_CRC);
#else
    mavlink_leaf_do_switch_mrft_yaw_t *packet = (mavlink_leaf_do_switch_mrft_yaw_t *)msgbuf;
    packet->target_system = target_system;
    packet->enable = enable;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_YAW, (const char *)packet, MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_YAW_MIN_LEN, MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_YAW_LEN, MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_YAW_CRC);
#endif
}
#endif

#endif

// MESSAGE LEAF_DO_SWITCH_MRFT_YAW UNPACKING


/**
 * @brief Get field target_system from leaf_do_switch_mrft_yaw message
 *
 * @return  The system needs to switch to MRFT yaw controller
 */
static inline uint8_t mavlink_msg_leaf_do_switch_mrft_yaw_get_target_system(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field enable from leaf_do_switch_mrft_yaw message
 *
 * @return  1 to switch on, 0 to switch back off
 */
static inline uint8_t mavlink_msg_leaf_do_switch_mrft_yaw_get_enable(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Decode a leaf_do_switch_mrft_yaw message into a struct
 *
 * @param msg The message to decode
 * @param leaf_do_switch_mrft_yaw C-struct to decode the message contents into
 */
static inline void mavlink_msg_leaf_do_switch_mrft_yaw_decode(const mavlink_message_t* msg, mavlink_leaf_do_switch_mrft_yaw_t* leaf_do_switch_mrft_yaw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    leaf_do_switch_mrft_yaw->target_system = mavlink_msg_leaf_do_switch_mrft_yaw_get_target_system(msg);
    leaf_do_switch_mrft_yaw->enable = mavlink_msg_leaf_do_switch_mrft_yaw_get_enable(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_YAW_LEN? msg->len : MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_YAW_LEN;
        memset(leaf_do_switch_mrft_yaw, 0, MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_YAW_LEN);
    memcpy(leaf_do_switch_mrft_yaw, _MAV_PAYLOAD(msg), len);
#endif
}
