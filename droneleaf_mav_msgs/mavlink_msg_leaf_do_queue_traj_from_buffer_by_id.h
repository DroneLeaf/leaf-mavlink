#pragma once
// MESSAGE LEAF_DO_QUEUE_TRAJ_FROM_BUFFER_BY_ID PACKING

#define MAVLINK_MSG_ID_LEAF_DO_QUEUE_TRAJ_FROM_BUFFER_BY_ID 77008


typedef struct __mavlink_leaf_do_queue_traj_from_buffer_by_id_t {
 uint8_t target_system; /*<  The system needs to queue a trajectory*/
 char traj_id[64]; /*<  The id of the trajectory to queue*/
} mavlink_leaf_do_queue_traj_from_buffer_by_id_t;

#define MAVLINK_MSG_ID_LEAF_DO_QUEUE_TRAJ_FROM_BUFFER_BY_ID_LEN 65
#define MAVLINK_MSG_ID_LEAF_DO_QUEUE_TRAJ_FROM_BUFFER_BY_ID_MIN_LEN 65
#define MAVLINK_MSG_ID_77008_LEN 65
#define MAVLINK_MSG_ID_77008_MIN_LEN 65

#define MAVLINK_MSG_ID_LEAF_DO_QUEUE_TRAJ_FROM_BUFFER_BY_ID_CRC 244
#define MAVLINK_MSG_ID_77008_CRC 244

#define MAVLINK_MSG_LEAF_DO_QUEUE_TRAJ_FROM_BUFFER_BY_ID_FIELD_TRAJ_ID_LEN 64

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_LEAF_DO_QUEUE_TRAJ_FROM_BUFFER_BY_ID { \
    77008, \
    "LEAF_DO_QUEUE_TRAJ_FROM_BUFFER_BY_ID", \
    2, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_leaf_do_queue_traj_from_buffer_by_id_t, target_system) }, \
         { "traj_id", NULL, MAVLINK_TYPE_CHAR, 64, 1, offsetof(mavlink_leaf_do_queue_traj_from_buffer_by_id_t, traj_id) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_LEAF_DO_QUEUE_TRAJ_FROM_BUFFER_BY_ID { \
    "LEAF_DO_QUEUE_TRAJ_FROM_BUFFER_BY_ID", \
    2, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_leaf_do_queue_traj_from_buffer_by_id_t, target_system) }, \
         { "traj_id", NULL, MAVLINK_TYPE_CHAR, 64, 1, offsetof(mavlink_leaf_do_queue_traj_from_buffer_by_id_t, traj_id) }, \
         } \
}
#endif

/**
 * @brief Pack a leaf_do_queue_traj_from_buffer_by_id message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system  The system needs to queue a trajectory
 * @param traj_id  The id of the trajectory to queue
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_do_queue_traj_from_buffer_by_id_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t target_system, const char *traj_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_DO_QUEUE_TRAJ_FROM_BUFFER_BY_ID_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_char_array(buf, 1, traj_id, 64);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_DO_QUEUE_TRAJ_FROM_BUFFER_BY_ID_LEN);
#else
    mavlink_leaf_do_queue_traj_from_buffer_by_id_t packet;
    packet.target_system = target_system;
    mav_array_assign_char(packet.traj_id, traj_id, 64);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_DO_QUEUE_TRAJ_FROM_BUFFER_BY_ID_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_DO_QUEUE_TRAJ_FROM_BUFFER_BY_ID;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_LEAF_DO_QUEUE_TRAJ_FROM_BUFFER_BY_ID_MIN_LEN, MAVLINK_MSG_ID_LEAF_DO_QUEUE_TRAJ_FROM_BUFFER_BY_ID_LEN, MAVLINK_MSG_ID_LEAF_DO_QUEUE_TRAJ_FROM_BUFFER_BY_ID_CRC);
}

/**
 * @brief Pack a leaf_do_queue_traj_from_buffer_by_id message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system  The system needs to queue a trajectory
 * @param traj_id  The id of the trajectory to queue
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_do_queue_traj_from_buffer_by_id_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t target_system, const char *traj_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_DO_QUEUE_TRAJ_FROM_BUFFER_BY_ID_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_char_array(buf, 1, traj_id, 64);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_DO_QUEUE_TRAJ_FROM_BUFFER_BY_ID_LEN);
#else
    mavlink_leaf_do_queue_traj_from_buffer_by_id_t packet;
    packet.target_system = target_system;
    mav_array_memcpy(packet.traj_id, traj_id, sizeof(char)*64);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_DO_QUEUE_TRAJ_FROM_BUFFER_BY_ID_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_DO_QUEUE_TRAJ_FROM_BUFFER_BY_ID;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_DO_QUEUE_TRAJ_FROM_BUFFER_BY_ID_MIN_LEN, MAVLINK_MSG_ID_LEAF_DO_QUEUE_TRAJ_FROM_BUFFER_BY_ID_LEN, MAVLINK_MSG_ID_LEAF_DO_QUEUE_TRAJ_FROM_BUFFER_BY_ID_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_DO_QUEUE_TRAJ_FROM_BUFFER_BY_ID_MIN_LEN, MAVLINK_MSG_ID_LEAF_DO_QUEUE_TRAJ_FROM_BUFFER_BY_ID_LEN);
#endif
}

/**
 * @brief Pack a leaf_do_queue_traj_from_buffer_by_id message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param target_system  The system needs to queue a trajectory
 * @param traj_id  The id of the trajectory to queue
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_do_queue_traj_from_buffer_by_id_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t target_system,const char *traj_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_DO_QUEUE_TRAJ_FROM_BUFFER_BY_ID_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_char_array(buf, 1, traj_id, 64);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_DO_QUEUE_TRAJ_FROM_BUFFER_BY_ID_LEN);
#else
    mavlink_leaf_do_queue_traj_from_buffer_by_id_t packet;
    packet.target_system = target_system;
    mav_array_assign_char(packet.traj_id, traj_id, 64);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_DO_QUEUE_TRAJ_FROM_BUFFER_BY_ID_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_DO_QUEUE_TRAJ_FROM_BUFFER_BY_ID;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_LEAF_DO_QUEUE_TRAJ_FROM_BUFFER_BY_ID_MIN_LEN, MAVLINK_MSG_ID_LEAF_DO_QUEUE_TRAJ_FROM_BUFFER_BY_ID_LEN, MAVLINK_MSG_ID_LEAF_DO_QUEUE_TRAJ_FROM_BUFFER_BY_ID_CRC);
}

/**
 * @brief Encode a leaf_do_queue_traj_from_buffer_by_id struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param leaf_do_queue_traj_from_buffer_by_id C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_do_queue_traj_from_buffer_by_id_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_leaf_do_queue_traj_from_buffer_by_id_t* leaf_do_queue_traj_from_buffer_by_id)
{
    return mavlink_msg_leaf_do_queue_traj_from_buffer_by_id_pack(system_id, component_id, msg, leaf_do_queue_traj_from_buffer_by_id->target_system, leaf_do_queue_traj_from_buffer_by_id->traj_id);
}

/**
 * @brief Encode a leaf_do_queue_traj_from_buffer_by_id struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param leaf_do_queue_traj_from_buffer_by_id C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_do_queue_traj_from_buffer_by_id_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_leaf_do_queue_traj_from_buffer_by_id_t* leaf_do_queue_traj_from_buffer_by_id)
{
    return mavlink_msg_leaf_do_queue_traj_from_buffer_by_id_pack_chan(system_id, component_id, chan, msg, leaf_do_queue_traj_from_buffer_by_id->target_system, leaf_do_queue_traj_from_buffer_by_id->traj_id);
}

/**
 * @brief Encode a leaf_do_queue_traj_from_buffer_by_id struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param leaf_do_queue_traj_from_buffer_by_id C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_do_queue_traj_from_buffer_by_id_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_leaf_do_queue_traj_from_buffer_by_id_t* leaf_do_queue_traj_from_buffer_by_id)
{
    return mavlink_msg_leaf_do_queue_traj_from_buffer_by_id_pack_status(system_id, component_id, _status, msg,  leaf_do_queue_traj_from_buffer_by_id->target_system, leaf_do_queue_traj_from_buffer_by_id->traj_id);
}

/**
 * @brief Send a leaf_do_queue_traj_from_buffer_by_id message
 * @param chan MAVLink channel to send the message
 *
 * @param target_system  The system needs to queue a trajectory
 * @param traj_id  The id of the trajectory to queue
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_leaf_do_queue_traj_from_buffer_by_id_send(mavlink_channel_t chan, uint8_t target_system, const char *traj_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_DO_QUEUE_TRAJ_FROM_BUFFER_BY_ID_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_char_array(buf, 1, traj_id, 64);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_DO_QUEUE_TRAJ_FROM_BUFFER_BY_ID, buf, MAVLINK_MSG_ID_LEAF_DO_QUEUE_TRAJ_FROM_BUFFER_BY_ID_MIN_LEN, MAVLINK_MSG_ID_LEAF_DO_QUEUE_TRAJ_FROM_BUFFER_BY_ID_LEN, MAVLINK_MSG_ID_LEAF_DO_QUEUE_TRAJ_FROM_BUFFER_BY_ID_CRC);
#else
    mavlink_leaf_do_queue_traj_from_buffer_by_id_t packet;
    packet.target_system = target_system;
    mav_array_assign_char(packet.traj_id, traj_id, 64);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_DO_QUEUE_TRAJ_FROM_BUFFER_BY_ID, (const char *)&packet, MAVLINK_MSG_ID_LEAF_DO_QUEUE_TRAJ_FROM_BUFFER_BY_ID_MIN_LEN, MAVLINK_MSG_ID_LEAF_DO_QUEUE_TRAJ_FROM_BUFFER_BY_ID_LEN, MAVLINK_MSG_ID_LEAF_DO_QUEUE_TRAJ_FROM_BUFFER_BY_ID_CRC);
#endif
}

/**
 * @brief Send a leaf_do_queue_traj_from_buffer_by_id message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_leaf_do_queue_traj_from_buffer_by_id_send_struct(mavlink_channel_t chan, const mavlink_leaf_do_queue_traj_from_buffer_by_id_t* leaf_do_queue_traj_from_buffer_by_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_leaf_do_queue_traj_from_buffer_by_id_send(chan, leaf_do_queue_traj_from_buffer_by_id->target_system, leaf_do_queue_traj_from_buffer_by_id->traj_id);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_DO_QUEUE_TRAJ_FROM_BUFFER_BY_ID, (const char *)leaf_do_queue_traj_from_buffer_by_id, MAVLINK_MSG_ID_LEAF_DO_QUEUE_TRAJ_FROM_BUFFER_BY_ID_MIN_LEN, MAVLINK_MSG_ID_LEAF_DO_QUEUE_TRAJ_FROM_BUFFER_BY_ID_LEN, MAVLINK_MSG_ID_LEAF_DO_QUEUE_TRAJ_FROM_BUFFER_BY_ID_CRC);
#endif
}

#if MAVLINK_MSG_ID_LEAF_DO_QUEUE_TRAJ_FROM_BUFFER_BY_ID_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_leaf_do_queue_traj_from_buffer_by_id_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t target_system, const char *traj_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_char_array(buf, 1, traj_id, 64);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_DO_QUEUE_TRAJ_FROM_BUFFER_BY_ID, buf, MAVLINK_MSG_ID_LEAF_DO_QUEUE_TRAJ_FROM_BUFFER_BY_ID_MIN_LEN, MAVLINK_MSG_ID_LEAF_DO_QUEUE_TRAJ_FROM_BUFFER_BY_ID_LEN, MAVLINK_MSG_ID_LEAF_DO_QUEUE_TRAJ_FROM_BUFFER_BY_ID_CRC);
#else
    mavlink_leaf_do_queue_traj_from_buffer_by_id_t *packet = (mavlink_leaf_do_queue_traj_from_buffer_by_id_t *)msgbuf;
    packet->target_system = target_system;
    mav_array_assign_char(packet->traj_id, traj_id, 64);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_DO_QUEUE_TRAJ_FROM_BUFFER_BY_ID, (const char *)packet, MAVLINK_MSG_ID_LEAF_DO_QUEUE_TRAJ_FROM_BUFFER_BY_ID_MIN_LEN, MAVLINK_MSG_ID_LEAF_DO_QUEUE_TRAJ_FROM_BUFFER_BY_ID_LEN, MAVLINK_MSG_ID_LEAF_DO_QUEUE_TRAJ_FROM_BUFFER_BY_ID_CRC);
#endif
}
#endif

#endif

// MESSAGE LEAF_DO_QUEUE_TRAJ_FROM_BUFFER_BY_ID UNPACKING


/**
 * @brief Get field target_system from leaf_do_queue_traj_from_buffer_by_id message
 *
 * @return  The system needs to queue a trajectory
 */
static inline uint8_t mavlink_msg_leaf_do_queue_traj_from_buffer_by_id_get_target_system(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field traj_id from leaf_do_queue_traj_from_buffer_by_id message
 *
 * @return  The id of the trajectory to queue
 */
static inline uint16_t mavlink_msg_leaf_do_queue_traj_from_buffer_by_id_get_traj_id(const mavlink_message_t* msg, char *traj_id)
{
    return _MAV_RETURN_char_array(msg, traj_id, 64,  1);
}

/**
 * @brief Decode a leaf_do_queue_traj_from_buffer_by_id message into a struct
 *
 * @param msg The message to decode
 * @param leaf_do_queue_traj_from_buffer_by_id C-struct to decode the message contents into
 */
static inline void mavlink_msg_leaf_do_queue_traj_from_buffer_by_id_decode(const mavlink_message_t* msg, mavlink_leaf_do_queue_traj_from_buffer_by_id_t* leaf_do_queue_traj_from_buffer_by_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    leaf_do_queue_traj_from_buffer_by_id->target_system = mavlink_msg_leaf_do_queue_traj_from_buffer_by_id_get_target_system(msg);
    mavlink_msg_leaf_do_queue_traj_from_buffer_by_id_get_traj_id(msg, leaf_do_queue_traj_from_buffer_by_id->traj_id);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_LEAF_DO_QUEUE_TRAJ_FROM_BUFFER_BY_ID_LEN? msg->len : MAVLINK_MSG_ID_LEAF_DO_QUEUE_TRAJ_FROM_BUFFER_BY_ID_LEN;
        memset(leaf_do_queue_traj_from_buffer_by_id, 0, MAVLINK_MSG_ID_LEAF_DO_QUEUE_TRAJ_FROM_BUFFER_BY_ID_LEN);
    memcpy(leaf_do_queue_traj_from_buffer_by_id, _MAV_PAYLOAD(msg), len);
#endif
}
