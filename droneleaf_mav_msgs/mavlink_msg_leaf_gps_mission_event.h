#pragma once
// MESSAGE LEAF_GPS_MISSION_EVENT PACKING

#define MAVLINK_MSG_ID_LEAF_GPS_MISSION_EVENT 77073


typedef struct __mavlink_leaf_gps_mission_event_t {
 uint64_t boot_id; /*<  Process incarnation.*/
 uint64_t sample_time_us; /*<  Monotonic sample time, microseconds.*/
 uint64_t route_session; /*<  Route session.*/
 uint64_t plan_revision; /*<  Source plan revision.*/
 uint64_t segment_revision; /*<  Segment at event.*/
 uint32_t sequence; /*<  Monotonic sequence within boot.*/
 int32_t target_index; /*<  Target at event.*/
 uint16_t detail; /*<  Count or previous state.*/
 uint8_t event; /*<  1 route reset, 2 scheduled, 3 activated, 4 arrival, 5 continuation unavailable, 6 waiting, 7 mission complete, 8 home reached, 9 mode changed, 10 refuel phase changed, 11 planner state changed, 12 external RTH request, 13 safety switch changed, 14 arm state changed, 15 INS state changed.*/
 uint8_t state; /*<  New state for state changes.*/
} mavlink_leaf_gps_mission_event_t;

#define MAVLINK_MSG_ID_LEAF_GPS_MISSION_EVENT_LEN 52
#define MAVLINK_MSG_ID_LEAF_GPS_MISSION_EVENT_MIN_LEN 52
#define MAVLINK_MSG_ID_77073_LEN 52
#define MAVLINK_MSG_ID_77073_MIN_LEN 52

#define MAVLINK_MSG_ID_LEAF_GPS_MISSION_EVENT_CRC 248
#define MAVLINK_MSG_ID_77073_CRC 248



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_LEAF_GPS_MISSION_EVENT { \
    77073, \
    "LEAF_GPS_MISSION_EVENT", \
    10, \
    {  { "boot_id", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_leaf_gps_mission_event_t, boot_id) }, \
         { "sample_time_us", NULL, MAVLINK_TYPE_UINT64_T, 0, 8, offsetof(mavlink_leaf_gps_mission_event_t, sample_time_us) }, \
         { "route_session", NULL, MAVLINK_TYPE_UINT64_T, 0, 16, offsetof(mavlink_leaf_gps_mission_event_t, route_session) }, \
         { "plan_revision", NULL, MAVLINK_TYPE_UINT64_T, 0, 24, offsetof(mavlink_leaf_gps_mission_event_t, plan_revision) }, \
         { "sequence", NULL, MAVLINK_TYPE_UINT32_T, 0, 40, offsetof(mavlink_leaf_gps_mission_event_t, sequence) }, \
         { "segment_revision", NULL, MAVLINK_TYPE_UINT64_T, 0, 32, offsetof(mavlink_leaf_gps_mission_event_t, segment_revision) }, \
         { "target_index", NULL, MAVLINK_TYPE_INT32_T, 0, 44, offsetof(mavlink_leaf_gps_mission_event_t, target_index) }, \
         { "detail", NULL, MAVLINK_TYPE_UINT16_T, 0, 48, offsetof(mavlink_leaf_gps_mission_event_t, detail) }, \
         { "event", NULL, MAVLINK_TYPE_UINT8_T, 0, 50, offsetof(mavlink_leaf_gps_mission_event_t, event) }, \
         { "state", NULL, MAVLINK_TYPE_UINT8_T, 0, 51, offsetof(mavlink_leaf_gps_mission_event_t, state) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_LEAF_GPS_MISSION_EVENT { \
    "LEAF_GPS_MISSION_EVENT", \
    10, \
    {  { "boot_id", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_leaf_gps_mission_event_t, boot_id) }, \
         { "sample_time_us", NULL, MAVLINK_TYPE_UINT64_T, 0, 8, offsetof(mavlink_leaf_gps_mission_event_t, sample_time_us) }, \
         { "route_session", NULL, MAVLINK_TYPE_UINT64_T, 0, 16, offsetof(mavlink_leaf_gps_mission_event_t, route_session) }, \
         { "plan_revision", NULL, MAVLINK_TYPE_UINT64_T, 0, 24, offsetof(mavlink_leaf_gps_mission_event_t, plan_revision) }, \
         { "sequence", NULL, MAVLINK_TYPE_UINT32_T, 0, 40, offsetof(mavlink_leaf_gps_mission_event_t, sequence) }, \
         { "segment_revision", NULL, MAVLINK_TYPE_UINT64_T, 0, 32, offsetof(mavlink_leaf_gps_mission_event_t, segment_revision) }, \
         { "target_index", NULL, MAVLINK_TYPE_INT32_T, 0, 44, offsetof(mavlink_leaf_gps_mission_event_t, target_index) }, \
         { "detail", NULL, MAVLINK_TYPE_UINT16_T, 0, 48, offsetof(mavlink_leaf_gps_mission_event_t, detail) }, \
         { "event", NULL, MAVLINK_TYPE_UINT8_T, 0, 50, offsetof(mavlink_leaf_gps_mission_event_t, event) }, \
         { "state", NULL, MAVLINK_TYPE_UINT8_T, 0, 51, offsetof(mavlink_leaf_gps_mission_event_t, state) }, \
         } \
}
#endif

/**
 * @brief Pack a leaf_gps_mission_event message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param boot_id  Process incarnation.
 * @param sample_time_us  Monotonic sample time, microseconds.
 * @param route_session  Route session.
 * @param plan_revision  Source plan revision.
 * @param sequence  Monotonic sequence within boot.
 * @param segment_revision  Segment at event.
 * @param target_index  Target at event.
 * @param detail  Count or previous state.
 * @param event  1 route reset, 2 scheduled, 3 activated, 4 arrival, 5 continuation unavailable, 6 waiting, 7 mission complete, 8 home reached, 9 mode changed, 10 refuel phase changed, 11 planner state changed, 12 external RTH request, 13 safety switch changed, 14 arm state changed, 15 INS state changed.
 * @param state  New state for state changes.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_gps_mission_event_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t boot_id, uint64_t sample_time_us, uint64_t route_session, uint64_t plan_revision, uint32_t sequence, uint64_t segment_revision, int32_t target_index, uint16_t detail, uint8_t event, uint8_t state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_GPS_MISSION_EVENT_LEN];
    _mav_put_uint64_t(buf, 0, boot_id);
    _mav_put_uint64_t(buf, 8, sample_time_us);
    _mav_put_uint64_t(buf, 16, route_session);
    _mav_put_uint64_t(buf, 24, plan_revision);
    _mav_put_uint64_t(buf, 32, segment_revision);
    _mav_put_uint32_t(buf, 40, sequence);
    _mav_put_int32_t(buf, 44, target_index);
    _mav_put_uint16_t(buf, 48, detail);
    _mav_put_uint8_t(buf, 50, event);
    _mav_put_uint8_t(buf, 51, state);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_GPS_MISSION_EVENT_LEN);
#else
    mavlink_leaf_gps_mission_event_t packet;
    packet.boot_id = boot_id;
    packet.sample_time_us = sample_time_us;
    packet.route_session = route_session;
    packet.plan_revision = plan_revision;
    packet.segment_revision = segment_revision;
    packet.sequence = sequence;
    packet.target_index = target_index;
    packet.detail = detail;
    packet.event = event;
    packet.state = state;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_GPS_MISSION_EVENT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_GPS_MISSION_EVENT;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_LEAF_GPS_MISSION_EVENT_MIN_LEN, MAVLINK_MSG_ID_LEAF_GPS_MISSION_EVENT_LEN, MAVLINK_MSG_ID_LEAF_GPS_MISSION_EVENT_CRC);
}

/**
 * @brief Pack a leaf_gps_mission_event message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param boot_id  Process incarnation.
 * @param sample_time_us  Monotonic sample time, microseconds.
 * @param route_session  Route session.
 * @param plan_revision  Source plan revision.
 * @param sequence  Monotonic sequence within boot.
 * @param segment_revision  Segment at event.
 * @param target_index  Target at event.
 * @param detail  Count or previous state.
 * @param event  1 route reset, 2 scheduled, 3 activated, 4 arrival, 5 continuation unavailable, 6 waiting, 7 mission complete, 8 home reached, 9 mode changed, 10 refuel phase changed, 11 planner state changed, 12 external RTH request, 13 safety switch changed, 14 arm state changed, 15 INS state changed.
 * @param state  New state for state changes.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_gps_mission_event_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint64_t boot_id, uint64_t sample_time_us, uint64_t route_session, uint64_t plan_revision, uint32_t sequence, uint64_t segment_revision, int32_t target_index, uint16_t detail, uint8_t event, uint8_t state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_GPS_MISSION_EVENT_LEN];
    _mav_put_uint64_t(buf, 0, boot_id);
    _mav_put_uint64_t(buf, 8, sample_time_us);
    _mav_put_uint64_t(buf, 16, route_session);
    _mav_put_uint64_t(buf, 24, plan_revision);
    _mav_put_uint64_t(buf, 32, segment_revision);
    _mav_put_uint32_t(buf, 40, sequence);
    _mav_put_int32_t(buf, 44, target_index);
    _mav_put_uint16_t(buf, 48, detail);
    _mav_put_uint8_t(buf, 50, event);
    _mav_put_uint8_t(buf, 51, state);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_GPS_MISSION_EVENT_LEN);
#else
    mavlink_leaf_gps_mission_event_t packet;
    packet.boot_id = boot_id;
    packet.sample_time_us = sample_time_us;
    packet.route_session = route_session;
    packet.plan_revision = plan_revision;
    packet.segment_revision = segment_revision;
    packet.sequence = sequence;
    packet.target_index = target_index;
    packet.detail = detail;
    packet.event = event;
    packet.state = state;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_GPS_MISSION_EVENT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_GPS_MISSION_EVENT;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_GPS_MISSION_EVENT_MIN_LEN, MAVLINK_MSG_ID_LEAF_GPS_MISSION_EVENT_LEN, MAVLINK_MSG_ID_LEAF_GPS_MISSION_EVENT_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_GPS_MISSION_EVENT_MIN_LEN, MAVLINK_MSG_ID_LEAF_GPS_MISSION_EVENT_LEN);
#endif
}

/**
 * @brief Pack a leaf_gps_mission_event message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param boot_id  Process incarnation.
 * @param sample_time_us  Monotonic sample time, microseconds.
 * @param route_session  Route session.
 * @param plan_revision  Source plan revision.
 * @param sequence  Monotonic sequence within boot.
 * @param segment_revision  Segment at event.
 * @param target_index  Target at event.
 * @param detail  Count or previous state.
 * @param event  1 route reset, 2 scheduled, 3 activated, 4 arrival, 5 continuation unavailable, 6 waiting, 7 mission complete, 8 home reached, 9 mode changed, 10 refuel phase changed, 11 planner state changed, 12 external RTH request, 13 safety switch changed, 14 arm state changed, 15 INS state changed.
 * @param state  New state for state changes.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_gps_mission_event_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t boot_id,uint64_t sample_time_us,uint64_t route_session,uint64_t plan_revision,uint32_t sequence,uint64_t segment_revision,int32_t target_index,uint16_t detail,uint8_t event,uint8_t state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_GPS_MISSION_EVENT_LEN];
    _mav_put_uint64_t(buf, 0, boot_id);
    _mav_put_uint64_t(buf, 8, sample_time_us);
    _mav_put_uint64_t(buf, 16, route_session);
    _mav_put_uint64_t(buf, 24, plan_revision);
    _mav_put_uint64_t(buf, 32, segment_revision);
    _mav_put_uint32_t(buf, 40, sequence);
    _mav_put_int32_t(buf, 44, target_index);
    _mav_put_uint16_t(buf, 48, detail);
    _mav_put_uint8_t(buf, 50, event);
    _mav_put_uint8_t(buf, 51, state);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_GPS_MISSION_EVENT_LEN);
#else
    mavlink_leaf_gps_mission_event_t packet;
    packet.boot_id = boot_id;
    packet.sample_time_us = sample_time_us;
    packet.route_session = route_session;
    packet.plan_revision = plan_revision;
    packet.segment_revision = segment_revision;
    packet.sequence = sequence;
    packet.target_index = target_index;
    packet.detail = detail;
    packet.event = event;
    packet.state = state;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_GPS_MISSION_EVENT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_GPS_MISSION_EVENT;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_LEAF_GPS_MISSION_EVENT_MIN_LEN, MAVLINK_MSG_ID_LEAF_GPS_MISSION_EVENT_LEN, MAVLINK_MSG_ID_LEAF_GPS_MISSION_EVENT_CRC);
}

/**
 * @brief Encode a leaf_gps_mission_event struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param leaf_gps_mission_event C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_gps_mission_event_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_leaf_gps_mission_event_t* leaf_gps_mission_event)
{
    return mavlink_msg_leaf_gps_mission_event_pack(system_id, component_id, msg, leaf_gps_mission_event->boot_id, leaf_gps_mission_event->sample_time_us, leaf_gps_mission_event->route_session, leaf_gps_mission_event->plan_revision, leaf_gps_mission_event->sequence, leaf_gps_mission_event->segment_revision, leaf_gps_mission_event->target_index, leaf_gps_mission_event->detail, leaf_gps_mission_event->event, leaf_gps_mission_event->state);
}

/**
 * @brief Encode a leaf_gps_mission_event struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param leaf_gps_mission_event C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_gps_mission_event_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_leaf_gps_mission_event_t* leaf_gps_mission_event)
{
    return mavlink_msg_leaf_gps_mission_event_pack_chan(system_id, component_id, chan, msg, leaf_gps_mission_event->boot_id, leaf_gps_mission_event->sample_time_us, leaf_gps_mission_event->route_session, leaf_gps_mission_event->plan_revision, leaf_gps_mission_event->sequence, leaf_gps_mission_event->segment_revision, leaf_gps_mission_event->target_index, leaf_gps_mission_event->detail, leaf_gps_mission_event->event, leaf_gps_mission_event->state);
}

/**
 * @brief Encode a leaf_gps_mission_event struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param leaf_gps_mission_event C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_gps_mission_event_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_leaf_gps_mission_event_t* leaf_gps_mission_event)
{
    return mavlink_msg_leaf_gps_mission_event_pack_status(system_id, component_id, _status, msg,  leaf_gps_mission_event->boot_id, leaf_gps_mission_event->sample_time_us, leaf_gps_mission_event->route_session, leaf_gps_mission_event->plan_revision, leaf_gps_mission_event->sequence, leaf_gps_mission_event->segment_revision, leaf_gps_mission_event->target_index, leaf_gps_mission_event->detail, leaf_gps_mission_event->event, leaf_gps_mission_event->state);
}

/**
 * @brief Send a leaf_gps_mission_event message
 * @param chan MAVLink channel to send the message
 *
 * @param boot_id  Process incarnation.
 * @param sample_time_us  Monotonic sample time, microseconds.
 * @param route_session  Route session.
 * @param plan_revision  Source plan revision.
 * @param sequence  Monotonic sequence within boot.
 * @param segment_revision  Segment at event.
 * @param target_index  Target at event.
 * @param detail  Count or previous state.
 * @param event  1 route reset, 2 scheduled, 3 activated, 4 arrival, 5 continuation unavailable, 6 waiting, 7 mission complete, 8 home reached, 9 mode changed, 10 refuel phase changed, 11 planner state changed, 12 external RTH request, 13 safety switch changed, 14 arm state changed, 15 INS state changed.
 * @param state  New state for state changes.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_leaf_gps_mission_event_send(mavlink_channel_t chan, uint64_t boot_id, uint64_t sample_time_us, uint64_t route_session, uint64_t plan_revision, uint32_t sequence, uint64_t segment_revision, int32_t target_index, uint16_t detail, uint8_t event, uint8_t state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_GPS_MISSION_EVENT_LEN];
    _mav_put_uint64_t(buf, 0, boot_id);
    _mav_put_uint64_t(buf, 8, sample_time_us);
    _mav_put_uint64_t(buf, 16, route_session);
    _mav_put_uint64_t(buf, 24, plan_revision);
    _mav_put_uint64_t(buf, 32, segment_revision);
    _mav_put_uint32_t(buf, 40, sequence);
    _mav_put_int32_t(buf, 44, target_index);
    _mav_put_uint16_t(buf, 48, detail);
    _mav_put_uint8_t(buf, 50, event);
    _mav_put_uint8_t(buf, 51, state);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_GPS_MISSION_EVENT, buf, MAVLINK_MSG_ID_LEAF_GPS_MISSION_EVENT_MIN_LEN, MAVLINK_MSG_ID_LEAF_GPS_MISSION_EVENT_LEN, MAVLINK_MSG_ID_LEAF_GPS_MISSION_EVENT_CRC);
#else
    mavlink_leaf_gps_mission_event_t packet;
    packet.boot_id = boot_id;
    packet.sample_time_us = sample_time_us;
    packet.route_session = route_session;
    packet.plan_revision = plan_revision;
    packet.segment_revision = segment_revision;
    packet.sequence = sequence;
    packet.target_index = target_index;
    packet.detail = detail;
    packet.event = event;
    packet.state = state;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_GPS_MISSION_EVENT, (const char *)&packet, MAVLINK_MSG_ID_LEAF_GPS_MISSION_EVENT_MIN_LEN, MAVLINK_MSG_ID_LEAF_GPS_MISSION_EVENT_LEN, MAVLINK_MSG_ID_LEAF_GPS_MISSION_EVENT_CRC);
#endif
}

/**
 * @brief Send a leaf_gps_mission_event message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_leaf_gps_mission_event_send_struct(mavlink_channel_t chan, const mavlink_leaf_gps_mission_event_t* leaf_gps_mission_event)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_leaf_gps_mission_event_send(chan, leaf_gps_mission_event->boot_id, leaf_gps_mission_event->sample_time_us, leaf_gps_mission_event->route_session, leaf_gps_mission_event->plan_revision, leaf_gps_mission_event->sequence, leaf_gps_mission_event->segment_revision, leaf_gps_mission_event->target_index, leaf_gps_mission_event->detail, leaf_gps_mission_event->event, leaf_gps_mission_event->state);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_GPS_MISSION_EVENT, (const char *)leaf_gps_mission_event, MAVLINK_MSG_ID_LEAF_GPS_MISSION_EVENT_MIN_LEN, MAVLINK_MSG_ID_LEAF_GPS_MISSION_EVENT_LEN, MAVLINK_MSG_ID_LEAF_GPS_MISSION_EVENT_CRC);
#endif
}

#if MAVLINK_MSG_ID_LEAF_GPS_MISSION_EVENT_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_leaf_gps_mission_event_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t boot_id, uint64_t sample_time_us, uint64_t route_session, uint64_t plan_revision, uint32_t sequence, uint64_t segment_revision, int32_t target_index, uint16_t detail, uint8_t event, uint8_t state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, boot_id);
    _mav_put_uint64_t(buf, 8, sample_time_us);
    _mav_put_uint64_t(buf, 16, route_session);
    _mav_put_uint64_t(buf, 24, plan_revision);
    _mav_put_uint64_t(buf, 32, segment_revision);
    _mav_put_uint32_t(buf, 40, sequence);
    _mav_put_int32_t(buf, 44, target_index);
    _mav_put_uint16_t(buf, 48, detail);
    _mav_put_uint8_t(buf, 50, event);
    _mav_put_uint8_t(buf, 51, state);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_GPS_MISSION_EVENT, buf, MAVLINK_MSG_ID_LEAF_GPS_MISSION_EVENT_MIN_LEN, MAVLINK_MSG_ID_LEAF_GPS_MISSION_EVENT_LEN, MAVLINK_MSG_ID_LEAF_GPS_MISSION_EVENT_CRC);
#else
    mavlink_leaf_gps_mission_event_t *packet = (mavlink_leaf_gps_mission_event_t *)msgbuf;
    packet->boot_id = boot_id;
    packet->sample_time_us = sample_time_us;
    packet->route_session = route_session;
    packet->plan_revision = plan_revision;
    packet->segment_revision = segment_revision;
    packet->sequence = sequence;
    packet->target_index = target_index;
    packet->detail = detail;
    packet->event = event;
    packet->state = state;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_GPS_MISSION_EVENT, (const char *)packet, MAVLINK_MSG_ID_LEAF_GPS_MISSION_EVENT_MIN_LEN, MAVLINK_MSG_ID_LEAF_GPS_MISSION_EVENT_LEN, MAVLINK_MSG_ID_LEAF_GPS_MISSION_EVENT_CRC);
#endif
}
#endif

#endif

// MESSAGE LEAF_GPS_MISSION_EVENT UNPACKING


/**
 * @brief Get field boot_id from leaf_gps_mission_event message
 *
 * @return  Process incarnation.
 */
static inline uint64_t mavlink_msg_leaf_gps_mission_event_get_boot_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field sample_time_us from leaf_gps_mission_event message
 *
 * @return  Monotonic sample time, microseconds.
 */
static inline uint64_t mavlink_msg_leaf_gps_mission_event_get_sample_time_us(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  8);
}

/**
 * @brief Get field route_session from leaf_gps_mission_event message
 *
 * @return  Route session.
 */
static inline uint64_t mavlink_msg_leaf_gps_mission_event_get_route_session(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  16);
}

/**
 * @brief Get field plan_revision from leaf_gps_mission_event message
 *
 * @return  Source plan revision.
 */
static inline uint64_t mavlink_msg_leaf_gps_mission_event_get_plan_revision(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  24);
}

/**
 * @brief Get field sequence from leaf_gps_mission_event message
 *
 * @return  Monotonic sequence within boot.
 */
static inline uint32_t mavlink_msg_leaf_gps_mission_event_get_sequence(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  40);
}

/**
 * @brief Get field segment_revision from leaf_gps_mission_event message
 *
 * @return  Segment at event.
 */
static inline uint64_t mavlink_msg_leaf_gps_mission_event_get_segment_revision(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  32);
}

/**
 * @brief Get field target_index from leaf_gps_mission_event message
 *
 * @return  Target at event.
 */
static inline int32_t mavlink_msg_leaf_gps_mission_event_get_target_index(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  44);
}

/**
 * @brief Get field detail from leaf_gps_mission_event message
 *
 * @return  Count or previous state.
 */
static inline uint16_t mavlink_msg_leaf_gps_mission_event_get_detail(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  48);
}

/**
 * @brief Get field event from leaf_gps_mission_event message
 *
 * @return  1 route reset, 2 scheduled, 3 activated, 4 arrival, 5 continuation unavailable, 6 waiting, 7 mission complete, 8 home reached, 9 mode changed, 10 refuel phase changed, 11 planner state changed, 12 external RTH request, 13 safety switch changed, 14 arm state changed, 15 INS state changed.
 */
static inline uint8_t mavlink_msg_leaf_gps_mission_event_get_event(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  50);
}

/**
 * @brief Get field state from leaf_gps_mission_event message
 *
 * @return  New state for state changes.
 */
static inline uint8_t mavlink_msg_leaf_gps_mission_event_get_state(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  51);
}

/**
 * @brief Decode a leaf_gps_mission_event message into a struct
 *
 * @param msg The message to decode
 * @param leaf_gps_mission_event C-struct to decode the message contents into
 */
static inline void mavlink_msg_leaf_gps_mission_event_decode(const mavlink_message_t* msg, mavlink_leaf_gps_mission_event_t* leaf_gps_mission_event)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    leaf_gps_mission_event->boot_id = mavlink_msg_leaf_gps_mission_event_get_boot_id(msg);
    leaf_gps_mission_event->sample_time_us = mavlink_msg_leaf_gps_mission_event_get_sample_time_us(msg);
    leaf_gps_mission_event->route_session = mavlink_msg_leaf_gps_mission_event_get_route_session(msg);
    leaf_gps_mission_event->plan_revision = mavlink_msg_leaf_gps_mission_event_get_plan_revision(msg);
    leaf_gps_mission_event->segment_revision = mavlink_msg_leaf_gps_mission_event_get_segment_revision(msg);
    leaf_gps_mission_event->sequence = mavlink_msg_leaf_gps_mission_event_get_sequence(msg);
    leaf_gps_mission_event->target_index = mavlink_msg_leaf_gps_mission_event_get_target_index(msg);
    leaf_gps_mission_event->detail = mavlink_msg_leaf_gps_mission_event_get_detail(msg);
    leaf_gps_mission_event->event = mavlink_msg_leaf_gps_mission_event_get_event(msg);
    leaf_gps_mission_event->state = mavlink_msg_leaf_gps_mission_event_get_state(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_LEAF_GPS_MISSION_EVENT_LEN? msg->len : MAVLINK_MSG_ID_LEAF_GPS_MISSION_EVENT_LEN;
        memset(leaf_gps_mission_event, 0, MAVLINK_MSG_ID_LEAF_GPS_MISSION_EVENT_LEN);
    memcpy(leaf_gps_mission_event, _MAV_PAYLOAD(msg), len);
#endif
}
