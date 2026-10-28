#pragma once
// MESSAGE LEAF_RACER_GPS_GUIDANCE PACKING

#define MAVLINK_MSG_ID_LEAF_RACER_GPS_GUIDANCE 77062


typedef struct __mavlink_leaf_racer_gps_guidance_t {
 int32_t target_index; /*<  Mission index of the target waypoint (to)*/
 int32_t mission_size; /*<  Number of mission waypoints; target_index >= mission_size is the end-of-mission loop*/
 int32_t from_lat_1e7; /*<  Segment start latitude, degrees * 1e7*/
 int32_t from_lon_1e7; /*<  Segment start longitude, degrees * 1e7*/
 float from_alt_m; /*< [m] Segment start altitude*/
 int32_t to_lat_1e7; /*<  Target waypoint latitude, degrees * 1e7*/
 int32_t to_lon_1e7; /*<  Target waypoint longitude, degrees * 1e7*/
 float to_alt_m; /*< [m] Target waypoint altitude*/
 int32_t l1_aim_lat_1e7; /*<  L1 aim point latitude, degrees * 1e7 (valid only with l1_aim_valid)*/
 int32_t l1_aim_lon_1e7; /*<  L1 aim point longitude, degrees * 1e7 (valid only with l1_aim_valid)*/
 float l1_distance_m; /*< [m] L1 lookahead distance; also the radius within which the next waypoint is requested*/
 float cross_track_error_m; /*< [m] Signed distance from the from -> to line, positive to the left of the track*/
 float alt_error_m; /*< [m] Target altitude minus current altitude*/
 float track_heading_rad; /*< [rad] Track direction, counter-clockwise from East*/
 float l1_eta_rad; /*< [rad] L1 angle velocity -> aim point, before its +/-90 deg clamp*/
 uint8_t l1_aim_valid; /*<  1 = GPS guidance active with an L1 aim point this tick*/
 uint8_t saturation_flags; /*<  Command saturations active this tick*/
} mavlink_leaf_racer_gps_guidance_t;

#define MAVLINK_MSG_ID_LEAF_RACER_GPS_GUIDANCE_LEN 62
#define MAVLINK_MSG_ID_LEAF_RACER_GPS_GUIDANCE_MIN_LEN 62
#define MAVLINK_MSG_ID_77062_LEN 62
#define MAVLINK_MSG_ID_77062_MIN_LEN 62

#define MAVLINK_MSG_ID_LEAF_RACER_GPS_GUIDANCE_CRC 76
#define MAVLINK_MSG_ID_77062_CRC 76



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_LEAF_RACER_GPS_GUIDANCE { \
    77062, \
    "LEAF_RACER_GPS_GUIDANCE", \
    17, \
    {  { "target_index", NULL, MAVLINK_TYPE_INT32_T, 0, 0, offsetof(mavlink_leaf_racer_gps_guidance_t, target_index) }, \
         { "mission_size", NULL, MAVLINK_TYPE_INT32_T, 0, 4, offsetof(mavlink_leaf_racer_gps_guidance_t, mission_size) }, \
         { "from_lat_1e7", NULL, MAVLINK_TYPE_INT32_T, 0, 8, offsetof(mavlink_leaf_racer_gps_guidance_t, from_lat_1e7) }, \
         { "from_lon_1e7", NULL, MAVLINK_TYPE_INT32_T, 0, 12, offsetof(mavlink_leaf_racer_gps_guidance_t, from_lon_1e7) }, \
         { "from_alt_m", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_leaf_racer_gps_guidance_t, from_alt_m) }, \
         { "to_lat_1e7", NULL, MAVLINK_TYPE_INT32_T, 0, 20, offsetof(mavlink_leaf_racer_gps_guidance_t, to_lat_1e7) }, \
         { "to_lon_1e7", NULL, MAVLINK_TYPE_INT32_T, 0, 24, offsetof(mavlink_leaf_racer_gps_guidance_t, to_lon_1e7) }, \
         { "to_alt_m", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_leaf_racer_gps_guidance_t, to_alt_m) }, \
         { "l1_aim_lat_1e7", NULL, MAVLINK_TYPE_INT32_T, 0, 32, offsetof(mavlink_leaf_racer_gps_guidance_t, l1_aim_lat_1e7) }, \
         { "l1_aim_lon_1e7", NULL, MAVLINK_TYPE_INT32_T, 0, 36, offsetof(mavlink_leaf_racer_gps_guidance_t, l1_aim_lon_1e7) }, \
         { "l1_aim_valid", NULL, MAVLINK_TYPE_UINT8_T, 0, 60, offsetof(mavlink_leaf_racer_gps_guidance_t, l1_aim_valid) }, \
         { "l1_distance_m", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_leaf_racer_gps_guidance_t, l1_distance_m) }, \
         { "cross_track_error_m", NULL, MAVLINK_TYPE_FLOAT, 0, 44, offsetof(mavlink_leaf_racer_gps_guidance_t, cross_track_error_m) }, \
         { "alt_error_m", NULL, MAVLINK_TYPE_FLOAT, 0, 48, offsetof(mavlink_leaf_racer_gps_guidance_t, alt_error_m) }, \
         { "track_heading_rad", NULL, MAVLINK_TYPE_FLOAT, 0, 52, offsetof(mavlink_leaf_racer_gps_guidance_t, track_heading_rad) }, \
         { "l1_eta_rad", NULL, MAVLINK_TYPE_FLOAT, 0, 56, offsetof(mavlink_leaf_racer_gps_guidance_t, l1_eta_rad) }, \
         { "saturation_flags", NULL, MAVLINK_TYPE_UINT8_T, 0, 61, offsetof(mavlink_leaf_racer_gps_guidance_t, saturation_flags) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_LEAF_RACER_GPS_GUIDANCE { \
    "LEAF_RACER_GPS_GUIDANCE", \
    17, \
    {  { "target_index", NULL, MAVLINK_TYPE_INT32_T, 0, 0, offsetof(mavlink_leaf_racer_gps_guidance_t, target_index) }, \
         { "mission_size", NULL, MAVLINK_TYPE_INT32_T, 0, 4, offsetof(mavlink_leaf_racer_gps_guidance_t, mission_size) }, \
         { "from_lat_1e7", NULL, MAVLINK_TYPE_INT32_T, 0, 8, offsetof(mavlink_leaf_racer_gps_guidance_t, from_lat_1e7) }, \
         { "from_lon_1e7", NULL, MAVLINK_TYPE_INT32_T, 0, 12, offsetof(mavlink_leaf_racer_gps_guidance_t, from_lon_1e7) }, \
         { "from_alt_m", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_leaf_racer_gps_guidance_t, from_alt_m) }, \
         { "to_lat_1e7", NULL, MAVLINK_TYPE_INT32_T, 0, 20, offsetof(mavlink_leaf_racer_gps_guidance_t, to_lat_1e7) }, \
         { "to_lon_1e7", NULL, MAVLINK_TYPE_INT32_T, 0, 24, offsetof(mavlink_leaf_racer_gps_guidance_t, to_lon_1e7) }, \
         { "to_alt_m", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_leaf_racer_gps_guidance_t, to_alt_m) }, \
         { "l1_aim_lat_1e7", NULL, MAVLINK_TYPE_INT32_T, 0, 32, offsetof(mavlink_leaf_racer_gps_guidance_t, l1_aim_lat_1e7) }, \
         { "l1_aim_lon_1e7", NULL, MAVLINK_TYPE_INT32_T, 0, 36, offsetof(mavlink_leaf_racer_gps_guidance_t, l1_aim_lon_1e7) }, \
         { "l1_aim_valid", NULL, MAVLINK_TYPE_UINT8_T, 0, 60, offsetof(mavlink_leaf_racer_gps_guidance_t, l1_aim_valid) }, \
         { "l1_distance_m", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_leaf_racer_gps_guidance_t, l1_distance_m) }, \
         { "cross_track_error_m", NULL, MAVLINK_TYPE_FLOAT, 0, 44, offsetof(mavlink_leaf_racer_gps_guidance_t, cross_track_error_m) }, \
         { "alt_error_m", NULL, MAVLINK_TYPE_FLOAT, 0, 48, offsetof(mavlink_leaf_racer_gps_guidance_t, alt_error_m) }, \
         { "track_heading_rad", NULL, MAVLINK_TYPE_FLOAT, 0, 52, offsetof(mavlink_leaf_racer_gps_guidance_t, track_heading_rad) }, \
         { "l1_eta_rad", NULL, MAVLINK_TYPE_FLOAT, 0, 56, offsetof(mavlink_leaf_racer_gps_guidance_t, l1_eta_rad) }, \
         { "saturation_flags", NULL, MAVLINK_TYPE_UINT8_T, 0, 61, offsetof(mavlink_leaf_racer_gps_guidance_t, saturation_flags) }, \
         } \
}
#endif

/**
 * @brief Pack a leaf_racer_gps_guidance message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_index  Mission index of the target waypoint (to)
 * @param mission_size  Number of mission waypoints; target_index >= mission_size is the end-of-mission loop
 * @param from_lat_1e7  Segment start latitude, degrees * 1e7
 * @param from_lon_1e7  Segment start longitude, degrees * 1e7
 * @param from_alt_m [m] Segment start altitude
 * @param to_lat_1e7  Target waypoint latitude, degrees * 1e7
 * @param to_lon_1e7  Target waypoint longitude, degrees * 1e7
 * @param to_alt_m [m] Target waypoint altitude
 * @param l1_aim_lat_1e7  L1 aim point latitude, degrees * 1e7 (valid only with l1_aim_valid)
 * @param l1_aim_lon_1e7  L1 aim point longitude, degrees * 1e7 (valid only with l1_aim_valid)
 * @param l1_aim_valid  1 = GPS guidance active with an L1 aim point this tick
 * @param l1_distance_m [m] L1 lookahead distance; also the radius within which the next waypoint is requested
 * @param cross_track_error_m [m] Signed distance from the from -> to line, positive to the left of the track
 * @param alt_error_m [m] Target altitude minus current altitude
 * @param track_heading_rad [rad] Track direction, counter-clockwise from East
 * @param l1_eta_rad [rad] L1 angle velocity -> aim point, before its +/-90 deg clamp
 * @param saturation_flags  Command saturations active this tick
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_racer_gps_guidance_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               int32_t target_index, int32_t mission_size, int32_t from_lat_1e7, int32_t from_lon_1e7, float from_alt_m, int32_t to_lat_1e7, int32_t to_lon_1e7, float to_alt_m, int32_t l1_aim_lat_1e7, int32_t l1_aim_lon_1e7, uint8_t l1_aim_valid, float l1_distance_m, float cross_track_error_m, float alt_error_m, float track_heading_rad, float l1_eta_rad, uint8_t saturation_flags)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_RACER_GPS_GUIDANCE_LEN];
    _mav_put_int32_t(buf, 0, target_index);
    _mav_put_int32_t(buf, 4, mission_size);
    _mav_put_int32_t(buf, 8, from_lat_1e7);
    _mav_put_int32_t(buf, 12, from_lon_1e7);
    _mav_put_float(buf, 16, from_alt_m);
    _mav_put_int32_t(buf, 20, to_lat_1e7);
    _mav_put_int32_t(buf, 24, to_lon_1e7);
    _mav_put_float(buf, 28, to_alt_m);
    _mav_put_int32_t(buf, 32, l1_aim_lat_1e7);
    _mav_put_int32_t(buf, 36, l1_aim_lon_1e7);
    _mav_put_float(buf, 40, l1_distance_m);
    _mav_put_float(buf, 44, cross_track_error_m);
    _mav_put_float(buf, 48, alt_error_m);
    _mav_put_float(buf, 52, track_heading_rad);
    _mav_put_float(buf, 56, l1_eta_rad);
    _mav_put_uint8_t(buf, 60, l1_aim_valid);
    _mav_put_uint8_t(buf, 61, saturation_flags);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_RACER_GPS_GUIDANCE_LEN);
#else
    mavlink_leaf_racer_gps_guidance_t packet;
    packet.target_index = target_index;
    packet.mission_size = mission_size;
    packet.from_lat_1e7 = from_lat_1e7;
    packet.from_lon_1e7 = from_lon_1e7;
    packet.from_alt_m = from_alt_m;
    packet.to_lat_1e7 = to_lat_1e7;
    packet.to_lon_1e7 = to_lon_1e7;
    packet.to_alt_m = to_alt_m;
    packet.l1_aim_lat_1e7 = l1_aim_lat_1e7;
    packet.l1_aim_lon_1e7 = l1_aim_lon_1e7;
    packet.l1_distance_m = l1_distance_m;
    packet.cross_track_error_m = cross_track_error_m;
    packet.alt_error_m = alt_error_m;
    packet.track_heading_rad = track_heading_rad;
    packet.l1_eta_rad = l1_eta_rad;
    packet.l1_aim_valid = l1_aim_valid;
    packet.saturation_flags = saturation_flags;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_RACER_GPS_GUIDANCE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_RACER_GPS_GUIDANCE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_LEAF_RACER_GPS_GUIDANCE_MIN_LEN, MAVLINK_MSG_ID_LEAF_RACER_GPS_GUIDANCE_LEN, MAVLINK_MSG_ID_LEAF_RACER_GPS_GUIDANCE_CRC);
}

/**
 * @brief Pack a leaf_racer_gps_guidance message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_index  Mission index of the target waypoint (to)
 * @param mission_size  Number of mission waypoints; target_index >= mission_size is the end-of-mission loop
 * @param from_lat_1e7  Segment start latitude, degrees * 1e7
 * @param from_lon_1e7  Segment start longitude, degrees * 1e7
 * @param from_alt_m [m] Segment start altitude
 * @param to_lat_1e7  Target waypoint latitude, degrees * 1e7
 * @param to_lon_1e7  Target waypoint longitude, degrees * 1e7
 * @param to_alt_m [m] Target waypoint altitude
 * @param l1_aim_lat_1e7  L1 aim point latitude, degrees * 1e7 (valid only with l1_aim_valid)
 * @param l1_aim_lon_1e7  L1 aim point longitude, degrees * 1e7 (valid only with l1_aim_valid)
 * @param l1_aim_valid  1 = GPS guidance active with an L1 aim point this tick
 * @param l1_distance_m [m] L1 lookahead distance; also the radius within which the next waypoint is requested
 * @param cross_track_error_m [m] Signed distance from the from -> to line, positive to the left of the track
 * @param alt_error_m [m] Target altitude minus current altitude
 * @param track_heading_rad [rad] Track direction, counter-clockwise from East
 * @param l1_eta_rad [rad] L1 angle velocity -> aim point, before its +/-90 deg clamp
 * @param saturation_flags  Command saturations active this tick
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_racer_gps_guidance_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               int32_t target_index, int32_t mission_size, int32_t from_lat_1e7, int32_t from_lon_1e7, float from_alt_m, int32_t to_lat_1e7, int32_t to_lon_1e7, float to_alt_m, int32_t l1_aim_lat_1e7, int32_t l1_aim_lon_1e7, uint8_t l1_aim_valid, float l1_distance_m, float cross_track_error_m, float alt_error_m, float track_heading_rad, float l1_eta_rad, uint8_t saturation_flags)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_RACER_GPS_GUIDANCE_LEN];
    _mav_put_int32_t(buf, 0, target_index);
    _mav_put_int32_t(buf, 4, mission_size);
    _mav_put_int32_t(buf, 8, from_lat_1e7);
    _mav_put_int32_t(buf, 12, from_lon_1e7);
    _mav_put_float(buf, 16, from_alt_m);
    _mav_put_int32_t(buf, 20, to_lat_1e7);
    _mav_put_int32_t(buf, 24, to_lon_1e7);
    _mav_put_float(buf, 28, to_alt_m);
    _mav_put_int32_t(buf, 32, l1_aim_lat_1e7);
    _mav_put_int32_t(buf, 36, l1_aim_lon_1e7);
    _mav_put_float(buf, 40, l1_distance_m);
    _mav_put_float(buf, 44, cross_track_error_m);
    _mav_put_float(buf, 48, alt_error_m);
    _mav_put_float(buf, 52, track_heading_rad);
    _mav_put_float(buf, 56, l1_eta_rad);
    _mav_put_uint8_t(buf, 60, l1_aim_valid);
    _mav_put_uint8_t(buf, 61, saturation_flags);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_RACER_GPS_GUIDANCE_LEN);
#else
    mavlink_leaf_racer_gps_guidance_t packet;
    packet.target_index = target_index;
    packet.mission_size = mission_size;
    packet.from_lat_1e7 = from_lat_1e7;
    packet.from_lon_1e7 = from_lon_1e7;
    packet.from_alt_m = from_alt_m;
    packet.to_lat_1e7 = to_lat_1e7;
    packet.to_lon_1e7 = to_lon_1e7;
    packet.to_alt_m = to_alt_m;
    packet.l1_aim_lat_1e7 = l1_aim_lat_1e7;
    packet.l1_aim_lon_1e7 = l1_aim_lon_1e7;
    packet.l1_distance_m = l1_distance_m;
    packet.cross_track_error_m = cross_track_error_m;
    packet.alt_error_m = alt_error_m;
    packet.track_heading_rad = track_heading_rad;
    packet.l1_eta_rad = l1_eta_rad;
    packet.l1_aim_valid = l1_aim_valid;
    packet.saturation_flags = saturation_flags;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_RACER_GPS_GUIDANCE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_RACER_GPS_GUIDANCE;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_RACER_GPS_GUIDANCE_MIN_LEN, MAVLINK_MSG_ID_LEAF_RACER_GPS_GUIDANCE_LEN, MAVLINK_MSG_ID_LEAF_RACER_GPS_GUIDANCE_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_RACER_GPS_GUIDANCE_MIN_LEN, MAVLINK_MSG_ID_LEAF_RACER_GPS_GUIDANCE_LEN);
#endif
}

/**
 * @brief Pack a leaf_racer_gps_guidance message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param target_index  Mission index of the target waypoint (to)
 * @param mission_size  Number of mission waypoints; target_index >= mission_size is the end-of-mission loop
 * @param from_lat_1e7  Segment start latitude, degrees * 1e7
 * @param from_lon_1e7  Segment start longitude, degrees * 1e7
 * @param from_alt_m [m] Segment start altitude
 * @param to_lat_1e7  Target waypoint latitude, degrees * 1e7
 * @param to_lon_1e7  Target waypoint longitude, degrees * 1e7
 * @param to_alt_m [m] Target waypoint altitude
 * @param l1_aim_lat_1e7  L1 aim point latitude, degrees * 1e7 (valid only with l1_aim_valid)
 * @param l1_aim_lon_1e7  L1 aim point longitude, degrees * 1e7 (valid only with l1_aim_valid)
 * @param l1_aim_valid  1 = GPS guidance active with an L1 aim point this tick
 * @param l1_distance_m [m] L1 lookahead distance; also the radius within which the next waypoint is requested
 * @param cross_track_error_m [m] Signed distance from the from -> to line, positive to the left of the track
 * @param alt_error_m [m] Target altitude minus current altitude
 * @param track_heading_rad [rad] Track direction, counter-clockwise from East
 * @param l1_eta_rad [rad] L1 angle velocity -> aim point, before its +/-90 deg clamp
 * @param saturation_flags  Command saturations active this tick
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_racer_gps_guidance_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   int32_t target_index,int32_t mission_size,int32_t from_lat_1e7,int32_t from_lon_1e7,float from_alt_m,int32_t to_lat_1e7,int32_t to_lon_1e7,float to_alt_m,int32_t l1_aim_lat_1e7,int32_t l1_aim_lon_1e7,uint8_t l1_aim_valid,float l1_distance_m,float cross_track_error_m,float alt_error_m,float track_heading_rad,float l1_eta_rad,uint8_t saturation_flags)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_RACER_GPS_GUIDANCE_LEN];
    _mav_put_int32_t(buf, 0, target_index);
    _mav_put_int32_t(buf, 4, mission_size);
    _mav_put_int32_t(buf, 8, from_lat_1e7);
    _mav_put_int32_t(buf, 12, from_lon_1e7);
    _mav_put_float(buf, 16, from_alt_m);
    _mav_put_int32_t(buf, 20, to_lat_1e7);
    _mav_put_int32_t(buf, 24, to_lon_1e7);
    _mav_put_float(buf, 28, to_alt_m);
    _mav_put_int32_t(buf, 32, l1_aim_lat_1e7);
    _mav_put_int32_t(buf, 36, l1_aim_lon_1e7);
    _mav_put_float(buf, 40, l1_distance_m);
    _mav_put_float(buf, 44, cross_track_error_m);
    _mav_put_float(buf, 48, alt_error_m);
    _mav_put_float(buf, 52, track_heading_rad);
    _mav_put_float(buf, 56, l1_eta_rad);
    _mav_put_uint8_t(buf, 60, l1_aim_valid);
    _mav_put_uint8_t(buf, 61, saturation_flags);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_RACER_GPS_GUIDANCE_LEN);
#else
    mavlink_leaf_racer_gps_guidance_t packet;
    packet.target_index = target_index;
    packet.mission_size = mission_size;
    packet.from_lat_1e7 = from_lat_1e7;
    packet.from_lon_1e7 = from_lon_1e7;
    packet.from_alt_m = from_alt_m;
    packet.to_lat_1e7 = to_lat_1e7;
    packet.to_lon_1e7 = to_lon_1e7;
    packet.to_alt_m = to_alt_m;
    packet.l1_aim_lat_1e7 = l1_aim_lat_1e7;
    packet.l1_aim_lon_1e7 = l1_aim_lon_1e7;
    packet.l1_distance_m = l1_distance_m;
    packet.cross_track_error_m = cross_track_error_m;
    packet.alt_error_m = alt_error_m;
    packet.track_heading_rad = track_heading_rad;
    packet.l1_eta_rad = l1_eta_rad;
    packet.l1_aim_valid = l1_aim_valid;
    packet.saturation_flags = saturation_flags;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_RACER_GPS_GUIDANCE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_RACER_GPS_GUIDANCE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_LEAF_RACER_GPS_GUIDANCE_MIN_LEN, MAVLINK_MSG_ID_LEAF_RACER_GPS_GUIDANCE_LEN, MAVLINK_MSG_ID_LEAF_RACER_GPS_GUIDANCE_CRC);
}

/**
 * @brief Encode a leaf_racer_gps_guidance struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param leaf_racer_gps_guidance C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_racer_gps_guidance_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_leaf_racer_gps_guidance_t* leaf_racer_gps_guidance)
{
    return mavlink_msg_leaf_racer_gps_guidance_pack(system_id, component_id, msg, leaf_racer_gps_guidance->target_index, leaf_racer_gps_guidance->mission_size, leaf_racer_gps_guidance->from_lat_1e7, leaf_racer_gps_guidance->from_lon_1e7, leaf_racer_gps_guidance->from_alt_m, leaf_racer_gps_guidance->to_lat_1e7, leaf_racer_gps_guidance->to_lon_1e7, leaf_racer_gps_guidance->to_alt_m, leaf_racer_gps_guidance->l1_aim_lat_1e7, leaf_racer_gps_guidance->l1_aim_lon_1e7, leaf_racer_gps_guidance->l1_aim_valid, leaf_racer_gps_guidance->l1_distance_m, leaf_racer_gps_guidance->cross_track_error_m, leaf_racer_gps_guidance->alt_error_m, leaf_racer_gps_guidance->track_heading_rad, leaf_racer_gps_guidance->l1_eta_rad, leaf_racer_gps_guidance->saturation_flags);
}

/**
 * @brief Encode a leaf_racer_gps_guidance struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param leaf_racer_gps_guidance C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_racer_gps_guidance_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_leaf_racer_gps_guidance_t* leaf_racer_gps_guidance)
{
    return mavlink_msg_leaf_racer_gps_guidance_pack_chan(system_id, component_id, chan, msg, leaf_racer_gps_guidance->target_index, leaf_racer_gps_guidance->mission_size, leaf_racer_gps_guidance->from_lat_1e7, leaf_racer_gps_guidance->from_lon_1e7, leaf_racer_gps_guidance->from_alt_m, leaf_racer_gps_guidance->to_lat_1e7, leaf_racer_gps_guidance->to_lon_1e7, leaf_racer_gps_guidance->to_alt_m, leaf_racer_gps_guidance->l1_aim_lat_1e7, leaf_racer_gps_guidance->l1_aim_lon_1e7, leaf_racer_gps_guidance->l1_aim_valid, leaf_racer_gps_guidance->l1_distance_m, leaf_racer_gps_guidance->cross_track_error_m, leaf_racer_gps_guidance->alt_error_m, leaf_racer_gps_guidance->track_heading_rad, leaf_racer_gps_guidance->l1_eta_rad, leaf_racer_gps_guidance->saturation_flags);
}

/**
 * @brief Encode a leaf_racer_gps_guidance struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param leaf_racer_gps_guidance C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_racer_gps_guidance_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_leaf_racer_gps_guidance_t* leaf_racer_gps_guidance)
{
    return mavlink_msg_leaf_racer_gps_guidance_pack_status(system_id, component_id, _status, msg,  leaf_racer_gps_guidance->target_index, leaf_racer_gps_guidance->mission_size, leaf_racer_gps_guidance->from_lat_1e7, leaf_racer_gps_guidance->from_lon_1e7, leaf_racer_gps_guidance->from_alt_m, leaf_racer_gps_guidance->to_lat_1e7, leaf_racer_gps_guidance->to_lon_1e7, leaf_racer_gps_guidance->to_alt_m, leaf_racer_gps_guidance->l1_aim_lat_1e7, leaf_racer_gps_guidance->l1_aim_lon_1e7, leaf_racer_gps_guidance->l1_aim_valid, leaf_racer_gps_guidance->l1_distance_m, leaf_racer_gps_guidance->cross_track_error_m, leaf_racer_gps_guidance->alt_error_m, leaf_racer_gps_guidance->track_heading_rad, leaf_racer_gps_guidance->l1_eta_rad, leaf_racer_gps_guidance->saturation_flags);
}

/**
 * @brief Send a leaf_racer_gps_guidance message
 * @param chan MAVLink channel to send the message
 *
 * @param target_index  Mission index of the target waypoint (to)
 * @param mission_size  Number of mission waypoints; target_index >= mission_size is the end-of-mission loop
 * @param from_lat_1e7  Segment start latitude, degrees * 1e7
 * @param from_lon_1e7  Segment start longitude, degrees * 1e7
 * @param from_alt_m [m] Segment start altitude
 * @param to_lat_1e7  Target waypoint latitude, degrees * 1e7
 * @param to_lon_1e7  Target waypoint longitude, degrees * 1e7
 * @param to_alt_m [m] Target waypoint altitude
 * @param l1_aim_lat_1e7  L1 aim point latitude, degrees * 1e7 (valid only with l1_aim_valid)
 * @param l1_aim_lon_1e7  L1 aim point longitude, degrees * 1e7 (valid only with l1_aim_valid)
 * @param l1_aim_valid  1 = GPS guidance active with an L1 aim point this tick
 * @param l1_distance_m [m] L1 lookahead distance; also the radius within which the next waypoint is requested
 * @param cross_track_error_m [m] Signed distance from the from -> to line, positive to the left of the track
 * @param alt_error_m [m] Target altitude minus current altitude
 * @param track_heading_rad [rad] Track direction, counter-clockwise from East
 * @param l1_eta_rad [rad] L1 angle velocity -> aim point, before its +/-90 deg clamp
 * @param saturation_flags  Command saturations active this tick
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_leaf_racer_gps_guidance_send(mavlink_channel_t chan, int32_t target_index, int32_t mission_size, int32_t from_lat_1e7, int32_t from_lon_1e7, float from_alt_m, int32_t to_lat_1e7, int32_t to_lon_1e7, float to_alt_m, int32_t l1_aim_lat_1e7, int32_t l1_aim_lon_1e7, uint8_t l1_aim_valid, float l1_distance_m, float cross_track_error_m, float alt_error_m, float track_heading_rad, float l1_eta_rad, uint8_t saturation_flags)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_RACER_GPS_GUIDANCE_LEN];
    _mav_put_int32_t(buf, 0, target_index);
    _mav_put_int32_t(buf, 4, mission_size);
    _mav_put_int32_t(buf, 8, from_lat_1e7);
    _mav_put_int32_t(buf, 12, from_lon_1e7);
    _mav_put_float(buf, 16, from_alt_m);
    _mav_put_int32_t(buf, 20, to_lat_1e7);
    _mav_put_int32_t(buf, 24, to_lon_1e7);
    _mav_put_float(buf, 28, to_alt_m);
    _mav_put_int32_t(buf, 32, l1_aim_lat_1e7);
    _mav_put_int32_t(buf, 36, l1_aim_lon_1e7);
    _mav_put_float(buf, 40, l1_distance_m);
    _mav_put_float(buf, 44, cross_track_error_m);
    _mav_put_float(buf, 48, alt_error_m);
    _mav_put_float(buf, 52, track_heading_rad);
    _mav_put_float(buf, 56, l1_eta_rad);
    _mav_put_uint8_t(buf, 60, l1_aim_valid);
    _mav_put_uint8_t(buf, 61, saturation_flags);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_RACER_GPS_GUIDANCE, buf, MAVLINK_MSG_ID_LEAF_RACER_GPS_GUIDANCE_MIN_LEN, MAVLINK_MSG_ID_LEAF_RACER_GPS_GUIDANCE_LEN, MAVLINK_MSG_ID_LEAF_RACER_GPS_GUIDANCE_CRC);
#else
    mavlink_leaf_racer_gps_guidance_t packet;
    packet.target_index = target_index;
    packet.mission_size = mission_size;
    packet.from_lat_1e7 = from_lat_1e7;
    packet.from_lon_1e7 = from_lon_1e7;
    packet.from_alt_m = from_alt_m;
    packet.to_lat_1e7 = to_lat_1e7;
    packet.to_lon_1e7 = to_lon_1e7;
    packet.to_alt_m = to_alt_m;
    packet.l1_aim_lat_1e7 = l1_aim_lat_1e7;
    packet.l1_aim_lon_1e7 = l1_aim_lon_1e7;
    packet.l1_distance_m = l1_distance_m;
    packet.cross_track_error_m = cross_track_error_m;
    packet.alt_error_m = alt_error_m;
    packet.track_heading_rad = track_heading_rad;
    packet.l1_eta_rad = l1_eta_rad;
    packet.l1_aim_valid = l1_aim_valid;
    packet.saturation_flags = saturation_flags;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_RACER_GPS_GUIDANCE, (const char *)&packet, MAVLINK_MSG_ID_LEAF_RACER_GPS_GUIDANCE_MIN_LEN, MAVLINK_MSG_ID_LEAF_RACER_GPS_GUIDANCE_LEN, MAVLINK_MSG_ID_LEAF_RACER_GPS_GUIDANCE_CRC);
#endif
}

/**
 * @brief Send a leaf_racer_gps_guidance message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_leaf_racer_gps_guidance_send_struct(mavlink_channel_t chan, const mavlink_leaf_racer_gps_guidance_t* leaf_racer_gps_guidance)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_leaf_racer_gps_guidance_send(chan, leaf_racer_gps_guidance->target_index, leaf_racer_gps_guidance->mission_size, leaf_racer_gps_guidance->from_lat_1e7, leaf_racer_gps_guidance->from_lon_1e7, leaf_racer_gps_guidance->from_alt_m, leaf_racer_gps_guidance->to_lat_1e7, leaf_racer_gps_guidance->to_lon_1e7, leaf_racer_gps_guidance->to_alt_m, leaf_racer_gps_guidance->l1_aim_lat_1e7, leaf_racer_gps_guidance->l1_aim_lon_1e7, leaf_racer_gps_guidance->l1_aim_valid, leaf_racer_gps_guidance->l1_distance_m, leaf_racer_gps_guidance->cross_track_error_m, leaf_racer_gps_guidance->alt_error_m, leaf_racer_gps_guidance->track_heading_rad, leaf_racer_gps_guidance->l1_eta_rad, leaf_racer_gps_guidance->saturation_flags);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_RACER_GPS_GUIDANCE, (const char *)leaf_racer_gps_guidance, MAVLINK_MSG_ID_LEAF_RACER_GPS_GUIDANCE_MIN_LEN, MAVLINK_MSG_ID_LEAF_RACER_GPS_GUIDANCE_LEN, MAVLINK_MSG_ID_LEAF_RACER_GPS_GUIDANCE_CRC);
#endif
}

#if MAVLINK_MSG_ID_LEAF_RACER_GPS_GUIDANCE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_leaf_racer_gps_guidance_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  int32_t target_index, int32_t mission_size, int32_t from_lat_1e7, int32_t from_lon_1e7, float from_alt_m, int32_t to_lat_1e7, int32_t to_lon_1e7, float to_alt_m, int32_t l1_aim_lat_1e7, int32_t l1_aim_lon_1e7, uint8_t l1_aim_valid, float l1_distance_m, float cross_track_error_m, float alt_error_m, float track_heading_rad, float l1_eta_rad, uint8_t saturation_flags)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_int32_t(buf, 0, target_index);
    _mav_put_int32_t(buf, 4, mission_size);
    _mav_put_int32_t(buf, 8, from_lat_1e7);
    _mav_put_int32_t(buf, 12, from_lon_1e7);
    _mav_put_float(buf, 16, from_alt_m);
    _mav_put_int32_t(buf, 20, to_lat_1e7);
    _mav_put_int32_t(buf, 24, to_lon_1e7);
    _mav_put_float(buf, 28, to_alt_m);
    _mav_put_int32_t(buf, 32, l1_aim_lat_1e7);
    _mav_put_int32_t(buf, 36, l1_aim_lon_1e7);
    _mav_put_float(buf, 40, l1_distance_m);
    _mav_put_float(buf, 44, cross_track_error_m);
    _mav_put_float(buf, 48, alt_error_m);
    _mav_put_float(buf, 52, track_heading_rad);
    _mav_put_float(buf, 56, l1_eta_rad);
    _mav_put_uint8_t(buf, 60, l1_aim_valid);
    _mav_put_uint8_t(buf, 61, saturation_flags);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_RACER_GPS_GUIDANCE, buf, MAVLINK_MSG_ID_LEAF_RACER_GPS_GUIDANCE_MIN_LEN, MAVLINK_MSG_ID_LEAF_RACER_GPS_GUIDANCE_LEN, MAVLINK_MSG_ID_LEAF_RACER_GPS_GUIDANCE_CRC);
#else
    mavlink_leaf_racer_gps_guidance_t *packet = (mavlink_leaf_racer_gps_guidance_t *)msgbuf;
    packet->target_index = target_index;
    packet->mission_size = mission_size;
    packet->from_lat_1e7 = from_lat_1e7;
    packet->from_lon_1e7 = from_lon_1e7;
    packet->from_alt_m = from_alt_m;
    packet->to_lat_1e7 = to_lat_1e7;
    packet->to_lon_1e7 = to_lon_1e7;
    packet->to_alt_m = to_alt_m;
    packet->l1_aim_lat_1e7 = l1_aim_lat_1e7;
    packet->l1_aim_lon_1e7 = l1_aim_lon_1e7;
    packet->l1_distance_m = l1_distance_m;
    packet->cross_track_error_m = cross_track_error_m;
    packet->alt_error_m = alt_error_m;
    packet->track_heading_rad = track_heading_rad;
    packet->l1_eta_rad = l1_eta_rad;
    packet->l1_aim_valid = l1_aim_valid;
    packet->saturation_flags = saturation_flags;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_RACER_GPS_GUIDANCE, (const char *)packet, MAVLINK_MSG_ID_LEAF_RACER_GPS_GUIDANCE_MIN_LEN, MAVLINK_MSG_ID_LEAF_RACER_GPS_GUIDANCE_LEN, MAVLINK_MSG_ID_LEAF_RACER_GPS_GUIDANCE_CRC);
#endif
}
#endif

#endif

// MESSAGE LEAF_RACER_GPS_GUIDANCE UNPACKING


/**
 * @brief Get field target_index from leaf_racer_gps_guidance message
 *
 * @return  Mission index of the target waypoint (to)
 */
static inline int32_t mavlink_msg_leaf_racer_gps_guidance_get_target_index(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  0);
}

/**
 * @brief Get field mission_size from leaf_racer_gps_guidance message
 *
 * @return  Number of mission waypoints; target_index >= mission_size is the end-of-mission loop
 */
static inline int32_t mavlink_msg_leaf_racer_gps_guidance_get_mission_size(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  4);
}

/**
 * @brief Get field from_lat_1e7 from leaf_racer_gps_guidance message
 *
 * @return  Segment start latitude, degrees * 1e7
 */
static inline int32_t mavlink_msg_leaf_racer_gps_guidance_get_from_lat_1e7(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  8);
}

/**
 * @brief Get field from_lon_1e7 from leaf_racer_gps_guidance message
 *
 * @return  Segment start longitude, degrees * 1e7
 */
static inline int32_t mavlink_msg_leaf_racer_gps_guidance_get_from_lon_1e7(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  12);
}

/**
 * @brief Get field from_alt_m from leaf_racer_gps_guidance message
 *
 * @return [m] Segment start altitude
 */
static inline float mavlink_msg_leaf_racer_gps_guidance_get_from_alt_m(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field to_lat_1e7 from leaf_racer_gps_guidance message
 *
 * @return  Target waypoint latitude, degrees * 1e7
 */
static inline int32_t mavlink_msg_leaf_racer_gps_guidance_get_to_lat_1e7(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  20);
}

/**
 * @brief Get field to_lon_1e7 from leaf_racer_gps_guidance message
 *
 * @return  Target waypoint longitude, degrees * 1e7
 */
static inline int32_t mavlink_msg_leaf_racer_gps_guidance_get_to_lon_1e7(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  24);
}

/**
 * @brief Get field to_alt_m from leaf_racer_gps_guidance message
 *
 * @return [m] Target waypoint altitude
 */
static inline float mavlink_msg_leaf_racer_gps_guidance_get_to_alt_m(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Get field l1_aim_lat_1e7 from leaf_racer_gps_guidance message
 *
 * @return  L1 aim point latitude, degrees * 1e7 (valid only with l1_aim_valid)
 */
static inline int32_t mavlink_msg_leaf_racer_gps_guidance_get_l1_aim_lat_1e7(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  32);
}

/**
 * @brief Get field l1_aim_lon_1e7 from leaf_racer_gps_guidance message
 *
 * @return  L1 aim point longitude, degrees * 1e7 (valid only with l1_aim_valid)
 */
static inline int32_t mavlink_msg_leaf_racer_gps_guidance_get_l1_aim_lon_1e7(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  36);
}

/**
 * @brief Get field l1_aim_valid from leaf_racer_gps_guidance message
 *
 * @return  1 = GPS guidance active with an L1 aim point this tick
 */
static inline uint8_t mavlink_msg_leaf_racer_gps_guidance_get_l1_aim_valid(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  60);
}

/**
 * @brief Get field l1_distance_m from leaf_racer_gps_guidance message
 *
 * @return [m] L1 lookahead distance; also the radius within which the next waypoint is requested
 */
static inline float mavlink_msg_leaf_racer_gps_guidance_get_l1_distance_m(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  40);
}

/**
 * @brief Get field cross_track_error_m from leaf_racer_gps_guidance message
 *
 * @return [m] Signed distance from the from -> to line, positive to the left of the track
 */
static inline float mavlink_msg_leaf_racer_gps_guidance_get_cross_track_error_m(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  44);
}

/**
 * @brief Get field alt_error_m from leaf_racer_gps_guidance message
 *
 * @return [m] Target altitude minus current altitude
 */
static inline float mavlink_msg_leaf_racer_gps_guidance_get_alt_error_m(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  48);
}

/**
 * @brief Get field track_heading_rad from leaf_racer_gps_guidance message
 *
 * @return [rad] Track direction, counter-clockwise from East
 */
static inline float mavlink_msg_leaf_racer_gps_guidance_get_track_heading_rad(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  52);
}

/**
 * @brief Get field l1_eta_rad from leaf_racer_gps_guidance message
 *
 * @return [rad] L1 angle velocity -> aim point, before its +/-90 deg clamp
 */
static inline float mavlink_msg_leaf_racer_gps_guidance_get_l1_eta_rad(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  56);
}

/**
 * @brief Get field saturation_flags from leaf_racer_gps_guidance message
 *
 * @return  Command saturations active this tick
 */
static inline uint8_t mavlink_msg_leaf_racer_gps_guidance_get_saturation_flags(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  61);
}

/**
 * @brief Decode a leaf_racer_gps_guidance message into a struct
 *
 * @param msg The message to decode
 * @param leaf_racer_gps_guidance C-struct to decode the message contents into
 */
static inline void mavlink_msg_leaf_racer_gps_guidance_decode(const mavlink_message_t* msg, mavlink_leaf_racer_gps_guidance_t* leaf_racer_gps_guidance)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    leaf_racer_gps_guidance->target_index = mavlink_msg_leaf_racer_gps_guidance_get_target_index(msg);
    leaf_racer_gps_guidance->mission_size = mavlink_msg_leaf_racer_gps_guidance_get_mission_size(msg);
    leaf_racer_gps_guidance->from_lat_1e7 = mavlink_msg_leaf_racer_gps_guidance_get_from_lat_1e7(msg);
    leaf_racer_gps_guidance->from_lon_1e7 = mavlink_msg_leaf_racer_gps_guidance_get_from_lon_1e7(msg);
    leaf_racer_gps_guidance->from_alt_m = mavlink_msg_leaf_racer_gps_guidance_get_from_alt_m(msg);
    leaf_racer_gps_guidance->to_lat_1e7 = mavlink_msg_leaf_racer_gps_guidance_get_to_lat_1e7(msg);
    leaf_racer_gps_guidance->to_lon_1e7 = mavlink_msg_leaf_racer_gps_guidance_get_to_lon_1e7(msg);
    leaf_racer_gps_guidance->to_alt_m = mavlink_msg_leaf_racer_gps_guidance_get_to_alt_m(msg);
    leaf_racer_gps_guidance->l1_aim_lat_1e7 = mavlink_msg_leaf_racer_gps_guidance_get_l1_aim_lat_1e7(msg);
    leaf_racer_gps_guidance->l1_aim_lon_1e7 = mavlink_msg_leaf_racer_gps_guidance_get_l1_aim_lon_1e7(msg);
    leaf_racer_gps_guidance->l1_distance_m = mavlink_msg_leaf_racer_gps_guidance_get_l1_distance_m(msg);
    leaf_racer_gps_guidance->cross_track_error_m = mavlink_msg_leaf_racer_gps_guidance_get_cross_track_error_m(msg);
    leaf_racer_gps_guidance->alt_error_m = mavlink_msg_leaf_racer_gps_guidance_get_alt_error_m(msg);
    leaf_racer_gps_guidance->track_heading_rad = mavlink_msg_leaf_racer_gps_guidance_get_track_heading_rad(msg);
    leaf_racer_gps_guidance->l1_eta_rad = mavlink_msg_leaf_racer_gps_guidance_get_l1_eta_rad(msg);
    leaf_racer_gps_guidance->l1_aim_valid = mavlink_msg_leaf_racer_gps_guidance_get_l1_aim_valid(msg);
    leaf_racer_gps_guidance->saturation_flags = mavlink_msg_leaf_racer_gps_guidance_get_saturation_flags(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_LEAF_RACER_GPS_GUIDANCE_LEN? msg->len : MAVLINK_MSG_ID_LEAF_RACER_GPS_GUIDANCE_LEN;
        memset(leaf_racer_gps_guidance, 0, MAVLINK_MSG_ID_LEAF_RACER_GPS_GUIDANCE_LEN);
    memcpy(leaf_racer_gps_guidance, _MAV_PAYLOAD(msg), len);
#endif
}
