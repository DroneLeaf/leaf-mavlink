#pragma once
// MESSAGE LEAF_PLANNER_PATH PACKING

#define MAVLINK_MSG_ID_LEAF_PLANNER_PATH 77071


typedef struct __mavlink_leaf_planner_path_t {
 uint64_t boot_id; /*<  Process incarnation.*/
 uint64_t sample_time_us; /*<  Monotonic sample time, microseconds.*/
 uint64_t solve_revision; /*<  Geometry solve revision.*/
 uint64_t plan_revision; /*<  Planner output revision for active path; latest output when candidate.*/
 uint64_t solve_time_us; /*<  Monotonic geometry epoch, microseconds.*/
 int32_t origin_lat_1e7; /*<  Projection origin latitude.*/
 int32_t origin_lon_1e7; /*<  Projection origin longitude.*/
 float alt_m; /*<  Planned altitude, metres.*/
 float start_east_m; /*<  Start East, metres.*/
 float start_north_m; /*<  Start North, metres.*/
 float start_heading_rad; /*<  Start heading, radians.*/
 float length_m[3]; /*<  Primitive lengths, metres.*/
 float curvature_inv_m[3]; /*<  Primitive signed curvatures, inverse metres.*/
 float markers_en_m[10]; /*<  East/North pairs: capture, planning capture, leader at arrival, front join, following slot.*/
 float terminal_start_m; /*<  Closing leg starts at path distance, metres.*/
 float capture_heading_rad; /*<  Capture heading, radians.*/
 float capture_radius_m; /*<  Capture radius, metres.*/
 float capture_heading_deg; /*<  Capture heading tolerance, degrees.*/
 uint8_t kind; /*<  0 active plan geometry, 1 latest candidate.*/
 uint8_t count; /*<  Primitive count, 0 to 3.*/
 uint8_t marker_flags; /*<  Validity bits for the five marker pairs.*/
 uint8_t family; /*<  lfp Family.*/
} mavlink_leaf_planner_path_t;

#define MAVLINK_MSG_ID_LEAF_PLANNER_PATH_LEN 148
#define MAVLINK_MSG_ID_LEAF_PLANNER_PATH_MIN_LEN 148
#define MAVLINK_MSG_ID_77071_LEN 148
#define MAVLINK_MSG_ID_77071_MIN_LEN 148

#define MAVLINK_MSG_ID_LEAF_PLANNER_PATH_CRC 67
#define MAVLINK_MSG_ID_77071_CRC 67

#define MAVLINK_MSG_LEAF_PLANNER_PATH_FIELD_LENGTH_M_LEN 3
#define MAVLINK_MSG_LEAF_PLANNER_PATH_FIELD_CURVATURE_INV_M_LEN 3
#define MAVLINK_MSG_LEAF_PLANNER_PATH_FIELD_MARKERS_EN_M_LEN 10

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_LEAF_PLANNER_PATH { \
    77071, \
    "LEAF_PLANNER_PATH", \
    22, \
    {  { "boot_id", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_leaf_planner_path_t, boot_id) }, \
         { "sample_time_us", NULL, MAVLINK_TYPE_UINT64_T, 0, 8, offsetof(mavlink_leaf_planner_path_t, sample_time_us) }, \
         { "solve_revision", NULL, MAVLINK_TYPE_UINT64_T, 0, 16, offsetof(mavlink_leaf_planner_path_t, solve_revision) }, \
         { "plan_revision", NULL, MAVLINK_TYPE_UINT64_T, 0, 24, offsetof(mavlink_leaf_planner_path_t, plan_revision) }, \
         { "solve_time_us", NULL, MAVLINK_TYPE_UINT64_T, 0, 32, offsetof(mavlink_leaf_planner_path_t, solve_time_us) }, \
         { "origin_lat_1e7", NULL, MAVLINK_TYPE_INT32_T, 0, 40, offsetof(mavlink_leaf_planner_path_t, origin_lat_1e7) }, \
         { "origin_lon_1e7", NULL, MAVLINK_TYPE_INT32_T, 0, 44, offsetof(mavlink_leaf_planner_path_t, origin_lon_1e7) }, \
         { "alt_m", NULL, MAVLINK_TYPE_FLOAT, 0, 48, offsetof(mavlink_leaf_planner_path_t, alt_m) }, \
         { "start_east_m", NULL, MAVLINK_TYPE_FLOAT, 0, 52, offsetof(mavlink_leaf_planner_path_t, start_east_m) }, \
         { "start_north_m", NULL, MAVLINK_TYPE_FLOAT, 0, 56, offsetof(mavlink_leaf_planner_path_t, start_north_m) }, \
         { "start_heading_rad", NULL, MAVLINK_TYPE_FLOAT, 0, 60, offsetof(mavlink_leaf_planner_path_t, start_heading_rad) }, \
         { "length_m", NULL, MAVLINK_TYPE_FLOAT, 3, 64, offsetof(mavlink_leaf_planner_path_t, length_m) }, \
         { "curvature_inv_m", NULL, MAVLINK_TYPE_FLOAT, 3, 76, offsetof(mavlink_leaf_planner_path_t, curvature_inv_m) }, \
         { "markers_en_m", NULL, MAVLINK_TYPE_FLOAT, 10, 88, offsetof(mavlink_leaf_planner_path_t, markers_en_m) }, \
         { "terminal_start_m", NULL, MAVLINK_TYPE_FLOAT, 0, 128, offsetof(mavlink_leaf_planner_path_t, terminal_start_m) }, \
         { "capture_heading_rad", NULL, MAVLINK_TYPE_FLOAT, 0, 132, offsetof(mavlink_leaf_planner_path_t, capture_heading_rad) }, \
         { "capture_radius_m", NULL, MAVLINK_TYPE_FLOAT, 0, 136, offsetof(mavlink_leaf_planner_path_t, capture_radius_m) }, \
         { "capture_heading_deg", NULL, MAVLINK_TYPE_FLOAT, 0, 140, offsetof(mavlink_leaf_planner_path_t, capture_heading_deg) }, \
         { "kind", NULL, MAVLINK_TYPE_UINT8_T, 0, 144, offsetof(mavlink_leaf_planner_path_t, kind) }, \
         { "count", NULL, MAVLINK_TYPE_UINT8_T, 0, 145, offsetof(mavlink_leaf_planner_path_t, count) }, \
         { "marker_flags", NULL, MAVLINK_TYPE_UINT8_T, 0, 146, offsetof(mavlink_leaf_planner_path_t, marker_flags) }, \
         { "family", NULL, MAVLINK_TYPE_UINT8_T, 0, 147, offsetof(mavlink_leaf_planner_path_t, family) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_LEAF_PLANNER_PATH { \
    "LEAF_PLANNER_PATH", \
    22, \
    {  { "boot_id", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_leaf_planner_path_t, boot_id) }, \
         { "sample_time_us", NULL, MAVLINK_TYPE_UINT64_T, 0, 8, offsetof(mavlink_leaf_planner_path_t, sample_time_us) }, \
         { "solve_revision", NULL, MAVLINK_TYPE_UINT64_T, 0, 16, offsetof(mavlink_leaf_planner_path_t, solve_revision) }, \
         { "plan_revision", NULL, MAVLINK_TYPE_UINT64_T, 0, 24, offsetof(mavlink_leaf_planner_path_t, plan_revision) }, \
         { "solve_time_us", NULL, MAVLINK_TYPE_UINT64_T, 0, 32, offsetof(mavlink_leaf_planner_path_t, solve_time_us) }, \
         { "origin_lat_1e7", NULL, MAVLINK_TYPE_INT32_T, 0, 40, offsetof(mavlink_leaf_planner_path_t, origin_lat_1e7) }, \
         { "origin_lon_1e7", NULL, MAVLINK_TYPE_INT32_T, 0, 44, offsetof(mavlink_leaf_planner_path_t, origin_lon_1e7) }, \
         { "alt_m", NULL, MAVLINK_TYPE_FLOAT, 0, 48, offsetof(mavlink_leaf_planner_path_t, alt_m) }, \
         { "start_east_m", NULL, MAVLINK_TYPE_FLOAT, 0, 52, offsetof(mavlink_leaf_planner_path_t, start_east_m) }, \
         { "start_north_m", NULL, MAVLINK_TYPE_FLOAT, 0, 56, offsetof(mavlink_leaf_planner_path_t, start_north_m) }, \
         { "start_heading_rad", NULL, MAVLINK_TYPE_FLOAT, 0, 60, offsetof(mavlink_leaf_planner_path_t, start_heading_rad) }, \
         { "length_m", NULL, MAVLINK_TYPE_FLOAT, 3, 64, offsetof(mavlink_leaf_planner_path_t, length_m) }, \
         { "curvature_inv_m", NULL, MAVLINK_TYPE_FLOAT, 3, 76, offsetof(mavlink_leaf_planner_path_t, curvature_inv_m) }, \
         { "markers_en_m", NULL, MAVLINK_TYPE_FLOAT, 10, 88, offsetof(mavlink_leaf_planner_path_t, markers_en_m) }, \
         { "terminal_start_m", NULL, MAVLINK_TYPE_FLOAT, 0, 128, offsetof(mavlink_leaf_planner_path_t, terminal_start_m) }, \
         { "capture_heading_rad", NULL, MAVLINK_TYPE_FLOAT, 0, 132, offsetof(mavlink_leaf_planner_path_t, capture_heading_rad) }, \
         { "capture_radius_m", NULL, MAVLINK_TYPE_FLOAT, 0, 136, offsetof(mavlink_leaf_planner_path_t, capture_radius_m) }, \
         { "capture_heading_deg", NULL, MAVLINK_TYPE_FLOAT, 0, 140, offsetof(mavlink_leaf_planner_path_t, capture_heading_deg) }, \
         { "kind", NULL, MAVLINK_TYPE_UINT8_T, 0, 144, offsetof(mavlink_leaf_planner_path_t, kind) }, \
         { "count", NULL, MAVLINK_TYPE_UINT8_T, 0, 145, offsetof(mavlink_leaf_planner_path_t, count) }, \
         { "marker_flags", NULL, MAVLINK_TYPE_UINT8_T, 0, 146, offsetof(mavlink_leaf_planner_path_t, marker_flags) }, \
         { "family", NULL, MAVLINK_TYPE_UINT8_T, 0, 147, offsetof(mavlink_leaf_planner_path_t, family) }, \
         } \
}
#endif

/**
 * @brief Pack a leaf_planner_path message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param boot_id  Process incarnation.
 * @param sample_time_us  Monotonic sample time, microseconds.
 * @param solve_revision  Geometry solve revision.
 * @param plan_revision  Planner output revision for active path; latest output when candidate.
 * @param solve_time_us  Monotonic geometry epoch, microseconds.
 * @param origin_lat_1e7  Projection origin latitude.
 * @param origin_lon_1e7  Projection origin longitude.
 * @param alt_m  Planned altitude, metres.
 * @param start_east_m  Start East, metres.
 * @param start_north_m  Start North, metres.
 * @param start_heading_rad  Start heading, radians.
 * @param length_m  Primitive lengths, metres.
 * @param curvature_inv_m  Primitive signed curvatures, inverse metres.
 * @param markers_en_m  East/North pairs: capture, planning capture, leader at arrival, front join, following slot.
 * @param terminal_start_m  Closing leg starts at path distance, metres.
 * @param capture_heading_rad  Capture heading, radians.
 * @param capture_radius_m  Capture radius, metres.
 * @param capture_heading_deg  Capture heading tolerance, degrees.
 * @param kind  0 active plan geometry, 1 latest candidate.
 * @param count  Primitive count, 0 to 3.
 * @param marker_flags  Validity bits for the five marker pairs.
 * @param family  lfp Family.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_planner_path_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t boot_id, uint64_t sample_time_us, uint64_t solve_revision, uint64_t plan_revision, uint64_t solve_time_us, int32_t origin_lat_1e7, int32_t origin_lon_1e7, float alt_m, float start_east_m, float start_north_m, float start_heading_rad, const float *length_m, const float *curvature_inv_m, const float *markers_en_m, float terminal_start_m, float capture_heading_rad, float capture_radius_m, float capture_heading_deg, uint8_t kind, uint8_t count, uint8_t marker_flags, uint8_t family)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_PLANNER_PATH_LEN];
    _mav_put_uint64_t(buf, 0, boot_id);
    _mav_put_uint64_t(buf, 8, sample_time_us);
    _mav_put_uint64_t(buf, 16, solve_revision);
    _mav_put_uint64_t(buf, 24, plan_revision);
    _mav_put_uint64_t(buf, 32, solve_time_us);
    _mav_put_int32_t(buf, 40, origin_lat_1e7);
    _mav_put_int32_t(buf, 44, origin_lon_1e7);
    _mav_put_float(buf, 48, alt_m);
    _mav_put_float(buf, 52, start_east_m);
    _mav_put_float(buf, 56, start_north_m);
    _mav_put_float(buf, 60, start_heading_rad);
    _mav_put_float(buf, 128, terminal_start_m);
    _mav_put_float(buf, 132, capture_heading_rad);
    _mav_put_float(buf, 136, capture_radius_m);
    _mav_put_float(buf, 140, capture_heading_deg);
    _mav_put_uint8_t(buf, 144, kind);
    _mav_put_uint8_t(buf, 145, count);
    _mav_put_uint8_t(buf, 146, marker_flags);
    _mav_put_uint8_t(buf, 147, family);
    _mav_put_float_array(buf, 64, length_m, 3);
    _mav_put_float_array(buf, 76, curvature_inv_m, 3);
    _mav_put_float_array(buf, 88, markers_en_m, 10);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_PLANNER_PATH_LEN);
#else
    mavlink_leaf_planner_path_t packet;
    packet.boot_id = boot_id;
    packet.sample_time_us = sample_time_us;
    packet.solve_revision = solve_revision;
    packet.plan_revision = plan_revision;
    packet.solve_time_us = solve_time_us;
    packet.origin_lat_1e7 = origin_lat_1e7;
    packet.origin_lon_1e7 = origin_lon_1e7;
    packet.alt_m = alt_m;
    packet.start_east_m = start_east_m;
    packet.start_north_m = start_north_m;
    packet.start_heading_rad = start_heading_rad;
    packet.terminal_start_m = terminal_start_m;
    packet.capture_heading_rad = capture_heading_rad;
    packet.capture_radius_m = capture_radius_m;
    packet.capture_heading_deg = capture_heading_deg;
    packet.kind = kind;
    packet.count = count;
    packet.marker_flags = marker_flags;
    packet.family = family;
    mav_array_assign_float(packet.length_m, length_m, 3);
    mav_array_assign_float(packet.curvature_inv_m, curvature_inv_m, 3);
    mav_array_assign_float(packet.markers_en_m, markers_en_m, 10);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_PLANNER_PATH_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_PLANNER_PATH;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_LEAF_PLANNER_PATH_MIN_LEN, MAVLINK_MSG_ID_LEAF_PLANNER_PATH_LEN, MAVLINK_MSG_ID_LEAF_PLANNER_PATH_CRC);
}

/**
 * @brief Pack a leaf_planner_path message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param boot_id  Process incarnation.
 * @param sample_time_us  Monotonic sample time, microseconds.
 * @param solve_revision  Geometry solve revision.
 * @param plan_revision  Planner output revision for active path; latest output when candidate.
 * @param solve_time_us  Monotonic geometry epoch, microseconds.
 * @param origin_lat_1e7  Projection origin latitude.
 * @param origin_lon_1e7  Projection origin longitude.
 * @param alt_m  Planned altitude, metres.
 * @param start_east_m  Start East, metres.
 * @param start_north_m  Start North, metres.
 * @param start_heading_rad  Start heading, radians.
 * @param length_m  Primitive lengths, metres.
 * @param curvature_inv_m  Primitive signed curvatures, inverse metres.
 * @param markers_en_m  East/North pairs: capture, planning capture, leader at arrival, front join, following slot.
 * @param terminal_start_m  Closing leg starts at path distance, metres.
 * @param capture_heading_rad  Capture heading, radians.
 * @param capture_radius_m  Capture radius, metres.
 * @param capture_heading_deg  Capture heading tolerance, degrees.
 * @param kind  0 active plan geometry, 1 latest candidate.
 * @param count  Primitive count, 0 to 3.
 * @param marker_flags  Validity bits for the five marker pairs.
 * @param family  lfp Family.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_planner_path_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint64_t boot_id, uint64_t sample_time_us, uint64_t solve_revision, uint64_t plan_revision, uint64_t solve_time_us, int32_t origin_lat_1e7, int32_t origin_lon_1e7, float alt_m, float start_east_m, float start_north_m, float start_heading_rad, const float *length_m, const float *curvature_inv_m, const float *markers_en_m, float terminal_start_m, float capture_heading_rad, float capture_radius_m, float capture_heading_deg, uint8_t kind, uint8_t count, uint8_t marker_flags, uint8_t family)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_PLANNER_PATH_LEN];
    _mav_put_uint64_t(buf, 0, boot_id);
    _mav_put_uint64_t(buf, 8, sample_time_us);
    _mav_put_uint64_t(buf, 16, solve_revision);
    _mav_put_uint64_t(buf, 24, plan_revision);
    _mav_put_uint64_t(buf, 32, solve_time_us);
    _mav_put_int32_t(buf, 40, origin_lat_1e7);
    _mav_put_int32_t(buf, 44, origin_lon_1e7);
    _mav_put_float(buf, 48, alt_m);
    _mav_put_float(buf, 52, start_east_m);
    _mav_put_float(buf, 56, start_north_m);
    _mav_put_float(buf, 60, start_heading_rad);
    _mav_put_float(buf, 128, terminal_start_m);
    _mav_put_float(buf, 132, capture_heading_rad);
    _mav_put_float(buf, 136, capture_radius_m);
    _mav_put_float(buf, 140, capture_heading_deg);
    _mav_put_uint8_t(buf, 144, kind);
    _mav_put_uint8_t(buf, 145, count);
    _mav_put_uint8_t(buf, 146, marker_flags);
    _mav_put_uint8_t(buf, 147, family);
    _mav_put_float_array(buf, 64, length_m, 3);
    _mav_put_float_array(buf, 76, curvature_inv_m, 3);
    _mav_put_float_array(buf, 88, markers_en_m, 10);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_PLANNER_PATH_LEN);
#else
    mavlink_leaf_planner_path_t packet;
    packet.boot_id = boot_id;
    packet.sample_time_us = sample_time_us;
    packet.solve_revision = solve_revision;
    packet.plan_revision = plan_revision;
    packet.solve_time_us = solve_time_us;
    packet.origin_lat_1e7 = origin_lat_1e7;
    packet.origin_lon_1e7 = origin_lon_1e7;
    packet.alt_m = alt_m;
    packet.start_east_m = start_east_m;
    packet.start_north_m = start_north_m;
    packet.start_heading_rad = start_heading_rad;
    packet.terminal_start_m = terminal_start_m;
    packet.capture_heading_rad = capture_heading_rad;
    packet.capture_radius_m = capture_radius_m;
    packet.capture_heading_deg = capture_heading_deg;
    packet.kind = kind;
    packet.count = count;
    packet.marker_flags = marker_flags;
    packet.family = family;
    mav_array_memcpy(packet.length_m, length_m, sizeof(float)*3);
    mav_array_memcpy(packet.curvature_inv_m, curvature_inv_m, sizeof(float)*3);
    mav_array_memcpy(packet.markers_en_m, markers_en_m, sizeof(float)*10);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_PLANNER_PATH_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_PLANNER_PATH;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_PLANNER_PATH_MIN_LEN, MAVLINK_MSG_ID_LEAF_PLANNER_PATH_LEN, MAVLINK_MSG_ID_LEAF_PLANNER_PATH_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_PLANNER_PATH_MIN_LEN, MAVLINK_MSG_ID_LEAF_PLANNER_PATH_LEN);
#endif
}

/**
 * @brief Pack a leaf_planner_path message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param boot_id  Process incarnation.
 * @param sample_time_us  Monotonic sample time, microseconds.
 * @param solve_revision  Geometry solve revision.
 * @param plan_revision  Planner output revision for active path; latest output when candidate.
 * @param solve_time_us  Monotonic geometry epoch, microseconds.
 * @param origin_lat_1e7  Projection origin latitude.
 * @param origin_lon_1e7  Projection origin longitude.
 * @param alt_m  Planned altitude, metres.
 * @param start_east_m  Start East, metres.
 * @param start_north_m  Start North, metres.
 * @param start_heading_rad  Start heading, radians.
 * @param length_m  Primitive lengths, metres.
 * @param curvature_inv_m  Primitive signed curvatures, inverse metres.
 * @param markers_en_m  East/North pairs: capture, planning capture, leader at arrival, front join, following slot.
 * @param terminal_start_m  Closing leg starts at path distance, metres.
 * @param capture_heading_rad  Capture heading, radians.
 * @param capture_radius_m  Capture radius, metres.
 * @param capture_heading_deg  Capture heading tolerance, degrees.
 * @param kind  0 active plan geometry, 1 latest candidate.
 * @param count  Primitive count, 0 to 3.
 * @param marker_flags  Validity bits for the five marker pairs.
 * @param family  lfp Family.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_planner_path_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t boot_id,uint64_t sample_time_us,uint64_t solve_revision,uint64_t plan_revision,uint64_t solve_time_us,int32_t origin_lat_1e7,int32_t origin_lon_1e7,float alt_m,float start_east_m,float start_north_m,float start_heading_rad,const float *length_m,const float *curvature_inv_m,const float *markers_en_m,float terminal_start_m,float capture_heading_rad,float capture_radius_m,float capture_heading_deg,uint8_t kind,uint8_t count,uint8_t marker_flags,uint8_t family)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_PLANNER_PATH_LEN];
    _mav_put_uint64_t(buf, 0, boot_id);
    _mav_put_uint64_t(buf, 8, sample_time_us);
    _mav_put_uint64_t(buf, 16, solve_revision);
    _mav_put_uint64_t(buf, 24, plan_revision);
    _mav_put_uint64_t(buf, 32, solve_time_us);
    _mav_put_int32_t(buf, 40, origin_lat_1e7);
    _mav_put_int32_t(buf, 44, origin_lon_1e7);
    _mav_put_float(buf, 48, alt_m);
    _mav_put_float(buf, 52, start_east_m);
    _mav_put_float(buf, 56, start_north_m);
    _mav_put_float(buf, 60, start_heading_rad);
    _mav_put_float(buf, 128, terminal_start_m);
    _mav_put_float(buf, 132, capture_heading_rad);
    _mav_put_float(buf, 136, capture_radius_m);
    _mav_put_float(buf, 140, capture_heading_deg);
    _mav_put_uint8_t(buf, 144, kind);
    _mav_put_uint8_t(buf, 145, count);
    _mav_put_uint8_t(buf, 146, marker_flags);
    _mav_put_uint8_t(buf, 147, family);
    _mav_put_float_array(buf, 64, length_m, 3);
    _mav_put_float_array(buf, 76, curvature_inv_m, 3);
    _mav_put_float_array(buf, 88, markers_en_m, 10);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_PLANNER_PATH_LEN);
#else
    mavlink_leaf_planner_path_t packet;
    packet.boot_id = boot_id;
    packet.sample_time_us = sample_time_us;
    packet.solve_revision = solve_revision;
    packet.plan_revision = plan_revision;
    packet.solve_time_us = solve_time_us;
    packet.origin_lat_1e7 = origin_lat_1e7;
    packet.origin_lon_1e7 = origin_lon_1e7;
    packet.alt_m = alt_m;
    packet.start_east_m = start_east_m;
    packet.start_north_m = start_north_m;
    packet.start_heading_rad = start_heading_rad;
    packet.terminal_start_m = terminal_start_m;
    packet.capture_heading_rad = capture_heading_rad;
    packet.capture_radius_m = capture_radius_m;
    packet.capture_heading_deg = capture_heading_deg;
    packet.kind = kind;
    packet.count = count;
    packet.marker_flags = marker_flags;
    packet.family = family;
    mav_array_assign_float(packet.length_m, length_m, 3);
    mav_array_assign_float(packet.curvature_inv_m, curvature_inv_m, 3);
    mav_array_assign_float(packet.markers_en_m, markers_en_m, 10);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_PLANNER_PATH_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_PLANNER_PATH;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_LEAF_PLANNER_PATH_MIN_LEN, MAVLINK_MSG_ID_LEAF_PLANNER_PATH_LEN, MAVLINK_MSG_ID_LEAF_PLANNER_PATH_CRC);
}

/**
 * @brief Encode a leaf_planner_path struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param leaf_planner_path C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_planner_path_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_leaf_planner_path_t* leaf_planner_path)
{
    return mavlink_msg_leaf_planner_path_pack(system_id, component_id, msg, leaf_planner_path->boot_id, leaf_planner_path->sample_time_us, leaf_planner_path->solve_revision, leaf_planner_path->plan_revision, leaf_planner_path->solve_time_us, leaf_planner_path->origin_lat_1e7, leaf_planner_path->origin_lon_1e7, leaf_planner_path->alt_m, leaf_planner_path->start_east_m, leaf_planner_path->start_north_m, leaf_planner_path->start_heading_rad, leaf_planner_path->length_m, leaf_planner_path->curvature_inv_m, leaf_planner_path->markers_en_m, leaf_planner_path->terminal_start_m, leaf_planner_path->capture_heading_rad, leaf_planner_path->capture_radius_m, leaf_planner_path->capture_heading_deg, leaf_planner_path->kind, leaf_planner_path->count, leaf_planner_path->marker_flags, leaf_planner_path->family);
}

/**
 * @brief Encode a leaf_planner_path struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param leaf_planner_path C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_planner_path_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_leaf_planner_path_t* leaf_planner_path)
{
    return mavlink_msg_leaf_planner_path_pack_chan(system_id, component_id, chan, msg, leaf_planner_path->boot_id, leaf_planner_path->sample_time_us, leaf_planner_path->solve_revision, leaf_planner_path->plan_revision, leaf_planner_path->solve_time_us, leaf_planner_path->origin_lat_1e7, leaf_planner_path->origin_lon_1e7, leaf_planner_path->alt_m, leaf_planner_path->start_east_m, leaf_planner_path->start_north_m, leaf_planner_path->start_heading_rad, leaf_planner_path->length_m, leaf_planner_path->curvature_inv_m, leaf_planner_path->markers_en_m, leaf_planner_path->terminal_start_m, leaf_planner_path->capture_heading_rad, leaf_planner_path->capture_radius_m, leaf_planner_path->capture_heading_deg, leaf_planner_path->kind, leaf_planner_path->count, leaf_planner_path->marker_flags, leaf_planner_path->family);
}

/**
 * @brief Encode a leaf_planner_path struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param leaf_planner_path C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_planner_path_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_leaf_planner_path_t* leaf_planner_path)
{
    return mavlink_msg_leaf_planner_path_pack_status(system_id, component_id, _status, msg,  leaf_planner_path->boot_id, leaf_planner_path->sample_time_us, leaf_planner_path->solve_revision, leaf_planner_path->plan_revision, leaf_planner_path->solve_time_us, leaf_planner_path->origin_lat_1e7, leaf_planner_path->origin_lon_1e7, leaf_planner_path->alt_m, leaf_planner_path->start_east_m, leaf_planner_path->start_north_m, leaf_planner_path->start_heading_rad, leaf_planner_path->length_m, leaf_planner_path->curvature_inv_m, leaf_planner_path->markers_en_m, leaf_planner_path->terminal_start_m, leaf_planner_path->capture_heading_rad, leaf_planner_path->capture_radius_m, leaf_planner_path->capture_heading_deg, leaf_planner_path->kind, leaf_planner_path->count, leaf_planner_path->marker_flags, leaf_planner_path->family);
}

/**
 * @brief Send a leaf_planner_path message
 * @param chan MAVLink channel to send the message
 *
 * @param boot_id  Process incarnation.
 * @param sample_time_us  Monotonic sample time, microseconds.
 * @param solve_revision  Geometry solve revision.
 * @param plan_revision  Planner output revision for active path; latest output when candidate.
 * @param solve_time_us  Monotonic geometry epoch, microseconds.
 * @param origin_lat_1e7  Projection origin latitude.
 * @param origin_lon_1e7  Projection origin longitude.
 * @param alt_m  Planned altitude, metres.
 * @param start_east_m  Start East, metres.
 * @param start_north_m  Start North, metres.
 * @param start_heading_rad  Start heading, radians.
 * @param length_m  Primitive lengths, metres.
 * @param curvature_inv_m  Primitive signed curvatures, inverse metres.
 * @param markers_en_m  East/North pairs: capture, planning capture, leader at arrival, front join, following slot.
 * @param terminal_start_m  Closing leg starts at path distance, metres.
 * @param capture_heading_rad  Capture heading, radians.
 * @param capture_radius_m  Capture radius, metres.
 * @param capture_heading_deg  Capture heading tolerance, degrees.
 * @param kind  0 active plan geometry, 1 latest candidate.
 * @param count  Primitive count, 0 to 3.
 * @param marker_flags  Validity bits for the five marker pairs.
 * @param family  lfp Family.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_leaf_planner_path_send(mavlink_channel_t chan, uint64_t boot_id, uint64_t sample_time_us, uint64_t solve_revision, uint64_t plan_revision, uint64_t solve_time_us, int32_t origin_lat_1e7, int32_t origin_lon_1e7, float alt_m, float start_east_m, float start_north_m, float start_heading_rad, const float *length_m, const float *curvature_inv_m, const float *markers_en_m, float terminal_start_m, float capture_heading_rad, float capture_radius_m, float capture_heading_deg, uint8_t kind, uint8_t count, uint8_t marker_flags, uint8_t family)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_PLANNER_PATH_LEN];
    _mav_put_uint64_t(buf, 0, boot_id);
    _mav_put_uint64_t(buf, 8, sample_time_us);
    _mav_put_uint64_t(buf, 16, solve_revision);
    _mav_put_uint64_t(buf, 24, plan_revision);
    _mav_put_uint64_t(buf, 32, solve_time_us);
    _mav_put_int32_t(buf, 40, origin_lat_1e7);
    _mav_put_int32_t(buf, 44, origin_lon_1e7);
    _mav_put_float(buf, 48, alt_m);
    _mav_put_float(buf, 52, start_east_m);
    _mav_put_float(buf, 56, start_north_m);
    _mav_put_float(buf, 60, start_heading_rad);
    _mav_put_float(buf, 128, terminal_start_m);
    _mav_put_float(buf, 132, capture_heading_rad);
    _mav_put_float(buf, 136, capture_radius_m);
    _mav_put_float(buf, 140, capture_heading_deg);
    _mav_put_uint8_t(buf, 144, kind);
    _mav_put_uint8_t(buf, 145, count);
    _mav_put_uint8_t(buf, 146, marker_flags);
    _mav_put_uint8_t(buf, 147, family);
    _mav_put_float_array(buf, 64, length_m, 3);
    _mav_put_float_array(buf, 76, curvature_inv_m, 3);
    _mav_put_float_array(buf, 88, markers_en_m, 10);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_PLANNER_PATH, buf, MAVLINK_MSG_ID_LEAF_PLANNER_PATH_MIN_LEN, MAVLINK_MSG_ID_LEAF_PLANNER_PATH_LEN, MAVLINK_MSG_ID_LEAF_PLANNER_PATH_CRC);
#else
    mavlink_leaf_planner_path_t packet;
    packet.boot_id = boot_id;
    packet.sample_time_us = sample_time_us;
    packet.solve_revision = solve_revision;
    packet.plan_revision = plan_revision;
    packet.solve_time_us = solve_time_us;
    packet.origin_lat_1e7 = origin_lat_1e7;
    packet.origin_lon_1e7 = origin_lon_1e7;
    packet.alt_m = alt_m;
    packet.start_east_m = start_east_m;
    packet.start_north_m = start_north_m;
    packet.start_heading_rad = start_heading_rad;
    packet.terminal_start_m = terminal_start_m;
    packet.capture_heading_rad = capture_heading_rad;
    packet.capture_radius_m = capture_radius_m;
    packet.capture_heading_deg = capture_heading_deg;
    packet.kind = kind;
    packet.count = count;
    packet.marker_flags = marker_flags;
    packet.family = family;
    mav_array_assign_float(packet.length_m, length_m, 3);
    mav_array_assign_float(packet.curvature_inv_m, curvature_inv_m, 3);
    mav_array_assign_float(packet.markers_en_m, markers_en_m, 10);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_PLANNER_PATH, (const char *)&packet, MAVLINK_MSG_ID_LEAF_PLANNER_PATH_MIN_LEN, MAVLINK_MSG_ID_LEAF_PLANNER_PATH_LEN, MAVLINK_MSG_ID_LEAF_PLANNER_PATH_CRC);
#endif
}

/**
 * @brief Send a leaf_planner_path message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_leaf_planner_path_send_struct(mavlink_channel_t chan, const mavlink_leaf_planner_path_t* leaf_planner_path)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_leaf_planner_path_send(chan, leaf_planner_path->boot_id, leaf_planner_path->sample_time_us, leaf_planner_path->solve_revision, leaf_planner_path->plan_revision, leaf_planner_path->solve_time_us, leaf_planner_path->origin_lat_1e7, leaf_planner_path->origin_lon_1e7, leaf_planner_path->alt_m, leaf_planner_path->start_east_m, leaf_planner_path->start_north_m, leaf_planner_path->start_heading_rad, leaf_planner_path->length_m, leaf_planner_path->curvature_inv_m, leaf_planner_path->markers_en_m, leaf_planner_path->terminal_start_m, leaf_planner_path->capture_heading_rad, leaf_planner_path->capture_radius_m, leaf_planner_path->capture_heading_deg, leaf_planner_path->kind, leaf_planner_path->count, leaf_planner_path->marker_flags, leaf_planner_path->family);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_PLANNER_PATH, (const char *)leaf_planner_path, MAVLINK_MSG_ID_LEAF_PLANNER_PATH_MIN_LEN, MAVLINK_MSG_ID_LEAF_PLANNER_PATH_LEN, MAVLINK_MSG_ID_LEAF_PLANNER_PATH_CRC);
#endif
}

#if MAVLINK_MSG_ID_LEAF_PLANNER_PATH_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_leaf_planner_path_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t boot_id, uint64_t sample_time_us, uint64_t solve_revision, uint64_t plan_revision, uint64_t solve_time_us, int32_t origin_lat_1e7, int32_t origin_lon_1e7, float alt_m, float start_east_m, float start_north_m, float start_heading_rad, const float *length_m, const float *curvature_inv_m, const float *markers_en_m, float terminal_start_m, float capture_heading_rad, float capture_radius_m, float capture_heading_deg, uint8_t kind, uint8_t count, uint8_t marker_flags, uint8_t family)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, boot_id);
    _mav_put_uint64_t(buf, 8, sample_time_us);
    _mav_put_uint64_t(buf, 16, solve_revision);
    _mav_put_uint64_t(buf, 24, plan_revision);
    _mav_put_uint64_t(buf, 32, solve_time_us);
    _mav_put_int32_t(buf, 40, origin_lat_1e7);
    _mav_put_int32_t(buf, 44, origin_lon_1e7);
    _mav_put_float(buf, 48, alt_m);
    _mav_put_float(buf, 52, start_east_m);
    _mav_put_float(buf, 56, start_north_m);
    _mav_put_float(buf, 60, start_heading_rad);
    _mav_put_float(buf, 128, terminal_start_m);
    _mav_put_float(buf, 132, capture_heading_rad);
    _mav_put_float(buf, 136, capture_radius_m);
    _mav_put_float(buf, 140, capture_heading_deg);
    _mav_put_uint8_t(buf, 144, kind);
    _mav_put_uint8_t(buf, 145, count);
    _mav_put_uint8_t(buf, 146, marker_flags);
    _mav_put_uint8_t(buf, 147, family);
    _mav_put_float_array(buf, 64, length_m, 3);
    _mav_put_float_array(buf, 76, curvature_inv_m, 3);
    _mav_put_float_array(buf, 88, markers_en_m, 10);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_PLANNER_PATH, buf, MAVLINK_MSG_ID_LEAF_PLANNER_PATH_MIN_LEN, MAVLINK_MSG_ID_LEAF_PLANNER_PATH_LEN, MAVLINK_MSG_ID_LEAF_PLANNER_PATH_CRC);
#else
    mavlink_leaf_planner_path_t *packet = (mavlink_leaf_planner_path_t *)msgbuf;
    packet->boot_id = boot_id;
    packet->sample_time_us = sample_time_us;
    packet->solve_revision = solve_revision;
    packet->plan_revision = plan_revision;
    packet->solve_time_us = solve_time_us;
    packet->origin_lat_1e7 = origin_lat_1e7;
    packet->origin_lon_1e7 = origin_lon_1e7;
    packet->alt_m = alt_m;
    packet->start_east_m = start_east_m;
    packet->start_north_m = start_north_m;
    packet->start_heading_rad = start_heading_rad;
    packet->terminal_start_m = terminal_start_m;
    packet->capture_heading_rad = capture_heading_rad;
    packet->capture_radius_m = capture_radius_m;
    packet->capture_heading_deg = capture_heading_deg;
    packet->kind = kind;
    packet->count = count;
    packet->marker_flags = marker_flags;
    packet->family = family;
    mav_array_assign_float(packet->length_m, length_m, 3);
    mav_array_assign_float(packet->curvature_inv_m, curvature_inv_m, 3);
    mav_array_assign_float(packet->markers_en_m, markers_en_m, 10);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_PLANNER_PATH, (const char *)packet, MAVLINK_MSG_ID_LEAF_PLANNER_PATH_MIN_LEN, MAVLINK_MSG_ID_LEAF_PLANNER_PATH_LEN, MAVLINK_MSG_ID_LEAF_PLANNER_PATH_CRC);
#endif
}
#endif

#endif

// MESSAGE LEAF_PLANNER_PATH UNPACKING


/**
 * @brief Get field boot_id from leaf_planner_path message
 *
 * @return  Process incarnation.
 */
static inline uint64_t mavlink_msg_leaf_planner_path_get_boot_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field sample_time_us from leaf_planner_path message
 *
 * @return  Monotonic sample time, microseconds.
 */
static inline uint64_t mavlink_msg_leaf_planner_path_get_sample_time_us(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  8);
}

/**
 * @brief Get field solve_revision from leaf_planner_path message
 *
 * @return  Geometry solve revision.
 */
static inline uint64_t mavlink_msg_leaf_planner_path_get_solve_revision(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  16);
}

/**
 * @brief Get field plan_revision from leaf_planner_path message
 *
 * @return  Planner output revision for active path; latest output when candidate.
 */
static inline uint64_t mavlink_msg_leaf_planner_path_get_plan_revision(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  24);
}

/**
 * @brief Get field solve_time_us from leaf_planner_path message
 *
 * @return  Monotonic geometry epoch, microseconds.
 */
static inline uint64_t mavlink_msg_leaf_planner_path_get_solve_time_us(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  32);
}

/**
 * @brief Get field origin_lat_1e7 from leaf_planner_path message
 *
 * @return  Projection origin latitude.
 */
static inline int32_t mavlink_msg_leaf_planner_path_get_origin_lat_1e7(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  40);
}

/**
 * @brief Get field origin_lon_1e7 from leaf_planner_path message
 *
 * @return  Projection origin longitude.
 */
static inline int32_t mavlink_msg_leaf_planner_path_get_origin_lon_1e7(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  44);
}

/**
 * @brief Get field alt_m from leaf_planner_path message
 *
 * @return  Planned altitude, metres.
 */
static inline float mavlink_msg_leaf_planner_path_get_alt_m(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  48);
}

/**
 * @brief Get field start_east_m from leaf_planner_path message
 *
 * @return  Start East, metres.
 */
static inline float mavlink_msg_leaf_planner_path_get_start_east_m(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  52);
}

/**
 * @brief Get field start_north_m from leaf_planner_path message
 *
 * @return  Start North, metres.
 */
static inline float mavlink_msg_leaf_planner_path_get_start_north_m(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  56);
}

/**
 * @brief Get field start_heading_rad from leaf_planner_path message
 *
 * @return  Start heading, radians.
 */
static inline float mavlink_msg_leaf_planner_path_get_start_heading_rad(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  60);
}

/**
 * @brief Get field length_m from leaf_planner_path message
 *
 * @return  Primitive lengths, metres.
 */
static inline uint16_t mavlink_msg_leaf_planner_path_get_length_m(const mavlink_message_t* msg, float *length_m)
{
    return _MAV_RETURN_float_array(msg, length_m, 3,  64);
}

/**
 * @brief Get field curvature_inv_m from leaf_planner_path message
 *
 * @return  Primitive signed curvatures, inverse metres.
 */
static inline uint16_t mavlink_msg_leaf_planner_path_get_curvature_inv_m(const mavlink_message_t* msg, float *curvature_inv_m)
{
    return _MAV_RETURN_float_array(msg, curvature_inv_m, 3,  76);
}

/**
 * @brief Get field markers_en_m from leaf_planner_path message
 *
 * @return  East/North pairs: capture, planning capture, leader at arrival, front join, following slot.
 */
static inline uint16_t mavlink_msg_leaf_planner_path_get_markers_en_m(const mavlink_message_t* msg, float *markers_en_m)
{
    return _MAV_RETURN_float_array(msg, markers_en_m, 10,  88);
}

/**
 * @brief Get field terminal_start_m from leaf_planner_path message
 *
 * @return  Closing leg starts at path distance, metres.
 */
static inline float mavlink_msg_leaf_planner_path_get_terminal_start_m(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  128);
}

/**
 * @brief Get field capture_heading_rad from leaf_planner_path message
 *
 * @return  Capture heading, radians.
 */
static inline float mavlink_msg_leaf_planner_path_get_capture_heading_rad(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  132);
}

/**
 * @brief Get field capture_radius_m from leaf_planner_path message
 *
 * @return  Capture radius, metres.
 */
static inline float mavlink_msg_leaf_planner_path_get_capture_radius_m(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  136);
}

/**
 * @brief Get field capture_heading_deg from leaf_planner_path message
 *
 * @return  Capture heading tolerance, degrees.
 */
static inline float mavlink_msg_leaf_planner_path_get_capture_heading_deg(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  140);
}

/**
 * @brief Get field kind from leaf_planner_path message
 *
 * @return  0 active plan geometry, 1 latest candidate.
 */
static inline uint8_t mavlink_msg_leaf_planner_path_get_kind(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  144);
}

/**
 * @brief Get field count from leaf_planner_path message
 *
 * @return  Primitive count, 0 to 3.
 */
static inline uint8_t mavlink_msg_leaf_planner_path_get_count(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  145);
}

/**
 * @brief Get field marker_flags from leaf_planner_path message
 *
 * @return  Validity bits for the five marker pairs.
 */
static inline uint8_t mavlink_msg_leaf_planner_path_get_marker_flags(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  146);
}

/**
 * @brief Get field family from leaf_planner_path message
 *
 * @return  lfp Family.
 */
static inline uint8_t mavlink_msg_leaf_planner_path_get_family(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  147);
}

/**
 * @brief Decode a leaf_planner_path message into a struct
 *
 * @param msg The message to decode
 * @param leaf_planner_path C-struct to decode the message contents into
 */
static inline void mavlink_msg_leaf_planner_path_decode(const mavlink_message_t* msg, mavlink_leaf_planner_path_t* leaf_planner_path)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    leaf_planner_path->boot_id = mavlink_msg_leaf_planner_path_get_boot_id(msg);
    leaf_planner_path->sample_time_us = mavlink_msg_leaf_planner_path_get_sample_time_us(msg);
    leaf_planner_path->solve_revision = mavlink_msg_leaf_planner_path_get_solve_revision(msg);
    leaf_planner_path->plan_revision = mavlink_msg_leaf_planner_path_get_plan_revision(msg);
    leaf_planner_path->solve_time_us = mavlink_msg_leaf_planner_path_get_solve_time_us(msg);
    leaf_planner_path->origin_lat_1e7 = mavlink_msg_leaf_planner_path_get_origin_lat_1e7(msg);
    leaf_planner_path->origin_lon_1e7 = mavlink_msg_leaf_planner_path_get_origin_lon_1e7(msg);
    leaf_planner_path->alt_m = mavlink_msg_leaf_planner_path_get_alt_m(msg);
    leaf_planner_path->start_east_m = mavlink_msg_leaf_planner_path_get_start_east_m(msg);
    leaf_planner_path->start_north_m = mavlink_msg_leaf_planner_path_get_start_north_m(msg);
    leaf_planner_path->start_heading_rad = mavlink_msg_leaf_planner_path_get_start_heading_rad(msg);
    mavlink_msg_leaf_planner_path_get_length_m(msg, leaf_planner_path->length_m);
    mavlink_msg_leaf_planner_path_get_curvature_inv_m(msg, leaf_planner_path->curvature_inv_m);
    mavlink_msg_leaf_planner_path_get_markers_en_m(msg, leaf_planner_path->markers_en_m);
    leaf_planner_path->terminal_start_m = mavlink_msg_leaf_planner_path_get_terminal_start_m(msg);
    leaf_planner_path->capture_heading_rad = mavlink_msg_leaf_planner_path_get_capture_heading_rad(msg);
    leaf_planner_path->capture_radius_m = mavlink_msg_leaf_planner_path_get_capture_radius_m(msg);
    leaf_planner_path->capture_heading_deg = mavlink_msg_leaf_planner_path_get_capture_heading_deg(msg);
    leaf_planner_path->kind = mavlink_msg_leaf_planner_path_get_kind(msg);
    leaf_planner_path->count = mavlink_msg_leaf_planner_path_get_count(msg);
    leaf_planner_path->marker_flags = mavlink_msg_leaf_planner_path_get_marker_flags(msg);
    leaf_planner_path->family = mavlink_msg_leaf_planner_path_get_family(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_LEAF_PLANNER_PATH_LEN? msg->len : MAVLINK_MSG_ID_LEAF_PLANNER_PATH_LEN;
        memset(leaf_planner_path, 0, MAVLINK_MSG_ID_LEAF_PLANNER_PATH_LEN);
    memcpy(leaf_planner_path, _MAV_PAYLOAD(msg), len);
#endif
}
