#pragma once
// MESSAGE VEHICLE_STATUS PACKING

#define MAVLINK_MSG_ID_VEHICLE_STATUS 205


typedef struct __mavlink_vehicle_status_t {
 uint64_t armed_time; /*< [microseconds] Arming timestamp*/
 uint64_t takeoff_time; /*< [microseconds] Takeoff timestamp*/
 uint64_t nav_state_timestamp; /*<  time when current nav_state activated*/
 uint16_t failure_detector_status; /*<  Bitmask of detected failures*/
 uint8_t arming_state; /*<  */
 uint8_t latest_arming_reason; /*<  */
 uint8_t latest_disarming_reason; /*<  */
 uint8_t nav_state_user_intention; /*<  Mode that the user selected (might be different from nav_state in a failsafe situation)*/
 uint8_t nav_state; /*<  Currently active mode*/
 uint8_t hil_state; /*<  Bitmask of detected failures*/
 uint8_t vehicle_type; /*<  */
 uint8_t failsafe; /*<  true if system is in failsafe state (e.g.:RTL, Hover, Terminate, ...)*/
 uint8_t failsafe_and_user_took_over; /*<  true if system is in failsafe state but the user took over control*/
 uint8_t gcs_connection_lost; /*<  */
 uint8_t gcs_connection_lost_counter; /*<  */
 uint8_t high_latency_data_link_lost; /*<  */
 uint8_t is_vtol; /*<  */
 uint8_t is_vtol_tailsitter; /*<  */
 uint8_t in_transition_mode; /*<  */
 uint8_t in_transition_to_fw; /*<  */
} mavlink_vehicle_status_t;

#define MAVLINK_MSG_ID_VEHICLE_STATUS_LEN 42
#define MAVLINK_MSG_ID_VEHICLE_STATUS_MIN_LEN 42
#define MAVLINK_MSG_ID_205_LEN 42
#define MAVLINK_MSG_ID_205_MIN_LEN 42

#define MAVLINK_MSG_ID_VEHICLE_STATUS_CRC 4
#define MAVLINK_MSG_ID_205_CRC 4



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_VEHICLE_STATUS { \
    205, \
    "VEHICLE_STATUS", \
    20, \
    {  { "armed_time", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_vehicle_status_t, armed_time) }, \
         { "takeoff_time", NULL, MAVLINK_TYPE_UINT64_T, 0, 8, offsetof(mavlink_vehicle_status_t, takeoff_time) }, \
         { "arming_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 26, offsetof(mavlink_vehicle_status_t, arming_state) }, \
         { "latest_arming_reason", NULL, MAVLINK_TYPE_UINT8_T, 0, 27, offsetof(mavlink_vehicle_status_t, latest_arming_reason) }, \
         { "latest_disarming_reason", NULL, MAVLINK_TYPE_UINT8_T, 0, 28, offsetof(mavlink_vehicle_status_t, latest_disarming_reason) }, \
         { "nav_state_timestamp", NULL, MAVLINK_TYPE_UINT64_T, 0, 16, offsetof(mavlink_vehicle_status_t, nav_state_timestamp) }, \
         { "nav_state_user_intention", NULL, MAVLINK_TYPE_UINT8_T, 0, 29, offsetof(mavlink_vehicle_status_t, nav_state_user_intention) }, \
         { "nav_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 30, offsetof(mavlink_vehicle_status_t, nav_state) }, \
         { "failure_detector_status", NULL, MAVLINK_TYPE_UINT16_T, 0, 24, offsetof(mavlink_vehicle_status_t, failure_detector_status) }, \
         { "hil_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 31, offsetof(mavlink_vehicle_status_t, hil_state) }, \
         { "vehicle_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 32, offsetof(mavlink_vehicle_status_t, vehicle_type) }, \
         { "failsafe", NULL, MAVLINK_TYPE_UINT8_T, 0, 33, offsetof(mavlink_vehicle_status_t, failsafe) }, \
         { "failsafe_and_user_took_over", NULL, MAVLINK_TYPE_UINT8_T, 0, 34, offsetof(mavlink_vehicle_status_t, failsafe_and_user_took_over) }, \
         { "gcs_connection_lost", NULL, MAVLINK_TYPE_UINT8_T, 0, 35, offsetof(mavlink_vehicle_status_t, gcs_connection_lost) }, \
         { "gcs_connection_lost_counter", NULL, MAVLINK_TYPE_UINT8_T, 0, 36, offsetof(mavlink_vehicle_status_t, gcs_connection_lost_counter) }, \
         { "high_latency_data_link_lost", NULL, MAVLINK_TYPE_UINT8_T, 0, 37, offsetof(mavlink_vehicle_status_t, high_latency_data_link_lost) }, \
         { "is_vtol", NULL, MAVLINK_TYPE_UINT8_T, 0, 38, offsetof(mavlink_vehicle_status_t, is_vtol) }, \
         { "is_vtol_tailsitter", NULL, MAVLINK_TYPE_UINT8_T, 0, 39, offsetof(mavlink_vehicle_status_t, is_vtol_tailsitter) }, \
         { "in_transition_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 40, offsetof(mavlink_vehicle_status_t, in_transition_mode) }, \
         { "in_transition_to_fw", NULL, MAVLINK_TYPE_UINT8_T, 0, 41, offsetof(mavlink_vehicle_status_t, in_transition_to_fw) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_VEHICLE_STATUS { \
    "VEHICLE_STATUS", \
    20, \
    {  { "armed_time", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_vehicle_status_t, armed_time) }, \
         { "takeoff_time", NULL, MAVLINK_TYPE_UINT64_T, 0, 8, offsetof(mavlink_vehicle_status_t, takeoff_time) }, \
         { "arming_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 26, offsetof(mavlink_vehicle_status_t, arming_state) }, \
         { "latest_arming_reason", NULL, MAVLINK_TYPE_UINT8_T, 0, 27, offsetof(mavlink_vehicle_status_t, latest_arming_reason) }, \
         { "latest_disarming_reason", NULL, MAVLINK_TYPE_UINT8_T, 0, 28, offsetof(mavlink_vehicle_status_t, latest_disarming_reason) }, \
         { "nav_state_timestamp", NULL, MAVLINK_TYPE_UINT64_T, 0, 16, offsetof(mavlink_vehicle_status_t, nav_state_timestamp) }, \
         { "nav_state_user_intention", NULL, MAVLINK_TYPE_UINT8_T, 0, 29, offsetof(mavlink_vehicle_status_t, nav_state_user_intention) }, \
         { "nav_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 30, offsetof(mavlink_vehicle_status_t, nav_state) }, \
         { "failure_detector_status", NULL, MAVLINK_TYPE_UINT16_T, 0, 24, offsetof(mavlink_vehicle_status_t, failure_detector_status) }, \
         { "hil_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 31, offsetof(mavlink_vehicle_status_t, hil_state) }, \
         { "vehicle_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 32, offsetof(mavlink_vehicle_status_t, vehicle_type) }, \
         { "failsafe", NULL, MAVLINK_TYPE_UINT8_T, 0, 33, offsetof(mavlink_vehicle_status_t, failsafe) }, \
         { "failsafe_and_user_took_over", NULL, MAVLINK_TYPE_UINT8_T, 0, 34, offsetof(mavlink_vehicle_status_t, failsafe_and_user_took_over) }, \
         { "gcs_connection_lost", NULL, MAVLINK_TYPE_UINT8_T, 0, 35, offsetof(mavlink_vehicle_status_t, gcs_connection_lost) }, \
         { "gcs_connection_lost_counter", NULL, MAVLINK_TYPE_UINT8_T, 0, 36, offsetof(mavlink_vehicle_status_t, gcs_connection_lost_counter) }, \
         { "high_latency_data_link_lost", NULL, MAVLINK_TYPE_UINT8_T, 0, 37, offsetof(mavlink_vehicle_status_t, high_latency_data_link_lost) }, \
         { "is_vtol", NULL, MAVLINK_TYPE_UINT8_T, 0, 38, offsetof(mavlink_vehicle_status_t, is_vtol) }, \
         { "is_vtol_tailsitter", NULL, MAVLINK_TYPE_UINT8_T, 0, 39, offsetof(mavlink_vehicle_status_t, is_vtol_tailsitter) }, \
         { "in_transition_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 40, offsetof(mavlink_vehicle_status_t, in_transition_mode) }, \
         { "in_transition_to_fw", NULL, MAVLINK_TYPE_UINT8_T, 0, 41, offsetof(mavlink_vehicle_status_t, in_transition_to_fw) }, \
         } \
}
#endif

/**
 * @brief Pack a vehicle_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param armed_time [microseconds] Arming timestamp
 * @param takeoff_time [microseconds] Takeoff timestamp
 * @param arming_state  
 * @param latest_arming_reason  
 * @param latest_disarming_reason  
 * @param nav_state_timestamp  time when current nav_state activated
 * @param nav_state_user_intention  Mode that the user selected (might be different from nav_state in a failsafe situation)
 * @param nav_state  Currently active mode
 * @param failure_detector_status  Bitmask of detected failures
 * @param hil_state  Bitmask of detected failures
 * @param vehicle_type  
 * @param failsafe  true if system is in failsafe state (e.g.:RTL, Hover, Terminate, ...)
 * @param failsafe_and_user_took_over  true if system is in failsafe state but the user took over control
 * @param gcs_connection_lost  
 * @param gcs_connection_lost_counter  
 * @param high_latency_data_link_lost  
 * @param is_vtol  
 * @param is_vtol_tailsitter  
 * @param in_transition_mode  
 * @param in_transition_to_fw  
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_vehicle_status_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t armed_time, uint64_t takeoff_time, uint8_t arming_state, uint8_t latest_arming_reason, uint8_t latest_disarming_reason, uint64_t nav_state_timestamp, uint8_t nav_state_user_intention, uint8_t nav_state, uint16_t failure_detector_status, uint8_t hil_state, uint8_t vehicle_type, uint8_t failsafe, uint8_t failsafe_and_user_took_over, uint8_t gcs_connection_lost, uint8_t gcs_connection_lost_counter, uint8_t high_latency_data_link_lost, uint8_t is_vtol, uint8_t is_vtol_tailsitter, uint8_t in_transition_mode, uint8_t in_transition_to_fw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_VEHICLE_STATUS_LEN];
    _mav_put_uint64_t(buf, 0, armed_time);
    _mav_put_uint64_t(buf, 8, takeoff_time);
    _mav_put_uint64_t(buf, 16, nav_state_timestamp);
    _mav_put_uint16_t(buf, 24, failure_detector_status);
    _mav_put_uint8_t(buf, 26, arming_state);
    _mav_put_uint8_t(buf, 27, latest_arming_reason);
    _mav_put_uint8_t(buf, 28, latest_disarming_reason);
    _mav_put_uint8_t(buf, 29, nav_state_user_intention);
    _mav_put_uint8_t(buf, 30, nav_state);
    _mav_put_uint8_t(buf, 31, hil_state);
    _mav_put_uint8_t(buf, 32, vehicle_type);
    _mav_put_uint8_t(buf, 33, failsafe);
    _mav_put_uint8_t(buf, 34, failsafe_and_user_took_over);
    _mav_put_uint8_t(buf, 35, gcs_connection_lost);
    _mav_put_uint8_t(buf, 36, gcs_connection_lost_counter);
    _mav_put_uint8_t(buf, 37, high_latency_data_link_lost);
    _mav_put_uint8_t(buf, 38, is_vtol);
    _mav_put_uint8_t(buf, 39, is_vtol_tailsitter);
    _mav_put_uint8_t(buf, 40, in_transition_mode);
    _mav_put_uint8_t(buf, 41, in_transition_to_fw);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_VEHICLE_STATUS_LEN);
#else
    mavlink_vehicle_status_t packet;
    packet.armed_time = armed_time;
    packet.takeoff_time = takeoff_time;
    packet.nav_state_timestamp = nav_state_timestamp;
    packet.failure_detector_status = failure_detector_status;
    packet.arming_state = arming_state;
    packet.latest_arming_reason = latest_arming_reason;
    packet.latest_disarming_reason = latest_disarming_reason;
    packet.nav_state_user_intention = nav_state_user_intention;
    packet.nav_state = nav_state;
    packet.hil_state = hil_state;
    packet.vehicle_type = vehicle_type;
    packet.failsafe = failsafe;
    packet.failsafe_and_user_took_over = failsafe_and_user_took_over;
    packet.gcs_connection_lost = gcs_connection_lost;
    packet.gcs_connection_lost_counter = gcs_connection_lost_counter;
    packet.high_latency_data_link_lost = high_latency_data_link_lost;
    packet.is_vtol = is_vtol;
    packet.is_vtol_tailsitter = is_vtol_tailsitter;
    packet.in_transition_mode = in_transition_mode;
    packet.in_transition_to_fw = in_transition_to_fw;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_VEHICLE_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_VEHICLE_STATUS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_VEHICLE_STATUS_MIN_LEN, MAVLINK_MSG_ID_VEHICLE_STATUS_LEN, MAVLINK_MSG_ID_VEHICLE_STATUS_CRC);
}

/**
 * @brief Pack a vehicle_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param armed_time [microseconds] Arming timestamp
 * @param takeoff_time [microseconds] Takeoff timestamp
 * @param arming_state  
 * @param latest_arming_reason  
 * @param latest_disarming_reason  
 * @param nav_state_timestamp  time when current nav_state activated
 * @param nav_state_user_intention  Mode that the user selected (might be different from nav_state in a failsafe situation)
 * @param nav_state  Currently active mode
 * @param failure_detector_status  Bitmask of detected failures
 * @param hil_state  Bitmask of detected failures
 * @param vehicle_type  
 * @param failsafe  true if system is in failsafe state (e.g.:RTL, Hover, Terminate, ...)
 * @param failsafe_and_user_took_over  true if system is in failsafe state but the user took over control
 * @param gcs_connection_lost  
 * @param gcs_connection_lost_counter  
 * @param high_latency_data_link_lost  
 * @param is_vtol  
 * @param is_vtol_tailsitter  
 * @param in_transition_mode  
 * @param in_transition_to_fw  
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_vehicle_status_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint64_t armed_time, uint64_t takeoff_time, uint8_t arming_state, uint8_t latest_arming_reason, uint8_t latest_disarming_reason, uint64_t nav_state_timestamp, uint8_t nav_state_user_intention, uint8_t nav_state, uint16_t failure_detector_status, uint8_t hil_state, uint8_t vehicle_type, uint8_t failsafe, uint8_t failsafe_and_user_took_over, uint8_t gcs_connection_lost, uint8_t gcs_connection_lost_counter, uint8_t high_latency_data_link_lost, uint8_t is_vtol, uint8_t is_vtol_tailsitter, uint8_t in_transition_mode, uint8_t in_transition_to_fw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_VEHICLE_STATUS_LEN];
    _mav_put_uint64_t(buf, 0, armed_time);
    _mav_put_uint64_t(buf, 8, takeoff_time);
    _mav_put_uint64_t(buf, 16, nav_state_timestamp);
    _mav_put_uint16_t(buf, 24, failure_detector_status);
    _mav_put_uint8_t(buf, 26, arming_state);
    _mav_put_uint8_t(buf, 27, latest_arming_reason);
    _mav_put_uint8_t(buf, 28, latest_disarming_reason);
    _mav_put_uint8_t(buf, 29, nav_state_user_intention);
    _mav_put_uint8_t(buf, 30, nav_state);
    _mav_put_uint8_t(buf, 31, hil_state);
    _mav_put_uint8_t(buf, 32, vehicle_type);
    _mav_put_uint8_t(buf, 33, failsafe);
    _mav_put_uint8_t(buf, 34, failsafe_and_user_took_over);
    _mav_put_uint8_t(buf, 35, gcs_connection_lost);
    _mav_put_uint8_t(buf, 36, gcs_connection_lost_counter);
    _mav_put_uint8_t(buf, 37, high_latency_data_link_lost);
    _mav_put_uint8_t(buf, 38, is_vtol);
    _mav_put_uint8_t(buf, 39, is_vtol_tailsitter);
    _mav_put_uint8_t(buf, 40, in_transition_mode);
    _mav_put_uint8_t(buf, 41, in_transition_to_fw);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_VEHICLE_STATUS_LEN);
#else
    mavlink_vehicle_status_t packet;
    packet.armed_time = armed_time;
    packet.takeoff_time = takeoff_time;
    packet.nav_state_timestamp = nav_state_timestamp;
    packet.failure_detector_status = failure_detector_status;
    packet.arming_state = arming_state;
    packet.latest_arming_reason = latest_arming_reason;
    packet.latest_disarming_reason = latest_disarming_reason;
    packet.nav_state_user_intention = nav_state_user_intention;
    packet.nav_state = nav_state;
    packet.hil_state = hil_state;
    packet.vehicle_type = vehicle_type;
    packet.failsafe = failsafe;
    packet.failsafe_and_user_took_over = failsafe_and_user_took_over;
    packet.gcs_connection_lost = gcs_connection_lost;
    packet.gcs_connection_lost_counter = gcs_connection_lost_counter;
    packet.high_latency_data_link_lost = high_latency_data_link_lost;
    packet.is_vtol = is_vtol;
    packet.is_vtol_tailsitter = is_vtol_tailsitter;
    packet.in_transition_mode = in_transition_mode;
    packet.in_transition_to_fw = in_transition_to_fw;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_VEHICLE_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_VEHICLE_STATUS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_VEHICLE_STATUS_MIN_LEN, MAVLINK_MSG_ID_VEHICLE_STATUS_LEN, MAVLINK_MSG_ID_VEHICLE_STATUS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_VEHICLE_STATUS_MIN_LEN, MAVLINK_MSG_ID_VEHICLE_STATUS_LEN);
#endif
}

/**
 * @brief Pack a vehicle_status message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param armed_time [microseconds] Arming timestamp
 * @param takeoff_time [microseconds] Takeoff timestamp
 * @param arming_state  
 * @param latest_arming_reason  
 * @param latest_disarming_reason  
 * @param nav_state_timestamp  time when current nav_state activated
 * @param nav_state_user_intention  Mode that the user selected (might be different from nav_state in a failsafe situation)
 * @param nav_state  Currently active mode
 * @param failure_detector_status  Bitmask of detected failures
 * @param hil_state  Bitmask of detected failures
 * @param vehicle_type  
 * @param failsafe  true if system is in failsafe state (e.g.:RTL, Hover, Terminate, ...)
 * @param failsafe_and_user_took_over  true if system is in failsafe state but the user took over control
 * @param gcs_connection_lost  
 * @param gcs_connection_lost_counter  
 * @param high_latency_data_link_lost  
 * @param is_vtol  
 * @param is_vtol_tailsitter  
 * @param in_transition_mode  
 * @param in_transition_to_fw  
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_vehicle_status_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t armed_time,uint64_t takeoff_time,uint8_t arming_state,uint8_t latest_arming_reason,uint8_t latest_disarming_reason,uint64_t nav_state_timestamp,uint8_t nav_state_user_intention,uint8_t nav_state,uint16_t failure_detector_status,uint8_t hil_state,uint8_t vehicle_type,uint8_t failsafe,uint8_t failsafe_and_user_took_over,uint8_t gcs_connection_lost,uint8_t gcs_connection_lost_counter,uint8_t high_latency_data_link_lost,uint8_t is_vtol,uint8_t is_vtol_tailsitter,uint8_t in_transition_mode,uint8_t in_transition_to_fw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_VEHICLE_STATUS_LEN];
    _mav_put_uint64_t(buf, 0, armed_time);
    _mav_put_uint64_t(buf, 8, takeoff_time);
    _mav_put_uint64_t(buf, 16, nav_state_timestamp);
    _mav_put_uint16_t(buf, 24, failure_detector_status);
    _mav_put_uint8_t(buf, 26, arming_state);
    _mav_put_uint8_t(buf, 27, latest_arming_reason);
    _mav_put_uint8_t(buf, 28, latest_disarming_reason);
    _mav_put_uint8_t(buf, 29, nav_state_user_intention);
    _mav_put_uint8_t(buf, 30, nav_state);
    _mav_put_uint8_t(buf, 31, hil_state);
    _mav_put_uint8_t(buf, 32, vehicle_type);
    _mav_put_uint8_t(buf, 33, failsafe);
    _mav_put_uint8_t(buf, 34, failsafe_and_user_took_over);
    _mav_put_uint8_t(buf, 35, gcs_connection_lost);
    _mav_put_uint8_t(buf, 36, gcs_connection_lost_counter);
    _mav_put_uint8_t(buf, 37, high_latency_data_link_lost);
    _mav_put_uint8_t(buf, 38, is_vtol);
    _mav_put_uint8_t(buf, 39, is_vtol_tailsitter);
    _mav_put_uint8_t(buf, 40, in_transition_mode);
    _mav_put_uint8_t(buf, 41, in_transition_to_fw);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_VEHICLE_STATUS_LEN);
#else
    mavlink_vehicle_status_t packet;
    packet.armed_time = armed_time;
    packet.takeoff_time = takeoff_time;
    packet.nav_state_timestamp = nav_state_timestamp;
    packet.failure_detector_status = failure_detector_status;
    packet.arming_state = arming_state;
    packet.latest_arming_reason = latest_arming_reason;
    packet.latest_disarming_reason = latest_disarming_reason;
    packet.nav_state_user_intention = nav_state_user_intention;
    packet.nav_state = nav_state;
    packet.hil_state = hil_state;
    packet.vehicle_type = vehicle_type;
    packet.failsafe = failsafe;
    packet.failsafe_and_user_took_over = failsafe_and_user_took_over;
    packet.gcs_connection_lost = gcs_connection_lost;
    packet.gcs_connection_lost_counter = gcs_connection_lost_counter;
    packet.high_latency_data_link_lost = high_latency_data_link_lost;
    packet.is_vtol = is_vtol;
    packet.is_vtol_tailsitter = is_vtol_tailsitter;
    packet.in_transition_mode = in_transition_mode;
    packet.in_transition_to_fw = in_transition_to_fw;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_VEHICLE_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_VEHICLE_STATUS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_VEHICLE_STATUS_MIN_LEN, MAVLINK_MSG_ID_VEHICLE_STATUS_LEN, MAVLINK_MSG_ID_VEHICLE_STATUS_CRC);
}

/**
 * @brief Encode a vehicle_status struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param vehicle_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_vehicle_status_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_vehicle_status_t* vehicle_status)
{
    return mavlink_msg_vehicle_status_pack(system_id, component_id, msg, vehicle_status->armed_time, vehicle_status->takeoff_time, vehicle_status->arming_state, vehicle_status->latest_arming_reason, vehicle_status->latest_disarming_reason, vehicle_status->nav_state_timestamp, vehicle_status->nav_state_user_intention, vehicle_status->nav_state, vehicle_status->failure_detector_status, vehicle_status->hil_state, vehicle_status->vehicle_type, vehicle_status->failsafe, vehicle_status->failsafe_and_user_took_over, vehicle_status->gcs_connection_lost, vehicle_status->gcs_connection_lost_counter, vehicle_status->high_latency_data_link_lost, vehicle_status->is_vtol, vehicle_status->is_vtol_tailsitter, vehicle_status->in_transition_mode, vehicle_status->in_transition_to_fw);
}

/**
 * @brief Encode a vehicle_status struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param vehicle_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_vehicle_status_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_vehicle_status_t* vehicle_status)
{
    return mavlink_msg_vehicle_status_pack_chan(system_id, component_id, chan, msg, vehicle_status->armed_time, vehicle_status->takeoff_time, vehicle_status->arming_state, vehicle_status->latest_arming_reason, vehicle_status->latest_disarming_reason, vehicle_status->nav_state_timestamp, vehicle_status->nav_state_user_intention, vehicle_status->nav_state, vehicle_status->failure_detector_status, vehicle_status->hil_state, vehicle_status->vehicle_type, vehicle_status->failsafe, vehicle_status->failsafe_and_user_took_over, vehicle_status->gcs_connection_lost, vehicle_status->gcs_connection_lost_counter, vehicle_status->high_latency_data_link_lost, vehicle_status->is_vtol, vehicle_status->is_vtol_tailsitter, vehicle_status->in_transition_mode, vehicle_status->in_transition_to_fw);
}

/**
 * @brief Encode a vehicle_status struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param vehicle_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_vehicle_status_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_vehicle_status_t* vehicle_status)
{
    return mavlink_msg_vehicle_status_pack_status(system_id, component_id, _status, msg,  vehicle_status->armed_time, vehicle_status->takeoff_time, vehicle_status->arming_state, vehicle_status->latest_arming_reason, vehicle_status->latest_disarming_reason, vehicle_status->nav_state_timestamp, vehicle_status->nav_state_user_intention, vehicle_status->nav_state, vehicle_status->failure_detector_status, vehicle_status->hil_state, vehicle_status->vehicle_type, vehicle_status->failsafe, vehicle_status->failsafe_and_user_took_over, vehicle_status->gcs_connection_lost, vehicle_status->gcs_connection_lost_counter, vehicle_status->high_latency_data_link_lost, vehicle_status->is_vtol, vehicle_status->is_vtol_tailsitter, vehicle_status->in_transition_mode, vehicle_status->in_transition_to_fw);
}

/**
 * @brief Send a vehicle_status message
 * @param chan MAVLink channel to send the message
 *
 * @param armed_time [microseconds] Arming timestamp
 * @param takeoff_time [microseconds] Takeoff timestamp
 * @param arming_state  
 * @param latest_arming_reason  
 * @param latest_disarming_reason  
 * @param nav_state_timestamp  time when current nav_state activated
 * @param nav_state_user_intention  Mode that the user selected (might be different from nav_state in a failsafe situation)
 * @param nav_state  Currently active mode
 * @param failure_detector_status  Bitmask of detected failures
 * @param hil_state  Bitmask of detected failures
 * @param vehicle_type  
 * @param failsafe  true if system is in failsafe state (e.g.:RTL, Hover, Terminate, ...)
 * @param failsafe_and_user_took_over  true if system is in failsafe state but the user took over control
 * @param gcs_connection_lost  
 * @param gcs_connection_lost_counter  
 * @param high_latency_data_link_lost  
 * @param is_vtol  
 * @param is_vtol_tailsitter  
 * @param in_transition_mode  
 * @param in_transition_to_fw  
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_vehicle_status_send(mavlink_channel_t chan, uint64_t armed_time, uint64_t takeoff_time, uint8_t arming_state, uint8_t latest_arming_reason, uint8_t latest_disarming_reason, uint64_t nav_state_timestamp, uint8_t nav_state_user_intention, uint8_t nav_state, uint16_t failure_detector_status, uint8_t hil_state, uint8_t vehicle_type, uint8_t failsafe, uint8_t failsafe_and_user_took_over, uint8_t gcs_connection_lost, uint8_t gcs_connection_lost_counter, uint8_t high_latency_data_link_lost, uint8_t is_vtol, uint8_t is_vtol_tailsitter, uint8_t in_transition_mode, uint8_t in_transition_to_fw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_VEHICLE_STATUS_LEN];
    _mav_put_uint64_t(buf, 0, armed_time);
    _mav_put_uint64_t(buf, 8, takeoff_time);
    _mav_put_uint64_t(buf, 16, nav_state_timestamp);
    _mav_put_uint16_t(buf, 24, failure_detector_status);
    _mav_put_uint8_t(buf, 26, arming_state);
    _mav_put_uint8_t(buf, 27, latest_arming_reason);
    _mav_put_uint8_t(buf, 28, latest_disarming_reason);
    _mav_put_uint8_t(buf, 29, nav_state_user_intention);
    _mav_put_uint8_t(buf, 30, nav_state);
    _mav_put_uint8_t(buf, 31, hil_state);
    _mav_put_uint8_t(buf, 32, vehicle_type);
    _mav_put_uint8_t(buf, 33, failsafe);
    _mav_put_uint8_t(buf, 34, failsafe_and_user_took_over);
    _mav_put_uint8_t(buf, 35, gcs_connection_lost);
    _mav_put_uint8_t(buf, 36, gcs_connection_lost_counter);
    _mav_put_uint8_t(buf, 37, high_latency_data_link_lost);
    _mav_put_uint8_t(buf, 38, is_vtol);
    _mav_put_uint8_t(buf, 39, is_vtol_tailsitter);
    _mav_put_uint8_t(buf, 40, in_transition_mode);
    _mav_put_uint8_t(buf, 41, in_transition_to_fw);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VEHICLE_STATUS, buf, MAVLINK_MSG_ID_VEHICLE_STATUS_MIN_LEN, MAVLINK_MSG_ID_VEHICLE_STATUS_LEN, MAVLINK_MSG_ID_VEHICLE_STATUS_CRC);
#else
    mavlink_vehicle_status_t packet;
    packet.armed_time = armed_time;
    packet.takeoff_time = takeoff_time;
    packet.nav_state_timestamp = nav_state_timestamp;
    packet.failure_detector_status = failure_detector_status;
    packet.arming_state = arming_state;
    packet.latest_arming_reason = latest_arming_reason;
    packet.latest_disarming_reason = latest_disarming_reason;
    packet.nav_state_user_intention = nav_state_user_intention;
    packet.nav_state = nav_state;
    packet.hil_state = hil_state;
    packet.vehicle_type = vehicle_type;
    packet.failsafe = failsafe;
    packet.failsafe_and_user_took_over = failsafe_and_user_took_over;
    packet.gcs_connection_lost = gcs_connection_lost;
    packet.gcs_connection_lost_counter = gcs_connection_lost_counter;
    packet.high_latency_data_link_lost = high_latency_data_link_lost;
    packet.is_vtol = is_vtol;
    packet.is_vtol_tailsitter = is_vtol_tailsitter;
    packet.in_transition_mode = in_transition_mode;
    packet.in_transition_to_fw = in_transition_to_fw;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VEHICLE_STATUS, (const char *)&packet, MAVLINK_MSG_ID_VEHICLE_STATUS_MIN_LEN, MAVLINK_MSG_ID_VEHICLE_STATUS_LEN, MAVLINK_MSG_ID_VEHICLE_STATUS_CRC);
#endif
}

/**
 * @brief Send a vehicle_status message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_vehicle_status_send_struct(mavlink_channel_t chan, const mavlink_vehicle_status_t* vehicle_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_vehicle_status_send(chan, vehicle_status->armed_time, vehicle_status->takeoff_time, vehicle_status->arming_state, vehicle_status->latest_arming_reason, vehicle_status->latest_disarming_reason, vehicle_status->nav_state_timestamp, vehicle_status->nav_state_user_intention, vehicle_status->nav_state, vehicle_status->failure_detector_status, vehicle_status->hil_state, vehicle_status->vehicle_type, vehicle_status->failsafe, vehicle_status->failsafe_and_user_took_over, vehicle_status->gcs_connection_lost, vehicle_status->gcs_connection_lost_counter, vehicle_status->high_latency_data_link_lost, vehicle_status->is_vtol, vehicle_status->is_vtol_tailsitter, vehicle_status->in_transition_mode, vehicle_status->in_transition_to_fw);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VEHICLE_STATUS, (const char *)vehicle_status, MAVLINK_MSG_ID_VEHICLE_STATUS_MIN_LEN, MAVLINK_MSG_ID_VEHICLE_STATUS_LEN, MAVLINK_MSG_ID_VEHICLE_STATUS_CRC);
#endif
}

#if MAVLINK_MSG_ID_VEHICLE_STATUS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_vehicle_status_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t armed_time, uint64_t takeoff_time, uint8_t arming_state, uint8_t latest_arming_reason, uint8_t latest_disarming_reason, uint64_t nav_state_timestamp, uint8_t nav_state_user_intention, uint8_t nav_state, uint16_t failure_detector_status, uint8_t hil_state, uint8_t vehicle_type, uint8_t failsafe, uint8_t failsafe_and_user_took_over, uint8_t gcs_connection_lost, uint8_t gcs_connection_lost_counter, uint8_t high_latency_data_link_lost, uint8_t is_vtol, uint8_t is_vtol_tailsitter, uint8_t in_transition_mode, uint8_t in_transition_to_fw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, armed_time);
    _mav_put_uint64_t(buf, 8, takeoff_time);
    _mav_put_uint64_t(buf, 16, nav_state_timestamp);
    _mav_put_uint16_t(buf, 24, failure_detector_status);
    _mav_put_uint8_t(buf, 26, arming_state);
    _mav_put_uint8_t(buf, 27, latest_arming_reason);
    _mav_put_uint8_t(buf, 28, latest_disarming_reason);
    _mav_put_uint8_t(buf, 29, nav_state_user_intention);
    _mav_put_uint8_t(buf, 30, nav_state);
    _mav_put_uint8_t(buf, 31, hil_state);
    _mav_put_uint8_t(buf, 32, vehicle_type);
    _mav_put_uint8_t(buf, 33, failsafe);
    _mav_put_uint8_t(buf, 34, failsafe_and_user_took_over);
    _mav_put_uint8_t(buf, 35, gcs_connection_lost);
    _mav_put_uint8_t(buf, 36, gcs_connection_lost_counter);
    _mav_put_uint8_t(buf, 37, high_latency_data_link_lost);
    _mav_put_uint8_t(buf, 38, is_vtol);
    _mav_put_uint8_t(buf, 39, is_vtol_tailsitter);
    _mav_put_uint8_t(buf, 40, in_transition_mode);
    _mav_put_uint8_t(buf, 41, in_transition_to_fw);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VEHICLE_STATUS, buf, MAVLINK_MSG_ID_VEHICLE_STATUS_MIN_LEN, MAVLINK_MSG_ID_VEHICLE_STATUS_LEN, MAVLINK_MSG_ID_VEHICLE_STATUS_CRC);
#else
    mavlink_vehicle_status_t *packet = (mavlink_vehicle_status_t *)msgbuf;
    packet->armed_time = armed_time;
    packet->takeoff_time = takeoff_time;
    packet->nav_state_timestamp = nav_state_timestamp;
    packet->failure_detector_status = failure_detector_status;
    packet->arming_state = arming_state;
    packet->latest_arming_reason = latest_arming_reason;
    packet->latest_disarming_reason = latest_disarming_reason;
    packet->nav_state_user_intention = nav_state_user_intention;
    packet->nav_state = nav_state;
    packet->hil_state = hil_state;
    packet->vehicle_type = vehicle_type;
    packet->failsafe = failsafe;
    packet->failsafe_and_user_took_over = failsafe_and_user_took_over;
    packet->gcs_connection_lost = gcs_connection_lost;
    packet->gcs_connection_lost_counter = gcs_connection_lost_counter;
    packet->high_latency_data_link_lost = high_latency_data_link_lost;
    packet->is_vtol = is_vtol;
    packet->is_vtol_tailsitter = is_vtol_tailsitter;
    packet->in_transition_mode = in_transition_mode;
    packet->in_transition_to_fw = in_transition_to_fw;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VEHICLE_STATUS, (const char *)packet, MAVLINK_MSG_ID_VEHICLE_STATUS_MIN_LEN, MAVLINK_MSG_ID_VEHICLE_STATUS_LEN, MAVLINK_MSG_ID_VEHICLE_STATUS_CRC);
#endif
}
#endif

#endif

// MESSAGE VEHICLE_STATUS UNPACKING


/**
 * @brief Get field armed_time from vehicle_status message
 *
 * @return [microseconds] Arming timestamp
 */
static inline uint64_t mavlink_msg_vehicle_status_get_armed_time(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field takeoff_time from vehicle_status message
 *
 * @return [microseconds] Takeoff timestamp
 */
static inline uint64_t mavlink_msg_vehicle_status_get_takeoff_time(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  8);
}

/**
 * @brief Get field arming_state from vehicle_status message
 *
 * @return  
 */
static inline uint8_t mavlink_msg_vehicle_status_get_arming_state(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  26);
}

/**
 * @brief Get field latest_arming_reason from vehicle_status message
 *
 * @return  
 */
static inline uint8_t mavlink_msg_vehicle_status_get_latest_arming_reason(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  27);
}

/**
 * @brief Get field latest_disarming_reason from vehicle_status message
 *
 * @return  
 */
static inline uint8_t mavlink_msg_vehicle_status_get_latest_disarming_reason(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  28);
}

/**
 * @brief Get field nav_state_timestamp from vehicle_status message
 *
 * @return  time when current nav_state activated
 */
static inline uint64_t mavlink_msg_vehicle_status_get_nav_state_timestamp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  16);
}

/**
 * @brief Get field nav_state_user_intention from vehicle_status message
 *
 * @return  Mode that the user selected (might be different from nav_state in a failsafe situation)
 */
static inline uint8_t mavlink_msg_vehicle_status_get_nav_state_user_intention(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  29);
}

/**
 * @brief Get field nav_state from vehicle_status message
 *
 * @return  Currently active mode
 */
static inline uint8_t mavlink_msg_vehicle_status_get_nav_state(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  30);
}

/**
 * @brief Get field failure_detector_status from vehicle_status message
 *
 * @return  Bitmask of detected failures
 */
static inline uint16_t mavlink_msg_vehicle_status_get_failure_detector_status(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  24);
}

/**
 * @brief Get field hil_state from vehicle_status message
 *
 * @return  Bitmask of detected failures
 */
static inline uint8_t mavlink_msg_vehicle_status_get_hil_state(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  31);
}

/**
 * @brief Get field vehicle_type from vehicle_status message
 *
 * @return  
 */
static inline uint8_t mavlink_msg_vehicle_status_get_vehicle_type(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  32);
}

/**
 * @brief Get field failsafe from vehicle_status message
 *
 * @return  true if system is in failsafe state (e.g.:RTL, Hover, Terminate, ...)
 */
static inline uint8_t mavlink_msg_vehicle_status_get_failsafe(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  33);
}

/**
 * @brief Get field failsafe_and_user_took_over from vehicle_status message
 *
 * @return  true if system is in failsafe state but the user took over control
 */
static inline uint8_t mavlink_msg_vehicle_status_get_failsafe_and_user_took_over(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  34);
}

/**
 * @brief Get field gcs_connection_lost from vehicle_status message
 *
 * @return  
 */
static inline uint8_t mavlink_msg_vehicle_status_get_gcs_connection_lost(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  35);
}

/**
 * @brief Get field gcs_connection_lost_counter from vehicle_status message
 *
 * @return  
 */
static inline uint8_t mavlink_msg_vehicle_status_get_gcs_connection_lost_counter(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  36);
}

/**
 * @brief Get field high_latency_data_link_lost from vehicle_status message
 *
 * @return  
 */
static inline uint8_t mavlink_msg_vehicle_status_get_high_latency_data_link_lost(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  37);
}

/**
 * @brief Get field is_vtol from vehicle_status message
 *
 * @return  
 */
static inline uint8_t mavlink_msg_vehicle_status_get_is_vtol(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  38);
}

/**
 * @brief Get field is_vtol_tailsitter from vehicle_status message
 *
 * @return  
 */
static inline uint8_t mavlink_msg_vehicle_status_get_is_vtol_tailsitter(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  39);
}

/**
 * @brief Get field in_transition_mode from vehicle_status message
 *
 * @return  
 */
static inline uint8_t mavlink_msg_vehicle_status_get_in_transition_mode(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  40);
}

/**
 * @brief Get field in_transition_to_fw from vehicle_status message
 *
 * @return  
 */
static inline uint8_t mavlink_msg_vehicle_status_get_in_transition_to_fw(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  41);
}

/**
 * @brief Decode a vehicle_status message into a struct
 *
 * @param msg The message to decode
 * @param vehicle_status C-struct to decode the message contents into
 */
static inline void mavlink_msg_vehicle_status_decode(const mavlink_message_t* msg, mavlink_vehicle_status_t* vehicle_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    vehicle_status->armed_time = mavlink_msg_vehicle_status_get_armed_time(msg);
    vehicle_status->takeoff_time = mavlink_msg_vehicle_status_get_takeoff_time(msg);
    vehicle_status->nav_state_timestamp = mavlink_msg_vehicle_status_get_nav_state_timestamp(msg);
    vehicle_status->failure_detector_status = mavlink_msg_vehicle_status_get_failure_detector_status(msg);
    vehicle_status->arming_state = mavlink_msg_vehicle_status_get_arming_state(msg);
    vehicle_status->latest_arming_reason = mavlink_msg_vehicle_status_get_latest_arming_reason(msg);
    vehicle_status->latest_disarming_reason = mavlink_msg_vehicle_status_get_latest_disarming_reason(msg);
    vehicle_status->nav_state_user_intention = mavlink_msg_vehicle_status_get_nav_state_user_intention(msg);
    vehicle_status->nav_state = mavlink_msg_vehicle_status_get_nav_state(msg);
    vehicle_status->hil_state = mavlink_msg_vehicle_status_get_hil_state(msg);
    vehicle_status->vehicle_type = mavlink_msg_vehicle_status_get_vehicle_type(msg);
    vehicle_status->failsafe = mavlink_msg_vehicle_status_get_failsafe(msg);
    vehicle_status->failsafe_and_user_took_over = mavlink_msg_vehicle_status_get_failsafe_and_user_took_over(msg);
    vehicle_status->gcs_connection_lost = mavlink_msg_vehicle_status_get_gcs_connection_lost(msg);
    vehicle_status->gcs_connection_lost_counter = mavlink_msg_vehicle_status_get_gcs_connection_lost_counter(msg);
    vehicle_status->high_latency_data_link_lost = mavlink_msg_vehicle_status_get_high_latency_data_link_lost(msg);
    vehicle_status->is_vtol = mavlink_msg_vehicle_status_get_is_vtol(msg);
    vehicle_status->is_vtol_tailsitter = mavlink_msg_vehicle_status_get_is_vtol_tailsitter(msg);
    vehicle_status->in_transition_mode = mavlink_msg_vehicle_status_get_in_transition_mode(msg);
    vehicle_status->in_transition_to_fw = mavlink_msg_vehicle_status_get_in_transition_to_fw(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_VEHICLE_STATUS_LEN? msg->len : MAVLINK_MSG_ID_VEHICLE_STATUS_LEN;
        memset(vehicle_status, 0, MAVLINK_MSG_ID_VEHICLE_STATUS_LEN);
    memcpy(vehicle_status, _MAV_PAYLOAD(msg), len);
#endif
}
