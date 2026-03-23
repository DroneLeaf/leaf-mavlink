#pragma once
// MESSAGE LEAF_FC_MISSION_MANAGER_HEARTBEAT PACKING

#define MAVLINK_MSG_ID_LEAF_FC_MISSION_MANAGER_HEARTBEAT 77051


typedef struct __mavlink_leaf_fc_mission_manager_heartbeat_t {
 uint8_t is_enabled; /*<  1 if the publisher is healthy, 0 otherwise*/
 uint8_t is_petal_healthy; /*<  1 if the publisher is healthy, 0 otherwise*/
 uint8_t is_mission_in_progress; /*<  1 if a mission is in_progress, 0 otherwise*/
 uint8_t mission_pause_stage; /*<  Current pause stage*/
 uint8_t is_joystick_enabled; /*<  1 if the joystick is enabled, 0 otherwise*/
 uint8_t mission_mode; /*<  The current mission mode*/
 char current_mission_id[64]; /*<  The id of the current mission*/
 char current_pos_trajectory_id[64]; /*<  The id of the current position trajectory*/
 char current_ori_trajectory_id[64]; /*<  The id of the current orientation trajectory*/
 uint8_t is_current_pos_trajectory_completed; /*<  1 if the current position trajectory is completed, 0 otherwise*/
 uint8_t is_current_ori_trajectory_completed; /*<  1 if the current orientation trajectory is completed, 0 otherwise*/
} mavlink_leaf_fc_mission_manager_heartbeat_t;

#define MAVLINK_MSG_ID_LEAF_FC_MISSION_MANAGER_HEARTBEAT_LEN 200
#define MAVLINK_MSG_ID_LEAF_FC_MISSION_MANAGER_HEARTBEAT_MIN_LEN 200
#define MAVLINK_MSG_ID_77051_LEN 200
#define MAVLINK_MSG_ID_77051_MIN_LEN 200

#define MAVLINK_MSG_ID_LEAF_FC_MISSION_MANAGER_HEARTBEAT_CRC 56
#define MAVLINK_MSG_ID_77051_CRC 56

#define MAVLINK_MSG_LEAF_FC_MISSION_MANAGER_HEARTBEAT_FIELD_CURRENT_MISSION_ID_LEN 64
#define MAVLINK_MSG_LEAF_FC_MISSION_MANAGER_HEARTBEAT_FIELD_CURRENT_POS_TRAJECTORY_ID_LEN 64
#define MAVLINK_MSG_LEAF_FC_MISSION_MANAGER_HEARTBEAT_FIELD_CURRENT_ORI_TRAJECTORY_ID_LEN 64

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_LEAF_FC_MISSION_MANAGER_HEARTBEAT { \
    77051, \
    "LEAF_FC_MISSION_MANAGER_HEARTBEAT", \
    11, \
    {  { "is_enabled", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_leaf_fc_mission_manager_heartbeat_t, is_enabled) }, \
         { "is_petal_healthy", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_leaf_fc_mission_manager_heartbeat_t, is_petal_healthy) }, \
         { "is_mission_in_progress", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_leaf_fc_mission_manager_heartbeat_t, is_mission_in_progress) }, \
         { "mission_pause_stage", NULL, MAVLINK_TYPE_UINT8_T, 0, 3, offsetof(mavlink_leaf_fc_mission_manager_heartbeat_t, mission_pause_stage) }, \
         { "is_joystick_enabled", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_leaf_fc_mission_manager_heartbeat_t, is_joystick_enabled) }, \
         { "mission_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_leaf_fc_mission_manager_heartbeat_t, mission_mode) }, \
         { "current_mission_id", NULL, MAVLINK_TYPE_CHAR, 64, 6, offsetof(mavlink_leaf_fc_mission_manager_heartbeat_t, current_mission_id) }, \
         { "current_pos_trajectory_id", NULL, MAVLINK_TYPE_CHAR, 64, 70, offsetof(mavlink_leaf_fc_mission_manager_heartbeat_t, current_pos_trajectory_id) }, \
         { "current_ori_trajectory_id", NULL, MAVLINK_TYPE_CHAR, 64, 134, offsetof(mavlink_leaf_fc_mission_manager_heartbeat_t, current_ori_trajectory_id) }, \
         { "is_current_pos_trajectory_completed", NULL, MAVLINK_TYPE_UINT8_T, 0, 198, offsetof(mavlink_leaf_fc_mission_manager_heartbeat_t, is_current_pos_trajectory_completed) }, \
         { "is_current_ori_trajectory_completed", NULL, MAVLINK_TYPE_UINT8_T, 0, 199, offsetof(mavlink_leaf_fc_mission_manager_heartbeat_t, is_current_ori_trajectory_completed) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_LEAF_FC_MISSION_MANAGER_HEARTBEAT { \
    "LEAF_FC_MISSION_MANAGER_HEARTBEAT", \
    11, \
    {  { "is_enabled", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_leaf_fc_mission_manager_heartbeat_t, is_enabled) }, \
         { "is_petal_healthy", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_leaf_fc_mission_manager_heartbeat_t, is_petal_healthy) }, \
         { "is_mission_in_progress", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_leaf_fc_mission_manager_heartbeat_t, is_mission_in_progress) }, \
         { "mission_pause_stage", NULL, MAVLINK_TYPE_UINT8_T, 0, 3, offsetof(mavlink_leaf_fc_mission_manager_heartbeat_t, mission_pause_stage) }, \
         { "is_joystick_enabled", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_leaf_fc_mission_manager_heartbeat_t, is_joystick_enabled) }, \
         { "mission_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_leaf_fc_mission_manager_heartbeat_t, mission_mode) }, \
         { "current_mission_id", NULL, MAVLINK_TYPE_CHAR, 64, 6, offsetof(mavlink_leaf_fc_mission_manager_heartbeat_t, current_mission_id) }, \
         { "current_pos_trajectory_id", NULL, MAVLINK_TYPE_CHAR, 64, 70, offsetof(mavlink_leaf_fc_mission_manager_heartbeat_t, current_pos_trajectory_id) }, \
         { "current_ori_trajectory_id", NULL, MAVLINK_TYPE_CHAR, 64, 134, offsetof(mavlink_leaf_fc_mission_manager_heartbeat_t, current_ori_trajectory_id) }, \
         { "is_current_pos_trajectory_completed", NULL, MAVLINK_TYPE_UINT8_T, 0, 198, offsetof(mavlink_leaf_fc_mission_manager_heartbeat_t, is_current_pos_trajectory_completed) }, \
         { "is_current_ori_trajectory_completed", NULL, MAVLINK_TYPE_UINT8_T, 0, 199, offsetof(mavlink_leaf_fc_mission_manager_heartbeat_t, is_current_ori_trajectory_completed) }, \
         } \
}
#endif

/**
 * @brief Pack a leaf_fc_mission_manager_heartbeat message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param is_enabled  1 if the publisher is healthy, 0 otherwise
 * @param is_petal_healthy  1 if the publisher is healthy, 0 otherwise
 * @param is_mission_in_progress  1 if a mission is in_progress, 0 otherwise
 * @param mission_pause_stage  Current pause stage
 * @param is_joystick_enabled  1 if the joystick is enabled, 0 otherwise
 * @param mission_mode  The current mission mode
 * @param current_mission_id  The id of the current mission
 * @param current_pos_trajectory_id  The id of the current position trajectory
 * @param current_ori_trajectory_id  The id of the current orientation trajectory
 * @param is_current_pos_trajectory_completed  1 if the current position trajectory is completed, 0 otherwise
 * @param is_current_ori_trajectory_completed  1 if the current orientation trajectory is completed, 0 otherwise
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_fc_mission_manager_heartbeat_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t is_enabled, uint8_t is_petal_healthy, uint8_t is_mission_in_progress, uint8_t mission_pause_stage, uint8_t is_joystick_enabled, uint8_t mission_mode, const char *current_mission_id, const char *current_pos_trajectory_id, const char *current_ori_trajectory_id, uint8_t is_current_pos_trajectory_completed, uint8_t is_current_ori_trajectory_completed)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_FC_MISSION_MANAGER_HEARTBEAT_LEN];
    _mav_put_uint8_t(buf, 0, is_enabled);
    _mav_put_uint8_t(buf, 1, is_petal_healthy);
    _mav_put_uint8_t(buf, 2, is_mission_in_progress);
    _mav_put_uint8_t(buf, 3, mission_pause_stage);
    _mav_put_uint8_t(buf, 4, is_joystick_enabled);
    _mav_put_uint8_t(buf, 5, mission_mode);
    _mav_put_uint8_t(buf, 198, is_current_pos_trajectory_completed);
    _mav_put_uint8_t(buf, 199, is_current_ori_trajectory_completed);
    _mav_put_char_array(buf, 6, current_mission_id, 64);
    _mav_put_char_array(buf, 70, current_pos_trajectory_id, 64);
    _mav_put_char_array(buf, 134, current_ori_trajectory_id, 64);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_FC_MISSION_MANAGER_HEARTBEAT_LEN);
#else
    mavlink_leaf_fc_mission_manager_heartbeat_t packet;
    packet.is_enabled = is_enabled;
    packet.is_petal_healthy = is_petal_healthy;
    packet.is_mission_in_progress = is_mission_in_progress;
    packet.mission_pause_stage = mission_pause_stage;
    packet.is_joystick_enabled = is_joystick_enabled;
    packet.mission_mode = mission_mode;
    packet.is_current_pos_trajectory_completed = is_current_pos_trajectory_completed;
    packet.is_current_ori_trajectory_completed = is_current_ori_trajectory_completed;
    mav_array_assign_char(packet.current_mission_id, current_mission_id, 64);
    mav_array_assign_char(packet.current_pos_trajectory_id, current_pos_trajectory_id, 64);
    mav_array_assign_char(packet.current_ori_trajectory_id, current_ori_trajectory_id, 64);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_FC_MISSION_MANAGER_HEARTBEAT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_FC_MISSION_MANAGER_HEARTBEAT;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_LEAF_FC_MISSION_MANAGER_HEARTBEAT_MIN_LEN, MAVLINK_MSG_ID_LEAF_FC_MISSION_MANAGER_HEARTBEAT_LEN, MAVLINK_MSG_ID_LEAF_FC_MISSION_MANAGER_HEARTBEAT_CRC);
}

/**
 * @brief Pack a leaf_fc_mission_manager_heartbeat message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param is_enabled  1 if the publisher is healthy, 0 otherwise
 * @param is_petal_healthy  1 if the publisher is healthy, 0 otherwise
 * @param is_mission_in_progress  1 if a mission is in_progress, 0 otherwise
 * @param mission_pause_stage  Current pause stage
 * @param is_joystick_enabled  1 if the joystick is enabled, 0 otherwise
 * @param mission_mode  The current mission mode
 * @param current_mission_id  The id of the current mission
 * @param current_pos_trajectory_id  The id of the current position trajectory
 * @param current_ori_trajectory_id  The id of the current orientation trajectory
 * @param is_current_pos_trajectory_completed  1 if the current position trajectory is completed, 0 otherwise
 * @param is_current_ori_trajectory_completed  1 if the current orientation trajectory is completed, 0 otherwise
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_fc_mission_manager_heartbeat_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t is_enabled, uint8_t is_petal_healthy, uint8_t is_mission_in_progress, uint8_t mission_pause_stage, uint8_t is_joystick_enabled, uint8_t mission_mode, const char *current_mission_id, const char *current_pos_trajectory_id, const char *current_ori_trajectory_id, uint8_t is_current_pos_trajectory_completed, uint8_t is_current_ori_trajectory_completed)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_FC_MISSION_MANAGER_HEARTBEAT_LEN];
    _mav_put_uint8_t(buf, 0, is_enabled);
    _mav_put_uint8_t(buf, 1, is_petal_healthy);
    _mav_put_uint8_t(buf, 2, is_mission_in_progress);
    _mav_put_uint8_t(buf, 3, mission_pause_stage);
    _mav_put_uint8_t(buf, 4, is_joystick_enabled);
    _mav_put_uint8_t(buf, 5, mission_mode);
    _mav_put_uint8_t(buf, 198, is_current_pos_trajectory_completed);
    _mav_put_uint8_t(buf, 199, is_current_ori_trajectory_completed);
    _mav_put_char_array(buf, 6, current_mission_id, 64);
    _mav_put_char_array(buf, 70, current_pos_trajectory_id, 64);
    _mav_put_char_array(buf, 134, current_ori_trajectory_id, 64);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_FC_MISSION_MANAGER_HEARTBEAT_LEN);
#else
    mavlink_leaf_fc_mission_manager_heartbeat_t packet;
    packet.is_enabled = is_enabled;
    packet.is_petal_healthy = is_petal_healthy;
    packet.is_mission_in_progress = is_mission_in_progress;
    packet.mission_pause_stage = mission_pause_stage;
    packet.is_joystick_enabled = is_joystick_enabled;
    packet.mission_mode = mission_mode;
    packet.is_current_pos_trajectory_completed = is_current_pos_trajectory_completed;
    packet.is_current_ori_trajectory_completed = is_current_ori_trajectory_completed;
    mav_array_memcpy(packet.current_mission_id, current_mission_id, sizeof(char)*64);
    mav_array_memcpy(packet.current_pos_trajectory_id, current_pos_trajectory_id, sizeof(char)*64);
    mav_array_memcpy(packet.current_ori_trajectory_id, current_ori_trajectory_id, sizeof(char)*64);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_FC_MISSION_MANAGER_HEARTBEAT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_FC_MISSION_MANAGER_HEARTBEAT;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_FC_MISSION_MANAGER_HEARTBEAT_MIN_LEN, MAVLINK_MSG_ID_LEAF_FC_MISSION_MANAGER_HEARTBEAT_LEN, MAVLINK_MSG_ID_LEAF_FC_MISSION_MANAGER_HEARTBEAT_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_FC_MISSION_MANAGER_HEARTBEAT_MIN_LEN, MAVLINK_MSG_ID_LEAF_FC_MISSION_MANAGER_HEARTBEAT_LEN);
#endif
}

/**
 * @brief Pack a leaf_fc_mission_manager_heartbeat message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param is_enabled  1 if the publisher is healthy, 0 otherwise
 * @param is_petal_healthy  1 if the publisher is healthy, 0 otherwise
 * @param is_mission_in_progress  1 if a mission is in_progress, 0 otherwise
 * @param mission_pause_stage  Current pause stage
 * @param is_joystick_enabled  1 if the joystick is enabled, 0 otherwise
 * @param mission_mode  The current mission mode
 * @param current_mission_id  The id of the current mission
 * @param current_pos_trajectory_id  The id of the current position trajectory
 * @param current_ori_trajectory_id  The id of the current orientation trajectory
 * @param is_current_pos_trajectory_completed  1 if the current position trajectory is completed, 0 otherwise
 * @param is_current_ori_trajectory_completed  1 if the current orientation trajectory is completed, 0 otherwise
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_fc_mission_manager_heartbeat_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t is_enabled,uint8_t is_petal_healthy,uint8_t is_mission_in_progress,uint8_t mission_pause_stage,uint8_t is_joystick_enabled,uint8_t mission_mode,const char *current_mission_id,const char *current_pos_trajectory_id,const char *current_ori_trajectory_id,uint8_t is_current_pos_trajectory_completed,uint8_t is_current_ori_trajectory_completed)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_FC_MISSION_MANAGER_HEARTBEAT_LEN];
    _mav_put_uint8_t(buf, 0, is_enabled);
    _mav_put_uint8_t(buf, 1, is_petal_healthy);
    _mav_put_uint8_t(buf, 2, is_mission_in_progress);
    _mav_put_uint8_t(buf, 3, mission_pause_stage);
    _mav_put_uint8_t(buf, 4, is_joystick_enabled);
    _mav_put_uint8_t(buf, 5, mission_mode);
    _mav_put_uint8_t(buf, 198, is_current_pos_trajectory_completed);
    _mav_put_uint8_t(buf, 199, is_current_ori_trajectory_completed);
    _mav_put_char_array(buf, 6, current_mission_id, 64);
    _mav_put_char_array(buf, 70, current_pos_trajectory_id, 64);
    _mav_put_char_array(buf, 134, current_ori_trajectory_id, 64);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_FC_MISSION_MANAGER_HEARTBEAT_LEN);
#else
    mavlink_leaf_fc_mission_manager_heartbeat_t packet;
    packet.is_enabled = is_enabled;
    packet.is_petal_healthy = is_petal_healthy;
    packet.is_mission_in_progress = is_mission_in_progress;
    packet.mission_pause_stage = mission_pause_stage;
    packet.is_joystick_enabled = is_joystick_enabled;
    packet.mission_mode = mission_mode;
    packet.is_current_pos_trajectory_completed = is_current_pos_trajectory_completed;
    packet.is_current_ori_trajectory_completed = is_current_ori_trajectory_completed;
    mav_array_assign_char(packet.current_mission_id, current_mission_id, 64);
    mav_array_assign_char(packet.current_pos_trajectory_id, current_pos_trajectory_id, 64);
    mav_array_assign_char(packet.current_ori_trajectory_id, current_ori_trajectory_id, 64);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_FC_MISSION_MANAGER_HEARTBEAT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_FC_MISSION_MANAGER_HEARTBEAT;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_LEAF_FC_MISSION_MANAGER_HEARTBEAT_MIN_LEN, MAVLINK_MSG_ID_LEAF_FC_MISSION_MANAGER_HEARTBEAT_LEN, MAVLINK_MSG_ID_LEAF_FC_MISSION_MANAGER_HEARTBEAT_CRC);
}

/**
 * @brief Encode a leaf_fc_mission_manager_heartbeat struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param leaf_fc_mission_manager_heartbeat C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_fc_mission_manager_heartbeat_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_leaf_fc_mission_manager_heartbeat_t* leaf_fc_mission_manager_heartbeat)
{
    return mavlink_msg_leaf_fc_mission_manager_heartbeat_pack(system_id, component_id, msg, leaf_fc_mission_manager_heartbeat->is_enabled, leaf_fc_mission_manager_heartbeat->is_petal_healthy, leaf_fc_mission_manager_heartbeat->is_mission_in_progress, leaf_fc_mission_manager_heartbeat->mission_pause_stage, leaf_fc_mission_manager_heartbeat->is_joystick_enabled, leaf_fc_mission_manager_heartbeat->mission_mode, leaf_fc_mission_manager_heartbeat->current_mission_id, leaf_fc_mission_manager_heartbeat->current_pos_trajectory_id, leaf_fc_mission_manager_heartbeat->current_ori_trajectory_id, leaf_fc_mission_manager_heartbeat->is_current_pos_trajectory_completed, leaf_fc_mission_manager_heartbeat->is_current_ori_trajectory_completed);
}

/**
 * @brief Encode a leaf_fc_mission_manager_heartbeat struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param leaf_fc_mission_manager_heartbeat C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_fc_mission_manager_heartbeat_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_leaf_fc_mission_manager_heartbeat_t* leaf_fc_mission_manager_heartbeat)
{
    return mavlink_msg_leaf_fc_mission_manager_heartbeat_pack_chan(system_id, component_id, chan, msg, leaf_fc_mission_manager_heartbeat->is_enabled, leaf_fc_mission_manager_heartbeat->is_petal_healthy, leaf_fc_mission_manager_heartbeat->is_mission_in_progress, leaf_fc_mission_manager_heartbeat->mission_pause_stage, leaf_fc_mission_manager_heartbeat->is_joystick_enabled, leaf_fc_mission_manager_heartbeat->mission_mode, leaf_fc_mission_manager_heartbeat->current_mission_id, leaf_fc_mission_manager_heartbeat->current_pos_trajectory_id, leaf_fc_mission_manager_heartbeat->current_ori_trajectory_id, leaf_fc_mission_manager_heartbeat->is_current_pos_trajectory_completed, leaf_fc_mission_manager_heartbeat->is_current_ori_trajectory_completed);
}

/**
 * @brief Encode a leaf_fc_mission_manager_heartbeat struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param leaf_fc_mission_manager_heartbeat C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_fc_mission_manager_heartbeat_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_leaf_fc_mission_manager_heartbeat_t* leaf_fc_mission_manager_heartbeat)
{
    return mavlink_msg_leaf_fc_mission_manager_heartbeat_pack_status(system_id, component_id, _status, msg,  leaf_fc_mission_manager_heartbeat->is_enabled, leaf_fc_mission_manager_heartbeat->is_petal_healthy, leaf_fc_mission_manager_heartbeat->is_mission_in_progress, leaf_fc_mission_manager_heartbeat->mission_pause_stage, leaf_fc_mission_manager_heartbeat->is_joystick_enabled, leaf_fc_mission_manager_heartbeat->mission_mode, leaf_fc_mission_manager_heartbeat->current_mission_id, leaf_fc_mission_manager_heartbeat->current_pos_trajectory_id, leaf_fc_mission_manager_heartbeat->current_ori_trajectory_id, leaf_fc_mission_manager_heartbeat->is_current_pos_trajectory_completed, leaf_fc_mission_manager_heartbeat->is_current_ori_trajectory_completed);
}

/**
 * @brief Send a leaf_fc_mission_manager_heartbeat message
 * @param chan MAVLink channel to send the message
 *
 * @param is_enabled  1 if the publisher is healthy, 0 otherwise
 * @param is_petal_healthy  1 if the publisher is healthy, 0 otherwise
 * @param is_mission_in_progress  1 if a mission is in_progress, 0 otherwise
 * @param mission_pause_stage  Current pause stage
 * @param is_joystick_enabled  1 if the joystick is enabled, 0 otherwise
 * @param mission_mode  The current mission mode
 * @param current_mission_id  The id of the current mission
 * @param current_pos_trajectory_id  The id of the current position trajectory
 * @param current_ori_trajectory_id  The id of the current orientation trajectory
 * @param is_current_pos_trajectory_completed  1 if the current position trajectory is completed, 0 otherwise
 * @param is_current_ori_trajectory_completed  1 if the current orientation trajectory is completed, 0 otherwise
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_leaf_fc_mission_manager_heartbeat_send(mavlink_channel_t chan, uint8_t is_enabled, uint8_t is_petal_healthy, uint8_t is_mission_in_progress, uint8_t mission_pause_stage, uint8_t is_joystick_enabled, uint8_t mission_mode, const char *current_mission_id, const char *current_pos_trajectory_id, const char *current_ori_trajectory_id, uint8_t is_current_pos_trajectory_completed, uint8_t is_current_ori_trajectory_completed)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_FC_MISSION_MANAGER_HEARTBEAT_LEN];
    _mav_put_uint8_t(buf, 0, is_enabled);
    _mav_put_uint8_t(buf, 1, is_petal_healthy);
    _mav_put_uint8_t(buf, 2, is_mission_in_progress);
    _mav_put_uint8_t(buf, 3, mission_pause_stage);
    _mav_put_uint8_t(buf, 4, is_joystick_enabled);
    _mav_put_uint8_t(buf, 5, mission_mode);
    _mav_put_uint8_t(buf, 198, is_current_pos_trajectory_completed);
    _mav_put_uint8_t(buf, 199, is_current_ori_trajectory_completed);
    _mav_put_char_array(buf, 6, current_mission_id, 64);
    _mav_put_char_array(buf, 70, current_pos_trajectory_id, 64);
    _mav_put_char_array(buf, 134, current_ori_trajectory_id, 64);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_FC_MISSION_MANAGER_HEARTBEAT, buf, MAVLINK_MSG_ID_LEAF_FC_MISSION_MANAGER_HEARTBEAT_MIN_LEN, MAVLINK_MSG_ID_LEAF_FC_MISSION_MANAGER_HEARTBEAT_LEN, MAVLINK_MSG_ID_LEAF_FC_MISSION_MANAGER_HEARTBEAT_CRC);
#else
    mavlink_leaf_fc_mission_manager_heartbeat_t packet;
    packet.is_enabled = is_enabled;
    packet.is_petal_healthy = is_petal_healthy;
    packet.is_mission_in_progress = is_mission_in_progress;
    packet.mission_pause_stage = mission_pause_stage;
    packet.is_joystick_enabled = is_joystick_enabled;
    packet.mission_mode = mission_mode;
    packet.is_current_pos_trajectory_completed = is_current_pos_trajectory_completed;
    packet.is_current_ori_trajectory_completed = is_current_ori_trajectory_completed;
    mav_array_assign_char(packet.current_mission_id, current_mission_id, 64);
    mav_array_assign_char(packet.current_pos_trajectory_id, current_pos_trajectory_id, 64);
    mav_array_assign_char(packet.current_ori_trajectory_id, current_ori_trajectory_id, 64);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_FC_MISSION_MANAGER_HEARTBEAT, (const char *)&packet, MAVLINK_MSG_ID_LEAF_FC_MISSION_MANAGER_HEARTBEAT_MIN_LEN, MAVLINK_MSG_ID_LEAF_FC_MISSION_MANAGER_HEARTBEAT_LEN, MAVLINK_MSG_ID_LEAF_FC_MISSION_MANAGER_HEARTBEAT_CRC);
#endif
}

/**
 * @brief Send a leaf_fc_mission_manager_heartbeat message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_leaf_fc_mission_manager_heartbeat_send_struct(mavlink_channel_t chan, const mavlink_leaf_fc_mission_manager_heartbeat_t* leaf_fc_mission_manager_heartbeat)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_leaf_fc_mission_manager_heartbeat_send(chan, leaf_fc_mission_manager_heartbeat->is_enabled, leaf_fc_mission_manager_heartbeat->is_petal_healthy, leaf_fc_mission_manager_heartbeat->is_mission_in_progress, leaf_fc_mission_manager_heartbeat->mission_pause_stage, leaf_fc_mission_manager_heartbeat->is_joystick_enabled, leaf_fc_mission_manager_heartbeat->mission_mode, leaf_fc_mission_manager_heartbeat->current_mission_id, leaf_fc_mission_manager_heartbeat->current_pos_trajectory_id, leaf_fc_mission_manager_heartbeat->current_ori_trajectory_id, leaf_fc_mission_manager_heartbeat->is_current_pos_trajectory_completed, leaf_fc_mission_manager_heartbeat->is_current_ori_trajectory_completed);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_FC_MISSION_MANAGER_HEARTBEAT, (const char *)leaf_fc_mission_manager_heartbeat, MAVLINK_MSG_ID_LEAF_FC_MISSION_MANAGER_HEARTBEAT_MIN_LEN, MAVLINK_MSG_ID_LEAF_FC_MISSION_MANAGER_HEARTBEAT_LEN, MAVLINK_MSG_ID_LEAF_FC_MISSION_MANAGER_HEARTBEAT_CRC);
#endif
}

#if MAVLINK_MSG_ID_LEAF_FC_MISSION_MANAGER_HEARTBEAT_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_leaf_fc_mission_manager_heartbeat_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t is_enabled, uint8_t is_petal_healthy, uint8_t is_mission_in_progress, uint8_t mission_pause_stage, uint8_t is_joystick_enabled, uint8_t mission_mode, const char *current_mission_id, const char *current_pos_trajectory_id, const char *current_ori_trajectory_id, uint8_t is_current_pos_trajectory_completed, uint8_t is_current_ori_trajectory_completed)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, is_enabled);
    _mav_put_uint8_t(buf, 1, is_petal_healthy);
    _mav_put_uint8_t(buf, 2, is_mission_in_progress);
    _mav_put_uint8_t(buf, 3, mission_pause_stage);
    _mav_put_uint8_t(buf, 4, is_joystick_enabled);
    _mav_put_uint8_t(buf, 5, mission_mode);
    _mav_put_uint8_t(buf, 198, is_current_pos_trajectory_completed);
    _mav_put_uint8_t(buf, 199, is_current_ori_trajectory_completed);
    _mav_put_char_array(buf, 6, current_mission_id, 64);
    _mav_put_char_array(buf, 70, current_pos_trajectory_id, 64);
    _mav_put_char_array(buf, 134, current_ori_trajectory_id, 64);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_FC_MISSION_MANAGER_HEARTBEAT, buf, MAVLINK_MSG_ID_LEAF_FC_MISSION_MANAGER_HEARTBEAT_MIN_LEN, MAVLINK_MSG_ID_LEAF_FC_MISSION_MANAGER_HEARTBEAT_LEN, MAVLINK_MSG_ID_LEAF_FC_MISSION_MANAGER_HEARTBEAT_CRC);
#else
    mavlink_leaf_fc_mission_manager_heartbeat_t *packet = (mavlink_leaf_fc_mission_manager_heartbeat_t *)msgbuf;
    packet->is_enabled = is_enabled;
    packet->is_petal_healthy = is_petal_healthy;
    packet->is_mission_in_progress = is_mission_in_progress;
    packet->mission_pause_stage = mission_pause_stage;
    packet->is_joystick_enabled = is_joystick_enabled;
    packet->mission_mode = mission_mode;
    packet->is_current_pos_trajectory_completed = is_current_pos_trajectory_completed;
    packet->is_current_ori_trajectory_completed = is_current_ori_trajectory_completed;
    mav_array_assign_char(packet->current_mission_id, current_mission_id, 64);
    mav_array_assign_char(packet->current_pos_trajectory_id, current_pos_trajectory_id, 64);
    mav_array_assign_char(packet->current_ori_trajectory_id, current_ori_trajectory_id, 64);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_FC_MISSION_MANAGER_HEARTBEAT, (const char *)packet, MAVLINK_MSG_ID_LEAF_FC_MISSION_MANAGER_HEARTBEAT_MIN_LEN, MAVLINK_MSG_ID_LEAF_FC_MISSION_MANAGER_HEARTBEAT_LEN, MAVLINK_MSG_ID_LEAF_FC_MISSION_MANAGER_HEARTBEAT_CRC);
#endif
}
#endif

#endif

// MESSAGE LEAF_FC_MISSION_MANAGER_HEARTBEAT UNPACKING


/**
 * @brief Get field is_enabled from leaf_fc_mission_manager_heartbeat message
 *
 * @return  1 if the publisher is healthy, 0 otherwise
 */
static inline uint8_t mavlink_msg_leaf_fc_mission_manager_heartbeat_get_is_enabled(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field is_petal_healthy from leaf_fc_mission_manager_heartbeat message
 *
 * @return  1 if the publisher is healthy, 0 otherwise
 */
static inline uint8_t mavlink_msg_leaf_fc_mission_manager_heartbeat_get_is_petal_healthy(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Get field is_mission_in_progress from leaf_fc_mission_manager_heartbeat message
 *
 * @return  1 if a mission is in_progress, 0 otherwise
 */
static inline uint8_t mavlink_msg_leaf_fc_mission_manager_heartbeat_get_is_mission_in_progress(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  2);
}

/**
 * @brief Get field mission_pause_stage from leaf_fc_mission_manager_heartbeat message
 *
 * @return  Current pause stage
 */
static inline uint8_t mavlink_msg_leaf_fc_mission_manager_heartbeat_get_mission_pause_stage(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  3);
}

/**
 * @brief Get field is_joystick_enabled from leaf_fc_mission_manager_heartbeat message
 *
 * @return  1 if the joystick is enabled, 0 otherwise
 */
static inline uint8_t mavlink_msg_leaf_fc_mission_manager_heartbeat_get_is_joystick_enabled(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  4);
}

/**
 * @brief Get field mission_mode from leaf_fc_mission_manager_heartbeat message
 *
 * @return  The current mission mode
 */
static inline uint8_t mavlink_msg_leaf_fc_mission_manager_heartbeat_get_mission_mode(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  5);
}

/**
 * @brief Get field current_mission_id from leaf_fc_mission_manager_heartbeat message
 *
 * @return  The id of the current mission
 */
static inline uint16_t mavlink_msg_leaf_fc_mission_manager_heartbeat_get_current_mission_id(const mavlink_message_t* msg, char *current_mission_id)
{
    return _MAV_RETURN_char_array(msg, current_mission_id, 64,  6);
}

/**
 * @brief Get field current_pos_trajectory_id from leaf_fc_mission_manager_heartbeat message
 *
 * @return  The id of the current position trajectory
 */
static inline uint16_t mavlink_msg_leaf_fc_mission_manager_heartbeat_get_current_pos_trajectory_id(const mavlink_message_t* msg, char *current_pos_trajectory_id)
{
    return _MAV_RETURN_char_array(msg, current_pos_trajectory_id, 64,  70);
}

/**
 * @brief Get field current_ori_trajectory_id from leaf_fc_mission_manager_heartbeat message
 *
 * @return  The id of the current orientation trajectory
 */
static inline uint16_t mavlink_msg_leaf_fc_mission_manager_heartbeat_get_current_ori_trajectory_id(const mavlink_message_t* msg, char *current_ori_trajectory_id)
{
    return _MAV_RETURN_char_array(msg, current_ori_trajectory_id, 64,  134);
}

/**
 * @brief Get field is_current_pos_trajectory_completed from leaf_fc_mission_manager_heartbeat message
 *
 * @return  1 if the current position trajectory is completed, 0 otherwise
 */
static inline uint8_t mavlink_msg_leaf_fc_mission_manager_heartbeat_get_is_current_pos_trajectory_completed(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  198);
}

/**
 * @brief Get field is_current_ori_trajectory_completed from leaf_fc_mission_manager_heartbeat message
 *
 * @return  1 if the current orientation trajectory is completed, 0 otherwise
 */
static inline uint8_t mavlink_msg_leaf_fc_mission_manager_heartbeat_get_is_current_ori_trajectory_completed(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  199);
}

/**
 * @brief Decode a leaf_fc_mission_manager_heartbeat message into a struct
 *
 * @param msg The message to decode
 * @param leaf_fc_mission_manager_heartbeat C-struct to decode the message contents into
 */
static inline void mavlink_msg_leaf_fc_mission_manager_heartbeat_decode(const mavlink_message_t* msg, mavlink_leaf_fc_mission_manager_heartbeat_t* leaf_fc_mission_manager_heartbeat)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    leaf_fc_mission_manager_heartbeat->is_enabled = mavlink_msg_leaf_fc_mission_manager_heartbeat_get_is_enabled(msg);
    leaf_fc_mission_manager_heartbeat->is_petal_healthy = mavlink_msg_leaf_fc_mission_manager_heartbeat_get_is_petal_healthy(msg);
    leaf_fc_mission_manager_heartbeat->is_mission_in_progress = mavlink_msg_leaf_fc_mission_manager_heartbeat_get_is_mission_in_progress(msg);
    leaf_fc_mission_manager_heartbeat->mission_pause_stage = mavlink_msg_leaf_fc_mission_manager_heartbeat_get_mission_pause_stage(msg);
    leaf_fc_mission_manager_heartbeat->is_joystick_enabled = mavlink_msg_leaf_fc_mission_manager_heartbeat_get_is_joystick_enabled(msg);
    leaf_fc_mission_manager_heartbeat->mission_mode = mavlink_msg_leaf_fc_mission_manager_heartbeat_get_mission_mode(msg);
    mavlink_msg_leaf_fc_mission_manager_heartbeat_get_current_mission_id(msg, leaf_fc_mission_manager_heartbeat->current_mission_id);
    mavlink_msg_leaf_fc_mission_manager_heartbeat_get_current_pos_trajectory_id(msg, leaf_fc_mission_manager_heartbeat->current_pos_trajectory_id);
    mavlink_msg_leaf_fc_mission_manager_heartbeat_get_current_ori_trajectory_id(msg, leaf_fc_mission_manager_heartbeat->current_ori_trajectory_id);
    leaf_fc_mission_manager_heartbeat->is_current_pos_trajectory_completed = mavlink_msg_leaf_fc_mission_manager_heartbeat_get_is_current_pos_trajectory_completed(msg);
    leaf_fc_mission_manager_heartbeat->is_current_ori_trajectory_completed = mavlink_msg_leaf_fc_mission_manager_heartbeat_get_is_current_ori_trajectory_completed(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_LEAF_FC_MISSION_MANAGER_HEARTBEAT_LEN? msg->len : MAVLINK_MSG_ID_LEAF_FC_MISSION_MANAGER_HEARTBEAT_LEN;
        memset(leaf_fc_mission_manager_heartbeat, 0, MAVLINK_MSG_ID_LEAF_FC_MISSION_MANAGER_HEARTBEAT_LEN);
    memcpy(leaf_fc_mission_manager_heartbeat, _MAV_PAYLOAD(msg), len);
#endif
}
