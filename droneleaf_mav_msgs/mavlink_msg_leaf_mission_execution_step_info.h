#pragma once
// MESSAGE LEAF_MISSION_EXECUTION_STEP_INFO PACKING

#define MAVLINK_MSG_ID_LEAF_MISSION_EXECUTION_STEP_INFO 77050


typedef struct __mavlink_leaf_mission_execution_step_info_t {
 char step_name[64]; /*<  The name of the currently executing step*/
 uint8_t step_type; /*<  The type of the currently executing step*/
 char pos_trajectory_id[64]; /*<  The id of the currently executing position trajectory, if applicable*/
 char ori_trajectory_id[64]; /*<  The id of the currently executing orientation trajectory, if applicable*/
} mavlink_leaf_mission_execution_step_info_t;

#define MAVLINK_MSG_ID_LEAF_MISSION_EXECUTION_STEP_INFO_LEN 193
#define MAVLINK_MSG_ID_LEAF_MISSION_EXECUTION_STEP_INFO_MIN_LEN 193
#define MAVLINK_MSG_ID_77050_LEN 193
#define MAVLINK_MSG_ID_77050_MIN_LEN 193

#define MAVLINK_MSG_ID_LEAF_MISSION_EXECUTION_STEP_INFO_CRC 101
#define MAVLINK_MSG_ID_77050_CRC 101

#define MAVLINK_MSG_LEAF_MISSION_EXECUTION_STEP_INFO_FIELD_STEP_NAME_LEN 64
#define MAVLINK_MSG_LEAF_MISSION_EXECUTION_STEP_INFO_FIELD_POS_TRAJECTORY_ID_LEN 64
#define MAVLINK_MSG_LEAF_MISSION_EXECUTION_STEP_INFO_FIELD_ORI_TRAJECTORY_ID_LEN 64

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_LEAF_MISSION_EXECUTION_STEP_INFO { \
    77050, \
    "LEAF_MISSION_EXECUTION_STEP_INFO", \
    4, \
    {  { "step_name", NULL, MAVLINK_TYPE_CHAR, 64, 0, offsetof(mavlink_leaf_mission_execution_step_info_t, step_name) }, \
         { "step_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 64, offsetof(mavlink_leaf_mission_execution_step_info_t, step_type) }, \
         { "pos_trajectory_id", NULL, MAVLINK_TYPE_CHAR, 64, 65, offsetof(mavlink_leaf_mission_execution_step_info_t, pos_trajectory_id) }, \
         { "ori_trajectory_id", NULL, MAVLINK_TYPE_CHAR, 64, 129, offsetof(mavlink_leaf_mission_execution_step_info_t, ori_trajectory_id) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_LEAF_MISSION_EXECUTION_STEP_INFO { \
    "LEAF_MISSION_EXECUTION_STEP_INFO", \
    4, \
    {  { "step_name", NULL, MAVLINK_TYPE_CHAR, 64, 0, offsetof(mavlink_leaf_mission_execution_step_info_t, step_name) }, \
         { "step_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 64, offsetof(mavlink_leaf_mission_execution_step_info_t, step_type) }, \
         { "pos_trajectory_id", NULL, MAVLINK_TYPE_CHAR, 64, 65, offsetof(mavlink_leaf_mission_execution_step_info_t, pos_trajectory_id) }, \
         { "ori_trajectory_id", NULL, MAVLINK_TYPE_CHAR, 64, 129, offsetof(mavlink_leaf_mission_execution_step_info_t, ori_trajectory_id) }, \
         } \
}
#endif

/**
 * @brief Pack a leaf_mission_execution_step_info message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param step_name  The name of the currently executing step
 * @param step_type  The type of the currently executing step
 * @param pos_trajectory_id  The id of the currently executing position trajectory, if applicable
 * @param ori_trajectory_id  The id of the currently executing orientation trajectory, if applicable
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_mission_execution_step_info_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               const char *step_name, uint8_t step_type, const char *pos_trajectory_id, const char *ori_trajectory_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_MISSION_EXECUTION_STEP_INFO_LEN];
    _mav_put_uint8_t(buf, 64, step_type);
    _mav_put_char_array(buf, 0, step_name, 64);
    _mav_put_char_array(buf, 65, pos_trajectory_id, 64);
    _mav_put_char_array(buf, 129, ori_trajectory_id, 64);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_MISSION_EXECUTION_STEP_INFO_LEN);
#else
    mavlink_leaf_mission_execution_step_info_t packet;
    packet.step_type = step_type;
    mav_array_assign_char(packet.step_name, step_name, 64);
    mav_array_assign_char(packet.pos_trajectory_id, pos_trajectory_id, 64);
    mav_array_assign_char(packet.ori_trajectory_id, ori_trajectory_id, 64);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_MISSION_EXECUTION_STEP_INFO_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_MISSION_EXECUTION_STEP_INFO;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_LEAF_MISSION_EXECUTION_STEP_INFO_MIN_LEN, MAVLINK_MSG_ID_LEAF_MISSION_EXECUTION_STEP_INFO_LEN, MAVLINK_MSG_ID_LEAF_MISSION_EXECUTION_STEP_INFO_CRC);
}

/**
 * @brief Pack a leaf_mission_execution_step_info message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param step_name  The name of the currently executing step
 * @param step_type  The type of the currently executing step
 * @param pos_trajectory_id  The id of the currently executing position trajectory, if applicable
 * @param ori_trajectory_id  The id of the currently executing orientation trajectory, if applicable
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_mission_execution_step_info_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               const char *step_name, uint8_t step_type, const char *pos_trajectory_id, const char *ori_trajectory_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_MISSION_EXECUTION_STEP_INFO_LEN];
    _mav_put_uint8_t(buf, 64, step_type);
    _mav_put_char_array(buf, 0, step_name, 64);
    _mav_put_char_array(buf, 65, pos_trajectory_id, 64);
    _mav_put_char_array(buf, 129, ori_trajectory_id, 64);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_MISSION_EXECUTION_STEP_INFO_LEN);
#else
    mavlink_leaf_mission_execution_step_info_t packet;
    packet.step_type = step_type;
    mav_array_memcpy(packet.step_name, step_name, sizeof(char)*64);
    mav_array_memcpy(packet.pos_trajectory_id, pos_trajectory_id, sizeof(char)*64);
    mav_array_memcpy(packet.ori_trajectory_id, ori_trajectory_id, sizeof(char)*64);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_MISSION_EXECUTION_STEP_INFO_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_MISSION_EXECUTION_STEP_INFO;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_MISSION_EXECUTION_STEP_INFO_MIN_LEN, MAVLINK_MSG_ID_LEAF_MISSION_EXECUTION_STEP_INFO_LEN, MAVLINK_MSG_ID_LEAF_MISSION_EXECUTION_STEP_INFO_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_MISSION_EXECUTION_STEP_INFO_MIN_LEN, MAVLINK_MSG_ID_LEAF_MISSION_EXECUTION_STEP_INFO_LEN);
#endif
}

/**
 * @brief Pack a leaf_mission_execution_step_info message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param step_name  The name of the currently executing step
 * @param step_type  The type of the currently executing step
 * @param pos_trajectory_id  The id of the currently executing position trajectory, if applicable
 * @param ori_trajectory_id  The id of the currently executing orientation trajectory, if applicable
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_mission_execution_step_info_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   const char *step_name,uint8_t step_type,const char *pos_trajectory_id,const char *ori_trajectory_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_MISSION_EXECUTION_STEP_INFO_LEN];
    _mav_put_uint8_t(buf, 64, step_type);
    _mav_put_char_array(buf, 0, step_name, 64);
    _mav_put_char_array(buf, 65, pos_trajectory_id, 64);
    _mav_put_char_array(buf, 129, ori_trajectory_id, 64);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_MISSION_EXECUTION_STEP_INFO_LEN);
#else
    mavlink_leaf_mission_execution_step_info_t packet;
    packet.step_type = step_type;
    mav_array_assign_char(packet.step_name, step_name, 64);
    mav_array_assign_char(packet.pos_trajectory_id, pos_trajectory_id, 64);
    mav_array_assign_char(packet.ori_trajectory_id, ori_trajectory_id, 64);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_MISSION_EXECUTION_STEP_INFO_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_MISSION_EXECUTION_STEP_INFO;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_LEAF_MISSION_EXECUTION_STEP_INFO_MIN_LEN, MAVLINK_MSG_ID_LEAF_MISSION_EXECUTION_STEP_INFO_LEN, MAVLINK_MSG_ID_LEAF_MISSION_EXECUTION_STEP_INFO_CRC);
}

/**
 * @brief Encode a leaf_mission_execution_step_info struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param leaf_mission_execution_step_info C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_mission_execution_step_info_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_leaf_mission_execution_step_info_t* leaf_mission_execution_step_info)
{
    return mavlink_msg_leaf_mission_execution_step_info_pack(system_id, component_id, msg, leaf_mission_execution_step_info->step_name, leaf_mission_execution_step_info->step_type, leaf_mission_execution_step_info->pos_trajectory_id, leaf_mission_execution_step_info->ori_trajectory_id);
}

/**
 * @brief Encode a leaf_mission_execution_step_info struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param leaf_mission_execution_step_info C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_mission_execution_step_info_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_leaf_mission_execution_step_info_t* leaf_mission_execution_step_info)
{
    return mavlink_msg_leaf_mission_execution_step_info_pack_chan(system_id, component_id, chan, msg, leaf_mission_execution_step_info->step_name, leaf_mission_execution_step_info->step_type, leaf_mission_execution_step_info->pos_trajectory_id, leaf_mission_execution_step_info->ori_trajectory_id);
}

/**
 * @brief Encode a leaf_mission_execution_step_info struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param leaf_mission_execution_step_info C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_mission_execution_step_info_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_leaf_mission_execution_step_info_t* leaf_mission_execution_step_info)
{
    return mavlink_msg_leaf_mission_execution_step_info_pack_status(system_id, component_id, _status, msg,  leaf_mission_execution_step_info->step_name, leaf_mission_execution_step_info->step_type, leaf_mission_execution_step_info->pos_trajectory_id, leaf_mission_execution_step_info->ori_trajectory_id);
}

/**
 * @brief Send a leaf_mission_execution_step_info message
 * @param chan MAVLink channel to send the message
 *
 * @param step_name  The name of the currently executing step
 * @param step_type  The type of the currently executing step
 * @param pos_trajectory_id  The id of the currently executing position trajectory, if applicable
 * @param ori_trajectory_id  The id of the currently executing orientation trajectory, if applicable
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_leaf_mission_execution_step_info_send(mavlink_channel_t chan, const char *step_name, uint8_t step_type, const char *pos_trajectory_id, const char *ori_trajectory_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_MISSION_EXECUTION_STEP_INFO_LEN];
    _mav_put_uint8_t(buf, 64, step_type);
    _mav_put_char_array(buf, 0, step_name, 64);
    _mav_put_char_array(buf, 65, pos_trajectory_id, 64);
    _mav_put_char_array(buf, 129, ori_trajectory_id, 64);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_MISSION_EXECUTION_STEP_INFO, buf, MAVLINK_MSG_ID_LEAF_MISSION_EXECUTION_STEP_INFO_MIN_LEN, MAVLINK_MSG_ID_LEAF_MISSION_EXECUTION_STEP_INFO_LEN, MAVLINK_MSG_ID_LEAF_MISSION_EXECUTION_STEP_INFO_CRC);
#else
    mavlink_leaf_mission_execution_step_info_t packet;
    packet.step_type = step_type;
    mav_array_assign_char(packet.step_name, step_name, 64);
    mav_array_assign_char(packet.pos_trajectory_id, pos_trajectory_id, 64);
    mav_array_assign_char(packet.ori_trajectory_id, ori_trajectory_id, 64);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_MISSION_EXECUTION_STEP_INFO, (const char *)&packet, MAVLINK_MSG_ID_LEAF_MISSION_EXECUTION_STEP_INFO_MIN_LEN, MAVLINK_MSG_ID_LEAF_MISSION_EXECUTION_STEP_INFO_LEN, MAVLINK_MSG_ID_LEAF_MISSION_EXECUTION_STEP_INFO_CRC);
#endif
}

/**
 * @brief Send a leaf_mission_execution_step_info message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_leaf_mission_execution_step_info_send_struct(mavlink_channel_t chan, const mavlink_leaf_mission_execution_step_info_t* leaf_mission_execution_step_info)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_leaf_mission_execution_step_info_send(chan, leaf_mission_execution_step_info->step_name, leaf_mission_execution_step_info->step_type, leaf_mission_execution_step_info->pos_trajectory_id, leaf_mission_execution_step_info->ori_trajectory_id);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_MISSION_EXECUTION_STEP_INFO, (const char *)leaf_mission_execution_step_info, MAVLINK_MSG_ID_LEAF_MISSION_EXECUTION_STEP_INFO_MIN_LEN, MAVLINK_MSG_ID_LEAF_MISSION_EXECUTION_STEP_INFO_LEN, MAVLINK_MSG_ID_LEAF_MISSION_EXECUTION_STEP_INFO_CRC);
#endif
}

#if MAVLINK_MSG_ID_LEAF_MISSION_EXECUTION_STEP_INFO_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_leaf_mission_execution_step_info_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  const char *step_name, uint8_t step_type, const char *pos_trajectory_id, const char *ori_trajectory_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 64, step_type);
    _mav_put_char_array(buf, 0, step_name, 64);
    _mav_put_char_array(buf, 65, pos_trajectory_id, 64);
    _mav_put_char_array(buf, 129, ori_trajectory_id, 64);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_MISSION_EXECUTION_STEP_INFO, buf, MAVLINK_MSG_ID_LEAF_MISSION_EXECUTION_STEP_INFO_MIN_LEN, MAVLINK_MSG_ID_LEAF_MISSION_EXECUTION_STEP_INFO_LEN, MAVLINK_MSG_ID_LEAF_MISSION_EXECUTION_STEP_INFO_CRC);
#else
    mavlink_leaf_mission_execution_step_info_t *packet = (mavlink_leaf_mission_execution_step_info_t *)msgbuf;
    packet->step_type = step_type;
    mav_array_assign_char(packet->step_name, step_name, 64);
    mav_array_assign_char(packet->pos_trajectory_id, pos_trajectory_id, 64);
    mav_array_assign_char(packet->ori_trajectory_id, ori_trajectory_id, 64);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_MISSION_EXECUTION_STEP_INFO, (const char *)packet, MAVLINK_MSG_ID_LEAF_MISSION_EXECUTION_STEP_INFO_MIN_LEN, MAVLINK_MSG_ID_LEAF_MISSION_EXECUTION_STEP_INFO_LEN, MAVLINK_MSG_ID_LEAF_MISSION_EXECUTION_STEP_INFO_CRC);
#endif
}
#endif

#endif

// MESSAGE LEAF_MISSION_EXECUTION_STEP_INFO UNPACKING


/**
 * @brief Get field step_name from leaf_mission_execution_step_info message
 *
 * @return  The name of the currently executing step
 */
static inline uint16_t mavlink_msg_leaf_mission_execution_step_info_get_step_name(const mavlink_message_t* msg, char *step_name)
{
    return _MAV_RETURN_char_array(msg, step_name, 64,  0);
}

/**
 * @brief Get field step_type from leaf_mission_execution_step_info message
 *
 * @return  The type of the currently executing step
 */
static inline uint8_t mavlink_msg_leaf_mission_execution_step_info_get_step_type(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  64);
}

/**
 * @brief Get field pos_trajectory_id from leaf_mission_execution_step_info message
 *
 * @return  The id of the currently executing position trajectory, if applicable
 */
static inline uint16_t mavlink_msg_leaf_mission_execution_step_info_get_pos_trajectory_id(const mavlink_message_t* msg, char *pos_trajectory_id)
{
    return _MAV_RETURN_char_array(msg, pos_trajectory_id, 64,  65);
}

/**
 * @brief Get field ori_trajectory_id from leaf_mission_execution_step_info message
 *
 * @return  The id of the currently executing orientation trajectory, if applicable
 */
static inline uint16_t mavlink_msg_leaf_mission_execution_step_info_get_ori_trajectory_id(const mavlink_message_t* msg, char *ori_trajectory_id)
{
    return _MAV_RETURN_char_array(msg, ori_trajectory_id, 64,  129);
}

/**
 * @brief Decode a leaf_mission_execution_step_info message into a struct
 *
 * @param msg The message to decode
 * @param leaf_mission_execution_step_info C-struct to decode the message contents into
 */
static inline void mavlink_msg_leaf_mission_execution_step_info_decode(const mavlink_message_t* msg, mavlink_leaf_mission_execution_step_info_t* leaf_mission_execution_step_info)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_leaf_mission_execution_step_info_get_step_name(msg, leaf_mission_execution_step_info->step_name);
    leaf_mission_execution_step_info->step_type = mavlink_msg_leaf_mission_execution_step_info_get_step_type(msg);
    mavlink_msg_leaf_mission_execution_step_info_get_pos_trajectory_id(msg, leaf_mission_execution_step_info->pos_trajectory_id);
    mavlink_msg_leaf_mission_execution_step_info_get_ori_trajectory_id(msg, leaf_mission_execution_step_info->ori_trajectory_id);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_LEAF_MISSION_EXECUTION_STEP_INFO_LEN? msg->len : MAVLINK_MSG_ID_LEAF_MISSION_EXECUTION_STEP_INFO_LEN;
        memset(leaf_mission_execution_step_info, 0, MAVLINK_MSG_ID_LEAF_MISSION_EXECUTION_STEP_INFO_LEN);
    memcpy(leaf_mission_execution_step_info, _MAV_PAYLOAD(msg), len);
#endif
}
