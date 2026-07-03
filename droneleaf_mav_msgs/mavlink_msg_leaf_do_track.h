#pragma once
// MESSAGE LEAF_DO_TRACK PACKING

#define MAVLINK_MSG_ID_LEAF_DO_TRACK 77049


typedef struct __mavlink_leaf_do_track_t {
 float aim_x; /*<  Aim point X*/
 float aim_y; /*<  Aim point Y*/
 float box_size; /*<  Tracking box size*/
 uint8_t target_system; /*<  The target system*/
 uint8_t track; /*<  1 to start tracking at the aim point, 0 to clear tracking*/
} mavlink_leaf_do_track_t;

#define MAVLINK_MSG_ID_LEAF_DO_TRACK_LEN 14
#define MAVLINK_MSG_ID_LEAF_DO_TRACK_MIN_LEN 14
#define MAVLINK_MSG_ID_77049_LEN 14
#define MAVLINK_MSG_ID_77049_MIN_LEN 14

#define MAVLINK_MSG_ID_LEAF_DO_TRACK_CRC 81
#define MAVLINK_MSG_ID_77049_CRC 81



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_LEAF_DO_TRACK { \
    77049, \
    "LEAF_DO_TRACK", \
    5, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 12, offsetof(mavlink_leaf_do_track_t, target_system) }, \
         { "track", NULL, MAVLINK_TYPE_UINT8_T, 0, 13, offsetof(mavlink_leaf_do_track_t, track) }, \
         { "aim_x", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_leaf_do_track_t, aim_x) }, \
         { "aim_y", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_leaf_do_track_t, aim_y) }, \
         { "box_size", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_leaf_do_track_t, box_size) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_LEAF_DO_TRACK { \
    "LEAF_DO_TRACK", \
    5, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 12, offsetof(mavlink_leaf_do_track_t, target_system) }, \
         { "track", NULL, MAVLINK_TYPE_UINT8_T, 0, 13, offsetof(mavlink_leaf_do_track_t, track) }, \
         { "aim_x", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_leaf_do_track_t, aim_x) }, \
         { "aim_y", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_leaf_do_track_t, aim_y) }, \
         { "box_size", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_leaf_do_track_t, box_size) }, \
         } \
}
#endif

/**
 * @brief Pack a leaf_do_track message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system  The target system
 * @param track  1 to start tracking at the aim point, 0 to clear tracking
 * @param aim_x  Aim point X
 * @param aim_y  Aim point Y
 * @param box_size  Tracking box size
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_do_track_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t target_system, uint8_t track, float aim_x, float aim_y, float box_size)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_DO_TRACK_LEN];
    _mav_put_float(buf, 0, aim_x);
    _mav_put_float(buf, 4, aim_y);
    _mav_put_float(buf, 8, box_size);
    _mav_put_uint8_t(buf, 12, target_system);
    _mav_put_uint8_t(buf, 13, track);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_DO_TRACK_LEN);
#else
    mavlink_leaf_do_track_t packet;
    packet.aim_x = aim_x;
    packet.aim_y = aim_y;
    packet.box_size = box_size;
    packet.target_system = target_system;
    packet.track = track;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_DO_TRACK_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_DO_TRACK;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_LEAF_DO_TRACK_MIN_LEN, MAVLINK_MSG_ID_LEAF_DO_TRACK_LEN, MAVLINK_MSG_ID_LEAF_DO_TRACK_CRC);
}

/**
 * @brief Pack a leaf_do_track message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system  The target system
 * @param track  1 to start tracking at the aim point, 0 to clear tracking
 * @param aim_x  Aim point X
 * @param aim_y  Aim point Y
 * @param box_size  Tracking box size
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_do_track_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t target_system, uint8_t track, float aim_x, float aim_y, float box_size)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_DO_TRACK_LEN];
    _mav_put_float(buf, 0, aim_x);
    _mav_put_float(buf, 4, aim_y);
    _mav_put_float(buf, 8, box_size);
    _mav_put_uint8_t(buf, 12, target_system);
    _mav_put_uint8_t(buf, 13, track);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_DO_TRACK_LEN);
#else
    mavlink_leaf_do_track_t packet;
    packet.aim_x = aim_x;
    packet.aim_y = aim_y;
    packet.box_size = box_size;
    packet.target_system = target_system;
    packet.track = track;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_DO_TRACK_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_DO_TRACK;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_DO_TRACK_MIN_LEN, MAVLINK_MSG_ID_LEAF_DO_TRACK_LEN, MAVLINK_MSG_ID_LEAF_DO_TRACK_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_DO_TRACK_MIN_LEN, MAVLINK_MSG_ID_LEAF_DO_TRACK_LEN);
#endif
}

/**
 * @brief Pack a leaf_do_track message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param target_system  The target system
 * @param track  1 to start tracking at the aim point, 0 to clear tracking
 * @param aim_x  Aim point X
 * @param aim_y  Aim point Y
 * @param box_size  Tracking box size
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_do_track_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t target_system,uint8_t track,float aim_x,float aim_y,float box_size)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_DO_TRACK_LEN];
    _mav_put_float(buf, 0, aim_x);
    _mav_put_float(buf, 4, aim_y);
    _mav_put_float(buf, 8, box_size);
    _mav_put_uint8_t(buf, 12, target_system);
    _mav_put_uint8_t(buf, 13, track);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_DO_TRACK_LEN);
#else
    mavlink_leaf_do_track_t packet;
    packet.aim_x = aim_x;
    packet.aim_y = aim_y;
    packet.box_size = box_size;
    packet.target_system = target_system;
    packet.track = track;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_DO_TRACK_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_DO_TRACK;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_LEAF_DO_TRACK_MIN_LEN, MAVLINK_MSG_ID_LEAF_DO_TRACK_LEN, MAVLINK_MSG_ID_LEAF_DO_TRACK_CRC);
}

/**
 * @brief Encode a leaf_do_track struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param leaf_do_track C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_do_track_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_leaf_do_track_t* leaf_do_track)
{
    return mavlink_msg_leaf_do_track_pack(system_id, component_id, msg, leaf_do_track->target_system, leaf_do_track->track, leaf_do_track->aim_x, leaf_do_track->aim_y, leaf_do_track->box_size);
}

/**
 * @brief Encode a leaf_do_track struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param leaf_do_track C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_do_track_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_leaf_do_track_t* leaf_do_track)
{
    return mavlink_msg_leaf_do_track_pack_chan(system_id, component_id, chan, msg, leaf_do_track->target_system, leaf_do_track->track, leaf_do_track->aim_x, leaf_do_track->aim_y, leaf_do_track->box_size);
}

/**
 * @brief Encode a leaf_do_track struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param leaf_do_track C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_do_track_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_leaf_do_track_t* leaf_do_track)
{
    return mavlink_msg_leaf_do_track_pack_status(system_id, component_id, _status, msg,  leaf_do_track->target_system, leaf_do_track->track, leaf_do_track->aim_x, leaf_do_track->aim_y, leaf_do_track->box_size);
}

/**
 * @brief Send a leaf_do_track message
 * @param chan MAVLink channel to send the message
 *
 * @param target_system  The target system
 * @param track  1 to start tracking at the aim point, 0 to clear tracking
 * @param aim_x  Aim point X
 * @param aim_y  Aim point Y
 * @param box_size  Tracking box size
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_leaf_do_track_send(mavlink_channel_t chan, uint8_t target_system, uint8_t track, float aim_x, float aim_y, float box_size)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_DO_TRACK_LEN];
    _mav_put_float(buf, 0, aim_x);
    _mav_put_float(buf, 4, aim_y);
    _mav_put_float(buf, 8, box_size);
    _mav_put_uint8_t(buf, 12, target_system);
    _mav_put_uint8_t(buf, 13, track);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_DO_TRACK, buf, MAVLINK_MSG_ID_LEAF_DO_TRACK_MIN_LEN, MAVLINK_MSG_ID_LEAF_DO_TRACK_LEN, MAVLINK_MSG_ID_LEAF_DO_TRACK_CRC);
#else
    mavlink_leaf_do_track_t packet;
    packet.aim_x = aim_x;
    packet.aim_y = aim_y;
    packet.box_size = box_size;
    packet.target_system = target_system;
    packet.track = track;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_DO_TRACK, (const char *)&packet, MAVLINK_MSG_ID_LEAF_DO_TRACK_MIN_LEN, MAVLINK_MSG_ID_LEAF_DO_TRACK_LEN, MAVLINK_MSG_ID_LEAF_DO_TRACK_CRC);
#endif
}

/**
 * @brief Send a leaf_do_track message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_leaf_do_track_send_struct(mavlink_channel_t chan, const mavlink_leaf_do_track_t* leaf_do_track)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_leaf_do_track_send(chan, leaf_do_track->target_system, leaf_do_track->track, leaf_do_track->aim_x, leaf_do_track->aim_y, leaf_do_track->box_size);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_DO_TRACK, (const char *)leaf_do_track, MAVLINK_MSG_ID_LEAF_DO_TRACK_MIN_LEN, MAVLINK_MSG_ID_LEAF_DO_TRACK_LEN, MAVLINK_MSG_ID_LEAF_DO_TRACK_CRC);
#endif
}

#if MAVLINK_MSG_ID_LEAF_DO_TRACK_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_leaf_do_track_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t target_system, uint8_t track, float aim_x, float aim_y, float box_size)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, aim_x);
    _mav_put_float(buf, 4, aim_y);
    _mav_put_float(buf, 8, box_size);
    _mav_put_uint8_t(buf, 12, target_system);
    _mav_put_uint8_t(buf, 13, track);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_DO_TRACK, buf, MAVLINK_MSG_ID_LEAF_DO_TRACK_MIN_LEN, MAVLINK_MSG_ID_LEAF_DO_TRACK_LEN, MAVLINK_MSG_ID_LEAF_DO_TRACK_CRC);
#else
    mavlink_leaf_do_track_t *packet = (mavlink_leaf_do_track_t *)msgbuf;
    packet->aim_x = aim_x;
    packet->aim_y = aim_y;
    packet->box_size = box_size;
    packet->target_system = target_system;
    packet->track = track;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_DO_TRACK, (const char *)packet, MAVLINK_MSG_ID_LEAF_DO_TRACK_MIN_LEN, MAVLINK_MSG_ID_LEAF_DO_TRACK_LEN, MAVLINK_MSG_ID_LEAF_DO_TRACK_CRC);
#endif
}
#endif

#endif

// MESSAGE LEAF_DO_TRACK UNPACKING


/**
 * @brief Get field target_system from leaf_do_track message
 *
 * @return  The target system
 */
static inline uint8_t mavlink_msg_leaf_do_track_get_target_system(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  12);
}

/**
 * @brief Get field track from leaf_do_track message
 *
 * @return  1 to start tracking at the aim point, 0 to clear tracking
 */
static inline uint8_t mavlink_msg_leaf_do_track_get_track(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  13);
}

/**
 * @brief Get field aim_x from leaf_do_track message
 *
 * @return  Aim point X
 */
static inline float mavlink_msg_leaf_do_track_get_aim_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field aim_y from leaf_do_track message
 *
 * @return  Aim point Y
 */
static inline float mavlink_msg_leaf_do_track_get_aim_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field box_size from leaf_do_track message
 *
 * @return  Tracking box size
 */
static inline float mavlink_msg_leaf_do_track_get_box_size(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Decode a leaf_do_track message into a struct
 *
 * @param msg The message to decode
 * @param leaf_do_track C-struct to decode the message contents into
 */
static inline void mavlink_msg_leaf_do_track_decode(const mavlink_message_t* msg, mavlink_leaf_do_track_t* leaf_do_track)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    leaf_do_track->aim_x = mavlink_msg_leaf_do_track_get_aim_x(msg);
    leaf_do_track->aim_y = mavlink_msg_leaf_do_track_get_aim_y(msg);
    leaf_do_track->box_size = mavlink_msg_leaf_do_track_get_box_size(msg);
    leaf_do_track->target_system = mavlink_msg_leaf_do_track_get_target_system(msg);
    leaf_do_track->track = mavlink_msg_leaf_do_track_get_track(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_LEAF_DO_TRACK_LEN? msg->len : MAVLINK_MSG_ID_LEAF_DO_TRACK_LEN;
        memset(leaf_do_track, 0, MAVLINK_MSG_ID_LEAF_DO_TRACK_LEN);
    memcpy(leaf_do_track, _MAV_PAYLOAD(msg), len);
#endif
}
