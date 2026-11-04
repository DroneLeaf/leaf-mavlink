#pragma once
// MESSAGE LEAF_GPS_MISSION_STATUS PACKING

#define MAVLINK_MSG_ID_LEAF_GPS_MISSION_STATUS 77069


typedef struct __mavlink_leaf_gps_mission_status_t {
 uint64_t boot_id; /*<  Process incarnation.*/
 uint64_t sample_time_us; /*<  Monotonic sample time, microseconds.*/
 uint64_t route_session; /*<  Route session.*/
 uint64_t plan_revision; /*<  Source plan revision.*/
 uint64_t segment_revision; /*<  Manager segment revision; guidance reports the applied revision separately.*/
 uint64_t scheduled_revision; /*<  Pending continuation revision; zero if absent.*/
 uint64_t planner_revision; /*<  Latest planner output revision.*/
 uint64_t trim_revision; /*<  Source revision of last handoff or rejection.*/
 uint32_t event_sequence; /*<  Newest event sequence.*/
 uint32_t event_oldest; /*<  Oldest retained event sequence.*/
 int32_t target_index; /*<  Current target index, -1 if absent.*/
 int32_t home_lat_1e7; /*<  Raised RTH target latitude.*/
 int32_t home_lon_1e7; /*<  Raised RTH target longitude.*/
 float home_alt_m; /*<  Raised RTH target altitude, metres.*/
 float loiter_radius_m; /*<  Home loiter waypoint radius, metres.*/
 uint16_t active_count; /*<  Accepted route point count.*/
 uint16_t scheduled_count; /*<  Scheduled route point count.*/
 uint16_t trim_count; /*<  Number removed at last handoff.*/
 uint8_t mode; /*<  RacerMode.*/
 uint8_t planner_state; /*<  FollowingPlanState.*/
 uint8_t ins_state; /*<  InsState.*/
 uint8_t refuel_phase; /*<  ReFuelPhase.*/
 uint8_t home_state; /*<  GPSHomeState.*/
 uint8_t arm_state; /*<  ArmState.*/
 uint8_t safety_switch; /*<  RCSwitchState.*/
 uint8_t rc_stream; /*<  StreamState.*/
 uint8_t flags; /*<  Bit 0 waiting for continuation; bit 1 continuation unavailable; bit 2 scheduled plan present.*/
} mavlink_leaf_gps_mission_status_t;

#define MAVLINK_MSG_ID_LEAF_GPS_MISSION_STATUS_LEN 107
#define MAVLINK_MSG_ID_LEAF_GPS_MISSION_STATUS_MIN_LEN 107
#define MAVLINK_MSG_ID_77069_LEN 107
#define MAVLINK_MSG_ID_77069_MIN_LEN 107

#define MAVLINK_MSG_ID_LEAF_GPS_MISSION_STATUS_CRC 1
#define MAVLINK_MSG_ID_77069_CRC 1



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_LEAF_GPS_MISSION_STATUS { \
    77069, \
    "LEAF_GPS_MISSION_STATUS", \
    27, \
    {  { "boot_id", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_leaf_gps_mission_status_t, boot_id) }, \
         { "sample_time_us", NULL, MAVLINK_TYPE_UINT64_T, 0, 8, offsetof(mavlink_leaf_gps_mission_status_t, sample_time_us) }, \
         { "route_session", NULL, MAVLINK_TYPE_UINT64_T, 0, 16, offsetof(mavlink_leaf_gps_mission_status_t, route_session) }, \
         { "plan_revision", NULL, MAVLINK_TYPE_UINT64_T, 0, 24, offsetof(mavlink_leaf_gps_mission_status_t, plan_revision) }, \
         { "segment_revision", NULL, MAVLINK_TYPE_UINT64_T, 0, 32, offsetof(mavlink_leaf_gps_mission_status_t, segment_revision) }, \
         { "scheduled_revision", NULL, MAVLINK_TYPE_UINT64_T, 0, 40, offsetof(mavlink_leaf_gps_mission_status_t, scheduled_revision) }, \
         { "planner_revision", NULL, MAVLINK_TYPE_UINT64_T, 0, 48, offsetof(mavlink_leaf_gps_mission_status_t, planner_revision) }, \
         { "event_sequence", NULL, MAVLINK_TYPE_UINT32_T, 0, 64, offsetof(mavlink_leaf_gps_mission_status_t, event_sequence) }, \
         { "event_oldest", NULL, MAVLINK_TYPE_UINT32_T, 0, 68, offsetof(mavlink_leaf_gps_mission_status_t, event_oldest) }, \
         { "target_index", NULL, MAVLINK_TYPE_INT32_T, 0, 72, offsetof(mavlink_leaf_gps_mission_status_t, target_index) }, \
         { "active_count", NULL, MAVLINK_TYPE_UINT16_T, 0, 92, offsetof(mavlink_leaf_gps_mission_status_t, active_count) }, \
         { "scheduled_count", NULL, MAVLINK_TYPE_UINT16_T, 0, 94, offsetof(mavlink_leaf_gps_mission_status_t, scheduled_count) }, \
         { "trim_count", NULL, MAVLINK_TYPE_UINT16_T, 0, 96, offsetof(mavlink_leaf_gps_mission_status_t, trim_count) }, \
         { "trim_revision", NULL, MAVLINK_TYPE_UINT64_T, 0, 56, offsetof(mavlink_leaf_gps_mission_status_t, trim_revision) }, \
         { "home_lat_1e7", NULL, MAVLINK_TYPE_INT32_T, 0, 76, offsetof(mavlink_leaf_gps_mission_status_t, home_lat_1e7) }, \
         { "home_lon_1e7", NULL, MAVLINK_TYPE_INT32_T, 0, 80, offsetof(mavlink_leaf_gps_mission_status_t, home_lon_1e7) }, \
         { "home_alt_m", NULL, MAVLINK_TYPE_FLOAT, 0, 84, offsetof(mavlink_leaf_gps_mission_status_t, home_alt_m) }, \
         { "loiter_radius_m", NULL, MAVLINK_TYPE_FLOAT, 0, 88, offsetof(mavlink_leaf_gps_mission_status_t, loiter_radius_m) }, \
         { "mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 98, offsetof(mavlink_leaf_gps_mission_status_t, mode) }, \
         { "planner_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 99, offsetof(mavlink_leaf_gps_mission_status_t, planner_state) }, \
         { "ins_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 100, offsetof(mavlink_leaf_gps_mission_status_t, ins_state) }, \
         { "refuel_phase", NULL, MAVLINK_TYPE_UINT8_T, 0, 101, offsetof(mavlink_leaf_gps_mission_status_t, refuel_phase) }, \
         { "home_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 102, offsetof(mavlink_leaf_gps_mission_status_t, home_state) }, \
         { "arm_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 103, offsetof(mavlink_leaf_gps_mission_status_t, arm_state) }, \
         { "safety_switch", NULL, MAVLINK_TYPE_UINT8_T, 0, 104, offsetof(mavlink_leaf_gps_mission_status_t, safety_switch) }, \
         { "rc_stream", NULL, MAVLINK_TYPE_UINT8_T, 0, 105, offsetof(mavlink_leaf_gps_mission_status_t, rc_stream) }, \
         { "flags", NULL, MAVLINK_TYPE_UINT8_T, 0, 106, offsetof(mavlink_leaf_gps_mission_status_t, flags) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_LEAF_GPS_MISSION_STATUS { \
    "LEAF_GPS_MISSION_STATUS", \
    27, \
    {  { "boot_id", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_leaf_gps_mission_status_t, boot_id) }, \
         { "sample_time_us", NULL, MAVLINK_TYPE_UINT64_T, 0, 8, offsetof(mavlink_leaf_gps_mission_status_t, sample_time_us) }, \
         { "route_session", NULL, MAVLINK_TYPE_UINT64_T, 0, 16, offsetof(mavlink_leaf_gps_mission_status_t, route_session) }, \
         { "plan_revision", NULL, MAVLINK_TYPE_UINT64_T, 0, 24, offsetof(mavlink_leaf_gps_mission_status_t, plan_revision) }, \
         { "segment_revision", NULL, MAVLINK_TYPE_UINT64_T, 0, 32, offsetof(mavlink_leaf_gps_mission_status_t, segment_revision) }, \
         { "scheduled_revision", NULL, MAVLINK_TYPE_UINT64_T, 0, 40, offsetof(mavlink_leaf_gps_mission_status_t, scheduled_revision) }, \
         { "planner_revision", NULL, MAVLINK_TYPE_UINT64_T, 0, 48, offsetof(mavlink_leaf_gps_mission_status_t, planner_revision) }, \
         { "event_sequence", NULL, MAVLINK_TYPE_UINT32_T, 0, 64, offsetof(mavlink_leaf_gps_mission_status_t, event_sequence) }, \
         { "event_oldest", NULL, MAVLINK_TYPE_UINT32_T, 0, 68, offsetof(mavlink_leaf_gps_mission_status_t, event_oldest) }, \
         { "target_index", NULL, MAVLINK_TYPE_INT32_T, 0, 72, offsetof(mavlink_leaf_gps_mission_status_t, target_index) }, \
         { "active_count", NULL, MAVLINK_TYPE_UINT16_T, 0, 92, offsetof(mavlink_leaf_gps_mission_status_t, active_count) }, \
         { "scheduled_count", NULL, MAVLINK_TYPE_UINT16_T, 0, 94, offsetof(mavlink_leaf_gps_mission_status_t, scheduled_count) }, \
         { "trim_count", NULL, MAVLINK_TYPE_UINT16_T, 0, 96, offsetof(mavlink_leaf_gps_mission_status_t, trim_count) }, \
         { "trim_revision", NULL, MAVLINK_TYPE_UINT64_T, 0, 56, offsetof(mavlink_leaf_gps_mission_status_t, trim_revision) }, \
         { "home_lat_1e7", NULL, MAVLINK_TYPE_INT32_T, 0, 76, offsetof(mavlink_leaf_gps_mission_status_t, home_lat_1e7) }, \
         { "home_lon_1e7", NULL, MAVLINK_TYPE_INT32_T, 0, 80, offsetof(mavlink_leaf_gps_mission_status_t, home_lon_1e7) }, \
         { "home_alt_m", NULL, MAVLINK_TYPE_FLOAT, 0, 84, offsetof(mavlink_leaf_gps_mission_status_t, home_alt_m) }, \
         { "loiter_radius_m", NULL, MAVLINK_TYPE_FLOAT, 0, 88, offsetof(mavlink_leaf_gps_mission_status_t, loiter_radius_m) }, \
         { "mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 98, offsetof(mavlink_leaf_gps_mission_status_t, mode) }, \
         { "planner_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 99, offsetof(mavlink_leaf_gps_mission_status_t, planner_state) }, \
         { "ins_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 100, offsetof(mavlink_leaf_gps_mission_status_t, ins_state) }, \
         { "refuel_phase", NULL, MAVLINK_TYPE_UINT8_T, 0, 101, offsetof(mavlink_leaf_gps_mission_status_t, refuel_phase) }, \
         { "home_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 102, offsetof(mavlink_leaf_gps_mission_status_t, home_state) }, \
         { "arm_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 103, offsetof(mavlink_leaf_gps_mission_status_t, arm_state) }, \
         { "safety_switch", NULL, MAVLINK_TYPE_UINT8_T, 0, 104, offsetof(mavlink_leaf_gps_mission_status_t, safety_switch) }, \
         { "rc_stream", NULL, MAVLINK_TYPE_UINT8_T, 0, 105, offsetof(mavlink_leaf_gps_mission_status_t, rc_stream) }, \
         { "flags", NULL, MAVLINK_TYPE_UINT8_T, 0, 106, offsetof(mavlink_leaf_gps_mission_status_t, flags) }, \
         } \
}
#endif

/**
 * @brief Pack a leaf_gps_mission_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param boot_id  Process incarnation.
 * @param sample_time_us  Monotonic sample time, microseconds.
 * @param route_session  Route session.
 * @param plan_revision  Source plan revision.
 * @param segment_revision  Manager segment revision; guidance reports the applied revision separately.
 * @param scheduled_revision  Pending continuation revision; zero if absent.
 * @param planner_revision  Latest planner output revision.
 * @param event_sequence  Newest event sequence.
 * @param event_oldest  Oldest retained event sequence.
 * @param target_index  Current target index, -1 if absent.
 * @param active_count  Accepted route point count.
 * @param scheduled_count  Scheduled route point count.
 * @param trim_count  Number removed at last handoff.
 * @param trim_revision  Source revision of last handoff or rejection.
 * @param home_lat_1e7  Raised RTH target latitude.
 * @param home_lon_1e7  Raised RTH target longitude.
 * @param home_alt_m  Raised RTH target altitude, metres.
 * @param loiter_radius_m  Home loiter waypoint radius, metres.
 * @param mode  RacerMode.
 * @param planner_state  FollowingPlanState.
 * @param ins_state  InsState.
 * @param refuel_phase  ReFuelPhase.
 * @param home_state  GPSHomeState.
 * @param arm_state  ArmState.
 * @param safety_switch  RCSwitchState.
 * @param rc_stream  StreamState.
 * @param flags  Bit 0 waiting for continuation; bit 1 continuation unavailable; bit 2 scheduled plan present.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_gps_mission_status_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t boot_id, uint64_t sample_time_us, uint64_t route_session, uint64_t plan_revision, uint64_t segment_revision, uint64_t scheduled_revision, uint64_t planner_revision, uint32_t event_sequence, uint32_t event_oldest, int32_t target_index, uint16_t active_count, uint16_t scheduled_count, uint16_t trim_count, uint64_t trim_revision, int32_t home_lat_1e7, int32_t home_lon_1e7, float home_alt_m, float loiter_radius_m, uint8_t mode, uint8_t planner_state, uint8_t ins_state, uint8_t refuel_phase, uint8_t home_state, uint8_t arm_state, uint8_t safety_switch, uint8_t rc_stream, uint8_t flags)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_GPS_MISSION_STATUS_LEN];
    _mav_put_uint64_t(buf, 0, boot_id);
    _mav_put_uint64_t(buf, 8, sample_time_us);
    _mav_put_uint64_t(buf, 16, route_session);
    _mav_put_uint64_t(buf, 24, plan_revision);
    _mav_put_uint64_t(buf, 32, segment_revision);
    _mav_put_uint64_t(buf, 40, scheduled_revision);
    _mav_put_uint64_t(buf, 48, planner_revision);
    _mav_put_uint64_t(buf, 56, trim_revision);
    _mav_put_uint32_t(buf, 64, event_sequence);
    _mav_put_uint32_t(buf, 68, event_oldest);
    _mav_put_int32_t(buf, 72, target_index);
    _mav_put_int32_t(buf, 76, home_lat_1e7);
    _mav_put_int32_t(buf, 80, home_lon_1e7);
    _mav_put_float(buf, 84, home_alt_m);
    _mav_put_float(buf, 88, loiter_radius_m);
    _mav_put_uint16_t(buf, 92, active_count);
    _mav_put_uint16_t(buf, 94, scheduled_count);
    _mav_put_uint16_t(buf, 96, trim_count);
    _mav_put_uint8_t(buf, 98, mode);
    _mav_put_uint8_t(buf, 99, planner_state);
    _mav_put_uint8_t(buf, 100, ins_state);
    _mav_put_uint8_t(buf, 101, refuel_phase);
    _mav_put_uint8_t(buf, 102, home_state);
    _mav_put_uint8_t(buf, 103, arm_state);
    _mav_put_uint8_t(buf, 104, safety_switch);
    _mav_put_uint8_t(buf, 105, rc_stream);
    _mav_put_uint8_t(buf, 106, flags);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_GPS_MISSION_STATUS_LEN);
#else
    mavlink_leaf_gps_mission_status_t packet;
    packet.boot_id = boot_id;
    packet.sample_time_us = sample_time_us;
    packet.route_session = route_session;
    packet.plan_revision = plan_revision;
    packet.segment_revision = segment_revision;
    packet.scheduled_revision = scheduled_revision;
    packet.planner_revision = planner_revision;
    packet.trim_revision = trim_revision;
    packet.event_sequence = event_sequence;
    packet.event_oldest = event_oldest;
    packet.target_index = target_index;
    packet.home_lat_1e7 = home_lat_1e7;
    packet.home_lon_1e7 = home_lon_1e7;
    packet.home_alt_m = home_alt_m;
    packet.loiter_radius_m = loiter_radius_m;
    packet.active_count = active_count;
    packet.scheduled_count = scheduled_count;
    packet.trim_count = trim_count;
    packet.mode = mode;
    packet.planner_state = planner_state;
    packet.ins_state = ins_state;
    packet.refuel_phase = refuel_phase;
    packet.home_state = home_state;
    packet.arm_state = arm_state;
    packet.safety_switch = safety_switch;
    packet.rc_stream = rc_stream;
    packet.flags = flags;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_GPS_MISSION_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_GPS_MISSION_STATUS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_LEAF_GPS_MISSION_STATUS_MIN_LEN, MAVLINK_MSG_ID_LEAF_GPS_MISSION_STATUS_LEN, MAVLINK_MSG_ID_LEAF_GPS_MISSION_STATUS_CRC);
}

/**
 * @brief Pack a leaf_gps_mission_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param boot_id  Process incarnation.
 * @param sample_time_us  Monotonic sample time, microseconds.
 * @param route_session  Route session.
 * @param plan_revision  Source plan revision.
 * @param segment_revision  Manager segment revision; guidance reports the applied revision separately.
 * @param scheduled_revision  Pending continuation revision; zero if absent.
 * @param planner_revision  Latest planner output revision.
 * @param event_sequence  Newest event sequence.
 * @param event_oldest  Oldest retained event sequence.
 * @param target_index  Current target index, -1 if absent.
 * @param active_count  Accepted route point count.
 * @param scheduled_count  Scheduled route point count.
 * @param trim_count  Number removed at last handoff.
 * @param trim_revision  Source revision of last handoff or rejection.
 * @param home_lat_1e7  Raised RTH target latitude.
 * @param home_lon_1e7  Raised RTH target longitude.
 * @param home_alt_m  Raised RTH target altitude, metres.
 * @param loiter_radius_m  Home loiter waypoint radius, metres.
 * @param mode  RacerMode.
 * @param planner_state  FollowingPlanState.
 * @param ins_state  InsState.
 * @param refuel_phase  ReFuelPhase.
 * @param home_state  GPSHomeState.
 * @param arm_state  ArmState.
 * @param safety_switch  RCSwitchState.
 * @param rc_stream  StreamState.
 * @param flags  Bit 0 waiting for continuation; bit 1 continuation unavailable; bit 2 scheduled plan present.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_gps_mission_status_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint64_t boot_id, uint64_t sample_time_us, uint64_t route_session, uint64_t plan_revision, uint64_t segment_revision, uint64_t scheduled_revision, uint64_t planner_revision, uint32_t event_sequence, uint32_t event_oldest, int32_t target_index, uint16_t active_count, uint16_t scheduled_count, uint16_t trim_count, uint64_t trim_revision, int32_t home_lat_1e7, int32_t home_lon_1e7, float home_alt_m, float loiter_radius_m, uint8_t mode, uint8_t planner_state, uint8_t ins_state, uint8_t refuel_phase, uint8_t home_state, uint8_t arm_state, uint8_t safety_switch, uint8_t rc_stream, uint8_t flags)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_GPS_MISSION_STATUS_LEN];
    _mav_put_uint64_t(buf, 0, boot_id);
    _mav_put_uint64_t(buf, 8, sample_time_us);
    _mav_put_uint64_t(buf, 16, route_session);
    _mav_put_uint64_t(buf, 24, plan_revision);
    _mav_put_uint64_t(buf, 32, segment_revision);
    _mav_put_uint64_t(buf, 40, scheduled_revision);
    _mav_put_uint64_t(buf, 48, planner_revision);
    _mav_put_uint64_t(buf, 56, trim_revision);
    _mav_put_uint32_t(buf, 64, event_sequence);
    _mav_put_uint32_t(buf, 68, event_oldest);
    _mav_put_int32_t(buf, 72, target_index);
    _mav_put_int32_t(buf, 76, home_lat_1e7);
    _mav_put_int32_t(buf, 80, home_lon_1e7);
    _mav_put_float(buf, 84, home_alt_m);
    _mav_put_float(buf, 88, loiter_radius_m);
    _mav_put_uint16_t(buf, 92, active_count);
    _mav_put_uint16_t(buf, 94, scheduled_count);
    _mav_put_uint16_t(buf, 96, trim_count);
    _mav_put_uint8_t(buf, 98, mode);
    _mav_put_uint8_t(buf, 99, planner_state);
    _mav_put_uint8_t(buf, 100, ins_state);
    _mav_put_uint8_t(buf, 101, refuel_phase);
    _mav_put_uint8_t(buf, 102, home_state);
    _mav_put_uint8_t(buf, 103, arm_state);
    _mav_put_uint8_t(buf, 104, safety_switch);
    _mav_put_uint8_t(buf, 105, rc_stream);
    _mav_put_uint8_t(buf, 106, flags);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_GPS_MISSION_STATUS_LEN);
#else
    mavlink_leaf_gps_mission_status_t packet;
    packet.boot_id = boot_id;
    packet.sample_time_us = sample_time_us;
    packet.route_session = route_session;
    packet.plan_revision = plan_revision;
    packet.segment_revision = segment_revision;
    packet.scheduled_revision = scheduled_revision;
    packet.planner_revision = planner_revision;
    packet.trim_revision = trim_revision;
    packet.event_sequence = event_sequence;
    packet.event_oldest = event_oldest;
    packet.target_index = target_index;
    packet.home_lat_1e7 = home_lat_1e7;
    packet.home_lon_1e7 = home_lon_1e7;
    packet.home_alt_m = home_alt_m;
    packet.loiter_radius_m = loiter_radius_m;
    packet.active_count = active_count;
    packet.scheduled_count = scheduled_count;
    packet.trim_count = trim_count;
    packet.mode = mode;
    packet.planner_state = planner_state;
    packet.ins_state = ins_state;
    packet.refuel_phase = refuel_phase;
    packet.home_state = home_state;
    packet.arm_state = arm_state;
    packet.safety_switch = safety_switch;
    packet.rc_stream = rc_stream;
    packet.flags = flags;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_GPS_MISSION_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_GPS_MISSION_STATUS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_GPS_MISSION_STATUS_MIN_LEN, MAVLINK_MSG_ID_LEAF_GPS_MISSION_STATUS_LEN, MAVLINK_MSG_ID_LEAF_GPS_MISSION_STATUS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_GPS_MISSION_STATUS_MIN_LEN, MAVLINK_MSG_ID_LEAF_GPS_MISSION_STATUS_LEN);
#endif
}

/**
 * @brief Pack a leaf_gps_mission_status message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param boot_id  Process incarnation.
 * @param sample_time_us  Monotonic sample time, microseconds.
 * @param route_session  Route session.
 * @param plan_revision  Source plan revision.
 * @param segment_revision  Manager segment revision; guidance reports the applied revision separately.
 * @param scheduled_revision  Pending continuation revision; zero if absent.
 * @param planner_revision  Latest planner output revision.
 * @param event_sequence  Newest event sequence.
 * @param event_oldest  Oldest retained event sequence.
 * @param target_index  Current target index, -1 if absent.
 * @param active_count  Accepted route point count.
 * @param scheduled_count  Scheduled route point count.
 * @param trim_count  Number removed at last handoff.
 * @param trim_revision  Source revision of last handoff or rejection.
 * @param home_lat_1e7  Raised RTH target latitude.
 * @param home_lon_1e7  Raised RTH target longitude.
 * @param home_alt_m  Raised RTH target altitude, metres.
 * @param loiter_radius_m  Home loiter waypoint radius, metres.
 * @param mode  RacerMode.
 * @param planner_state  FollowingPlanState.
 * @param ins_state  InsState.
 * @param refuel_phase  ReFuelPhase.
 * @param home_state  GPSHomeState.
 * @param arm_state  ArmState.
 * @param safety_switch  RCSwitchState.
 * @param rc_stream  StreamState.
 * @param flags  Bit 0 waiting for continuation; bit 1 continuation unavailable; bit 2 scheduled plan present.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_gps_mission_status_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t boot_id,uint64_t sample_time_us,uint64_t route_session,uint64_t plan_revision,uint64_t segment_revision,uint64_t scheduled_revision,uint64_t planner_revision,uint32_t event_sequence,uint32_t event_oldest,int32_t target_index,uint16_t active_count,uint16_t scheduled_count,uint16_t trim_count,uint64_t trim_revision,int32_t home_lat_1e7,int32_t home_lon_1e7,float home_alt_m,float loiter_radius_m,uint8_t mode,uint8_t planner_state,uint8_t ins_state,uint8_t refuel_phase,uint8_t home_state,uint8_t arm_state,uint8_t safety_switch,uint8_t rc_stream,uint8_t flags)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_GPS_MISSION_STATUS_LEN];
    _mav_put_uint64_t(buf, 0, boot_id);
    _mav_put_uint64_t(buf, 8, sample_time_us);
    _mav_put_uint64_t(buf, 16, route_session);
    _mav_put_uint64_t(buf, 24, plan_revision);
    _mav_put_uint64_t(buf, 32, segment_revision);
    _mav_put_uint64_t(buf, 40, scheduled_revision);
    _mav_put_uint64_t(buf, 48, planner_revision);
    _mav_put_uint64_t(buf, 56, trim_revision);
    _mav_put_uint32_t(buf, 64, event_sequence);
    _mav_put_uint32_t(buf, 68, event_oldest);
    _mav_put_int32_t(buf, 72, target_index);
    _mav_put_int32_t(buf, 76, home_lat_1e7);
    _mav_put_int32_t(buf, 80, home_lon_1e7);
    _mav_put_float(buf, 84, home_alt_m);
    _mav_put_float(buf, 88, loiter_radius_m);
    _mav_put_uint16_t(buf, 92, active_count);
    _mav_put_uint16_t(buf, 94, scheduled_count);
    _mav_put_uint16_t(buf, 96, trim_count);
    _mav_put_uint8_t(buf, 98, mode);
    _mav_put_uint8_t(buf, 99, planner_state);
    _mav_put_uint8_t(buf, 100, ins_state);
    _mav_put_uint8_t(buf, 101, refuel_phase);
    _mav_put_uint8_t(buf, 102, home_state);
    _mav_put_uint8_t(buf, 103, arm_state);
    _mav_put_uint8_t(buf, 104, safety_switch);
    _mav_put_uint8_t(buf, 105, rc_stream);
    _mav_put_uint8_t(buf, 106, flags);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_GPS_MISSION_STATUS_LEN);
#else
    mavlink_leaf_gps_mission_status_t packet;
    packet.boot_id = boot_id;
    packet.sample_time_us = sample_time_us;
    packet.route_session = route_session;
    packet.plan_revision = plan_revision;
    packet.segment_revision = segment_revision;
    packet.scheduled_revision = scheduled_revision;
    packet.planner_revision = planner_revision;
    packet.trim_revision = trim_revision;
    packet.event_sequence = event_sequence;
    packet.event_oldest = event_oldest;
    packet.target_index = target_index;
    packet.home_lat_1e7 = home_lat_1e7;
    packet.home_lon_1e7 = home_lon_1e7;
    packet.home_alt_m = home_alt_m;
    packet.loiter_radius_m = loiter_radius_m;
    packet.active_count = active_count;
    packet.scheduled_count = scheduled_count;
    packet.trim_count = trim_count;
    packet.mode = mode;
    packet.planner_state = planner_state;
    packet.ins_state = ins_state;
    packet.refuel_phase = refuel_phase;
    packet.home_state = home_state;
    packet.arm_state = arm_state;
    packet.safety_switch = safety_switch;
    packet.rc_stream = rc_stream;
    packet.flags = flags;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_GPS_MISSION_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_GPS_MISSION_STATUS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_LEAF_GPS_MISSION_STATUS_MIN_LEN, MAVLINK_MSG_ID_LEAF_GPS_MISSION_STATUS_LEN, MAVLINK_MSG_ID_LEAF_GPS_MISSION_STATUS_CRC);
}

/**
 * @brief Encode a leaf_gps_mission_status struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param leaf_gps_mission_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_gps_mission_status_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_leaf_gps_mission_status_t* leaf_gps_mission_status)
{
    return mavlink_msg_leaf_gps_mission_status_pack(system_id, component_id, msg, leaf_gps_mission_status->boot_id, leaf_gps_mission_status->sample_time_us, leaf_gps_mission_status->route_session, leaf_gps_mission_status->plan_revision, leaf_gps_mission_status->segment_revision, leaf_gps_mission_status->scheduled_revision, leaf_gps_mission_status->planner_revision, leaf_gps_mission_status->event_sequence, leaf_gps_mission_status->event_oldest, leaf_gps_mission_status->target_index, leaf_gps_mission_status->active_count, leaf_gps_mission_status->scheduled_count, leaf_gps_mission_status->trim_count, leaf_gps_mission_status->trim_revision, leaf_gps_mission_status->home_lat_1e7, leaf_gps_mission_status->home_lon_1e7, leaf_gps_mission_status->home_alt_m, leaf_gps_mission_status->loiter_radius_m, leaf_gps_mission_status->mode, leaf_gps_mission_status->planner_state, leaf_gps_mission_status->ins_state, leaf_gps_mission_status->refuel_phase, leaf_gps_mission_status->home_state, leaf_gps_mission_status->arm_state, leaf_gps_mission_status->safety_switch, leaf_gps_mission_status->rc_stream, leaf_gps_mission_status->flags);
}

/**
 * @brief Encode a leaf_gps_mission_status struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param leaf_gps_mission_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_gps_mission_status_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_leaf_gps_mission_status_t* leaf_gps_mission_status)
{
    return mavlink_msg_leaf_gps_mission_status_pack_chan(system_id, component_id, chan, msg, leaf_gps_mission_status->boot_id, leaf_gps_mission_status->sample_time_us, leaf_gps_mission_status->route_session, leaf_gps_mission_status->plan_revision, leaf_gps_mission_status->segment_revision, leaf_gps_mission_status->scheduled_revision, leaf_gps_mission_status->planner_revision, leaf_gps_mission_status->event_sequence, leaf_gps_mission_status->event_oldest, leaf_gps_mission_status->target_index, leaf_gps_mission_status->active_count, leaf_gps_mission_status->scheduled_count, leaf_gps_mission_status->trim_count, leaf_gps_mission_status->trim_revision, leaf_gps_mission_status->home_lat_1e7, leaf_gps_mission_status->home_lon_1e7, leaf_gps_mission_status->home_alt_m, leaf_gps_mission_status->loiter_radius_m, leaf_gps_mission_status->mode, leaf_gps_mission_status->planner_state, leaf_gps_mission_status->ins_state, leaf_gps_mission_status->refuel_phase, leaf_gps_mission_status->home_state, leaf_gps_mission_status->arm_state, leaf_gps_mission_status->safety_switch, leaf_gps_mission_status->rc_stream, leaf_gps_mission_status->flags);
}

/**
 * @brief Encode a leaf_gps_mission_status struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param leaf_gps_mission_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_gps_mission_status_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_leaf_gps_mission_status_t* leaf_gps_mission_status)
{
    return mavlink_msg_leaf_gps_mission_status_pack_status(system_id, component_id, _status, msg,  leaf_gps_mission_status->boot_id, leaf_gps_mission_status->sample_time_us, leaf_gps_mission_status->route_session, leaf_gps_mission_status->plan_revision, leaf_gps_mission_status->segment_revision, leaf_gps_mission_status->scheduled_revision, leaf_gps_mission_status->planner_revision, leaf_gps_mission_status->event_sequence, leaf_gps_mission_status->event_oldest, leaf_gps_mission_status->target_index, leaf_gps_mission_status->active_count, leaf_gps_mission_status->scheduled_count, leaf_gps_mission_status->trim_count, leaf_gps_mission_status->trim_revision, leaf_gps_mission_status->home_lat_1e7, leaf_gps_mission_status->home_lon_1e7, leaf_gps_mission_status->home_alt_m, leaf_gps_mission_status->loiter_radius_m, leaf_gps_mission_status->mode, leaf_gps_mission_status->planner_state, leaf_gps_mission_status->ins_state, leaf_gps_mission_status->refuel_phase, leaf_gps_mission_status->home_state, leaf_gps_mission_status->arm_state, leaf_gps_mission_status->safety_switch, leaf_gps_mission_status->rc_stream, leaf_gps_mission_status->flags);
}

/**
 * @brief Send a leaf_gps_mission_status message
 * @param chan MAVLink channel to send the message
 *
 * @param boot_id  Process incarnation.
 * @param sample_time_us  Monotonic sample time, microseconds.
 * @param route_session  Route session.
 * @param plan_revision  Source plan revision.
 * @param segment_revision  Manager segment revision; guidance reports the applied revision separately.
 * @param scheduled_revision  Pending continuation revision; zero if absent.
 * @param planner_revision  Latest planner output revision.
 * @param event_sequence  Newest event sequence.
 * @param event_oldest  Oldest retained event sequence.
 * @param target_index  Current target index, -1 if absent.
 * @param active_count  Accepted route point count.
 * @param scheduled_count  Scheduled route point count.
 * @param trim_count  Number removed at last handoff.
 * @param trim_revision  Source revision of last handoff or rejection.
 * @param home_lat_1e7  Raised RTH target latitude.
 * @param home_lon_1e7  Raised RTH target longitude.
 * @param home_alt_m  Raised RTH target altitude, metres.
 * @param loiter_radius_m  Home loiter waypoint radius, metres.
 * @param mode  RacerMode.
 * @param planner_state  FollowingPlanState.
 * @param ins_state  InsState.
 * @param refuel_phase  ReFuelPhase.
 * @param home_state  GPSHomeState.
 * @param arm_state  ArmState.
 * @param safety_switch  RCSwitchState.
 * @param rc_stream  StreamState.
 * @param flags  Bit 0 waiting for continuation; bit 1 continuation unavailable; bit 2 scheduled plan present.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_leaf_gps_mission_status_send(mavlink_channel_t chan, uint64_t boot_id, uint64_t sample_time_us, uint64_t route_session, uint64_t plan_revision, uint64_t segment_revision, uint64_t scheduled_revision, uint64_t planner_revision, uint32_t event_sequence, uint32_t event_oldest, int32_t target_index, uint16_t active_count, uint16_t scheduled_count, uint16_t trim_count, uint64_t trim_revision, int32_t home_lat_1e7, int32_t home_lon_1e7, float home_alt_m, float loiter_radius_m, uint8_t mode, uint8_t planner_state, uint8_t ins_state, uint8_t refuel_phase, uint8_t home_state, uint8_t arm_state, uint8_t safety_switch, uint8_t rc_stream, uint8_t flags)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_GPS_MISSION_STATUS_LEN];
    _mav_put_uint64_t(buf, 0, boot_id);
    _mav_put_uint64_t(buf, 8, sample_time_us);
    _mav_put_uint64_t(buf, 16, route_session);
    _mav_put_uint64_t(buf, 24, plan_revision);
    _mav_put_uint64_t(buf, 32, segment_revision);
    _mav_put_uint64_t(buf, 40, scheduled_revision);
    _mav_put_uint64_t(buf, 48, planner_revision);
    _mav_put_uint64_t(buf, 56, trim_revision);
    _mav_put_uint32_t(buf, 64, event_sequence);
    _mav_put_uint32_t(buf, 68, event_oldest);
    _mav_put_int32_t(buf, 72, target_index);
    _mav_put_int32_t(buf, 76, home_lat_1e7);
    _mav_put_int32_t(buf, 80, home_lon_1e7);
    _mav_put_float(buf, 84, home_alt_m);
    _mav_put_float(buf, 88, loiter_radius_m);
    _mav_put_uint16_t(buf, 92, active_count);
    _mav_put_uint16_t(buf, 94, scheduled_count);
    _mav_put_uint16_t(buf, 96, trim_count);
    _mav_put_uint8_t(buf, 98, mode);
    _mav_put_uint8_t(buf, 99, planner_state);
    _mav_put_uint8_t(buf, 100, ins_state);
    _mav_put_uint8_t(buf, 101, refuel_phase);
    _mav_put_uint8_t(buf, 102, home_state);
    _mav_put_uint8_t(buf, 103, arm_state);
    _mav_put_uint8_t(buf, 104, safety_switch);
    _mav_put_uint8_t(buf, 105, rc_stream);
    _mav_put_uint8_t(buf, 106, flags);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_GPS_MISSION_STATUS, buf, MAVLINK_MSG_ID_LEAF_GPS_MISSION_STATUS_MIN_LEN, MAVLINK_MSG_ID_LEAF_GPS_MISSION_STATUS_LEN, MAVLINK_MSG_ID_LEAF_GPS_MISSION_STATUS_CRC);
#else
    mavlink_leaf_gps_mission_status_t packet;
    packet.boot_id = boot_id;
    packet.sample_time_us = sample_time_us;
    packet.route_session = route_session;
    packet.plan_revision = plan_revision;
    packet.segment_revision = segment_revision;
    packet.scheduled_revision = scheduled_revision;
    packet.planner_revision = planner_revision;
    packet.trim_revision = trim_revision;
    packet.event_sequence = event_sequence;
    packet.event_oldest = event_oldest;
    packet.target_index = target_index;
    packet.home_lat_1e7 = home_lat_1e7;
    packet.home_lon_1e7 = home_lon_1e7;
    packet.home_alt_m = home_alt_m;
    packet.loiter_radius_m = loiter_radius_m;
    packet.active_count = active_count;
    packet.scheduled_count = scheduled_count;
    packet.trim_count = trim_count;
    packet.mode = mode;
    packet.planner_state = planner_state;
    packet.ins_state = ins_state;
    packet.refuel_phase = refuel_phase;
    packet.home_state = home_state;
    packet.arm_state = arm_state;
    packet.safety_switch = safety_switch;
    packet.rc_stream = rc_stream;
    packet.flags = flags;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_GPS_MISSION_STATUS, (const char *)&packet, MAVLINK_MSG_ID_LEAF_GPS_MISSION_STATUS_MIN_LEN, MAVLINK_MSG_ID_LEAF_GPS_MISSION_STATUS_LEN, MAVLINK_MSG_ID_LEAF_GPS_MISSION_STATUS_CRC);
#endif
}

/**
 * @brief Send a leaf_gps_mission_status message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_leaf_gps_mission_status_send_struct(mavlink_channel_t chan, const mavlink_leaf_gps_mission_status_t* leaf_gps_mission_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_leaf_gps_mission_status_send(chan, leaf_gps_mission_status->boot_id, leaf_gps_mission_status->sample_time_us, leaf_gps_mission_status->route_session, leaf_gps_mission_status->plan_revision, leaf_gps_mission_status->segment_revision, leaf_gps_mission_status->scheduled_revision, leaf_gps_mission_status->planner_revision, leaf_gps_mission_status->event_sequence, leaf_gps_mission_status->event_oldest, leaf_gps_mission_status->target_index, leaf_gps_mission_status->active_count, leaf_gps_mission_status->scheduled_count, leaf_gps_mission_status->trim_count, leaf_gps_mission_status->trim_revision, leaf_gps_mission_status->home_lat_1e7, leaf_gps_mission_status->home_lon_1e7, leaf_gps_mission_status->home_alt_m, leaf_gps_mission_status->loiter_radius_m, leaf_gps_mission_status->mode, leaf_gps_mission_status->planner_state, leaf_gps_mission_status->ins_state, leaf_gps_mission_status->refuel_phase, leaf_gps_mission_status->home_state, leaf_gps_mission_status->arm_state, leaf_gps_mission_status->safety_switch, leaf_gps_mission_status->rc_stream, leaf_gps_mission_status->flags);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_GPS_MISSION_STATUS, (const char *)leaf_gps_mission_status, MAVLINK_MSG_ID_LEAF_GPS_MISSION_STATUS_MIN_LEN, MAVLINK_MSG_ID_LEAF_GPS_MISSION_STATUS_LEN, MAVLINK_MSG_ID_LEAF_GPS_MISSION_STATUS_CRC);
#endif
}

#if MAVLINK_MSG_ID_LEAF_GPS_MISSION_STATUS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_leaf_gps_mission_status_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t boot_id, uint64_t sample_time_us, uint64_t route_session, uint64_t plan_revision, uint64_t segment_revision, uint64_t scheduled_revision, uint64_t planner_revision, uint32_t event_sequence, uint32_t event_oldest, int32_t target_index, uint16_t active_count, uint16_t scheduled_count, uint16_t trim_count, uint64_t trim_revision, int32_t home_lat_1e7, int32_t home_lon_1e7, float home_alt_m, float loiter_radius_m, uint8_t mode, uint8_t planner_state, uint8_t ins_state, uint8_t refuel_phase, uint8_t home_state, uint8_t arm_state, uint8_t safety_switch, uint8_t rc_stream, uint8_t flags)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, boot_id);
    _mav_put_uint64_t(buf, 8, sample_time_us);
    _mav_put_uint64_t(buf, 16, route_session);
    _mav_put_uint64_t(buf, 24, plan_revision);
    _mav_put_uint64_t(buf, 32, segment_revision);
    _mav_put_uint64_t(buf, 40, scheduled_revision);
    _mav_put_uint64_t(buf, 48, planner_revision);
    _mav_put_uint64_t(buf, 56, trim_revision);
    _mav_put_uint32_t(buf, 64, event_sequence);
    _mav_put_uint32_t(buf, 68, event_oldest);
    _mav_put_int32_t(buf, 72, target_index);
    _mav_put_int32_t(buf, 76, home_lat_1e7);
    _mav_put_int32_t(buf, 80, home_lon_1e7);
    _mav_put_float(buf, 84, home_alt_m);
    _mav_put_float(buf, 88, loiter_radius_m);
    _mav_put_uint16_t(buf, 92, active_count);
    _mav_put_uint16_t(buf, 94, scheduled_count);
    _mav_put_uint16_t(buf, 96, trim_count);
    _mav_put_uint8_t(buf, 98, mode);
    _mav_put_uint8_t(buf, 99, planner_state);
    _mav_put_uint8_t(buf, 100, ins_state);
    _mav_put_uint8_t(buf, 101, refuel_phase);
    _mav_put_uint8_t(buf, 102, home_state);
    _mav_put_uint8_t(buf, 103, arm_state);
    _mav_put_uint8_t(buf, 104, safety_switch);
    _mav_put_uint8_t(buf, 105, rc_stream);
    _mav_put_uint8_t(buf, 106, flags);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_GPS_MISSION_STATUS, buf, MAVLINK_MSG_ID_LEAF_GPS_MISSION_STATUS_MIN_LEN, MAVLINK_MSG_ID_LEAF_GPS_MISSION_STATUS_LEN, MAVLINK_MSG_ID_LEAF_GPS_MISSION_STATUS_CRC);
#else
    mavlink_leaf_gps_mission_status_t *packet = (mavlink_leaf_gps_mission_status_t *)msgbuf;
    packet->boot_id = boot_id;
    packet->sample_time_us = sample_time_us;
    packet->route_session = route_session;
    packet->plan_revision = plan_revision;
    packet->segment_revision = segment_revision;
    packet->scheduled_revision = scheduled_revision;
    packet->planner_revision = planner_revision;
    packet->trim_revision = trim_revision;
    packet->event_sequence = event_sequence;
    packet->event_oldest = event_oldest;
    packet->target_index = target_index;
    packet->home_lat_1e7 = home_lat_1e7;
    packet->home_lon_1e7 = home_lon_1e7;
    packet->home_alt_m = home_alt_m;
    packet->loiter_radius_m = loiter_radius_m;
    packet->active_count = active_count;
    packet->scheduled_count = scheduled_count;
    packet->trim_count = trim_count;
    packet->mode = mode;
    packet->planner_state = planner_state;
    packet->ins_state = ins_state;
    packet->refuel_phase = refuel_phase;
    packet->home_state = home_state;
    packet->arm_state = arm_state;
    packet->safety_switch = safety_switch;
    packet->rc_stream = rc_stream;
    packet->flags = flags;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_GPS_MISSION_STATUS, (const char *)packet, MAVLINK_MSG_ID_LEAF_GPS_MISSION_STATUS_MIN_LEN, MAVLINK_MSG_ID_LEAF_GPS_MISSION_STATUS_LEN, MAVLINK_MSG_ID_LEAF_GPS_MISSION_STATUS_CRC);
#endif
}
#endif

#endif

// MESSAGE LEAF_GPS_MISSION_STATUS UNPACKING


/**
 * @brief Get field boot_id from leaf_gps_mission_status message
 *
 * @return  Process incarnation.
 */
static inline uint64_t mavlink_msg_leaf_gps_mission_status_get_boot_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field sample_time_us from leaf_gps_mission_status message
 *
 * @return  Monotonic sample time, microseconds.
 */
static inline uint64_t mavlink_msg_leaf_gps_mission_status_get_sample_time_us(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  8);
}

/**
 * @brief Get field route_session from leaf_gps_mission_status message
 *
 * @return  Route session.
 */
static inline uint64_t mavlink_msg_leaf_gps_mission_status_get_route_session(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  16);
}

/**
 * @brief Get field plan_revision from leaf_gps_mission_status message
 *
 * @return  Source plan revision.
 */
static inline uint64_t mavlink_msg_leaf_gps_mission_status_get_plan_revision(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  24);
}

/**
 * @brief Get field segment_revision from leaf_gps_mission_status message
 *
 * @return  Manager segment revision; guidance reports the applied revision separately.
 */
static inline uint64_t mavlink_msg_leaf_gps_mission_status_get_segment_revision(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  32);
}

/**
 * @brief Get field scheduled_revision from leaf_gps_mission_status message
 *
 * @return  Pending continuation revision; zero if absent.
 */
static inline uint64_t mavlink_msg_leaf_gps_mission_status_get_scheduled_revision(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  40);
}

/**
 * @brief Get field planner_revision from leaf_gps_mission_status message
 *
 * @return  Latest planner output revision.
 */
static inline uint64_t mavlink_msg_leaf_gps_mission_status_get_planner_revision(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  48);
}

/**
 * @brief Get field event_sequence from leaf_gps_mission_status message
 *
 * @return  Newest event sequence.
 */
static inline uint32_t mavlink_msg_leaf_gps_mission_status_get_event_sequence(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  64);
}

/**
 * @brief Get field event_oldest from leaf_gps_mission_status message
 *
 * @return  Oldest retained event sequence.
 */
static inline uint32_t mavlink_msg_leaf_gps_mission_status_get_event_oldest(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  68);
}

/**
 * @brief Get field target_index from leaf_gps_mission_status message
 *
 * @return  Current target index, -1 if absent.
 */
static inline int32_t mavlink_msg_leaf_gps_mission_status_get_target_index(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  72);
}

/**
 * @brief Get field active_count from leaf_gps_mission_status message
 *
 * @return  Accepted route point count.
 */
static inline uint16_t mavlink_msg_leaf_gps_mission_status_get_active_count(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  92);
}

/**
 * @brief Get field scheduled_count from leaf_gps_mission_status message
 *
 * @return  Scheduled route point count.
 */
static inline uint16_t mavlink_msg_leaf_gps_mission_status_get_scheduled_count(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  94);
}

/**
 * @brief Get field trim_count from leaf_gps_mission_status message
 *
 * @return  Number removed at last handoff.
 */
static inline uint16_t mavlink_msg_leaf_gps_mission_status_get_trim_count(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  96);
}

/**
 * @brief Get field trim_revision from leaf_gps_mission_status message
 *
 * @return  Source revision of last handoff or rejection.
 */
static inline uint64_t mavlink_msg_leaf_gps_mission_status_get_trim_revision(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  56);
}

/**
 * @brief Get field home_lat_1e7 from leaf_gps_mission_status message
 *
 * @return  Raised RTH target latitude.
 */
static inline int32_t mavlink_msg_leaf_gps_mission_status_get_home_lat_1e7(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  76);
}

/**
 * @brief Get field home_lon_1e7 from leaf_gps_mission_status message
 *
 * @return  Raised RTH target longitude.
 */
static inline int32_t mavlink_msg_leaf_gps_mission_status_get_home_lon_1e7(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  80);
}

/**
 * @brief Get field home_alt_m from leaf_gps_mission_status message
 *
 * @return  Raised RTH target altitude, metres.
 */
static inline float mavlink_msg_leaf_gps_mission_status_get_home_alt_m(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  84);
}

/**
 * @brief Get field loiter_radius_m from leaf_gps_mission_status message
 *
 * @return  Home loiter waypoint radius, metres.
 */
static inline float mavlink_msg_leaf_gps_mission_status_get_loiter_radius_m(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  88);
}

/**
 * @brief Get field mode from leaf_gps_mission_status message
 *
 * @return  RacerMode.
 */
static inline uint8_t mavlink_msg_leaf_gps_mission_status_get_mode(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  98);
}

/**
 * @brief Get field planner_state from leaf_gps_mission_status message
 *
 * @return  FollowingPlanState.
 */
static inline uint8_t mavlink_msg_leaf_gps_mission_status_get_planner_state(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  99);
}

/**
 * @brief Get field ins_state from leaf_gps_mission_status message
 *
 * @return  InsState.
 */
static inline uint8_t mavlink_msg_leaf_gps_mission_status_get_ins_state(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  100);
}

/**
 * @brief Get field refuel_phase from leaf_gps_mission_status message
 *
 * @return  ReFuelPhase.
 */
static inline uint8_t mavlink_msg_leaf_gps_mission_status_get_refuel_phase(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  101);
}

/**
 * @brief Get field home_state from leaf_gps_mission_status message
 *
 * @return  GPSHomeState.
 */
static inline uint8_t mavlink_msg_leaf_gps_mission_status_get_home_state(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  102);
}

/**
 * @brief Get field arm_state from leaf_gps_mission_status message
 *
 * @return  ArmState.
 */
static inline uint8_t mavlink_msg_leaf_gps_mission_status_get_arm_state(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  103);
}

/**
 * @brief Get field safety_switch from leaf_gps_mission_status message
 *
 * @return  RCSwitchState.
 */
static inline uint8_t mavlink_msg_leaf_gps_mission_status_get_safety_switch(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  104);
}

/**
 * @brief Get field rc_stream from leaf_gps_mission_status message
 *
 * @return  StreamState.
 */
static inline uint8_t mavlink_msg_leaf_gps_mission_status_get_rc_stream(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  105);
}

/**
 * @brief Get field flags from leaf_gps_mission_status message
 *
 * @return  Bit 0 waiting for continuation; bit 1 continuation unavailable; bit 2 scheduled plan present.
 */
static inline uint8_t mavlink_msg_leaf_gps_mission_status_get_flags(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  106);
}

/**
 * @brief Decode a leaf_gps_mission_status message into a struct
 *
 * @param msg The message to decode
 * @param leaf_gps_mission_status C-struct to decode the message contents into
 */
static inline void mavlink_msg_leaf_gps_mission_status_decode(const mavlink_message_t* msg, mavlink_leaf_gps_mission_status_t* leaf_gps_mission_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    leaf_gps_mission_status->boot_id = mavlink_msg_leaf_gps_mission_status_get_boot_id(msg);
    leaf_gps_mission_status->sample_time_us = mavlink_msg_leaf_gps_mission_status_get_sample_time_us(msg);
    leaf_gps_mission_status->route_session = mavlink_msg_leaf_gps_mission_status_get_route_session(msg);
    leaf_gps_mission_status->plan_revision = mavlink_msg_leaf_gps_mission_status_get_plan_revision(msg);
    leaf_gps_mission_status->segment_revision = mavlink_msg_leaf_gps_mission_status_get_segment_revision(msg);
    leaf_gps_mission_status->scheduled_revision = mavlink_msg_leaf_gps_mission_status_get_scheduled_revision(msg);
    leaf_gps_mission_status->planner_revision = mavlink_msg_leaf_gps_mission_status_get_planner_revision(msg);
    leaf_gps_mission_status->trim_revision = mavlink_msg_leaf_gps_mission_status_get_trim_revision(msg);
    leaf_gps_mission_status->event_sequence = mavlink_msg_leaf_gps_mission_status_get_event_sequence(msg);
    leaf_gps_mission_status->event_oldest = mavlink_msg_leaf_gps_mission_status_get_event_oldest(msg);
    leaf_gps_mission_status->target_index = mavlink_msg_leaf_gps_mission_status_get_target_index(msg);
    leaf_gps_mission_status->home_lat_1e7 = mavlink_msg_leaf_gps_mission_status_get_home_lat_1e7(msg);
    leaf_gps_mission_status->home_lon_1e7 = mavlink_msg_leaf_gps_mission_status_get_home_lon_1e7(msg);
    leaf_gps_mission_status->home_alt_m = mavlink_msg_leaf_gps_mission_status_get_home_alt_m(msg);
    leaf_gps_mission_status->loiter_radius_m = mavlink_msg_leaf_gps_mission_status_get_loiter_radius_m(msg);
    leaf_gps_mission_status->active_count = mavlink_msg_leaf_gps_mission_status_get_active_count(msg);
    leaf_gps_mission_status->scheduled_count = mavlink_msg_leaf_gps_mission_status_get_scheduled_count(msg);
    leaf_gps_mission_status->trim_count = mavlink_msg_leaf_gps_mission_status_get_trim_count(msg);
    leaf_gps_mission_status->mode = mavlink_msg_leaf_gps_mission_status_get_mode(msg);
    leaf_gps_mission_status->planner_state = mavlink_msg_leaf_gps_mission_status_get_planner_state(msg);
    leaf_gps_mission_status->ins_state = mavlink_msg_leaf_gps_mission_status_get_ins_state(msg);
    leaf_gps_mission_status->refuel_phase = mavlink_msg_leaf_gps_mission_status_get_refuel_phase(msg);
    leaf_gps_mission_status->home_state = mavlink_msg_leaf_gps_mission_status_get_home_state(msg);
    leaf_gps_mission_status->arm_state = mavlink_msg_leaf_gps_mission_status_get_arm_state(msg);
    leaf_gps_mission_status->safety_switch = mavlink_msg_leaf_gps_mission_status_get_safety_switch(msg);
    leaf_gps_mission_status->rc_stream = mavlink_msg_leaf_gps_mission_status_get_rc_stream(msg);
    leaf_gps_mission_status->flags = mavlink_msg_leaf_gps_mission_status_get_flags(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_LEAF_GPS_MISSION_STATUS_LEN? msg->len : MAVLINK_MSG_ID_LEAF_GPS_MISSION_STATUS_LEN;
        memset(leaf_gps_mission_status, 0, MAVLINK_MSG_ID_LEAF_GPS_MISSION_STATUS_LEN);
    memcpy(leaf_gps_mission_status, _MAV_PAYLOAD(msg), len);
#endif
}
