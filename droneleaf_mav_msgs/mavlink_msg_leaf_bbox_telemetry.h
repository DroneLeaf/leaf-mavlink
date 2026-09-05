#pragma once
// MESSAGE LEAF_BBOX_TELEMETRY PACKING

#define MAVLINK_MSG_ID_LEAF_BBOX_TELEMETRY 77050


typedef struct __mavlink_leaf_bbox_telemetry_t {
 float box_center_x_norm; /*<  Bounding-box center X, normalized [0,1]*/
 float box_center_y_norm; /*<  Bounding-box center Y, normalized [0,1]*/
 float box_width_norm; /*<  Bounding-box width, normalized [0,1]*/
 float box_height_norm; /*<  Bounding-box height, normalized [0,1]*/
 float tracker_fps; /*<  CV tracker frame rate, fps*/
 uint8_t is_healthy; /*<  Tracker health (0=UNKNOWN,1=NOT_HEALTHY,2=HEALTHY)*/
 uint8_t is_tracking; /*<  Tracking status (0=UNKNOWN,1=IDLE,2=ACQUIRE,3=LOCK,4=LOST)*/
 uint8_t estimator_valid; /*<  CV tracker range/bearing estimator validity (0/1)*/
 uint8_t source_id; /*<  Id of the camera source that produced the bounding box. The consumer looks up the role configured for this source.*/
} mavlink_leaf_bbox_telemetry_t;

#define MAVLINK_MSG_ID_LEAF_BBOX_TELEMETRY_LEN 24
#define MAVLINK_MSG_ID_LEAF_BBOX_TELEMETRY_MIN_LEN 24
#define MAVLINK_MSG_ID_77050_LEN 24
#define MAVLINK_MSG_ID_77050_MIN_LEN 24

#define MAVLINK_MSG_ID_LEAF_BBOX_TELEMETRY_CRC 55
#define MAVLINK_MSG_ID_77050_CRC 55



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_LEAF_BBOX_TELEMETRY { \
    77050, \
    "LEAF_BBOX_TELEMETRY", \
    9, \
    {  { "box_center_x_norm", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_leaf_bbox_telemetry_t, box_center_x_norm) }, \
         { "box_center_y_norm", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_leaf_bbox_telemetry_t, box_center_y_norm) }, \
         { "box_width_norm", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_leaf_bbox_telemetry_t, box_width_norm) }, \
         { "box_height_norm", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_leaf_bbox_telemetry_t, box_height_norm) }, \
         { "tracker_fps", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_leaf_bbox_telemetry_t, tracker_fps) }, \
         { "is_healthy", NULL, MAVLINK_TYPE_UINT8_T, 0, 20, offsetof(mavlink_leaf_bbox_telemetry_t, is_healthy) }, \
         { "is_tracking", NULL, MAVLINK_TYPE_UINT8_T, 0, 21, offsetof(mavlink_leaf_bbox_telemetry_t, is_tracking) }, \
         { "estimator_valid", NULL, MAVLINK_TYPE_UINT8_T, 0, 22, offsetof(mavlink_leaf_bbox_telemetry_t, estimator_valid) }, \
         { "source_id", NULL, MAVLINK_TYPE_UINT8_T, 0, 23, offsetof(mavlink_leaf_bbox_telemetry_t, source_id) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_LEAF_BBOX_TELEMETRY { \
    "LEAF_BBOX_TELEMETRY", \
    9, \
    {  { "box_center_x_norm", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_leaf_bbox_telemetry_t, box_center_x_norm) }, \
         { "box_center_y_norm", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_leaf_bbox_telemetry_t, box_center_y_norm) }, \
         { "box_width_norm", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_leaf_bbox_telemetry_t, box_width_norm) }, \
         { "box_height_norm", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_leaf_bbox_telemetry_t, box_height_norm) }, \
         { "tracker_fps", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_leaf_bbox_telemetry_t, tracker_fps) }, \
         { "is_healthy", NULL, MAVLINK_TYPE_UINT8_T, 0, 20, offsetof(mavlink_leaf_bbox_telemetry_t, is_healthy) }, \
         { "is_tracking", NULL, MAVLINK_TYPE_UINT8_T, 0, 21, offsetof(mavlink_leaf_bbox_telemetry_t, is_tracking) }, \
         { "estimator_valid", NULL, MAVLINK_TYPE_UINT8_T, 0, 22, offsetof(mavlink_leaf_bbox_telemetry_t, estimator_valid) }, \
         { "source_id", NULL, MAVLINK_TYPE_UINT8_T, 0, 23, offsetof(mavlink_leaf_bbox_telemetry_t, source_id) }, \
         } \
}
#endif

/**
 * @brief Pack a leaf_bbox_telemetry message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param box_center_x_norm  Bounding-box center X, normalized [0,1]
 * @param box_center_y_norm  Bounding-box center Y, normalized [0,1]
 * @param box_width_norm  Bounding-box width, normalized [0,1]
 * @param box_height_norm  Bounding-box height, normalized [0,1]
 * @param tracker_fps  CV tracker frame rate, fps
 * @param is_healthy  Tracker health (0=UNKNOWN,1=NOT_HEALTHY,2=HEALTHY)
 * @param is_tracking  Tracking status (0=UNKNOWN,1=IDLE,2=ACQUIRE,3=LOCK,4=LOST)
 * @param estimator_valid  CV tracker range/bearing estimator validity (0/1)
 * @param source_id  Id of the camera source that produced the bounding box. The consumer looks up the role configured for this source.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_bbox_telemetry_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               float box_center_x_norm, float box_center_y_norm, float box_width_norm, float box_height_norm, float tracker_fps, uint8_t is_healthy, uint8_t is_tracking, uint8_t estimator_valid, uint8_t source_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_BBOX_TELEMETRY_LEN];
    _mav_put_float(buf, 0, box_center_x_norm);
    _mav_put_float(buf, 4, box_center_y_norm);
    _mav_put_float(buf, 8, box_width_norm);
    _mav_put_float(buf, 12, box_height_norm);
    _mav_put_float(buf, 16, tracker_fps);
    _mav_put_uint8_t(buf, 20, is_healthy);
    _mav_put_uint8_t(buf, 21, is_tracking);
    _mav_put_uint8_t(buf, 22, estimator_valid);
    _mav_put_uint8_t(buf, 23, source_id);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_BBOX_TELEMETRY_LEN);
#else
    mavlink_leaf_bbox_telemetry_t packet;
    packet.box_center_x_norm = box_center_x_norm;
    packet.box_center_y_norm = box_center_y_norm;
    packet.box_width_norm = box_width_norm;
    packet.box_height_norm = box_height_norm;
    packet.tracker_fps = tracker_fps;
    packet.is_healthy = is_healthy;
    packet.is_tracking = is_tracking;
    packet.estimator_valid = estimator_valid;
    packet.source_id = source_id;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_BBOX_TELEMETRY_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_BBOX_TELEMETRY;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_LEAF_BBOX_TELEMETRY_MIN_LEN, MAVLINK_MSG_ID_LEAF_BBOX_TELEMETRY_LEN, MAVLINK_MSG_ID_LEAF_BBOX_TELEMETRY_CRC);
}

/**
 * @brief Pack a leaf_bbox_telemetry message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param box_center_x_norm  Bounding-box center X, normalized [0,1]
 * @param box_center_y_norm  Bounding-box center Y, normalized [0,1]
 * @param box_width_norm  Bounding-box width, normalized [0,1]
 * @param box_height_norm  Bounding-box height, normalized [0,1]
 * @param tracker_fps  CV tracker frame rate, fps
 * @param is_healthy  Tracker health (0=UNKNOWN,1=NOT_HEALTHY,2=HEALTHY)
 * @param is_tracking  Tracking status (0=UNKNOWN,1=IDLE,2=ACQUIRE,3=LOCK,4=LOST)
 * @param estimator_valid  CV tracker range/bearing estimator validity (0/1)
 * @param source_id  Id of the camera source that produced the bounding box. The consumer looks up the role configured for this source.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_bbox_telemetry_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               float box_center_x_norm, float box_center_y_norm, float box_width_norm, float box_height_norm, float tracker_fps, uint8_t is_healthy, uint8_t is_tracking, uint8_t estimator_valid, uint8_t source_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_BBOX_TELEMETRY_LEN];
    _mav_put_float(buf, 0, box_center_x_norm);
    _mav_put_float(buf, 4, box_center_y_norm);
    _mav_put_float(buf, 8, box_width_norm);
    _mav_put_float(buf, 12, box_height_norm);
    _mav_put_float(buf, 16, tracker_fps);
    _mav_put_uint8_t(buf, 20, is_healthy);
    _mav_put_uint8_t(buf, 21, is_tracking);
    _mav_put_uint8_t(buf, 22, estimator_valid);
    _mav_put_uint8_t(buf, 23, source_id);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_BBOX_TELEMETRY_LEN);
#else
    mavlink_leaf_bbox_telemetry_t packet;
    packet.box_center_x_norm = box_center_x_norm;
    packet.box_center_y_norm = box_center_y_norm;
    packet.box_width_norm = box_width_norm;
    packet.box_height_norm = box_height_norm;
    packet.tracker_fps = tracker_fps;
    packet.is_healthy = is_healthy;
    packet.is_tracking = is_tracking;
    packet.estimator_valid = estimator_valid;
    packet.source_id = source_id;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_BBOX_TELEMETRY_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_BBOX_TELEMETRY;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_BBOX_TELEMETRY_MIN_LEN, MAVLINK_MSG_ID_LEAF_BBOX_TELEMETRY_LEN, MAVLINK_MSG_ID_LEAF_BBOX_TELEMETRY_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_BBOX_TELEMETRY_MIN_LEN, MAVLINK_MSG_ID_LEAF_BBOX_TELEMETRY_LEN);
#endif
}

/**
 * @brief Pack a leaf_bbox_telemetry message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param box_center_x_norm  Bounding-box center X, normalized [0,1]
 * @param box_center_y_norm  Bounding-box center Y, normalized [0,1]
 * @param box_width_norm  Bounding-box width, normalized [0,1]
 * @param box_height_norm  Bounding-box height, normalized [0,1]
 * @param tracker_fps  CV tracker frame rate, fps
 * @param is_healthy  Tracker health (0=UNKNOWN,1=NOT_HEALTHY,2=HEALTHY)
 * @param is_tracking  Tracking status (0=UNKNOWN,1=IDLE,2=ACQUIRE,3=LOCK,4=LOST)
 * @param estimator_valid  CV tracker range/bearing estimator validity (0/1)
 * @param source_id  Id of the camera source that produced the bounding box. The consumer looks up the role configured for this source.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_bbox_telemetry_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   float box_center_x_norm,float box_center_y_norm,float box_width_norm,float box_height_norm,float tracker_fps,uint8_t is_healthy,uint8_t is_tracking,uint8_t estimator_valid,uint8_t source_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_BBOX_TELEMETRY_LEN];
    _mav_put_float(buf, 0, box_center_x_norm);
    _mav_put_float(buf, 4, box_center_y_norm);
    _mav_put_float(buf, 8, box_width_norm);
    _mav_put_float(buf, 12, box_height_norm);
    _mav_put_float(buf, 16, tracker_fps);
    _mav_put_uint8_t(buf, 20, is_healthy);
    _mav_put_uint8_t(buf, 21, is_tracking);
    _mav_put_uint8_t(buf, 22, estimator_valid);
    _mav_put_uint8_t(buf, 23, source_id);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_BBOX_TELEMETRY_LEN);
#else
    mavlink_leaf_bbox_telemetry_t packet;
    packet.box_center_x_norm = box_center_x_norm;
    packet.box_center_y_norm = box_center_y_norm;
    packet.box_width_norm = box_width_norm;
    packet.box_height_norm = box_height_norm;
    packet.tracker_fps = tracker_fps;
    packet.is_healthy = is_healthy;
    packet.is_tracking = is_tracking;
    packet.estimator_valid = estimator_valid;
    packet.source_id = source_id;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_BBOX_TELEMETRY_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_BBOX_TELEMETRY;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_LEAF_BBOX_TELEMETRY_MIN_LEN, MAVLINK_MSG_ID_LEAF_BBOX_TELEMETRY_LEN, MAVLINK_MSG_ID_LEAF_BBOX_TELEMETRY_CRC);
}

/**
 * @brief Encode a leaf_bbox_telemetry struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param leaf_bbox_telemetry C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_bbox_telemetry_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_leaf_bbox_telemetry_t* leaf_bbox_telemetry)
{
    return mavlink_msg_leaf_bbox_telemetry_pack(system_id, component_id, msg, leaf_bbox_telemetry->box_center_x_norm, leaf_bbox_telemetry->box_center_y_norm, leaf_bbox_telemetry->box_width_norm, leaf_bbox_telemetry->box_height_norm, leaf_bbox_telemetry->tracker_fps, leaf_bbox_telemetry->is_healthy, leaf_bbox_telemetry->is_tracking, leaf_bbox_telemetry->estimator_valid, leaf_bbox_telemetry->source_id);
}

/**
 * @brief Encode a leaf_bbox_telemetry struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param leaf_bbox_telemetry C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_bbox_telemetry_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_leaf_bbox_telemetry_t* leaf_bbox_telemetry)
{
    return mavlink_msg_leaf_bbox_telemetry_pack_chan(system_id, component_id, chan, msg, leaf_bbox_telemetry->box_center_x_norm, leaf_bbox_telemetry->box_center_y_norm, leaf_bbox_telemetry->box_width_norm, leaf_bbox_telemetry->box_height_norm, leaf_bbox_telemetry->tracker_fps, leaf_bbox_telemetry->is_healthy, leaf_bbox_telemetry->is_tracking, leaf_bbox_telemetry->estimator_valid, leaf_bbox_telemetry->source_id);
}

/**
 * @brief Encode a leaf_bbox_telemetry struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param leaf_bbox_telemetry C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_bbox_telemetry_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_leaf_bbox_telemetry_t* leaf_bbox_telemetry)
{
    return mavlink_msg_leaf_bbox_telemetry_pack_status(system_id, component_id, _status, msg,  leaf_bbox_telemetry->box_center_x_norm, leaf_bbox_telemetry->box_center_y_norm, leaf_bbox_telemetry->box_width_norm, leaf_bbox_telemetry->box_height_norm, leaf_bbox_telemetry->tracker_fps, leaf_bbox_telemetry->is_healthy, leaf_bbox_telemetry->is_tracking, leaf_bbox_telemetry->estimator_valid, leaf_bbox_telemetry->source_id);
}

/**
 * @brief Send a leaf_bbox_telemetry message
 * @param chan MAVLink channel to send the message
 *
 * @param box_center_x_norm  Bounding-box center X, normalized [0,1]
 * @param box_center_y_norm  Bounding-box center Y, normalized [0,1]
 * @param box_width_norm  Bounding-box width, normalized [0,1]
 * @param box_height_norm  Bounding-box height, normalized [0,1]
 * @param tracker_fps  CV tracker frame rate, fps
 * @param is_healthy  Tracker health (0=UNKNOWN,1=NOT_HEALTHY,2=HEALTHY)
 * @param is_tracking  Tracking status (0=UNKNOWN,1=IDLE,2=ACQUIRE,3=LOCK,4=LOST)
 * @param estimator_valid  CV tracker range/bearing estimator validity (0/1)
 * @param source_id  Id of the camera source that produced the bounding box. The consumer looks up the role configured for this source.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_leaf_bbox_telemetry_send(mavlink_channel_t chan, float box_center_x_norm, float box_center_y_norm, float box_width_norm, float box_height_norm, float tracker_fps, uint8_t is_healthy, uint8_t is_tracking, uint8_t estimator_valid, uint8_t source_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_BBOX_TELEMETRY_LEN];
    _mav_put_float(buf, 0, box_center_x_norm);
    _mav_put_float(buf, 4, box_center_y_norm);
    _mav_put_float(buf, 8, box_width_norm);
    _mav_put_float(buf, 12, box_height_norm);
    _mav_put_float(buf, 16, tracker_fps);
    _mav_put_uint8_t(buf, 20, is_healthy);
    _mav_put_uint8_t(buf, 21, is_tracking);
    _mav_put_uint8_t(buf, 22, estimator_valid);
    _mav_put_uint8_t(buf, 23, source_id);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_BBOX_TELEMETRY, buf, MAVLINK_MSG_ID_LEAF_BBOX_TELEMETRY_MIN_LEN, MAVLINK_MSG_ID_LEAF_BBOX_TELEMETRY_LEN, MAVLINK_MSG_ID_LEAF_BBOX_TELEMETRY_CRC);
#else
    mavlink_leaf_bbox_telemetry_t packet;
    packet.box_center_x_norm = box_center_x_norm;
    packet.box_center_y_norm = box_center_y_norm;
    packet.box_width_norm = box_width_norm;
    packet.box_height_norm = box_height_norm;
    packet.tracker_fps = tracker_fps;
    packet.is_healthy = is_healthy;
    packet.is_tracking = is_tracking;
    packet.estimator_valid = estimator_valid;
    packet.source_id = source_id;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_BBOX_TELEMETRY, (const char *)&packet, MAVLINK_MSG_ID_LEAF_BBOX_TELEMETRY_MIN_LEN, MAVLINK_MSG_ID_LEAF_BBOX_TELEMETRY_LEN, MAVLINK_MSG_ID_LEAF_BBOX_TELEMETRY_CRC);
#endif
}

/**
 * @brief Send a leaf_bbox_telemetry message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_leaf_bbox_telemetry_send_struct(mavlink_channel_t chan, const mavlink_leaf_bbox_telemetry_t* leaf_bbox_telemetry)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_leaf_bbox_telemetry_send(chan, leaf_bbox_telemetry->box_center_x_norm, leaf_bbox_telemetry->box_center_y_norm, leaf_bbox_telemetry->box_width_norm, leaf_bbox_telemetry->box_height_norm, leaf_bbox_telemetry->tracker_fps, leaf_bbox_telemetry->is_healthy, leaf_bbox_telemetry->is_tracking, leaf_bbox_telemetry->estimator_valid, leaf_bbox_telemetry->source_id);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_BBOX_TELEMETRY, (const char *)leaf_bbox_telemetry, MAVLINK_MSG_ID_LEAF_BBOX_TELEMETRY_MIN_LEN, MAVLINK_MSG_ID_LEAF_BBOX_TELEMETRY_LEN, MAVLINK_MSG_ID_LEAF_BBOX_TELEMETRY_CRC);
#endif
}

#if MAVLINK_MSG_ID_LEAF_BBOX_TELEMETRY_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_leaf_bbox_telemetry_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  float box_center_x_norm, float box_center_y_norm, float box_width_norm, float box_height_norm, float tracker_fps, uint8_t is_healthy, uint8_t is_tracking, uint8_t estimator_valid, uint8_t source_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, box_center_x_norm);
    _mav_put_float(buf, 4, box_center_y_norm);
    _mav_put_float(buf, 8, box_width_norm);
    _mav_put_float(buf, 12, box_height_norm);
    _mav_put_float(buf, 16, tracker_fps);
    _mav_put_uint8_t(buf, 20, is_healthy);
    _mav_put_uint8_t(buf, 21, is_tracking);
    _mav_put_uint8_t(buf, 22, estimator_valid);
    _mav_put_uint8_t(buf, 23, source_id);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_BBOX_TELEMETRY, buf, MAVLINK_MSG_ID_LEAF_BBOX_TELEMETRY_MIN_LEN, MAVLINK_MSG_ID_LEAF_BBOX_TELEMETRY_LEN, MAVLINK_MSG_ID_LEAF_BBOX_TELEMETRY_CRC);
#else
    mavlink_leaf_bbox_telemetry_t *packet = (mavlink_leaf_bbox_telemetry_t *)msgbuf;
    packet->box_center_x_norm = box_center_x_norm;
    packet->box_center_y_norm = box_center_y_norm;
    packet->box_width_norm = box_width_norm;
    packet->box_height_norm = box_height_norm;
    packet->tracker_fps = tracker_fps;
    packet->is_healthy = is_healthy;
    packet->is_tracking = is_tracking;
    packet->estimator_valid = estimator_valid;
    packet->source_id = source_id;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_BBOX_TELEMETRY, (const char *)packet, MAVLINK_MSG_ID_LEAF_BBOX_TELEMETRY_MIN_LEN, MAVLINK_MSG_ID_LEAF_BBOX_TELEMETRY_LEN, MAVLINK_MSG_ID_LEAF_BBOX_TELEMETRY_CRC);
#endif
}
#endif

#endif

// MESSAGE LEAF_BBOX_TELEMETRY UNPACKING


/**
 * @brief Get field box_center_x_norm from leaf_bbox_telemetry message
 *
 * @return  Bounding-box center X, normalized [0,1]
 */
static inline float mavlink_msg_leaf_bbox_telemetry_get_box_center_x_norm(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field box_center_y_norm from leaf_bbox_telemetry message
 *
 * @return  Bounding-box center Y, normalized [0,1]
 */
static inline float mavlink_msg_leaf_bbox_telemetry_get_box_center_y_norm(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field box_width_norm from leaf_bbox_telemetry message
 *
 * @return  Bounding-box width, normalized [0,1]
 */
static inline float mavlink_msg_leaf_bbox_telemetry_get_box_width_norm(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field box_height_norm from leaf_bbox_telemetry message
 *
 * @return  Bounding-box height, normalized [0,1]
 */
static inline float mavlink_msg_leaf_bbox_telemetry_get_box_height_norm(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field tracker_fps from leaf_bbox_telemetry message
 *
 * @return  CV tracker frame rate, fps
 */
static inline float mavlink_msg_leaf_bbox_telemetry_get_tracker_fps(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field is_healthy from leaf_bbox_telemetry message
 *
 * @return  Tracker health (0=UNKNOWN,1=NOT_HEALTHY,2=HEALTHY)
 */
static inline uint8_t mavlink_msg_leaf_bbox_telemetry_get_is_healthy(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  20);
}

/**
 * @brief Get field is_tracking from leaf_bbox_telemetry message
 *
 * @return  Tracking status (0=UNKNOWN,1=IDLE,2=ACQUIRE,3=LOCK,4=LOST)
 */
static inline uint8_t mavlink_msg_leaf_bbox_telemetry_get_is_tracking(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  21);
}

/**
 * @brief Get field estimator_valid from leaf_bbox_telemetry message
 *
 * @return  CV tracker range/bearing estimator validity (0/1)
 */
static inline uint8_t mavlink_msg_leaf_bbox_telemetry_get_estimator_valid(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  22);
}

/**
 * @brief Get field source_id from leaf_bbox_telemetry message
 *
 * @return  Id of the camera source that produced the bounding box. The consumer looks up the role configured for this source.
 */
static inline uint8_t mavlink_msg_leaf_bbox_telemetry_get_source_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  23);
}

/**
 * @brief Decode a leaf_bbox_telemetry message into a struct
 *
 * @param msg The message to decode
 * @param leaf_bbox_telemetry C-struct to decode the message contents into
 */
static inline void mavlink_msg_leaf_bbox_telemetry_decode(const mavlink_message_t* msg, mavlink_leaf_bbox_telemetry_t* leaf_bbox_telemetry)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    leaf_bbox_telemetry->box_center_x_norm = mavlink_msg_leaf_bbox_telemetry_get_box_center_x_norm(msg);
    leaf_bbox_telemetry->box_center_y_norm = mavlink_msg_leaf_bbox_telemetry_get_box_center_y_norm(msg);
    leaf_bbox_telemetry->box_width_norm = mavlink_msg_leaf_bbox_telemetry_get_box_width_norm(msg);
    leaf_bbox_telemetry->box_height_norm = mavlink_msg_leaf_bbox_telemetry_get_box_height_norm(msg);
    leaf_bbox_telemetry->tracker_fps = mavlink_msg_leaf_bbox_telemetry_get_tracker_fps(msg);
    leaf_bbox_telemetry->is_healthy = mavlink_msg_leaf_bbox_telemetry_get_is_healthy(msg);
    leaf_bbox_telemetry->is_tracking = mavlink_msg_leaf_bbox_telemetry_get_is_tracking(msg);
    leaf_bbox_telemetry->estimator_valid = mavlink_msg_leaf_bbox_telemetry_get_estimator_valid(msg);
    leaf_bbox_telemetry->source_id = mavlink_msg_leaf_bbox_telemetry_get_source_id(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_LEAF_BBOX_TELEMETRY_LEN? msg->len : MAVLINK_MSG_ID_LEAF_BBOX_TELEMETRY_LEN;
        memset(leaf_bbox_telemetry, 0, MAVLINK_MSG_ID_LEAF_BBOX_TELEMETRY_LEN);
    memcpy(leaf_bbox_telemetry, _MAV_PAYLOAD(msg), len);
#endif
}
