#pragma once
// MESSAGE LEAF_CONTROL_CMD PACKING

#define MAVLINK_MSG_ID_LEAF_CONTROL_CMD 77015


typedef struct __mavlink_leaf_control_cmd_t {
 uint8_t target_system; /*<  The system needs to execute a control command*/
 uint8_t cmd; /*<  The control command to execute*/
} mavlink_leaf_control_cmd_t;

#define MAVLINK_MSG_ID_LEAF_CONTROL_CMD_LEN 2
#define MAVLINK_MSG_ID_LEAF_CONTROL_CMD_MIN_LEN 2
#define MAVLINK_MSG_ID_77015_LEN 2
#define MAVLINK_MSG_ID_77015_MIN_LEN 2

#define MAVLINK_MSG_ID_LEAF_CONTROL_CMD_CRC 52
#define MAVLINK_MSG_ID_77015_CRC 52



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_LEAF_CONTROL_CMD { \
    77015, \
    "LEAF_CONTROL_CMD", \
    2, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_leaf_control_cmd_t, target_system) }, \
         { "cmd", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_leaf_control_cmd_t, cmd) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_LEAF_CONTROL_CMD { \
    "LEAF_CONTROL_CMD", \
    2, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_leaf_control_cmd_t, target_system) }, \
         { "cmd", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_leaf_control_cmd_t, cmd) }, \
         } \
}
#endif

/**
 * @brief Pack a leaf_control_cmd message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system  The system needs to execute a control command
 * @param cmd  The control command to execute
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_control_cmd_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t target_system, uint8_t cmd)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_CONTROL_CMD_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, cmd);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_CONTROL_CMD_LEN);
#else
    mavlink_leaf_control_cmd_t packet;
    packet.target_system = target_system;
    packet.cmd = cmd;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_CONTROL_CMD_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_CONTROL_CMD;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_LEAF_CONTROL_CMD_MIN_LEN, MAVLINK_MSG_ID_LEAF_CONTROL_CMD_LEN, MAVLINK_MSG_ID_LEAF_CONTROL_CMD_CRC);
}

/**
 * @brief Pack a leaf_control_cmd message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system  The system needs to execute a control command
 * @param cmd  The control command to execute
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_control_cmd_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t target_system, uint8_t cmd)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_CONTROL_CMD_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, cmd);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_CONTROL_CMD_LEN);
#else
    mavlink_leaf_control_cmd_t packet;
    packet.target_system = target_system;
    packet.cmd = cmd;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_CONTROL_CMD_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_CONTROL_CMD;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_CONTROL_CMD_MIN_LEN, MAVLINK_MSG_ID_LEAF_CONTROL_CMD_LEN, MAVLINK_MSG_ID_LEAF_CONTROL_CMD_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_CONTROL_CMD_MIN_LEN, MAVLINK_MSG_ID_LEAF_CONTROL_CMD_LEN);
#endif
}

/**
 * @brief Pack a leaf_control_cmd message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param target_system  The system needs to execute a control command
 * @param cmd  The control command to execute
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_control_cmd_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t target_system,uint8_t cmd)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_CONTROL_CMD_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, cmd);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_CONTROL_CMD_LEN);
#else
    mavlink_leaf_control_cmd_t packet;
    packet.target_system = target_system;
    packet.cmd = cmd;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_CONTROL_CMD_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_CONTROL_CMD;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_LEAF_CONTROL_CMD_MIN_LEN, MAVLINK_MSG_ID_LEAF_CONTROL_CMD_LEN, MAVLINK_MSG_ID_LEAF_CONTROL_CMD_CRC);
}

/**
 * @brief Encode a leaf_control_cmd struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param leaf_control_cmd C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_control_cmd_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_leaf_control_cmd_t* leaf_control_cmd)
{
    return mavlink_msg_leaf_control_cmd_pack(system_id, component_id, msg, leaf_control_cmd->target_system, leaf_control_cmd->cmd);
}

/**
 * @brief Encode a leaf_control_cmd struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param leaf_control_cmd C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_control_cmd_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_leaf_control_cmd_t* leaf_control_cmd)
{
    return mavlink_msg_leaf_control_cmd_pack_chan(system_id, component_id, chan, msg, leaf_control_cmd->target_system, leaf_control_cmd->cmd);
}

/**
 * @brief Encode a leaf_control_cmd struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param leaf_control_cmd C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_control_cmd_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_leaf_control_cmd_t* leaf_control_cmd)
{
    return mavlink_msg_leaf_control_cmd_pack_status(system_id, component_id, _status, msg,  leaf_control_cmd->target_system, leaf_control_cmd->cmd);
}

/**
 * @brief Send a leaf_control_cmd message
 * @param chan MAVLink channel to send the message
 *
 * @param target_system  The system needs to execute a control command
 * @param cmd  The control command to execute
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_leaf_control_cmd_send(mavlink_channel_t chan, uint8_t target_system, uint8_t cmd)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_CONTROL_CMD_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, cmd);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_CONTROL_CMD, buf, MAVLINK_MSG_ID_LEAF_CONTROL_CMD_MIN_LEN, MAVLINK_MSG_ID_LEAF_CONTROL_CMD_LEN, MAVLINK_MSG_ID_LEAF_CONTROL_CMD_CRC);
#else
    mavlink_leaf_control_cmd_t packet;
    packet.target_system = target_system;
    packet.cmd = cmd;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_CONTROL_CMD, (const char *)&packet, MAVLINK_MSG_ID_LEAF_CONTROL_CMD_MIN_LEN, MAVLINK_MSG_ID_LEAF_CONTROL_CMD_LEN, MAVLINK_MSG_ID_LEAF_CONTROL_CMD_CRC);
#endif
}

/**
 * @brief Send a leaf_control_cmd message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_leaf_control_cmd_send_struct(mavlink_channel_t chan, const mavlink_leaf_control_cmd_t* leaf_control_cmd)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_leaf_control_cmd_send(chan, leaf_control_cmd->target_system, leaf_control_cmd->cmd);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_CONTROL_CMD, (const char *)leaf_control_cmd, MAVLINK_MSG_ID_LEAF_CONTROL_CMD_MIN_LEN, MAVLINK_MSG_ID_LEAF_CONTROL_CMD_LEN, MAVLINK_MSG_ID_LEAF_CONTROL_CMD_CRC);
#endif
}

#if MAVLINK_MSG_ID_LEAF_CONTROL_CMD_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_leaf_control_cmd_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t target_system, uint8_t cmd)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, cmd);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_CONTROL_CMD, buf, MAVLINK_MSG_ID_LEAF_CONTROL_CMD_MIN_LEN, MAVLINK_MSG_ID_LEAF_CONTROL_CMD_LEN, MAVLINK_MSG_ID_LEAF_CONTROL_CMD_CRC);
#else
    mavlink_leaf_control_cmd_t *packet = (mavlink_leaf_control_cmd_t *)msgbuf;
    packet->target_system = target_system;
    packet->cmd = cmd;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_CONTROL_CMD, (const char *)packet, MAVLINK_MSG_ID_LEAF_CONTROL_CMD_MIN_LEN, MAVLINK_MSG_ID_LEAF_CONTROL_CMD_LEN, MAVLINK_MSG_ID_LEAF_CONTROL_CMD_CRC);
#endif
}
#endif

#endif

// MESSAGE LEAF_CONTROL_CMD UNPACKING


/**
 * @brief Get field target_system from leaf_control_cmd message
 *
 * @return  The system needs to execute a control command
 */
static inline uint8_t mavlink_msg_leaf_control_cmd_get_target_system(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field cmd from leaf_control_cmd message
 *
 * @return  The control command to execute
 */
static inline uint8_t mavlink_msg_leaf_control_cmd_get_cmd(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Decode a leaf_control_cmd message into a struct
 *
 * @param msg The message to decode
 * @param leaf_control_cmd C-struct to decode the message contents into
 */
static inline void mavlink_msg_leaf_control_cmd_decode(const mavlink_message_t* msg, mavlink_leaf_control_cmd_t* leaf_control_cmd)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    leaf_control_cmd->target_system = mavlink_msg_leaf_control_cmd_get_target_system(msg);
    leaf_control_cmd->cmd = mavlink_msg_leaf_control_cmd_get_cmd(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_LEAF_CONTROL_CMD_LEN? msg->len : MAVLINK_MSG_ID_LEAF_CONTROL_CMD_LEN;
        memset(leaf_control_cmd, 0, MAVLINK_MSG_ID_LEAF_CONTROL_CMD_LEN);
    memcpy(leaf_control_cmd, _MAV_PAYLOAD(msg), len);
#endif
}
