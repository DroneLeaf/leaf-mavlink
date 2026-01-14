#pragma once
// MESSAGE LEAF_SET_MISSION_STATE PACKING

#define MAVLINK_MSG_ID_LEAF_SET_MISSION_STATE 77015


typedef struct __mavlink_leaf_set_mission_state_t {
 uint8_t target_system; /*<  The system needs to set the mission state*/
 uint8_t state; /*<  The mission state to set*/
 char mission_id[64]; /*<  The id of the mission to control*/
} mavlink_leaf_set_mission_state_t;

#define MAVLINK_MSG_ID_LEAF_SET_MISSION_STATE_LEN 66
#define MAVLINK_MSG_ID_LEAF_SET_MISSION_STATE_MIN_LEN 66
#define MAVLINK_MSG_ID_77015_LEN 66
#define MAVLINK_MSG_ID_77015_MIN_LEN 66

#define MAVLINK_MSG_ID_LEAF_SET_MISSION_STATE_CRC 159
#define MAVLINK_MSG_ID_77015_CRC 159

#define MAVLINK_MSG_LEAF_SET_MISSION_STATE_FIELD_MISSION_ID_LEN 64

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_LEAF_SET_MISSION_STATE { \
    77015, \
    "LEAF_SET_MISSION_STATE", \
    3, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_leaf_set_mission_state_t, target_system) }, \
         { "state", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_leaf_set_mission_state_t, state) }, \
         { "mission_id", NULL, MAVLINK_TYPE_CHAR, 64, 2, offsetof(mavlink_leaf_set_mission_state_t, mission_id) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_LEAF_SET_MISSION_STATE { \
    "LEAF_SET_MISSION_STATE", \
    3, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_leaf_set_mission_state_t, target_system) }, \
         { "state", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_leaf_set_mission_state_t, state) }, \
         { "mission_id", NULL, MAVLINK_TYPE_CHAR, 64, 2, offsetof(mavlink_leaf_set_mission_state_t, mission_id) }, \
         } \
}
#endif

/**
 * @brief Pack a leaf_set_mission_state message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system  The system needs to set the mission state
 * @param state  The mission state to set
 * @param mission_id  The id of the mission to control
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_set_mission_state_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t target_system, uint8_t state, const char *mission_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_SET_MISSION_STATE_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, state);
    _mav_put_char_array(buf, 2, mission_id, 64);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_SET_MISSION_STATE_LEN);
#else
    mavlink_leaf_set_mission_state_t packet;
    packet.target_system = target_system;
    packet.state = state;
    mav_array_assign_char(packet.mission_id, mission_id, 64);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_SET_MISSION_STATE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_SET_MISSION_STATE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_LEAF_SET_MISSION_STATE_MIN_LEN, MAVLINK_MSG_ID_LEAF_SET_MISSION_STATE_LEN, MAVLINK_MSG_ID_LEAF_SET_MISSION_STATE_CRC);
}

/**
 * @brief Pack a leaf_set_mission_state message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system  The system needs to set the mission state
 * @param state  The mission state to set
 * @param mission_id  The id of the mission to control
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_set_mission_state_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t target_system, uint8_t state, const char *mission_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_SET_MISSION_STATE_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, state);
    _mav_put_char_array(buf, 2, mission_id, 64);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_SET_MISSION_STATE_LEN);
#else
    mavlink_leaf_set_mission_state_t packet;
    packet.target_system = target_system;
    packet.state = state;
    mav_array_memcpy(packet.mission_id, mission_id, sizeof(char)*64);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_SET_MISSION_STATE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_SET_MISSION_STATE;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_SET_MISSION_STATE_MIN_LEN, MAVLINK_MSG_ID_LEAF_SET_MISSION_STATE_LEN, MAVLINK_MSG_ID_LEAF_SET_MISSION_STATE_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_SET_MISSION_STATE_MIN_LEN, MAVLINK_MSG_ID_LEAF_SET_MISSION_STATE_LEN);
#endif
}

/**
 * @brief Pack a leaf_set_mission_state message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param target_system  The system needs to set the mission state
 * @param state  The mission state to set
 * @param mission_id  The id of the mission to control
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_set_mission_state_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t target_system,uint8_t state,const char *mission_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_SET_MISSION_STATE_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, state);
    _mav_put_char_array(buf, 2, mission_id, 64);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_SET_MISSION_STATE_LEN);
#else
    mavlink_leaf_set_mission_state_t packet;
    packet.target_system = target_system;
    packet.state = state;
    mav_array_assign_char(packet.mission_id, mission_id, 64);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_SET_MISSION_STATE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_SET_MISSION_STATE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_LEAF_SET_MISSION_STATE_MIN_LEN, MAVLINK_MSG_ID_LEAF_SET_MISSION_STATE_LEN, MAVLINK_MSG_ID_LEAF_SET_MISSION_STATE_CRC);
}

/**
 * @brief Encode a leaf_set_mission_state struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param leaf_set_mission_state C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_set_mission_state_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_leaf_set_mission_state_t* leaf_set_mission_state)
{
    return mavlink_msg_leaf_set_mission_state_pack(system_id, component_id, msg, leaf_set_mission_state->target_system, leaf_set_mission_state->state, leaf_set_mission_state->mission_id);
}

/**
 * @brief Encode a leaf_set_mission_state struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param leaf_set_mission_state C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_set_mission_state_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_leaf_set_mission_state_t* leaf_set_mission_state)
{
    return mavlink_msg_leaf_set_mission_state_pack_chan(system_id, component_id, chan, msg, leaf_set_mission_state->target_system, leaf_set_mission_state->state, leaf_set_mission_state->mission_id);
}

/**
 * @brief Encode a leaf_set_mission_state struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param leaf_set_mission_state C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_set_mission_state_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_leaf_set_mission_state_t* leaf_set_mission_state)
{
    return mavlink_msg_leaf_set_mission_state_pack_status(system_id, component_id, _status, msg,  leaf_set_mission_state->target_system, leaf_set_mission_state->state, leaf_set_mission_state->mission_id);
}

/**
 * @brief Send a leaf_set_mission_state message
 * @param chan MAVLink channel to send the message
 *
 * @param target_system  The system needs to set the mission state
 * @param state  The mission state to set
 * @param mission_id  The id of the mission to control
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_leaf_set_mission_state_send(mavlink_channel_t chan, uint8_t target_system, uint8_t state, const char *mission_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_SET_MISSION_STATE_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, state);
    _mav_put_char_array(buf, 2, mission_id, 64);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_SET_MISSION_STATE, buf, MAVLINK_MSG_ID_LEAF_SET_MISSION_STATE_MIN_LEN, MAVLINK_MSG_ID_LEAF_SET_MISSION_STATE_LEN, MAVLINK_MSG_ID_LEAF_SET_MISSION_STATE_CRC);
#else
    mavlink_leaf_set_mission_state_t packet;
    packet.target_system = target_system;
    packet.state = state;
    mav_array_assign_char(packet.mission_id, mission_id, 64);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_SET_MISSION_STATE, (const char *)&packet, MAVLINK_MSG_ID_LEAF_SET_MISSION_STATE_MIN_LEN, MAVLINK_MSG_ID_LEAF_SET_MISSION_STATE_LEN, MAVLINK_MSG_ID_LEAF_SET_MISSION_STATE_CRC);
#endif
}

/**
 * @brief Send a leaf_set_mission_state message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_leaf_set_mission_state_send_struct(mavlink_channel_t chan, const mavlink_leaf_set_mission_state_t* leaf_set_mission_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_leaf_set_mission_state_send(chan, leaf_set_mission_state->target_system, leaf_set_mission_state->state, leaf_set_mission_state->mission_id);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_SET_MISSION_STATE, (const char *)leaf_set_mission_state, MAVLINK_MSG_ID_LEAF_SET_MISSION_STATE_MIN_LEN, MAVLINK_MSG_ID_LEAF_SET_MISSION_STATE_LEN, MAVLINK_MSG_ID_LEAF_SET_MISSION_STATE_CRC);
#endif
}

#if MAVLINK_MSG_ID_LEAF_SET_MISSION_STATE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_leaf_set_mission_state_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t target_system, uint8_t state, const char *mission_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, state);
    _mav_put_char_array(buf, 2, mission_id, 64);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_SET_MISSION_STATE, buf, MAVLINK_MSG_ID_LEAF_SET_MISSION_STATE_MIN_LEN, MAVLINK_MSG_ID_LEAF_SET_MISSION_STATE_LEN, MAVLINK_MSG_ID_LEAF_SET_MISSION_STATE_CRC);
#else
    mavlink_leaf_set_mission_state_t *packet = (mavlink_leaf_set_mission_state_t *)msgbuf;
    packet->target_system = target_system;
    packet->state = state;
    mav_array_assign_char(packet->mission_id, mission_id, 64);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_SET_MISSION_STATE, (const char *)packet, MAVLINK_MSG_ID_LEAF_SET_MISSION_STATE_MIN_LEN, MAVLINK_MSG_ID_LEAF_SET_MISSION_STATE_LEN, MAVLINK_MSG_ID_LEAF_SET_MISSION_STATE_CRC);
#endif
}
#endif

#endif

// MESSAGE LEAF_SET_MISSION_STATE UNPACKING


/**
 * @brief Get field target_system from leaf_set_mission_state message
 *
 * @return  The system needs to set the mission state
 */
static inline uint8_t mavlink_msg_leaf_set_mission_state_get_target_system(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field state from leaf_set_mission_state message
 *
 * @return  The mission state to set
 */
static inline uint8_t mavlink_msg_leaf_set_mission_state_get_state(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Get field mission_id from leaf_set_mission_state message
 *
 * @return  The id of the mission to control
 */
static inline uint16_t mavlink_msg_leaf_set_mission_state_get_mission_id(const mavlink_message_t* msg, char *mission_id)
{
    return _MAV_RETURN_char_array(msg, mission_id, 64,  2);
}

/**
 * @brief Decode a leaf_set_mission_state message into a struct
 *
 * @param msg The message to decode
 * @param leaf_set_mission_state C-struct to decode the message contents into
 */
static inline void mavlink_msg_leaf_set_mission_state_decode(const mavlink_message_t* msg, mavlink_leaf_set_mission_state_t* leaf_set_mission_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    leaf_set_mission_state->target_system = mavlink_msg_leaf_set_mission_state_get_target_system(msg);
    leaf_set_mission_state->state = mavlink_msg_leaf_set_mission_state_get_state(msg);
    mavlink_msg_leaf_set_mission_state_get_mission_id(msg, leaf_set_mission_state->mission_id);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_LEAF_SET_MISSION_STATE_LEN? msg->len : MAVLINK_MSG_ID_LEAF_SET_MISSION_STATE_LEN;
        memset(leaf_set_mission_state, 0, MAVLINK_MSG_ID_LEAF_SET_MISSION_STATE_LEN);
    memcpy(leaf_set_mission_state, _MAV_PAYLOAD(msg), len);
#endif
}
