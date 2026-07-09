#pragma once
// MESSAGE LEAF_SET_RC_LOSS_BEHAVIOR PACKING

#define MAVLINK_MSG_ID_LEAF_SET_RC_LOSS_BEHAVIOR 77054


typedef struct __mavlink_leaf_set_rc_loss_behavior_t {
 uint8_t target_system; /*<  The target system*/
 uint8_t generate_frame; /*<  1 = LeafFC generates a takeover RC frame (keep flying under guidance); 0 = LeafFC stays silent so Betaflight runs its own failsafe*/
} mavlink_leaf_set_rc_loss_behavior_t;

#define MAVLINK_MSG_ID_LEAF_SET_RC_LOSS_BEHAVIOR_LEN 2
#define MAVLINK_MSG_ID_LEAF_SET_RC_LOSS_BEHAVIOR_MIN_LEN 2
#define MAVLINK_MSG_ID_77054_LEN 2
#define MAVLINK_MSG_ID_77054_MIN_LEN 2

#define MAVLINK_MSG_ID_LEAF_SET_RC_LOSS_BEHAVIOR_CRC 182
#define MAVLINK_MSG_ID_77054_CRC 182



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_LEAF_SET_RC_LOSS_BEHAVIOR { \
    77054, \
    "LEAF_SET_RC_LOSS_BEHAVIOR", \
    2, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_leaf_set_rc_loss_behavior_t, target_system) }, \
         { "generate_frame", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_leaf_set_rc_loss_behavior_t, generate_frame) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_LEAF_SET_RC_LOSS_BEHAVIOR { \
    "LEAF_SET_RC_LOSS_BEHAVIOR", \
    2, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_leaf_set_rc_loss_behavior_t, target_system) }, \
         { "generate_frame", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_leaf_set_rc_loss_behavior_t, generate_frame) }, \
         } \
}
#endif

/**
 * @brief Pack a leaf_set_rc_loss_behavior message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system  The target system
 * @param generate_frame  1 = LeafFC generates a takeover RC frame (keep flying under guidance); 0 = LeafFC stays silent so Betaflight runs its own failsafe
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_set_rc_loss_behavior_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t target_system, uint8_t generate_frame)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_SET_RC_LOSS_BEHAVIOR_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, generate_frame);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_SET_RC_LOSS_BEHAVIOR_LEN);
#else
    mavlink_leaf_set_rc_loss_behavior_t packet;
    packet.target_system = target_system;
    packet.generate_frame = generate_frame;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_SET_RC_LOSS_BEHAVIOR_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_SET_RC_LOSS_BEHAVIOR;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_LEAF_SET_RC_LOSS_BEHAVIOR_MIN_LEN, MAVLINK_MSG_ID_LEAF_SET_RC_LOSS_BEHAVIOR_LEN, MAVLINK_MSG_ID_LEAF_SET_RC_LOSS_BEHAVIOR_CRC);
}

/**
 * @brief Pack a leaf_set_rc_loss_behavior message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system  The target system
 * @param generate_frame  1 = LeafFC generates a takeover RC frame (keep flying under guidance); 0 = LeafFC stays silent so Betaflight runs its own failsafe
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_set_rc_loss_behavior_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t target_system, uint8_t generate_frame)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_SET_RC_LOSS_BEHAVIOR_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, generate_frame);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_SET_RC_LOSS_BEHAVIOR_LEN);
#else
    mavlink_leaf_set_rc_loss_behavior_t packet;
    packet.target_system = target_system;
    packet.generate_frame = generate_frame;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_SET_RC_LOSS_BEHAVIOR_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_SET_RC_LOSS_BEHAVIOR;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_SET_RC_LOSS_BEHAVIOR_MIN_LEN, MAVLINK_MSG_ID_LEAF_SET_RC_LOSS_BEHAVIOR_LEN, MAVLINK_MSG_ID_LEAF_SET_RC_LOSS_BEHAVIOR_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_SET_RC_LOSS_BEHAVIOR_MIN_LEN, MAVLINK_MSG_ID_LEAF_SET_RC_LOSS_BEHAVIOR_LEN);
#endif
}

/**
 * @brief Pack a leaf_set_rc_loss_behavior message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param target_system  The target system
 * @param generate_frame  1 = LeafFC generates a takeover RC frame (keep flying under guidance); 0 = LeafFC stays silent so Betaflight runs its own failsafe
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_set_rc_loss_behavior_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t target_system,uint8_t generate_frame)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_SET_RC_LOSS_BEHAVIOR_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, generate_frame);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_SET_RC_LOSS_BEHAVIOR_LEN);
#else
    mavlink_leaf_set_rc_loss_behavior_t packet;
    packet.target_system = target_system;
    packet.generate_frame = generate_frame;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_SET_RC_LOSS_BEHAVIOR_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_SET_RC_LOSS_BEHAVIOR;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_LEAF_SET_RC_LOSS_BEHAVIOR_MIN_LEN, MAVLINK_MSG_ID_LEAF_SET_RC_LOSS_BEHAVIOR_LEN, MAVLINK_MSG_ID_LEAF_SET_RC_LOSS_BEHAVIOR_CRC);
}

/**
 * @brief Encode a leaf_set_rc_loss_behavior struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param leaf_set_rc_loss_behavior C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_set_rc_loss_behavior_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_leaf_set_rc_loss_behavior_t* leaf_set_rc_loss_behavior)
{
    return mavlink_msg_leaf_set_rc_loss_behavior_pack(system_id, component_id, msg, leaf_set_rc_loss_behavior->target_system, leaf_set_rc_loss_behavior->generate_frame);
}

/**
 * @brief Encode a leaf_set_rc_loss_behavior struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param leaf_set_rc_loss_behavior C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_set_rc_loss_behavior_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_leaf_set_rc_loss_behavior_t* leaf_set_rc_loss_behavior)
{
    return mavlink_msg_leaf_set_rc_loss_behavior_pack_chan(system_id, component_id, chan, msg, leaf_set_rc_loss_behavior->target_system, leaf_set_rc_loss_behavior->generate_frame);
}

/**
 * @brief Encode a leaf_set_rc_loss_behavior struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param leaf_set_rc_loss_behavior C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_set_rc_loss_behavior_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_leaf_set_rc_loss_behavior_t* leaf_set_rc_loss_behavior)
{
    return mavlink_msg_leaf_set_rc_loss_behavior_pack_status(system_id, component_id, _status, msg,  leaf_set_rc_loss_behavior->target_system, leaf_set_rc_loss_behavior->generate_frame);
}

/**
 * @brief Send a leaf_set_rc_loss_behavior message
 * @param chan MAVLink channel to send the message
 *
 * @param target_system  The target system
 * @param generate_frame  1 = LeafFC generates a takeover RC frame (keep flying under guidance); 0 = LeafFC stays silent so Betaflight runs its own failsafe
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_leaf_set_rc_loss_behavior_send(mavlink_channel_t chan, uint8_t target_system, uint8_t generate_frame)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_SET_RC_LOSS_BEHAVIOR_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, generate_frame);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_SET_RC_LOSS_BEHAVIOR, buf, MAVLINK_MSG_ID_LEAF_SET_RC_LOSS_BEHAVIOR_MIN_LEN, MAVLINK_MSG_ID_LEAF_SET_RC_LOSS_BEHAVIOR_LEN, MAVLINK_MSG_ID_LEAF_SET_RC_LOSS_BEHAVIOR_CRC);
#else
    mavlink_leaf_set_rc_loss_behavior_t packet;
    packet.target_system = target_system;
    packet.generate_frame = generate_frame;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_SET_RC_LOSS_BEHAVIOR, (const char *)&packet, MAVLINK_MSG_ID_LEAF_SET_RC_LOSS_BEHAVIOR_MIN_LEN, MAVLINK_MSG_ID_LEAF_SET_RC_LOSS_BEHAVIOR_LEN, MAVLINK_MSG_ID_LEAF_SET_RC_LOSS_BEHAVIOR_CRC);
#endif
}

/**
 * @brief Send a leaf_set_rc_loss_behavior message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_leaf_set_rc_loss_behavior_send_struct(mavlink_channel_t chan, const mavlink_leaf_set_rc_loss_behavior_t* leaf_set_rc_loss_behavior)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_leaf_set_rc_loss_behavior_send(chan, leaf_set_rc_loss_behavior->target_system, leaf_set_rc_loss_behavior->generate_frame);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_SET_RC_LOSS_BEHAVIOR, (const char *)leaf_set_rc_loss_behavior, MAVLINK_MSG_ID_LEAF_SET_RC_LOSS_BEHAVIOR_MIN_LEN, MAVLINK_MSG_ID_LEAF_SET_RC_LOSS_BEHAVIOR_LEN, MAVLINK_MSG_ID_LEAF_SET_RC_LOSS_BEHAVIOR_CRC);
#endif
}

#if MAVLINK_MSG_ID_LEAF_SET_RC_LOSS_BEHAVIOR_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_leaf_set_rc_loss_behavior_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t target_system, uint8_t generate_frame)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, generate_frame);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_SET_RC_LOSS_BEHAVIOR, buf, MAVLINK_MSG_ID_LEAF_SET_RC_LOSS_BEHAVIOR_MIN_LEN, MAVLINK_MSG_ID_LEAF_SET_RC_LOSS_BEHAVIOR_LEN, MAVLINK_MSG_ID_LEAF_SET_RC_LOSS_BEHAVIOR_CRC);
#else
    mavlink_leaf_set_rc_loss_behavior_t *packet = (mavlink_leaf_set_rc_loss_behavior_t *)msgbuf;
    packet->target_system = target_system;
    packet->generate_frame = generate_frame;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_SET_RC_LOSS_BEHAVIOR, (const char *)packet, MAVLINK_MSG_ID_LEAF_SET_RC_LOSS_BEHAVIOR_MIN_LEN, MAVLINK_MSG_ID_LEAF_SET_RC_LOSS_BEHAVIOR_LEN, MAVLINK_MSG_ID_LEAF_SET_RC_LOSS_BEHAVIOR_CRC);
#endif
}
#endif

#endif

// MESSAGE LEAF_SET_RC_LOSS_BEHAVIOR UNPACKING


/**
 * @brief Get field target_system from leaf_set_rc_loss_behavior message
 *
 * @return  The target system
 */
static inline uint8_t mavlink_msg_leaf_set_rc_loss_behavior_get_target_system(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field generate_frame from leaf_set_rc_loss_behavior message
 *
 * @return  1 = LeafFC generates a takeover RC frame (keep flying under guidance); 0 = LeafFC stays silent so Betaflight runs its own failsafe
 */
static inline uint8_t mavlink_msg_leaf_set_rc_loss_behavior_get_generate_frame(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Decode a leaf_set_rc_loss_behavior message into a struct
 *
 * @param msg The message to decode
 * @param leaf_set_rc_loss_behavior C-struct to decode the message contents into
 */
static inline void mavlink_msg_leaf_set_rc_loss_behavior_decode(const mavlink_message_t* msg, mavlink_leaf_set_rc_loss_behavior_t* leaf_set_rc_loss_behavior)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    leaf_set_rc_loss_behavior->target_system = mavlink_msg_leaf_set_rc_loss_behavior_get_target_system(msg);
    leaf_set_rc_loss_behavior->generate_frame = mavlink_msg_leaf_set_rc_loss_behavior_get_generate_frame(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_LEAF_SET_RC_LOSS_BEHAVIOR_LEN? msg->len : MAVLINK_MSG_ID_LEAF_SET_RC_LOSS_BEHAVIOR_LEN;
        memset(leaf_set_rc_loss_behavior, 0, MAVLINK_MSG_ID_LEAF_SET_RC_LOSS_BEHAVIOR_LEN);
    memcpy(leaf_set_rc_loss_behavior, _MAV_PAYLOAD(msg), len);
#endif
}
