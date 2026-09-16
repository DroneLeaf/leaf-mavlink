#pragma once
// MESSAGE LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_RESPONSE PACKING

#define MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_RESPONSE 77058


typedef struct __mavlink_leaf_target_gps_vision_correlation_confirm_response_t {
 uint8_t correlation_confirmation_accepted; /*<  1 = a held candidate consumed the verdict, 0 = discarded (re-send when the next candidate is held). Always equals (reason == 0).*/
 uint8_t reason; /*<  0 = accepted; 1 = no candidate held (searching, or the candidate was just dropped: the re-send trigger); 2 = not in external-confirm mode (IDLE/LOCK, or the active confirmation block is persist/instant). Carried as a full byte so future levels can be added.*/
 uint8_t correlation_between_target_gps_and_vision_confirmed; /*<  Echo of the verdict this response answers (0 = false, 1 = true); pairs request and response since the channel has no message ids.*/
 uint8_t cv_tracker_state; /*<  Tracker phase, cv_tracker_status wire codes: 0 = IDLE, 1 = ACQUIRE, 2 = LOCK, 3 = REACQUIRE (formerly LOST, code unchanged).*/
} mavlink_leaf_target_gps_vision_correlation_confirm_response_t;

#define MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_RESPONSE_LEN 4
#define MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_RESPONSE_MIN_LEN 4
#define MAVLINK_MSG_ID_77058_LEN 4
#define MAVLINK_MSG_ID_77058_MIN_LEN 4

#define MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_RESPONSE_CRC 108
#define MAVLINK_MSG_ID_77058_CRC 108



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_RESPONSE { \
    77058, \
    "LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_RESPONSE", \
    4, \
    {  { "correlation_confirmation_accepted", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_leaf_target_gps_vision_correlation_confirm_response_t, correlation_confirmation_accepted) }, \
         { "reason", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_leaf_target_gps_vision_correlation_confirm_response_t, reason) }, \
         { "correlation_between_target_gps_and_vision_confirmed", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_leaf_target_gps_vision_correlation_confirm_response_t, correlation_between_target_gps_and_vision_confirmed) }, \
         { "cv_tracker_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 3, offsetof(mavlink_leaf_target_gps_vision_correlation_confirm_response_t, cv_tracker_state) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_RESPONSE { \
    "LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_RESPONSE", \
    4, \
    {  { "correlation_confirmation_accepted", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_leaf_target_gps_vision_correlation_confirm_response_t, correlation_confirmation_accepted) }, \
         { "reason", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_leaf_target_gps_vision_correlation_confirm_response_t, reason) }, \
         { "correlation_between_target_gps_and_vision_confirmed", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_leaf_target_gps_vision_correlation_confirm_response_t, correlation_between_target_gps_and_vision_confirmed) }, \
         { "cv_tracker_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 3, offsetof(mavlink_leaf_target_gps_vision_correlation_confirm_response_t, cv_tracker_state) }, \
         } \
}
#endif

/**
 * @brief Pack a leaf_target_gps_vision_correlation_confirm_response message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param correlation_confirmation_accepted  1 = a held candidate consumed the verdict, 0 = discarded (re-send when the next candidate is held). Always equals (reason == 0).
 * @param reason  0 = accepted; 1 = no candidate held (searching, or the candidate was just dropped: the re-send trigger); 2 = not in external-confirm mode (IDLE/LOCK, or the active confirmation block is persist/instant). Carried as a full byte so future levels can be added.
 * @param correlation_between_target_gps_and_vision_confirmed  Echo of the verdict this response answers (0 = false, 1 = true); pairs request and response since the channel has no message ids.
 * @param cv_tracker_state  Tracker phase, cv_tracker_status wire codes: 0 = IDLE, 1 = ACQUIRE, 2 = LOCK, 3 = REACQUIRE (formerly LOST, code unchanged).
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_target_gps_vision_correlation_confirm_response_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t correlation_confirmation_accepted, uint8_t reason, uint8_t correlation_between_target_gps_and_vision_confirmed, uint8_t cv_tracker_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_RESPONSE_LEN];
    _mav_put_uint8_t(buf, 0, correlation_confirmation_accepted);
    _mav_put_uint8_t(buf, 1, reason);
    _mav_put_uint8_t(buf, 2, correlation_between_target_gps_and_vision_confirmed);
    _mav_put_uint8_t(buf, 3, cv_tracker_state);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_RESPONSE_LEN);
#else
    mavlink_leaf_target_gps_vision_correlation_confirm_response_t packet;
    packet.correlation_confirmation_accepted = correlation_confirmation_accepted;
    packet.reason = reason;
    packet.correlation_between_target_gps_and_vision_confirmed = correlation_between_target_gps_and_vision_confirmed;
    packet.cv_tracker_state = cv_tracker_state;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_RESPONSE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_RESPONSE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_RESPONSE_MIN_LEN, MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_RESPONSE_LEN, MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_RESPONSE_CRC);
}

/**
 * @brief Pack a leaf_target_gps_vision_correlation_confirm_response message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param correlation_confirmation_accepted  1 = a held candidate consumed the verdict, 0 = discarded (re-send when the next candidate is held). Always equals (reason == 0).
 * @param reason  0 = accepted; 1 = no candidate held (searching, or the candidate was just dropped: the re-send trigger); 2 = not in external-confirm mode (IDLE/LOCK, or the active confirmation block is persist/instant). Carried as a full byte so future levels can be added.
 * @param correlation_between_target_gps_and_vision_confirmed  Echo of the verdict this response answers (0 = false, 1 = true); pairs request and response since the channel has no message ids.
 * @param cv_tracker_state  Tracker phase, cv_tracker_status wire codes: 0 = IDLE, 1 = ACQUIRE, 2 = LOCK, 3 = REACQUIRE (formerly LOST, code unchanged).
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_target_gps_vision_correlation_confirm_response_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t correlation_confirmation_accepted, uint8_t reason, uint8_t correlation_between_target_gps_and_vision_confirmed, uint8_t cv_tracker_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_RESPONSE_LEN];
    _mav_put_uint8_t(buf, 0, correlation_confirmation_accepted);
    _mav_put_uint8_t(buf, 1, reason);
    _mav_put_uint8_t(buf, 2, correlation_between_target_gps_and_vision_confirmed);
    _mav_put_uint8_t(buf, 3, cv_tracker_state);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_RESPONSE_LEN);
#else
    mavlink_leaf_target_gps_vision_correlation_confirm_response_t packet;
    packet.correlation_confirmation_accepted = correlation_confirmation_accepted;
    packet.reason = reason;
    packet.correlation_between_target_gps_and_vision_confirmed = correlation_between_target_gps_and_vision_confirmed;
    packet.cv_tracker_state = cv_tracker_state;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_RESPONSE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_RESPONSE;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_RESPONSE_MIN_LEN, MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_RESPONSE_LEN, MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_RESPONSE_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_RESPONSE_MIN_LEN, MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_RESPONSE_LEN);
#endif
}

/**
 * @brief Pack a leaf_target_gps_vision_correlation_confirm_response message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param correlation_confirmation_accepted  1 = a held candidate consumed the verdict, 0 = discarded (re-send when the next candidate is held). Always equals (reason == 0).
 * @param reason  0 = accepted; 1 = no candidate held (searching, or the candidate was just dropped: the re-send trigger); 2 = not in external-confirm mode (IDLE/LOCK, or the active confirmation block is persist/instant). Carried as a full byte so future levels can be added.
 * @param correlation_between_target_gps_and_vision_confirmed  Echo of the verdict this response answers (0 = false, 1 = true); pairs request and response since the channel has no message ids.
 * @param cv_tracker_state  Tracker phase, cv_tracker_status wire codes: 0 = IDLE, 1 = ACQUIRE, 2 = LOCK, 3 = REACQUIRE (formerly LOST, code unchanged).
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_target_gps_vision_correlation_confirm_response_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t correlation_confirmation_accepted,uint8_t reason,uint8_t correlation_between_target_gps_and_vision_confirmed,uint8_t cv_tracker_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_RESPONSE_LEN];
    _mav_put_uint8_t(buf, 0, correlation_confirmation_accepted);
    _mav_put_uint8_t(buf, 1, reason);
    _mav_put_uint8_t(buf, 2, correlation_between_target_gps_and_vision_confirmed);
    _mav_put_uint8_t(buf, 3, cv_tracker_state);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_RESPONSE_LEN);
#else
    mavlink_leaf_target_gps_vision_correlation_confirm_response_t packet;
    packet.correlation_confirmation_accepted = correlation_confirmation_accepted;
    packet.reason = reason;
    packet.correlation_between_target_gps_and_vision_confirmed = correlation_between_target_gps_and_vision_confirmed;
    packet.cv_tracker_state = cv_tracker_state;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_RESPONSE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_RESPONSE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_RESPONSE_MIN_LEN, MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_RESPONSE_LEN, MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_RESPONSE_CRC);
}

/**
 * @brief Encode a leaf_target_gps_vision_correlation_confirm_response struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param leaf_target_gps_vision_correlation_confirm_response C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_target_gps_vision_correlation_confirm_response_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_leaf_target_gps_vision_correlation_confirm_response_t* leaf_target_gps_vision_correlation_confirm_response)
{
    return mavlink_msg_leaf_target_gps_vision_correlation_confirm_response_pack(system_id, component_id, msg, leaf_target_gps_vision_correlation_confirm_response->correlation_confirmation_accepted, leaf_target_gps_vision_correlation_confirm_response->reason, leaf_target_gps_vision_correlation_confirm_response->correlation_between_target_gps_and_vision_confirmed, leaf_target_gps_vision_correlation_confirm_response->cv_tracker_state);
}

/**
 * @brief Encode a leaf_target_gps_vision_correlation_confirm_response struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param leaf_target_gps_vision_correlation_confirm_response C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_target_gps_vision_correlation_confirm_response_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_leaf_target_gps_vision_correlation_confirm_response_t* leaf_target_gps_vision_correlation_confirm_response)
{
    return mavlink_msg_leaf_target_gps_vision_correlation_confirm_response_pack_chan(system_id, component_id, chan, msg, leaf_target_gps_vision_correlation_confirm_response->correlation_confirmation_accepted, leaf_target_gps_vision_correlation_confirm_response->reason, leaf_target_gps_vision_correlation_confirm_response->correlation_between_target_gps_and_vision_confirmed, leaf_target_gps_vision_correlation_confirm_response->cv_tracker_state);
}

/**
 * @brief Encode a leaf_target_gps_vision_correlation_confirm_response struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param leaf_target_gps_vision_correlation_confirm_response C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_target_gps_vision_correlation_confirm_response_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_leaf_target_gps_vision_correlation_confirm_response_t* leaf_target_gps_vision_correlation_confirm_response)
{
    return mavlink_msg_leaf_target_gps_vision_correlation_confirm_response_pack_status(system_id, component_id, _status, msg,  leaf_target_gps_vision_correlation_confirm_response->correlation_confirmation_accepted, leaf_target_gps_vision_correlation_confirm_response->reason, leaf_target_gps_vision_correlation_confirm_response->correlation_between_target_gps_and_vision_confirmed, leaf_target_gps_vision_correlation_confirm_response->cv_tracker_state);
}

/**
 * @brief Send a leaf_target_gps_vision_correlation_confirm_response message
 * @param chan MAVLink channel to send the message
 *
 * @param correlation_confirmation_accepted  1 = a held candidate consumed the verdict, 0 = discarded (re-send when the next candidate is held). Always equals (reason == 0).
 * @param reason  0 = accepted; 1 = no candidate held (searching, or the candidate was just dropped: the re-send trigger); 2 = not in external-confirm mode (IDLE/LOCK, or the active confirmation block is persist/instant). Carried as a full byte so future levels can be added.
 * @param correlation_between_target_gps_and_vision_confirmed  Echo of the verdict this response answers (0 = false, 1 = true); pairs request and response since the channel has no message ids.
 * @param cv_tracker_state  Tracker phase, cv_tracker_status wire codes: 0 = IDLE, 1 = ACQUIRE, 2 = LOCK, 3 = REACQUIRE (formerly LOST, code unchanged).
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_leaf_target_gps_vision_correlation_confirm_response_send(mavlink_channel_t chan, uint8_t correlation_confirmation_accepted, uint8_t reason, uint8_t correlation_between_target_gps_and_vision_confirmed, uint8_t cv_tracker_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_RESPONSE_LEN];
    _mav_put_uint8_t(buf, 0, correlation_confirmation_accepted);
    _mav_put_uint8_t(buf, 1, reason);
    _mav_put_uint8_t(buf, 2, correlation_between_target_gps_and_vision_confirmed);
    _mav_put_uint8_t(buf, 3, cv_tracker_state);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_RESPONSE, buf, MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_RESPONSE_MIN_LEN, MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_RESPONSE_LEN, MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_RESPONSE_CRC);
#else
    mavlink_leaf_target_gps_vision_correlation_confirm_response_t packet;
    packet.correlation_confirmation_accepted = correlation_confirmation_accepted;
    packet.reason = reason;
    packet.correlation_between_target_gps_and_vision_confirmed = correlation_between_target_gps_and_vision_confirmed;
    packet.cv_tracker_state = cv_tracker_state;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_RESPONSE, (const char *)&packet, MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_RESPONSE_MIN_LEN, MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_RESPONSE_LEN, MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_RESPONSE_CRC);
#endif
}

/**
 * @brief Send a leaf_target_gps_vision_correlation_confirm_response message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_leaf_target_gps_vision_correlation_confirm_response_send_struct(mavlink_channel_t chan, const mavlink_leaf_target_gps_vision_correlation_confirm_response_t* leaf_target_gps_vision_correlation_confirm_response)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_leaf_target_gps_vision_correlation_confirm_response_send(chan, leaf_target_gps_vision_correlation_confirm_response->correlation_confirmation_accepted, leaf_target_gps_vision_correlation_confirm_response->reason, leaf_target_gps_vision_correlation_confirm_response->correlation_between_target_gps_and_vision_confirmed, leaf_target_gps_vision_correlation_confirm_response->cv_tracker_state);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_RESPONSE, (const char *)leaf_target_gps_vision_correlation_confirm_response, MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_RESPONSE_MIN_LEN, MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_RESPONSE_LEN, MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_RESPONSE_CRC);
#endif
}

#if MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_RESPONSE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_leaf_target_gps_vision_correlation_confirm_response_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t correlation_confirmation_accepted, uint8_t reason, uint8_t correlation_between_target_gps_and_vision_confirmed, uint8_t cv_tracker_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, correlation_confirmation_accepted);
    _mav_put_uint8_t(buf, 1, reason);
    _mav_put_uint8_t(buf, 2, correlation_between_target_gps_and_vision_confirmed);
    _mav_put_uint8_t(buf, 3, cv_tracker_state);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_RESPONSE, buf, MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_RESPONSE_MIN_LEN, MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_RESPONSE_LEN, MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_RESPONSE_CRC);
#else
    mavlink_leaf_target_gps_vision_correlation_confirm_response_t *packet = (mavlink_leaf_target_gps_vision_correlation_confirm_response_t *)msgbuf;
    packet->correlation_confirmation_accepted = correlation_confirmation_accepted;
    packet->reason = reason;
    packet->correlation_between_target_gps_and_vision_confirmed = correlation_between_target_gps_and_vision_confirmed;
    packet->cv_tracker_state = cv_tracker_state;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_RESPONSE, (const char *)packet, MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_RESPONSE_MIN_LEN, MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_RESPONSE_LEN, MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_RESPONSE_CRC);
#endif
}
#endif

#endif

// MESSAGE LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_RESPONSE UNPACKING


/**
 * @brief Get field correlation_confirmation_accepted from leaf_target_gps_vision_correlation_confirm_response message
 *
 * @return  1 = a held candidate consumed the verdict, 0 = discarded (re-send when the next candidate is held). Always equals (reason == 0).
 */
static inline uint8_t mavlink_msg_leaf_target_gps_vision_correlation_confirm_response_get_correlation_confirmation_accepted(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field reason from leaf_target_gps_vision_correlation_confirm_response message
 *
 * @return  0 = accepted; 1 = no candidate held (searching, or the candidate was just dropped: the re-send trigger); 2 = not in external-confirm mode (IDLE/LOCK, or the active confirmation block is persist/instant). Carried as a full byte so future levels can be added.
 */
static inline uint8_t mavlink_msg_leaf_target_gps_vision_correlation_confirm_response_get_reason(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Get field correlation_between_target_gps_and_vision_confirmed from leaf_target_gps_vision_correlation_confirm_response message
 *
 * @return  Echo of the verdict this response answers (0 = false, 1 = true); pairs request and response since the channel has no message ids.
 */
static inline uint8_t mavlink_msg_leaf_target_gps_vision_correlation_confirm_response_get_correlation_between_target_gps_and_vision_confirmed(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  2);
}

/**
 * @brief Get field cv_tracker_state from leaf_target_gps_vision_correlation_confirm_response message
 *
 * @return  Tracker phase, cv_tracker_status wire codes: 0 = IDLE, 1 = ACQUIRE, 2 = LOCK, 3 = REACQUIRE (formerly LOST, code unchanged).
 */
static inline uint8_t mavlink_msg_leaf_target_gps_vision_correlation_confirm_response_get_cv_tracker_state(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  3);
}

/**
 * @brief Decode a leaf_target_gps_vision_correlation_confirm_response message into a struct
 *
 * @param msg The message to decode
 * @param leaf_target_gps_vision_correlation_confirm_response C-struct to decode the message contents into
 */
static inline void mavlink_msg_leaf_target_gps_vision_correlation_confirm_response_decode(const mavlink_message_t* msg, mavlink_leaf_target_gps_vision_correlation_confirm_response_t* leaf_target_gps_vision_correlation_confirm_response)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    leaf_target_gps_vision_correlation_confirm_response->correlation_confirmation_accepted = mavlink_msg_leaf_target_gps_vision_correlation_confirm_response_get_correlation_confirmation_accepted(msg);
    leaf_target_gps_vision_correlation_confirm_response->reason = mavlink_msg_leaf_target_gps_vision_correlation_confirm_response_get_reason(msg);
    leaf_target_gps_vision_correlation_confirm_response->correlation_between_target_gps_and_vision_confirmed = mavlink_msg_leaf_target_gps_vision_correlation_confirm_response_get_correlation_between_target_gps_and_vision_confirmed(msg);
    leaf_target_gps_vision_correlation_confirm_response->cv_tracker_state = mavlink_msg_leaf_target_gps_vision_correlation_confirm_response_get_cv_tracker_state(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_RESPONSE_LEN? msg->len : MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_RESPONSE_LEN;
        memset(leaf_target_gps_vision_correlation_confirm_response, 0, MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_RESPONSE_LEN);
    memcpy(leaf_target_gps_vision_correlation_confirm_response, _MAV_PAYLOAD(msg), len);
#endif
}
