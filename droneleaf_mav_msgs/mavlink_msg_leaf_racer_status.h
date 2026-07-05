#pragma once
// MESSAGE LEAF_RACER_STATUS PACKING

#define MAVLINK_MSG_ID_LEAF_RACER_STATUS 77051


typedef struct __mavlink_leaf_racer_status_t {
 int32_t gps_lat_1e7; /*<  Latitude, degrees * 1e7*/
 int32_t gps_lon_1e7; /*<  Longitude, degrees * 1e7*/
 int16_t gps_alt_m; /*<  Altitude, meters*/
 uint8_t msp_status; /*<  Betaflight MSP link status (0/1)*/
 uint8_t current_racer_mode; /*<  Racer mode (0=Angle,1=AutomatedRollPitch,2=Intercept)*/
 uint8_t tracker_health_state; /*<  Tracker health (0=UNKNOWN,1=NOT_HEALTHY,2=HEALTHY)*/
 uint8_t estimator_health; /*<  Estimator health (0=NOT_HEALTHY,1=IMU,2=IMU_AND_GPS)*/
 uint8_t rc_connection; /*<  RC link connected (0/1)*/
 uint8_t terminal_switch_state; /*<  Terminal switch state (0=UNKNOWN,1=LOW,2=MID,3=HIGH)*/
 uint8_t auto_terminal; /*<  Auto-terminal (auto-intercept) enabled (0/1)*/
 uint8_t gps_num_sat; /*<  Number of satellites*/
 uint8_t gps_fix; /*<  GPS fix (0=no fix, 1=fix)*/
} mavlink_leaf_racer_status_t;

#define MAVLINK_MSG_ID_LEAF_RACER_STATUS_LEN 19
#define MAVLINK_MSG_ID_LEAF_RACER_STATUS_MIN_LEN 19
#define MAVLINK_MSG_ID_77051_LEN 19
#define MAVLINK_MSG_ID_77051_MIN_LEN 19

#define MAVLINK_MSG_ID_LEAF_RACER_STATUS_CRC 50
#define MAVLINK_MSG_ID_77051_CRC 50



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_LEAF_RACER_STATUS { \
    77051, \
    "LEAF_RACER_STATUS", \
    12, \
    {  { "msp_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 10, offsetof(mavlink_leaf_racer_status_t, msp_status) }, \
         { "current_racer_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 11, offsetof(mavlink_leaf_racer_status_t, current_racer_mode) }, \
         { "tracker_health_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 12, offsetof(mavlink_leaf_racer_status_t, tracker_health_state) }, \
         { "estimator_health", NULL, MAVLINK_TYPE_UINT8_T, 0, 13, offsetof(mavlink_leaf_racer_status_t, estimator_health) }, \
         { "rc_connection", NULL, MAVLINK_TYPE_UINT8_T, 0, 14, offsetof(mavlink_leaf_racer_status_t, rc_connection) }, \
         { "terminal_switch_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 15, offsetof(mavlink_leaf_racer_status_t, terminal_switch_state) }, \
         { "auto_terminal", NULL, MAVLINK_TYPE_UINT8_T, 0, 16, offsetof(mavlink_leaf_racer_status_t, auto_terminal) }, \
         { "gps_lat_1e7", NULL, MAVLINK_TYPE_INT32_T, 0, 0, offsetof(mavlink_leaf_racer_status_t, gps_lat_1e7) }, \
         { "gps_lon_1e7", NULL, MAVLINK_TYPE_INT32_T, 0, 4, offsetof(mavlink_leaf_racer_status_t, gps_lon_1e7) }, \
         { "gps_alt_m", NULL, MAVLINK_TYPE_INT16_T, 0, 8, offsetof(mavlink_leaf_racer_status_t, gps_alt_m) }, \
         { "gps_num_sat", NULL, MAVLINK_TYPE_UINT8_T, 0, 17, offsetof(mavlink_leaf_racer_status_t, gps_num_sat) }, \
         { "gps_fix", NULL, MAVLINK_TYPE_UINT8_T, 0, 18, offsetof(mavlink_leaf_racer_status_t, gps_fix) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_LEAF_RACER_STATUS { \
    "LEAF_RACER_STATUS", \
    12, \
    {  { "msp_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 10, offsetof(mavlink_leaf_racer_status_t, msp_status) }, \
         { "current_racer_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 11, offsetof(mavlink_leaf_racer_status_t, current_racer_mode) }, \
         { "tracker_health_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 12, offsetof(mavlink_leaf_racer_status_t, tracker_health_state) }, \
         { "estimator_health", NULL, MAVLINK_TYPE_UINT8_T, 0, 13, offsetof(mavlink_leaf_racer_status_t, estimator_health) }, \
         { "rc_connection", NULL, MAVLINK_TYPE_UINT8_T, 0, 14, offsetof(mavlink_leaf_racer_status_t, rc_connection) }, \
         { "terminal_switch_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 15, offsetof(mavlink_leaf_racer_status_t, terminal_switch_state) }, \
         { "auto_terminal", NULL, MAVLINK_TYPE_UINT8_T, 0, 16, offsetof(mavlink_leaf_racer_status_t, auto_terminal) }, \
         { "gps_lat_1e7", NULL, MAVLINK_TYPE_INT32_T, 0, 0, offsetof(mavlink_leaf_racer_status_t, gps_lat_1e7) }, \
         { "gps_lon_1e7", NULL, MAVLINK_TYPE_INT32_T, 0, 4, offsetof(mavlink_leaf_racer_status_t, gps_lon_1e7) }, \
         { "gps_alt_m", NULL, MAVLINK_TYPE_INT16_T, 0, 8, offsetof(mavlink_leaf_racer_status_t, gps_alt_m) }, \
         { "gps_num_sat", NULL, MAVLINK_TYPE_UINT8_T, 0, 17, offsetof(mavlink_leaf_racer_status_t, gps_num_sat) }, \
         { "gps_fix", NULL, MAVLINK_TYPE_UINT8_T, 0, 18, offsetof(mavlink_leaf_racer_status_t, gps_fix) }, \
         } \
}
#endif

/**
 * @brief Pack a leaf_racer_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param msp_status  Betaflight MSP link status (0/1)
 * @param current_racer_mode  Racer mode (0=Angle,1=AutomatedRollPitch,2=Intercept)
 * @param tracker_health_state  Tracker health (0=UNKNOWN,1=NOT_HEALTHY,2=HEALTHY)
 * @param estimator_health  Estimator health (0=NOT_HEALTHY,1=IMU,2=IMU_AND_GPS)
 * @param rc_connection  RC link connected (0/1)
 * @param terminal_switch_state  Terminal switch state (0=UNKNOWN,1=LOW,2=MID,3=HIGH)
 * @param auto_terminal  Auto-terminal (auto-intercept) enabled (0/1)
 * @param gps_lat_1e7  Latitude, degrees * 1e7
 * @param gps_lon_1e7  Longitude, degrees * 1e7
 * @param gps_alt_m  Altitude, meters
 * @param gps_num_sat  Number of satellites
 * @param gps_fix  GPS fix (0=no fix, 1=fix)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_racer_status_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t msp_status, uint8_t current_racer_mode, uint8_t tracker_health_state, uint8_t estimator_health, uint8_t rc_connection, uint8_t terminal_switch_state, uint8_t auto_terminal, int32_t gps_lat_1e7, int32_t gps_lon_1e7, int16_t gps_alt_m, uint8_t gps_num_sat, uint8_t gps_fix)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_RACER_STATUS_LEN];
    _mav_put_int32_t(buf, 0, gps_lat_1e7);
    _mav_put_int32_t(buf, 4, gps_lon_1e7);
    _mav_put_int16_t(buf, 8, gps_alt_m);
    _mav_put_uint8_t(buf, 10, msp_status);
    _mav_put_uint8_t(buf, 11, current_racer_mode);
    _mav_put_uint8_t(buf, 12, tracker_health_state);
    _mav_put_uint8_t(buf, 13, estimator_health);
    _mav_put_uint8_t(buf, 14, rc_connection);
    _mav_put_uint8_t(buf, 15, terminal_switch_state);
    _mav_put_uint8_t(buf, 16, auto_terminal);
    _mav_put_uint8_t(buf, 17, gps_num_sat);
    _mav_put_uint8_t(buf, 18, gps_fix);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_RACER_STATUS_LEN);
#else
    mavlink_leaf_racer_status_t packet;
    packet.gps_lat_1e7 = gps_lat_1e7;
    packet.gps_lon_1e7 = gps_lon_1e7;
    packet.gps_alt_m = gps_alt_m;
    packet.msp_status = msp_status;
    packet.current_racer_mode = current_racer_mode;
    packet.tracker_health_state = tracker_health_state;
    packet.estimator_health = estimator_health;
    packet.rc_connection = rc_connection;
    packet.terminal_switch_state = terminal_switch_state;
    packet.auto_terminal = auto_terminal;
    packet.gps_num_sat = gps_num_sat;
    packet.gps_fix = gps_fix;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_RACER_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_RACER_STATUS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_LEAF_RACER_STATUS_MIN_LEN, MAVLINK_MSG_ID_LEAF_RACER_STATUS_LEN, MAVLINK_MSG_ID_LEAF_RACER_STATUS_CRC);
}

/**
 * @brief Pack a leaf_racer_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param msp_status  Betaflight MSP link status (0/1)
 * @param current_racer_mode  Racer mode (0=Angle,1=AutomatedRollPitch,2=Intercept)
 * @param tracker_health_state  Tracker health (0=UNKNOWN,1=NOT_HEALTHY,2=HEALTHY)
 * @param estimator_health  Estimator health (0=NOT_HEALTHY,1=IMU,2=IMU_AND_GPS)
 * @param rc_connection  RC link connected (0/1)
 * @param terminal_switch_state  Terminal switch state (0=UNKNOWN,1=LOW,2=MID,3=HIGH)
 * @param auto_terminal  Auto-terminal (auto-intercept) enabled (0/1)
 * @param gps_lat_1e7  Latitude, degrees * 1e7
 * @param gps_lon_1e7  Longitude, degrees * 1e7
 * @param gps_alt_m  Altitude, meters
 * @param gps_num_sat  Number of satellites
 * @param gps_fix  GPS fix (0=no fix, 1=fix)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_racer_status_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t msp_status, uint8_t current_racer_mode, uint8_t tracker_health_state, uint8_t estimator_health, uint8_t rc_connection, uint8_t terminal_switch_state, uint8_t auto_terminal, int32_t gps_lat_1e7, int32_t gps_lon_1e7, int16_t gps_alt_m, uint8_t gps_num_sat, uint8_t gps_fix)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_RACER_STATUS_LEN];
    _mav_put_int32_t(buf, 0, gps_lat_1e7);
    _mav_put_int32_t(buf, 4, gps_lon_1e7);
    _mav_put_int16_t(buf, 8, gps_alt_m);
    _mav_put_uint8_t(buf, 10, msp_status);
    _mav_put_uint8_t(buf, 11, current_racer_mode);
    _mav_put_uint8_t(buf, 12, tracker_health_state);
    _mav_put_uint8_t(buf, 13, estimator_health);
    _mav_put_uint8_t(buf, 14, rc_connection);
    _mav_put_uint8_t(buf, 15, terminal_switch_state);
    _mav_put_uint8_t(buf, 16, auto_terminal);
    _mav_put_uint8_t(buf, 17, gps_num_sat);
    _mav_put_uint8_t(buf, 18, gps_fix);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_RACER_STATUS_LEN);
#else
    mavlink_leaf_racer_status_t packet;
    packet.gps_lat_1e7 = gps_lat_1e7;
    packet.gps_lon_1e7 = gps_lon_1e7;
    packet.gps_alt_m = gps_alt_m;
    packet.msp_status = msp_status;
    packet.current_racer_mode = current_racer_mode;
    packet.tracker_health_state = tracker_health_state;
    packet.estimator_health = estimator_health;
    packet.rc_connection = rc_connection;
    packet.terminal_switch_state = terminal_switch_state;
    packet.auto_terminal = auto_terminal;
    packet.gps_num_sat = gps_num_sat;
    packet.gps_fix = gps_fix;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_RACER_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_RACER_STATUS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_RACER_STATUS_MIN_LEN, MAVLINK_MSG_ID_LEAF_RACER_STATUS_LEN, MAVLINK_MSG_ID_LEAF_RACER_STATUS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_RACER_STATUS_MIN_LEN, MAVLINK_MSG_ID_LEAF_RACER_STATUS_LEN);
#endif
}

/**
 * @brief Pack a leaf_racer_status message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param msp_status  Betaflight MSP link status (0/1)
 * @param current_racer_mode  Racer mode (0=Angle,1=AutomatedRollPitch,2=Intercept)
 * @param tracker_health_state  Tracker health (0=UNKNOWN,1=NOT_HEALTHY,2=HEALTHY)
 * @param estimator_health  Estimator health (0=NOT_HEALTHY,1=IMU,2=IMU_AND_GPS)
 * @param rc_connection  RC link connected (0/1)
 * @param terminal_switch_state  Terminal switch state (0=UNKNOWN,1=LOW,2=MID,3=HIGH)
 * @param auto_terminal  Auto-terminal (auto-intercept) enabled (0/1)
 * @param gps_lat_1e7  Latitude, degrees * 1e7
 * @param gps_lon_1e7  Longitude, degrees * 1e7
 * @param gps_alt_m  Altitude, meters
 * @param gps_num_sat  Number of satellites
 * @param gps_fix  GPS fix (0=no fix, 1=fix)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_racer_status_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t msp_status,uint8_t current_racer_mode,uint8_t tracker_health_state,uint8_t estimator_health,uint8_t rc_connection,uint8_t terminal_switch_state,uint8_t auto_terminal,int32_t gps_lat_1e7,int32_t gps_lon_1e7,int16_t gps_alt_m,uint8_t gps_num_sat,uint8_t gps_fix)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_RACER_STATUS_LEN];
    _mav_put_int32_t(buf, 0, gps_lat_1e7);
    _mav_put_int32_t(buf, 4, gps_lon_1e7);
    _mav_put_int16_t(buf, 8, gps_alt_m);
    _mav_put_uint8_t(buf, 10, msp_status);
    _mav_put_uint8_t(buf, 11, current_racer_mode);
    _mav_put_uint8_t(buf, 12, tracker_health_state);
    _mav_put_uint8_t(buf, 13, estimator_health);
    _mav_put_uint8_t(buf, 14, rc_connection);
    _mav_put_uint8_t(buf, 15, terminal_switch_state);
    _mav_put_uint8_t(buf, 16, auto_terminal);
    _mav_put_uint8_t(buf, 17, gps_num_sat);
    _mav_put_uint8_t(buf, 18, gps_fix);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_RACER_STATUS_LEN);
#else
    mavlink_leaf_racer_status_t packet;
    packet.gps_lat_1e7 = gps_lat_1e7;
    packet.gps_lon_1e7 = gps_lon_1e7;
    packet.gps_alt_m = gps_alt_m;
    packet.msp_status = msp_status;
    packet.current_racer_mode = current_racer_mode;
    packet.tracker_health_state = tracker_health_state;
    packet.estimator_health = estimator_health;
    packet.rc_connection = rc_connection;
    packet.terminal_switch_state = terminal_switch_state;
    packet.auto_terminal = auto_terminal;
    packet.gps_num_sat = gps_num_sat;
    packet.gps_fix = gps_fix;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_RACER_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_RACER_STATUS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_LEAF_RACER_STATUS_MIN_LEN, MAVLINK_MSG_ID_LEAF_RACER_STATUS_LEN, MAVLINK_MSG_ID_LEAF_RACER_STATUS_CRC);
}

/**
 * @brief Encode a leaf_racer_status struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param leaf_racer_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_racer_status_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_leaf_racer_status_t* leaf_racer_status)
{
    return mavlink_msg_leaf_racer_status_pack(system_id, component_id, msg, leaf_racer_status->msp_status, leaf_racer_status->current_racer_mode, leaf_racer_status->tracker_health_state, leaf_racer_status->estimator_health, leaf_racer_status->rc_connection, leaf_racer_status->terminal_switch_state, leaf_racer_status->auto_terminal, leaf_racer_status->gps_lat_1e7, leaf_racer_status->gps_lon_1e7, leaf_racer_status->gps_alt_m, leaf_racer_status->gps_num_sat, leaf_racer_status->gps_fix);
}

/**
 * @brief Encode a leaf_racer_status struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param leaf_racer_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_racer_status_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_leaf_racer_status_t* leaf_racer_status)
{
    return mavlink_msg_leaf_racer_status_pack_chan(system_id, component_id, chan, msg, leaf_racer_status->msp_status, leaf_racer_status->current_racer_mode, leaf_racer_status->tracker_health_state, leaf_racer_status->estimator_health, leaf_racer_status->rc_connection, leaf_racer_status->terminal_switch_state, leaf_racer_status->auto_terminal, leaf_racer_status->gps_lat_1e7, leaf_racer_status->gps_lon_1e7, leaf_racer_status->gps_alt_m, leaf_racer_status->gps_num_sat, leaf_racer_status->gps_fix);
}

/**
 * @brief Encode a leaf_racer_status struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param leaf_racer_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_racer_status_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_leaf_racer_status_t* leaf_racer_status)
{
    return mavlink_msg_leaf_racer_status_pack_status(system_id, component_id, _status, msg,  leaf_racer_status->msp_status, leaf_racer_status->current_racer_mode, leaf_racer_status->tracker_health_state, leaf_racer_status->estimator_health, leaf_racer_status->rc_connection, leaf_racer_status->terminal_switch_state, leaf_racer_status->auto_terminal, leaf_racer_status->gps_lat_1e7, leaf_racer_status->gps_lon_1e7, leaf_racer_status->gps_alt_m, leaf_racer_status->gps_num_sat, leaf_racer_status->gps_fix);
}

/**
 * @brief Send a leaf_racer_status message
 * @param chan MAVLink channel to send the message
 *
 * @param msp_status  Betaflight MSP link status (0/1)
 * @param current_racer_mode  Racer mode (0=Angle,1=AutomatedRollPitch,2=Intercept)
 * @param tracker_health_state  Tracker health (0=UNKNOWN,1=NOT_HEALTHY,2=HEALTHY)
 * @param estimator_health  Estimator health (0=NOT_HEALTHY,1=IMU,2=IMU_AND_GPS)
 * @param rc_connection  RC link connected (0/1)
 * @param terminal_switch_state  Terminal switch state (0=UNKNOWN,1=LOW,2=MID,3=HIGH)
 * @param auto_terminal  Auto-terminal (auto-intercept) enabled (0/1)
 * @param gps_lat_1e7  Latitude, degrees * 1e7
 * @param gps_lon_1e7  Longitude, degrees * 1e7
 * @param gps_alt_m  Altitude, meters
 * @param gps_num_sat  Number of satellites
 * @param gps_fix  GPS fix (0=no fix, 1=fix)
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_leaf_racer_status_send(mavlink_channel_t chan, uint8_t msp_status, uint8_t current_racer_mode, uint8_t tracker_health_state, uint8_t estimator_health, uint8_t rc_connection, uint8_t terminal_switch_state, uint8_t auto_terminal, int32_t gps_lat_1e7, int32_t gps_lon_1e7, int16_t gps_alt_m, uint8_t gps_num_sat, uint8_t gps_fix)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_RACER_STATUS_LEN];
    _mav_put_int32_t(buf, 0, gps_lat_1e7);
    _mav_put_int32_t(buf, 4, gps_lon_1e7);
    _mav_put_int16_t(buf, 8, gps_alt_m);
    _mav_put_uint8_t(buf, 10, msp_status);
    _mav_put_uint8_t(buf, 11, current_racer_mode);
    _mav_put_uint8_t(buf, 12, tracker_health_state);
    _mav_put_uint8_t(buf, 13, estimator_health);
    _mav_put_uint8_t(buf, 14, rc_connection);
    _mav_put_uint8_t(buf, 15, terminal_switch_state);
    _mav_put_uint8_t(buf, 16, auto_terminal);
    _mav_put_uint8_t(buf, 17, gps_num_sat);
    _mav_put_uint8_t(buf, 18, gps_fix);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_RACER_STATUS, buf, MAVLINK_MSG_ID_LEAF_RACER_STATUS_MIN_LEN, MAVLINK_MSG_ID_LEAF_RACER_STATUS_LEN, MAVLINK_MSG_ID_LEAF_RACER_STATUS_CRC);
#else
    mavlink_leaf_racer_status_t packet;
    packet.gps_lat_1e7 = gps_lat_1e7;
    packet.gps_lon_1e7 = gps_lon_1e7;
    packet.gps_alt_m = gps_alt_m;
    packet.msp_status = msp_status;
    packet.current_racer_mode = current_racer_mode;
    packet.tracker_health_state = tracker_health_state;
    packet.estimator_health = estimator_health;
    packet.rc_connection = rc_connection;
    packet.terminal_switch_state = terminal_switch_state;
    packet.auto_terminal = auto_terminal;
    packet.gps_num_sat = gps_num_sat;
    packet.gps_fix = gps_fix;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_RACER_STATUS, (const char *)&packet, MAVLINK_MSG_ID_LEAF_RACER_STATUS_MIN_LEN, MAVLINK_MSG_ID_LEAF_RACER_STATUS_LEN, MAVLINK_MSG_ID_LEAF_RACER_STATUS_CRC);
#endif
}

/**
 * @brief Send a leaf_racer_status message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_leaf_racer_status_send_struct(mavlink_channel_t chan, const mavlink_leaf_racer_status_t* leaf_racer_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_leaf_racer_status_send(chan, leaf_racer_status->msp_status, leaf_racer_status->current_racer_mode, leaf_racer_status->tracker_health_state, leaf_racer_status->estimator_health, leaf_racer_status->rc_connection, leaf_racer_status->terminal_switch_state, leaf_racer_status->auto_terminal, leaf_racer_status->gps_lat_1e7, leaf_racer_status->gps_lon_1e7, leaf_racer_status->gps_alt_m, leaf_racer_status->gps_num_sat, leaf_racer_status->gps_fix);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_RACER_STATUS, (const char *)leaf_racer_status, MAVLINK_MSG_ID_LEAF_RACER_STATUS_MIN_LEN, MAVLINK_MSG_ID_LEAF_RACER_STATUS_LEN, MAVLINK_MSG_ID_LEAF_RACER_STATUS_CRC);
#endif
}

#if MAVLINK_MSG_ID_LEAF_RACER_STATUS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_leaf_racer_status_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t msp_status, uint8_t current_racer_mode, uint8_t tracker_health_state, uint8_t estimator_health, uint8_t rc_connection, uint8_t terminal_switch_state, uint8_t auto_terminal, int32_t gps_lat_1e7, int32_t gps_lon_1e7, int16_t gps_alt_m, uint8_t gps_num_sat, uint8_t gps_fix)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_int32_t(buf, 0, gps_lat_1e7);
    _mav_put_int32_t(buf, 4, gps_lon_1e7);
    _mav_put_int16_t(buf, 8, gps_alt_m);
    _mav_put_uint8_t(buf, 10, msp_status);
    _mav_put_uint8_t(buf, 11, current_racer_mode);
    _mav_put_uint8_t(buf, 12, tracker_health_state);
    _mav_put_uint8_t(buf, 13, estimator_health);
    _mav_put_uint8_t(buf, 14, rc_connection);
    _mav_put_uint8_t(buf, 15, terminal_switch_state);
    _mav_put_uint8_t(buf, 16, auto_terminal);
    _mav_put_uint8_t(buf, 17, gps_num_sat);
    _mav_put_uint8_t(buf, 18, gps_fix);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_RACER_STATUS, buf, MAVLINK_MSG_ID_LEAF_RACER_STATUS_MIN_LEN, MAVLINK_MSG_ID_LEAF_RACER_STATUS_LEN, MAVLINK_MSG_ID_LEAF_RACER_STATUS_CRC);
#else
    mavlink_leaf_racer_status_t *packet = (mavlink_leaf_racer_status_t *)msgbuf;
    packet->gps_lat_1e7 = gps_lat_1e7;
    packet->gps_lon_1e7 = gps_lon_1e7;
    packet->gps_alt_m = gps_alt_m;
    packet->msp_status = msp_status;
    packet->current_racer_mode = current_racer_mode;
    packet->tracker_health_state = tracker_health_state;
    packet->estimator_health = estimator_health;
    packet->rc_connection = rc_connection;
    packet->terminal_switch_state = terminal_switch_state;
    packet->auto_terminal = auto_terminal;
    packet->gps_num_sat = gps_num_sat;
    packet->gps_fix = gps_fix;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_RACER_STATUS, (const char *)packet, MAVLINK_MSG_ID_LEAF_RACER_STATUS_MIN_LEN, MAVLINK_MSG_ID_LEAF_RACER_STATUS_LEN, MAVLINK_MSG_ID_LEAF_RACER_STATUS_CRC);
#endif
}
#endif

#endif

// MESSAGE LEAF_RACER_STATUS UNPACKING


/**
 * @brief Get field msp_status from leaf_racer_status message
 *
 * @return  Betaflight MSP link status (0/1)
 */
static inline uint8_t mavlink_msg_leaf_racer_status_get_msp_status(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  10);
}

/**
 * @brief Get field current_racer_mode from leaf_racer_status message
 *
 * @return  Racer mode (0=Angle,1=AutomatedRollPitch,2=Intercept)
 */
static inline uint8_t mavlink_msg_leaf_racer_status_get_current_racer_mode(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  11);
}

/**
 * @brief Get field tracker_health_state from leaf_racer_status message
 *
 * @return  Tracker health (0=UNKNOWN,1=NOT_HEALTHY,2=HEALTHY)
 */
static inline uint8_t mavlink_msg_leaf_racer_status_get_tracker_health_state(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  12);
}

/**
 * @brief Get field estimator_health from leaf_racer_status message
 *
 * @return  Estimator health (0=NOT_HEALTHY,1=IMU,2=IMU_AND_GPS)
 */
static inline uint8_t mavlink_msg_leaf_racer_status_get_estimator_health(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  13);
}

/**
 * @brief Get field rc_connection from leaf_racer_status message
 *
 * @return  RC link connected (0/1)
 */
static inline uint8_t mavlink_msg_leaf_racer_status_get_rc_connection(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  14);
}

/**
 * @brief Get field terminal_switch_state from leaf_racer_status message
 *
 * @return  Terminal switch state (0=UNKNOWN,1=LOW,2=MID,3=HIGH)
 */
static inline uint8_t mavlink_msg_leaf_racer_status_get_terminal_switch_state(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  15);
}

/**
 * @brief Get field auto_terminal from leaf_racer_status message
 *
 * @return  Auto-terminal (auto-intercept) enabled (0/1)
 */
static inline uint8_t mavlink_msg_leaf_racer_status_get_auto_terminal(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  16);
}

/**
 * @brief Get field gps_lat_1e7 from leaf_racer_status message
 *
 * @return  Latitude, degrees * 1e7
 */
static inline int32_t mavlink_msg_leaf_racer_status_get_gps_lat_1e7(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  0);
}

/**
 * @brief Get field gps_lon_1e7 from leaf_racer_status message
 *
 * @return  Longitude, degrees * 1e7
 */
static inline int32_t mavlink_msg_leaf_racer_status_get_gps_lon_1e7(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  4);
}

/**
 * @brief Get field gps_alt_m from leaf_racer_status message
 *
 * @return  Altitude, meters
 */
static inline int16_t mavlink_msg_leaf_racer_status_get_gps_alt_m(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  8);
}

/**
 * @brief Get field gps_num_sat from leaf_racer_status message
 *
 * @return  Number of satellites
 */
static inline uint8_t mavlink_msg_leaf_racer_status_get_gps_num_sat(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  17);
}

/**
 * @brief Get field gps_fix from leaf_racer_status message
 *
 * @return  GPS fix (0=no fix, 1=fix)
 */
static inline uint8_t mavlink_msg_leaf_racer_status_get_gps_fix(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  18);
}

/**
 * @brief Decode a leaf_racer_status message into a struct
 *
 * @param msg The message to decode
 * @param leaf_racer_status C-struct to decode the message contents into
 */
static inline void mavlink_msg_leaf_racer_status_decode(const mavlink_message_t* msg, mavlink_leaf_racer_status_t* leaf_racer_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    leaf_racer_status->gps_lat_1e7 = mavlink_msg_leaf_racer_status_get_gps_lat_1e7(msg);
    leaf_racer_status->gps_lon_1e7 = mavlink_msg_leaf_racer_status_get_gps_lon_1e7(msg);
    leaf_racer_status->gps_alt_m = mavlink_msg_leaf_racer_status_get_gps_alt_m(msg);
    leaf_racer_status->msp_status = mavlink_msg_leaf_racer_status_get_msp_status(msg);
    leaf_racer_status->current_racer_mode = mavlink_msg_leaf_racer_status_get_current_racer_mode(msg);
    leaf_racer_status->tracker_health_state = mavlink_msg_leaf_racer_status_get_tracker_health_state(msg);
    leaf_racer_status->estimator_health = mavlink_msg_leaf_racer_status_get_estimator_health(msg);
    leaf_racer_status->rc_connection = mavlink_msg_leaf_racer_status_get_rc_connection(msg);
    leaf_racer_status->terminal_switch_state = mavlink_msg_leaf_racer_status_get_terminal_switch_state(msg);
    leaf_racer_status->auto_terminal = mavlink_msg_leaf_racer_status_get_auto_terminal(msg);
    leaf_racer_status->gps_num_sat = mavlink_msg_leaf_racer_status_get_gps_num_sat(msg);
    leaf_racer_status->gps_fix = mavlink_msg_leaf_racer_status_get_gps_fix(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_LEAF_RACER_STATUS_LEN? msg->len : MAVLINK_MSG_ID_LEAF_RACER_STATUS_LEN;
        memset(leaf_racer_status, 0, MAVLINK_MSG_ID_LEAF_RACER_STATUS_LEN);
    memcpy(leaf_racer_status, _MAV_PAYLOAD(msg), len);
#endif
}
