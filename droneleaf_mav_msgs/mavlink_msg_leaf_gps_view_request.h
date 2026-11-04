#pragma once
// MESSAGE LEAF_GPS_VIEW_REQUEST PACKING

#define MAVLINK_MSG_ID_LEAF_GPS_VIEW_REQUEST 77067


typedef struct __mavlink_leaf_gps_view_request_t {
 uint32_t viewer_id; /*<  Random viewer session, combined with MAVLink source.*/
 uint32_t transfer_id; /*<  Zero for newest; otherwise retry retained transfer.*/
 uint16_t lease_s; /*<  Requested lease duration, capped by aircraft.*/
 uint16_t offset; /*<  First point to retransmit, relative to transmitted window.*/
 uint8_t target_system; /*<  Aircraft system.*/
 uint8_t target_component; /*<  Aircraft component.*/
 uint8_t profile; /*<  0 off, 1 reduced, 2 live, 3 detail.*/
 uint8_t snapshot; /*<  0 renew, 1 refresh, 2 full route.*/
} mavlink_leaf_gps_view_request_t;

#define MAVLINK_MSG_ID_LEAF_GPS_VIEW_REQUEST_LEN 16
#define MAVLINK_MSG_ID_LEAF_GPS_VIEW_REQUEST_MIN_LEN 16
#define MAVLINK_MSG_ID_77067_LEN 16
#define MAVLINK_MSG_ID_77067_MIN_LEN 16

#define MAVLINK_MSG_ID_LEAF_GPS_VIEW_REQUEST_CRC 196
#define MAVLINK_MSG_ID_77067_CRC 196



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_LEAF_GPS_VIEW_REQUEST { \
    77067, \
    "LEAF_GPS_VIEW_REQUEST", \
    8, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 12, offsetof(mavlink_leaf_gps_view_request_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 13, offsetof(mavlink_leaf_gps_view_request_t, target_component) }, \
         { "viewer_id", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_leaf_gps_view_request_t, viewer_id) }, \
         { "profile", NULL, MAVLINK_TYPE_UINT8_T, 0, 14, offsetof(mavlink_leaf_gps_view_request_t, profile) }, \
         { "lease_s", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_leaf_gps_view_request_t, lease_s) }, \
         { "snapshot", NULL, MAVLINK_TYPE_UINT8_T, 0, 15, offsetof(mavlink_leaf_gps_view_request_t, snapshot) }, \
         { "transfer_id", NULL, MAVLINK_TYPE_UINT32_T, 0, 4, offsetof(mavlink_leaf_gps_view_request_t, transfer_id) }, \
         { "offset", NULL, MAVLINK_TYPE_UINT16_T, 0, 10, offsetof(mavlink_leaf_gps_view_request_t, offset) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_LEAF_GPS_VIEW_REQUEST { \
    "LEAF_GPS_VIEW_REQUEST", \
    8, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 12, offsetof(mavlink_leaf_gps_view_request_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 13, offsetof(mavlink_leaf_gps_view_request_t, target_component) }, \
         { "viewer_id", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_leaf_gps_view_request_t, viewer_id) }, \
         { "profile", NULL, MAVLINK_TYPE_UINT8_T, 0, 14, offsetof(mavlink_leaf_gps_view_request_t, profile) }, \
         { "lease_s", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_leaf_gps_view_request_t, lease_s) }, \
         { "snapshot", NULL, MAVLINK_TYPE_UINT8_T, 0, 15, offsetof(mavlink_leaf_gps_view_request_t, snapshot) }, \
         { "transfer_id", NULL, MAVLINK_TYPE_UINT32_T, 0, 4, offsetof(mavlink_leaf_gps_view_request_t, transfer_id) }, \
         { "offset", NULL, MAVLINK_TYPE_UINT16_T, 0, 10, offsetof(mavlink_leaf_gps_view_request_t, offset) }, \
         } \
}
#endif

/**
 * @brief Pack a leaf_gps_view_request message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system  Aircraft system.
 * @param target_component  Aircraft component.
 * @param viewer_id  Random viewer session, combined with MAVLink source.
 * @param profile  0 off, 1 reduced, 2 live, 3 detail.
 * @param lease_s  Requested lease duration, capped by aircraft.
 * @param snapshot  0 renew, 1 refresh, 2 full route.
 * @param transfer_id  Zero for newest; otherwise retry retained transfer.
 * @param offset  First point to retransmit, relative to transmitted window.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_gps_view_request_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t target_system, uint8_t target_component, uint32_t viewer_id, uint8_t profile, uint16_t lease_s, uint8_t snapshot, uint32_t transfer_id, uint16_t offset)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_GPS_VIEW_REQUEST_LEN];
    _mav_put_uint32_t(buf, 0, viewer_id);
    _mav_put_uint32_t(buf, 4, transfer_id);
    _mav_put_uint16_t(buf, 8, lease_s);
    _mav_put_uint16_t(buf, 10, offset);
    _mav_put_uint8_t(buf, 12, target_system);
    _mav_put_uint8_t(buf, 13, target_component);
    _mav_put_uint8_t(buf, 14, profile);
    _mav_put_uint8_t(buf, 15, snapshot);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_GPS_VIEW_REQUEST_LEN);
#else
    mavlink_leaf_gps_view_request_t packet;
    packet.viewer_id = viewer_id;
    packet.transfer_id = transfer_id;
    packet.lease_s = lease_s;
    packet.offset = offset;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.profile = profile;
    packet.snapshot = snapshot;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_GPS_VIEW_REQUEST_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_GPS_VIEW_REQUEST;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_LEAF_GPS_VIEW_REQUEST_MIN_LEN, MAVLINK_MSG_ID_LEAF_GPS_VIEW_REQUEST_LEN, MAVLINK_MSG_ID_LEAF_GPS_VIEW_REQUEST_CRC);
}

/**
 * @brief Pack a leaf_gps_view_request message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system  Aircraft system.
 * @param target_component  Aircraft component.
 * @param viewer_id  Random viewer session, combined with MAVLink source.
 * @param profile  0 off, 1 reduced, 2 live, 3 detail.
 * @param lease_s  Requested lease duration, capped by aircraft.
 * @param snapshot  0 renew, 1 refresh, 2 full route.
 * @param transfer_id  Zero for newest; otherwise retry retained transfer.
 * @param offset  First point to retransmit, relative to transmitted window.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_gps_view_request_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t target_system, uint8_t target_component, uint32_t viewer_id, uint8_t profile, uint16_t lease_s, uint8_t snapshot, uint32_t transfer_id, uint16_t offset)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_GPS_VIEW_REQUEST_LEN];
    _mav_put_uint32_t(buf, 0, viewer_id);
    _mav_put_uint32_t(buf, 4, transfer_id);
    _mav_put_uint16_t(buf, 8, lease_s);
    _mav_put_uint16_t(buf, 10, offset);
    _mav_put_uint8_t(buf, 12, target_system);
    _mav_put_uint8_t(buf, 13, target_component);
    _mav_put_uint8_t(buf, 14, profile);
    _mav_put_uint8_t(buf, 15, snapshot);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_GPS_VIEW_REQUEST_LEN);
#else
    mavlink_leaf_gps_view_request_t packet;
    packet.viewer_id = viewer_id;
    packet.transfer_id = transfer_id;
    packet.lease_s = lease_s;
    packet.offset = offset;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.profile = profile;
    packet.snapshot = snapshot;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_GPS_VIEW_REQUEST_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_GPS_VIEW_REQUEST;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_GPS_VIEW_REQUEST_MIN_LEN, MAVLINK_MSG_ID_LEAF_GPS_VIEW_REQUEST_LEN, MAVLINK_MSG_ID_LEAF_GPS_VIEW_REQUEST_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_GPS_VIEW_REQUEST_MIN_LEN, MAVLINK_MSG_ID_LEAF_GPS_VIEW_REQUEST_LEN);
#endif
}

/**
 * @brief Pack a leaf_gps_view_request message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param target_system  Aircraft system.
 * @param target_component  Aircraft component.
 * @param viewer_id  Random viewer session, combined with MAVLink source.
 * @param profile  0 off, 1 reduced, 2 live, 3 detail.
 * @param lease_s  Requested lease duration, capped by aircraft.
 * @param snapshot  0 renew, 1 refresh, 2 full route.
 * @param transfer_id  Zero for newest; otherwise retry retained transfer.
 * @param offset  First point to retransmit, relative to transmitted window.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_gps_view_request_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t target_system,uint8_t target_component,uint32_t viewer_id,uint8_t profile,uint16_t lease_s,uint8_t snapshot,uint32_t transfer_id,uint16_t offset)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_GPS_VIEW_REQUEST_LEN];
    _mav_put_uint32_t(buf, 0, viewer_id);
    _mav_put_uint32_t(buf, 4, transfer_id);
    _mav_put_uint16_t(buf, 8, lease_s);
    _mav_put_uint16_t(buf, 10, offset);
    _mav_put_uint8_t(buf, 12, target_system);
    _mav_put_uint8_t(buf, 13, target_component);
    _mav_put_uint8_t(buf, 14, profile);
    _mav_put_uint8_t(buf, 15, snapshot);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_GPS_VIEW_REQUEST_LEN);
#else
    mavlink_leaf_gps_view_request_t packet;
    packet.viewer_id = viewer_id;
    packet.transfer_id = transfer_id;
    packet.lease_s = lease_s;
    packet.offset = offset;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.profile = profile;
    packet.snapshot = snapshot;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_GPS_VIEW_REQUEST_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_GPS_VIEW_REQUEST;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_LEAF_GPS_VIEW_REQUEST_MIN_LEN, MAVLINK_MSG_ID_LEAF_GPS_VIEW_REQUEST_LEN, MAVLINK_MSG_ID_LEAF_GPS_VIEW_REQUEST_CRC);
}

/**
 * @brief Encode a leaf_gps_view_request struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param leaf_gps_view_request C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_gps_view_request_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_leaf_gps_view_request_t* leaf_gps_view_request)
{
    return mavlink_msg_leaf_gps_view_request_pack(system_id, component_id, msg, leaf_gps_view_request->target_system, leaf_gps_view_request->target_component, leaf_gps_view_request->viewer_id, leaf_gps_view_request->profile, leaf_gps_view_request->lease_s, leaf_gps_view_request->snapshot, leaf_gps_view_request->transfer_id, leaf_gps_view_request->offset);
}

/**
 * @brief Encode a leaf_gps_view_request struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param leaf_gps_view_request C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_gps_view_request_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_leaf_gps_view_request_t* leaf_gps_view_request)
{
    return mavlink_msg_leaf_gps_view_request_pack_chan(system_id, component_id, chan, msg, leaf_gps_view_request->target_system, leaf_gps_view_request->target_component, leaf_gps_view_request->viewer_id, leaf_gps_view_request->profile, leaf_gps_view_request->lease_s, leaf_gps_view_request->snapshot, leaf_gps_view_request->transfer_id, leaf_gps_view_request->offset);
}

/**
 * @brief Encode a leaf_gps_view_request struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param leaf_gps_view_request C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_gps_view_request_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_leaf_gps_view_request_t* leaf_gps_view_request)
{
    return mavlink_msg_leaf_gps_view_request_pack_status(system_id, component_id, _status, msg,  leaf_gps_view_request->target_system, leaf_gps_view_request->target_component, leaf_gps_view_request->viewer_id, leaf_gps_view_request->profile, leaf_gps_view_request->lease_s, leaf_gps_view_request->snapshot, leaf_gps_view_request->transfer_id, leaf_gps_view_request->offset);
}

/**
 * @brief Send a leaf_gps_view_request message
 * @param chan MAVLink channel to send the message
 *
 * @param target_system  Aircraft system.
 * @param target_component  Aircraft component.
 * @param viewer_id  Random viewer session, combined with MAVLink source.
 * @param profile  0 off, 1 reduced, 2 live, 3 detail.
 * @param lease_s  Requested lease duration, capped by aircraft.
 * @param snapshot  0 renew, 1 refresh, 2 full route.
 * @param transfer_id  Zero for newest; otherwise retry retained transfer.
 * @param offset  First point to retransmit, relative to transmitted window.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_leaf_gps_view_request_send(mavlink_channel_t chan, uint8_t target_system, uint8_t target_component, uint32_t viewer_id, uint8_t profile, uint16_t lease_s, uint8_t snapshot, uint32_t transfer_id, uint16_t offset)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_GPS_VIEW_REQUEST_LEN];
    _mav_put_uint32_t(buf, 0, viewer_id);
    _mav_put_uint32_t(buf, 4, transfer_id);
    _mav_put_uint16_t(buf, 8, lease_s);
    _mav_put_uint16_t(buf, 10, offset);
    _mav_put_uint8_t(buf, 12, target_system);
    _mav_put_uint8_t(buf, 13, target_component);
    _mav_put_uint8_t(buf, 14, profile);
    _mav_put_uint8_t(buf, 15, snapshot);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_GPS_VIEW_REQUEST, buf, MAVLINK_MSG_ID_LEAF_GPS_VIEW_REQUEST_MIN_LEN, MAVLINK_MSG_ID_LEAF_GPS_VIEW_REQUEST_LEN, MAVLINK_MSG_ID_LEAF_GPS_VIEW_REQUEST_CRC);
#else
    mavlink_leaf_gps_view_request_t packet;
    packet.viewer_id = viewer_id;
    packet.transfer_id = transfer_id;
    packet.lease_s = lease_s;
    packet.offset = offset;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.profile = profile;
    packet.snapshot = snapshot;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_GPS_VIEW_REQUEST, (const char *)&packet, MAVLINK_MSG_ID_LEAF_GPS_VIEW_REQUEST_MIN_LEN, MAVLINK_MSG_ID_LEAF_GPS_VIEW_REQUEST_LEN, MAVLINK_MSG_ID_LEAF_GPS_VIEW_REQUEST_CRC);
#endif
}

/**
 * @brief Send a leaf_gps_view_request message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_leaf_gps_view_request_send_struct(mavlink_channel_t chan, const mavlink_leaf_gps_view_request_t* leaf_gps_view_request)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_leaf_gps_view_request_send(chan, leaf_gps_view_request->target_system, leaf_gps_view_request->target_component, leaf_gps_view_request->viewer_id, leaf_gps_view_request->profile, leaf_gps_view_request->lease_s, leaf_gps_view_request->snapshot, leaf_gps_view_request->transfer_id, leaf_gps_view_request->offset);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_GPS_VIEW_REQUEST, (const char *)leaf_gps_view_request, MAVLINK_MSG_ID_LEAF_GPS_VIEW_REQUEST_MIN_LEN, MAVLINK_MSG_ID_LEAF_GPS_VIEW_REQUEST_LEN, MAVLINK_MSG_ID_LEAF_GPS_VIEW_REQUEST_CRC);
#endif
}

#if MAVLINK_MSG_ID_LEAF_GPS_VIEW_REQUEST_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_leaf_gps_view_request_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t target_system, uint8_t target_component, uint32_t viewer_id, uint8_t profile, uint16_t lease_s, uint8_t snapshot, uint32_t transfer_id, uint16_t offset)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, viewer_id);
    _mav_put_uint32_t(buf, 4, transfer_id);
    _mav_put_uint16_t(buf, 8, lease_s);
    _mav_put_uint16_t(buf, 10, offset);
    _mav_put_uint8_t(buf, 12, target_system);
    _mav_put_uint8_t(buf, 13, target_component);
    _mav_put_uint8_t(buf, 14, profile);
    _mav_put_uint8_t(buf, 15, snapshot);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_GPS_VIEW_REQUEST, buf, MAVLINK_MSG_ID_LEAF_GPS_VIEW_REQUEST_MIN_LEN, MAVLINK_MSG_ID_LEAF_GPS_VIEW_REQUEST_LEN, MAVLINK_MSG_ID_LEAF_GPS_VIEW_REQUEST_CRC);
#else
    mavlink_leaf_gps_view_request_t *packet = (mavlink_leaf_gps_view_request_t *)msgbuf;
    packet->viewer_id = viewer_id;
    packet->transfer_id = transfer_id;
    packet->lease_s = lease_s;
    packet->offset = offset;
    packet->target_system = target_system;
    packet->target_component = target_component;
    packet->profile = profile;
    packet->snapshot = snapshot;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_GPS_VIEW_REQUEST, (const char *)packet, MAVLINK_MSG_ID_LEAF_GPS_VIEW_REQUEST_MIN_LEN, MAVLINK_MSG_ID_LEAF_GPS_VIEW_REQUEST_LEN, MAVLINK_MSG_ID_LEAF_GPS_VIEW_REQUEST_CRC);
#endif
}
#endif

#endif

// MESSAGE LEAF_GPS_VIEW_REQUEST UNPACKING


/**
 * @brief Get field target_system from leaf_gps_view_request message
 *
 * @return  Aircraft system.
 */
static inline uint8_t mavlink_msg_leaf_gps_view_request_get_target_system(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  12);
}

/**
 * @brief Get field target_component from leaf_gps_view_request message
 *
 * @return  Aircraft component.
 */
static inline uint8_t mavlink_msg_leaf_gps_view_request_get_target_component(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  13);
}

/**
 * @brief Get field viewer_id from leaf_gps_view_request message
 *
 * @return  Random viewer session, combined with MAVLink source.
 */
static inline uint32_t mavlink_msg_leaf_gps_view_request_get_viewer_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field profile from leaf_gps_view_request message
 *
 * @return  0 off, 1 reduced, 2 live, 3 detail.
 */
static inline uint8_t mavlink_msg_leaf_gps_view_request_get_profile(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  14);
}

/**
 * @brief Get field lease_s from leaf_gps_view_request message
 *
 * @return  Requested lease duration, capped by aircraft.
 */
static inline uint16_t mavlink_msg_leaf_gps_view_request_get_lease_s(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  8);
}

/**
 * @brief Get field snapshot from leaf_gps_view_request message
 *
 * @return  0 renew, 1 refresh, 2 full route.
 */
static inline uint8_t mavlink_msg_leaf_gps_view_request_get_snapshot(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  15);
}

/**
 * @brief Get field transfer_id from leaf_gps_view_request message
 *
 * @return  Zero for newest; otherwise retry retained transfer.
 */
static inline uint32_t mavlink_msg_leaf_gps_view_request_get_transfer_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  4);
}

/**
 * @brief Get field offset from leaf_gps_view_request message
 *
 * @return  First point to retransmit, relative to transmitted window.
 */
static inline uint16_t mavlink_msg_leaf_gps_view_request_get_offset(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  10);
}

/**
 * @brief Decode a leaf_gps_view_request message into a struct
 *
 * @param msg The message to decode
 * @param leaf_gps_view_request C-struct to decode the message contents into
 */
static inline void mavlink_msg_leaf_gps_view_request_decode(const mavlink_message_t* msg, mavlink_leaf_gps_view_request_t* leaf_gps_view_request)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    leaf_gps_view_request->viewer_id = mavlink_msg_leaf_gps_view_request_get_viewer_id(msg);
    leaf_gps_view_request->transfer_id = mavlink_msg_leaf_gps_view_request_get_transfer_id(msg);
    leaf_gps_view_request->lease_s = mavlink_msg_leaf_gps_view_request_get_lease_s(msg);
    leaf_gps_view_request->offset = mavlink_msg_leaf_gps_view_request_get_offset(msg);
    leaf_gps_view_request->target_system = mavlink_msg_leaf_gps_view_request_get_target_system(msg);
    leaf_gps_view_request->target_component = mavlink_msg_leaf_gps_view_request_get_target_component(msg);
    leaf_gps_view_request->profile = mavlink_msg_leaf_gps_view_request_get_profile(msg);
    leaf_gps_view_request->snapshot = mavlink_msg_leaf_gps_view_request_get_snapshot(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_LEAF_GPS_VIEW_REQUEST_LEN? msg->len : MAVLINK_MSG_ID_LEAF_GPS_VIEW_REQUEST_LEN;
        memset(leaf_gps_view_request, 0, MAVLINK_MSG_ID_LEAF_GPS_VIEW_REQUEST_LEN);
    memcpy(leaf_gps_view_request, _MAV_PAYLOAD(msg), len);
#endif
}
