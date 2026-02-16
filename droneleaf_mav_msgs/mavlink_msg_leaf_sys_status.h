#pragma once
// MESSAGE LEAF_SYS_STATUS PACKING

#define MAVLINK_MSG_ID_LEAF_SYS_STATUS 77045


typedef struct __mavlink_leaf_sys_status_t {
 uint8_t airborne_status; /*<  The airborne status*/
 uint8_t arm_stage; /*<  The arm stage*/
 uint8_t alt_axis_learning_status; /*<  The altitude axis learning status*/
 uint8_t landing_status; /*<  The landing status*/
 uint8_t learning_status; /*<  The learning status*/
 uint8_t pitch_axis_learning_status; /*<  The pitch axis learning status*/
 uint8_t pre_idle_check_status; /*<  The pre-idle check status*/
 uint8_t roll_axis_learning_status; /*<  The roll axis learning status*/
 uint8_t takeoff_status; /*<  The takeoff status*/
 uint8_t x_axis_learning_status; /*<  The x axis learning status*/
 uint8_t y_axis_learning_status; /*<  The y axis learning status*/
 uint8_t yaw_axis_learning_status; /*<  The yaw axis learning status*/
} mavlink_leaf_sys_status_t;

#define MAVLINK_MSG_ID_LEAF_SYS_STATUS_LEN 12
#define MAVLINK_MSG_ID_LEAF_SYS_STATUS_MIN_LEN 12
#define MAVLINK_MSG_ID_77045_LEN 12
#define MAVLINK_MSG_ID_77045_MIN_LEN 12

#define MAVLINK_MSG_ID_LEAF_SYS_STATUS_CRC 56
#define MAVLINK_MSG_ID_77045_CRC 56



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_LEAF_SYS_STATUS { \
    77045, \
    "LEAF_SYS_STATUS", \
    12, \
    {  { "airborne_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_leaf_sys_status_t, airborne_status) }, \
         { "arm_stage", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_leaf_sys_status_t, arm_stage) }, \
         { "alt_axis_learning_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_leaf_sys_status_t, alt_axis_learning_status) }, \
         { "landing_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 3, offsetof(mavlink_leaf_sys_status_t, landing_status) }, \
         { "learning_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_leaf_sys_status_t, learning_status) }, \
         { "pitch_axis_learning_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_leaf_sys_status_t, pitch_axis_learning_status) }, \
         { "pre_idle_check_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_leaf_sys_status_t, pre_idle_check_status) }, \
         { "roll_axis_learning_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 7, offsetof(mavlink_leaf_sys_status_t, roll_axis_learning_status) }, \
         { "takeoff_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_leaf_sys_status_t, takeoff_status) }, \
         { "x_axis_learning_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 9, offsetof(mavlink_leaf_sys_status_t, x_axis_learning_status) }, \
         { "y_axis_learning_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 10, offsetof(mavlink_leaf_sys_status_t, y_axis_learning_status) }, \
         { "yaw_axis_learning_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 11, offsetof(mavlink_leaf_sys_status_t, yaw_axis_learning_status) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_LEAF_SYS_STATUS { \
    "LEAF_SYS_STATUS", \
    12, \
    {  { "airborne_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_leaf_sys_status_t, airborne_status) }, \
         { "arm_stage", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_leaf_sys_status_t, arm_stage) }, \
         { "alt_axis_learning_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_leaf_sys_status_t, alt_axis_learning_status) }, \
         { "landing_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 3, offsetof(mavlink_leaf_sys_status_t, landing_status) }, \
         { "learning_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_leaf_sys_status_t, learning_status) }, \
         { "pitch_axis_learning_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_leaf_sys_status_t, pitch_axis_learning_status) }, \
         { "pre_idle_check_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_leaf_sys_status_t, pre_idle_check_status) }, \
         { "roll_axis_learning_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 7, offsetof(mavlink_leaf_sys_status_t, roll_axis_learning_status) }, \
         { "takeoff_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_leaf_sys_status_t, takeoff_status) }, \
         { "x_axis_learning_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 9, offsetof(mavlink_leaf_sys_status_t, x_axis_learning_status) }, \
         { "y_axis_learning_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 10, offsetof(mavlink_leaf_sys_status_t, y_axis_learning_status) }, \
         { "yaw_axis_learning_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 11, offsetof(mavlink_leaf_sys_status_t, yaw_axis_learning_status) }, \
         } \
}
#endif

/**
 * @brief Pack a leaf_sys_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param airborne_status  The airborne status
 * @param arm_stage  The arm stage
 * @param alt_axis_learning_status  The altitude axis learning status
 * @param landing_status  The landing status
 * @param learning_status  The learning status
 * @param pitch_axis_learning_status  The pitch axis learning status
 * @param pre_idle_check_status  The pre-idle check status
 * @param roll_axis_learning_status  The roll axis learning status
 * @param takeoff_status  The takeoff status
 * @param x_axis_learning_status  The x axis learning status
 * @param y_axis_learning_status  The y axis learning status
 * @param yaw_axis_learning_status  The yaw axis learning status
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_sys_status_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t airborne_status, uint8_t arm_stage, uint8_t alt_axis_learning_status, uint8_t landing_status, uint8_t learning_status, uint8_t pitch_axis_learning_status, uint8_t pre_idle_check_status, uint8_t roll_axis_learning_status, uint8_t takeoff_status, uint8_t x_axis_learning_status, uint8_t y_axis_learning_status, uint8_t yaw_axis_learning_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_SYS_STATUS_LEN];
    _mav_put_uint8_t(buf, 0, airborne_status);
    _mav_put_uint8_t(buf, 1, arm_stage);
    _mav_put_uint8_t(buf, 2, alt_axis_learning_status);
    _mav_put_uint8_t(buf, 3, landing_status);
    _mav_put_uint8_t(buf, 4, learning_status);
    _mav_put_uint8_t(buf, 5, pitch_axis_learning_status);
    _mav_put_uint8_t(buf, 6, pre_idle_check_status);
    _mav_put_uint8_t(buf, 7, roll_axis_learning_status);
    _mav_put_uint8_t(buf, 8, takeoff_status);
    _mav_put_uint8_t(buf, 9, x_axis_learning_status);
    _mav_put_uint8_t(buf, 10, y_axis_learning_status);
    _mav_put_uint8_t(buf, 11, yaw_axis_learning_status);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_SYS_STATUS_LEN);
#else
    mavlink_leaf_sys_status_t packet;
    packet.airborne_status = airborne_status;
    packet.arm_stage = arm_stage;
    packet.alt_axis_learning_status = alt_axis_learning_status;
    packet.landing_status = landing_status;
    packet.learning_status = learning_status;
    packet.pitch_axis_learning_status = pitch_axis_learning_status;
    packet.pre_idle_check_status = pre_idle_check_status;
    packet.roll_axis_learning_status = roll_axis_learning_status;
    packet.takeoff_status = takeoff_status;
    packet.x_axis_learning_status = x_axis_learning_status;
    packet.y_axis_learning_status = y_axis_learning_status;
    packet.yaw_axis_learning_status = yaw_axis_learning_status;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_SYS_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_SYS_STATUS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_LEAF_SYS_STATUS_MIN_LEN, MAVLINK_MSG_ID_LEAF_SYS_STATUS_LEN, MAVLINK_MSG_ID_LEAF_SYS_STATUS_CRC);
}

/**
 * @brief Pack a leaf_sys_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param airborne_status  The airborne status
 * @param arm_stage  The arm stage
 * @param alt_axis_learning_status  The altitude axis learning status
 * @param landing_status  The landing status
 * @param learning_status  The learning status
 * @param pitch_axis_learning_status  The pitch axis learning status
 * @param pre_idle_check_status  The pre-idle check status
 * @param roll_axis_learning_status  The roll axis learning status
 * @param takeoff_status  The takeoff status
 * @param x_axis_learning_status  The x axis learning status
 * @param y_axis_learning_status  The y axis learning status
 * @param yaw_axis_learning_status  The yaw axis learning status
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_sys_status_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t airborne_status, uint8_t arm_stage, uint8_t alt_axis_learning_status, uint8_t landing_status, uint8_t learning_status, uint8_t pitch_axis_learning_status, uint8_t pre_idle_check_status, uint8_t roll_axis_learning_status, uint8_t takeoff_status, uint8_t x_axis_learning_status, uint8_t y_axis_learning_status, uint8_t yaw_axis_learning_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_SYS_STATUS_LEN];
    _mav_put_uint8_t(buf, 0, airborne_status);
    _mav_put_uint8_t(buf, 1, arm_stage);
    _mav_put_uint8_t(buf, 2, alt_axis_learning_status);
    _mav_put_uint8_t(buf, 3, landing_status);
    _mav_put_uint8_t(buf, 4, learning_status);
    _mav_put_uint8_t(buf, 5, pitch_axis_learning_status);
    _mav_put_uint8_t(buf, 6, pre_idle_check_status);
    _mav_put_uint8_t(buf, 7, roll_axis_learning_status);
    _mav_put_uint8_t(buf, 8, takeoff_status);
    _mav_put_uint8_t(buf, 9, x_axis_learning_status);
    _mav_put_uint8_t(buf, 10, y_axis_learning_status);
    _mav_put_uint8_t(buf, 11, yaw_axis_learning_status);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_SYS_STATUS_LEN);
#else
    mavlink_leaf_sys_status_t packet;
    packet.airborne_status = airborne_status;
    packet.arm_stage = arm_stage;
    packet.alt_axis_learning_status = alt_axis_learning_status;
    packet.landing_status = landing_status;
    packet.learning_status = learning_status;
    packet.pitch_axis_learning_status = pitch_axis_learning_status;
    packet.pre_idle_check_status = pre_idle_check_status;
    packet.roll_axis_learning_status = roll_axis_learning_status;
    packet.takeoff_status = takeoff_status;
    packet.x_axis_learning_status = x_axis_learning_status;
    packet.y_axis_learning_status = y_axis_learning_status;
    packet.yaw_axis_learning_status = yaw_axis_learning_status;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_SYS_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_SYS_STATUS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_SYS_STATUS_MIN_LEN, MAVLINK_MSG_ID_LEAF_SYS_STATUS_LEN, MAVLINK_MSG_ID_LEAF_SYS_STATUS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_SYS_STATUS_MIN_LEN, MAVLINK_MSG_ID_LEAF_SYS_STATUS_LEN);
#endif
}

/**
 * @brief Pack a leaf_sys_status message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param airborne_status  The airborne status
 * @param arm_stage  The arm stage
 * @param alt_axis_learning_status  The altitude axis learning status
 * @param landing_status  The landing status
 * @param learning_status  The learning status
 * @param pitch_axis_learning_status  The pitch axis learning status
 * @param pre_idle_check_status  The pre-idle check status
 * @param roll_axis_learning_status  The roll axis learning status
 * @param takeoff_status  The takeoff status
 * @param x_axis_learning_status  The x axis learning status
 * @param y_axis_learning_status  The y axis learning status
 * @param yaw_axis_learning_status  The yaw axis learning status
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_sys_status_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t airborne_status,uint8_t arm_stage,uint8_t alt_axis_learning_status,uint8_t landing_status,uint8_t learning_status,uint8_t pitch_axis_learning_status,uint8_t pre_idle_check_status,uint8_t roll_axis_learning_status,uint8_t takeoff_status,uint8_t x_axis_learning_status,uint8_t y_axis_learning_status,uint8_t yaw_axis_learning_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_SYS_STATUS_LEN];
    _mav_put_uint8_t(buf, 0, airborne_status);
    _mav_put_uint8_t(buf, 1, arm_stage);
    _mav_put_uint8_t(buf, 2, alt_axis_learning_status);
    _mav_put_uint8_t(buf, 3, landing_status);
    _mav_put_uint8_t(buf, 4, learning_status);
    _mav_put_uint8_t(buf, 5, pitch_axis_learning_status);
    _mav_put_uint8_t(buf, 6, pre_idle_check_status);
    _mav_put_uint8_t(buf, 7, roll_axis_learning_status);
    _mav_put_uint8_t(buf, 8, takeoff_status);
    _mav_put_uint8_t(buf, 9, x_axis_learning_status);
    _mav_put_uint8_t(buf, 10, y_axis_learning_status);
    _mav_put_uint8_t(buf, 11, yaw_axis_learning_status);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_SYS_STATUS_LEN);
#else
    mavlink_leaf_sys_status_t packet;
    packet.airborne_status = airborne_status;
    packet.arm_stage = arm_stage;
    packet.alt_axis_learning_status = alt_axis_learning_status;
    packet.landing_status = landing_status;
    packet.learning_status = learning_status;
    packet.pitch_axis_learning_status = pitch_axis_learning_status;
    packet.pre_idle_check_status = pre_idle_check_status;
    packet.roll_axis_learning_status = roll_axis_learning_status;
    packet.takeoff_status = takeoff_status;
    packet.x_axis_learning_status = x_axis_learning_status;
    packet.y_axis_learning_status = y_axis_learning_status;
    packet.yaw_axis_learning_status = yaw_axis_learning_status;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_SYS_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_SYS_STATUS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_LEAF_SYS_STATUS_MIN_LEN, MAVLINK_MSG_ID_LEAF_SYS_STATUS_LEN, MAVLINK_MSG_ID_LEAF_SYS_STATUS_CRC);
}

/**
 * @brief Encode a leaf_sys_status struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param leaf_sys_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_sys_status_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_leaf_sys_status_t* leaf_sys_status)
{
    return mavlink_msg_leaf_sys_status_pack(system_id, component_id, msg, leaf_sys_status->airborne_status, leaf_sys_status->arm_stage, leaf_sys_status->alt_axis_learning_status, leaf_sys_status->landing_status, leaf_sys_status->learning_status, leaf_sys_status->pitch_axis_learning_status, leaf_sys_status->pre_idle_check_status, leaf_sys_status->roll_axis_learning_status, leaf_sys_status->takeoff_status, leaf_sys_status->x_axis_learning_status, leaf_sys_status->y_axis_learning_status, leaf_sys_status->yaw_axis_learning_status);
}

/**
 * @brief Encode a leaf_sys_status struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param leaf_sys_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_sys_status_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_leaf_sys_status_t* leaf_sys_status)
{
    return mavlink_msg_leaf_sys_status_pack_chan(system_id, component_id, chan, msg, leaf_sys_status->airborne_status, leaf_sys_status->arm_stage, leaf_sys_status->alt_axis_learning_status, leaf_sys_status->landing_status, leaf_sys_status->learning_status, leaf_sys_status->pitch_axis_learning_status, leaf_sys_status->pre_idle_check_status, leaf_sys_status->roll_axis_learning_status, leaf_sys_status->takeoff_status, leaf_sys_status->x_axis_learning_status, leaf_sys_status->y_axis_learning_status, leaf_sys_status->yaw_axis_learning_status);
}

/**
 * @brief Encode a leaf_sys_status struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param leaf_sys_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_sys_status_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_leaf_sys_status_t* leaf_sys_status)
{
    return mavlink_msg_leaf_sys_status_pack_status(system_id, component_id, _status, msg,  leaf_sys_status->airborne_status, leaf_sys_status->arm_stage, leaf_sys_status->alt_axis_learning_status, leaf_sys_status->landing_status, leaf_sys_status->learning_status, leaf_sys_status->pitch_axis_learning_status, leaf_sys_status->pre_idle_check_status, leaf_sys_status->roll_axis_learning_status, leaf_sys_status->takeoff_status, leaf_sys_status->x_axis_learning_status, leaf_sys_status->y_axis_learning_status, leaf_sys_status->yaw_axis_learning_status);
}

/**
 * @brief Send a leaf_sys_status message
 * @param chan MAVLink channel to send the message
 *
 * @param airborne_status  The airborne status
 * @param arm_stage  The arm stage
 * @param alt_axis_learning_status  The altitude axis learning status
 * @param landing_status  The landing status
 * @param learning_status  The learning status
 * @param pitch_axis_learning_status  The pitch axis learning status
 * @param pre_idle_check_status  The pre-idle check status
 * @param roll_axis_learning_status  The roll axis learning status
 * @param takeoff_status  The takeoff status
 * @param x_axis_learning_status  The x axis learning status
 * @param y_axis_learning_status  The y axis learning status
 * @param yaw_axis_learning_status  The yaw axis learning status
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_leaf_sys_status_send(mavlink_channel_t chan, uint8_t airborne_status, uint8_t arm_stage, uint8_t alt_axis_learning_status, uint8_t landing_status, uint8_t learning_status, uint8_t pitch_axis_learning_status, uint8_t pre_idle_check_status, uint8_t roll_axis_learning_status, uint8_t takeoff_status, uint8_t x_axis_learning_status, uint8_t y_axis_learning_status, uint8_t yaw_axis_learning_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_SYS_STATUS_LEN];
    _mav_put_uint8_t(buf, 0, airborne_status);
    _mav_put_uint8_t(buf, 1, arm_stage);
    _mav_put_uint8_t(buf, 2, alt_axis_learning_status);
    _mav_put_uint8_t(buf, 3, landing_status);
    _mav_put_uint8_t(buf, 4, learning_status);
    _mav_put_uint8_t(buf, 5, pitch_axis_learning_status);
    _mav_put_uint8_t(buf, 6, pre_idle_check_status);
    _mav_put_uint8_t(buf, 7, roll_axis_learning_status);
    _mav_put_uint8_t(buf, 8, takeoff_status);
    _mav_put_uint8_t(buf, 9, x_axis_learning_status);
    _mav_put_uint8_t(buf, 10, y_axis_learning_status);
    _mav_put_uint8_t(buf, 11, yaw_axis_learning_status);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_SYS_STATUS, buf, MAVLINK_MSG_ID_LEAF_SYS_STATUS_MIN_LEN, MAVLINK_MSG_ID_LEAF_SYS_STATUS_LEN, MAVLINK_MSG_ID_LEAF_SYS_STATUS_CRC);
#else
    mavlink_leaf_sys_status_t packet;
    packet.airborne_status = airborne_status;
    packet.arm_stage = arm_stage;
    packet.alt_axis_learning_status = alt_axis_learning_status;
    packet.landing_status = landing_status;
    packet.learning_status = learning_status;
    packet.pitch_axis_learning_status = pitch_axis_learning_status;
    packet.pre_idle_check_status = pre_idle_check_status;
    packet.roll_axis_learning_status = roll_axis_learning_status;
    packet.takeoff_status = takeoff_status;
    packet.x_axis_learning_status = x_axis_learning_status;
    packet.y_axis_learning_status = y_axis_learning_status;
    packet.yaw_axis_learning_status = yaw_axis_learning_status;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_SYS_STATUS, (const char *)&packet, MAVLINK_MSG_ID_LEAF_SYS_STATUS_MIN_LEN, MAVLINK_MSG_ID_LEAF_SYS_STATUS_LEN, MAVLINK_MSG_ID_LEAF_SYS_STATUS_CRC);
#endif
}

/**
 * @brief Send a leaf_sys_status message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_leaf_sys_status_send_struct(mavlink_channel_t chan, const mavlink_leaf_sys_status_t* leaf_sys_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_leaf_sys_status_send(chan, leaf_sys_status->airborne_status, leaf_sys_status->arm_stage, leaf_sys_status->alt_axis_learning_status, leaf_sys_status->landing_status, leaf_sys_status->learning_status, leaf_sys_status->pitch_axis_learning_status, leaf_sys_status->pre_idle_check_status, leaf_sys_status->roll_axis_learning_status, leaf_sys_status->takeoff_status, leaf_sys_status->x_axis_learning_status, leaf_sys_status->y_axis_learning_status, leaf_sys_status->yaw_axis_learning_status);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_SYS_STATUS, (const char *)leaf_sys_status, MAVLINK_MSG_ID_LEAF_SYS_STATUS_MIN_LEN, MAVLINK_MSG_ID_LEAF_SYS_STATUS_LEN, MAVLINK_MSG_ID_LEAF_SYS_STATUS_CRC);
#endif
}

#if MAVLINK_MSG_ID_LEAF_SYS_STATUS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_leaf_sys_status_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t airborne_status, uint8_t arm_stage, uint8_t alt_axis_learning_status, uint8_t landing_status, uint8_t learning_status, uint8_t pitch_axis_learning_status, uint8_t pre_idle_check_status, uint8_t roll_axis_learning_status, uint8_t takeoff_status, uint8_t x_axis_learning_status, uint8_t y_axis_learning_status, uint8_t yaw_axis_learning_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, airborne_status);
    _mav_put_uint8_t(buf, 1, arm_stage);
    _mav_put_uint8_t(buf, 2, alt_axis_learning_status);
    _mav_put_uint8_t(buf, 3, landing_status);
    _mav_put_uint8_t(buf, 4, learning_status);
    _mav_put_uint8_t(buf, 5, pitch_axis_learning_status);
    _mav_put_uint8_t(buf, 6, pre_idle_check_status);
    _mav_put_uint8_t(buf, 7, roll_axis_learning_status);
    _mav_put_uint8_t(buf, 8, takeoff_status);
    _mav_put_uint8_t(buf, 9, x_axis_learning_status);
    _mav_put_uint8_t(buf, 10, y_axis_learning_status);
    _mav_put_uint8_t(buf, 11, yaw_axis_learning_status);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_SYS_STATUS, buf, MAVLINK_MSG_ID_LEAF_SYS_STATUS_MIN_LEN, MAVLINK_MSG_ID_LEAF_SYS_STATUS_LEN, MAVLINK_MSG_ID_LEAF_SYS_STATUS_CRC);
#else
    mavlink_leaf_sys_status_t *packet = (mavlink_leaf_sys_status_t *)msgbuf;
    packet->airborne_status = airborne_status;
    packet->arm_stage = arm_stage;
    packet->alt_axis_learning_status = alt_axis_learning_status;
    packet->landing_status = landing_status;
    packet->learning_status = learning_status;
    packet->pitch_axis_learning_status = pitch_axis_learning_status;
    packet->pre_idle_check_status = pre_idle_check_status;
    packet->roll_axis_learning_status = roll_axis_learning_status;
    packet->takeoff_status = takeoff_status;
    packet->x_axis_learning_status = x_axis_learning_status;
    packet->y_axis_learning_status = y_axis_learning_status;
    packet->yaw_axis_learning_status = yaw_axis_learning_status;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_SYS_STATUS, (const char *)packet, MAVLINK_MSG_ID_LEAF_SYS_STATUS_MIN_LEN, MAVLINK_MSG_ID_LEAF_SYS_STATUS_LEN, MAVLINK_MSG_ID_LEAF_SYS_STATUS_CRC);
#endif
}
#endif

#endif

// MESSAGE LEAF_SYS_STATUS UNPACKING


/**
 * @brief Get field airborne_status from leaf_sys_status message
 *
 * @return  The airborne status
 */
static inline uint8_t mavlink_msg_leaf_sys_status_get_airborne_status(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field arm_stage from leaf_sys_status message
 *
 * @return  The arm stage
 */
static inline uint8_t mavlink_msg_leaf_sys_status_get_arm_stage(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Get field alt_axis_learning_status from leaf_sys_status message
 *
 * @return  The altitude axis learning status
 */
static inline uint8_t mavlink_msg_leaf_sys_status_get_alt_axis_learning_status(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  2);
}

/**
 * @brief Get field landing_status from leaf_sys_status message
 *
 * @return  The landing status
 */
static inline uint8_t mavlink_msg_leaf_sys_status_get_landing_status(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  3);
}

/**
 * @brief Get field learning_status from leaf_sys_status message
 *
 * @return  The learning status
 */
static inline uint8_t mavlink_msg_leaf_sys_status_get_learning_status(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  4);
}

/**
 * @brief Get field pitch_axis_learning_status from leaf_sys_status message
 *
 * @return  The pitch axis learning status
 */
static inline uint8_t mavlink_msg_leaf_sys_status_get_pitch_axis_learning_status(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  5);
}

/**
 * @brief Get field pre_idle_check_status from leaf_sys_status message
 *
 * @return  The pre-idle check status
 */
static inline uint8_t mavlink_msg_leaf_sys_status_get_pre_idle_check_status(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  6);
}

/**
 * @brief Get field roll_axis_learning_status from leaf_sys_status message
 *
 * @return  The roll axis learning status
 */
static inline uint8_t mavlink_msg_leaf_sys_status_get_roll_axis_learning_status(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  7);
}

/**
 * @brief Get field takeoff_status from leaf_sys_status message
 *
 * @return  The takeoff status
 */
static inline uint8_t mavlink_msg_leaf_sys_status_get_takeoff_status(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  8);
}

/**
 * @brief Get field x_axis_learning_status from leaf_sys_status message
 *
 * @return  The x axis learning status
 */
static inline uint8_t mavlink_msg_leaf_sys_status_get_x_axis_learning_status(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  9);
}

/**
 * @brief Get field y_axis_learning_status from leaf_sys_status message
 *
 * @return  The y axis learning status
 */
static inline uint8_t mavlink_msg_leaf_sys_status_get_y_axis_learning_status(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  10);
}

/**
 * @brief Get field yaw_axis_learning_status from leaf_sys_status message
 *
 * @return  The yaw axis learning status
 */
static inline uint8_t mavlink_msg_leaf_sys_status_get_yaw_axis_learning_status(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  11);
}

/**
 * @brief Decode a leaf_sys_status message into a struct
 *
 * @param msg The message to decode
 * @param leaf_sys_status C-struct to decode the message contents into
 */
static inline void mavlink_msg_leaf_sys_status_decode(const mavlink_message_t* msg, mavlink_leaf_sys_status_t* leaf_sys_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    leaf_sys_status->airborne_status = mavlink_msg_leaf_sys_status_get_airborne_status(msg);
    leaf_sys_status->arm_stage = mavlink_msg_leaf_sys_status_get_arm_stage(msg);
    leaf_sys_status->alt_axis_learning_status = mavlink_msg_leaf_sys_status_get_alt_axis_learning_status(msg);
    leaf_sys_status->landing_status = mavlink_msg_leaf_sys_status_get_landing_status(msg);
    leaf_sys_status->learning_status = mavlink_msg_leaf_sys_status_get_learning_status(msg);
    leaf_sys_status->pitch_axis_learning_status = mavlink_msg_leaf_sys_status_get_pitch_axis_learning_status(msg);
    leaf_sys_status->pre_idle_check_status = mavlink_msg_leaf_sys_status_get_pre_idle_check_status(msg);
    leaf_sys_status->roll_axis_learning_status = mavlink_msg_leaf_sys_status_get_roll_axis_learning_status(msg);
    leaf_sys_status->takeoff_status = mavlink_msg_leaf_sys_status_get_takeoff_status(msg);
    leaf_sys_status->x_axis_learning_status = mavlink_msg_leaf_sys_status_get_x_axis_learning_status(msg);
    leaf_sys_status->y_axis_learning_status = mavlink_msg_leaf_sys_status_get_y_axis_learning_status(msg);
    leaf_sys_status->yaw_axis_learning_status = mavlink_msg_leaf_sys_status_get_yaw_axis_learning_status(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_LEAF_SYS_STATUS_LEN? msg->len : MAVLINK_MSG_ID_LEAF_SYS_STATUS_LEN;
        memset(leaf_sys_status, 0, MAVLINK_MSG_ID_LEAF_SYS_STATUS_LEN);
    memcpy(leaf_sys_status, _MAV_PAYLOAD(msg), len);
#endif
}
