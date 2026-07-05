#pragma once
// MESSAGE LEAF_BF_STATUS_EX PACKING

#define MAVLINK_MSG_ID_LEAF_BF_STATUS_EX 77052


typedef struct __mavlink_leaf_bf_status_ex_t {
 uint32_t flight_mode_flags; /*<  Active flight-mode flags bitmask*/
 uint32_t arming_disable_flags; /*<  Arming-disable flags bitmask*/
 uint16_t cycle_time_us; /*<  Flight-loop cycle time, microseconds*/
 uint16_t i2c_errors; /*<  I2C error count*/
 uint16_t sensor_mask; /*<  Active sensor bitmask*/
 uint16_t system_load; /*<  System load percent*/
 uint16_t gyro_cycle_time; /*<  Gyro cycle time, microseconds*/
 uint8_t profile; /*<  Current PID profile index*/
 uint8_t flight_mode_count; /*<  Number of flight-mode flag bits*/
 uint8_t arming_disable_count; /*<  Number of arming-disable flag bits*/
 uint8_t config_state_flags; /*<  Configuration state flags*/
} mavlink_leaf_bf_status_ex_t;

#define MAVLINK_MSG_ID_LEAF_BF_STATUS_EX_LEN 22
#define MAVLINK_MSG_ID_LEAF_BF_STATUS_EX_MIN_LEN 22
#define MAVLINK_MSG_ID_77052_LEN 22
#define MAVLINK_MSG_ID_77052_MIN_LEN 22

#define MAVLINK_MSG_ID_LEAF_BF_STATUS_EX_CRC 107
#define MAVLINK_MSG_ID_77052_CRC 107



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_LEAF_BF_STATUS_EX { \
    77052, \
    "LEAF_BF_STATUS_EX", \
    11, \
    {  { "cycle_time_us", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_leaf_bf_status_ex_t, cycle_time_us) }, \
         { "i2c_errors", NULL, MAVLINK_TYPE_UINT16_T, 0, 10, offsetof(mavlink_leaf_bf_status_ex_t, i2c_errors) }, \
         { "sensor_mask", NULL, MAVLINK_TYPE_UINT16_T, 0, 12, offsetof(mavlink_leaf_bf_status_ex_t, sensor_mask) }, \
         { "flight_mode_flags", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_leaf_bf_status_ex_t, flight_mode_flags) }, \
         { "profile", NULL, MAVLINK_TYPE_UINT8_T, 0, 18, offsetof(mavlink_leaf_bf_status_ex_t, profile) }, \
         { "system_load", NULL, MAVLINK_TYPE_UINT16_T, 0, 14, offsetof(mavlink_leaf_bf_status_ex_t, system_load) }, \
         { "gyro_cycle_time", NULL, MAVLINK_TYPE_UINT16_T, 0, 16, offsetof(mavlink_leaf_bf_status_ex_t, gyro_cycle_time) }, \
         { "flight_mode_count", NULL, MAVLINK_TYPE_UINT8_T, 0, 19, offsetof(mavlink_leaf_bf_status_ex_t, flight_mode_count) }, \
         { "arming_disable_count", NULL, MAVLINK_TYPE_UINT8_T, 0, 20, offsetof(mavlink_leaf_bf_status_ex_t, arming_disable_count) }, \
         { "arming_disable_flags", NULL, MAVLINK_TYPE_UINT32_T, 0, 4, offsetof(mavlink_leaf_bf_status_ex_t, arming_disable_flags) }, \
         { "config_state_flags", NULL, MAVLINK_TYPE_UINT8_T, 0, 21, offsetof(mavlink_leaf_bf_status_ex_t, config_state_flags) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_LEAF_BF_STATUS_EX { \
    "LEAF_BF_STATUS_EX", \
    11, \
    {  { "cycle_time_us", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_leaf_bf_status_ex_t, cycle_time_us) }, \
         { "i2c_errors", NULL, MAVLINK_TYPE_UINT16_T, 0, 10, offsetof(mavlink_leaf_bf_status_ex_t, i2c_errors) }, \
         { "sensor_mask", NULL, MAVLINK_TYPE_UINT16_T, 0, 12, offsetof(mavlink_leaf_bf_status_ex_t, sensor_mask) }, \
         { "flight_mode_flags", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_leaf_bf_status_ex_t, flight_mode_flags) }, \
         { "profile", NULL, MAVLINK_TYPE_UINT8_T, 0, 18, offsetof(mavlink_leaf_bf_status_ex_t, profile) }, \
         { "system_load", NULL, MAVLINK_TYPE_UINT16_T, 0, 14, offsetof(mavlink_leaf_bf_status_ex_t, system_load) }, \
         { "gyro_cycle_time", NULL, MAVLINK_TYPE_UINT16_T, 0, 16, offsetof(mavlink_leaf_bf_status_ex_t, gyro_cycle_time) }, \
         { "flight_mode_count", NULL, MAVLINK_TYPE_UINT8_T, 0, 19, offsetof(mavlink_leaf_bf_status_ex_t, flight_mode_count) }, \
         { "arming_disable_count", NULL, MAVLINK_TYPE_UINT8_T, 0, 20, offsetof(mavlink_leaf_bf_status_ex_t, arming_disable_count) }, \
         { "arming_disable_flags", NULL, MAVLINK_TYPE_UINT32_T, 0, 4, offsetof(mavlink_leaf_bf_status_ex_t, arming_disable_flags) }, \
         { "config_state_flags", NULL, MAVLINK_TYPE_UINT8_T, 0, 21, offsetof(mavlink_leaf_bf_status_ex_t, config_state_flags) }, \
         } \
}
#endif

/**
 * @brief Pack a leaf_bf_status_ex message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param cycle_time_us  Flight-loop cycle time, microseconds
 * @param i2c_errors  I2C error count
 * @param sensor_mask  Active sensor bitmask
 * @param flight_mode_flags  Active flight-mode flags bitmask
 * @param profile  Current PID profile index
 * @param system_load  System load percent
 * @param gyro_cycle_time  Gyro cycle time, microseconds
 * @param flight_mode_count  Number of flight-mode flag bits
 * @param arming_disable_count  Number of arming-disable flag bits
 * @param arming_disable_flags  Arming-disable flags bitmask
 * @param config_state_flags  Configuration state flags
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_bf_status_ex_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint16_t cycle_time_us, uint16_t i2c_errors, uint16_t sensor_mask, uint32_t flight_mode_flags, uint8_t profile, uint16_t system_load, uint16_t gyro_cycle_time, uint8_t flight_mode_count, uint8_t arming_disable_count, uint32_t arming_disable_flags, uint8_t config_state_flags)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_BF_STATUS_EX_LEN];
    _mav_put_uint32_t(buf, 0, flight_mode_flags);
    _mav_put_uint32_t(buf, 4, arming_disable_flags);
    _mav_put_uint16_t(buf, 8, cycle_time_us);
    _mav_put_uint16_t(buf, 10, i2c_errors);
    _mav_put_uint16_t(buf, 12, sensor_mask);
    _mav_put_uint16_t(buf, 14, system_load);
    _mav_put_uint16_t(buf, 16, gyro_cycle_time);
    _mav_put_uint8_t(buf, 18, profile);
    _mav_put_uint8_t(buf, 19, flight_mode_count);
    _mav_put_uint8_t(buf, 20, arming_disable_count);
    _mav_put_uint8_t(buf, 21, config_state_flags);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_BF_STATUS_EX_LEN);
#else
    mavlink_leaf_bf_status_ex_t packet;
    packet.flight_mode_flags = flight_mode_flags;
    packet.arming_disable_flags = arming_disable_flags;
    packet.cycle_time_us = cycle_time_us;
    packet.i2c_errors = i2c_errors;
    packet.sensor_mask = sensor_mask;
    packet.system_load = system_load;
    packet.gyro_cycle_time = gyro_cycle_time;
    packet.profile = profile;
    packet.flight_mode_count = flight_mode_count;
    packet.arming_disable_count = arming_disable_count;
    packet.config_state_flags = config_state_flags;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_BF_STATUS_EX_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_BF_STATUS_EX;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_LEAF_BF_STATUS_EX_MIN_LEN, MAVLINK_MSG_ID_LEAF_BF_STATUS_EX_LEN, MAVLINK_MSG_ID_LEAF_BF_STATUS_EX_CRC);
}

/**
 * @brief Pack a leaf_bf_status_ex message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param cycle_time_us  Flight-loop cycle time, microseconds
 * @param i2c_errors  I2C error count
 * @param sensor_mask  Active sensor bitmask
 * @param flight_mode_flags  Active flight-mode flags bitmask
 * @param profile  Current PID profile index
 * @param system_load  System load percent
 * @param gyro_cycle_time  Gyro cycle time, microseconds
 * @param flight_mode_count  Number of flight-mode flag bits
 * @param arming_disable_count  Number of arming-disable flag bits
 * @param arming_disable_flags  Arming-disable flags bitmask
 * @param config_state_flags  Configuration state flags
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_bf_status_ex_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint16_t cycle_time_us, uint16_t i2c_errors, uint16_t sensor_mask, uint32_t flight_mode_flags, uint8_t profile, uint16_t system_load, uint16_t gyro_cycle_time, uint8_t flight_mode_count, uint8_t arming_disable_count, uint32_t arming_disable_flags, uint8_t config_state_flags)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_BF_STATUS_EX_LEN];
    _mav_put_uint32_t(buf, 0, flight_mode_flags);
    _mav_put_uint32_t(buf, 4, arming_disable_flags);
    _mav_put_uint16_t(buf, 8, cycle_time_us);
    _mav_put_uint16_t(buf, 10, i2c_errors);
    _mav_put_uint16_t(buf, 12, sensor_mask);
    _mav_put_uint16_t(buf, 14, system_load);
    _mav_put_uint16_t(buf, 16, gyro_cycle_time);
    _mav_put_uint8_t(buf, 18, profile);
    _mav_put_uint8_t(buf, 19, flight_mode_count);
    _mav_put_uint8_t(buf, 20, arming_disable_count);
    _mav_put_uint8_t(buf, 21, config_state_flags);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_BF_STATUS_EX_LEN);
#else
    mavlink_leaf_bf_status_ex_t packet;
    packet.flight_mode_flags = flight_mode_flags;
    packet.arming_disable_flags = arming_disable_flags;
    packet.cycle_time_us = cycle_time_us;
    packet.i2c_errors = i2c_errors;
    packet.sensor_mask = sensor_mask;
    packet.system_load = system_load;
    packet.gyro_cycle_time = gyro_cycle_time;
    packet.profile = profile;
    packet.flight_mode_count = flight_mode_count;
    packet.arming_disable_count = arming_disable_count;
    packet.config_state_flags = config_state_flags;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_BF_STATUS_EX_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_BF_STATUS_EX;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_BF_STATUS_EX_MIN_LEN, MAVLINK_MSG_ID_LEAF_BF_STATUS_EX_LEN, MAVLINK_MSG_ID_LEAF_BF_STATUS_EX_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_BF_STATUS_EX_MIN_LEN, MAVLINK_MSG_ID_LEAF_BF_STATUS_EX_LEN);
#endif
}

/**
 * @brief Pack a leaf_bf_status_ex message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param cycle_time_us  Flight-loop cycle time, microseconds
 * @param i2c_errors  I2C error count
 * @param sensor_mask  Active sensor bitmask
 * @param flight_mode_flags  Active flight-mode flags bitmask
 * @param profile  Current PID profile index
 * @param system_load  System load percent
 * @param gyro_cycle_time  Gyro cycle time, microseconds
 * @param flight_mode_count  Number of flight-mode flag bits
 * @param arming_disable_count  Number of arming-disable flag bits
 * @param arming_disable_flags  Arming-disable flags bitmask
 * @param config_state_flags  Configuration state flags
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_bf_status_ex_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint16_t cycle_time_us,uint16_t i2c_errors,uint16_t sensor_mask,uint32_t flight_mode_flags,uint8_t profile,uint16_t system_load,uint16_t gyro_cycle_time,uint8_t flight_mode_count,uint8_t arming_disable_count,uint32_t arming_disable_flags,uint8_t config_state_flags)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_BF_STATUS_EX_LEN];
    _mav_put_uint32_t(buf, 0, flight_mode_flags);
    _mav_put_uint32_t(buf, 4, arming_disable_flags);
    _mav_put_uint16_t(buf, 8, cycle_time_us);
    _mav_put_uint16_t(buf, 10, i2c_errors);
    _mav_put_uint16_t(buf, 12, sensor_mask);
    _mav_put_uint16_t(buf, 14, system_load);
    _mav_put_uint16_t(buf, 16, gyro_cycle_time);
    _mav_put_uint8_t(buf, 18, profile);
    _mav_put_uint8_t(buf, 19, flight_mode_count);
    _mav_put_uint8_t(buf, 20, arming_disable_count);
    _mav_put_uint8_t(buf, 21, config_state_flags);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_BF_STATUS_EX_LEN);
#else
    mavlink_leaf_bf_status_ex_t packet;
    packet.flight_mode_flags = flight_mode_flags;
    packet.arming_disable_flags = arming_disable_flags;
    packet.cycle_time_us = cycle_time_us;
    packet.i2c_errors = i2c_errors;
    packet.sensor_mask = sensor_mask;
    packet.system_load = system_load;
    packet.gyro_cycle_time = gyro_cycle_time;
    packet.profile = profile;
    packet.flight_mode_count = flight_mode_count;
    packet.arming_disable_count = arming_disable_count;
    packet.config_state_flags = config_state_flags;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_BF_STATUS_EX_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_BF_STATUS_EX;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_LEAF_BF_STATUS_EX_MIN_LEN, MAVLINK_MSG_ID_LEAF_BF_STATUS_EX_LEN, MAVLINK_MSG_ID_LEAF_BF_STATUS_EX_CRC);
}

/**
 * @brief Encode a leaf_bf_status_ex struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param leaf_bf_status_ex C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_bf_status_ex_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_leaf_bf_status_ex_t* leaf_bf_status_ex)
{
    return mavlink_msg_leaf_bf_status_ex_pack(system_id, component_id, msg, leaf_bf_status_ex->cycle_time_us, leaf_bf_status_ex->i2c_errors, leaf_bf_status_ex->sensor_mask, leaf_bf_status_ex->flight_mode_flags, leaf_bf_status_ex->profile, leaf_bf_status_ex->system_load, leaf_bf_status_ex->gyro_cycle_time, leaf_bf_status_ex->flight_mode_count, leaf_bf_status_ex->arming_disable_count, leaf_bf_status_ex->arming_disable_flags, leaf_bf_status_ex->config_state_flags);
}

/**
 * @brief Encode a leaf_bf_status_ex struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param leaf_bf_status_ex C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_bf_status_ex_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_leaf_bf_status_ex_t* leaf_bf_status_ex)
{
    return mavlink_msg_leaf_bf_status_ex_pack_chan(system_id, component_id, chan, msg, leaf_bf_status_ex->cycle_time_us, leaf_bf_status_ex->i2c_errors, leaf_bf_status_ex->sensor_mask, leaf_bf_status_ex->flight_mode_flags, leaf_bf_status_ex->profile, leaf_bf_status_ex->system_load, leaf_bf_status_ex->gyro_cycle_time, leaf_bf_status_ex->flight_mode_count, leaf_bf_status_ex->arming_disable_count, leaf_bf_status_ex->arming_disable_flags, leaf_bf_status_ex->config_state_flags);
}

/**
 * @brief Encode a leaf_bf_status_ex struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param leaf_bf_status_ex C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_bf_status_ex_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_leaf_bf_status_ex_t* leaf_bf_status_ex)
{
    return mavlink_msg_leaf_bf_status_ex_pack_status(system_id, component_id, _status, msg,  leaf_bf_status_ex->cycle_time_us, leaf_bf_status_ex->i2c_errors, leaf_bf_status_ex->sensor_mask, leaf_bf_status_ex->flight_mode_flags, leaf_bf_status_ex->profile, leaf_bf_status_ex->system_load, leaf_bf_status_ex->gyro_cycle_time, leaf_bf_status_ex->flight_mode_count, leaf_bf_status_ex->arming_disable_count, leaf_bf_status_ex->arming_disable_flags, leaf_bf_status_ex->config_state_flags);
}

/**
 * @brief Send a leaf_bf_status_ex message
 * @param chan MAVLink channel to send the message
 *
 * @param cycle_time_us  Flight-loop cycle time, microseconds
 * @param i2c_errors  I2C error count
 * @param sensor_mask  Active sensor bitmask
 * @param flight_mode_flags  Active flight-mode flags bitmask
 * @param profile  Current PID profile index
 * @param system_load  System load percent
 * @param gyro_cycle_time  Gyro cycle time, microseconds
 * @param flight_mode_count  Number of flight-mode flag bits
 * @param arming_disable_count  Number of arming-disable flag bits
 * @param arming_disable_flags  Arming-disable flags bitmask
 * @param config_state_flags  Configuration state flags
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_leaf_bf_status_ex_send(mavlink_channel_t chan, uint16_t cycle_time_us, uint16_t i2c_errors, uint16_t sensor_mask, uint32_t flight_mode_flags, uint8_t profile, uint16_t system_load, uint16_t gyro_cycle_time, uint8_t flight_mode_count, uint8_t arming_disable_count, uint32_t arming_disable_flags, uint8_t config_state_flags)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_BF_STATUS_EX_LEN];
    _mav_put_uint32_t(buf, 0, flight_mode_flags);
    _mav_put_uint32_t(buf, 4, arming_disable_flags);
    _mav_put_uint16_t(buf, 8, cycle_time_us);
    _mav_put_uint16_t(buf, 10, i2c_errors);
    _mav_put_uint16_t(buf, 12, sensor_mask);
    _mav_put_uint16_t(buf, 14, system_load);
    _mav_put_uint16_t(buf, 16, gyro_cycle_time);
    _mav_put_uint8_t(buf, 18, profile);
    _mav_put_uint8_t(buf, 19, flight_mode_count);
    _mav_put_uint8_t(buf, 20, arming_disable_count);
    _mav_put_uint8_t(buf, 21, config_state_flags);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_BF_STATUS_EX, buf, MAVLINK_MSG_ID_LEAF_BF_STATUS_EX_MIN_LEN, MAVLINK_MSG_ID_LEAF_BF_STATUS_EX_LEN, MAVLINK_MSG_ID_LEAF_BF_STATUS_EX_CRC);
#else
    mavlink_leaf_bf_status_ex_t packet;
    packet.flight_mode_flags = flight_mode_flags;
    packet.arming_disable_flags = arming_disable_flags;
    packet.cycle_time_us = cycle_time_us;
    packet.i2c_errors = i2c_errors;
    packet.sensor_mask = sensor_mask;
    packet.system_load = system_load;
    packet.gyro_cycle_time = gyro_cycle_time;
    packet.profile = profile;
    packet.flight_mode_count = flight_mode_count;
    packet.arming_disable_count = arming_disable_count;
    packet.config_state_flags = config_state_flags;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_BF_STATUS_EX, (const char *)&packet, MAVLINK_MSG_ID_LEAF_BF_STATUS_EX_MIN_LEN, MAVLINK_MSG_ID_LEAF_BF_STATUS_EX_LEN, MAVLINK_MSG_ID_LEAF_BF_STATUS_EX_CRC);
#endif
}

/**
 * @brief Send a leaf_bf_status_ex message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_leaf_bf_status_ex_send_struct(mavlink_channel_t chan, const mavlink_leaf_bf_status_ex_t* leaf_bf_status_ex)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_leaf_bf_status_ex_send(chan, leaf_bf_status_ex->cycle_time_us, leaf_bf_status_ex->i2c_errors, leaf_bf_status_ex->sensor_mask, leaf_bf_status_ex->flight_mode_flags, leaf_bf_status_ex->profile, leaf_bf_status_ex->system_load, leaf_bf_status_ex->gyro_cycle_time, leaf_bf_status_ex->flight_mode_count, leaf_bf_status_ex->arming_disable_count, leaf_bf_status_ex->arming_disable_flags, leaf_bf_status_ex->config_state_flags);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_BF_STATUS_EX, (const char *)leaf_bf_status_ex, MAVLINK_MSG_ID_LEAF_BF_STATUS_EX_MIN_LEN, MAVLINK_MSG_ID_LEAF_BF_STATUS_EX_LEN, MAVLINK_MSG_ID_LEAF_BF_STATUS_EX_CRC);
#endif
}

#if MAVLINK_MSG_ID_LEAF_BF_STATUS_EX_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_leaf_bf_status_ex_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint16_t cycle_time_us, uint16_t i2c_errors, uint16_t sensor_mask, uint32_t flight_mode_flags, uint8_t profile, uint16_t system_load, uint16_t gyro_cycle_time, uint8_t flight_mode_count, uint8_t arming_disable_count, uint32_t arming_disable_flags, uint8_t config_state_flags)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, flight_mode_flags);
    _mav_put_uint32_t(buf, 4, arming_disable_flags);
    _mav_put_uint16_t(buf, 8, cycle_time_us);
    _mav_put_uint16_t(buf, 10, i2c_errors);
    _mav_put_uint16_t(buf, 12, sensor_mask);
    _mav_put_uint16_t(buf, 14, system_load);
    _mav_put_uint16_t(buf, 16, gyro_cycle_time);
    _mav_put_uint8_t(buf, 18, profile);
    _mav_put_uint8_t(buf, 19, flight_mode_count);
    _mav_put_uint8_t(buf, 20, arming_disable_count);
    _mav_put_uint8_t(buf, 21, config_state_flags);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_BF_STATUS_EX, buf, MAVLINK_MSG_ID_LEAF_BF_STATUS_EX_MIN_LEN, MAVLINK_MSG_ID_LEAF_BF_STATUS_EX_LEN, MAVLINK_MSG_ID_LEAF_BF_STATUS_EX_CRC);
#else
    mavlink_leaf_bf_status_ex_t *packet = (mavlink_leaf_bf_status_ex_t *)msgbuf;
    packet->flight_mode_flags = flight_mode_flags;
    packet->arming_disable_flags = arming_disable_flags;
    packet->cycle_time_us = cycle_time_us;
    packet->i2c_errors = i2c_errors;
    packet->sensor_mask = sensor_mask;
    packet->system_load = system_load;
    packet->gyro_cycle_time = gyro_cycle_time;
    packet->profile = profile;
    packet->flight_mode_count = flight_mode_count;
    packet->arming_disable_count = arming_disable_count;
    packet->config_state_flags = config_state_flags;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_BF_STATUS_EX, (const char *)packet, MAVLINK_MSG_ID_LEAF_BF_STATUS_EX_MIN_LEN, MAVLINK_MSG_ID_LEAF_BF_STATUS_EX_LEN, MAVLINK_MSG_ID_LEAF_BF_STATUS_EX_CRC);
#endif
}
#endif

#endif

// MESSAGE LEAF_BF_STATUS_EX UNPACKING


/**
 * @brief Get field cycle_time_us from leaf_bf_status_ex message
 *
 * @return  Flight-loop cycle time, microseconds
 */
static inline uint16_t mavlink_msg_leaf_bf_status_ex_get_cycle_time_us(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  8);
}

/**
 * @brief Get field i2c_errors from leaf_bf_status_ex message
 *
 * @return  I2C error count
 */
static inline uint16_t mavlink_msg_leaf_bf_status_ex_get_i2c_errors(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  10);
}

/**
 * @brief Get field sensor_mask from leaf_bf_status_ex message
 *
 * @return  Active sensor bitmask
 */
static inline uint16_t mavlink_msg_leaf_bf_status_ex_get_sensor_mask(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  12);
}

/**
 * @brief Get field flight_mode_flags from leaf_bf_status_ex message
 *
 * @return  Active flight-mode flags bitmask
 */
static inline uint32_t mavlink_msg_leaf_bf_status_ex_get_flight_mode_flags(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field profile from leaf_bf_status_ex message
 *
 * @return  Current PID profile index
 */
static inline uint8_t mavlink_msg_leaf_bf_status_ex_get_profile(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  18);
}

/**
 * @brief Get field system_load from leaf_bf_status_ex message
 *
 * @return  System load percent
 */
static inline uint16_t mavlink_msg_leaf_bf_status_ex_get_system_load(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  14);
}

/**
 * @brief Get field gyro_cycle_time from leaf_bf_status_ex message
 *
 * @return  Gyro cycle time, microseconds
 */
static inline uint16_t mavlink_msg_leaf_bf_status_ex_get_gyro_cycle_time(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  16);
}

/**
 * @brief Get field flight_mode_count from leaf_bf_status_ex message
 *
 * @return  Number of flight-mode flag bits
 */
static inline uint8_t mavlink_msg_leaf_bf_status_ex_get_flight_mode_count(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  19);
}

/**
 * @brief Get field arming_disable_count from leaf_bf_status_ex message
 *
 * @return  Number of arming-disable flag bits
 */
static inline uint8_t mavlink_msg_leaf_bf_status_ex_get_arming_disable_count(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  20);
}

/**
 * @brief Get field arming_disable_flags from leaf_bf_status_ex message
 *
 * @return  Arming-disable flags bitmask
 */
static inline uint32_t mavlink_msg_leaf_bf_status_ex_get_arming_disable_flags(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  4);
}

/**
 * @brief Get field config_state_flags from leaf_bf_status_ex message
 *
 * @return  Configuration state flags
 */
static inline uint8_t mavlink_msg_leaf_bf_status_ex_get_config_state_flags(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  21);
}

/**
 * @brief Decode a leaf_bf_status_ex message into a struct
 *
 * @param msg The message to decode
 * @param leaf_bf_status_ex C-struct to decode the message contents into
 */
static inline void mavlink_msg_leaf_bf_status_ex_decode(const mavlink_message_t* msg, mavlink_leaf_bf_status_ex_t* leaf_bf_status_ex)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    leaf_bf_status_ex->flight_mode_flags = mavlink_msg_leaf_bf_status_ex_get_flight_mode_flags(msg);
    leaf_bf_status_ex->arming_disable_flags = mavlink_msg_leaf_bf_status_ex_get_arming_disable_flags(msg);
    leaf_bf_status_ex->cycle_time_us = mavlink_msg_leaf_bf_status_ex_get_cycle_time_us(msg);
    leaf_bf_status_ex->i2c_errors = mavlink_msg_leaf_bf_status_ex_get_i2c_errors(msg);
    leaf_bf_status_ex->sensor_mask = mavlink_msg_leaf_bf_status_ex_get_sensor_mask(msg);
    leaf_bf_status_ex->system_load = mavlink_msg_leaf_bf_status_ex_get_system_load(msg);
    leaf_bf_status_ex->gyro_cycle_time = mavlink_msg_leaf_bf_status_ex_get_gyro_cycle_time(msg);
    leaf_bf_status_ex->profile = mavlink_msg_leaf_bf_status_ex_get_profile(msg);
    leaf_bf_status_ex->flight_mode_count = mavlink_msg_leaf_bf_status_ex_get_flight_mode_count(msg);
    leaf_bf_status_ex->arming_disable_count = mavlink_msg_leaf_bf_status_ex_get_arming_disable_count(msg);
    leaf_bf_status_ex->config_state_flags = mavlink_msg_leaf_bf_status_ex_get_config_state_flags(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_LEAF_BF_STATUS_EX_LEN? msg->len : MAVLINK_MSG_ID_LEAF_BF_STATUS_EX_LEN;
        memset(leaf_bf_status_ex, 0, MAVLINK_MSG_ID_LEAF_BF_STATUS_EX_LEN);
    memcpy(leaf_bf_status_ex, _MAV_PAYLOAD(msg), len);
#endif
}
