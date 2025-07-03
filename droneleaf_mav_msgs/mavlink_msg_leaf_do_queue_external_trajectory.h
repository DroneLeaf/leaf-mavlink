#pragma once
// MESSAGE LEAF_DO_QUEUE_EXTERNAL_TRAJECTORY PACKING

#define MAVLINK_MSG_ID_LEAF_DO_QUEUE_EXTERNAL_TRAJECTORY 77023


typedef struct __mavlink_leaf_do_queue_external_trajectory_t {
 uint8_t target_system; /*<  The system needs to queue the trajectory*/
 uint8_t queue; /*<  1 to queue, 0 to not*/
 uint8_t traj_id; /*<  0 for pos, 1 for ori*/
} mavlink_leaf_do_queue_external_trajectory_t;

#define MAVLINK_MSG_ID_LEAF_DO_QUEUE_EXTERNAL_TRAJECTORY_LEN 3
#define MAVLINK_MSG_ID_LEAF_DO_QUEUE_EXTERNAL_TRAJECTORY_MIN_LEN 3
#define MAVLINK_MSG_ID_77023_LEN 3
#define MAVLINK_MSG_ID_77023_MIN_LEN 3

#define MAVLINK_MSG_ID_LEAF_DO_QUEUE_EXTERNAL_TRAJECTORY_CRC 248
#define MAVLINK_MSG_ID_77023_CRC 248



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_LEAF_DO_QUEUE_EXTERNAL_TRAJECTORY { \
    77023, \
    "LEAF_DO_QUEUE_EXTERNAL_TRAJECTORY", \
    3, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_leaf_do_queue_external_trajectory_t, target_system) }, \
         { "queue", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_leaf_do_queue_external_trajectory_t, queue) }, \
         { "traj_id", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_leaf_do_queue_external_trajectory_t, traj_id) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_LEAF_DO_QUEUE_EXTERNAL_TRAJECTORY { \
    "LEAF_DO_QUEUE_EXTERNAL_TRAJECTORY", \
    3, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_leaf_do_queue_external_trajectory_t, target_system) }, \
         { "queue", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_leaf_do_queue_external_trajectory_t, queue) }, \
         { "traj_id", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_leaf_do_queue_external_trajectory_t, traj_id) }, \
         } \
}
#endif

/**
 * @brief Pack a leaf_do_queue_external_trajectory message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system  The system needs to queue the trajectory
 * @param queue  1 to queue, 0 to not
 * @param traj_id  0 for pos, 1 for ori
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_do_queue_external_trajectory_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t target_system, uint8_t queue, uint8_t traj_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_DO_QUEUE_EXTERNAL_TRAJECTORY_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, queue);
    _mav_put_uint8_t(buf, 2, traj_id);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_DO_QUEUE_EXTERNAL_TRAJECTORY_LEN);
#else
    mavlink_leaf_do_queue_external_trajectory_t packet;
    packet.target_system = target_system;
    packet.queue = queue;
    packet.traj_id = traj_id;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_DO_QUEUE_EXTERNAL_TRAJECTORY_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_DO_QUEUE_EXTERNAL_TRAJECTORY;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_LEAF_DO_QUEUE_EXTERNAL_TRAJECTORY_MIN_LEN, MAVLINK_MSG_ID_LEAF_DO_QUEUE_EXTERNAL_TRAJECTORY_LEN, MAVLINK_MSG_ID_LEAF_DO_QUEUE_EXTERNAL_TRAJECTORY_CRC);
}

/**
 * @brief Pack a leaf_do_queue_external_trajectory message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system  The system needs to queue the trajectory
 * @param queue  1 to queue, 0 to not
 * @param traj_id  0 for pos, 1 for ori
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_do_queue_external_trajectory_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t target_system, uint8_t queue, uint8_t traj_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_DO_QUEUE_EXTERNAL_TRAJECTORY_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, queue);
    _mav_put_uint8_t(buf, 2, traj_id);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_DO_QUEUE_EXTERNAL_TRAJECTORY_LEN);
#else
    mavlink_leaf_do_queue_external_trajectory_t packet;
    packet.target_system = target_system;
    packet.queue = queue;
    packet.traj_id = traj_id;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_DO_QUEUE_EXTERNAL_TRAJECTORY_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_DO_QUEUE_EXTERNAL_TRAJECTORY;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_DO_QUEUE_EXTERNAL_TRAJECTORY_MIN_LEN, MAVLINK_MSG_ID_LEAF_DO_QUEUE_EXTERNAL_TRAJECTORY_LEN, MAVLINK_MSG_ID_LEAF_DO_QUEUE_EXTERNAL_TRAJECTORY_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_DO_QUEUE_EXTERNAL_TRAJECTORY_MIN_LEN, MAVLINK_MSG_ID_LEAF_DO_QUEUE_EXTERNAL_TRAJECTORY_LEN);
#endif
}

/**
 * @brief Pack a leaf_do_queue_external_trajectory message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param target_system  The system needs to queue the trajectory
 * @param queue  1 to queue, 0 to not
 * @param traj_id  0 for pos, 1 for ori
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_do_queue_external_trajectory_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t target_system,uint8_t queue,uint8_t traj_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_DO_QUEUE_EXTERNAL_TRAJECTORY_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, queue);
    _mav_put_uint8_t(buf, 2, traj_id);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_DO_QUEUE_EXTERNAL_TRAJECTORY_LEN);
#else
    mavlink_leaf_do_queue_external_trajectory_t packet;
    packet.target_system = target_system;
    packet.queue = queue;
    packet.traj_id = traj_id;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_DO_QUEUE_EXTERNAL_TRAJECTORY_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_DO_QUEUE_EXTERNAL_TRAJECTORY;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_LEAF_DO_QUEUE_EXTERNAL_TRAJECTORY_MIN_LEN, MAVLINK_MSG_ID_LEAF_DO_QUEUE_EXTERNAL_TRAJECTORY_LEN, MAVLINK_MSG_ID_LEAF_DO_QUEUE_EXTERNAL_TRAJECTORY_CRC);
}

/**
 * @brief Encode a leaf_do_queue_external_trajectory struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param leaf_do_queue_external_trajectory C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_do_queue_external_trajectory_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_leaf_do_queue_external_trajectory_t* leaf_do_queue_external_trajectory)
{
    return mavlink_msg_leaf_do_queue_external_trajectory_pack(system_id, component_id, msg, leaf_do_queue_external_trajectory->target_system, leaf_do_queue_external_trajectory->queue, leaf_do_queue_external_trajectory->traj_id);
}

/**
 * @brief Encode a leaf_do_queue_external_trajectory struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param leaf_do_queue_external_trajectory C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_do_queue_external_trajectory_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_leaf_do_queue_external_trajectory_t* leaf_do_queue_external_trajectory)
{
    return mavlink_msg_leaf_do_queue_external_trajectory_pack_chan(system_id, component_id, chan, msg, leaf_do_queue_external_trajectory->target_system, leaf_do_queue_external_trajectory->queue, leaf_do_queue_external_trajectory->traj_id);
}

/**
 * @brief Encode a leaf_do_queue_external_trajectory struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param leaf_do_queue_external_trajectory C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_do_queue_external_trajectory_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_leaf_do_queue_external_trajectory_t* leaf_do_queue_external_trajectory)
{
    return mavlink_msg_leaf_do_queue_external_trajectory_pack_status(system_id, component_id, _status, msg,  leaf_do_queue_external_trajectory->target_system, leaf_do_queue_external_trajectory->queue, leaf_do_queue_external_trajectory->traj_id);
}

/**
 * @brief Send a leaf_do_queue_external_trajectory message
 * @param chan MAVLink channel to send the message
 *
 * @param target_system  The system needs to queue the trajectory
 * @param queue  1 to queue, 0 to not
 * @param traj_id  0 for pos, 1 for ori
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_leaf_do_queue_external_trajectory_send(mavlink_channel_t chan, uint8_t target_system, uint8_t queue, uint8_t traj_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_DO_QUEUE_EXTERNAL_TRAJECTORY_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, queue);
    _mav_put_uint8_t(buf, 2, traj_id);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_DO_QUEUE_EXTERNAL_TRAJECTORY, buf, MAVLINK_MSG_ID_LEAF_DO_QUEUE_EXTERNAL_TRAJECTORY_MIN_LEN, MAVLINK_MSG_ID_LEAF_DO_QUEUE_EXTERNAL_TRAJECTORY_LEN, MAVLINK_MSG_ID_LEAF_DO_QUEUE_EXTERNAL_TRAJECTORY_CRC);
#else
    mavlink_leaf_do_queue_external_trajectory_t packet;
    packet.target_system = target_system;
    packet.queue = queue;
    packet.traj_id = traj_id;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_DO_QUEUE_EXTERNAL_TRAJECTORY, (const char *)&packet, MAVLINK_MSG_ID_LEAF_DO_QUEUE_EXTERNAL_TRAJECTORY_MIN_LEN, MAVLINK_MSG_ID_LEAF_DO_QUEUE_EXTERNAL_TRAJECTORY_LEN, MAVLINK_MSG_ID_LEAF_DO_QUEUE_EXTERNAL_TRAJECTORY_CRC);
#endif
}

/**
 * @brief Send a leaf_do_queue_external_trajectory message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_leaf_do_queue_external_trajectory_send_struct(mavlink_channel_t chan, const mavlink_leaf_do_queue_external_trajectory_t* leaf_do_queue_external_trajectory)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_leaf_do_queue_external_trajectory_send(chan, leaf_do_queue_external_trajectory->target_system, leaf_do_queue_external_trajectory->queue, leaf_do_queue_external_trajectory->traj_id);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_DO_QUEUE_EXTERNAL_TRAJECTORY, (const char *)leaf_do_queue_external_trajectory, MAVLINK_MSG_ID_LEAF_DO_QUEUE_EXTERNAL_TRAJECTORY_MIN_LEN, MAVLINK_MSG_ID_LEAF_DO_QUEUE_EXTERNAL_TRAJECTORY_LEN, MAVLINK_MSG_ID_LEAF_DO_QUEUE_EXTERNAL_TRAJECTORY_CRC);
#endif
}

#if MAVLINK_MSG_ID_LEAF_DO_QUEUE_EXTERNAL_TRAJECTORY_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_leaf_do_queue_external_trajectory_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t target_system, uint8_t queue, uint8_t traj_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, queue);
    _mav_put_uint8_t(buf, 2, traj_id);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_DO_QUEUE_EXTERNAL_TRAJECTORY, buf, MAVLINK_MSG_ID_LEAF_DO_QUEUE_EXTERNAL_TRAJECTORY_MIN_LEN, MAVLINK_MSG_ID_LEAF_DO_QUEUE_EXTERNAL_TRAJECTORY_LEN, MAVLINK_MSG_ID_LEAF_DO_QUEUE_EXTERNAL_TRAJECTORY_CRC);
#else
    mavlink_leaf_do_queue_external_trajectory_t *packet = (mavlink_leaf_do_queue_external_trajectory_t *)msgbuf;
    packet->target_system = target_system;
    packet->queue = queue;
    packet->traj_id = traj_id;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_DO_QUEUE_EXTERNAL_TRAJECTORY, (const char *)packet, MAVLINK_MSG_ID_LEAF_DO_QUEUE_EXTERNAL_TRAJECTORY_MIN_LEN, MAVLINK_MSG_ID_LEAF_DO_QUEUE_EXTERNAL_TRAJECTORY_LEN, MAVLINK_MSG_ID_LEAF_DO_QUEUE_EXTERNAL_TRAJECTORY_CRC);
#endif
}
#endif

#endif

// MESSAGE LEAF_DO_QUEUE_EXTERNAL_TRAJECTORY UNPACKING


/**
 * @brief Get field target_system from leaf_do_queue_external_trajectory message
 *
 * @return  The system needs to queue the trajectory
 */
static inline uint8_t mavlink_msg_leaf_do_queue_external_trajectory_get_target_system(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field queue from leaf_do_queue_external_trajectory message
 *
 * @return  1 to queue, 0 to not
 */
static inline uint8_t mavlink_msg_leaf_do_queue_external_trajectory_get_queue(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Get field traj_id from leaf_do_queue_external_trajectory message
 *
 * @return  0 for pos, 1 for ori
 */
static inline uint8_t mavlink_msg_leaf_do_queue_external_trajectory_get_traj_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  2);
}

/**
 * @brief Decode a leaf_do_queue_external_trajectory message into a struct
 *
 * @param msg The message to decode
 * @param leaf_do_queue_external_trajectory C-struct to decode the message contents into
 */
static inline void mavlink_msg_leaf_do_queue_external_trajectory_decode(const mavlink_message_t* msg, mavlink_leaf_do_queue_external_trajectory_t* leaf_do_queue_external_trajectory)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    leaf_do_queue_external_trajectory->target_system = mavlink_msg_leaf_do_queue_external_trajectory_get_target_system(msg);
    leaf_do_queue_external_trajectory->queue = mavlink_msg_leaf_do_queue_external_trajectory_get_queue(msg);
    leaf_do_queue_external_trajectory->traj_id = mavlink_msg_leaf_do_queue_external_trajectory_get_traj_id(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_LEAF_DO_QUEUE_EXTERNAL_TRAJECTORY_LEN? msg->len : MAVLINK_MSG_ID_LEAF_DO_QUEUE_EXTERNAL_TRAJECTORY_LEN;
        memset(leaf_do_queue_external_trajectory, 0, MAVLINK_MSG_ID_LEAF_DO_QUEUE_EXTERNAL_TRAJECTORY_LEN);
    memcpy(leaf_do_queue_external_trajectory, _MAV_PAYLOAD(msg), len);
#endif
}
