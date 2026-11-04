#pragma once
// MESSAGE LEAF_GPS_PLAN_CHUNK PACKING

#define MAVLINK_MSG_ID_LEAF_GPS_PLAN_CHUNK 77072


typedef struct __mavlink_leaf_gps_plan_chunk_t {
 uint64_t boot_id; /*<  Process incarnation.*/
 uint64_t sample_time_us; /*<  Monotonic sample time, microseconds.*/
 uint64_t route_session; /*<  Route session.*/
 uint64_t plan_revision; /*<  Source plan revision.*/
 uint64_t segment_revision; /*<  Mission-manager segment when this window was captured.*/
 uint32_t transfer_id; /*<  Unique transfer ID within boot.*/
 int32_t lat_1e7[16]; /*<  Point latitudes.*/
 int32_t lon_1e7[16]; /*<  Point longitudes.*/
 float alt_m[16]; /*<  Point altitudes, metres.*/
 uint16_t total_points; /*<  Full source point count.*/
 uint16_t window_start; /*<  First source point in transmitted window.*/
 uint16_t window_count; /*<  Total points in this atomic window.*/
 uint16_t offset; /*<  Chunk offset within window.*/
 uint8_t count; /*<  Valid array entries, 1 to 16.*/
 uint8_t kind; /*<  0 accepted route, 1 scheduled continuation, 2 sampled leader prediction, 3 last trimmed source.*/
 uint8_t flags; /*<  Bit 0 full source included; bit 1 sampled approximation.*/
} mavlink_leaf_gps_plan_chunk_t;

#define MAVLINK_MSG_ID_LEAF_GPS_PLAN_CHUNK_LEN 247
#define MAVLINK_MSG_ID_LEAF_GPS_PLAN_CHUNK_MIN_LEN 247
#define MAVLINK_MSG_ID_77072_LEN 247
#define MAVLINK_MSG_ID_77072_MIN_LEN 247

#define MAVLINK_MSG_ID_LEAF_GPS_PLAN_CHUNK_CRC 168
#define MAVLINK_MSG_ID_77072_CRC 168

#define MAVLINK_MSG_LEAF_GPS_PLAN_CHUNK_FIELD_LAT_1E7_LEN 16
#define MAVLINK_MSG_LEAF_GPS_PLAN_CHUNK_FIELD_LON_1E7_LEN 16
#define MAVLINK_MSG_LEAF_GPS_PLAN_CHUNK_FIELD_ALT_M_LEN 16

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_LEAF_GPS_PLAN_CHUNK { \
    77072, \
    "LEAF_GPS_PLAN_CHUNK", \
    16, \
    {  { "boot_id", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_leaf_gps_plan_chunk_t, boot_id) }, \
         { "sample_time_us", NULL, MAVLINK_TYPE_UINT64_T, 0, 8, offsetof(mavlink_leaf_gps_plan_chunk_t, sample_time_us) }, \
         { "route_session", NULL, MAVLINK_TYPE_UINT64_T, 0, 16, offsetof(mavlink_leaf_gps_plan_chunk_t, route_session) }, \
         { "plan_revision", NULL, MAVLINK_TYPE_UINT64_T, 0, 24, offsetof(mavlink_leaf_gps_plan_chunk_t, plan_revision) }, \
         { "segment_revision", NULL, MAVLINK_TYPE_UINT64_T, 0, 32, offsetof(mavlink_leaf_gps_plan_chunk_t, segment_revision) }, \
         { "transfer_id", NULL, MAVLINK_TYPE_UINT32_T, 0, 40, offsetof(mavlink_leaf_gps_plan_chunk_t, transfer_id) }, \
         { "total_points", NULL, MAVLINK_TYPE_UINT16_T, 0, 236, offsetof(mavlink_leaf_gps_plan_chunk_t, total_points) }, \
         { "window_start", NULL, MAVLINK_TYPE_UINT16_T, 0, 238, offsetof(mavlink_leaf_gps_plan_chunk_t, window_start) }, \
         { "window_count", NULL, MAVLINK_TYPE_UINT16_T, 0, 240, offsetof(mavlink_leaf_gps_plan_chunk_t, window_count) }, \
         { "offset", NULL, MAVLINK_TYPE_UINT16_T, 0, 242, offsetof(mavlink_leaf_gps_plan_chunk_t, offset) }, \
         { "count", NULL, MAVLINK_TYPE_UINT8_T, 0, 244, offsetof(mavlink_leaf_gps_plan_chunk_t, count) }, \
         { "kind", NULL, MAVLINK_TYPE_UINT8_T, 0, 245, offsetof(mavlink_leaf_gps_plan_chunk_t, kind) }, \
         { "flags", NULL, MAVLINK_TYPE_UINT8_T, 0, 246, offsetof(mavlink_leaf_gps_plan_chunk_t, flags) }, \
         { "lat_1e7", NULL, MAVLINK_TYPE_INT32_T, 16, 44, offsetof(mavlink_leaf_gps_plan_chunk_t, lat_1e7) }, \
         { "lon_1e7", NULL, MAVLINK_TYPE_INT32_T, 16, 108, offsetof(mavlink_leaf_gps_plan_chunk_t, lon_1e7) }, \
         { "alt_m", NULL, MAVLINK_TYPE_FLOAT, 16, 172, offsetof(mavlink_leaf_gps_plan_chunk_t, alt_m) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_LEAF_GPS_PLAN_CHUNK { \
    "LEAF_GPS_PLAN_CHUNK", \
    16, \
    {  { "boot_id", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_leaf_gps_plan_chunk_t, boot_id) }, \
         { "sample_time_us", NULL, MAVLINK_TYPE_UINT64_T, 0, 8, offsetof(mavlink_leaf_gps_plan_chunk_t, sample_time_us) }, \
         { "route_session", NULL, MAVLINK_TYPE_UINT64_T, 0, 16, offsetof(mavlink_leaf_gps_plan_chunk_t, route_session) }, \
         { "plan_revision", NULL, MAVLINK_TYPE_UINT64_T, 0, 24, offsetof(mavlink_leaf_gps_plan_chunk_t, plan_revision) }, \
         { "segment_revision", NULL, MAVLINK_TYPE_UINT64_T, 0, 32, offsetof(mavlink_leaf_gps_plan_chunk_t, segment_revision) }, \
         { "transfer_id", NULL, MAVLINK_TYPE_UINT32_T, 0, 40, offsetof(mavlink_leaf_gps_plan_chunk_t, transfer_id) }, \
         { "total_points", NULL, MAVLINK_TYPE_UINT16_T, 0, 236, offsetof(mavlink_leaf_gps_plan_chunk_t, total_points) }, \
         { "window_start", NULL, MAVLINK_TYPE_UINT16_T, 0, 238, offsetof(mavlink_leaf_gps_plan_chunk_t, window_start) }, \
         { "window_count", NULL, MAVLINK_TYPE_UINT16_T, 0, 240, offsetof(mavlink_leaf_gps_plan_chunk_t, window_count) }, \
         { "offset", NULL, MAVLINK_TYPE_UINT16_T, 0, 242, offsetof(mavlink_leaf_gps_plan_chunk_t, offset) }, \
         { "count", NULL, MAVLINK_TYPE_UINT8_T, 0, 244, offsetof(mavlink_leaf_gps_plan_chunk_t, count) }, \
         { "kind", NULL, MAVLINK_TYPE_UINT8_T, 0, 245, offsetof(mavlink_leaf_gps_plan_chunk_t, kind) }, \
         { "flags", NULL, MAVLINK_TYPE_UINT8_T, 0, 246, offsetof(mavlink_leaf_gps_plan_chunk_t, flags) }, \
         { "lat_1e7", NULL, MAVLINK_TYPE_INT32_T, 16, 44, offsetof(mavlink_leaf_gps_plan_chunk_t, lat_1e7) }, \
         { "lon_1e7", NULL, MAVLINK_TYPE_INT32_T, 16, 108, offsetof(mavlink_leaf_gps_plan_chunk_t, lon_1e7) }, \
         { "alt_m", NULL, MAVLINK_TYPE_FLOAT, 16, 172, offsetof(mavlink_leaf_gps_plan_chunk_t, alt_m) }, \
         } \
}
#endif

/**
 * @brief Pack a leaf_gps_plan_chunk message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param boot_id  Process incarnation.
 * @param sample_time_us  Monotonic sample time, microseconds.
 * @param route_session  Route session.
 * @param plan_revision  Source plan revision.
 * @param segment_revision  Mission-manager segment when this window was captured.
 * @param transfer_id  Unique transfer ID within boot.
 * @param total_points  Full source point count.
 * @param window_start  First source point in transmitted window.
 * @param window_count  Total points in this atomic window.
 * @param offset  Chunk offset within window.
 * @param count  Valid array entries, 1 to 16.
 * @param kind  0 accepted route, 1 scheduled continuation, 2 sampled leader prediction, 3 last trimmed source.
 * @param flags  Bit 0 full source included; bit 1 sampled approximation.
 * @param lat_1e7  Point latitudes.
 * @param lon_1e7  Point longitudes.
 * @param alt_m  Point altitudes, metres.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_gps_plan_chunk_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t boot_id, uint64_t sample_time_us, uint64_t route_session, uint64_t plan_revision, uint64_t segment_revision, uint32_t transfer_id, uint16_t total_points, uint16_t window_start, uint16_t window_count, uint16_t offset, uint8_t count, uint8_t kind, uint8_t flags, const int32_t *lat_1e7, const int32_t *lon_1e7, const float *alt_m)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_GPS_PLAN_CHUNK_LEN];
    _mav_put_uint64_t(buf, 0, boot_id);
    _mav_put_uint64_t(buf, 8, sample_time_us);
    _mav_put_uint64_t(buf, 16, route_session);
    _mav_put_uint64_t(buf, 24, plan_revision);
    _mav_put_uint64_t(buf, 32, segment_revision);
    _mav_put_uint32_t(buf, 40, transfer_id);
    _mav_put_uint16_t(buf, 236, total_points);
    _mav_put_uint16_t(buf, 238, window_start);
    _mav_put_uint16_t(buf, 240, window_count);
    _mav_put_uint16_t(buf, 242, offset);
    _mav_put_uint8_t(buf, 244, count);
    _mav_put_uint8_t(buf, 245, kind);
    _mav_put_uint8_t(buf, 246, flags);
    _mav_put_int32_t_array(buf, 44, lat_1e7, 16);
    _mav_put_int32_t_array(buf, 108, lon_1e7, 16);
    _mav_put_float_array(buf, 172, alt_m, 16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_GPS_PLAN_CHUNK_LEN);
#else
    mavlink_leaf_gps_plan_chunk_t packet;
    packet.boot_id = boot_id;
    packet.sample_time_us = sample_time_us;
    packet.route_session = route_session;
    packet.plan_revision = plan_revision;
    packet.segment_revision = segment_revision;
    packet.transfer_id = transfer_id;
    packet.total_points = total_points;
    packet.window_start = window_start;
    packet.window_count = window_count;
    packet.offset = offset;
    packet.count = count;
    packet.kind = kind;
    packet.flags = flags;
    mav_array_assign_int32_t(packet.lat_1e7, lat_1e7, 16);
    mav_array_assign_int32_t(packet.lon_1e7, lon_1e7, 16);
    mav_array_assign_float(packet.alt_m, alt_m, 16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_GPS_PLAN_CHUNK_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_GPS_PLAN_CHUNK;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_LEAF_GPS_PLAN_CHUNK_MIN_LEN, MAVLINK_MSG_ID_LEAF_GPS_PLAN_CHUNK_LEN, MAVLINK_MSG_ID_LEAF_GPS_PLAN_CHUNK_CRC);
}

/**
 * @brief Pack a leaf_gps_plan_chunk message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param boot_id  Process incarnation.
 * @param sample_time_us  Monotonic sample time, microseconds.
 * @param route_session  Route session.
 * @param plan_revision  Source plan revision.
 * @param segment_revision  Mission-manager segment when this window was captured.
 * @param transfer_id  Unique transfer ID within boot.
 * @param total_points  Full source point count.
 * @param window_start  First source point in transmitted window.
 * @param window_count  Total points in this atomic window.
 * @param offset  Chunk offset within window.
 * @param count  Valid array entries, 1 to 16.
 * @param kind  0 accepted route, 1 scheduled continuation, 2 sampled leader prediction, 3 last trimmed source.
 * @param flags  Bit 0 full source included; bit 1 sampled approximation.
 * @param lat_1e7  Point latitudes.
 * @param lon_1e7  Point longitudes.
 * @param alt_m  Point altitudes, metres.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_gps_plan_chunk_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint64_t boot_id, uint64_t sample_time_us, uint64_t route_session, uint64_t plan_revision, uint64_t segment_revision, uint32_t transfer_id, uint16_t total_points, uint16_t window_start, uint16_t window_count, uint16_t offset, uint8_t count, uint8_t kind, uint8_t flags, const int32_t *lat_1e7, const int32_t *lon_1e7, const float *alt_m)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_GPS_PLAN_CHUNK_LEN];
    _mav_put_uint64_t(buf, 0, boot_id);
    _mav_put_uint64_t(buf, 8, sample_time_us);
    _mav_put_uint64_t(buf, 16, route_session);
    _mav_put_uint64_t(buf, 24, plan_revision);
    _mav_put_uint64_t(buf, 32, segment_revision);
    _mav_put_uint32_t(buf, 40, transfer_id);
    _mav_put_uint16_t(buf, 236, total_points);
    _mav_put_uint16_t(buf, 238, window_start);
    _mav_put_uint16_t(buf, 240, window_count);
    _mav_put_uint16_t(buf, 242, offset);
    _mav_put_uint8_t(buf, 244, count);
    _mav_put_uint8_t(buf, 245, kind);
    _mav_put_uint8_t(buf, 246, flags);
    _mav_put_int32_t_array(buf, 44, lat_1e7, 16);
    _mav_put_int32_t_array(buf, 108, lon_1e7, 16);
    _mav_put_float_array(buf, 172, alt_m, 16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_GPS_PLAN_CHUNK_LEN);
#else
    mavlink_leaf_gps_plan_chunk_t packet;
    packet.boot_id = boot_id;
    packet.sample_time_us = sample_time_us;
    packet.route_session = route_session;
    packet.plan_revision = plan_revision;
    packet.segment_revision = segment_revision;
    packet.transfer_id = transfer_id;
    packet.total_points = total_points;
    packet.window_start = window_start;
    packet.window_count = window_count;
    packet.offset = offset;
    packet.count = count;
    packet.kind = kind;
    packet.flags = flags;
    mav_array_memcpy(packet.lat_1e7, lat_1e7, sizeof(int32_t)*16);
    mav_array_memcpy(packet.lon_1e7, lon_1e7, sizeof(int32_t)*16);
    mav_array_memcpy(packet.alt_m, alt_m, sizeof(float)*16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_GPS_PLAN_CHUNK_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_GPS_PLAN_CHUNK;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_GPS_PLAN_CHUNK_MIN_LEN, MAVLINK_MSG_ID_LEAF_GPS_PLAN_CHUNK_LEN, MAVLINK_MSG_ID_LEAF_GPS_PLAN_CHUNK_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_GPS_PLAN_CHUNK_MIN_LEN, MAVLINK_MSG_ID_LEAF_GPS_PLAN_CHUNK_LEN);
#endif
}

/**
 * @brief Pack a leaf_gps_plan_chunk message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param boot_id  Process incarnation.
 * @param sample_time_us  Monotonic sample time, microseconds.
 * @param route_session  Route session.
 * @param plan_revision  Source plan revision.
 * @param segment_revision  Mission-manager segment when this window was captured.
 * @param transfer_id  Unique transfer ID within boot.
 * @param total_points  Full source point count.
 * @param window_start  First source point in transmitted window.
 * @param window_count  Total points in this atomic window.
 * @param offset  Chunk offset within window.
 * @param count  Valid array entries, 1 to 16.
 * @param kind  0 accepted route, 1 scheduled continuation, 2 sampled leader prediction, 3 last trimmed source.
 * @param flags  Bit 0 full source included; bit 1 sampled approximation.
 * @param lat_1e7  Point latitudes.
 * @param lon_1e7  Point longitudes.
 * @param alt_m  Point altitudes, metres.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_gps_plan_chunk_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t boot_id,uint64_t sample_time_us,uint64_t route_session,uint64_t plan_revision,uint64_t segment_revision,uint32_t transfer_id,uint16_t total_points,uint16_t window_start,uint16_t window_count,uint16_t offset,uint8_t count,uint8_t kind,uint8_t flags,const int32_t *lat_1e7,const int32_t *lon_1e7,const float *alt_m)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_GPS_PLAN_CHUNK_LEN];
    _mav_put_uint64_t(buf, 0, boot_id);
    _mav_put_uint64_t(buf, 8, sample_time_us);
    _mav_put_uint64_t(buf, 16, route_session);
    _mav_put_uint64_t(buf, 24, plan_revision);
    _mav_put_uint64_t(buf, 32, segment_revision);
    _mav_put_uint32_t(buf, 40, transfer_id);
    _mav_put_uint16_t(buf, 236, total_points);
    _mav_put_uint16_t(buf, 238, window_start);
    _mav_put_uint16_t(buf, 240, window_count);
    _mav_put_uint16_t(buf, 242, offset);
    _mav_put_uint8_t(buf, 244, count);
    _mav_put_uint8_t(buf, 245, kind);
    _mav_put_uint8_t(buf, 246, flags);
    _mav_put_int32_t_array(buf, 44, lat_1e7, 16);
    _mav_put_int32_t_array(buf, 108, lon_1e7, 16);
    _mav_put_float_array(buf, 172, alt_m, 16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_GPS_PLAN_CHUNK_LEN);
#else
    mavlink_leaf_gps_plan_chunk_t packet;
    packet.boot_id = boot_id;
    packet.sample_time_us = sample_time_us;
    packet.route_session = route_session;
    packet.plan_revision = plan_revision;
    packet.segment_revision = segment_revision;
    packet.transfer_id = transfer_id;
    packet.total_points = total_points;
    packet.window_start = window_start;
    packet.window_count = window_count;
    packet.offset = offset;
    packet.count = count;
    packet.kind = kind;
    packet.flags = flags;
    mav_array_assign_int32_t(packet.lat_1e7, lat_1e7, 16);
    mav_array_assign_int32_t(packet.lon_1e7, lon_1e7, 16);
    mav_array_assign_float(packet.alt_m, alt_m, 16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_GPS_PLAN_CHUNK_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_GPS_PLAN_CHUNK;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_LEAF_GPS_PLAN_CHUNK_MIN_LEN, MAVLINK_MSG_ID_LEAF_GPS_PLAN_CHUNK_LEN, MAVLINK_MSG_ID_LEAF_GPS_PLAN_CHUNK_CRC);
}

/**
 * @brief Encode a leaf_gps_plan_chunk struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param leaf_gps_plan_chunk C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_gps_plan_chunk_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_leaf_gps_plan_chunk_t* leaf_gps_plan_chunk)
{
    return mavlink_msg_leaf_gps_plan_chunk_pack(system_id, component_id, msg, leaf_gps_plan_chunk->boot_id, leaf_gps_plan_chunk->sample_time_us, leaf_gps_plan_chunk->route_session, leaf_gps_plan_chunk->plan_revision, leaf_gps_plan_chunk->segment_revision, leaf_gps_plan_chunk->transfer_id, leaf_gps_plan_chunk->total_points, leaf_gps_plan_chunk->window_start, leaf_gps_plan_chunk->window_count, leaf_gps_plan_chunk->offset, leaf_gps_plan_chunk->count, leaf_gps_plan_chunk->kind, leaf_gps_plan_chunk->flags, leaf_gps_plan_chunk->lat_1e7, leaf_gps_plan_chunk->lon_1e7, leaf_gps_plan_chunk->alt_m);
}

/**
 * @brief Encode a leaf_gps_plan_chunk struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param leaf_gps_plan_chunk C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_gps_plan_chunk_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_leaf_gps_plan_chunk_t* leaf_gps_plan_chunk)
{
    return mavlink_msg_leaf_gps_plan_chunk_pack_chan(system_id, component_id, chan, msg, leaf_gps_plan_chunk->boot_id, leaf_gps_plan_chunk->sample_time_us, leaf_gps_plan_chunk->route_session, leaf_gps_plan_chunk->plan_revision, leaf_gps_plan_chunk->segment_revision, leaf_gps_plan_chunk->transfer_id, leaf_gps_plan_chunk->total_points, leaf_gps_plan_chunk->window_start, leaf_gps_plan_chunk->window_count, leaf_gps_plan_chunk->offset, leaf_gps_plan_chunk->count, leaf_gps_plan_chunk->kind, leaf_gps_plan_chunk->flags, leaf_gps_plan_chunk->lat_1e7, leaf_gps_plan_chunk->lon_1e7, leaf_gps_plan_chunk->alt_m);
}

/**
 * @brief Encode a leaf_gps_plan_chunk struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param leaf_gps_plan_chunk C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_gps_plan_chunk_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_leaf_gps_plan_chunk_t* leaf_gps_plan_chunk)
{
    return mavlink_msg_leaf_gps_plan_chunk_pack_status(system_id, component_id, _status, msg,  leaf_gps_plan_chunk->boot_id, leaf_gps_plan_chunk->sample_time_us, leaf_gps_plan_chunk->route_session, leaf_gps_plan_chunk->plan_revision, leaf_gps_plan_chunk->segment_revision, leaf_gps_plan_chunk->transfer_id, leaf_gps_plan_chunk->total_points, leaf_gps_plan_chunk->window_start, leaf_gps_plan_chunk->window_count, leaf_gps_plan_chunk->offset, leaf_gps_plan_chunk->count, leaf_gps_plan_chunk->kind, leaf_gps_plan_chunk->flags, leaf_gps_plan_chunk->lat_1e7, leaf_gps_plan_chunk->lon_1e7, leaf_gps_plan_chunk->alt_m);
}

/**
 * @brief Send a leaf_gps_plan_chunk message
 * @param chan MAVLink channel to send the message
 *
 * @param boot_id  Process incarnation.
 * @param sample_time_us  Monotonic sample time, microseconds.
 * @param route_session  Route session.
 * @param plan_revision  Source plan revision.
 * @param segment_revision  Mission-manager segment when this window was captured.
 * @param transfer_id  Unique transfer ID within boot.
 * @param total_points  Full source point count.
 * @param window_start  First source point in transmitted window.
 * @param window_count  Total points in this atomic window.
 * @param offset  Chunk offset within window.
 * @param count  Valid array entries, 1 to 16.
 * @param kind  0 accepted route, 1 scheduled continuation, 2 sampled leader prediction, 3 last trimmed source.
 * @param flags  Bit 0 full source included; bit 1 sampled approximation.
 * @param lat_1e7  Point latitudes.
 * @param lon_1e7  Point longitudes.
 * @param alt_m  Point altitudes, metres.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_leaf_gps_plan_chunk_send(mavlink_channel_t chan, uint64_t boot_id, uint64_t sample_time_us, uint64_t route_session, uint64_t plan_revision, uint64_t segment_revision, uint32_t transfer_id, uint16_t total_points, uint16_t window_start, uint16_t window_count, uint16_t offset, uint8_t count, uint8_t kind, uint8_t flags, const int32_t *lat_1e7, const int32_t *lon_1e7, const float *alt_m)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_GPS_PLAN_CHUNK_LEN];
    _mav_put_uint64_t(buf, 0, boot_id);
    _mav_put_uint64_t(buf, 8, sample_time_us);
    _mav_put_uint64_t(buf, 16, route_session);
    _mav_put_uint64_t(buf, 24, plan_revision);
    _mav_put_uint64_t(buf, 32, segment_revision);
    _mav_put_uint32_t(buf, 40, transfer_id);
    _mav_put_uint16_t(buf, 236, total_points);
    _mav_put_uint16_t(buf, 238, window_start);
    _mav_put_uint16_t(buf, 240, window_count);
    _mav_put_uint16_t(buf, 242, offset);
    _mav_put_uint8_t(buf, 244, count);
    _mav_put_uint8_t(buf, 245, kind);
    _mav_put_uint8_t(buf, 246, flags);
    _mav_put_int32_t_array(buf, 44, lat_1e7, 16);
    _mav_put_int32_t_array(buf, 108, lon_1e7, 16);
    _mav_put_float_array(buf, 172, alt_m, 16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_GPS_PLAN_CHUNK, buf, MAVLINK_MSG_ID_LEAF_GPS_PLAN_CHUNK_MIN_LEN, MAVLINK_MSG_ID_LEAF_GPS_PLAN_CHUNK_LEN, MAVLINK_MSG_ID_LEAF_GPS_PLAN_CHUNK_CRC);
#else
    mavlink_leaf_gps_plan_chunk_t packet;
    packet.boot_id = boot_id;
    packet.sample_time_us = sample_time_us;
    packet.route_session = route_session;
    packet.plan_revision = plan_revision;
    packet.segment_revision = segment_revision;
    packet.transfer_id = transfer_id;
    packet.total_points = total_points;
    packet.window_start = window_start;
    packet.window_count = window_count;
    packet.offset = offset;
    packet.count = count;
    packet.kind = kind;
    packet.flags = flags;
    mav_array_assign_int32_t(packet.lat_1e7, lat_1e7, 16);
    mav_array_assign_int32_t(packet.lon_1e7, lon_1e7, 16);
    mav_array_assign_float(packet.alt_m, alt_m, 16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_GPS_PLAN_CHUNK, (const char *)&packet, MAVLINK_MSG_ID_LEAF_GPS_PLAN_CHUNK_MIN_LEN, MAVLINK_MSG_ID_LEAF_GPS_PLAN_CHUNK_LEN, MAVLINK_MSG_ID_LEAF_GPS_PLAN_CHUNK_CRC);
#endif
}

/**
 * @brief Send a leaf_gps_plan_chunk message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_leaf_gps_plan_chunk_send_struct(mavlink_channel_t chan, const mavlink_leaf_gps_plan_chunk_t* leaf_gps_plan_chunk)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_leaf_gps_plan_chunk_send(chan, leaf_gps_plan_chunk->boot_id, leaf_gps_plan_chunk->sample_time_us, leaf_gps_plan_chunk->route_session, leaf_gps_plan_chunk->plan_revision, leaf_gps_plan_chunk->segment_revision, leaf_gps_plan_chunk->transfer_id, leaf_gps_plan_chunk->total_points, leaf_gps_plan_chunk->window_start, leaf_gps_plan_chunk->window_count, leaf_gps_plan_chunk->offset, leaf_gps_plan_chunk->count, leaf_gps_plan_chunk->kind, leaf_gps_plan_chunk->flags, leaf_gps_plan_chunk->lat_1e7, leaf_gps_plan_chunk->lon_1e7, leaf_gps_plan_chunk->alt_m);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_GPS_PLAN_CHUNK, (const char *)leaf_gps_plan_chunk, MAVLINK_MSG_ID_LEAF_GPS_PLAN_CHUNK_MIN_LEN, MAVLINK_MSG_ID_LEAF_GPS_PLAN_CHUNK_LEN, MAVLINK_MSG_ID_LEAF_GPS_PLAN_CHUNK_CRC);
#endif
}

#if MAVLINK_MSG_ID_LEAF_GPS_PLAN_CHUNK_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_leaf_gps_plan_chunk_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t boot_id, uint64_t sample_time_us, uint64_t route_session, uint64_t plan_revision, uint64_t segment_revision, uint32_t transfer_id, uint16_t total_points, uint16_t window_start, uint16_t window_count, uint16_t offset, uint8_t count, uint8_t kind, uint8_t flags, const int32_t *lat_1e7, const int32_t *lon_1e7, const float *alt_m)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, boot_id);
    _mav_put_uint64_t(buf, 8, sample_time_us);
    _mav_put_uint64_t(buf, 16, route_session);
    _mav_put_uint64_t(buf, 24, plan_revision);
    _mav_put_uint64_t(buf, 32, segment_revision);
    _mav_put_uint32_t(buf, 40, transfer_id);
    _mav_put_uint16_t(buf, 236, total_points);
    _mav_put_uint16_t(buf, 238, window_start);
    _mav_put_uint16_t(buf, 240, window_count);
    _mav_put_uint16_t(buf, 242, offset);
    _mav_put_uint8_t(buf, 244, count);
    _mav_put_uint8_t(buf, 245, kind);
    _mav_put_uint8_t(buf, 246, flags);
    _mav_put_int32_t_array(buf, 44, lat_1e7, 16);
    _mav_put_int32_t_array(buf, 108, lon_1e7, 16);
    _mav_put_float_array(buf, 172, alt_m, 16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_GPS_PLAN_CHUNK, buf, MAVLINK_MSG_ID_LEAF_GPS_PLAN_CHUNK_MIN_LEN, MAVLINK_MSG_ID_LEAF_GPS_PLAN_CHUNK_LEN, MAVLINK_MSG_ID_LEAF_GPS_PLAN_CHUNK_CRC);
#else
    mavlink_leaf_gps_plan_chunk_t *packet = (mavlink_leaf_gps_plan_chunk_t *)msgbuf;
    packet->boot_id = boot_id;
    packet->sample_time_us = sample_time_us;
    packet->route_session = route_session;
    packet->plan_revision = plan_revision;
    packet->segment_revision = segment_revision;
    packet->transfer_id = transfer_id;
    packet->total_points = total_points;
    packet->window_start = window_start;
    packet->window_count = window_count;
    packet->offset = offset;
    packet->count = count;
    packet->kind = kind;
    packet->flags = flags;
    mav_array_assign_int32_t(packet->lat_1e7, lat_1e7, 16);
    mav_array_assign_int32_t(packet->lon_1e7, lon_1e7, 16);
    mav_array_assign_float(packet->alt_m, alt_m, 16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_GPS_PLAN_CHUNK, (const char *)packet, MAVLINK_MSG_ID_LEAF_GPS_PLAN_CHUNK_MIN_LEN, MAVLINK_MSG_ID_LEAF_GPS_PLAN_CHUNK_LEN, MAVLINK_MSG_ID_LEAF_GPS_PLAN_CHUNK_CRC);
#endif
}
#endif

#endif

// MESSAGE LEAF_GPS_PLAN_CHUNK UNPACKING


/**
 * @brief Get field boot_id from leaf_gps_plan_chunk message
 *
 * @return  Process incarnation.
 */
static inline uint64_t mavlink_msg_leaf_gps_plan_chunk_get_boot_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field sample_time_us from leaf_gps_plan_chunk message
 *
 * @return  Monotonic sample time, microseconds.
 */
static inline uint64_t mavlink_msg_leaf_gps_plan_chunk_get_sample_time_us(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  8);
}

/**
 * @brief Get field route_session from leaf_gps_plan_chunk message
 *
 * @return  Route session.
 */
static inline uint64_t mavlink_msg_leaf_gps_plan_chunk_get_route_session(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  16);
}

/**
 * @brief Get field plan_revision from leaf_gps_plan_chunk message
 *
 * @return  Source plan revision.
 */
static inline uint64_t mavlink_msg_leaf_gps_plan_chunk_get_plan_revision(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  24);
}

/**
 * @brief Get field segment_revision from leaf_gps_plan_chunk message
 *
 * @return  Mission-manager segment when this window was captured.
 */
static inline uint64_t mavlink_msg_leaf_gps_plan_chunk_get_segment_revision(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  32);
}

/**
 * @brief Get field transfer_id from leaf_gps_plan_chunk message
 *
 * @return  Unique transfer ID within boot.
 */
static inline uint32_t mavlink_msg_leaf_gps_plan_chunk_get_transfer_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  40);
}

/**
 * @brief Get field total_points from leaf_gps_plan_chunk message
 *
 * @return  Full source point count.
 */
static inline uint16_t mavlink_msg_leaf_gps_plan_chunk_get_total_points(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  236);
}

/**
 * @brief Get field window_start from leaf_gps_plan_chunk message
 *
 * @return  First source point in transmitted window.
 */
static inline uint16_t mavlink_msg_leaf_gps_plan_chunk_get_window_start(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  238);
}

/**
 * @brief Get field window_count from leaf_gps_plan_chunk message
 *
 * @return  Total points in this atomic window.
 */
static inline uint16_t mavlink_msg_leaf_gps_plan_chunk_get_window_count(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  240);
}

/**
 * @brief Get field offset from leaf_gps_plan_chunk message
 *
 * @return  Chunk offset within window.
 */
static inline uint16_t mavlink_msg_leaf_gps_plan_chunk_get_offset(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  242);
}

/**
 * @brief Get field count from leaf_gps_plan_chunk message
 *
 * @return  Valid array entries, 1 to 16.
 */
static inline uint8_t mavlink_msg_leaf_gps_plan_chunk_get_count(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  244);
}

/**
 * @brief Get field kind from leaf_gps_plan_chunk message
 *
 * @return  0 accepted route, 1 scheduled continuation, 2 sampled leader prediction, 3 last trimmed source.
 */
static inline uint8_t mavlink_msg_leaf_gps_plan_chunk_get_kind(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  245);
}

/**
 * @brief Get field flags from leaf_gps_plan_chunk message
 *
 * @return  Bit 0 full source included; bit 1 sampled approximation.
 */
static inline uint8_t mavlink_msg_leaf_gps_plan_chunk_get_flags(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  246);
}

/**
 * @brief Get field lat_1e7 from leaf_gps_plan_chunk message
 *
 * @return  Point latitudes.
 */
static inline uint16_t mavlink_msg_leaf_gps_plan_chunk_get_lat_1e7(const mavlink_message_t* msg, int32_t *lat_1e7)
{
    return _MAV_RETURN_int32_t_array(msg, lat_1e7, 16,  44);
}

/**
 * @brief Get field lon_1e7 from leaf_gps_plan_chunk message
 *
 * @return  Point longitudes.
 */
static inline uint16_t mavlink_msg_leaf_gps_plan_chunk_get_lon_1e7(const mavlink_message_t* msg, int32_t *lon_1e7)
{
    return _MAV_RETURN_int32_t_array(msg, lon_1e7, 16,  108);
}

/**
 * @brief Get field alt_m from leaf_gps_plan_chunk message
 *
 * @return  Point altitudes, metres.
 */
static inline uint16_t mavlink_msg_leaf_gps_plan_chunk_get_alt_m(const mavlink_message_t* msg, float *alt_m)
{
    return _MAV_RETURN_float_array(msg, alt_m, 16,  172);
}

/**
 * @brief Decode a leaf_gps_plan_chunk message into a struct
 *
 * @param msg The message to decode
 * @param leaf_gps_plan_chunk C-struct to decode the message contents into
 */
static inline void mavlink_msg_leaf_gps_plan_chunk_decode(const mavlink_message_t* msg, mavlink_leaf_gps_plan_chunk_t* leaf_gps_plan_chunk)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    leaf_gps_plan_chunk->boot_id = mavlink_msg_leaf_gps_plan_chunk_get_boot_id(msg);
    leaf_gps_plan_chunk->sample_time_us = mavlink_msg_leaf_gps_plan_chunk_get_sample_time_us(msg);
    leaf_gps_plan_chunk->route_session = mavlink_msg_leaf_gps_plan_chunk_get_route_session(msg);
    leaf_gps_plan_chunk->plan_revision = mavlink_msg_leaf_gps_plan_chunk_get_plan_revision(msg);
    leaf_gps_plan_chunk->segment_revision = mavlink_msg_leaf_gps_plan_chunk_get_segment_revision(msg);
    leaf_gps_plan_chunk->transfer_id = mavlink_msg_leaf_gps_plan_chunk_get_transfer_id(msg);
    mavlink_msg_leaf_gps_plan_chunk_get_lat_1e7(msg, leaf_gps_plan_chunk->lat_1e7);
    mavlink_msg_leaf_gps_plan_chunk_get_lon_1e7(msg, leaf_gps_plan_chunk->lon_1e7);
    mavlink_msg_leaf_gps_plan_chunk_get_alt_m(msg, leaf_gps_plan_chunk->alt_m);
    leaf_gps_plan_chunk->total_points = mavlink_msg_leaf_gps_plan_chunk_get_total_points(msg);
    leaf_gps_plan_chunk->window_start = mavlink_msg_leaf_gps_plan_chunk_get_window_start(msg);
    leaf_gps_plan_chunk->window_count = mavlink_msg_leaf_gps_plan_chunk_get_window_count(msg);
    leaf_gps_plan_chunk->offset = mavlink_msg_leaf_gps_plan_chunk_get_offset(msg);
    leaf_gps_plan_chunk->count = mavlink_msg_leaf_gps_plan_chunk_get_count(msg);
    leaf_gps_plan_chunk->kind = mavlink_msg_leaf_gps_plan_chunk_get_kind(msg);
    leaf_gps_plan_chunk->flags = mavlink_msg_leaf_gps_plan_chunk_get_flags(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_LEAF_GPS_PLAN_CHUNK_LEN? msg->len : MAVLINK_MSG_ID_LEAF_GPS_PLAN_CHUNK_LEN;
        memset(leaf_gps_plan_chunk, 0, MAVLINK_MSG_ID_LEAF_GPS_PLAN_CHUNK_LEN);
    memcpy(leaf_gps_plan_chunk, _MAV_PAYLOAD(msg), len);
#endif
}
