#pragma once
// MESSAGE LEAF_GPS_ORIGIN_STATUS PACKING

#define MAVLINK_MSG_ID_LEAF_GPS_ORIGIN_STATUS 77048


typedef struct __mavlink_leaf_gps_origin_status_t {
 int32_t latitude; /*< [degE7] GPS origin latitude in degE7*/
 int32_t longitude; /*< [degE7] GPS origin longitude in degE7*/
 int32_t altitude; /*< [mm] GPS origin altitude in mm (positive up)*/
 uint8_t manager_status; /*<  GPS manager operational state*/
} mavlink_leaf_gps_origin_status_t;

#define MAVLINK_MSG_ID_LEAF_GPS_ORIGIN_STATUS_LEN 13
#define MAVLINK_MSG_ID_LEAF_GPS_ORIGIN_STATUS_MIN_LEN 13
#define MAVLINK_MSG_ID_77048_LEN 13
#define MAVLINK_MSG_ID_77048_MIN_LEN 13

#define MAVLINK_MSG_ID_LEAF_GPS_ORIGIN_STATUS_CRC 225
#define MAVLINK_MSG_ID_77048_CRC 225



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_LEAF_GPS_ORIGIN_STATUS { \
    77048, \
    "LEAF_GPS_ORIGIN_STATUS", \
    4, \
    {  { "latitude", NULL, MAVLINK_TYPE_INT32_T, 0, 0, offsetof(mavlink_leaf_gps_origin_status_t, latitude) }, \
         { "longitude", NULL, MAVLINK_TYPE_INT32_T, 0, 4, offsetof(mavlink_leaf_gps_origin_status_t, longitude) }, \
         { "altitude", NULL, MAVLINK_TYPE_INT32_T, 0, 8, offsetof(mavlink_leaf_gps_origin_status_t, altitude) }, \
         { "manager_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 12, offsetof(mavlink_leaf_gps_origin_status_t, manager_status) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_LEAF_GPS_ORIGIN_STATUS { \
    "LEAF_GPS_ORIGIN_STATUS", \
    4, \
    {  { "latitude", NULL, MAVLINK_TYPE_INT32_T, 0, 0, offsetof(mavlink_leaf_gps_origin_status_t, latitude) }, \
         { "longitude", NULL, MAVLINK_TYPE_INT32_T, 0, 4, offsetof(mavlink_leaf_gps_origin_status_t, longitude) }, \
         { "altitude", NULL, MAVLINK_TYPE_INT32_T, 0, 8, offsetof(mavlink_leaf_gps_origin_status_t, altitude) }, \
         { "manager_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 12, offsetof(mavlink_leaf_gps_origin_status_t, manager_status) }, \
         } \
}
#endif

/**
 * @brief Pack a leaf_gps_origin_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param latitude [degE7] GPS origin latitude in degE7
 * @param longitude [degE7] GPS origin longitude in degE7
 * @param altitude [mm] GPS origin altitude in mm (positive up)
 * @param manager_status  GPS manager operational state
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_gps_origin_status_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               int32_t latitude, int32_t longitude, int32_t altitude, uint8_t manager_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_GPS_ORIGIN_STATUS_LEN];
    _mav_put_int32_t(buf, 0, latitude);
    _mav_put_int32_t(buf, 4, longitude);
    _mav_put_int32_t(buf, 8, altitude);
    _mav_put_uint8_t(buf, 12, manager_status);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_GPS_ORIGIN_STATUS_LEN);
#else
    mavlink_leaf_gps_origin_status_t packet;
    packet.latitude = latitude;
    packet.longitude = longitude;
    packet.altitude = altitude;
    packet.manager_status = manager_status;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_GPS_ORIGIN_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_GPS_ORIGIN_STATUS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_LEAF_GPS_ORIGIN_STATUS_MIN_LEN, MAVLINK_MSG_ID_LEAF_GPS_ORIGIN_STATUS_LEN, MAVLINK_MSG_ID_LEAF_GPS_ORIGIN_STATUS_CRC);
}

/**
 * @brief Pack a leaf_gps_origin_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param latitude [degE7] GPS origin latitude in degE7
 * @param longitude [degE7] GPS origin longitude in degE7
 * @param altitude [mm] GPS origin altitude in mm (positive up)
 * @param manager_status  GPS manager operational state
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_gps_origin_status_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               int32_t latitude, int32_t longitude, int32_t altitude, uint8_t manager_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_GPS_ORIGIN_STATUS_LEN];
    _mav_put_int32_t(buf, 0, latitude);
    _mav_put_int32_t(buf, 4, longitude);
    _mav_put_int32_t(buf, 8, altitude);
    _mav_put_uint8_t(buf, 12, manager_status);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_GPS_ORIGIN_STATUS_LEN);
#else
    mavlink_leaf_gps_origin_status_t packet;
    packet.latitude = latitude;
    packet.longitude = longitude;
    packet.altitude = altitude;
    packet.manager_status = manager_status;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_GPS_ORIGIN_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_GPS_ORIGIN_STATUS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_GPS_ORIGIN_STATUS_MIN_LEN, MAVLINK_MSG_ID_LEAF_GPS_ORIGIN_STATUS_LEN, MAVLINK_MSG_ID_LEAF_GPS_ORIGIN_STATUS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_GPS_ORIGIN_STATUS_MIN_LEN, MAVLINK_MSG_ID_LEAF_GPS_ORIGIN_STATUS_LEN);
#endif
}

/**
 * @brief Pack a leaf_gps_origin_status message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param latitude [degE7] GPS origin latitude in degE7
 * @param longitude [degE7] GPS origin longitude in degE7
 * @param altitude [mm] GPS origin altitude in mm (positive up)
 * @param manager_status  GPS manager operational state
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_gps_origin_status_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   int32_t latitude,int32_t longitude,int32_t altitude,uint8_t manager_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_GPS_ORIGIN_STATUS_LEN];
    _mav_put_int32_t(buf, 0, latitude);
    _mav_put_int32_t(buf, 4, longitude);
    _mav_put_int32_t(buf, 8, altitude);
    _mav_put_uint8_t(buf, 12, manager_status);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_GPS_ORIGIN_STATUS_LEN);
#else
    mavlink_leaf_gps_origin_status_t packet;
    packet.latitude = latitude;
    packet.longitude = longitude;
    packet.altitude = altitude;
    packet.manager_status = manager_status;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_GPS_ORIGIN_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_GPS_ORIGIN_STATUS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_LEAF_GPS_ORIGIN_STATUS_MIN_LEN, MAVLINK_MSG_ID_LEAF_GPS_ORIGIN_STATUS_LEN, MAVLINK_MSG_ID_LEAF_GPS_ORIGIN_STATUS_CRC);
}

/**
 * @brief Encode a leaf_gps_origin_status struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param leaf_gps_origin_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_gps_origin_status_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_leaf_gps_origin_status_t* leaf_gps_origin_status)
{
    return mavlink_msg_leaf_gps_origin_status_pack(system_id, component_id, msg, leaf_gps_origin_status->latitude, leaf_gps_origin_status->longitude, leaf_gps_origin_status->altitude, leaf_gps_origin_status->manager_status);
}

/**
 * @brief Encode a leaf_gps_origin_status struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param leaf_gps_origin_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_gps_origin_status_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_leaf_gps_origin_status_t* leaf_gps_origin_status)
{
    return mavlink_msg_leaf_gps_origin_status_pack_chan(system_id, component_id, chan, msg, leaf_gps_origin_status->latitude, leaf_gps_origin_status->longitude, leaf_gps_origin_status->altitude, leaf_gps_origin_status->manager_status);
}

/**
 * @brief Encode a leaf_gps_origin_status struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param leaf_gps_origin_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_gps_origin_status_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_leaf_gps_origin_status_t* leaf_gps_origin_status)
{
    return mavlink_msg_leaf_gps_origin_status_pack_status(system_id, component_id, _status, msg,  leaf_gps_origin_status->latitude, leaf_gps_origin_status->longitude, leaf_gps_origin_status->altitude, leaf_gps_origin_status->manager_status);
}

/**
 * @brief Send a leaf_gps_origin_status message
 * @param chan MAVLink channel to send the message
 *
 * @param latitude [degE7] GPS origin latitude in degE7
 * @param longitude [degE7] GPS origin longitude in degE7
 * @param altitude [mm] GPS origin altitude in mm (positive up)
 * @param manager_status  GPS manager operational state
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_leaf_gps_origin_status_send(mavlink_channel_t chan, int32_t latitude, int32_t longitude, int32_t altitude, uint8_t manager_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_GPS_ORIGIN_STATUS_LEN];
    _mav_put_int32_t(buf, 0, latitude);
    _mav_put_int32_t(buf, 4, longitude);
    _mav_put_int32_t(buf, 8, altitude);
    _mav_put_uint8_t(buf, 12, manager_status);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_GPS_ORIGIN_STATUS, buf, MAVLINK_MSG_ID_LEAF_GPS_ORIGIN_STATUS_MIN_LEN, MAVLINK_MSG_ID_LEAF_GPS_ORIGIN_STATUS_LEN, MAVLINK_MSG_ID_LEAF_GPS_ORIGIN_STATUS_CRC);
#else
    mavlink_leaf_gps_origin_status_t packet;
    packet.latitude = latitude;
    packet.longitude = longitude;
    packet.altitude = altitude;
    packet.manager_status = manager_status;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_GPS_ORIGIN_STATUS, (const char *)&packet, MAVLINK_MSG_ID_LEAF_GPS_ORIGIN_STATUS_MIN_LEN, MAVLINK_MSG_ID_LEAF_GPS_ORIGIN_STATUS_LEN, MAVLINK_MSG_ID_LEAF_GPS_ORIGIN_STATUS_CRC);
#endif
}

/**
 * @brief Send a leaf_gps_origin_status message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_leaf_gps_origin_status_send_struct(mavlink_channel_t chan, const mavlink_leaf_gps_origin_status_t* leaf_gps_origin_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_leaf_gps_origin_status_send(chan, leaf_gps_origin_status->latitude, leaf_gps_origin_status->longitude, leaf_gps_origin_status->altitude, leaf_gps_origin_status->manager_status);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_GPS_ORIGIN_STATUS, (const char *)leaf_gps_origin_status, MAVLINK_MSG_ID_LEAF_GPS_ORIGIN_STATUS_MIN_LEN, MAVLINK_MSG_ID_LEAF_GPS_ORIGIN_STATUS_LEN, MAVLINK_MSG_ID_LEAF_GPS_ORIGIN_STATUS_CRC);
#endif
}

#if MAVLINK_MSG_ID_LEAF_GPS_ORIGIN_STATUS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_leaf_gps_origin_status_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  int32_t latitude, int32_t longitude, int32_t altitude, uint8_t manager_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_int32_t(buf, 0, latitude);
    _mav_put_int32_t(buf, 4, longitude);
    _mav_put_int32_t(buf, 8, altitude);
    _mav_put_uint8_t(buf, 12, manager_status);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_GPS_ORIGIN_STATUS, buf, MAVLINK_MSG_ID_LEAF_GPS_ORIGIN_STATUS_MIN_LEN, MAVLINK_MSG_ID_LEAF_GPS_ORIGIN_STATUS_LEN, MAVLINK_MSG_ID_LEAF_GPS_ORIGIN_STATUS_CRC);
#else
    mavlink_leaf_gps_origin_status_t *packet = (mavlink_leaf_gps_origin_status_t *)msgbuf;
    packet->latitude = latitude;
    packet->longitude = longitude;
    packet->altitude = altitude;
    packet->manager_status = manager_status;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_GPS_ORIGIN_STATUS, (const char *)packet, MAVLINK_MSG_ID_LEAF_GPS_ORIGIN_STATUS_MIN_LEN, MAVLINK_MSG_ID_LEAF_GPS_ORIGIN_STATUS_LEN, MAVLINK_MSG_ID_LEAF_GPS_ORIGIN_STATUS_CRC);
#endif
}
#endif

#endif

// MESSAGE LEAF_GPS_ORIGIN_STATUS UNPACKING


/**
 * @brief Get field latitude from leaf_gps_origin_status message
 *
 * @return [degE7] GPS origin latitude in degE7
 */
static inline int32_t mavlink_msg_leaf_gps_origin_status_get_latitude(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  0);
}

/**
 * @brief Get field longitude from leaf_gps_origin_status message
 *
 * @return [degE7] GPS origin longitude in degE7
 */
static inline int32_t mavlink_msg_leaf_gps_origin_status_get_longitude(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  4);
}

/**
 * @brief Get field altitude from leaf_gps_origin_status message
 *
 * @return [mm] GPS origin altitude in mm (positive up)
 */
static inline int32_t mavlink_msg_leaf_gps_origin_status_get_altitude(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  8);
}

/**
 * @brief Get field manager_status from leaf_gps_origin_status message
 *
 * @return  GPS manager operational state
 */
static inline uint8_t mavlink_msg_leaf_gps_origin_status_get_manager_status(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  12);
}

/**
 * @brief Decode a leaf_gps_origin_status message into a struct
 *
 * @param msg The message to decode
 * @param leaf_gps_origin_status C-struct to decode the message contents into
 */
static inline void mavlink_msg_leaf_gps_origin_status_decode(const mavlink_message_t* msg, mavlink_leaf_gps_origin_status_t* leaf_gps_origin_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    leaf_gps_origin_status->latitude = mavlink_msg_leaf_gps_origin_status_get_latitude(msg);
    leaf_gps_origin_status->longitude = mavlink_msg_leaf_gps_origin_status_get_longitude(msg);
    leaf_gps_origin_status->altitude = mavlink_msg_leaf_gps_origin_status_get_altitude(msg);
    leaf_gps_origin_status->manager_status = mavlink_msg_leaf_gps_origin_status_get_manager_status(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_LEAF_GPS_ORIGIN_STATUS_LEN? msg->len : MAVLINK_MSG_ID_LEAF_GPS_ORIGIN_STATUS_LEN;
        memset(leaf_gps_origin_status, 0, MAVLINK_MSG_ID_LEAF_GPS_ORIGIN_STATUS_LEN);
    memcpy(leaf_gps_origin_status, _MAV_PAYLOAD(msg), len);
#endif
}
