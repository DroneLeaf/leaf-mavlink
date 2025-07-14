#pragma once
// MESSAGE VEHICLE_LOCAL_POSITION PACKING

#define MAVLINK_MSG_ID_VEHICLE_LOCAL_POSITION 204


typedef struct __mavlink_vehicle_local_position_t {
 float x; /*< [m] North position in NED earth-fixed frame*/
 float y; /*< [m] East position in NED earth-fixed frame*/
 float z; /*< [m] Down position (negative altitude) in NED earth-fixed frame*/
 float delta_xy[2]; /*<  xy position reset delta*/
 float delta_z; /*<  z position reset delta*/
 float vx; /*< [m/s] North velocity in NED earth-fixed frame*/
 float vy; /*< [m/s] East velocity in NED earth-fixed frame*/
 float vz; /*< [m/s] Down velocity in NED earth-fixed frame*/
 float z_deriv; /*< [m/s] Down position time derivative in NED earth-fixed frame*/
 float delta_vxy[2]; /*<  xy velocity reset delta*/
 float delta_vz; /*<  z velocity reset delta*/
 float ax; /*< [m/s/s] North velocity derivative in NED earth-fixed frame.*/
 float ay; /*< [m/s/s] East velocity derivative in NED earth-fixed frame.*/
 float az; /*< [m/s/s] Down velocity derivative in NED earth-fixed frame.*/
 float ref_lat; /*< [deg] Reference point latitude*/
 float ref_lon; /*< [deg] Reference point longitude*/
 float ref_alt; /*< [m] Reference altitude AMSL*/
 float dist_bottom; /*< [m] Distance from from bottom surface to ground*/
 float eph; /*< [m] Standard deviation of horizontal position error*/
 float epv; /*< [m] Standard deviation of vertical position error*/
 float evh; /*< [m/s] Standard deviation of horizontal velocity error*/
 float evv; /*< [m/s] Standard deviation of vertical velocity error*/
 float vxy_max; /*< [m/s] maximum horizontal speed*/
 float vz_max; /*< [m/s] maximum vertical speed*/
 float hagl_min; /*< [m] minimum height above ground level*/
 float hagl_max; /*< [m] maximum height above ground level*/
 uint8_t xy_valid; /*<  true if x and y are valid*/
 uint8_t z_valid; /*<  true if z is valid*/
 uint8_t v_xy_valid; /*<  true if vx and vy are valid*/
 uint8_t v_z_valid; /*<  true if vz is valid*/
 uint8_t xy_reset_counter; /*<  xy position reset counter*/
 uint8_t z_reset_counter; /*<  z position reset counter*/
 uint8_t vxy_reset_counter; /*<  xy velocity reset counter*/
 uint8_t vz_reset_counter; /*<  z velocity reset counter*/
 uint8_t xy_global; /*<  true if position (x, y) has a valid global reference (ref_lat, ref_lon)*/
 uint8_t z_global; /*<  true if z has a valid global reference (ref_alt)*/
 uint8_t dist_bottom_valid; /*<  true if distance to bottom surface is valid*/
 uint8_t dist_bottom_sensor_bitfield; /*<  bitfield indicating what type of sensor is used to estimate dist_bottom*/
 uint8_t dead_reckoning; /*<  True if this position is estimated through dead-reckoning*/
} mavlink_vehicle_local_position_t;

#define MAVLINK_MSG_ID_VEHICLE_LOCAL_POSITION_LEN 125
#define MAVLINK_MSG_ID_VEHICLE_LOCAL_POSITION_MIN_LEN 125
#define MAVLINK_MSG_ID_204_LEN 125
#define MAVLINK_MSG_ID_204_MIN_LEN 125

#define MAVLINK_MSG_ID_VEHICLE_LOCAL_POSITION_CRC 37
#define MAVLINK_MSG_ID_204_CRC 37

#define MAVLINK_MSG_VEHICLE_LOCAL_POSITION_FIELD_DELTA_XY_LEN 2
#define MAVLINK_MSG_VEHICLE_LOCAL_POSITION_FIELD_DELTA_VXY_LEN 2

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_VEHICLE_LOCAL_POSITION { \
    204, \
    "VEHICLE_LOCAL_POSITION", \
    39, \
    {  { "xy_valid", NULL, MAVLINK_TYPE_UINT8_T, 0, 112, offsetof(mavlink_vehicle_local_position_t, xy_valid) }, \
         { "z_valid", NULL, MAVLINK_TYPE_UINT8_T, 0, 113, offsetof(mavlink_vehicle_local_position_t, z_valid) }, \
         { "v_xy_valid", NULL, MAVLINK_TYPE_UINT8_T, 0, 114, offsetof(mavlink_vehicle_local_position_t, v_xy_valid) }, \
         { "v_z_valid", NULL, MAVLINK_TYPE_UINT8_T, 0, 115, offsetof(mavlink_vehicle_local_position_t, v_z_valid) }, \
         { "x", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_vehicle_local_position_t, x) }, \
         { "y", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_vehicle_local_position_t, y) }, \
         { "z", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_vehicle_local_position_t, z) }, \
         { "delta_xy", NULL, MAVLINK_TYPE_FLOAT, 2, 12, offsetof(mavlink_vehicle_local_position_t, delta_xy) }, \
         { "xy_reset_counter", NULL, MAVLINK_TYPE_UINT8_T, 0, 116, offsetof(mavlink_vehicle_local_position_t, xy_reset_counter) }, \
         { "delta_z", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_vehicle_local_position_t, delta_z) }, \
         { "z_reset_counter", NULL, MAVLINK_TYPE_UINT8_T, 0, 117, offsetof(mavlink_vehicle_local_position_t, z_reset_counter) }, \
         { "vx", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_vehicle_local_position_t, vx) }, \
         { "vy", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_vehicle_local_position_t, vy) }, \
         { "vz", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_vehicle_local_position_t, vz) }, \
         { "z_deriv", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_vehicle_local_position_t, z_deriv) }, \
         { "delta_vxy", NULL, MAVLINK_TYPE_FLOAT, 2, 40, offsetof(mavlink_vehicle_local_position_t, delta_vxy) }, \
         { "vxy_reset_counter", NULL, MAVLINK_TYPE_UINT8_T, 0, 118, offsetof(mavlink_vehicle_local_position_t, vxy_reset_counter) }, \
         { "delta_vz", NULL, MAVLINK_TYPE_FLOAT, 0, 48, offsetof(mavlink_vehicle_local_position_t, delta_vz) }, \
         { "vz_reset_counter", NULL, MAVLINK_TYPE_UINT8_T, 0, 119, offsetof(mavlink_vehicle_local_position_t, vz_reset_counter) }, \
         { "ax", NULL, MAVLINK_TYPE_FLOAT, 0, 52, offsetof(mavlink_vehicle_local_position_t, ax) }, \
         { "ay", NULL, MAVLINK_TYPE_FLOAT, 0, 56, offsetof(mavlink_vehicle_local_position_t, ay) }, \
         { "az", NULL, MAVLINK_TYPE_FLOAT, 0, 60, offsetof(mavlink_vehicle_local_position_t, az) }, \
         { "xy_global", NULL, MAVLINK_TYPE_UINT8_T, 0, 120, offsetof(mavlink_vehicle_local_position_t, xy_global) }, \
         { "z_global", NULL, MAVLINK_TYPE_UINT8_T, 0, 121, offsetof(mavlink_vehicle_local_position_t, z_global) }, \
         { "ref_lat", NULL, MAVLINK_TYPE_FLOAT, 0, 64, offsetof(mavlink_vehicle_local_position_t, ref_lat) }, \
         { "ref_lon", NULL, MAVLINK_TYPE_FLOAT, 0, 68, offsetof(mavlink_vehicle_local_position_t, ref_lon) }, \
         { "ref_alt", NULL, MAVLINK_TYPE_FLOAT, 0, 72, offsetof(mavlink_vehicle_local_position_t, ref_alt) }, \
         { "dist_bottom", NULL, MAVLINK_TYPE_FLOAT, 0, 76, offsetof(mavlink_vehicle_local_position_t, dist_bottom) }, \
         { "dist_bottom_valid", NULL, MAVLINK_TYPE_UINT8_T, 0, 122, offsetof(mavlink_vehicle_local_position_t, dist_bottom_valid) }, \
         { "dist_bottom_sensor_bitfield", NULL, MAVLINK_TYPE_UINT8_T, 0, 123, offsetof(mavlink_vehicle_local_position_t, dist_bottom_sensor_bitfield) }, \
         { "eph", NULL, MAVLINK_TYPE_FLOAT, 0, 80, offsetof(mavlink_vehicle_local_position_t, eph) }, \
         { "epv", NULL, MAVLINK_TYPE_FLOAT, 0, 84, offsetof(mavlink_vehicle_local_position_t, epv) }, \
         { "evh", NULL, MAVLINK_TYPE_FLOAT, 0, 88, offsetof(mavlink_vehicle_local_position_t, evh) }, \
         { "evv", NULL, MAVLINK_TYPE_FLOAT, 0, 92, offsetof(mavlink_vehicle_local_position_t, evv) }, \
         { "dead_reckoning", NULL, MAVLINK_TYPE_UINT8_T, 0, 124, offsetof(mavlink_vehicle_local_position_t, dead_reckoning) }, \
         { "vxy_max", NULL, MAVLINK_TYPE_FLOAT, 0, 96, offsetof(mavlink_vehicle_local_position_t, vxy_max) }, \
         { "vz_max", NULL, MAVLINK_TYPE_FLOAT, 0, 100, offsetof(mavlink_vehicle_local_position_t, vz_max) }, \
         { "hagl_min", NULL, MAVLINK_TYPE_FLOAT, 0, 104, offsetof(mavlink_vehicle_local_position_t, hagl_min) }, \
         { "hagl_max", NULL, MAVLINK_TYPE_FLOAT, 0, 108, offsetof(mavlink_vehicle_local_position_t, hagl_max) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_VEHICLE_LOCAL_POSITION { \
    "VEHICLE_LOCAL_POSITION", \
    39, \
    {  { "xy_valid", NULL, MAVLINK_TYPE_UINT8_T, 0, 112, offsetof(mavlink_vehicle_local_position_t, xy_valid) }, \
         { "z_valid", NULL, MAVLINK_TYPE_UINT8_T, 0, 113, offsetof(mavlink_vehicle_local_position_t, z_valid) }, \
         { "v_xy_valid", NULL, MAVLINK_TYPE_UINT8_T, 0, 114, offsetof(mavlink_vehicle_local_position_t, v_xy_valid) }, \
         { "v_z_valid", NULL, MAVLINK_TYPE_UINT8_T, 0, 115, offsetof(mavlink_vehicle_local_position_t, v_z_valid) }, \
         { "x", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_vehicle_local_position_t, x) }, \
         { "y", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_vehicle_local_position_t, y) }, \
         { "z", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_vehicle_local_position_t, z) }, \
         { "delta_xy", NULL, MAVLINK_TYPE_FLOAT, 2, 12, offsetof(mavlink_vehicle_local_position_t, delta_xy) }, \
         { "xy_reset_counter", NULL, MAVLINK_TYPE_UINT8_T, 0, 116, offsetof(mavlink_vehicle_local_position_t, xy_reset_counter) }, \
         { "delta_z", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_vehicle_local_position_t, delta_z) }, \
         { "z_reset_counter", NULL, MAVLINK_TYPE_UINT8_T, 0, 117, offsetof(mavlink_vehicle_local_position_t, z_reset_counter) }, \
         { "vx", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_vehicle_local_position_t, vx) }, \
         { "vy", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_vehicle_local_position_t, vy) }, \
         { "vz", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_vehicle_local_position_t, vz) }, \
         { "z_deriv", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_vehicle_local_position_t, z_deriv) }, \
         { "delta_vxy", NULL, MAVLINK_TYPE_FLOAT, 2, 40, offsetof(mavlink_vehicle_local_position_t, delta_vxy) }, \
         { "vxy_reset_counter", NULL, MAVLINK_TYPE_UINT8_T, 0, 118, offsetof(mavlink_vehicle_local_position_t, vxy_reset_counter) }, \
         { "delta_vz", NULL, MAVLINK_TYPE_FLOAT, 0, 48, offsetof(mavlink_vehicle_local_position_t, delta_vz) }, \
         { "vz_reset_counter", NULL, MAVLINK_TYPE_UINT8_T, 0, 119, offsetof(mavlink_vehicle_local_position_t, vz_reset_counter) }, \
         { "ax", NULL, MAVLINK_TYPE_FLOAT, 0, 52, offsetof(mavlink_vehicle_local_position_t, ax) }, \
         { "ay", NULL, MAVLINK_TYPE_FLOAT, 0, 56, offsetof(mavlink_vehicle_local_position_t, ay) }, \
         { "az", NULL, MAVLINK_TYPE_FLOAT, 0, 60, offsetof(mavlink_vehicle_local_position_t, az) }, \
         { "xy_global", NULL, MAVLINK_TYPE_UINT8_T, 0, 120, offsetof(mavlink_vehicle_local_position_t, xy_global) }, \
         { "z_global", NULL, MAVLINK_TYPE_UINT8_T, 0, 121, offsetof(mavlink_vehicle_local_position_t, z_global) }, \
         { "ref_lat", NULL, MAVLINK_TYPE_FLOAT, 0, 64, offsetof(mavlink_vehicle_local_position_t, ref_lat) }, \
         { "ref_lon", NULL, MAVLINK_TYPE_FLOAT, 0, 68, offsetof(mavlink_vehicle_local_position_t, ref_lon) }, \
         { "ref_alt", NULL, MAVLINK_TYPE_FLOAT, 0, 72, offsetof(mavlink_vehicle_local_position_t, ref_alt) }, \
         { "dist_bottom", NULL, MAVLINK_TYPE_FLOAT, 0, 76, offsetof(mavlink_vehicle_local_position_t, dist_bottom) }, \
         { "dist_bottom_valid", NULL, MAVLINK_TYPE_UINT8_T, 0, 122, offsetof(mavlink_vehicle_local_position_t, dist_bottom_valid) }, \
         { "dist_bottom_sensor_bitfield", NULL, MAVLINK_TYPE_UINT8_T, 0, 123, offsetof(mavlink_vehicle_local_position_t, dist_bottom_sensor_bitfield) }, \
         { "eph", NULL, MAVLINK_TYPE_FLOAT, 0, 80, offsetof(mavlink_vehicle_local_position_t, eph) }, \
         { "epv", NULL, MAVLINK_TYPE_FLOAT, 0, 84, offsetof(mavlink_vehicle_local_position_t, epv) }, \
         { "evh", NULL, MAVLINK_TYPE_FLOAT, 0, 88, offsetof(mavlink_vehicle_local_position_t, evh) }, \
         { "evv", NULL, MAVLINK_TYPE_FLOAT, 0, 92, offsetof(mavlink_vehicle_local_position_t, evv) }, \
         { "dead_reckoning", NULL, MAVLINK_TYPE_UINT8_T, 0, 124, offsetof(mavlink_vehicle_local_position_t, dead_reckoning) }, \
         { "vxy_max", NULL, MAVLINK_TYPE_FLOAT, 0, 96, offsetof(mavlink_vehicle_local_position_t, vxy_max) }, \
         { "vz_max", NULL, MAVLINK_TYPE_FLOAT, 0, 100, offsetof(mavlink_vehicle_local_position_t, vz_max) }, \
         { "hagl_min", NULL, MAVLINK_TYPE_FLOAT, 0, 104, offsetof(mavlink_vehicle_local_position_t, hagl_min) }, \
         { "hagl_max", NULL, MAVLINK_TYPE_FLOAT, 0, 108, offsetof(mavlink_vehicle_local_position_t, hagl_max) }, \
         } \
}
#endif

/**
 * @brief Pack a vehicle_local_position message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param xy_valid  true if x and y are valid
 * @param z_valid  true if z is valid
 * @param v_xy_valid  true if vx and vy are valid
 * @param v_z_valid  true if vz is valid
 * @param x [m] North position in NED earth-fixed frame
 * @param y [m] East position in NED earth-fixed frame
 * @param z [m] Down position (negative altitude) in NED earth-fixed frame
 * @param delta_xy  xy position reset delta
 * @param xy_reset_counter  xy position reset counter
 * @param delta_z  z position reset delta
 * @param z_reset_counter  z position reset counter
 * @param vx [m/s] North velocity in NED earth-fixed frame
 * @param vy [m/s] East velocity in NED earth-fixed frame
 * @param vz [m/s] Down velocity in NED earth-fixed frame
 * @param z_deriv [m/s] Down position time derivative in NED earth-fixed frame
 * @param delta_vxy  xy velocity reset delta
 * @param vxy_reset_counter  xy velocity reset counter
 * @param delta_vz  z velocity reset delta
 * @param vz_reset_counter  z velocity reset counter
 * @param ax [m/s/s] North velocity derivative in NED earth-fixed frame.
 * @param ay [m/s/s] East velocity derivative in NED earth-fixed frame.
 * @param az [m/s/s] Down velocity derivative in NED earth-fixed frame.
 * @param xy_global  true if position (x, y) has a valid global reference (ref_lat, ref_lon)
 * @param z_global  true if z has a valid global reference (ref_alt)
 * @param ref_lat [deg] Reference point latitude
 * @param ref_lon [deg] Reference point longitude
 * @param ref_alt [m] Reference altitude AMSL
 * @param dist_bottom [m] Distance from from bottom surface to ground
 * @param dist_bottom_valid  true if distance to bottom surface is valid
 * @param dist_bottom_sensor_bitfield  bitfield indicating what type of sensor is used to estimate dist_bottom
 * @param eph [m] Standard deviation of horizontal position error
 * @param epv [m] Standard deviation of vertical position error
 * @param evh [m/s] Standard deviation of horizontal velocity error
 * @param evv [m/s] Standard deviation of vertical velocity error
 * @param dead_reckoning  True if this position is estimated through dead-reckoning
 * @param vxy_max [m/s] maximum horizontal speed
 * @param vz_max [m/s] maximum vertical speed
 * @param hagl_min [m] minimum height above ground level
 * @param hagl_max [m] maximum height above ground level
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_vehicle_local_position_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t xy_valid, uint8_t z_valid, uint8_t v_xy_valid, uint8_t v_z_valid, float x, float y, float z, const float *delta_xy, uint8_t xy_reset_counter, float delta_z, uint8_t z_reset_counter, float vx, float vy, float vz, float z_deriv, const float *delta_vxy, uint8_t vxy_reset_counter, float delta_vz, uint8_t vz_reset_counter, float ax, float ay, float az, uint8_t xy_global, uint8_t z_global, float ref_lat, float ref_lon, float ref_alt, float dist_bottom, uint8_t dist_bottom_valid, uint8_t dist_bottom_sensor_bitfield, float eph, float epv, float evh, float evv, uint8_t dead_reckoning, float vxy_max, float vz_max, float hagl_min, float hagl_max)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_VEHICLE_LOCAL_POSITION_LEN];
    _mav_put_float(buf, 0, x);
    _mav_put_float(buf, 4, y);
    _mav_put_float(buf, 8, z);
    _mav_put_float(buf, 20, delta_z);
    _mav_put_float(buf, 24, vx);
    _mav_put_float(buf, 28, vy);
    _mav_put_float(buf, 32, vz);
    _mav_put_float(buf, 36, z_deriv);
    _mav_put_float(buf, 48, delta_vz);
    _mav_put_float(buf, 52, ax);
    _mav_put_float(buf, 56, ay);
    _mav_put_float(buf, 60, az);
    _mav_put_float(buf, 64, ref_lat);
    _mav_put_float(buf, 68, ref_lon);
    _mav_put_float(buf, 72, ref_alt);
    _mav_put_float(buf, 76, dist_bottom);
    _mav_put_float(buf, 80, eph);
    _mav_put_float(buf, 84, epv);
    _mav_put_float(buf, 88, evh);
    _mav_put_float(buf, 92, evv);
    _mav_put_float(buf, 96, vxy_max);
    _mav_put_float(buf, 100, vz_max);
    _mav_put_float(buf, 104, hagl_min);
    _mav_put_float(buf, 108, hagl_max);
    _mav_put_uint8_t(buf, 112, xy_valid);
    _mav_put_uint8_t(buf, 113, z_valid);
    _mav_put_uint8_t(buf, 114, v_xy_valid);
    _mav_put_uint8_t(buf, 115, v_z_valid);
    _mav_put_uint8_t(buf, 116, xy_reset_counter);
    _mav_put_uint8_t(buf, 117, z_reset_counter);
    _mav_put_uint8_t(buf, 118, vxy_reset_counter);
    _mav_put_uint8_t(buf, 119, vz_reset_counter);
    _mav_put_uint8_t(buf, 120, xy_global);
    _mav_put_uint8_t(buf, 121, z_global);
    _mav_put_uint8_t(buf, 122, dist_bottom_valid);
    _mav_put_uint8_t(buf, 123, dist_bottom_sensor_bitfield);
    _mav_put_uint8_t(buf, 124, dead_reckoning);
    _mav_put_float_array(buf, 12, delta_xy, 2);
    _mav_put_float_array(buf, 40, delta_vxy, 2);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_VEHICLE_LOCAL_POSITION_LEN);
#else
    mavlink_vehicle_local_position_t packet;
    packet.x = x;
    packet.y = y;
    packet.z = z;
    packet.delta_z = delta_z;
    packet.vx = vx;
    packet.vy = vy;
    packet.vz = vz;
    packet.z_deriv = z_deriv;
    packet.delta_vz = delta_vz;
    packet.ax = ax;
    packet.ay = ay;
    packet.az = az;
    packet.ref_lat = ref_lat;
    packet.ref_lon = ref_lon;
    packet.ref_alt = ref_alt;
    packet.dist_bottom = dist_bottom;
    packet.eph = eph;
    packet.epv = epv;
    packet.evh = evh;
    packet.evv = evv;
    packet.vxy_max = vxy_max;
    packet.vz_max = vz_max;
    packet.hagl_min = hagl_min;
    packet.hagl_max = hagl_max;
    packet.xy_valid = xy_valid;
    packet.z_valid = z_valid;
    packet.v_xy_valid = v_xy_valid;
    packet.v_z_valid = v_z_valid;
    packet.xy_reset_counter = xy_reset_counter;
    packet.z_reset_counter = z_reset_counter;
    packet.vxy_reset_counter = vxy_reset_counter;
    packet.vz_reset_counter = vz_reset_counter;
    packet.xy_global = xy_global;
    packet.z_global = z_global;
    packet.dist_bottom_valid = dist_bottom_valid;
    packet.dist_bottom_sensor_bitfield = dist_bottom_sensor_bitfield;
    packet.dead_reckoning = dead_reckoning;
    mav_array_assign_float(packet.delta_xy, delta_xy, 2);
    mav_array_assign_float(packet.delta_vxy, delta_vxy, 2);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_VEHICLE_LOCAL_POSITION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_VEHICLE_LOCAL_POSITION;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_VEHICLE_LOCAL_POSITION_MIN_LEN, MAVLINK_MSG_ID_VEHICLE_LOCAL_POSITION_LEN, MAVLINK_MSG_ID_VEHICLE_LOCAL_POSITION_CRC);
}

/**
 * @brief Pack a vehicle_local_position message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param xy_valid  true if x and y are valid
 * @param z_valid  true if z is valid
 * @param v_xy_valid  true if vx and vy are valid
 * @param v_z_valid  true if vz is valid
 * @param x [m] North position in NED earth-fixed frame
 * @param y [m] East position in NED earth-fixed frame
 * @param z [m] Down position (negative altitude) in NED earth-fixed frame
 * @param delta_xy  xy position reset delta
 * @param xy_reset_counter  xy position reset counter
 * @param delta_z  z position reset delta
 * @param z_reset_counter  z position reset counter
 * @param vx [m/s] North velocity in NED earth-fixed frame
 * @param vy [m/s] East velocity in NED earth-fixed frame
 * @param vz [m/s] Down velocity in NED earth-fixed frame
 * @param z_deriv [m/s] Down position time derivative in NED earth-fixed frame
 * @param delta_vxy  xy velocity reset delta
 * @param vxy_reset_counter  xy velocity reset counter
 * @param delta_vz  z velocity reset delta
 * @param vz_reset_counter  z velocity reset counter
 * @param ax [m/s/s] North velocity derivative in NED earth-fixed frame.
 * @param ay [m/s/s] East velocity derivative in NED earth-fixed frame.
 * @param az [m/s/s] Down velocity derivative in NED earth-fixed frame.
 * @param xy_global  true if position (x, y) has a valid global reference (ref_lat, ref_lon)
 * @param z_global  true if z has a valid global reference (ref_alt)
 * @param ref_lat [deg] Reference point latitude
 * @param ref_lon [deg] Reference point longitude
 * @param ref_alt [m] Reference altitude AMSL
 * @param dist_bottom [m] Distance from from bottom surface to ground
 * @param dist_bottom_valid  true if distance to bottom surface is valid
 * @param dist_bottom_sensor_bitfield  bitfield indicating what type of sensor is used to estimate dist_bottom
 * @param eph [m] Standard deviation of horizontal position error
 * @param epv [m] Standard deviation of vertical position error
 * @param evh [m/s] Standard deviation of horizontal velocity error
 * @param evv [m/s] Standard deviation of vertical velocity error
 * @param dead_reckoning  True if this position is estimated through dead-reckoning
 * @param vxy_max [m/s] maximum horizontal speed
 * @param vz_max [m/s] maximum vertical speed
 * @param hagl_min [m] minimum height above ground level
 * @param hagl_max [m] maximum height above ground level
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_vehicle_local_position_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t xy_valid, uint8_t z_valid, uint8_t v_xy_valid, uint8_t v_z_valid, float x, float y, float z, const float *delta_xy, uint8_t xy_reset_counter, float delta_z, uint8_t z_reset_counter, float vx, float vy, float vz, float z_deriv, const float *delta_vxy, uint8_t vxy_reset_counter, float delta_vz, uint8_t vz_reset_counter, float ax, float ay, float az, uint8_t xy_global, uint8_t z_global, float ref_lat, float ref_lon, float ref_alt, float dist_bottom, uint8_t dist_bottom_valid, uint8_t dist_bottom_sensor_bitfield, float eph, float epv, float evh, float evv, uint8_t dead_reckoning, float vxy_max, float vz_max, float hagl_min, float hagl_max)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_VEHICLE_LOCAL_POSITION_LEN];
    _mav_put_float(buf, 0, x);
    _mav_put_float(buf, 4, y);
    _mav_put_float(buf, 8, z);
    _mav_put_float(buf, 20, delta_z);
    _mav_put_float(buf, 24, vx);
    _mav_put_float(buf, 28, vy);
    _mav_put_float(buf, 32, vz);
    _mav_put_float(buf, 36, z_deriv);
    _mav_put_float(buf, 48, delta_vz);
    _mav_put_float(buf, 52, ax);
    _mav_put_float(buf, 56, ay);
    _mav_put_float(buf, 60, az);
    _mav_put_float(buf, 64, ref_lat);
    _mav_put_float(buf, 68, ref_lon);
    _mav_put_float(buf, 72, ref_alt);
    _mav_put_float(buf, 76, dist_bottom);
    _mav_put_float(buf, 80, eph);
    _mav_put_float(buf, 84, epv);
    _mav_put_float(buf, 88, evh);
    _mav_put_float(buf, 92, evv);
    _mav_put_float(buf, 96, vxy_max);
    _mav_put_float(buf, 100, vz_max);
    _mav_put_float(buf, 104, hagl_min);
    _mav_put_float(buf, 108, hagl_max);
    _mav_put_uint8_t(buf, 112, xy_valid);
    _mav_put_uint8_t(buf, 113, z_valid);
    _mav_put_uint8_t(buf, 114, v_xy_valid);
    _mav_put_uint8_t(buf, 115, v_z_valid);
    _mav_put_uint8_t(buf, 116, xy_reset_counter);
    _mav_put_uint8_t(buf, 117, z_reset_counter);
    _mav_put_uint8_t(buf, 118, vxy_reset_counter);
    _mav_put_uint8_t(buf, 119, vz_reset_counter);
    _mav_put_uint8_t(buf, 120, xy_global);
    _mav_put_uint8_t(buf, 121, z_global);
    _mav_put_uint8_t(buf, 122, dist_bottom_valid);
    _mav_put_uint8_t(buf, 123, dist_bottom_sensor_bitfield);
    _mav_put_uint8_t(buf, 124, dead_reckoning);
    _mav_put_float_array(buf, 12, delta_xy, 2);
    _mav_put_float_array(buf, 40, delta_vxy, 2);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_VEHICLE_LOCAL_POSITION_LEN);
#else
    mavlink_vehicle_local_position_t packet;
    packet.x = x;
    packet.y = y;
    packet.z = z;
    packet.delta_z = delta_z;
    packet.vx = vx;
    packet.vy = vy;
    packet.vz = vz;
    packet.z_deriv = z_deriv;
    packet.delta_vz = delta_vz;
    packet.ax = ax;
    packet.ay = ay;
    packet.az = az;
    packet.ref_lat = ref_lat;
    packet.ref_lon = ref_lon;
    packet.ref_alt = ref_alt;
    packet.dist_bottom = dist_bottom;
    packet.eph = eph;
    packet.epv = epv;
    packet.evh = evh;
    packet.evv = evv;
    packet.vxy_max = vxy_max;
    packet.vz_max = vz_max;
    packet.hagl_min = hagl_min;
    packet.hagl_max = hagl_max;
    packet.xy_valid = xy_valid;
    packet.z_valid = z_valid;
    packet.v_xy_valid = v_xy_valid;
    packet.v_z_valid = v_z_valid;
    packet.xy_reset_counter = xy_reset_counter;
    packet.z_reset_counter = z_reset_counter;
    packet.vxy_reset_counter = vxy_reset_counter;
    packet.vz_reset_counter = vz_reset_counter;
    packet.xy_global = xy_global;
    packet.z_global = z_global;
    packet.dist_bottom_valid = dist_bottom_valid;
    packet.dist_bottom_sensor_bitfield = dist_bottom_sensor_bitfield;
    packet.dead_reckoning = dead_reckoning;
    mav_array_memcpy(packet.delta_xy, delta_xy, sizeof(float)*2);
    mav_array_memcpy(packet.delta_vxy, delta_vxy, sizeof(float)*2);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_VEHICLE_LOCAL_POSITION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_VEHICLE_LOCAL_POSITION;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_VEHICLE_LOCAL_POSITION_MIN_LEN, MAVLINK_MSG_ID_VEHICLE_LOCAL_POSITION_LEN, MAVLINK_MSG_ID_VEHICLE_LOCAL_POSITION_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_VEHICLE_LOCAL_POSITION_MIN_LEN, MAVLINK_MSG_ID_VEHICLE_LOCAL_POSITION_LEN);
#endif
}

/**
 * @brief Pack a vehicle_local_position message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param xy_valid  true if x and y are valid
 * @param z_valid  true if z is valid
 * @param v_xy_valid  true if vx and vy are valid
 * @param v_z_valid  true if vz is valid
 * @param x [m] North position in NED earth-fixed frame
 * @param y [m] East position in NED earth-fixed frame
 * @param z [m] Down position (negative altitude) in NED earth-fixed frame
 * @param delta_xy  xy position reset delta
 * @param xy_reset_counter  xy position reset counter
 * @param delta_z  z position reset delta
 * @param z_reset_counter  z position reset counter
 * @param vx [m/s] North velocity in NED earth-fixed frame
 * @param vy [m/s] East velocity in NED earth-fixed frame
 * @param vz [m/s] Down velocity in NED earth-fixed frame
 * @param z_deriv [m/s] Down position time derivative in NED earth-fixed frame
 * @param delta_vxy  xy velocity reset delta
 * @param vxy_reset_counter  xy velocity reset counter
 * @param delta_vz  z velocity reset delta
 * @param vz_reset_counter  z velocity reset counter
 * @param ax [m/s/s] North velocity derivative in NED earth-fixed frame.
 * @param ay [m/s/s] East velocity derivative in NED earth-fixed frame.
 * @param az [m/s/s] Down velocity derivative in NED earth-fixed frame.
 * @param xy_global  true if position (x, y) has a valid global reference (ref_lat, ref_lon)
 * @param z_global  true if z has a valid global reference (ref_alt)
 * @param ref_lat [deg] Reference point latitude
 * @param ref_lon [deg] Reference point longitude
 * @param ref_alt [m] Reference altitude AMSL
 * @param dist_bottom [m] Distance from from bottom surface to ground
 * @param dist_bottom_valid  true if distance to bottom surface is valid
 * @param dist_bottom_sensor_bitfield  bitfield indicating what type of sensor is used to estimate dist_bottom
 * @param eph [m] Standard deviation of horizontal position error
 * @param epv [m] Standard deviation of vertical position error
 * @param evh [m/s] Standard deviation of horizontal velocity error
 * @param evv [m/s] Standard deviation of vertical velocity error
 * @param dead_reckoning  True if this position is estimated through dead-reckoning
 * @param vxy_max [m/s] maximum horizontal speed
 * @param vz_max [m/s] maximum vertical speed
 * @param hagl_min [m] minimum height above ground level
 * @param hagl_max [m] maximum height above ground level
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_vehicle_local_position_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t xy_valid,uint8_t z_valid,uint8_t v_xy_valid,uint8_t v_z_valid,float x,float y,float z,const float *delta_xy,uint8_t xy_reset_counter,float delta_z,uint8_t z_reset_counter,float vx,float vy,float vz,float z_deriv,const float *delta_vxy,uint8_t vxy_reset_counter,float delta_vz,uint8_t vz_reset_counter,float ax,float ay,float az,uint8_t xy_global,uint8_t z_global,float ref_lat,float ref_lon,float ref_alt,float dist_bottom,uint8_t dist_bottom_valid,uint8_t dist_bottom_sensor_bitfield,float eph,float epv,float evh,float evv,uint8_t dead_reckoning,float vxy_max,float vz_max,float hagl_min,float hagl_max)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_VEHICLE_LOCAL_POSITION_LEN];
    _mav_put_float(buf, 0, x);
    _mav_put_float(buf, 4, y);
    _mav_put_float(buf, 8, z);
    _mav_put_float(buf, 20, delta_z);
    _mav_put_float(buf, 24, vx);
    _mav_put_float(buf, 28, vy);
    _mav_put_float(buf, 32, vz);
    _mav_put_float(buf, 36, z_deriv);
    _mav_put_float(buf, 48, delta_vz);
    _mav_put_float(buf, 52, ax);
    _mav_put_float(buf, 56, ay);
    _mav_put_float(buf, 60, az);
    _mav_put_float(buf, 64, ref_lat);
    _mav_put_float(buf, 68, ref_lon);
    _mav_put_float(buf, 72, ref_alt);
    _mav_put_float(buf, 76, dist_bottom);
    _mav_put_float(buf, 80, eph);
    _mav_put_float(buf, 84, epv);
    _mav_put_float(buf, 88, evh);
    _mav_put_float(buf, 92, evv);
    _mav_put_float(buf, 96, vxy_max);
    _mav_put_float(buf, 100, vz_max);
    _mav_put_float(buf, 104, hagl_min);
    _mav_put_float(buf, 108, hagl_max);
    _mav_put_uint8_t(buf, 112, xy_valid);
    _mav_put_uint8_t(buf, 113, z_valid);
    _mav_put_uint8_t(buf, 114, v_xy_valid);
    _mav_put_uint8_t(buf, 115, v_z_valid);
    _mav_put_uint8_t(buf, 116, xy_reset_counter);
    _mav_put_uint8_t(buf, 117, z_reset_counter);
    _mav_put_uint8_t(buf, 118, vxy_reset_counter);
    _mav_put_uint8_t(buf, 119, vz_reset_counter);
    _mav_put_uint8_t(buf, 120, xy_global);
    _mav_put_uint8_t(buf, 121, z_global);
    _mav_put_uint8_t(buf, 122, dist_bottom_valid);
    _mav_put_uint8_t(buf, 123, dist_bottom_sensor_bitfield);
    _mav_put_uint8_t(buf, 124, dead_reckoning);
    _mav_put_float_array(buf, 12, delta_xy, 2);
    _mav_put_float_array(buf, 40, delta_vxy, 2);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_VEHICLE_LOCAL_POSITION_LEN);
#else
    mavlink_vehicle_local_position_t packet;
    packet.x = x;
    packet.y = y;
    packet.z = z;
    packet.delta_z = delta_z;
    packet.vx = vx;
    packet.vy = vy;
    packet.vz = vz;
    packet.z_deriv = z_deriv;
    packet.delta_vz = delta_vz;
    packet.ax = ax;
    packet.ay = ay;
    packet.az = az;
    packet.ref_lat = ref_lat;
    packet.ref_lon = ref_lon;
    packet.ref_alt = ref_alt;
    packet.dist_bottom = dist_bottom;
    packet.eph = eph;
    packet.epv = epv;
    packet.evh = evh;
    packet.evv = evv;
    packet.vxy_max = vxy_max;
    packet.vz_max = vz_max;
    packet.hagl_min = hagl_min;
    packet.hagl_max = hagl_max;
    packet.xy_valid = xy_valid;
    packet.z_valid = z_valid;
    packet.v_xy_valid = v_xy_valid;
    packet.v_z_valid = v_z_valid;
    packet.xy_reset_counter = xy_reset_counter;
    packet.z_reset_counter = z_reset_counter;
    packet.vxy_reset_counter = vxy_reset_counter;
    packet.vz_reset_counter = vz_reset_counter;
    packet.xy_global = xy_global;
    packet.z_global = z_global;
    packet.dist_bottom_valid = dist_bottom_valid;
    packet.dist_bottom_sensor_bitfield = dist_bottom_sensor_bitfield;
    packet.dead_reckoning = dead_reckoning;
    mav_array_assign_float(packet.delta_xy, delta_xy, 2);
    mav_array_assign_float(packet.delta_vxy, delta_vxy, 2);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_VEHICLE_LOCAL_POSITION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_VEHICLE_LOCAL_POSITION;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_VEHICLE_LOCAL_POSITION_MIN_LEN, MAVLINK_MSG_ID_VEHICLE_LOCAL_POSITION_LEN, MAVLINK_MSG_ID_VEHICLE_LOCAL_POSITION_CRC);
}

/**
 * @brief Encode a vehicle_local_position struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param vehicle_local_position C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_vehicle_local_position_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_vehicle_local_position_t* vehicle_local_position)
{
    return mavlink_msg_vehicle_local_position_pack(system_id, component_id, msg, vehicle_local_position->xy_valid, vehicle_local_position->z_valid, vehicle_local_position->v_xy_valid, vehicle_local_position->v_z_valid, vehicle_local_position->x, vehicle_local_position->y, vehicle_local_position->z, vehicle_local_position->delta_xy, vehicle_local_position->xy_reset_counter, vehicle_local_position->delta_z, vehicle_local_position->z_reset_counter, vehicle_local_position->vx, vehicle_local_position->vy, vehicle_local_position->vz, vehicle_local_position->z_deriv, vehicle_local_position->delta_vxy, vehicle_local_position->vxy_reset_counter, vehicle_local_position->delta_vz, vehicle_local_position->vz_reset_counter, vehicle_local_position->ax, vehicle_local_position->ay, vehicle_local_position->az, vehicle_local_position->xy_global, vehicle_local_position->z_global, vehicle_local_position->ref_lat, vehicle_local_position->ref_lon, vehicle_local_position->ref_alt, vehicle_local_position->dist_bottom, vehicle_local_position->dist_bottom_valid, vehicle_local_position->dist_bottom_sensor_bitfield, vehicle_local_position->eph, vehicle_local_position->epv, vehicle_local_position->evh, vehicle_local_position->evv, vehicle_local_position->dead_reckoning, vehicle_local_position->vxy_max, vehicle_local_position->vz_max, vehicle_local_position->hagl_min, vehicle_local_position->hagl_max);
}

/**
 * @brief Encode a vehicle_local_position struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param vehicle_local_position C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_vehicle_local_position_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_vehicle_local_position_t* vehicle_local_position)
{
    return mavlink_msg_vehicle_local_position_pack_chan(system_id, component_id, chan, msg, vehicle_local_position->xy_valid, vehicle_local_position->z_valid, vehicle_local_position->v_xy_valid, vehicle_local_position->v_z_valid, vehicle_local_position->x, vehicle_local_position->y, vehicle_local_position->z, vehicle_local_position->delta_xy, vehicle_local_position->xy_reset_counter, vehicle_local_position->delta_z, vehicle_local_position->z_reset_counter, vehicle_local_position->vx, vehicle_local_position->vy, vehicle_local_position->vz, vehicle_local_position->z_deriv, vehicle_local_position->delta_vxy, vehicle_local_position->vxy_reset_counter, vehicle_local_position->delta_vz, vehicle_local_position->vz_reset_counter, vehicle_local_position->ax, vehicle_local_position->ay, vehicle_local_position->az, vehicle_local_position->xy_global, vehicle_local_position->z_global, vehicle_local_position->ref_lat, vehicle_local_position->ref_lon, vehicle_local_position->ref_alt, vehicle_local_position->dist_bottom, vehicle_local_position->dist_bottom_valid, vehicle_local_position->dist_bottom_sensor_bitfield, vehicle_local_position->eph, vehicle_local_position->epv, vehicle_local_position->evh, vehicle_local_position->evv, vehicle_local_position->dead_reckoning, vehicle_local_position->vxy_max, vehicle_local_position->vz_max, vehicle_local_position->hagl_min, vehicle_local_position->hagl_max);
}

/**
 * @brief Encode a vehicle_local_position struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param vehicle_local_position C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_vehicle_local_position_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_vehicle_local_position_t* vehicle_local_position)
{
    return mavlink_msg_vehicle_local_position_pack_status(system_id, component_id, _status, msg,  vehicle_local_position->xy_valid, vehicle_local_position->z_valid, vehicle_local_position->v_xy_valid, vehicle_local_position->v_z_valid, vehicle_local_position->x, vehicle_local_position->y, vehicle_local_position->z, vehicle_local_position->delta_xy, vehicle_local_position->xy_reset_counter, vehicle_local_position->delta_z, vehicle_local_position->z_reset_counter, vehicle_local_position->vx, vehicle_local_position->vy, vehicle_local_position->vz, vehicle_local_position->z_deriv, vehicle_local_position->delta_vxy, vehicle_local_position->vxy_reset_counter, vehicle_local_position->delta_vz, vehicle_local_position->vz_reset_counter, vehicle_local_position->ax, vehicle_local_position->ay, vehicle_local_position->az, vehicle_local_position->xy_global, vehicle_local_position->z_global, vehicle_local_position->ref_lat, vehicle_local_position->ref_lon, vehicle_local_position->ref_alt, vehicle_local_position->dist_bottom, vehicle_local_position->dist_bottom_valid, vehicle_local_position->dist_bottom_sensor_bitfield, vehicle_local_position->eph, vehicle_local_position->epv, vehicle_local_position->evh, vehicle_local_position->evv, vehicle_local_position->dead_reckoning, vehicle_local_position->vxy_max, vehicle_local_position->vz_max, vehicle_local_position->hagl_min, vehicle_local_position->hagl_max);
}

/**
 * @brief Send a vehicle_local_position message
 * @param chan MAVLink channel to send the message
 *
 * @param xy_valid  true if x and y are valid
 * @param z_valid  true if z is valid
 * @param v_xy_valid  true if vx and vy are valid
 * @param v_z_valid  true if vz is valid
 * @param x [m] North position in NED earth-fixed frame
 * @param y [m] East position in NED earth-fixed frame
 * @param z [m] Down position (negative altitude) in NED earth-fixed frame
 * @param delta_xy  xy position reset delta
 * @param xy_reset_counter  xy position reset counter
 * @param delta_z  z position reset delta
 * @param z_reset_counter  z position reset counter
 * @param vx [m/s] North velocity in NED earth-fixed frame
 * @param vy [m/s] East velocity in NED earth-fixed frame
 * @param vz [m/s] Down velocity in NED earth-fixed frame
 * @param z_deriv [m/s] Down position time derivative in NED earth-fixed frame
 * @param delta_vxy  xy velocity reset delta
 * @param vxy_reset_counter  xy velocity reset counter
 * @param delta_vz  z velocity reset delta
 * @param vz_reset_counter  z velocity reset counter
 * @param ax [m/s/s] North velocity derivative in NED earth-fixed frame.
 * @param ay [m/s/s] East velocity derivative in NED earth-fixed frame.
 * @param az [m/s/s] Down velocity derivative in NED earth-fixed frame.
 * @param xy_global  true if position (x, y) has a valid global reference (ref_lat, ref_lon)
 * @param z_global  true if z has a valid global reference (ref_alt)
 * @param ref_lat [deg] Reference point latitude
 * @param ref_lon [deg] Reference point longitude
 * @param ref_alt [m] Reference altitude AMSL
 * @param dist_bottom [m] Distance from from bottom surface to ground
 * @param dist_bottom_valid  true if distance to bottom surface is valid
 * @param dist_bottom_sensor_bitfield  bitfield indicating what type of sensor is used to estimate dist_bottom
 * @param eph [m] Standard deviation of horizontal position error
 * @param epv [m] Standard deviation of vertical position error
 * @param evh [m/s] Standard deviation of horizontal velocity error
 * @param evv [m/s] Standard deviation of vertical velocity error
 * @param dead_reckoning  True if this position is estimated through dead-reckoning
 * @param vxy_max [m/s] maximum horizontal speed
 * @param vz_max [m/s] maximum vertical speed
 * @param hagl_min [m] minimum height above ground level
 * @param hagl_max [m] maximum height above ground level
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_vehicle_local_position_send(mavlink_channel_t chan, uint8_t xy_valid, uint8_t z_valid, uint8_t v_xy_valid, uint8_t v_z_valid, float x, float y, float z, const float *delta_xy, uint8_t xy_reset_counter, float delta_z, uint8_t z_reset_counter, float vx, float vy, float vz, float z_deriv, const float *delta_vxy, uint8_t vxy_reset_counter, float delta_vz, uint8_t vz_reset_counter, float ax, float ay, float az, uint8_t xy_global, uint8_t z_global, float ref_lat, float ref_lon, float ref_alt, float dist_bottom, uint8_t dist_bottom_valid, uint8_t dist_bottom_sensor_bitfield, float eph, float epv, float evh, float evv, uint8_t dead_reckoning, float vxy_max, float vz_max, float hagl_min, float hagl_max)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_VEHICLE_LOCAL_POSITION_LEN];
    _mav_put_float(buf, 0, x);
    _mav_put_float(buf, 4, y);
    _mav_put_float(buf, 8, z);
    _mav_put_float(buf, 20, delta_z);
    _mav_put_float(buf, 24, vx);
    _mav_put_float(buf, 28, vy);
    _mav_put_float(buf, 32, vz);
    _mav_put_float(buf, 36, z_deriv);
    _mav_put_float(buf, 48, delta_vz);
    _mav_put_float(buf, 52, ax);
    _mav_put_float(buf, 56, ay);
    _mav_put_float(buf, 60, az);
    _mav_put_float(buf, 64, ref_lat);
    _mav_put_float(buf, 68, ref_lon);
    _mav_put_float(buf, 72, ref_alt);
    _mav_put_float(buf, 76, dist_bottom);
    _mav_put_float(buf, 80, eph);
    _mav_put_float(buf, 84, epv);
    _mav_put_float(buf, 88, evh);
    _mav_put_float(buf, 92, evv);
    _mav_put_float(buf, 96, vxy_max);
    _mav_put_float(buf, 100, vz_max);
    _mav_put_float(buf, 104, hagl_min);
    _mav_put_float(buf, 108, hagl_max);
    _mav_put_uint8_t(buf, 112, xy_valid);
    _mav_put_uint8_t(buf, 113, z_valid);
    _mav_put_uint8_t(buf, 114, v_xy_valid);
    _mav_put_uint8_t(buf, 115, v_z_valid);
    _mav_put_uint8_t(buf, 116, xy_reset_counter);
    _mav_put_uint8_t(buf, 117, z_reset_counter);
    _mav_put_uint8_t(buf, 118, vxy_reset_counter);
    _mav_put_uint8_t(buf, 119, vz_reset_counter);
    _mav_put_uint8_t(buf, 120, xy_global);
    _mav_put_uint8_t(buf, 121, z_global);
    _mav_put_uint8_t(buf, 122, dist_bottom_valid);
    _mav_put_uint8_t(buf, 123, dist_bottom_sensor_bitfield);
    _mav_put_uint8_t(buf, 124, dead_reckoning);
    _mav_put_float_array(buf, 12, delta_xy, 2);
    _mav_put_float_array(buf, 40, delta_vxy, 2);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VEHICLE_LOCAL_POSITION, buf, MAVLINK_MSG_ID_VEHICLE_LOCAL_POSITION_MIN_LEN, MAVLINK_MSG_ID_VEHICLE_LOCAL_POSITION_LEN, MAVLINK_MSG_ID_VEHICLE_LOCAL_POSITION_CRC);
#else
    mavlink_vehicle_local_position_t packet;
    packet.x = x;
    packet.y = y;
    packet.z = z;
    packet.delta_z = delta_z;
    packet.vx = vx;
    packet.vy = vy;
    packet.vz = vz;
    packet.z_deriv = z_deriv;
    packet.delta_vz = delta_vz;
    packet.ax = ax;
    packet.ay = ay;
    packet.az = az;
    packet.ref_lat = ref_lat;
    packet.ref_lon = ref_lon;
    packet.ref_alt = ref_alt;
    packet.dist_bottom = dist_bottom;
    packet.eph = eph;
    packet.epv = epv;
    packet.evh = evh;
    packet.evv = evv;
    packet.vxy_max = vxy_max;
    packet.vz_max = vz_max;
    packet.hagl_min = hagl_min;
    packet.hagl_max = hagl_max;
    packet.xy_valid = xy_valid;
    packet.z_valid = z_valid;
    packet.v_xy_valid = v_xy_valid;
    packet.v_z_valid = v_z_valid;
    packet.xy_reset_counter = xy_reset_counter;
    packet.z_reset_counter = z_reset_counter;
    packet.vxy_reset_counter = vxy_reset_counter;
    packet.vz_reset_counter = vz_reset_counter;
    packet.xy_global = xy_global;
    packet.z_global = z_global;
    packet.dist_bottom_valid = dist_bottom_valid;
    packet.dist_bottom_sensor_bitfield = dist_bottom_sensor_bitfield;
    packet.dead_reckoning = dead_reckoning;
    mav_array_assign_float(packet.delta_xy, delta_xy, 2);
    mav_array_assign_float(packet.delta_vxy, delta_vxy, 2);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VEHICLE_LOCAL_POSITION, (const char *)&packet, MAVLINK_MSG_ID_VEHICLE_LOCAL_POSITION_MIN_LEN, MAVLINK_MSG_ID_VEHICLE_LOCAL_POSITION_LEN, MAVLINK_MSG_ID_VEHICLE_LOCAL_POSITION_CRC);
#endif
}

/**
 * @brief Send a vehicle_local_position message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_vehicle_local_position_send_struct(mavlink_channel_t chan, const mavlink_vehicle_local_position_t* vehicle_local_position)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_vehicle_local_position_send(chan, vehicle_local_position->xy_valid, vehicle_local_position->z_valid, vehicle_local_position->v_xy_valid, vehicle_local_position->v_z_valid, vehicle_local_position->x, vehicle_local_position->y, vehicle_local_position->z, vehicle_local_position->delta_xy, vehicle_local_position->xy_reset_counter, vehicle_local_position->delta_z, vehicle_local_position->z_reset_counter, vehicle_local_position->vx, vehicle_local_position->vy, vehicle_local_position->vz, vehicle_local_position->z_deriv, vehicle_local_position->delta_vxy, vehicle_local_position->vxy_reset_counter, vehicle_local_position->delta_vz, vehicle_local_position->vz_reset_counter, vehicle_local_position->ax, vehicle_local_position->ay, vehicle_local_position->az, vehicle_local_position->xy_global, vehicle_local_position->z_global, vehicle_local_position->ref_lat, vehicle_local_position->ref_lon, vehicle_local_position->ref_alt, vehicle_local_position->dist_bottom, vehicle_local_position->dist_bottom_valid, vehicle_local_position->dist_bottom_sensor_bitfield, vehicle_local_position->eph, vehicle_local_position->epv, vehicle_local_position->evh, vehicle_local_position->evv, vehicle_local_position->dead_reckoning, vehicle_local_position->vxy_max, vehicle_local_position->vz_max, vehicle_local_position->hagl_min, vehicle_local_position->hagl_max);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VEHICLE_LOCAL_POSITION, (const char *)vehicle_local_position, MAVLINK_MSG_ID_VEHICLE_LOCAL_POSITION_MIN_LEN, MAVLINK_MSG_ID_VEHICLE_LOCAL_POSITION_LEN, MAVLINK_MSG_ID_VEHICLE_LOCAL_POSITION_CRC);
#endif
}

#if MAVLINK_MSG_ID_VEHICLE_LOCAL_POSITION_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_vehicle_local_position_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t xy_valid, uint8_t z_valid, uint8_t v_xy_valid, uint8_t v_z_valid, float x, float y, float z, const float *delta_xy, uint8_t xy_reset_counter, float delta_z, uint8_t z_reset_counter, float vx, float vy, float vz, float z_deriv, const float *delta_vxy, uint8_t vxy_reset_counter, float delta_vz, uint8_t vz_reset_counter, float ax, float ay, float az, uint8_t xy_global, uint8_t z_global, float ref_lat, float ref_lon, float ref_alt, float dist_bottom, uint8_t dist_bottom_valid, uint8_t dist_bottom_sensor_bitfield, float eph, float epv, float evh, float evv, uint8_t dead_reckoning, float vxy_max, float vz_max, float hagl_min, float hagl_max)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, x);
    _mav_put_float(buf, 4, y);
    _mav_put_float(buf, 8, z);
    _mav_put_float(buf, 20, delta_z);
    _mav_put_float(buf, 24, vx);
    _mav_put_float(buf, 28, vy);
    _mav_put_float(buf, 32, vz);
    _mav_put_float(buf, 36, z_deriv);
    _mav_put_float(buf, 48, delta_vz);
    _mav_put_float(buf, 52, ax);
    _mav_put_float(buf, 56, ay);
    _mav_put_float(buf, 60, az);
    _mav_put_float(buf, 64, ref_lat);
    _mav_put_float(buf, 68, ref_lon);
    _mav_put_float(buf, 72, ref_alt);
    _mav_put_float(buf, 76, dist_bottom);
    _mav_put_float(buf, 80, eph);
    _mav_put_float(buf, 84, epv);
    _mav_put_float(buf, 88, evh);
    _mav_put_float(buf, 92, evv);
    _mav_put_float(buf, 96, vxy_max);
    _mav_put_float(buf, 100, vz_max);
    _mav_put_float(buf, 104, hagl_min);
    _mav_put_float(buf, 108, hagl_max);
    _mav_put_uint8_t(buf, 112, xy_valid);
    _mav_put_uint8_t(buf, 113, z_valid);
    _mav_put_uint8_t(buf, 114, v_xy_valid);
    _mav_put_uint8_t(buf, 115, v_z_valid);
    _mav_put_uint8_t(buf, 116, xy_reset_counter);
    _mav_put_uint8_t(buf, 117, z_reset_counter);
    _mav_put_uint8_t(buf, 118, vxy_reset_counter);
    _mav_put_uint8_t(buf, 119, vz_reset_counter);
    _mav_put_uint8_t(buf, 120, xy_global);
    _mav_put_uint8_t(buf, 121, z_global);
    _mav_put_uint8_t(buf, 122, dist_bottom_valid);
    _mav_put_uint8_t(buf, 123, dist_bottom_sensor_bitfield);
    _mav_put_uint8_t(buf, 124, dead_reckoning);
    _mav_put_float_array(buf, 12, delta_xy, 2);
    _mav_put_float_array(buf, 40, delta_vxy, 2);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VEHICLE_LOCAL_POSITION, buf, MAVLINK_MSG_ID_VEHICLE_LOCAL_POSITION_MIN_LEN, MAVLINK_MSG_ID_VEHICLE_LOCAL_POSITION_LEN, MAVLINK_MSG_ID_VEHICLE_LOCAL_POSITION_CRC);
#else
    mavlink_vehicle_local_position_t *packet = (mavlink_vehicle_local_position_t *)msgbuf;
    packet->x = x;
    packet->y = y;
    packet->z = z;
    packet->delta_z = delta_z;
    packet->vx = vx;
    packet->vy = vy;
    packet->vz = vz;
    packet->z_deriv = z_deriv;
    packet->delta_vz = delta_vz;
    packet->ax = ax;
    packet->ay = ay;
    packet->az = az;
    packet->ref_lat = ref_lat;
    packet->ref_lon = ref_lon;
    packet->ref_alt = ref_alt;
    packet->dist_bottom = dist_bottom;
    packet->eph = eph;
    packet->epv = epv;
    packet->evh = evh;
    packet->evv = evv;
    packet->vxy_max = vxy_max;
    packet->vz_max = vz_max;
    packet->hagl_min = hagl_min;
    packet->hagl_max = hagl_max;
    packet->xy_valid = xy_valid;
    packet->z_valid = z_valid;
    packet->v_xy_valid = v_xy_valid;
    packet->v_z_valid = v_z_valid;
    packet->xy_reset_counter = xy_reset_counter;
    packet->z_reset_counter = z_reset_counter;
    packet->vxy_reset_counter = vxy_reset_counter;
    packet->vz_reset_counter = vz_reset_counter;
    packet->xy_global = xy_global;
    packet->z_global = z_global;
    packet->dist_bottom_valid = dist_bottom_valid;
    packet->dist_bottom_sensor_bitfield = dist_bottom_sensor_bitfield;
    packet->dead_reckoning = dead_reckoning;
    mav_array_assign_float(packet->delta_xy, delta_xy, 2);
    mav_array_assign_float(packet->delta_vxy, delta_vxy, 2);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VEHICLE_LOCAL_POSITION, (const char *)packet, MAVLINK_MSG_ID_VEHICLE_LOCAL_POSITION_MIN_LEN, MAVLINK_MSG_ID_VEHICLE_LOCAL_POSITION_LEN, MAVLINK_MSG_ID_VEHICLE_LOCAL_POSITION_CRC);
#endif
}
#endif

#endif

// MESSAGE VEHICLE_LOCAL_POSITION UNPACKING


/**
 * @brief Get field xy_valid from vehicle_local_position message
 *
 * @return  true if x and y are valid
 */
static inline uint8_t mavlink_msg_vehicle_local_position_get_xy_valid(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  112);
}

/**
 * @brief Get field z_valid from vehicle_local_position message
 *
 * @return  true if z is valid
 */
static inline uint8_t mavlink_msg_vehicle_local_position_get_z_valid(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  113);
}

/**
 * @brief Get field v_xy_valid from vehicle_local_position message
 *
 * @return  true if vx and vy are valid
 */
static inline uint8_t mavlink_msg_vehicle_local_position_get_v_xy_valid(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  114);
}

/**
 * @brief Get field v_z_valid from vehicle_local_position message
 *
 * @return  true if vz is valid
 */
static inline uint8_t mavlink_msg_vehicle_local_position_get_v_z_valid(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  115);
}

/**
 * @brief Get field x from vehicle_local_position message
 *
 * @return [m] North position in NED earth-fixed frame
 */
static inline float mavlink_msg_vehicle_local_position_get_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field y from vehicle_local_position message
 *
 * @return [m] East position in NED earth-fixed frame
 */
static inline float mavlink_msg_vehicle_local_position_get_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field z from vehicle_local_position message
 *
 * @return [m] Down position (negative altitude) in NED earth-fixed frame
 */
static inline float mavlink_msg_vehicle_local_position_get_z(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field delta_xy from vehicle_local_position message
 *
 * @return  xy position reset delta
 */
static inline uint16_t mavlink_msg_vehicle_local_position_get_delta_xy(const mavlink_message_t* msg, float *delta_xy)
{
    return _MAV_RETURN_float_array(msg, delta_xy, 2,  12);
}

/**
 * @brief Get field xy_reset_counter from vehicle_local_position message
 *
 * @return  xy position reset counter
 */
static inline uint8_t mavlink_msg_vehicle_local_position_get_xy_reset_counter(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  116);
}

/**
 * @brief Get field delta_z from vehicle_local_position message
 *
 * @return  z position reset delta
 */
static inline float mavlink_msg_vehicle_local_position_get_delta_z(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field z_reset_counter from vehicle_local_position message
 *
 * @return  z position reset counter
 */
static inline uint8_t mavlink_msg_vehicle_local_position_get_z_reset_counter(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  117);
}

/**
 * @brief Get field vx from vehicle_local_position message
 *
 * @return [m/s] North velocity in NED earth-fixed frame
 */
static inline float mavlink_msg_vehicle_local_position_get_vx(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field vy from vehicle_local_position message
 *
 * @return [m/s] East velocity in NED earth-fixed frame
 */
static inline float mavlink_msg_vehicle_local_position_get_vy(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Get field vz from vehicle_local_position message
 *
 * @return [m/s] Down velocity in NED earth-fixed frame
 */
static inline float mavlink_msg_vehicle_local_position_get_vz(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  32);
}

/**
 * @brief Get field z_deriv from vehicle_local_position message
 *
 * @return [m/s] Down position time derivative in NED earth-fixed frame
 */
static inline float mavlink_msg_vehicle_local_position_get_z_deriv(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  36);
}

/**
 * @brief Get field delta_vxy from vehicle_local_position message
 *
 * @return  xy velocity reset delta
 */
static inline uint16_t mavlink_msg_vehicle_local_position_get_delta_vxy(const mavlink_message_t* msg, float *delta_vxy)
{
    return _MAV_RETURN_float_array(msg, delta_vxy, 2,  40);
}

/**
 * @brief Get field vxy_reset_counter from vehicle_local_position message
 *
 * @return  xy velocity reset counter
 */
static inline uint8_t mavlink_msg_vehicle_local_position_get_vxy_reset_counter(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  118);
}

/**
 * @brief Get field delta_vz from vehicle_local_position message
 *
 * @return  z velocity reset delta
 */
static inline float mavlink_msg_vehicle_local_position_get_delta_vz(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  48);
}

/**
 * @brief Get field vz_reset_counter from vehicle_local_position message
 *
 * @return  z velocity reset counter
 */
static inline uint8_t mavlink_msg_vehicle_local_position_get_vz_reset_counter(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  119);
}

/**
 * @brief Get field ax from vehicle_local_position message
 *
 * @return [m/s/s] North velocity derivative in NED earth-fixed frame.
 */
static inline float mavlink_msg_vehicle_local_position_get_ax(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  52);
}

/**
 * @brief Get field ay from vehicle_local_position message
 *
 * @return [m/s/s] East velocity derivative in NED earth-fixed frame.
 */
static inline float mavlink_msg_vehicle_local_position_get_ay(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  56);
}

/**
 * @brief Get field az from vehicle_local_position message
 *
 * @return [m/s/s] Down velocity derivative in NED earth-fixed frame.
 */
static inline float mavlink_msg_vehicle_local_position_get_az(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  60);
}

/**
 * @brief Get field xy_global from vehicle_local_position message
 *
 * @return  true if position (x, y) has a valid global reference (ref_lat, ref_lon)
 */
static inline uint8_t mavlink_msg_vehicle_local_position_get_xy_global(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  120);
}

/**
 * @brief Get field z_global from vehicle_local_position message
 *
 * @return  true if z has a valid global reference (ref_alt)
 */
static inline uint8_t mavlink_msg_vehicle_local_position_get_z_global(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  121);
}

/**
 * @brief Get field ref_lat from vehicle_local_position message
 *
 * @return [deg] Reference point latitude
 */
static inline float mavlink_msg_vehicle_local_position_get_ref_lat(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  64);
}

/**
 * @brief Get field ref_lon from vehicle_local_position message
 *
 * @return [deg] Reference point longitude
 */
static inline float mavlink_msg_vehicle_local_position_get_ref_lon(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  68);
}

/**
 * @brief Get field ref_alt from vehicle_local_position message
 *
 * @return [m] Reference altitude AMSL
 */
static inline float mavlink_msg_vehicle_local_position_get_ref_alt(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  72);
}

/**
 * @brief Get field dist_bottom from vehicle_local_position message
 *
 * @return [m] Distance from from bottom surface to ground
 */
static inline float mavlink_msg_vehicle_local_position_get_dist_bottom(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  76);
}

/**
 * @brief Get field dist_bottom_valid from vehicle_local_position message
 *
 * @return  true if distance to bottom surface is valid
 */
static inline uint8_t mavlink_msg_vehicle_local_position_get_dist_bottom_valid(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  122);
}

/**
 * @brief Get field dist_bottom_sensor_bitfield from vehicle_local_position message
 *
 * @return  bitfield indicating what type of sensor is used to estimate dist_bottom
 */
static inline uint8_t mavlink_msg_vehicle_local_position_get_dist_bottom_sensor_bitfield(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  123);
}

/**
 * @brief Get field eph from vehicle_local_position message
 *
 * @return [m] Standard deviation of horizontal position error
 */
static inline float mavlink_msg_vehicle_local_position_get_eph(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  80);
}

/**
 * @brief Get field epv from vehicle_local_position message
 *
 * @return [m] Standard deviation of vertical position error
 */
static inline float mavlink_msg_vehicle_local_position_get_epv(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  84);
}

/**
 * @brief Get field evh from vehicle_local_position message
 *
 * @return [m/s] Standard deviation of horizontal velocity error
 */
static inline float mavlink_msg_vehicle_local_position_get_evh(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  88);
}

/**
 * @brief Get field evv from vehicle_local_position message
 *
 * @return [m/s] Standard deviation of vertical velocity error
 */
static inline float mavlink_msg_vehicle_local_position_get_evv(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  92);
}

/**
 * @brief Get field dead_reckoning from vehicle_local_position message
 *
 * @return  True if this position is estimated through dead-reckoning
 */
static inline uint8_t mavlink_msg_vehicle_local_position_get_dead_reckoning(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  124);
}

/**
 * @brief Get field vxy_max from vehicle_local_position message
 *
 * @return [m/s] maximum horizontal speed
 */
static inline float mavlink_msg_vehicle_local_position_get_vxy_max(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  96);
}

/**
 * @brief Get field vz_max from vehicle_local_position message
 *
 * @return [m/s] maximum vertical speed
 */
static inline float mavlink_msg_vehicle_local_position_get_vz_max(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  100);
}

/**
 * @brief Get field hagl_min from vehicle_local_position message
 *
 * @return [m] minimum height above ground level
 */
static inline float mavlink_msg_vehicle_local_position_get_hagl_min(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  104);
}

/**
 * @brief Get field hagl_max from vehicle_local_position message
 *
 * @return [m] maximum height above ground level
 */
static inline float mavlink_msg_vehicle_local_position_get_hagl_max(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  108);
}

/**
 * @brief Decode a vehicle_local_position message into a struct
 *
 * @param msg The message to decode
 * @param vehicle_local_position C-struct to decode the message contents into
 */
static inline void mavlink_msg_vehicle_local_position_decode(const mavlink_message_t* msg, mavlink_vehicle_local_position_t* vehicle_local_position)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    vehicle_local_position->x = mavlink_msg_vehicle_local_position_get_x(msg);
    vehicle_local_position->y = mavlink_msg_vehicle_local_position_get_y(msg);
    vehicle_local_position->z = mavlink_msg_vehicle_local_position_get_z(msg);
    mavlink_msg_vehicle_local_position_get_delta_xy(msg, vehicle_local_position->delta_xy);
    vehicle_local_position->delta_z = mavlink_msg_vehicle_local_position_get_delta_z(msg);
    vehicle_local_position->vx = mavlink_msg_vehicle_local_position_get_vx(msg);
    vehicle_local_position->vy = mavlink_msg_vehicle_local_position_get_vy(msg);
    vehicle_local_position->vz = mavlink_msg_vehicle_local_position_get_vz(msg);
    vehicle_local_position->z_deriv = mavlink_msg_vehicle_local_position_get_z_deriv(msg);
    mavlink_msg_vehicle_local_position_get_delta_vxy(msg, vehicle_local_position->delta_vxy);
    vehicle_local_position->delta_vz = mavlink_msg_vehicle_local_position_get_delta_vz(msg);
    vehicle_local_position->ax = mavlink_msg_vehicle_local_position_get_ax(msg);
    vehicle_local_position->ay = mavlink_msg_vehicle_local_position_get_ay(msg);
    vehicle_local_position->az = mavlink_msg_vehicle_local_position_get_az(msg);
    vehicle_local_position->ref_lat = mavlink_msg_vehicle_local_position_get_ref_lat(msg);
    vehicle_local_position->ref_lon = mavlink_msg_vehicle_local_position_get_ref_lon(msg);
    vehicle_local_position->ref_alt = mavlink_msg_vehicle_local_position_get_ref_alt(msg);
    vehicle_local_position->dist_bottom = mavlink_msg_vehicle_local_position_get_dist_bottom(msg);
    vehicle_local_position->eph = mavlink_msg_vehicle_local_position_get_eph(msg);
    vehicle_local_position->epv = mavlink_msg_vehicle_local_position_get_epv(msg);
    vehicle_local_position->evh = mavlink_msg_vehicle_local_position_get_evh(msg);
    vehicle_local_position->evv = mavlink_msg_vehicle_local_position_get_evv(msg);
    vehicle_local_position->vxy_max = mavlink_msg_vehicle_local_position_get_vxy_max(msg);
    vehicle_local_position->vz_max = mavlink_msg_vehicle_local_position_get_vz_max(msg);
    vehicle_local_position->hagl_min = mavlink_msg_vehicle_local_position_get_hagl_min(msg);
    vehicle_local_position->hagl_max = mavlink_msg_vehicle_local_position_get_hagl_max(msg);
    vehicle_local_position->xy_valid = mavlink_msg_vehicle_local_position_get_xy_valid(msg);
    vehicle_local_position->z_valid = mavlink_msg_vehicle_local_position_get_z_valid(msg);
    vehicle_local_position->v_xy_valid = mavlink_msg_vehicle_local_position_get_v_xy_valid(msg);
    vehicle_local_position->v_z_valid = mavlink_msg_vehicle_local_position_get_v_z_valid(msg);
    vehicle_local_position->xy_reset_counter = mavlink_msg_vehicle_local_position_get_xy_reset_counter(msg);
    vehicle_local_position->z_reset_counter = mavlink_msg_vehicle_local_position_get_z_reset_counter(msg);
    vehicle_local_position->vxy_reset_counter = mavlink_msg_vehicle_local_position_get_vxy_reset_counter(msg);
    vehicle_local_position->vz_reset_counter = mavlink_msg_vehicle_local_position_get_vz_reset_counter(msg);
    vehicle_local_position->xy_global = mavlink_msg_vehicle_local_position_get_xy_global(msg);
    vehicle_local_position->z_global = mavlink_msg_vehicle_local_position_get_z_global(msg);
    vehicle_local_position->dist_bottom_valid = mavlink_msg_vehicle_local_position_get_dist_bottom_valid(msg);
    vehicle_local_position->dist_bottom_sensor_bitfield = mavlink_msg_vehicle_local_position_get_dist_bottom_sensor_bitfield(msg);
    vehicle_local_position->dead_reckoning = mavlink_msg_vehicle_local_position_get_dead_reckoning(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_VEHICLE_LOCAL_POSITION_LEN? msg->len : MAVLINK_MSG_ID_VEHICLE_LOCAL_POSITION_LEN;
        memset(vehicle_local_position, 0, MAVLINK_MSG_ID_VEHICLE_LOCAL_POSITION_LEN);
    memcpy(vehicle_local_position, _MAV_PAYLOAD(msg), len);
#endif
}
