#pragma once
// MESSAGE LEAF_GPS_VIEW_STATUS PACKING

#define MAVLINK_MSG_ID_LEAF_GPS_VIEW_STATUS 77068


typedef struct __mavlink_leaf_gps_view_status_t {
 uint64_t boot_id; /*<  Process incarnation.*/
 uint64_t sample_time_us; /*<  Monotonic sample time, microseconds.*/
 uint32_t viewer_id; /*<  Request viewer, zero for periodic status.*/
 uint32_t budget_bytes_s; /*<  Maximum framed bytes per second, signing allowance included.*/
 float guidance_rate_hz; /*<  Maximum guidance rate.*/
 float status_rate_hz; /*<  Maximum mission status rate.*/
 float diagnostics_rate_hz; /*<  Maximum planner diagnostic rate.*/
 uint16_t lease_remaining_s; /*<  Effective remaining lease.*/
 uint8_t profile; /*<  Effective stream profile.*/
 uint8_t result; /*<  0 accepted, 1 unsupported profile, 2 viewer capacity, 3 transfer unavailable.*/
} mavlink_leaf_gps_view_status_t;

#define MAVLINK_MSG_ID_LEAF_GPS_VIEW_STATUS_LEN 40
#define MAVLINK_MSG_ID_LEAF_GPS_VIEW_STATUS_MIN_LEN 40
#define MAVLINK_MSG_ID_77068_LEN 40
#define MAVLINK_MSG_ID_77068_MIN_LEN 40

#define MAVLINK_MSG_ID_LEAF_GPS_VIEW_STATUS_CRC 26
#define MAVLINK_MSG_ID_77068_CRC 26



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_LEAF_GPS_VIEW_STATUS { \
    77068, \
    "LEAF_GPS_VIEW_STATUS", \
    10, \
    {  { "boot_id", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_leaf_gps_view_status_t, boot_id) }, \
         { "sample_time_us", NULL, MAVLINK_TYPE_UINT64_T, 0, 8, offsetof(mavlink_leaf_gps_view_status_t, sample_time_us) }, \
         { "viewer_id", NULL, MAVLINK_TYPE_UINT32_T, 0, 16, offsetof(mavlink_leaf_gps_view_status_t, viewer_id) }, \
         { "profile", NULL, MAVLINK_TYPE_UINT8_T, 0, 38, offsetof(mavlink_leaf_gps_view_status_t, profile) }, \
         { "lease_remaining_s", NULL, MAVLINK_TYPE_UINT16_T, 0, 36, offsetof(mavlink_leaf_gps_view_status_t, lease_remaining_s) }, \
         { "budget_bytes_s", NULL, MAVLINK_TYPE_UINT32_T, 0, 20, offsetof(mavlink_leaf_gps_view_status_t, budget_bytes_s) }, \
         { "guidance_rate_hz", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_leaf_gps_view_status_t, guidance_rate_hz) }, \
         { "status_rate_hz", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_leaf_gps_view_status_t, status_rate_hz) }, \
         { "diagnostics_rate_hz", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_leaf_gps_view_status_t, diagnostics_rate_hz) }, \
         { "result", NULL, MAVLINK_TYPE_UINT8_T, 0, 39, offsetof(mavlink_leaf_gps_view_status_t, result) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_LEAF_GPS_VIEW_STATUS { \
    "LEAF_GPS_VIEW_STATUS", \
    10, \
    {  { "boot_id", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_leaf_gps_view_status_t, boot_id) }, \
         { "sample_time_us", NULL, MAVLINK_TYPE_UINT64_T, 0, 8, offsetof(mavlink_leaf_gps_view_status_t, sample_time_us) }, \
         { "viewer_id", NULL, MAVLINK_TYPE_UINT32_T, 0, 16, offsetof(mavlink_leaf_gps_view_status_t, viewer_id) }, \
         { "profile", NULL, MAVLINK_TYPE_UINT8_T, 0, 38, offsetof(mavlink_leaf_gps_view_status_t, profile) }, \
         { "lease_remaining_s", NULL, MAVLINK_TYPE_UINT16_T, 0, 36, offsetof(mavlink_leaf_gps_view_status_t, lease_remaining_s) }, \
         { "budget_bytes_s", NULL, MAVLINK_TYPE_UINT32_T, 0, 20, offsetof(mavlink_leaf_gps_view_status_t, budget_bytes_s) }, \
         { "guidance_rate_hz", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_leaf_gps_view_status_t, guidance_rate_hz) }, \
         { "status_rate_hz", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_leaf_gps_view_status_t, status_rate_hz) }, \
         { "diagnostics_rate_hz", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_leaf_gps_view_status_t, diagnostics_rate_hz) }, \
         { "result", NULL, MAVLINK_TYPE_UINT8_T, 0, 39, offsetof(mavlink_leaf_gps_view_status_t, result) }, \
         } \
}
#endif

/**
 * @brief Pack a leaf_gps_view_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param boot_id  Process incarnation.
 * @param sample_time_us  Monotonic sample time, microseconds.
 * @param viewer_id  Request viewer, zero for periodic status.
 * @param profile  Effective stream profile.
 * @param lease_remaining_s  Effective remaining lease.
 * @param budget_bytes_s  Maximum framed bytes per second, signing allowance included.
 * @param guidance_rate_hz  Maximum guidance rate.
 * @param status_rate_hz  Maximum mission status rate.
 * @param diagnostics_rate_hz  Maximum planner diagnostic rate.
 * @param result  0 accepted, 1 unsupported profile, 2 viewer capacity, 3 transfer unavailable.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_gps_view_status_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t boot_id, uint64_t sample_time_us, uint32_t viewer_id, uint8_t profile, uint16_t lease_remaining_s, uint32_t budget_bytes_s, float guidance_rate_hz, float status_rate_hz, float diagnostics_rate_hz, uint8_t result)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_GPS_VIEW_STATUS_LEN];
    _mav_put_uint64_t(buf, 0, boot_id);
    _mav_put_uint64_t(buf, 8, sample_time_us);
    _mav_put_uint32_t(buf, 16, viewer_id);
    _mav_put_uint32_t(buf, 20, budget_bytes_s);
    _mav_put_float(buf, 24, guidance_rate_hz);
    _mav_put_float(buf, 28, status_rate_hz);
    _mav_put_float(buf, 32, diagnostics_rate_hz);
    _mav_put_uint16_t(buf, 36, lease_remaining_s);
    _mav_put_uint8_t(buf, 38, profile);
    _mav_put_uint8_t(buf, 39, result);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_GPS_VIEW_STATUS_LEN);
#else
    mavlink_leaf_gps_view_status_t packet;
    packet.boot_id = boot_id;
    packet.sample_time_us = sample_time_us;
    packet.viewer_id = viewer_id;
    packet.budget_bytes_s = budget_bytes_s;
    packet.guidance_rate_hz = guidance_rate_hz;
    packet.status_rate_hz = status_rate_hz;
    packet.diagnostics_rate_hz = diagnostics_rate_hz;
    packet.lease_remaining_s = lease_remaining_s;
    packet.profile = profile;
    packet.result = result;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_GPS_VIEW_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_GPS_VIEW_STATUS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_LEAF_GPS_VIEW_STATUS_MIN_LEN, MAVLINK_MSG_ID_LEAF_GPS_VIEW_STATUS_LEN, MAVLINK_MSG_ID_LEAF_GPS_VIEW_STATUS_CRC);
}

/**
 * @brief Pack a leaf_gps_view_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param boot_id  Process incarnation.
 * @param sample_time_us  Monotonic sample time, microseconds.
 * @param viewer_id  Request viewer, zero for periodic status.
 * @param profile  Effective stream profile.
 * @param lease_remaining_s  Effective remaining lease.
 * @param budget_bytes_s  Maximum framed bytes per second, signing allowance included.
 * @param guidance_rate_hz  Maximum guidance rate.
 * @param status_rate_hz  Maximum mission status rate.
 * @param diagnostics_rate_hz  Maximum planner diagnostic rate.
 * @param result  0 accepted, 1 unsupported profile, 2 viewer capacity, 3 transfer unavailable.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_gps_view_status_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint64_t boot_id, uint64_t sample_time_us, uint32_t viewer_id, uint8_t profile, uint16_t lease_remaining_s, uint32_t budget_bytes_s, float guidance_rate_hz, float status_rate_hz, float diagnostics_rate_hz, uint8_t result)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_GPS_VIEW_STATUS_LEN];
    _mav_put_uint64_t(buf, 0, boot_id);
    _mav_put_uint64_t(buf, 8, sample_time_us);
    _mav_put_uint32_t(buf, 16, viewer_id);
    _mav_put_uint32_t(buf, 20, budget_bytes_s);
    _mav_put_float(buf, 24, guidance_rate_hz);
    _mav_put_float(buf, 28, status_rate_hz);
    _mav_put_float(buf, 32, diagnostics_rate_hz);
    _mav_put_uint16_t(buf, 36, lease_remaining_s);
    _mav_put_uint8_t(buf, 38, profile);
    _mav_put_uint8_t(buf, 39, result);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_GPS_VIEW_STATUS_LEN);
#else
    mavlink_leaf_gps_view_status_t packet;
    packet.boot_id = boot_id;
    packet.sample_time_us = sample_time_us;
    packet.viewer_id = viewer_id;
    packet.budget_bytes_s = budget_bytes_s;
    packet.guidance_rate_hz = guidance_rate_hz;
    packet.status_rate_hz = status_rate_hz;
    packet.diagnostics_rate_hz = diagnostics_rate_hz;
    packet.lease_remaining_s = lease_remaining_s;
    packet.profile = profile;
    packet.result = result;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_GPS_VIEW_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_GPS_VIEW_STATUS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_GPS_VIEW_STATUS_MIN_LEN, MAVLINK_MSG_ID_LEAF_GPS_VIEW_STATUS_LEN, MAVLINK_MSG_ID_LEAF_GPS_VIEW_STATUS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_GPS_VIEW_STATUS_MIN_LEN, MAVLINK_MSG_ID_LEAF_GPS_VIEW_STATUS_LEN);
#endif
}

/**
 * @brief Pack a leaf_gps_view_status message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param boot_id  Process incarnation.
 * @param sample_time_us  Monotonic sample time, microseconds.
 * @param viewer_id  Request viewer, zero for periodic status.
 * @param profile  Effective stream profile.
 * @param lease_remaining_s  Effective remaining lease.
 * @param budget_bytes_s  Maximum framed bytes per second, signing allowance included.
 * @param guidance_rate_hz  Maximum guidance rate.
 * @param status_rate_hz  Maximum mission status rate.
 * @param diagnostics_rate_hz  Maximum planner diagnostic rate.
 * @param result  0 accepted, 1 unsupported profile, 2 viewer capacity, 3 transfer unavailable.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_gps_view_status_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t boot_id,uint64_t sample_time_us,uint32_t viewer_id,uint8_t profile,uint16_t lease_remaining_s,uint32_t budget_bytes_s,float guidance_rate_hz,float status_rate_hz,float diagnostics_rate_hz,uint8_t result)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_GPS_VIEW_STATUS_LEN];
    _mav_put_uint64_t(buf, 0, boot_id);
    _mav_put_uint64_t(buf, 8, sample_time_us);
    _mav_put_uint32_t(buf, 16, viewer_id);
    _mav_put_uint32_t(buf, 20, budget_bytes_s);
    _mav_put_float(buf, 24, guidance_rate_hz);
    _mav_put_float(buf, 28, status_rate_hz);
    _mav_put_float(buf, 32, diagnostics_rate_hz);
    _mav_put_uint16_t(buf, 36, lease_remaining_s);
    _mav_put_uint8_t(buf, 38, profile);
    _mav_put_uint8_t(buf, 39, result);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_GPS_VIEW_STATUS_LEN);
#else
    mavlink_leaf_gps_view_status_t packet;
    packet.boot_id = boot_id;
    packet.sample_time_us = sample_time_us;
    packet.viewer_id = viewer_id;
    packet.budget_bytes_s = budget_bytes_s;
    packet.guidance_rate_hz = guidance_rate_hz;
    packet.status_rate_hz = status_rate_hz;
    packet.diagnostics_rate_hz = diagnostics_rate_hz;
    packet.lease_remaining_s = lease_remaining_s;
    packet.profile = profile;
    packet.result = result;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_GPS_VIEW_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_GPS_VIEW_STATUS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_LEAF_GPS_VIEW_STATUS_MIN_LEN, MAVLINK_MSG_ID_LEAF_GPS_VIEW_STATUS_LEN, MAVLINK_MSG_ID_LEAF_GPS_VIEW_STATUS_CRC);
}

/**
 * @brief Encode a leaf_gps_view_status struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param leaf_gps_view_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_gps_view_status_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_leaf_gps_view_status_t* leaf_gps_view_status)
{
    return mavlink_msg_leaf_gps_view_status_pack(system_id, component_id, msg, leaf_gps_view_status->boot_id, leaf_gps_view_status->sample_time_us, leaf_gps_view_status->viewer_id, leaf_gps_view_status->profile, leaf_gps_view_status->lease_remaining_s, leaf_gps_view_status->budget_bytes_s, leaf_gps_view_status->guidance_rate_hz, leaf_gps_view_status->status_rate_hz, leaf_gps_view_status->diagnostics_rate_hz, leaf_gps_view_status->result);
}

/**
 * @brief Encode a leaf_gps_view_status struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param leaf_gps_view_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_gps_view_status_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_leaf_gps_view_status_t* leaf_gps_view_status)
{
    return mavlink_msg_leaf_gps_view_status_pack_chan(system_id, component_id, chan, msg, leaf_gps_view_status->boot_id, leaf_gps_view_status->sample_time_us, leaf_gps_view_status->viewer_id, leaf_gps_view_status->profile, leaf_gps_view_status->lease_remaining_s, leaf_gps_view_status->budget_bytes_s, leaf_gps_view_status->guidance_rate_hz, leaf_gps_view_status->status_rate_hz, leaf_gps_view_status->diagnostics_rate_hz, leaf_gps_view_status->result);
}

/**
 * @brief Encode a leaf_gps_view_status struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param leaf_gps_view_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_gps_view_status_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_leaf_gps_view_status_t* leaf_gps_view_status)
{
    return mavlink_msg_leaf_gps_view_status_pack_status(system_id, component_id, _status, msg,  leaf_gps_view_status->boot_id, leaf_gps_view_status->sample_time_us, leaf_gps_view_status->viewer_id, leaf_gps_view_status->profile, leaf_gps_view_status->lease_remaining_s, leaf_gps_view_status->budget_bytes_s, leaf_gps_view_status->guidance_rate_hz, leaf_gps_view_status->status_rate_hz, leaf_gps_view_status->diagnostics_rate_hz, leaf_gps_view_status->result);
}

/**
 * @brief Send a leaf_gps_view_status message
 * @param chan MAVLink channel to send the message
 *
 * @param boot_id  Process incarnation.
 * @param sample_time_us  Monotonic sample time, microseconds.
 * @param viewer_id  Request viewer, zero for periodic status.
 * @param profile  Effective stream profile.
 * @param lease_remaining_s  Effective remaining lease.
 * @param budget_bytes_s  Maximum framed bytes per second, signing allowance included.
 * @param guidance_rate_hz  Maximum guidance rate.
 * @param status_rate_hz  Maximum mission status rate.
 * @param diagnostics_rate_hz  Maximum planner diagnostic rate.
 * @param result  0 accepted, 1 unsupported profile, 2 viewer capacity, 3 transfer unavailable.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_leaf_gps_view_status_send(mavlink_channel_t chan, uint64_t boot_id, uint64_t sample_time_us, uint32_t viewer_id, uint8_t profile, uint16_t lease_remaining_s, uint32_t budget_bytes_s, float guidance_rate_hz, float status_rate_hz, float diagnostics_rate_hz, uint8_t result)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_GPS_VIEW_STATUS_LEN];
    _mav_put_uint64_t(buf, 0, boot_id);
    _mav_put_uint64_t(buf, 8, sample_time_us);
    _mav_put_uint32_t(buf, 16, viewer_id);
    _mav_put_uint32_t(buf, 20, budget_bytes_s);
    _mav_put_float(buf, 24, guidance_rate_hz);
    _mav_put_float(buf, 28, status_rate_hz);
    _mav_put_float(buf, 32, diagnostics_rate_hz);
    _mav_put_uint16_t(buf, 36, lease_remaining_s);
    _mav_put_uint8_t(buf, 38, profile);
    _mav_put_uint8_t(buf, 39, result);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_GPS_VIEW_STATUS, buf, MAVLINK_MSG_ID_LEAF_GPS_VIEW_STATUS_MIN_LEN, MAVLINK_MSG_ID_LEAF_GPS_VIEW_STATUS_LEN, MAVLINK_MSG_ID_LEAF_GPS_VIEW_STATUS_CRC);
#else
    mavlink_leaf_gps_view_status_t packet;
    packet.boot_id = boot_id;
    packet.sample_time_us = sample_time_us;
    packet.viewer_id = viewer_id;
    packet.budget_bytes_s = budget_bytes_s;
    packet.guidance_rate_hz = guidance_rate_hz;
    packet.status_rate_hz = status_rate_hz;
    packet.diagnostics_rate_hz = diagnostics_rate_hz;
    packet.lease_remaining_s = lease_remaining_s;
    packet.profile = profile;
    packet.result = result;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_GPS_VIEW_STATUS, (const char *)&packet, MAVLINK_MSG_ID_LEAF_GPS_VIEW_STATUS_MIN_LEN, MAVLINK_MSG_ID_LEAF_GPS_VIEW_STATUS_LEN, MAVLINK_MSG_ID_LEAF_GPS_VIEW_STATUS_CRC);
#endif
}

/**
 * @brief Send a leaf_gps_view_status message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_leaf_gps_view_status_send_struct(mavlink_channel_t chan, const mavlink_leaf_gps_view_status_t* leaf_gps_view_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_leaf_gps_view_status_send(chan, leaf_gps_view_status->boot_id, leaf_gps_view_status->sample_time_us, leaf_gps_view_status->viewer_id, leaf_gps_view_status->profile, leaf_gps_view_status->lease_remaining_s, leaf_gps_view_status->budget_bytes_s, leaf_gps_view_status->guidance_rate_hz, leaf_gps_view_status->status_rate_hz, leaf_gps_view_status->diagnostics_rate_hz, leaf_gps_view_status->result);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_GPS_VIEW_STATUS, (const char *)leaf_gps_view_status, MAVLINK_MSG_ID_LEAF_GPS_VIEW_STATUS_MIN_LEN, MAVLINK_MSG_ID_LEAF_GPS_VIEW_STATUS_LEN, MAVLINK_MSG_ID_LEAF_GPS_VIEW_STATUS_CRC);
#endif
}

#if MAVLINK_MSG_ID_LEAF_GPS_VIEW_STATUS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_leaf_gps_view_status_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t boot_id, uint64_t sample_time_us, uint32_t viewer_id, uint8_t profile, uint16_t lease_remaining_s, uint32_t budget_bytes_s, float guidance_rate_hz, float status_rate_hz, float diagnostics_rate_hz, uint8_t result)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, boot_id);
    _mav_put_uint64_t(buf, 8, sample_time_us);
    _mav_put_uint32_t(buf, 16, viewer_id);
    _mav_put_uint32_t(buf, 20, budget_bytes_s);
    _mav_put_float(buf, 24, guidance_rate_hz);
    _mav_put_float(buf, 28, status_rate_hz);
    _mav_put_float(buf, 32, diagnostics_rate_hz);
    _mav_put_uint16_t(buf, 36, lease_remaining_s);
    _mav_put_uint8_t(buf, 38, profile);
    _mav_put_uint8_t(buf, 39, result);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_GPS_VIEW_STATUS, buf, MAVLINK_MSG_ID_LEAF_GPS_VIEW_STATUS_MIN_LEN, MAVLINK_MSG_ID_LEAF_GPS_VIEW_STATUS_LEN, MAVLINK_MSG_ID_LEAF_GPS_VIEW_STATUS_CRC);
#else
    mavlink_leaf_gps_view_status_t *packet = (mavlink_leaf_gps_view_status_t *)msgbuf;
    packet->boot_id = boot_id;
    packet->sample_time_us = sample_time_us;
    packet->viewer_id = viewer_id;
    packet->budget_bytes_s = budget_bytes_s;
    packet->guidance_rate_hz = guidance_rate_hz;
    packet->status_rate_hz = status_rate_hz;
    packet->diagnostics_rate_hz = diagnostics_rate_hz;
    packet->lease_remaining_s = lease_remaining_s;
    packet->profile = profile;
    packet->result = result;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_GPS_VIEW_STATUS, (const char *)packet, MAVLINK_MSG_ID_LEAF_GPS_VIEW_STATUS_MIN_LEN, MAVLINK_MSG_ID_LEAF_GPS_VIEW_STATUS_LEN, MAVLINK_MSG_ID_LEAF_GPS_VIEW_STATUS_CRC);
#endif
}
#endif

#endif

// MESSAGE LEAF_GPS_VIEW_STATUS UNPACKING


/**
 * @brief Get field boot_id from leaf_gps_view_status message
 *
 * @return  Process incarnation.
 */
static inline uint64_t mavlink_msg_leaf_gps_view_status_get_boot_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field sample_time_us from leaf_gps_view_status message
 *
 * @return  Monotonic sample time, microseconds.
 */
static inline uint64_t mavlink_msg_leaf_gps_view_status_get_sample_time_us(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  8);
}

/**
 * @brief Get field viewer_id from leaf_gps_view_status message
 *
 * @return  Request viewer, zero for periodic status.
 */
static inline uint32_t mavlink_msg_leaf_gps_view_status_get_viewer_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  16);
}

/**
 * @brief Get field profile from leaf_gps_view_status message
 *
 * @return  Effective stream profile.
 */
static inline uint8_t mavlink_msg_leaf_gps_view_status_get_profile(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  38);
}

/**
 * @brief Get field lease_remaining_s from leaf_gps_view_status message
 *
 * @return  Effective remaining lease.
 */
static inline uint16_t mavlink_msg_leaf_gps_view_status_get_lease_remaining_s(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  36);
}

/**
 * @brief Get field budget_bytes_s from leaf_gps_view_status message
 *
 * @return  Maximum framed bytes per second, signing allowance included.
 */
static inline uint32_t mavlink_msg_leaf_gps_view_status_get_budget_bytes_s(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  20);
}

/**
 * @brief Get field guidance_rate_hz from leaf_gps_view_status message
 *
 * @return  Maximum guidance rate.
 */
static inline float mavlink_msg_leaf_gps_view_status_get_guidance_rate_hz(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field status_rate_hz from leaf_gps_view_status message
 *
 * @return  Maximum mission status rate.
 */
static inline float mavlink_msg_leaf_gps_view_status_get_status_rate_hz(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Get field diagnostics_rate_hz from leaf_gps_view_status message
 *
 * @return  Maximum planner diagnostic rate.
 */
static inline float mavlink_msg_leaf_gps_view_status_get_diagnostics_rate_hz(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  32);
}

/**
 * @brief Get field result from leaf_gps_view_status message
 *
 * @return  0 accepted, 1 unsupported profile, 2 viewer capacity, 3 transfer unavailable.
 */
static inline uint8_t mavlink_msg_leaf_gps_view_status_get_result(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  39);
}

/**
 * @brief Decode a leaf_gps_view_status message into a struct
 *
 * @param msg The message to decode
 * @param leaf_gps_view_status C-struct to decode the message contents into
 */
static inline void mavlink_msg_leaf_gps_view_status_decode(const mavlink_message_t* msg, mavlink_leaf_gps_view_status_t* leaf_gps_view_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    leaf_gps_view_status->boot_id = mavlink_msg_leaf_gps_view_status_get_boot_id(msg);
    leaf_gps_view_status->sample_time_us = mavlink_msg_leaf_gps_view_status_get_sample_time_us(msg);
    leaf_gps_view_status->viewer_id = mavlink_msg_leaf_gps_view_status_get_viewer_id(msg);
    leaf_gps_view_status->budget_bytes_s = mavlink_msg_leaf_gps_view_status_get_budget_bytes_s(msg);
    leaf_gps_view_status->guidance_rate_hz = mavlink_msg_leaf_gps_view_status_get_guidance_rate_hz(msg);
    leaf_gps_view_status->status_rate_hz = mavlink_msg_leaf_gps_view_status_get_status_rate_hz(msg);
    leaf_gps_view_status->diagnostics_rate_hz = mavlink_msg_leaf_gps_view_status_get_diagnostics_rate_hz(msg);
    leaf_gps_view_status->lease_remaining_s = mavlink_msg_leaf_gps_view_status_get_lease_remaining_s(msg);
    leaf_gps_view_status->profile = mavlink_msg_leaf_gps_view_status_get_profile(msg);
    leaf_gps_view_status->result = mavlink_msg_leaf_gps_view_status_get_result(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_LEAF_GPS_VIEW_STATUS_LEN? msg->len : MAVLINK_MSG_ID_LEAF_GPS_VIEW_STATUS_LEN;
        memset(leaf_gps_view_status, 0, MAVLINK_MSG_ID_LEAF_GPS_VIEW_STATUS_LEN);
    memcpy(leaf_gps_view_status, _MAV_PAYLOAD(msg), len);
#endif
}
