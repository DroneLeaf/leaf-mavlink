#pragma once
// MESSAGE VEHICLE_CONTROL_MODE PACKING

#define MAVLINK_MSG_ID_VEHICLE_CONTROL_MODE 206


typedef struct __mavlink_vehicle_control_mode_t {
 uint8_t flag_armed; /*<  synonym for actuator_armed.armed*/
 uint8_t flag_multicopter_position_control_enabled; /*<  */
 uint8_t flag_control_manual_enabled; /*<  true if manual input is mixed in*/
 uint8_t flag_control_auto_enabled; /*<  true if onboard autopilot should act*/
 uint8_t flag_control_offboard_enabled; /*<  true if offboard control should be used*/
 uint8_t flag_control_rates_enabled; /*<  true if rates are stabilized*/
 uint8_t flag_control_attitude_enabled; /*<  true if attitude stabilization is mixed in*/
 uint8_t flag_control_acceleration_enabled; /*<  true if acceleration is controlled*/
 uint8_t flag_control_velocity_enabled; /*<  true if horizontal velocity (implies direction) is controlled*/
 uint8_t flag_control_position_enabled; /*<  true if position is controlled*/
 uint8_t flag_control_altitude_enabled; /*<  true if altitude is controlled*/
 uint8_t flag_control_climb_rate_enabled; /*<  true if climb rate is controlled*/
 uint8_t flag_control_termination_enabled; /*<  true if flighttermination is enabled*/
} mavlink_vehicle_control_mode_t;

#define MAVLINK_MSG_ID_VEHICLE_CONTROL_MODE_LEN 13
#define MAVLINK_MSG_ID_VEHICLE_CONTROL_MODE_MIN_LEN 13
#define MAVLINK_MSG_ID_206_LEN 13
#define MAVLINK_MSG_ID_206_MIN_LEN 13

#define MAVLINK_MSG_ID_VEHICLE_CONTROL_MODE_CRC 4
#define MAVLINK_MSG_ID_206_CRC 4



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_VEHICLE_CONTROL_MODE { \
    206, \
    "VEHICLE_CONTROL_MODE", \
    13, \
    {  { "flag_armed", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_vehicle_control_mode_t, flag_armed) }, \
         { "flag_multicopter_position_control_enabled", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_vehicle_control_mode_t, flag_multicopter_position_control_enabled) }, \
         { "flag_control_manual_enabled", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_vehicle_control_mode_t, flag_control_manual_enabled) }, \
         { "flag_control_auto_enabled", NULL, MAVLINK_TYPE_UINT8_T, 0, 3, offsetof(mavlink_vehicle_control_mode_t, flag_control_auto_enabled) }, \
         { "flag_control_offboard_enabled", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_vehicle_control_mode_t, flag_control_offboard_enabled) }, \
         { "flag_control_rates_enabled", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_vehicle_control_mode_t, flag_control_rates_enabled) }, \
         { "flag_control_attitude_enabled", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_vehicle_control_mode_t, flag_control_attitude_enabled) }, \
         { "flag_control_acceleration_enabled", NULL, MAVLINK_TYPE_UINT8_T, 0, 7, offsetof(mavlink_vehicle_control_mode_t, flag_control_acceleration_enabled) }, \
         { "flag_control_velocity_enabled", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_vehicle_control_mode_t, flag_control_velocity_enabled) }, \
         { "flag_control_position_enabled", NULL, MAVLINK_TYPE_UINT8_T, 0, 9, offsetof(mavlink_vehicle_control_mode_t, flag_control_position_enabled) }, \
         { "flag_control_altitude_enabled", NULL, MAVLINK_TYPE_UINT8_T, 0, 10, offsetof(mavlink_vehicle_control_mode_t, flag_control_altitude_enabled) }, \
         { "flag_control_climb_rate_enabled", NULL, MAVLINK_TYPE_UINT8_T, 0, 11, offsetof(mavlink_vehicle_control_mode_t, flag_control_climb_rate_enabled) }, \
         { "flag_control_termination_enabled", NULL, MAVLINK_TYPE_UINT8_T, 0, 12, offsetof(mavlink_vehicle_control_mode_t, flag_control_termination_enabled) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_VEHICLE_CONTROL_MODE { \
    "VEHICLE_CONTROL_MODE", \
    13, \
    {  { "flag_armed", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_vehicle_control_mode_t, flag_armed) }, \
         { "flag_multicopter_position_control_enabled", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_vehicle_control_mode_t, flag_multicopter_position_control_enabled) }, \
         { "flag_control_manual_enabled", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_vehicle_control_mode_t, flag_control_manual_enabled) }, \
         { "flag_control_auto_enabled", NULL, MAVLINK_TYPE_UINT8_T, 0, 3, offsetof(mavlink_vehicle_control_mode_t, flag_control_auto_enabled) }, \
         { "flag_control_offboard_enabled", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_vehicle_control_mode_t, flag_control_offboard_enabled) }, \
         { "flag_control_rates_enabled", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_vehicle_control_mode_t, flag_control_rates_enabled) }, \
         { "flag_control_attitude_enabled", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_vehicle_control_mode_t, flag_control_attitude_enabled) }, \
         { "flag_control_acceleration_enabled", NULL, MAVLINK_TYPE_UINT8_T, 0, 7, offsetof(mavlink_vehicle_control_mode_t, flag_control_acceleration_enabled) }, \
         { "flag_control_velocity_enabled", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_vehicle_control_mode_t, flag_control_velocity_enabled) }, \
         { "flag_control_position_enabled", NULL, MAVLINK_TYPE_UINT8_T, 0, 9, offsetof(mavlink_vehicle_control_mode_t, flag_control_position_enabled) }, \
         { "flag_control_altitude_enabled", NULL, MAVLINK_TYPE_UINT8_T, 0, 10, offsetof(mavlink_vehicle_control_mode_t, flag_control_altitude_enabled) }, \
         { "flag_control_climb_rate_enabled", NULL, MAVLINK_TYPE_UINT8_T, 0, 11, offsetof(mavlink_vehicle_control_mode_t, flag_control_climb_rate_enabled) }, \
         { "flag_control_termination_enabled", NULL, MAVLINK_TYPE_UINT8_T, 0, 12, offsetof(mavlink_vehicle_control_mode_t, flag_control_termination_enabled) }, \
         } \
}
#endif

/**
 * @brief Pack a vehicle_control_mode message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param flag_armed  synonym for actuator_armed.armed
 * @param flag_multicopter_position_control_enabled  
 * @param flag_control_manual_enabled  true if manual input is mixed in
 * @param flag_control_auto_enabled  true if onboard autopilot should act
 * @param flag_control_offboard_enabled  true if offboard control should be used
 * @param flag_control_rates_enabled  true if rates are stabilized
 * @param flag_control_attitude_enabled  true if attitude stabilization is mixed in
 * @param flag_control_acceleration_enabled  true if acceleration is controlled
 * @param flag_control_velocity_enabled  true if horizontal velocity (implies direction) is controlled
 * @param flag_control_position_enabled  true if position is controlled
 * @param flag_control_altitude_enabled  true if altitude is controlled
 * @param flag_control_climb_rate_enabled  true if climb rate is controlled
 * @param flag_control_termination_enabled  true if flighttermination is enabled
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_vehicle_control_mode_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t flag_armed, uint8_t flag_multicopter_position_control_enabled, uint8_t flag_control_manual_enabled, uint8_t flag_control_auto_enabled, uint8_t flag_control_offboard_enabled, uint8_t flag_control_rates_enabled, uint8_t flag_control_attitude_enabled, uint8_t flag_control_acceleration_enabled, uint8_t flag_control_velocity_enabled, uint8_t flag_control_position_enabled, uint8_t flag_control_altitude_enabled, uint8_t flag_control_climb_rate_enabled, uint8_t flag_control_termination_enabled)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_VEHICLE_CONTROL_MODE_LEN];
    _mav_put_uint8_t(buf, 0, flag_armed);
    _mav_put_uint8_t(buf, 1, flag_multicopter_position_control_enabled);
    _mav_put_uint8_t(buf, 2, flag_control_manual_enabled);
    _mav_put_uint8_t(buf, 3, flag_control_auto_enabled);
    _mav_put_uint8_t(buf, 4, flag_control_offboard_enabled);
    _mav_put_uint8_t(buf, 5, flag_control_rates_enabled);
    _mav_put_uint8_t(buf, 6, flag_control_attitude_enabled);
    _mav_put_uint8_t(buf, 7, flag_control_acceleration_enabled);
    _mav_put_uint8_t(buf, 8, flag_control_velocity_enabled);
    _mav_put_uint8_t(buf, 9, flag_control_position_enabled);
    _mav_put_uint8_t(buf, 10, flag_control_altitude_enabled);
    _mav_put_uint8_t(buf, 11, flag_control_climb_rate_enabled);
    _mav_put_uint8_t(buf, 12, flag_control_termination_enabled);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_VEHICLE_CONTROL_MODE_LEN);
#else
    mavlink_vehicle_control_mode_t packet;
    packet.flag_armed = flag_armed;
    packet.flag_multicopter_position_control_enabled = flag_multicopter_position_control_enabled;
    packet.flag_control_manual_enabled = flag_control_manual_enabled;
    packet.flag_control_auto_enabled = flag_control_auto_enabled;
    packet.flag_control_offboard_enabled = flag_control_offboard_enabled;
    packet.flag_control_rates_enabled = flag_control_rates_enabled;
    packet.flag_control_attitude_enabled = flag_control_attitude_enabled;
    packet.flag_control_acceleration_enabled = flag_control_acceleration_enabled;
    packet.flag_control_velocity_enabled = flag_control_velocity_enabled;
    packet.flag_control_position_enabled = flag_control_position_enabled;
    packet.flag_control_altitude_enabled = flag_control_altitude_enabled;
    packet.flag_control_climb_rate_enabled = flag_control_climb_rate_enabled;
    packet.flag_control_termination_enabled = flag_control_termination_enabled;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_VEHICLE_CONTROL_MODE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_VEHICLE_CONTROL_MODE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_VEHICLE_CONTROL_MODE_MIN_LEN, MAVLINK_MSG_ID_VEHICLE_CONTROL_MODE_LEN, MAVLINK_MSG_ID_VEHICLE_CONTROL_MODE_CRC);
}

/**
 * @brief Pack a vehicle_control_mode message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param flag_armed  synonym for actuator_armed.armed
 * @param flag_multicopter_position_control_enabled  
 * @param flag_control_manual_enabled  true if manual input is mixed in
 * @param flag_control_auto_enabled  true if onboard autopilot should act
 * @param flag_control_offboard_enabled  true if offboard control should be used
 * @param flag_control_rates_enabled  true if rates are stabilized
 * @param flag_control_attitude_enabled  true if attitude stabilization is mixed in
 * @param flag_control_acceleration_enabled  true if acceleration is controlled
 * @param flag_control_velocity_enabled  true if horizontal velocity (implies direction) is controlled
 * @param flag_control_position_enabled  true if position is controlled
 * @param flag_control_altitude_enabled  true if altitude is controlled
 * @param flag_control_climb_rate_enabled  true if climb rate is controlled
 * @param flag_control_termination_enabled  true if flighttermination is enabled
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_vehicle_control_mode_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t flag_armed, uint8_t flag_multicopter_position_control_enabled, uint8_t flag_control_manual_enabled, uint8_t flag_control_auto_enabled, uint8_t flag_control_offboard_enabled, uint8_t flag_control_rates_enabled, uint8_t flag_control_attitude_enabled, uint8_t flag_control_acceleration_enabled, uint8_t flag_control_velocity_enabled, uint8_t flag_control_position_enabled, uint8_t flag_control_altitude_enabled, uint8_t flag_control_climb_rate_enabled, uint8_t flag_control_termination_enabled)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_VEHICLE_CONTROL_MODE_LEN];
    _mav_put_uint8_t(buf, 0, flag_armed);
    _mav_put_uint8_t(buf, 1, flag_multicopter_position_control_enabled);
    _mav_put_uint8_t(buf, 2, flag_control_manual_enabled);
    _mav_put_uint8_t(buf, 3, flag_control_auto_enabled);
    _mav_put_uint8_t(buf, 4, flag_control_offboard_enabled);
    _mav_put_uint8_t(buf, 5, flag_control_rates_enabled);
    _mav_put_uint8_t(buf, 6, flag_control_attitude_enabled);
    _mav_put_uint8_t(buf, 7, flag_control_acceleration_enabled);
    _mav_put_uint8_t(buf, 8, flag_control_velocity_enabled);
    _mav_put_uint8_t(buf, 9, flag_control_position_enabled);
    _mav_put_uint8_t(buf, 10, flag_control_altitude_enabled);
    _mav_put_uint8_t(buf, 11, flag_control_climb_rate_enabled);
    _mav_put_uint8_t(buf, 12, flag_control_termination_enabled);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_VEHICLE_CONTROL_MODE_LEN);
#else
    mavlink_vehicle_control_mode_t packet;
    packet.flag_armed = flag_armed;
    packet.flag_multicopter_position_control_enabled = flag_multicopter_position_control_enabled;
    packet.flag_control_manual_enabled = flag_control_manual_enabled;
    packet.flag_control_auto_enabled = flag_control_auto_enabled;
    packet.flag_control_offboard_enabled = flag_control_offboard_enabled;
    packet.flag_control_rates_enabled = flag_control_rates_enabled;
    packet.flag_control_attitude_enabled = flag_control_attitude_enabled;
    packet.flag_control_acceleration_enabled = flag_control_acceleration_enabled;
    packet.flag_control_velocity_enabled = flag_control_velocity_enabled;
    packet.flag_control_position_enabled = flag_control_position_enabled;
    packet.flag_control_altitude_enabled = flag_control_altitude_enabled;
    packet.flag_control_climb_rate_enabled = flag_control_climb_rate_enabled;
    packet.flag_control_termination_enabled = flag_control_termination_enabled;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_VEHICLE_CONTROL_MODE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_VEHICLE_CONTROL_MODE;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_VEHICLE_CONTROL_MODE_MIN_LEN, MAVLINK_MSG_ID_VEHICLE_CONTROL_MODE_LEN, MAVLINK_MSG_ID_VEHICLE_CONTROL_MODE_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_VEHICLE_CONTROL_MODE_MIN_LEN, MAVLINK_MSG_ID_VEHICLE_CONTROL_MODE_LEN);
#endif
}

/**
 * @brief Pack a vehicle_control_mode message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param flag_armed  synonym for actuator_armed.armed
 * @param flag_multicopter_position_control_enabled  
 * @param flag_control_manual_enabled  true if manual input is mixed in
 * @param flag_control_auto_enabled  true if onboard autopilot should act
 * @param flag_control_offboard_enabled  true if offboard control should be used
 * @param flag_control_rates_enabled  true if rates are stabilized
 * @param flag_control_attitude_enabled  true if attitude stabilization is mixed in
 * @param flag_control_acceleration_enabled  true if acceleration is controlled
 * @param flag_control_velocity_enabled  true if horizontal velocity (implies direction) is controlled
 * @param flag_control_position_enabled  true if position is controlled
 * @param flag_control_altitude_enabled  true if altitude is controlled
 * @param flag_control_climb_rate_enabled  true if climb rate is controlled
 * @param flag_control_termination_enabled  true if flighttermination is enabled
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_vehicle_control_mode_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t flag_armed,uint8_t flag_multicopter_position_control_enabled,uint8_t flag_control_manual_enabled,uint8_t flag_control_auto_enabled,uint8_t flag_control_offboard_enabled,uint8_t flag_control_rates_enabled,uint8_t flag_control_attitude_enabled,uint8_t flag_control_acceleration_enabled,uint8_t flag_control_velocity_enabled,uint8_t flag_control_position_enabled,uint8_t flag_control_altitude_enabled,uint8_t flag_control_climb_rate_enabled,uint8_t flag_control_termination_enabled)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_VEHICLE_CONTROL_MODE_LEN];
    _mav_put_uint8_t(buf, 0, flag_armed);
    _mav_put_uint8_t(buf, 1, flag_multicopter_position_control_enabled);
    _mav_put_uint8_t(buf, 2, flag_control_manual_enabled);
    _mav_put_uint8_t(buf, 3, flag_control_auto_enabled);
    _mav_put_uint8_t(buf, 4, flag_control_offboard_enabled);
    _mav_put_uint8_t(buf, 5, flag_control_rates_enabled);
    _mav_put_uint8_t(buf, 6, flag_control_attitude_enabled);
    _mav_put_uint8_t(buf, 7, flag_control_acceleration_enabled);
    _mav_put_uint8_t(buf, 8, flag_control_velocity_enabled);
    _mav_put_uint8_t(buf, 9, flag_control_position_enabled);
    _mav_put_uint8_t(buf, 10, flag_control_altitude_enabled);
    _mav_put_uint8_t(buf, 11, flag_control_climb_rate_enabled);
    _mav_put_uint8_t(buf, 12, flag_control_termination_enabled);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_VEHICLE_CONTROL_MODE_LEN);
#else
    mavlink_vehicle_control_mode_t packet;
    packet.flag_armed = flag_armed;
    packet.flag_multicopter_position_control_enabled = flag_multicopter_position_control_enabled;
    packet.flag_control_manual_enabled = flag_control_manual_enabled;
    packet.flag_control_auto_enabled = flag_control_auto_enabled;
    packet.flag_control_offboard_enabled = flag_control_offboard_enabled;
    packet.flag_control_rates_enabled = flag_control_rates_enabled;
    packet.flag_control_attitude_enabled = flag_control_attitude_enabled;
    packet.flag_control_acceleration_enabled = flag_control_acceleration_enabled;
    packet.flag_control_velocity_enabled = flag_control_velocity_enabled;
    packet.flag_control_position_enabled = flag_control_position_enabled;
    packet.flag_control_altitude_enabled = flag_control_altitude_enabled;
    packet.flag_control_climb_rate_enabled = flag_control_climb_rate_enabled;
    packet.flag_control_termination_enabled = flag_control_termination_enabled;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_VEHICLE_CONTROL_MODE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_VEHICLE_CONTROL_MODE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_VEHICLE_CONTROL_MODE_MIN_LEN, MAVLINK_MSG_ID_VEHICLE_CONTROL_MODE_LEN, MAVLINK_MSG_ID_VEHICLE_CONTROL_MODE_CRC);
}

/**
 * @brief Encode a vehicle_control_mode struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param vehicle_control_mode C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_vehicle_control_mode_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_vehicle_control_mode_t* vehicle_control_mode)
{
    return mavlink_msg_vehicle_control_mode_pack(system_id, component_id, msg, vehicle_control_mode->flag_armed, vehicle_control_mode->flag_multicopter_position_control_enabled, vehicle_control_mode->flag_control_manual_enabled, vehicle_control_mode->flag_control_auto_enabled, vehicle_control_mode->flag_control_offboard_enabled, vehicle_control_mode->flag_control_rates_enabled, vehicle_control_mode->flag_control_attitude_enabled, vehicle_control_mode->flag_control_acceleration_enabled, vehicle_control_mode->flag_control_velocity_enabled, vehicle_control_mode->flag_control_position_enabled, vehicle_control_mode->flag_control_altitude_enabled, vehicle_control_mode->flag_control_climb_rate_enabled, vehicle_control_mode->flag_control_termination_enabled);
}

/**
 * @brief Encode a vehicle_control_mode struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param vehicle_control_mode C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_vehicle_control_mode_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_vehicle_control_mode_t* vehicle_control_mode)
{
    return mavlink_msg_vehicle_control_mode_pack_chan(system_id, component_id, chan, msg, vehicle_control_mode->flag_armed, vehicle_control_mode->flag_multicopter_position_control_enabled, vehicle_control_mode->flag_control_manual_enabled, vehicle_control_mode->flag_control_auto_enabled, vehicle_control_mode->flag_control_offboard_enabled, vehicle_control_mode->flag_control_rates_enabled, vehicle_control_mode->flag_control_attitude_enabled, vehicle_control_mode->flag_control_acceleration_enabled, vehicle_control_mode->flag_control_velocity_enabled, vehicle_control_mode->flag_control_position_enabled, vehicle_control_mode->flag_control_altitude_enabled, vehicle_control_mode->flag_control_climb_rate_enabled, vehicle_control_mode->flag_control_termination_enabled);
}

/**
 * @brief Encode a vehicle_control_mode struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param vehicle_control_mode C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_vehicle_control_mode_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_vehicle_control_mode_t* vehicle_control_mode)
{
    return mavlink_msg_vehicle_control_mode_pack_status(system_id, component_id, _status, msg,  vehicle_control_mode->flag_armed, vehicle_control_mode->flag_multicopter_position_control_enabled, vehicle_control_mode->flag_control_manual_enabled, vehicle_control_mode->flag_control_auto_enabled, vehicle_control_mode->flag_control_offboard_enabled, vehicle_control_mode->flag_control_rates_enabled, vehicle_control_mode->flag_control_attitude_enabled, vehicle_control_mode->flag_control_acceleration_enabled, vehicle_control_mode->flag_control_velocity_enabled, vehicle_control_mode->flag_control_position_enabled, vehicle_control_mode->flag_control_altitude_enabled, vehicle_control_mode->flag_control_climb_rate_enabled, vehicle_control_mode->flag_control_termination_enabled);
}

/**
 * @brief Send a vehicle_control_mode message
 * @param chan MAVLink channel to send the message
 *
 * @param flag_armed  synonym for actuator_armed.armed
 * @param flag_multicopter_position_control_enabled  
 * @param flag_control_manual_enabled  true if manual input is mixed in
 * @param flag_control_auto_enabled  true if onboard autopilot should act
 * @param flag_control_offboard_enabled  true if offboard control should be used
 * @param flag_control_rates_enabled  true if rates are stabilized
 * @param flag_control_attitude_enabled  true if attitude stabilization is mixed in
 * @param flag_control_acceleration_enabled  true if acceleration is controlled
 * @param flag_control_velocity_enabled  true if horizontal velocity (implies direction) is controlled
 * @param flag_control_position_enabled  true if position is controlled
 * @param flag_control_altitude_enabled  true if altitude is controlled
 * @param flag_control_climb_rate_enabled  true if climb rate is controlled
 * @param flag_control_termination_enabled  true if flighttermination is enabled
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_vehicle_control_mode_send(mavlink_channel_t chan, uint8_t flag_armed, uint8_t flag_multicopter_position_control_enabled, uint8_t flag_control_manual_enabled, uint8_t flag_control_auto_enabled, uint8_t flag_control_offboard_enabled, uint8_t flag_control_rates_enabled, uint8_t flag_control_attitude_enabled, uint8_t flag_control_acceleration_enabled, uint8_t flag_control_velocity_enabled, uint8_t flag_control_position_enabled, uint8_t flag_control_altitude_enabled, uint8_t flag_control_climb_rate_enabled, uint8_t flag_control_termination_enabled)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_VEHICLE_CONTROL_MODE_LEN];
    _mav_put_uint8_t(buf, 0, flag_armed);
    _mav_put_uint8_t(buf, 1, flag_multicopter_position_control_enabled);
    _mav_put_uint8_t(buf, 2, flag_control_manual_enabled);
    _mav_put_uint8_t(buf, 3, flag_control_auto_enabled);
    _mav_put_uint8_t(buf, 4, flag_control_offboard_enabled);
    _mav_put_uint8_t(buf, 5, flag_control_rates_enabled);
    _mav_put_uint8_t(buf, 6, flag_control_attitude_enabled);
    _mav_put_uint8_t(buf, 7, flag_control_acceleration_enabled);
    _mav_put_uint8_t(buf, 8, flag_control_velocity_enabled);
    _mav_put_uint8_t(buf, 9, flag_control_position_enabled);
    _mav_put_uint8_t(buf, 10, flag_control_altitude_enabled);
    _mav_put_uint8_t(buf, 11, flag_control_climb_rate_enabled);
    _mav_put_uint8_t(buf, 12, flag_control_termination_enabled);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VEHICLE_CONTROL_MODE, buf, MAVLINK_MSG_ID_VEHICLE_CONTROL_MODE_MIN_LEN, MAVLINK_MSG_ID_VEHICLE_CONTROL_MODE_LEN, MAVLINK_MSG_ID_VEHICLE_CONTROL_MODE_CRC);
#else
    mavlink_vehicle_control_mode_t packet;
    packet.flag_armed = flag_armed;
    packet.flag_multicopter_position_control_enabled = flag_multicopter_position_control_enabled;
    packet.flag_control_manual_enabled = flag_control_manual_enabled;
    packet.flag_control_auto_enabled = flag_control_auto_enabled;
    packet.flag_control_offboard_enabled = flag_control_offboard_enabled;
    packet.flag_control_rates_enabled = flag_control_rates_enabled;
    packet.flag_control_attitude_enabled = flag_control_attitude_enabled;
    packet.flag_control_acceleration_enabled = flag_control_acceleration_enabled;
    packet.flag_control_velocity_enabled = flag_control_velocity_enabled;
    packet.flag_control_position_enabled = flag_control_position_enabled;
    packet.flag_control_altitude_enabled = flag_control_altitude_enabled;
    packet.flag_control_climb_rate_enabled = flag_control_climb_rate_enabled;
    packet.flag_control_termination_enabled = flag_control_termination_enabled;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VEHICLE_CONTROL_MODE, (const char *)&packet, MAVLINK_MSG_ID_VEHICLE_CONTROL_MODE_MIN_LEN, MAVLINK_MSG_ID_VEHICLE_CONTROL_MODE_LEN, MAVLINK_MSG_ID_VEHICLE_CONTROL_MODE_CRC);
#endif
}

/**
 * @brief Send a vehicle_control_mode message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_vehicle_control_mode_send_struct(mavlink_channel_t chan, const mavlink_vehicle_control_mode_t* vehicle_control_mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_vehicle_control_mode_send(chan, vehicle_control_mode->flag_armed, vehicle_control_mode->flag_multicopter_position_control_enabled, vehicle_control_mode->flag_control_manual_enabled, vehicle_control_mode->flag_control_auto_enabled, vehicle_control_mode->flag_control_offboard_enabled, vehicle_control_mode->flag_control_rates_enabled, vehicle_control_mode->flag_control_attitude_enabled, vehicle_control_mode->flag_control_acceleration_enabled, vehicle_control_mode->flag_control_velocity_enabled, vehicle_control_mode->flag_control_position_enabled, vehicle_control_mode->flag_control_altitude_enabled, vehicle_control_mode->flag_control_climb_rate_enabled, vehicle_control_mode->flag_control_termination_enabled);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VEHICLE_CONTROL_MODE, (const char *)vehicle_control_mode, MAVLINK_MSG_ID_VEHICLE_CONTROL_MODE_MIN_LEN, MAVLINK_MSG_ID_VEHICLE_CONTROL_MODE_LEN, MAVLINK_MSG_ID_VEHICLE_CONTROL_MODE_CRC);
#endif
}

#if MAVLINK_MSG_ID_VEHICLE_CONTROL_MODE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_vehicle_control_mode_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t flag_armed, uint8_t flag_multicopter_position_control_enabled, uint8_t flag_control_manual_enabled, uint8_t flag_control_auto_enabled, uint8_t flag_control_offboard_enabled, uint8_t flag_control_rates_enabled, uint8_t flag_control_attitude_enabled, uint8_t flag_control_acceleration_enabled, uint8_t flag_control_velocity_enabled, uint8_t flag_control_position_enabled, uint8_t flag_control_altitude_enabled, uint8_t flag_control_climb_rate_enabled, uint8_t flag_control_termination_enabled)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, flag_armed);
    _mav_put_uint8_t(buf, 1, flag_multicopter_position_control_enabled);
    _mav_put_uint8_t(buf, 2, flag_control_manual_enabled);
    _mav_put_uint8_t(buf, 3, flag_control_auto_enabled);
    _mav_put_uint8_t(buf, 4, flag_control_offboard_enabled);
    _mav_put_uint8_t(buf, 5, flag_control_rates_enabled);
    _mav_put_uint8_t(buf, 6, flag_control_attitude_enabled);
    _mav_put_uint8_t(buf, 7, flag_control_acceleration_enabled);
    _mav_put_uint8_t(buf, 8, flag_control_velocity_enabled);
    _mav_put_uint8_t(buf, 9, flag_control_position_enabled);
    _mav_put_uint8_t(buf, 10, flag_control_altitude_enabled);
    _mav_put_uint8_t(buf, 11, flag_control_climb_rate_enabled);
    _mav_put_uint8_t(buf, 12, flag_control_termination_enabled);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VEHICLE_CONTROL_MODE, buf, MAVLINK_MSG_ID_VEHICLE_CONTROL_MODE_MIN_LEN, MAVLINK_MSG_ID_VEHICLE_CONTROL_MODE_LEN, MAVLINK_MSG_ID_VEHICLE_CONTROL_MODE_CRC);
#else
    mavlink_vehicle_control_mode_t *packet = (mavlink_vehicle_control_mode_t *)msgbuf;
    packet->flag_armed = flag_armed;
    packet->flag_multicopter_position_control_enabled = flag_multicopter_position_control_enabled;
    packet->flag_control_manual_enabled = flag_control_manual_enabled;
    packet->flag_control_auto_enabled = flag_control_auto_enabled;
    packet->flag_control_offboard_enabled = flag_control_offboard_enabled;
    packet->flag_control_rates_enabled = flag_control_rates_enabled;
    packet->flag_control_attitude_enabled = flag_control_attitude_enabled;
    packet->flag_control_acceleration_enabled = flag_control_acceleration_enabled;
    packet->flag_control_velocity_enabled = flag_control_velocity_enabled;
    packet->flag_control_position_enabled = flag_control_position_enabled;
    packet->flag_control_altitude_enabled = flag_control_altitude_enabled;
    packet->flag_control_climb_rate_enabled = flag_control_climb_rate_enabled;
    packet->flag_control_termination_enabled = flag_control_termination_enabled;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VEHICLE_CONTROL_MODE, (const char *)packet, MAVLINK_MSG_ID_VEHICLE_CONTROL_MODE_MIN_LEN, MAVLINK_MSG_ID_VEHICLE_CONTROL_MODE_LEN, MAVLINK_MSG_ID_VEHICLE_CONTROL_MODE_CRC);
#endif
}
#endif

#endif

// MESSAGE VEHICLE_CONTROL_MODE UNPACKING


/**
 * @brief Get field flag_armed from vehicle_control_mode message
 *
 * @return  synonym for actuator_armed.armed
 */
static inline uint8_t mavlink_msg_vehicle_control_mode_get_flag_armed(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field flag_multicopter_position_control_enabled from vehicle_control_mode message
 *
 * @return  
 */
static inline uint8_t mavlink_msg_vehicle_control_mode_get_flag_multicopter_position_control_enabled(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Get field flag_control_manual_enabled from vehicle_control_mode message
 *
 * @return  true if manual input is mixed in
 */
static inline uint8_t mavlink_msg_vehicle_control_mode_get_flag_control_manual_enabled(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  2);
}

/**
 * @brief Get field flag_control_auto_enabled from vehicle_control_mode message
 *
 * @return  true if onboard autopilot should act
 */
static inline uint8_t mavlink_msg_vehicle_control_mode_get_flag_control_auto_enabled(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  3);
}

/**
 * @brief Get field flag_control_offboard_enabled from vehicle_control_mode message
 *
 * @return  true if offboard control should be used
 */
static inline uint8_t mavlink_msg_vehicle_control_mode_get_flag_control_offboard_enabled(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  4);
}

/**
 * @brief Get field flag_control_rates_enabled from vehicle_control_mode message
 *
 * @return  true if rates are stabilized
 */
static inline uint8_t mavlink_msg_vehicle_control_mode_get_flag_control_rates_enabled(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  5);
}

/**
 * @brief Get field flag_control_attitude_enabled from vehicle_control_mode message
 *
 * @return  true if attitude stabilization is mixed in
 */
static inline uint8_t mavlink_msg_vehicle_control_mode_get_flag_control_attitude_enabled(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  6);
}

/**
 * @brief Get field flag_control_acceleration_enabled from vehicle_control_mode message
 *
 * @return  true if acceleration is controlled
 */
static inline uint8_t mavlink_msg_vehicle_control_mode_get_flag_control_acceleration_enabled(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  7);
}

/**
 * @brief Get field flag_control_velocity_enabled from vehicle_control_mode message
 *
 * @return  true if horizontal velocity (implies direction) is controlled
 */
static inline uint8_t mavlink_msg_vehicle_control_mode_get_flag_control_velocity_enabled(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  8);
}

/**
 * @brief Get field flag_control_position_enabled from vehicle_control_mode message
 *
 * @return  true if position is controlled
 */
static inline uint8_t mavlink_msg_vehicle_control_mode_get_flag_control_position_enabled(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  9);
}

/**
 * @brief Get field flag_control_altitude_enabled from vehicle_control_mode message
 *
 * @return  true if altitude is controlled
 */
static inline uint8_t mavlink_msg_vehicle_control_mode_get_flag_control_altitude_enabled(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  10);
}

/**
 * @brief Get field flag_control_climb_rate_enabled from vehicle_control_mode message
 *
 * @return  true if climb rate is controlled
 */
static inline uint8_t mavlink_msg_vehicle_control_mode_get_flag_control_climb_rate_enabled(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  11);
}

/**
 * @brief Get field flag_control_termination_enabled from vehicle_control_mode message
 *
 * @return  true if flighttermination is enabled
 */
static inline uint8_t mavlink_msg_vehicle_control_mode_get_flag_control_termination_enabled(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  12);
}

/**
 * @brief Decode a vehicle_control_mode message into a struct
 *
 * @param msg The message to decode
 * @param vehicle_control_mode C-struct to decode the message contents into
 */
static inline void mavlink_msg_vehicle_control_mode_decode(const mavlink_message_t* msg, mavlink_vehicle_control_mode_t* vehicle_control_mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    vehicle_control_mode->flag_armed = mavlink_msg_vehicle_control_mode_get_flag_armed(msg);
    vehicle_control_mode->flag_multicopter_position_control_enabled = mavlink_msg_vehicle_control_mode_get_flag_multicopter_position_control_enabled(msg);
    vehicle_control_mode->flag_control_manual_enabled = mavlink_msg_vehicle_control_mode_get_flag_control_manual_enabled(msg);
    vehicle_control_mode->flag_control_auto_enabled = mavlink_msg_vehicle_control_mode_get_flag_control_auto_enabled(msg);
    vehicle_control_mode->flag_control_offboard_enabled = mavlink_msg_vehicle_control_mode_get_flag_control_offboard_enabled(msg);
    vehicle_control_mode->flag_control_rates_enabled = mavlink_msg_vehicle_control_mode_get_flag_control_rates_enabled(msg);
    vehicle_control_mode->flag_control_attitude_enabled = mavlink_msg_vehicle_control_mode_get_flag_control_attitude_enabled(msg);
    vehicle_control_mode->flag_control_acceleration_enabled = mavlink_msg_vehicle_control_mode_get_flag_control_acceleration_enabled(msg);
    vehicle_control_mode->flag_control_velocity_enabled = mavlink_msg_vehicle_control_mode_get_flag_control_velocity_enabled(msg);
    vehicle_control_mode->flag_control_position_enabled = mavlink_msg_vehicle_control_mode_get_flag_control_position_enabled(msg);
    vehicle_control_mode->flag_control_altitude_enabled = mavlink_msg_vehicle_control_mode_get_flag_control_altitude_enabled(msg);
    vehicle_control_mode->flag_control_climb_rate_enabled = mavlink_msg_vehicle_control_mode_get_flag_control_climb_rate_enabled(msg);
    vehicle_control_mode->flag_control_termination_enabled = mavlink_msg_vehicle_control_mode_get_flag_control_termination_enabled(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_VEHICLE_CONTROL_MODE_LEN? msg->len : MAVLINK_MSG_ID_VEHICLE_CONTROL_MODE_LEN;
        memset(vehicle_control_mode, 0, MAVLINK_MSG_ID_VEHICLE_CONTROL_MODE_LEN);
    memcpy(vehicle_control_mode, _MAV_PAYLOAD(msg), len);
#endif
}
