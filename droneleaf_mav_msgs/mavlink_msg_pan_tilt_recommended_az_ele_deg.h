#pragma once
// MESSAGE PAN_TILT_RECOMMENDED_AZ_ELE_DEG PACKING

#define MAVLINK_MSG_ID_PAN_TILT_RECOMMENDED_AZ_ELE_DEG 77063


typedef struct __mavlink_pan_tilt_recommended_az_ele_deg_t {
 uint64_t time_usec; /*< [us] Monotonic generation timestamp.*/
 float azimuth_deg; /*< [deg] Clockwise from north; NaN when invalid.*/
 float elevation_deg; /*< [deg] Configured departure angle above horizon; NaN when invalid.*/
 uint8_t valid; /*<  One when the recommendation is valid.*/
} mavlink_pan_tilt_recommended_az_ele_deg_t;

#define MAVLINK_MSG_ID_PAN_TILT_RECOMMENDED_AZ_ELE_DEG_LEN 17
#define MAVLINK_MSG_ID_PAN_TILT_RECOMMENDED_AZ_ELE_DEG_MIN_LEN 17
#define MAVLINK_MSG_ID_77063_LEN 17
#define MAVLINK_MSG_ID_77063_MIN_LEN 17

#define MAVLINK_MSG_ID_PAN_TILT_RECOMMENDED_AZ_ELE_DEG_CRC 148
#define MAVLINK_MSG_ID_77063_CRC 148



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_PAN_TILT_RECOMMENDED_AZ_ELE_DEG { \
    77063, \
    "PAN_TILT_RECOMMENDED_AZ_ELE_DEG", \
    4, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_pan_tilt_recommended_az_ele_deg_t, time_usec) }, \
         { "azimuth_deg", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_pan_tilt_recommended_az_ele_deg_t, azimuth_deg) }, \
         { "elevation_deg", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_pan_tilt_recommended_az_ele_deg_t, elevation_deg) }, \
         { "valid", NULL, MAVLINK_TYPE_UINT8_T, 0, 16, offsetof(mavlink_pan_tilt_recommended_az_ele_deg_t, valid) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_PAN_TILT_RECOMMENDED_AZ_ELE_DEG { \
    "PAN_TILT_RECOMMENDED_AZ_ELE_DEG", \
    4, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_pan_tilt_recommended_az_ele_deg_t, time_usec) }, \
         { "azimuth_deg", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_pan_tilt_recommended_az_ele_deg_t, azimuth_deg) }, \
         { "elevation_deg", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_pan_tilt_recommended_az_ele_deg_t, elevation_deg) }, \
         { "valid", NULL, MAVLINK_TYPE_UINT8_T, 0, 16, offsetof(mavlink_pan_tilt_recommended_az_ele_deg_t, valid) }, \
         } \
}
#endif

/**
 * @brief Pack a pan_tilt_recommended_az_ele_deg message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec [us] Monotonic generation timestamp.
 * @param azimuth_deg [deg] Clockwise from north; NaN when invalid.
 * @param elevation_deg [deg] Configured departure angle above horizon; NaN when invalid.
 * @param valid  One when the recommendation is valid.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_pan_tilt_recommended_az_ele_deg_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t time_usec, float azimuth_deg, float elevation_deg, uint8_t valid)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_PAN_TILT_RECOMMENDED_AZ_ELE_DEG_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, azimuth_deg);
    _mav_put_float(buf, 12, elevation_deg);
    _mav_put_uint8_t(buf, 16, valid);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_PAN_TILT_RECOMMENDED_AZ_ELE_DEG_LEN);
#else
    mavlink_pan_tilt_recommended_az_ele_deg_t packet;
    packet.time_usec = time_usec;
    packet.azimuth_deg = azimuth_deg;
    packet.elevation_deg = elevation_deg;
    packet.valid = valid;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_PAN_TILT_RECOMMENDED_AZ_ELE_DEG_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_PAN_TILT_RECOMMENDED_AZ_ELE_DEG;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_PAN_TILT_RECOMMENDED_AZ_ELE_DEG_MIN_LEN, MAVLINK_MSG_ID_PAN_TILT_RECOMMENDED_AZ_ELE_DEG_LEN, MAVLINK_MSG_ID_PAN_TILT_RECOMMENDED_AZ_ELE_DEG_CRC);
}

/**
 * @brief Pack a pan_tilt_recommended_az_ele_deg message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec [us] Monotonic generation timestamp.
 * @param azimuth_deg [deg] Clockwise from north; NaN when invalid.
 * @param elevation_deg [deg] Configured departure angle above horizon; NaN when invalid.
 * @param valid  One when the recommendation is valid.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_pan_tilt_recommended_az_ele_deg_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint64_t time_usec, float azimuth_deg, float elevation_deg, uint8_t valid)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_PAN_TILT_RECOMMENDED_AZ_ELE_DEG_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, azimuth_deg);
    _mav_put_float(buf, 12, elevation_deg);
    _mav_put_uint8_t(buf, 16, valid);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_PAN_TILT_RECOMMENDED_AZ_ELE_DEG_LEN);
#else
    mavlink_pan_tilt_recommended_az_ele_deg_t packet;
    packet.time_usec = time_usec;
    packet.azimuth_deg = azimuth_deg;
    packet.elevation_deg = elevation_deg;
    packet.valid = valid;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_PAN_TILT_RECOMMENDED_AZ_ELE_DEG_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_PAN_TILT_RECOMMENDED_AZ_ELE_DEG;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_PAN_TILT_RECOMMENDED_AZ_ELE_DEG_MIN_LEN, MAVLINK_MSG_ID_PAN_TILT_RECOMMENDED_AZ_ELE_DEG_LEN, MAVLINK_MSG_ID_PAN_TILT_RECOMMENDED_AZ_ELE_DEG_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_PAN_TILT_RECOMMENDED_AZ_ELE_DEG_MIN_LEN, MAVLINK_MSG_ID_PAN_TILT_RECOMMENDED_AZ_ELE_DEG_LEN);
#endif
}

/**
 * @brief Pack a pan_tilt_recommended_az_ele_deg message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_usec [us] Monotonic generation timestamp.
 * @param azimuth_deg [deg] Clockwise from north; NaN when invalid.
 * @param elevation_deg [deg] Configured departure angle above horizon; NaN when invalid.
 * @param valid  One when the recommendation is valid.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_pan_tilt_recommended_az_ele_deg_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t time_usec,float azimuth_deg,float elevation_deg,uint8_t valid)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_PAN_TILT_RECOMMENDED_AZ_ELE_DEG_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, azimuth_deg);
    _mav_put_float(buf, 12, elevation_deg);
    _mav_put_uint8_t(buf, 16, valid);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_PAN_TILT_RECOMMENDED_AZ_ELE_DEG_LEN);
#else
    mavlink_pan_tilt_recommended_az_ele_deg_t packet;
    packet.time_usec = time_usec;
    packet.azimuth_deg = azimuth_deg;
    packet.elevation_deg = elevation_deg;
    packet.valid = valid;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_PAN_TILT_RECOMMENDED_AZ_ELE_DEG_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_PAN_TILT_RECOMMENDED_AZ_ELE_DEG;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_PAN_TILT_RECOMMENDED_AZ_ELE_DEG_MIN_LEN, MAVLINK_MSG_ID_PAN_TILT_RECOMMENDED_AZ_ELE_DEG_LEN, MAVLINK_MSG_ID_PAN_TILT_RECOMMENDED_AZ_ELE_DEG_CRC);
}

/**
 * @brief Encode a pan_tilt_recommended_az_ele_deg struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param pan_tilt_recommended_az_ele_deg C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_pan_tilt_recommended_az_ele_deg_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_pan_tilt_recommended_az_ele_deg_t* pan_tilt_recommended_az_ele_deg)
{
    return mavlink_msg_pan_tilt_recommended_az_ele_deg_pack(system_id, component_id, msg, pan_tilt_recommended_az_ele_deg->time_usec, pan_tilt_recommended_az_ele_deg->azimuth_deg, pan_tilt_recommended_az_ele_deg->elevation_deg, pan_tilt_recommended_az_ele_deg->valid);
}

/**
 * @brief Encode a pan_tilt_recommended_az_ele_deg struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param pan_tilt_recommended_az_ele_deg C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_pan_tilt_recommended_az_ele_deg_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_pan_tilt_recommended_az_ele_deg_t* pan_tilt_recommended_az_ele_deg)
{
    return mavlink_msg_pan_tilt_recommended_az_ele_deg_pack_chan(system_id, component_id, chan, msg, pan_tilt_recommended_az_ele_deg->time_usec, pan_tilt_recommended_az_ele_deg->azimuth_deg, pan_tilt_recommended_az_ele_deg->elevation_deg, pan_tilt_recommended_az_ele_deg->valid);
}

/**
 * @brief Encode a pan_tilt_recommended_az_ele_deg struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param pan_tilt_recommended_az_ele_deg C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_pan_tilt_recommended_az_ele_deg_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_pan_tilt_recommended_az_ele_deg_t* pan_tilt_recommended_az_ele_deg)
{
    return mavlink_msg_pan_tilt_recommended_az_ele_deg_pack_status(system_id, component_id, _status, msg,  pan_tilt_recommended_az_ele_deg->time_usec, pan_tilt_recommended_az_ele_deg->azimuth_deg, pan_tilt_recommended_az_ele_deg->elevation_deg, pan_tilt_recommended_az_ele_deg->valid);
}

/**
 * @brief Send a pan_tilt_recommended_az_ele_deg message
 * @param chan MAVLink channel to send the message
 *
 * @param time_usec [us] Monotonic generation timestamp.
 * @param azimuth_deg [deg] Clockwise from north; NaN when invalid.
 * @param elevation_deg [deg] Configured departure angle above horizon; NaN when invalid.
 * @param valid  One when the recommendation is valid.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_pan_tilt_recommended_az_ele_deg_send(mavlink_channel_t chan, uint64_t time_usec, float azimuth_deg, float elevation_deg, uint8_t valid)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_PAN_TILT_RECOMMENDED_AZ_ELE_DEG_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, azimuth_deg);
    _mav_put_float(buf, 12, elevation_deg);
    _mav_put_uint8_t(buf, 16, valid);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PAN_TILT_RECOMMENDED_AZ_ELE_DEG, buf, MAVLINK_MSG_ID_PAN_TILT_RECOMMENDED_AZ_ELE_DEG_MIN_LEN, MAVLINK_MSG_ID_PAN_TILT_RECOMMENDED_AZ_ELE_DEG_LEN, MAVLINK_MSG_ID_PAN_TILT_RECOMMENDED_AZ_ELE_DEG_CRC);
#else
    mavlink_pan_tilt_recommended_az_ele_deg_t packet;
    packet.time_usec = time_usec;
    packet.azimuth_deg = azimuth_deg;
    packet.elevation_deg = elevation_deg;
    packet.valid = valid;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PAN_TILT_RECOMMENDED_AZ_ELE_DEG, (const char *)&packet, MAVLINK_MSG_ID_PAN_TILT_RECOMMENDED_AZ_ELE_DEG_MIN_LEN, MAVLINK_MSG_ID_PAN_TILT_RECOMMENDED_AZ_ELE_DEG_LEN, MAVLINK_MSG_ID_PAN_TILT_RECOMMENDED_AZ_ELE_DEG_CRC);
#endif
}

/**
 * @brief Send a pan_tilt_recommended_az_ele_deg message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_pan_tilt_recommended_az_ele_deg_send_struct(mavlink_channel_t chan, const mavlink_pan_tilt_recommended_az_ele_deg_t* pan_tilt_recommended_az_ele_deg)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_pan_tilt_recommended_az_ele_deg_send(chan, pan_tilt_recommended_az_ele_deg->time_usec, pan_tilt_recommended_az_ele_deg->azimuth_deg, pan_tilt_recommended_az_ele_deg->elevation_deg, pan_tilt_recommended_az_ele_deg->valid);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PAN_TILT_RECOMMENDED_AZ_ELE_DEG, (const char *)pan_tilt_recommended_az_ele_deg, MAVLINK_MSG_ID_PAN_TILT_RECOMMENDED_AZ_ELE_DEG_MIN_LEN, MAVLINK_MSG_ID_PAN_TILT_RECOMMENDED_AZ_ELE_DEG_LEN, MAVLINK_MSG_ID_PAN_TILT_RECOMMENDED_AZ_ELE_DEG_CRC);
#endif
}

#if MAVLINK_MSG_ID_PAN_TILT_RECOMMENDED_AZ_ELE_DEG_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_pan_tilt_recommended_az_ele_deg_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t time_usec, float azimuth_deg, float elevation_deg, uint8_t valid)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, azimuth_deg);
    _mav_put_float(buf, 12, elevation_deg);
    _mav_put_uint8_t(buf, 16, valid);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PAN_TILT_RECOMMENDED_AZ_ELE_DEG, buf, MAVLINK_MSG_ID_PAN_TILT_RECOMMENDED_AZ_ELE_DEG_MIN_LEN, MAVLINK_MSG_ID_PAN_TILT_RECOMMENDED_AZ_ELE_DEG_LEN, MAVLINK_MSG_ID_PAN_TILT_RECOMMENDED_AZ_ELE_DEG_CRC);
#else
    mavlink_pan_tilt_recommended_az_ele_deg_t *packet = (mavlink_pan_tilt_recommended_az_ele_deg_t *)msgbuf;
    packet->time_usec = time_usec;
    packet->azimuth_deg = azimuth_deg;
    packet->elevation_deg = elevation_deg;
    packet->valid = valid;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PAN_TILT_RECOMMENDED_AZ_ELE_DEG, (const char *)packet, MAVLINK_MSG_ID_PAN_TILT_RECOMMENDED_AZ_ELE_DEG_MIN_LEN, MAVLINK_MSG_ID_PAN_TILT_RECOMMENDED_AZ_ELE_DEG_LEN, MAVLINK_MSG_ID_PAN_TILT_RECOMMENDED_AZ_ELE_DEG_CRC);
#endif
}
#endif

#endif

// MESSAGE PAN_TILT_RECOMMENDED_AZ_ELE_DEG UNPACKING


/**
 * @brief Get field time_usec from pan_tilt_recommended_az_ele_deg message
 *
 * @return [us] Monotonic generation timestamp.
 */
static inline uint64_t mavlink_msg_pan_tilt_recommended_az_ele_deg_get_time_usec(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field azimuth_deg from pan_tilt_recommended_az_ele_deg message
 *
 * @return [deg] Clockwise from north; NaN when invalid.
 */
static inline float mavlink_msg_pan_tilt_recommended_az_ele_deg_get_azimuth_deg(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field elevation_deg from pan_tilt_recommended_az_ele_deg message
 *
 * @return [deg] Configured departure angle above horizon; NaN when invalid.
 */
static inline float mavlink_msg_pan_tilt_recommended_az_ele_deg_get_elevation_deg(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field valid from pan_tilt_recommended_az_ele_deg message
 *
 * @return  One when the recommendation is valid.
 */
static inline uint8_t mavlink_msg_pan_tilt_recommended_az_ele_deg_get_valid(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  16);
}

/**
 * @brief Decode a pan_tilt_recommended_az_ele_deg message into a struct
 *
 * @param msg The message to decode
 * @param pan_tilt_recommended_az_ele_deg C-struct to decode the message contents into
 */
static inline void mavlink_msg_pan_tilt_recommended_az_ele_deg_decode(const mavlink_message_t* msg, mavlink_pan_tilt_recommended_az_ele_deg_t* pan_tilt_recommended_az_ele_deg)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    pan_tilt_recommended_az_ele_deg->time_usec = mavlink_msg_pan_tilt_recommended_az_ele_deg_get_time_usec(msg);
    pan_tilt_recommended_az_ele_deg->azimuth_deg = mavlink_msg_pan_tilt_recommended_az_ele_deg_get_azimuth_deg(msg);
    pan_tilt_recommended_az_ele_deg->elevation_deg = mavlink_msg_pan_tilt_recommended_az_ele_deg_get_elevation_deg(msg);
    pan_tilt_recommended_az_ele_deg->valid = mavlink_msg_pan_tilt_recommended_az_ele_deg_get_valid(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_PAN_TILT_RECOMMENDED_AZ_ELE_DEG_LEN? msg->len : MAVLINK_MSG_ID_PAN_TILT_RECOMMENDED_AZ_ELE_DEG_LEN;
        memset(pan_tilt_recommended_az_ele_deg, 0, MAVLINK_MSG_ID_PAN_TILT_RECOMMENDED_AZ_ELE_DEG_LEN);
    memcpy(pan_tilt_recommended_az_ele_deg, _MAV_PAYLOAD(msg), len);
#endif
}
