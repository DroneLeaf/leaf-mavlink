#pragma once
// MESSAGE LEAF_MISSION_HEARTBEAT_V2 PACKING

#define MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_V2 77046


typedef struct __mavlink_leaf_mission_heartbeat_v2_t {
 uint8_t LeafFC_mission_status; /*<  LeafFC mission status*/
 uint8_t joystick_mode; /*<  The joystick mode*/
 char mission_id[64]; /*<  The id of the mission*/
 uint8_t queue_count; /*<  The number of missions in the queue*/
 uint8_t predefined_actions_status; /*<  The predefined actions status*/
 uint8_t SDK_status; /*<  SDK mission status*/
 char mission_name[64]; /*<  The name of the mission*/
 uint8_t step_type; /*<  The number of missions in the queue*/
 char step_name[64]; /*<  The name of the current step*/
} mavlink_leaf_mission_heartbeat_v2_t;

#define MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_V2_LEN 198
#define MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_V2_MIN_LEN 198
#define MAVLINK_MSG_ID_77046_LEN 198
#define MAVLINK_MSG_ID_77046_MIN_LEN 198

#define MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_V2_CRC 110
#define MAVLINK_MSG_ID_77046_CRC 110

#define MAVLINK_MSG_LEAF_MISSION_HEARTBEAT_V2_FIELD_MISSION_ID_LEN 64
#define MAVLINK_MSG_LEAF_MISSION_HEARTBEAT_V2_FIELD_MISSION_NAME_LEN 64
#define MAVLINK_MSG_LEAF_MISSION_HEARTBEAT_V2_FIELD_STEP_NAME_LEN 64

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_LEAF_MISSION_HEARTBEAT_V2 { \
    77046, \
    "LEAF_MISSION_HEARTBEAT_V2", \
    9, \
    {  { "LeafFC_mission_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_leaf_mission_heartbeat_v2_t, LeafFC_mission_status) }, \
         { "joystick_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_leaf_mission_heartbeat_v2_t, joystick_mode) }, \
         { "mission_id", NULL, MAVLINK_TYPE_CHAR, 64, 2, offsetof(mavlink_leaf_mission_heartbeat_v2_t, mission_id) }, \
         { "queue_count", NULL, MAVLINK_TYPE_UINT8_T, 0, 66, offsetof(mavlink_leaf_mission_heartbeat_v2_t, queue_count) }, \
         { "predefined_actions_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 67, offsetof(mavlink_leaf_mission_heartbeat_v2_t, predefined_actions_status) }, \
         { "SDK_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 68, offsetof(mavlink_leaf_mission_heartbeat_v2_t, SDK_status) }, \
         { "mission_name", NULL, MAVLINK_TYPE_CHAR, 64, 69, offsetof(mavlink_leaf_mission_heartbeat_v2_t, mission_name) }, \
         { "step_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 133, offsetof(mavlink_leaf_mission_heartbeat_v2_t, step_type) }, \
         { "step_name", NULL, MAVLINK_TYPE_CHAR, 64, 134, offsetof(mavlink_leaf_mission_heartbeat_v2_t, step_name) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_LEAF_MISSION_HEARTBEAT_V2 { \
    "LEAF_MISSION_HEARTBEAT_V2", \
    9, \
    {  { "LeafFC_mission_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_leaf_mission_heartbeat_v2_t, LeafFC_mission_status) }, \
         { "joystick_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_leaf_mission_heartbeat_v2_t, joystick_mode) }, \
         { "mission_id", NULL, MAVLINK_TYPE_CHAR, 64, 2, offsetof(mavlink_leaf_mission_heartbeat_v2_t, mission_id) }, \
         { "queue_count", NULL, MAVLINK_TYPE_UINT8_T, 0, 66, offsetof(mavlink_leaf_mission_heartbeat_v2_t, queue_count) }, \
         { "predefined_actions_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 67, offsetof(mavlink_leaf_mission_heartbeat_v2_t, predefined_actions_status) }, \
         { "SDK_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 68, offsetof(mavlink_leaf_mission_heartbeat_v2_t, SDK_status) }, \
         { "mission_name", NULL, MAVLINK_TYPE_CHAR, 64, 69, offsetof(mavlink_leaf_mission_heartbeat_v2_t, mission_name) }, \
         { "step_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 133, offsetof(mavlink_leaf_mission_heartbeat_v2_t, step_type) }, \
         { "step_name", NULL, MAVLINK_TYPE_CHAR, 64, 134, offsetof(mavlink_leaf_mission_heartbeat_v2_t, step_name) }, \
         } \
}
#endif

/**
 * @brief Pack a leaf_mission_heartbeat_v2 message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param LeafFC_mission_status  LeafFC mission status
 * @param joystick_mode  The joystick mode
 * @param mission_id  The id of the mission
 * @param queue_count  The number of missions in the queue
 * @param predefined_actions_status  The predefined actions status
 * @param SDK_status  SDK mission status
 * @param mission_name  The name of the mission
 * @param step_type  The number of missions in the queue
 * @param step_name  The name of the current step
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_mission_heartbeat_v2_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t LeafFC_mission_status, uint8_t joystick_mode, const char *mission_id, uint8_t queue_count, uint8_t predefined_actions_status, uint8_t SDK_status, const char *mission_name, uint8_t step_type, const char *step_name)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_V2_LEN];
    _mav_put_uint8_t(buf, 0, LeafFC_mission_status);
    _mav_put_uint8_t(buf, 1, joystick_mode);
    _mav_put_uint8_t(buf, 66, queue_count);
    _mav_put_uint8_t(buf, 67, predefined_actions_status);
    _mav_put_uint8_t(buf, 68, SDK_status);
    _mav_put_uint8_t(buf, 133, step_type);
    _mav_put_char_array(buf, 2, mission_id, 64);
    _mav_put_char_array(buf, 69, mission_name, 64);
    _mav_put_char_array(buf, 134, step_name, 64);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_V2_LEN);
#else
    mavlink_leaf_mission_heartbeat_v2_t packet;
    packet.LeafFC_mission_status = LeafFC_mission_status;
    packet.joystick_mode = joystick_mode;
    packet.queue_count = queue_count;
    packet.predefined_actions_status = predefined_actions_status;
    packet.SDK_status = SDK_status;
    packet.step_type = step_type;
    mav_array_assign_char(packet.mission_id, mission_id, 64);
    mav_array_assign_char(packet.mission_name, mission_name, 64);
    mav_array_assign_char(packet.step_name, step_name, 64);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_V2_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_V2;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_V2_MIN_LEN, MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_V2_LEN, MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_V2_CRC);
}

/**
 * @brief Pack a leaf_mission_heartbeat_v2 message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param LeafFC_mission_status  LeafFC mission status
 * @param joystick_mode  The joystick mode
 * @param mission_id  The id of the mission
 * @param queue_count  The number of missions in the queue
 * @param predefined_actions_status  The predefined actions status
 * @param SDK_status  SDK mission status
 * @param mission_name  The name of the mission
 * @param step_type  The number of missions in the queue
 * @param step_name  The name of the current step
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_mission_heartbeat_v2_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t LeafFC_mission_status, uint8_t joystick_mode, const char *mission_id, uint8_t queue_count, uint8_t predefined_actions_status, uint8_t SDK_status, const char *mission_name, uint8_t step_type, const char *step_name)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_V2_LEN];
    _mav_put_uint8_t(buf, 0, LeafFC_mission_status);
    _mav_put_uint8_t(buf, 1, joystick_mode);
    _mav_put_uint8_t(buf, 66, queue_count);
    _mav_put_uint8_t(buf, 67, predefined_actions_status);
    _mav_put_uint8_t(buf, 68, SDK_status);
    _mav_put_uint8_t(buf, 133, step_type);
    _mav_put_char_array(buf, 2, mission_id, 64);
    _mav_put_char_array(buf, 69, mission_name, 64);
    _mav_put_char_array(buf, 134, step_name, 64);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_V2_LEN);
#else
    mavlink_leaf_mission_heartbeat_v2_t packet;
    packet.LeafFC_mission_status = LeafFC_mission_status;
    packet.joystick_mode = joystick_mode;
    packet.queue_count = queue_count;
    packet.predefined_actions_status = predefined_actions_status;
    packet.SDK_status = SDK_status;
    packet.step_type = step_type;
    mav_array_memcpy(packet.mission_id, mission_id, sizeof(char)*64);
    mav_array_memcpy(packet.mission_name, mission_name, sizeof(char)*64);
    mav_array_memcpy(packet.step_name, step_name, sizeof(char)*64);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_V2_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_V2;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_V2_MIN_LEN, MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_V2_LEN, MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_V2_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_V2_MIN_LEN, MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_V2_LEN);
#endif
}

/**
 * @brief Pack a leaf_mission_heartbeat_v2 message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param LeafFC_mission_status  LeafFC mission status
 * @param joystick_mode  The joystick mode
 * @param mission_id  The id of the mission
 * @param queue_count  The number of missions in the queue
 * @param predefined_actions_status  The predefined actions status
 * @param SDK_status  SDK mission status
 * @param mission_name  The name of the mission
 * @param step_type  The number of missions in the queue
 * @param step_name  The name of the current step
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_mission_heartbeat_v2_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t LeafFC_mission_status,uint8_t joystick_mode,const char *mission_id,uint8_t queue_count,uint8_t predefined_actions_status,uint8_t SDK_status,const char *mission_name,uint8_t step_type,const char *step_name)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_V2_LEN];
    _mav_put_uint8_t(buf, 0, LeafFC_mission_status);
    _mav_put_uint8_t(buf, 1, joystick_mode);
    _mav_put_uint8_t(buf, 66, queue_count);
    _mav_put_uint8_t(buf, 67, predefined_actions_status);
    _mav_put_uint8_t(buf, 68, SDK_status);
    _mav_put_uint8_t(buf, 133, step_type);
    _mav_put_char_array(buf, 2, mission_id, 64);
    _mav_put_char_array(buf, 69, mission_name, 64);
    _mav_put_char_array(buf, 134, step_name, 64);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_V2_LEN);
#else
    mavlink_leaf_mission_heartbeat_v2_t packet;
    packet.LeafFC_mission_status = LeafFC_mission_status;
    packet.joystick_mode = joystick_mode;
    packet.queue_count = queue_count;
    packet.predefined_actions_status = predefined_actions_status;
    packet.SDK_status = SDK_status;
    packet.step_type = step_type;
    mav_array_assign_char(packet.mission_id, mission_id, 64);
    mav_array_assign_char(packet.mission_name, mission_name, 64);
    mav_array_assign_char(packet.step_name, step_name, 64);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_V2_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_V2;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_V2_MIN_LEN, MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_V2_LEN, MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_V2_CRC);
}

/**
 * @brief Encode a leaf_mission_heartbeat_v2 struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param leaf_mission_heartbeat_v2 C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_mission_heartbeat_v2_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_leaf_mission_heartbeat_v2_t* leaf_mission_heartbeat_v2)
{
    return mavlink_msg_leaf_mission_heartbeat_v2_pack(system_id, component_id, msg, leaf_mission_heartbeat_v2->LeafFC_mission_status, leaf_mission_heartbeat_v2->joystick_mode, leaf_mission_heartbeat_v2->mission_id, leaf_mission_heartbeat_v2->queue_count, leaf_mission_heartbeat_v2->predefined_actions_status, leaf_mission_heartbeat_v2->SDK_status, leaf_mission_heartbeat_v2->mission_name, leaf_mission_heartbeat_v2->step_type, leaf_mission_heartbeat_v2->step_name);
}

/**
 * @brief Encode a leaf_mission_heartbeat_v2 struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param leaf_mission_heartbeat_v2 C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_mission_heartbeat_v2_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_leaf_mission_heartbeat_v2_t* leaf_mission_heartbeat_v2)
{
    return mavlink_msg_leaf_mission_heartbeat_v2_pack_chan(system_id, component_id, chan, msg, leaf_mission_heartbeat_v2->LeafFC_mission_status, leaf_mission_heartbeat_v2->joystick_mode, leaf_mission_heartbeat_v2->mission_id, leaf_mission_heartbeat_v2->queue_count, leaf_mission_heartbeat_v2->predefined_actions_status, leaf_mission_heartbeat_v2->SDK_status, leaf_mission_heartbeat_v2->mission_name, leaf_mission_heartbeat_v2->step_type, leaf_mission_heartbeat_v2->step_name);
}

/**
 * @brief Encode a leaf_mission_heartbeat_v2 struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param leaf_mission_heartbeat_v2 C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_mission_heartbeat_v2_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_leaf_mission_heartbeat_v2_t* leaf_mission_heartbeat_v2)
{
    return mavlink_msg_leaf_mission_heartbeat_v2_pack_status(system_id, component_id, _status, msg,  leaf_mission_heartbeat_v2->LeafFC_mission_status, leaf_mission_heartbeat_v2->joystick_mode, leaf_mission_heartbeat_v2->mission_id, leaf_mission_heartbeat_v2->queue_count, leaf_mission_heartbeat_v2->predefined_actions_status, leaf_mission_heartbeat_v2->SDK_status, leaf_mission_heartbeat_v2->mission_name, leaf_mission_heartbeat_v2->step_type, leaf_mission_heartbeat_v2->step_name);
}

/**
 * @brief Send a leaf_mission_heartbeat_v2 message
 * @param chan MAVLink channel to send the message
 *
 * @param LeafFC_mission_status  LeafFC mission status
 * @param joystick_mode  The joystick mode
 * @param mission_id  The id of the mission
 * @param queue_count  The number of missions in the queue
 * @param predefined_actions_status  The predefined actions status
 * @param SDK_status  SDK mission status
 * @param mission_name  The name of the mission
 * @param step_type  The number of missions in the queue
 * @param step_name  The name of the current step
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_leaf_mission_heartbeat_v2_send(mavlink_channel_t chan, uint8_t LeafFC_mission_status, uint8_t joystick_mode, const char *mission_id, uint8_t queue_count, uint8_t predefined_actions_status, uint8_t SDK_status, const char *mission_name, uint8_t step_type, const char *step_name)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_V2_LEN];
    _mav_put_uint8_t(buf, 0, LeafFC_mission_status);
    _mav_put_uint8_t(buf, 1, joystick_mode);
    _mav_put_uint8_t(buf, 66, queue_count);
    _mav_put_uint8_t(buf, 67, predefined_actions_status);
    _mav_put_uint8_t(buf, 68, SDK_status);
    _mav_put_uint8_t(buf, 133, step_type);
    _mav_put_char_array(buf, 2, mission_id, 64);
    _mav_put_char_array(buf, 69, mission_name, 64);
    _mav_put_char_array(buf, 134, step_name, 64);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_V2, buf, MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_V2_MIN_LEN, MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_V2_LEN, MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_V2_CRC);
#else
    mavlink_leaf_mission_heartbeat_v2_t packet;
    packet.LeafFC_mission_status = LeafFC_mission_status;
    packet.joystick_mode = joystick_mode;
    packet.queue_count = queue_count;
    packet.predefined_actions_status = predefined_actions_status;
    packet.SDK_status = SDK_status;
    packet.step_type = step_type;
    mav_array_assign_char(packet.mission_id, mission_id, 64);
    mav_array_assign_char(packet.mission_name, mission_name, 64);
    mav_array_assign_char(packet.step_name, step_name, 64);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_V2, (const char *)&packet, MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_V2_MIN_LEN, MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_V2_LEN, MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_V2_CRC);
#endif
}

/**
 * @brief Send a leaf_mission_heartbeat_v2 message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_leaf_mission_heartbeat_v2_send_struct(mavlink_channel_t chan, const mavlink_leaf_mission_heartbeat_v2_t* leaf_mission_heartbeat_v2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_leaf_mission_heartbeat_v2_send(chan, leaf_mission_heartbeat_v2->LeafFC_mission_status, leaf_mission_heartbeat_v2->joystick_mode, leaf_mission_heartbeat_v2->mission_id, leaf_mission_heartbeat_v2->queue_count, leaf_mission_heartbeat_v2->predefined_actions_status, leaf_mission_heartbeat_v2->SDK_status, leaf_mission_heartbeat_v2->mission_name, leaf_mission_heartbeat_v2->step_type, leaf_mission_heartbeat_v2->step_name);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_V2, (const char *)leaf_mission_heartbeat_v2, MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_V2_MIN_LEN, MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_V2_LEN, MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_V2_CRC);
#endif
}

#if MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_V2_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_leaf_mission_heartbeat_v2_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t LeafFC_mission_status, uint8_t joystick_mode, const char *mission_id, uint8_t queue_count, uint8_t predefined_actions_status, uint8_t SDK_status, const char *mission_name, uint8_t step_type, const char *step_name)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, LeafFC_mission_status);
    _mav_put_uint8_t(buf, 1, joystick_mode);
    _mav_put_uint8_t(buf, 66, queue_count);
    _mav_put_uint8_t(buf, 67, predefined_actions_status);
    _mav_put_uint8_t(buf, 68, SDK_status);
    _mav_put_uint8_t(buf, 133, step_type);
    _mav_put_char_array(buf, 2, mission_id, 64);
    _mav_put_char_array(buf, 69, mission_name, 64);
    _mav_put_char_array(buf, 134, step_name, 64);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_V2, buf, MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_V2_MIN_LEN, MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_V2_LEN, MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_V2_CRC);
#else
    mavlink_leaf_mission_heartbeat_v2_t *packet = (mavlink_leaf_mission_heartbeat_v2_t *)msgbuf;
    packet->LeafFC_mission_status = LeafFC_mission_status;
    packet->joystick_mode = joystick_mode;
    packet->queue_count = queue_count;
    packet->predefined_actions_status = predefined_actions_status;
    packet->SDK_status = SDK_status;
    packet->step_type = step_type;
    mav_array_assign_char(packet->mission_id, mission_id, 64);
    mav_array_assign_char(packet->mission_name, mission_name, 64);
    mav_array_assign_char(packet->step_name, step_name, 64);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_V2, (const char *)packet, MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_V2_MIN_LEN, MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_V2_LEN, MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_V2_CRC);
#endif
}
#endif

#endif

// MESSAGE LEAF_MISSION_HEARTBEAT_V2 UNPACKING


/**
 * @brief Get field LeafFC_mission_status from leaf_mission_heartbeat_v2 message
 *
 * @return  LeafFC mission status
 */
static inline uint8_t mavlink_msg_leaf_mission_heartbeat_v2_get_LeafFC_mission_status(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field joystick_mode from leaf_mission_heartbeat_v2 message
 *
 * @return  The joystick mode
 */
static inline uint8_t mavlink_msg_leaf_mission_heartbeat_v2_get_joystick_mode(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Get field mission_id from leaf_mission_heartbeat_v2 message
 *
 * @return  The id of the mission
 */
static inline uint16_t mavlink_msg_leaf_mission_heartbeat_v2_get_mission_id(const mavlink_message_t* msg, char *mission_id)
{
    return _MAV_RETURN_char_array(msg, mission_id, 64,  2);
}

/**
 * @brief Get field queue_count from leaf_mission_heartbeat_v2 message
 *
 * @return  The number of missions in the queue
 */
static inline uint8_t mavlink_msg_leaf_mission_heartbeat_v2_get_queue_count(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  66);
}

/**
 * @brief Get field predefined_actions_status from leaf_mission_heartbeat_v2 message
 *
 * @return  The predefined actions status
 */
static inline uint8_t mavlink_msg_leaf_mission_heartbeat_v2_get_predefined_actions_status(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  67);
}

/**
 * @brief Get field SDK_status from leaf_mission_heartbeat_v2 message
 *
 * @return  SDK mission status
 */
static inline uint8_t mavlink_msg_leaf_mission_heartbeat_v2_get_SDK_status(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  68);
}

/**
 * @brief Get field mission_name from leaf_mission_heartbeat_v2 message
 *
 * @return  The name of the mission
 */
static inline uint16_t mavlink_msg_leaf_mission_heartbeat_v2_get_mission_name(const mavlink_message_t* msg, char *mission_name)
{
    return _MAV_RETURN_char_array(msg, mission_name, 64,  69);
}

/**
 * @brief Get field step_type from leaf_mission_heartbeat_v2 message
 *
 * @return  The number of missions in the queue
 */
static inline uint8_t mavlink_msg_leaf_mission_heartbeat_v2_get_step_type(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  133);
}

/**
 * @brief Get field step_name from leaf_mission_heartbeat_v2 message
 *
 * @return  The name of the current step
 */
static inline uint16_t mavlink_msg_leaf_mission_heartbeat_v2_get_step_name(const mavlink_message_t* msg, char *step_name)
{
    return _MAV_RETURN_char_array(msg, step_name, 64,  134);
}

/**
 * @brief Decode a leaf_mission_heartbeat_v2 message into a struct
 *
 * @param msg The message to decode
 * @param leaf_mission_heartbeat_v2 C-struct to decode the message contents into
 */
static inline void mavlink_msg_leaf_mission_heartbeat_v2_decode(const mavlink_message_t* msg, mavlink_leaf_mission_heartbeat_v2_t* leaf_mission_heartbeat_v2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    leaf_mission_heartbeat_v2->LeafFC_mission_status = mavlink_msg_leaf_mission_heartbeat_v2_get_LeafFC_mission_status(msg);
    leaf_mission_heartbeat_v2->joystick_mode = mavlink_msg_leaf_mission_heartbeat_v2_get_joystick_mode(msg);
    mavlink_msg_leaf_mission_heartbeat_v2_get_mission_id(msg, leaf_mission_heartbeat_v2->mission_id);
    leaf_mission_heartbeat_v2->queue_count = mavlink_msg_leaf_mission_heartbeat_v2_get_queue_count(msg);
    leaf_mission_heartbeat_v2->predefined_actions_status = mavlink_msg_leaf_mission_heartbeat_v2_get_predefined_actions_status(msg);
    leaf_mission_heartbeat_v2->SDK_status = mavlink_msg_leaf_mission_heartbeat_v2_get_SDK_status(msg);
    mavlink_msg_leaf_mission_heartbeat_v2_get_mission_name(msg, leaf_mission_heartbeat_v2->mission_name);
    leaf_mission_heartbeat_v2->step_type = mavlink_msg_leaf_mission_heartbeat_v2_get_step_type(msg);
    mavlink_msg_leaf_mission_heartbeat_v2_get_step_name(msg, leaf_mission_heartbeat_v2->step_name);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_V2_LEN? msg->len : MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_V2_LEN;
        memset(leaf_mission_heartbeat_v2, 0, MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_V2_LEN);
    memcpy(leaf_mission_heartbeat_v2, _MAV_PAYLOAD(msg), len);
#endif
}
