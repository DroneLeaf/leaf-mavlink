#pragma once
// MESSAGE LEAF_VIDEO_STREAM_RESPONSE PACKING

#define MAVLINK_MSG_ID_LEAF_VIDEO_STREAM_RESPONSE 77060


typedef struct __mavlink_leaf_video_stream_response_t {
 uint8_t stream_enabled; /*<  Echo of the command this response answers: 1 = stream_start, 0 = stream_stop*/
 uint8_t accepted; /*<  1 = the pushes are now in the requested state; 0 = the unit has no network stream*/
 uint8_t reason; /*<  0 = applied; 1 = already streaming; 2 = already stopped; 3 = no network streams configured. Carried as a full byte so future levels can be added.*/
 uint8_t streaming; /*<  1 = the tracker's network pushes are emitting after this command, 0 = withheld*/
 uint8_t source_count; /*<  Number of sources whose push the command governs (the Redis ACK's sources[] length)*/
} mavlink_leaf_video_stream_response_t;

#define MAVLINK_MSG_ID_LEAF_VIDEO_STREAM_RESPONSE_LEN 5
#define MAVLINK_MSG_ID_LEAF_VIDEO_STREAM_RESPONSE_MIN_LEN 5
#define MAVLINK_MSG_ID_77060_LEN 5
#define MAVLINK_MSG_ID_77060_MIN_LEN 5

#define MAVLINK_MSG_ID_LEAF_VIDEO_STREAM_RESPONSE_CRC 161
#define MAVLINK_MSG_ID_77060_CRC 161



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_LEAF_VIDEO_STREAM_RESPONSE { \
    77060, \
    "LEAF_VIDEO_STREAM_RESPONSE", \
    5, \
    {  { "stream_enabled", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_leaf_video_stream_response_t, stream_enabled) }, \
         { "accepted", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_leaf_video_stream_response_t, accepted) }, \
         { "reason", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_leaf_video_stream_response_t, reason) }, \
         { "streaming", NULL, MAVLINK_TYPE_UINT8_T, 0, 3, offsetof(mavlink_leaf_video_stream_response_t, streaming) }, \
         { "source_count", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_leaf_video_stream_response_t, source_count) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_LEAF_VIDEO_STREAM_RESPONSE { \
    "LEAF_VIDEO_STREAM_RESPONSE", \
    5, \
    {  { "stream_enabled", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_leaf_video_stream_response_t, stream_enabled) }, \
         { "accepted", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_leaf_video_stream_response_t, accepted) }, \
         { "reason", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_leaf_video_stream_response_t, reason) }, \
         { "streaming", NULL, MAVLINK_TYPE_UINT8_T, 0, 3, offsetof(mavlink_leaf_video_stream_response_t, streaming) }, \
         { "source_count", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_leaf_video_stream_response_t, source_count) }, \
         } \
}
#endif

/**
 * @brief Pack a leaf_video_stream_response message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param stream_enabled  Echo of the command this response answers: 1 = stream_start, 0 = stream_stop
 * @param accepted  1 = the pushes are now in the requested state; 0 = the unit has no network stream
 * @param reason  0 = applied; 1 = already streaming; 2 = already stopped; 3 = no network streams configured. Carried as a full byte so future levels can be added.
 * @param streaming  1 = the tracker's network pushes are emitting after this command, 0 = withheld
 * @param source_count  Number of sources whose push the command governs (the Redis ACK's sources[] length)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_video_stream_response_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t stream_enabled, uint8_t accepted, uint8_t reason, uint8_t streaming, uint8_t source_count)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_VIDEO_STREAM_RESPONSE_LEN];
    _mav_put_uint8_t(buf, 0, stream_enabled);
    _mav_put_uint8_t(buf, 1, accepted);
    _mav_put_uint8_t(buf, 2, reason);
    _mav_put_uint8_t(buf, 3, streaming);
    _mav_put_uint8_t(buf, 4, source_count);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_VIDEO_STREAM_RESPONSE_LEN);
#else
    mavlink_leaf_video_stream_response_t packet;
    packet.stream_enabled = stream_enabled;
    packet.accepted = accepted;
    packet.reason = reason;
    packet.streaming = streaming;
    packet.source_count = source_count;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_VIDEO_STREAM_RESPONSE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_VIDEO_STREAM_RESPONSE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_LEAF_VIDEO_STREAM_RESPONSE_MIN_LEN, MAVLINK_MSG_ID_LEAF_VIDEO_STREAM_RESPONSE_LEN, MAVLINK_MSG_ID_LEAF_VIDEO_STREAM_RESPONSE_CRC);
}

/**
 * @brief Pack a leaf_video_stream_response message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param stream_enabled  Echo of the command this response answers: 1 = stream_start, 0 = stream_stop
 * @param accepted  1 = the pushes are now in the requested state; 0 = the unit has no network stream
 * @param reason  0 = applied; 1 = already streaming; 2 = already stopped; 3 = no network streams configured. Carried as a full byte so future levels can be added.
 * @param streaming  1 = the tracker's network pushes are emitting after this command, 0 = withheld
 * @param source_count  Number of sources whose push the command governs (the Redis ACK's sources[] length)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_video_stream_response_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t stream_enabled, uint8_t accepted, uint8_t reason, uint8_t streaming, uint8_t source_count)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_VIDEO_STREAM_RESPONSE_LEN];
    _mav_put_uint8_t(buf, 0, stream_enabled);
    _mav_put_uint8_t(buf, 1, accepted);
    _mav_put_uint8_t(buf, 2, reason);
    _mav_put_uint8_t(buf, 3, streaming);
    _mav_put_uint8_t(buf, 4, source_count);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_VIDEO_STREAM_RESPONSE_LEN);
#else
    mavlink_leaf_video_stream_response_t packet;
    packet.stream_enabled = stream_enabled;
    packet.accepted = accepted;
    packet.reason = reason;
    packet.streaming = streaming;
    packet.source_count = source_count;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_VIDEO_STREAM_RESPONSE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_VIDEO_STREAM_RESPONSE;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_VIDEO_STREAM_RESPONSE_MIN_LEN, MAVLINK_MSG_ID_LEAF_VIDEO_STREAM_RESPONSE_LEN, MAVLINK_MSG_ID_LEAF_VIDEO_STREAM_RESPONSE_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_VIDEO_STREAM_RESPONSE_MIN_LEN, MAVLINK_MSG_ID_LEAF_VIDEO_STREAM_RESPONSE_LEN);
#endif
}

/**
 * @brief Pack a leaf_video_stream_response message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param stream_enabled  Echo of the command this response answers: 1 = stream_start, 0 = stream_stop
 * @param accepted  1 = the pushes are now in the requested state; 0 = the unit has no network stream
 * @param reason  0 = applied; 1 = already streaming; 2 = already stopped; 3 = no network streams configured. Carried as a full byte so future levels can be added.
 * @param streaming  1 = the tracker's network pushes are emitting after this command, 0 = withheld
 * @param source_count  Number of sources whose push the command governs (the Redis ACK's sources[] length)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_video_stream_response_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t stream_enabled,uint8_t accepted,uint8_t reason,uint8_t streaming,uint8_t source_count)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_VIDEO_STREAM_RESPONSE_LEN];
    _mav_put_uint8_t(buf, 0, stream_enabled);
    _mav_put_uint8_t(buf, 1, accepted);
    _mav_put_uint8_t(buf, 2, reason);
    _mav_put_uint8_t(buf, 3, streaming);
    _mav_put_uint8_t(buf, 4, source_count);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_VIDEO_STREAM_RESPONSE_LEN);
#else
    mavlink_leaf_video_stream_response_t packet;
    packet.stream_enabled = stream_enabled;
    packet.accepted = accepted;
    packet.reason = reason;
    packet.streaming = streaming;
    packet.source_count = source_count;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_VIDEO_STREAM_RESPONSE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_VIDEO_STREAM_RESPONSE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_LEAF_VIDEO_STREAM_RESPONSE_MIN_LEN, MAVLINK_MSG_ID_LEAF_VIDEO_STREAM_RESPONSE_LEN, MAVLINK_MSG_ID_LEAF_VIDEO_STREAM_RESPONSE_CRC);
}

/**
 * @brief Encode a leaf_video_stream_response struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param leaf_video_stream_response C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_video_stream_response_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_leaf_video_stream_response_t* leaf_video_stream_response)
{
    return mavlink_msg_leaf_video_stream_response_pack(system_id, component_id, msg, leaf_video_stream_response->stream_enabled, leaf_video_stream_response->accepted, leaf_video_stream_response->reason, leaf_video_stream_response->streaming, leaf_video_stream_response->source_count);
}

/**
 * @brief Encode a leaf_video_stream_response struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param leaf_video_stream_response C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_video_stream_response_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_leaf_video_stream_response_t* leaf_video_stream_response)
{
    return mavlink_msg_leaf_video_stream_response_pack_chan(system_id, component_id, chan, msg, leaf_video_stream_response->stream_enabled, leaf_video_stream_response->accepted, leaf_video_stream_response->reason, leaf_video_stream_response->streaming, leaf_video_stream_response->source_count);
}

/**
 * @brief Encode a leaf_video_stream_response struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param leaf_video_stream_response C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_video_stream_response_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_leaf_video_stream_response_t* leaf_video_stream_response)
{
    return mavlink_msg_leaf_video_stream_response_pack_status(system_id, component_id, _status, msg,  leaf_video_stream_response->stream_enabled, leaf_video_stream_response->accepted, leaf_video_stream_response->reason, leaf_video_stream_response->streaming, leaf_video_stream_response->source_count);
}

/**
 * @brief Send a leaf_video_stream_response message
 * @param chan MAVLink channel to send the message
 *
 * @param stream_enabled  Echo of the command this response answers: 1 = stream_start, 0 = stream_stop
 * @param accepted  1 = the pushes are now in the requested state; 0 = the unit has no network stream
 * @param reason  0 = applied; 1 = already streaming; 2 = already stopped; 3 = no network streams configured. Carried as a full byte so future levels can be added.
 * @param streaming  1 = the tracker's network pushes are emitting after this command, 0 = withheld
 * @param source_count  Number of sources whose push the command governs (the Redis ACK's sources[] length)
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_leaf_video_stream_response_send(mavlink_channel_t chan, uint8_t stream_enabled, uint8_t accepted, uint8_t reason, uint8_t streaming, uint8_t source_count)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_VIDEO_STREAM_RESPONSE_LEN];
    _mav_put_uint8_t(buf, 0, stream_enabled);
    _mav_put_uint8_t(buf, 1, accepted);
    _mav_put_uint8_t(buf, 2, reason);
    _mav_put_uint8_t(buf, 3, streaming);
    _mav_put_uint8_t(buf, 4, source_count);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_VIDEO_STREAM_RESPONSE, buf, MAVLINK_MSG_ID_LEAF_VIDEO_STREAM_RESPONSE_MIN_LEN, MAVLINK_MSG_ID_LEAF_VIDEO_STREAM_RESPONSE_LEN, MAVLINK_MSG_ID_LEAF_VIDEO_STREAM_RESPONSE_CRC);
#else
    mavlink_leaf_video_stream_response_t packet;
    packet.stream_enabled = stream_enabled;
    packet.accepted = accepted;
    packet.reason = reason;
    packet.streaming = streaming;
    packet.source_count = source_count;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_VIDEO_STREAM_RESPONSE, (const char *)&packet, MAVLINK_MSG_ID_LEAF_VIDEO_STREAM_RESPONSE_MIN_LEN, MAVLINK_MSG_ID_LEAF_VIDEO_STREAM_RESPONSE_LEN, MAVLINK_MSG_ID_LEAF_VIDEO_STREAM_RESPONSE_CRC);
#endif
}

/**
 * @brief Send a leaf_video_stream_response message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_leaf_video_stream_response_send_struct(mavlink_channel_t chan, const mavlink_leaf_video_stream_response_t* leaf_video_stream_response)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_leaf_video_stream_response_send(chan, leaf_video_stream_response->stream_enabled, leaf_video_stream_response->accepted, leaf_video_stream_response->reason, leaf_video_stream_response->streaming, leaf_video_stream_response->source_count);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_VIDEO_STREAM_RESPONSE, (const char *)leaf_video_stream_response, MAVLINK_MSG_ID_LEAF_VIDEO_STREAM_RESPONSE_MIN_LEN, MAVLINK_MSG_ID_LEAF_VIDEO_STREAM_RESPONSE_LEN, MAVLINK_MSG_ID_LEAF_VIDEO_STREAM_RESPONSE_CRC);
#endif
}

#if MAVLINK_MSG_ID_LEAF_VIDEO_STREAM_RESPONSE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_leaf_video_stream_response_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t stream_enabled, uint8_t accepted, uint8_t reason, uint8_t streaming, uint8_t source_count)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, stream_enabled);
    _mav_put_uint8_t(buf, 1, accepted);
    _mav_put_uint8_t(buf, 2, reason);
    _mav_put_uint8_t(buf, 3, streaming);
    _mav_put_uint8_t(buf, 4, source_count);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_VIDEO_STREAM_RESPONSE, buf, MAVLINK_MSG_ID_LEAF_VIDEO_STREAM_RESPONSE_MIN_LEN, MAVLINK_MSG_ID_LEAF_VIDEO_STREAM_RESPONSE_LEN, MAVLINK_MSG_ID_LEAF_VIDEO_STREAM_RESPONSE_CRC);
#else
    mavlink_leaf_video_stream_response_t *packet = (mavlink_leaf_video_stream_response_t *)msgbuf;
    packet->stream_enabled = stream_enabled;
    packet->accepted = accepted;
    packet->reason = reason;
    packet->streaming = streaming;
    packet->source_count = source_count;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_VIDEO_STREAM_RESPONSE, (const char *)packet, MAVLINK_MSG_ID_LEAF_VIDEO_STREAM_RESPONSE_MIN_LEN, MAVLINK_MSG_ID_LEAF_VIDEO_STREAM_RESPONSE_LEN, MAVLINK_MSG_ID_LEAF_VIDEO_STREAM_RESPONSE_CRC);
#endif
}
#endif

#endif

// MESSAGE LEAF_VIDEO_STREAM_RESPONSE UNPACKING


/**
 * @brief Get field stream_enabled from leaf_video_stream_response message
 *
 * @return  Echo of the command this response answers: 1 = stream_start, 0 = stream_stop
 */
static inline uint8_t mavlink_msg_leaf_video_stream_response_get_stream_enabled(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field accepted from leaf_video_stream_response message
 *
 * @return  1 = the pushes are now in the requested state; 0 = the unit has no network stream
 */
static inline uint8_t mavlink_msg_leaf_video_stream_response_get_accepted(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Get field reason from leaf_video_stream_response message
 *
 * @return  0 = applied; 1 = already streaming; 2 = already stopped; 3 = no network streams configured. Carried as a full byte so future levels can be added.
 */
static inline uint8_t mavlink_msg_leaf_video_stream_response_get_reason(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  2);
}

/**
 * @brief Get field streaming from leaf_video_stream_response message
 *
 * @return  1 = the tracker's network pushes are emitting after this command, 0 = withheld
 */
static inline uint8_t mavlink_msg_leaf_video_stream_response_get_streaming(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  3);
}

/**
 * @brief Get field source_count from leaf_video_stream_response message
 *
 * @return  Number of sources whose push the command governs (the Redis ACK's sources[] length)
 */
static inline uint8_t mavlink_msg_leaf_video_stream_response_get_source_count(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  4);
}

/**
 * @brief Decode a leaf_video_stream_response message into a struct
 *
 * @param msg The message to decode
 * @param leaf_video_stream_response C-struct to decode the message contents into
 */
static inline void mavlink_msg_leaf_video_stream_response_decode(const mavlink_message_t* msg, mavlink_leaf_video_stream_response_t* leaf_video_stream_response)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    leaf_video_stream_response->stream_enabled = mavlink_msg_leaf_video_stream_response_get_stream_enabled(msg);
    leaf_video_stream_response->accepted = mavlink_msg_leaf_video_stream_response_get_accepted(msg);
    leaf_video_stream_response->reason = mavlink_msg_leaf_video_stream_response_get_reason(msg);
    leaf_video_stream_response->streaming = mavlink_msg_leaf_video_stream_response_get_streaming(msg);
    leaf_video_stream_response->source_count = mavlink_msg_leaf_video_stream_response_get_source_count(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_LEAF_VIDEO_STREAM_RESPONSE_LEN? msg->len : MAVLINK_MSG_ID_LEAF_VIDEO_STREAM_RESPONSE_LEN;
        memset(leaf_video_stream_response, 0, MAVLINK_MSG_ID_LEAF_VIDEO_STREAM_RESPONSE_LEN);
    memcpy(leaf_video_stream_response, _MAV_PAYLOAD(msg), len);
#endif
}
