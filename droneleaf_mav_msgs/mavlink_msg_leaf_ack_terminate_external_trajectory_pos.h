#pragma once
// MESSAGE LEAF_ACK_TERMINATE_EXTERNAL_TRAJECTORY_POS PACKING

#define MAVLINK_MSG_ID_LEAF_ACK_TERMINATE_EXTERNAL_TRAJECTORY_POS 77028


typedef struct __mavlink_leaf_ack_terminate_external_trajectory_pos_t {
 uint8_t target_system; /*<  The system needs to queue the trajectory*/
 uint8_t status; /*<  1 for ack, 0 for nack*/
 uint8_t traj_id; /*<  0 for pos, 1 for ori*/
} mavlink_leaf_ack_terminate_external_trajectory_pos_t;

#define MAVLINK_MSG_ID_LEAF_ACK_TERMINATE_EXTERNAL_TRAJECTORY_POS_LEN 3
#define MAVLINK_MSG_ID_LEAF_ACK_TERMINATE_EXTERNAL_TRAJECTORY_POS_MIN_LEN 3
#define MAVLINK_MSG_ID_77028_LEN 3
#define MAVLINK_MSG_ID_77028_MIN_LEN 3

#define MAVLINK_MSG_ID_LEAF_ACK_TERMINATE_EXTERNAL_TRAJECTORY_POS_CRC 193
#define MAVLINK_MSG_ID_77028_CRC 193



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_LEAF_ACK_TERMINATE_EXTERNAL_TRAJECTORY_POS { \
    77028, \
    "LEAF_ACK_TERMINATE_EXTERNAL_TRAJECTORY_POS", \
    3, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_leaf_ack_terminate_external_trajectory_pos_t, target_system) }, \
         { "status", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_leaf_ack_terminate_external_trajectory_pos_t, status) }, \
         { "traj_id", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_leaf_ack_terminate_external_trajectory_pos_t, traj_id) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_LEAF_ACK_TERMINATE_EXTERNAL_TRAJECTORY_POS { \
    "LEAF_ACK_TERMINATE_EXTERNAL_TRAJECTORY_POS", \
    3, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_leaf_ack_terminate_external_trajectory_pos_t, target_system) }, \
         { "status", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_leaf_ack_terminate_external_trajectory_pos_t, status) }, \
         { "traj_id", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_leaf_ack_terminate_external_trajectory_pos_t, traj_id) }, \
         } \
}
#endif

/**
 * @brief Pack a leaf_ack_terminate_external_trajectory_pos message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system  The system needs to queue the trajectory
 * @param status  1 for ack, 0 for nack
 * @param traj_id  0 for pos, 1 for ori
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_ack_terminate_external_trajectory_pos_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t target_system, uint8_t status, uint8_t traj_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_ACK_TERMINATE_EXTERNAL_TRAJECTORY_POS_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, status);
    _mav_put_uint8_t(buf, 2, traj_id);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_ACK_TERMINATE_EXTERNAL_TRAJECTORY_POS_LEN);
#else
    mavlink_leaf_ack_terminate_external_trajectory_pos_t packet;
    packet.target_system = target_system;
    packet.status = status;
    packet.traj_id = traj_id;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_ACK_TERMINATE_EXTERNAL_TRAJECTORY_POS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_ACK_TERMINATE_EXTERNAL_TRAJECTORY_POS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_LEAF_ACK_TERMINATE_EXTERNAL_TRAJECTORY_POS_MIN_LEN, MAVLINK_MSG_ID_LEAF_ACK_TERMINATE_EXTERNAL_TRAJECTORY_POS_LEN, MAVLINK_MSG_ID_LEAF_ACK_TERMINATE_EXTERNAL_TRAJECTORY_POS_CRC);
}

/**
 * @brief Pack a leaf_ack_terminate_external_trajectory_pos message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system  The system needs to queue the trajectory
 * @param status  1 for ack, 0 for nack
 * @param traj_id  0 for pos, 1 for ori
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_ack_terminate_external_trajectory_pos_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t target_system, uint8_t status, uint8_t traj_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_ACK_TERMINATE_EXTERNAL_TRAJECTORY_POS_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, status);
    _mav_put_uint8_t(buf, 2, traj_id);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_ACK_TERMINATE_EXTERNAL_TRAJECTORY_POS_LEN);
#else
    mavlink_leaf_ack_terminate_external_trajectory_pos_t packet;
    packet.target_system = target_system;
    packet.status = status;
    packet.traj_id = traj_id;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_ACK_TERMINATE_EXTERNAL_TRAJECTORY_POS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_ACK_TERMINATE_EXTERNAL_TRAJECTORY_POS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_ACK_TERMINATE_EXTERNAL_TRAJECTORY_POS_MIN_LEN, MAVLINK_MSG_ID_LEAF_ACK_TERMINATE_EXTERNAL_TRAJECTORY_POS_LEN, MAVLINK_MSG_ID_LEAF_ACK_TERMINATE_EXTERNAL_TRAJECTORY_POS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_ACK_TERMINATE_EXTERNAL_TRAJECTORY_POS_MIN_LEN, MAVLINK_MSG_ID_LEAF_ACK_TERMINATE_EXTERNAL_TRAJECTORY_POS_LEN);
#endif
}

/**
 * @brief Pack a leaf_ack_terminate_external_trajectory_pos message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param target_system  The system needs to queue the trajectory
 * @param status  1 for ack, 0 for nack
 * @param traj_id  0 for pos, 1 for ori
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_ack_terminate_external_trajectory_pos_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t target_system,uint8_t status,uint8_t traj_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_ACK_TERMINATE_EXTERNAL_TRAJECTORY_POS_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, status);
    _mav_put_uint8_t(buf, 2, traj_id);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_ACK_TERMINATE_EXTERNAL_TRAJECTORY_POS_LEN);
#else
    mavlink_leaf_ack_terminate_external_trajectory_pos_t packet;
    packet.target_system = target_system;
    packet.status = status;
    packet.traj_id = traj_id;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_ACK_TERMINATE_EXTERNAL_TRAJECTORY_POS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_ACK_TERMINATE_EXTERNAL_TRAJECTORY_POS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_LEAF_ACK_TERMINATE_EXTERNAL_TRAJECTORY_POS_MIN_LEN, MAVLINK_MSG_ID_LEAF_ACK_TERMINATE_EXTERNAL_TRAJECTORY_POS_LEN, MAVLINK_MSG_ID_LEAF_ACK_TERMINATE_EXTERNAL_TRAJECTORY_POS_CRC);
}

/**
 * @brief Encode a leaf_ack_terminate_external_trajectory_pos struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param leaf_ack_terminate_external_trajectory_pos C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_ack_terminate_external_trajectory_pos_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_leaf_ack_terminate_external_trajectory_pos_t* leaf_ack_terminate_external_trajectory_pos)
{
    return mavlink_msg_leaf_ack_terminate_external_trajectory_pos_pack(system_id, component_id, msg, leaf_ack_terminate_external_trajectory_pos->target_system, leaf_ack_terminate_external_trajectory_pos->status, leaf_ack_terminate_external_trajectory_pos->traj_id);
}

/**
 * @brief Encode a leaf_ack_terminate_external_trajectory_pos struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param leaf_ack_terminate_external_trajectory_pos C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_ack_terminate_external_trajectory_pos_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_leaf_ack_terminate_external_trajectory_pos_t* leaf_ack_terminate_external_trajectory_pos)
{
    return mavlink_msg_leaf_ack_terminate_external_trajectory_pos_pack_chan(system_id, component_id, chan, msg, leaf_ack_terminate_external_trajectory_pos->target_system, leaf_ack_terminate_external_trajectory_pos->status, leaf_ack_terminate_external_trajectory_pos->traj_id);
}

/**
 * @brief Encode a leaf_ack_terminate_external_trajectory_pos struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param leaf_ack_terminate_external_trajectory_pos C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_ack_terminate_external_trajectory_pos_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_leaf_ack_terminate_external_trajectory_pos_t* leaf_ack_terminate_external_trajectory_pos)
{
    return mavlink_msg_leaf_ack_terminate_external_trajectory_pos_pack_status(system_id, component_id, _status, msg,  leaf_ack_terminate_external_trajectory_pos->target_system, leaf_ack_terminate_external_trajectory_pos->status, leaf_ack_terminate_external_trajectory_pos->traj_id);
}

/**
 * @brief Send a leaf_ack_terminate_external_trajectory_pos message
 * @param chan MAVLink channel to send the message
 *
 * @param target_system  The system needs to queue the trajectory
 * @param status  1 for ack, 0 for nack
 * @param traj_id  0 for pos, 1 for ori
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_leaf_ack_terminate_external_trajectory_pos_send(mavlink_channel_t chan, uint8_t target_system, uint8_t status, uint8_t traj_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_ACK_TERMINATE_EXTERNAL_TRAJECTORY_POS_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, status);
    _mav_put_uint8_t(buf, 2, traj_id);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_ACK_TERMINATE_EXTERNAL_TRAJECTORY_POS, buf, MAVLINK_MSG_ID_LEAF_ACK_TERMINATE_EXTERNAL_TRAJECTORY_POS_MIN_LEN, MAVLINK_MSG_ID_LEAF_ACK_TERMINATE_EXTERNAL_TRAJECTORY_POS_LEN, MAVLINK_MSG_ID_LEAF_ACK_TERMINATE_EXTERNAL_TRAJECTORY_POS_CRC);
#else
    mavlink_leaf_ack_terminate_external_trajectory_pos_t packet;
    packet.target_system = target_system;
    packet.status = status;
    packet.traj_id = traj_id;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_ACK_TERMINATE_EXTERNAL_TRAJECTORY_POS, (const char *)&packet, MAVLINK_MSG_ID_LEAF_ACK_TERMINATE_EXTERNAL_TRAJECTORY_POS_MIN_LEN, MAVLINK_MSG_ID_LEAF_ACK_TERMINATE_EXTERNAL_TRAJECTORY_POS_LEN, MAVLINK_MSG_ID_LEAF_ACK_TERMINATE_EXTERNAL_TRAJECTORY_POS_CRC);
#endif
}

/**
 * @brief Send a leaf_ack_terminate_external_trajectory_pos message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_leaf_ack_terminate_external_trajectory_pos_send_struct(mavlink_channel_t chan, const mavlink_leaf_ack_terminate_external_trajectory_pos_t* leaf_ack_terminate_external_trajectory_pos)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_leaf_ack_terminate_external_trajectory_pos_send(chan, leaf_ack_terminate_external_trajectory_pos->target_system, leaf_ack_terminate_external_trajectory_pos->status, leaf_ack_terminate_external_trajectory_pos->traj_id);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_ACK_TERMINATE_EXTERNAL_TRAJECTORY_POS, (const char *)leaf_ack_terminate_external_trajectory_pos, MAVLINK_MSG_ID_LEAF_ACK_TERMINATE_EXTERNAL_TRAJECTORY_POS_MIN_LEN, MAVLINK_MSG_ID_LEAF_ACK_TERMINATE_EXTERNAL_TRAJECTORY_POS_LEN, MAVLINK_MSG_ID_LEAF_ACK_TERMINATE_EXTERNAL_TRAJECTORY_POS_CRC);
#endif
}

#if MAVLINK_MSG_ID_LEAF_ACK_TERMINATE_EXTERNAL_TRAJECTORY_POS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_leaf_ack_terminate_external_trajectory_pos_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t target_system, uint8_t status, uint8_t traj_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, status);
    _mav_put_uint8_t(buf, 2, traj_id);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_ACK_TERMINATE_EXTERNAL_TRAJECTORY_POS, buf, MAVLINK_MSG_ID_LEAF_ACK_TERMINATE_EXTERNAL_TRAJECTORY_POS_MIN_LEN, MAVLINK_MSG_ID_LEAF_ACK_TERMINATE_EXTERNAL_TRAJECTORY_POS_LEN, MAVLINK_MSG_ID_LEAF_ACK_TERMINATE_EXTERNAL_TRAJECTORY_POS_CRC);
#else
    mavlink_leaf_ack_terminate_external_trajectory_pos_t *packet = (mavlink_leaf_ack_terminate_external_trajectory_pos_t *)msgbuf;
    packet->target_system = target_system;
    packet->status = status;
    packet->traj_id = traj_id;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_ACK_TERMINATE_EXTERNAL_TRAJECTORY_POS, (const char *)packet, MAVLINK_MSG_ID_LEAF_ACK_TERMINATE_EXTERNAL_TRAJECTORY_POS_MIN_LEN, MAVLINK_MSG_ID_LEAF_ACK_TERMINATE_EXTERNAL_TRAJECTORY_POS_LEN, MAVLINK_MSG_ID_LEAF_ACK_TERMINATE_EXTERNAL_TRAJECTORY_POS_CRC);
#endif
}
#endif

#endif

// MESSAGE LEAF_ACK_TERMINATE_EXTERNAL_TRAJECTORY_POS UNPACKING


/**
 * @brief Get field target_system from leaf_ack_terminate_external_trajectory_pos message
 *
 * @return  The system needs to queue the trajectory
 */
static inline uint8_t mavlink_msg_leaf_ack_terminate_external_trajectory_pos_get_target_system(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field status from leaf_ack_terminate_external_trajectory_pos message
 *
 * @return  1 for ack, 0 for nack
 */
static inline uint8_t mavlink_msg_leaf_ack_terminate_external_trajectory_pos_get_status(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Get field traj_id from leaf_ack_terminate_external_trajectory_pos message
 *
 * @return  0 for pos, 1 for ori
 */
static inline uint8_t mavlink_msg_leaf_ack_terminate_external_trajectory_pos_get_traj_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  2);
}

/**
 * @brief Decode a leaf_ack_terminate_external_trajectory_pos message into a struct
 *
 * @param msg The message to decode
 * @param leaf_ack_terminate_external_trajectory_pos C-struct to decode the message contents into
 */
static inline void mavlink_msg_leaf_ack_terminate_external_trajectory_pos_decode(const mavlink_message_t* msg, mavlink_leaf_ack_terminate_external_trajectory_pos_t* leaf_ack_terminate_external_trajectory_pos)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    leaf_ack_terminate_external_trajectory_pos->target_system = mavlink_msg_leaf_ack_terminate_external_trajectory_pos_get_target_system(msg);
    leaf_ack_terminate_external_trajectory_pos->status = mavlink_msg_leaf_ack_terminate_external_trajectory_pos_get_status(msg);
    leaf_ack_terminate_external_trajectory_pos->traj_id = mavlink_msg_leaf_ack_terminate_external_trajectory_pos_get_traj_id(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_LEAF_ACK_TERMINATE_EXTERNAL_TRAJECTORY_POS_LEN? msg->len : MAVLINK_MSG_ID_LEAF_ACK_TERMINATE_EXTERNAL_TRAJECTORY_POS_LEN;
        memset(leaf_ack_terminate_external_trajectory_pos, 0, MAVLINK_MSG_ID_LEAF_ACK_TERMINATE_EXTERNAL_TRAJECTORY_POS_LEN);
    memcpy(leaf_ack_terminate_external_trajectory_pos, _MAV_PAYLOAD(msg), len);
#endif
}
