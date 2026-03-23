#pragma once
// MESSAGE LEAF_PETAL_MISSION_MANAGER_HEARTBEAT PACKING

#define MAVLINK_MSG_ID_LEAF_PETAL_MISSION_MANAGER_HEARTBEAT 77047


typedef struct __mavlink_leaf_petal_mission_manager_heartbeat_t {
 uint8_t is_healthy; /*<  1 if the publisher is healthy, 0 otherwise*/
 uint8_t is_mission_in_progress; /*<  1 if a mission is in_progress, 0 otherwise*/
 uint8_t mission_pause_stage; /*<  Current pause stage*/
 uint8_t is_joystick_enabled; /*<  1 if the joystick is enabled, 0 otherwise*/
 uint8_t last_mission_completion_state; /*<  The completion state of the last mission*/
 uint8_t queue_count; /*<  Number of missions currently in the queue*/
 uint8_t max_queue_size; /*<  Maximum queue size*/
 uint8_t mission_mode; /*<  The current mission mode*/
} mavlink_leaf_petal_mission_manager_heartbeat_t;

#define MAVLINK_MSG_ID_LEAF_PETAL_MISSION_MANAGER_HEARTBEAT_LEN 8
#define MAVLINK_MSG_ID_LEAF_PETAL_MISSION_MANAGER_HEARTBEAT_MIN_LEN 8
#define MAVLINK_MSG_ID_77047_LEN 8
#define MAVLINK_MSG_ID_77047_MIN_LEN 8

#define MAVLINK_MSG_ID_LEAF_PETAL_MISSION_MANAGER_HEARTBEAT_CRC 147
#define MAVLINK_MSG_ID_77047_CRC 147



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_LEAF_PETAL_MISSION_MANAGER_HEARTBEAT { \
    77047, \
    "LEAF_PETAL_MISSION_MANAGER_HEARTBEAT", \
    8, \
    {  { "is_healthy", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_leaf_petal_mission_manager_heartbeat_t, is_healthy) }, \
         { "is_mission_in_progress", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_leaf_petal_mission_manager_heartbeat_t, is_mission_in_progress) }, \
         { "mission_pause_stage", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_leaf_petal_mission_manager_heartbeat_t, mission_pause_stage) }, \
         { "is_joystick_enabled", NULL, MAVLINK_TYPE_UINT8_T, 0, 3, offsetof(mavlink_leaf_petal_mission_manager_heartbeat_t, is_joystick_enabled) }, \
         { "last_mission_completion_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_leaf_petal_mission_manager_heartbeat_t, last_mission_completion_state) }, \
         { "queue_count", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_leaf_petal_mission_manager_heartbeat_t, queue_count) }, \
         { "max_queue_size", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_leaf_petal_mission_manager_heartbeat_t, max_queue_size) }, \
         { "mission_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 7, offsetof(mavlink_leaf_petal_mission_manager_heartbeat_t, mission_mode) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_LEAF_PETAL_MISSION_MANAGER_HEARTBEAT { \
    "LEAF_PETAL_MISSION_MANAGER_HEARTBEAT", \
    8, \
    {  { "is_healthy", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_leaf_petal_mission_manager_heartbeat_t, is_healthy) }, \
         { "is_mission_in_progress", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_leaf_petal_mission_manager_heartbeat_t, is_mission_in_progress) }, \
         { "mission_pause_stage", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_leaf_petal_mission_manager_heartbeat_t, mission_pause_stage) }, \
         { "is_joystick_enabled", NULL, MAVLINK_TYPE_UINT8_T, 0, 3, offsetof(mavlink_leaf_petal_mission_manager_heartbeat_t, is_joystick_enabled) }, \
         { "last_mission_completion_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_leaf_petal_mission_manager_heartbeat_t, last_mission_completion_state) }, \
         { "queue_count", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_leaf_petal_mission_manager_heartbeat_t, queue_count) }, \
         { "max_queue_size", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_leaf_petal_mission_manager_heartbeat_t, max_queue_size) }, \
         { "mission_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 7, offsetof(mavlink_leaf_petal_mission_manager_heartbeat_t, mission_mode) }, \
         } \
}
#endif

/**
 * @brief Pack a leaf_petal_mission_manager_heartbeat message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param is_healthy  1 if the publisher is healthy, 0 otherwise
 * @param is_mission_in_progress  1 if a mission is in_progress, 0 otherwise
 * @param mission_pause_stage  Current pause stage
 * @param is_joystick_enabled  1 if the joystick is enabled, 0 otherwise
 * @param last_mission_completion_state  The completion state of the last mission
 * @param queue_count  Number of missions currently in the queue
 * @param max_queue_size  Maximum queue size
 * @param mission_mode  The current mission mode
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_petal_mission_manager_heartbeat_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t is_healthy, uint8_t is_mission_in_progress, uint8_t mission_pause_stage, uint8_t is_joystick_enabled, uint8_t last_mission_completion_state, uint8_t queue_count, uint8_t max_queue_size, uint8_t mission_mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_PETAL_MISSION_MANAGER_HEARTBEAT_LEN];
    _mav_put_uint8_t(buf, 0, is_healthy);
    _mav_put_uint8_t(buf, 1, is_mission_in_progress);
    _mav_put_uint8_t(buf, 2, mission_pause_stage);
    _mav_put_uint8_t(buf, 3, is_joystick_enabled);
    _mav_put_uint8_t(buf, 4, last_mission_completion_state);
    _mav_put_uint8_t(buf, 5, queue_count);
    _mav_put_uint8_t(buf, 6, max_queue_size);
    _mav_put_uint8_t(buf, 7, mission_mode);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_PETAL_MISSION_MANAGER_HEARTBEAT_LEN);
#else
    mavlink_leaf_petal_mission_manager_heartbeat_t packet;
    packet.is_healthy = is_healthy;
    packet.is_mission_in_progress = is_mission_in_progress;
    packet.mission_pause_stage = mission_pause_stage;
    packet.is_joystick_enabled = is_joystick_enabled;
    packet.last_mission_completion_state = last_mission_completion_state;
    packet.queue_count = queue_count;
    packet.max_queue_size = max_queue_size;
    packet.mission_mode = mission_mode;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_PETAL_MISSION_MANAGER_HEARTBEAT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_PETAL_MISSION_MANAGER_HEARTBEAT;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_LEAF_PETAL_MISSION_MANAGER_HEARTBEAT_MIN_LEN, MAVLINK_MSG_ID_LEAF_PETAL_MISSION_MANAGER_HEARTBEAT_LEN, MAVLINK_MSG_ID_LEAF_PETAL_MISSION_MANAGER_HEARTBEAT_CRC);
}

/**
 * @brief Pack a leaf_petal_mission_manager_heartbeat message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param is_healthy  1 if the publisher is healthy, 0 otherwise
 * @param is_mission_in_progress  1 if a mission is in_progress, 0 otherwise
 * @param mission_pause_stage  Current pause stage
 * @param is_joystick_enabled  1 if the joystick is enabled, 0 otherwise
 * @param last_mission_completion_state  The completion state of the last mission
 * @param queue_count  Number of missions currently in the queue
 * @param max_queue_size  Maximum queue size
 * @param mission_mode  The current mission mode
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_petal_mission_manager_heartbeat_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t is_healthy, uint8_t is_mission_in_progress, uint8_t mission_pause_stage, uint8_t is_joystick_enabled, uint8_t last_mission_completion_state, uint8_t queue_count, uint8_t max_queue_size, uint8_t mission_mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_PETAL_MISSION_MANAGER_HEARTBEAT_LEN];
    _mav_put_uint8_t(buf, 0, is_healthy);
    _mav_put_uint8_t(buf, 1, is_mission_in_progress);
    _mav_put_uint8_t(buf, 2, mission_pause_stage);
    _mav_put_uint8_t(buf, 3, is_joystick_enabled);
    _mav_put_uint8_t(buf, 4, last_mission_completion_state);
    _mav_put_uint8_t(buf, 5, queue_count);
    _mav_put_uint8_t(buf, 6, max_queue_size);
    _mav_put_uint8_t(buf, 7, mission_mode);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_PETAL_MISSION_MANAGER_HEARTBEAT_LEN);
#else
    mavlink_leaf_petal_mission_manager_heartbeat_t packet;
    packet.is_healthy = is_healthy;
    packet.is_mission_in_progress = is_mission_in_progress;
    packet.mission_pause_stage = mission_pause_stage;
    packet.is_joystick_enabled = is_joystick_enabled;
    packet.last_mission_completion_state = last_mission_completion_state;
    packet.queue_count = queue_count;
    packet.max_queue_size = max_queue_size;
    packet.mission_mode = mission_mode;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_PETAL_MISSION_MANAGER_HEARTBEAT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_PETAL_MISSION_MANAGER_HEARTBEAT;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_PETAL_MISSION_MANAGER_HEARTBEAT_MIN_LEN, MAVLINK_MSG_ID_LEAF_PETAL_MISSION_MANAGER_HEARTBEAT_LEN, MAVLINK_MSG_ID_LEAF_PETAL_MISSION_MANAGER_HEARTBEAT_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_PETAL_MISSION_MANAGER_HEARTBEAT_MIN_LEN, MAVLINK_MSG_ID_LEAF_PETAL_MISSION_MANAGER_HEARTBEAT_LEN);
#endif
}

/**
 * @brief Pack a leaf_petal_mission_manager_heartbeat message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param is_healthy  1 if the publisher is healthy, 0 otherwise
 * @param is_mission_in_progress  1 if a mission is in_progress, 0 otherwise
 * @param mission_pause_stage  Current pause stage
 * @param is_joystick_enabled  1 if the joystick is enabled, 0 otherwise
 * @param last_mission_completion_state  The completion state of the last mission
 * @param queue_count  Number of missions currently in the queue
 * @param max_queue_size  Maximum queue size
 * @param mission_mode  The current mission mode
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_petal_mission_manager_heartbeat_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t is_healthy,uint8_t is_mission_in_progress,uint8_t mission_pause_stage,uint8_t is_joystick_enabled,uint8_t last_mission_completion_state,uint8_t queue_count,uint8_t max_queue_size,uint8_t mission_mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_PETAL_MISSION_MANAGER_HEARTBEAT_LEN];
    _mav_put_uint8_t(buf, 0, is_healthy);
    _mav_put_uint8_t(buf, 1, is_mission_in_progress);
    _mav_put_uint8_t(buf, 2, mission_pause_stage);
    _mav_put_uint8_t(buf, 3, is_joystick_enabled);
    _mav_put_uint8_t(buf, 4, last_mission_completion_state);
    _mav_put_uint8_t(buf, 5, queue_count);
    _mav_put_uint8_t(buf, 6, max_queue_size);
    _mav_put_uint8_t(buf, 7, mission_mode);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_PETAL_MISSION_MANAGER_HEARTBEAT_LEN);
#else
    mavlink_leaf_petal_mission_manager_heartbeat_t packet;
    packet.is_healthy = is_healthy;
    packet.is_mission_in_progress = is_mission_in_progress;
    packet.mission_pause_stage = mission_pause_stage;
    packet.is_joystick_enabled = is_joystick_enabled;
    packet.last_mission_completion_state = last_mission_completion_state;
    packet.queue_count = queue_count;
    packet.max_queue_size = max_queue_size;
    packet.mission_mode = mission_mode;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_PETAL_MISSION_MANAGER_HEARTBEAT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_PETAL_MISSION_MANAGER_HEARTBEAT;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_LEAF_PETAL_MISSION_MANAGER_HEARTBEAT_MIN_LEN, MAVLINK_MSG_ID_LEAF_PETAL_MISSION_MANAGER_HEARTBEAT_LEN, MAVLINK_MSG_ID_LEAF_PETAL_MISSION_MANAGER_HEARTBEAT_CRC);
}

/**
 * @brief Encode a leaf_petal_mission_manager_heartbeat struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param leaf_petal_mission_manager_heartbeat C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_petal_mission_manager_heartbeat_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_leaf_petal_mission_manager_heartbeat_t* leaf_petal_mission_manager_heartbeat)
{
    return mavlink_msg_leaf_petal_mission_manager_heartbeat_pack(system_id, component_id, msg, leaf_petal_mission_manager_heartbeat->is_healthy, leaf_petal_mission_manager_heartbeat->is_mission_in_progress, leaf_petal_mission_manager_heartbeat->mission_pause_stage, leaf_petal_mission_manager_heartbeat->is_joystick_enabled, leaf_petal_mission_manager_heartbeat->last_mission_completion_state, leaf_petal_mission_manager_heartbeat->queue_count, leaf_petal_mission_manager_heartbeat->max_queue_size, leaf_petal_mission_manager_heartbeat->mission_mode);
}

/**
 * @brief Encode a leaf_petal_mission_manager_heartbeat struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param leaf_petal_mission_manager_heartbeat C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_petal_mission_manager_heartbeat_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_leaf_petal_mission_manager_heartbeat_t* leaf_petal_mission_manager_heartbeat)
{
    return mavlink_msg_leaf_petal_mission_manager_heartbeat_pack_chan(system_id, component_id, chan, msg, leaf_petal_mission_manager_heartbeat->is_healthy, leaf_petal_mission_manager_heartbeat->is_mission_in_progress, leaf_petal_mission_manager_heartbeat->mission_pause_stage, leaf_petal_mission_manager_heartbeat->is_joystick_enabled, leaf_petal_mission_manager_heartbeat->last_mission_completion_state, leaf_petal_mission_manager_heartbeat->queue_count, leaf_petal_mission_manager_heartbeat->max_queue_size, leaf_petal_mission_manager_heartbeat->mission_mode);
}

/**
 * @brief Encode a leaf_petal_mission_manager_heartbeat struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param leaf_petal_mission_manager_heartbeat C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_petal_mission_manager_heartbeat_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_leaf_petal_mission_manager_heartbeat_t* leaf_petal_mission_manager_heartbeat)
{
    return mavlink_msg_leaf_petal_mission_manager_heartbeat_pack_status(system_id, component_id, _status, msg,  leaf_petal_mission_manager_heartbeat->is_healthy, leaf_petal_mission_manager_heartbeat->is_mission_in_progress, leaf_petal_mission_manager_heartbeat->mission_pause_stage, leaf_petal_mission_manager_heartbeat->is_joystick_enabled, leaf_petal_mission_manager_heartbeat->last_mission_completion_state, leaf_petal_mission_manager_heartbeat->queue_count, leaf_petal_mission_manager_heartbeat->max_queue_size, leaf_petal_mission_manager_heartbeat->mission_mode);
}

/**
 * @brief Send a leaf_petal_mission_manager_heartbeat message
 * @param chan MAVLink channel to send the message
 *
 * @param is_healthy  1 if the publisher is healthy, 0 otherwise
 * @param is_mission_in_progress  1 if a mission is in_progress, 0 otherwise
 * @param mission_pause_stage  Current pause stage
 * @param is_joystick_enabled  1 if the joystick is enabled, 0 otherwise
 * @param last_mission_completion_state  The completion state of the last mission
 * @param queue_count  Number of missions currently in the queue
 * @param max_queue_size  Maximum queue size
 * @param mission_mode  The current mission mode
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_leaf_petal_mission_manager_heartbeat_send(mavlink_channel_t chan, uint8_t is_healthy, uint8_t is_mission_in_progress, uint8_t mission_pause_stage, uint8_t is_joystick_enabled, uint8_t last_mission_completion_state, uint8_t queue_count, uint8_t max_queue_size, uint8_t mission_mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_PETAL_MISSION_MANAGER_HEARTBEAT_LEN];
    _mav_put_uint8_t(buf, 0, is_healthy);
    _mav_put_uint8_t(buf, 1, is_mission_in_progress);
    _mav_put_uint8_t(buf, 2, mission_pause_stage);
    _mav_put_uint8_t(buf, 3, is_joystick_enabled);
    _mav_put_uint8_t(buf, 4, last_mission_completion_state);
    _mav_put_uint8_t(buf, 5, queue_count);
    _mav_put_uint8_t(buf, 6, max_queue_size);
    _mav_put_uint8_t(buf, 7, mission_mode);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_PETAL_MISSION_MANAGER_HEARTBEAT, buf, MAVLINK_MSG_ID_LEAF_PETAL_MISSION_MANAGER_HEARTBEAT_MIN_LEN, MAVLINK_MSG_ID_LEAF_PETAL_MISSION_MANAGER_HEARTBEAT_LEN, MAVLINK_MSG_ID_LEAF_PETAL_MISSION_MANAGER_HEARTBEAT_CRC);
#else
    mavlink_leaf_petal_mission_manager_heartbeat_t packet;
    packet.is_healthy = is_healthy;
    packet.is_mission_in_progress = is_mission_in_progress;
    packet.mission_pause_stage = mission_pause_stage;
    packet.is_joystick_enabled = is_joystick_enabled;
    packet.last_mission_completion_state = last_mission_completion_state;
    packet.queue_count = queue_count;
    packet.max_queue_size = max_queue_size;
    packet.mission_mode = mission_mode;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_PETAL_MISSION_MANAGER_HEARTBEAT, (const char *)&packet, MAVLINK_MSG_ID_LEAF_PETAL_MISSION_MANAGER_HEARTBEAT_MIN_LEN, MAVLINK_MSG_ID_LEAF_PETAL_MISSION_MANAGER_HEARTBEAT_LEN, MAVLINK_MSG_ID_LEAF_PETAL_MISSION_MANAGER_HEARTBEAT_CRC);
#endif
}

/**
 * @brief Send a leaf_petal_mission_manager_heartbeat message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_leaf_petal_mission_manager_heartbeat_send_struct(mavlink_channel_t chan, const mavlink_leaf_petal_mission_manager_heartbeat_t* leaf_petal_mission_manager_heartbeat)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_leaf_petal_mission_manager_heartbeat_send(chan, leaf_petal_mission_manager_heartbeat->is_healthy, leaf_petal_mission_manager_heartbeat->is_mission_in_progress, leaf_petal_mission_manager_heartbeat->mission_pause_stage, leaf_petal_mission_manager_heartbeat->is_joystick_enabled, leaf_petal_mission_manager_heartbeat->last_mission_completion_state, leaf_petal_mission_manager_heartbeat->queue_count, leaf_petal_mission_manager_heartbeat->max_queue_size, leaf_petal_mission_manager_heartbeat->mission_mode);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_PETAL_MISSION_MANAGER_HEARTBEAT, (const char *)leaf_petal_mission_manager_heartbeat, MAVLINK_MSG_ID_LEAF_PETAL_MISSION_MANAGER_HEARTBEAT_MIN_LEN, MAVLINK_MSG_ID_LEAF_PETAL_MISSION_MANAGER_HEARTBEAT_LEN, MAVLINK_MSG_ID_LEAF_PETAL_MISSION_MANAGER_HEARTBEAT_CRC);
#endif
}

#if MAVLINK_MSG_ID_LEAF_PETAL_MISSION_MANAGER_HEARTBEAT_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_leaf_petal_mission_manager_heartbeat_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t is_healthy, uint8_t is_mission_in_progress, uint8_t mission_pause_stage, uint8_t is_joystick_enabled, uint8_t last_mission_completion_state, uint8_t queue_count, uint8_t max_queue_size, uint8_t mission_mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, is_healthy);
    _mav_put_uint8_t(buf, 1, is_mission_in_progress);
    _mav_put_uint8_t(buf, 2, mission_pause_stage);
    _mav_put_uint8_t(buf, 3, is_joystick_enabled);
    _mav_put_uint8_t(buf, 4, last_mission_completion_state);
    _mav_put_uint8_t(buf, 5, queue_count);
    _mav_put_uint8_t(buf, 6, max_queue_size);
    _mav_put_uint8_t(buf, 7, mission_mode);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_PETAL_MISSION_MANAGER_HEARTBEAT, buf, MAVLINK_MSG_ID_LEAF_PETAL_MISSION_MANAGER_HEARTBEAT_MIN_LEN, MAVLINK_MSG_ID_LEAF_PETAL_MISSION_MANAGER_HEARTBEAT_LEN, MAVLINK_MSG_ID_LEAF_PETAL_MISSION_MANAGER_HEARTBEAT_CRC);
#else
    mavlink_leaf_petal_mission_manager_heartbeat_t *packet = (mavlink_leaf_petal_mission_manager_heartbeat_t *)msgbuf;
    packet->is_healthy = is_healthy;
    packet->is_mission_in_progress = is_mission_in_progress;
    packet->mission_pause_stage = mission_pause_stage;
    packet->is_joystick_enabled = is_joystick_enabled;
    packet->last_mission_completion_state = last_mission_completion_state;
    packet->queue_count = queue_count;
    packet->max_queue_size = max_queue_size;
    packet->mission_mode = mission_mode;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_PETAL_MISSION_MANAGER_HEARTBEAT, (const char *)packet, MAVLINK_MSG_ID_LEAF_PETAL_MISSION_MANAGER_HEARTBEAT_MIN_LEN, MAVLINK_MSG_ID_LEAF_PETAL_MISSION_MANAGER_HEARTBEAT_LEN, MAVLINK_MSG_ID_LEAF_PETAL_MISSION_MANAGER_HEARTBEAT_CRC);
#endif
}
#endif

#endif

// MESSAGE LEAF_PETAL_MISSION_MANAGER_HEARTBEAT UNPACKING


/**
 * @brief Get field is_healthy from leaf_petal_mission_manager_heartbeat message
 *
 * @return  1 if the publisher is healthy, 0 otherwise
 */
static inline uint8_t mavlink_msg_leaf_petal_mission_manager_heartbeat_get_is_healthy(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field is_mission_in_progress from leaf_petal_mission_manager_heartbeat message
 *
 * @return  1 if a mission is in_progress, 0 otherwise
 */
static inline uint8_t mavlink_msg_leaf_petal_mission_manager_heartbeat_get_is_mission_in_progress(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Get field mission_pause_stage from leaf_petal_mission_manager_heartbeat message
 *
 * @return  Current pause stage
 */
static inline uint8_t mavlink_msg_leaf_petal_mission_manager_heartbeat_get_mission_pause_stage(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  2);
}

/**
 * @brief Get field is_joystick_enabled from leaf_petal_mission_manager_heartbeat message
 *
 * @return  1 if the joystick is enabled, 0 otherwise
 */
static inline uint8_t mavlink_msg_leaf_petal_mission_manager_heartbeat_get_is_joystick_enabled(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  3);
}

/**
 * @brief Get field last_mission_completion_state from leaf_petal_mission_manager_heartbeat message
 *
 * @return  The completion state of the last mission
 */
static inline uint8_t mavlink_msg_leaf_petal_mission_manager_heartbeat_get_last_mission_completion_state(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  4);
}

/**
 * @brief Get field queue_count from leaf_petal_mission_manager_heartbeat message
 *
 * @return  Number of missions currently in the queue
 */
static inline uint8_t mavlink_msg_leaf_petal_mission_manager_heartbeat_get_queue_count(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  5);
}

/**
 * @brief Get field max_queue_size from leaf_petal_mission_manager_heartbeat message
 *
 * @return  Maximum queue size
 */
static inline uint8_t mavlink_msg_leaf_petal_mission_manager_heartbeat_get_max_queue_size(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  6);
}

/**
 * @brief Get field mission_mode from leaf_petal_mission_manager_heartbeat message
 *
 * @return  The current mission mode
 */
static inline uint8_t mavlink_msg_leaf_petal_mission_manager_heartbeat_get_mission_mode(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  7);
}

/**
 * @brief Decode a leaf_petal_mission_manager_heartbeat message into a struct
 *
 * @param msg The message to decode
 * @param leaf_petal_mission_manager_heartbeat C-struct to decode the message contents into
 */
static inline void mavlink_msg_leaf_petal_mission_manager_heartbeat_decode(const mavlink_message_t* msg, mavlink_leaf_petal_mission_manager_heartbeat_t* leaf_petal_mission_manager_heartbeat)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    leaf_petal_mission_manager_heartbeat->is_healthy = mavlink_msg_leaf_petal_mission_manager_heartbeat_get_is_healthy(msg);
    leaf_petal_mission_manager_heartbeat->is_mission_in_progress = mavlink_msg_leaf_petal_mission_manager_heartbeat_get_is_mission_in_progress(msg);
    leaf_petal_mission_manager_heartbeat->mission_pause_stage = mavlink_msg_leaf_petal_mission_manager_heartbeat_get_mission_pause_stage(msg);
    leaf_petal_mission_manager_heartbeat->is_joystick_enabled = mavlink_msg_leaf_petal_mission_manager_heartbeat_get_is_joystick_enabled(msg);
    leaf_petal_mission_manager_heartbeat->last_mission_completion_state = mavlink_msg_leaf_petal_mission_manager_heartbeat_get_last_mission_completion_state(msg);
    leaf_petal_mission_manager_heartbeat->queue_count = mavlink_msg_leaf_petal_mission_manager_heartbeat_get_queue_count(msg);
    leaf_petal_mission_manager_heartbeat->max_queue_size = mavlink_msg_leaf_petal_mission_manager_heartbeat_get_max_queue_size(msg);
    leaf_petal_mission_manager_heartbeat->mission_mode = mavlink_msg_leaf_petal_mission_manager_heartbeat_get_mission_mode(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_LEAF_PETAL_MISSION_MANAGER_HEARTBEAT_LEN? msg->len : MAVLINK_MSG_ID_LEAF_PETAL_MISSION_MANAGER_HEARTBEAT_LEN;
        memset(leaf_petal_mission_manager_heartbeat, 0, MAVLINK_MSG_ID_LEAF_PETAL_MISSION_MANAGER_HEARTBEAT_LEN);
    memcpy(leaf_petal_mission_manager_heartbeat, _MAV_PAYLOAD(msg), len);
#endif
}
