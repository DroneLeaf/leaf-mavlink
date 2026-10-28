#pragma once
// MESSAGE LEAF_RACER_GPS_HOME PACKING

#define MAVLINK_MSG_ID_LEAF_RACER_GPS_HOME 77061


typedef struct __mavlink_leaf_racer_gps_home_t {
 int32_t home_lat_1e7; /*<  Home latitude, degrees * 1e7*/
 int32_t home_lon_1e7; /*<  Home longitude, degrees * 1e7*/
 float home_alt_m; /*< [m] Home altitude, in the GPS receiver altitude reference*/
} mavlink_leaf_racer_gps_home_t;

#define MAVLINK_MSG_ID_LEAF_RACER_GPS_HOME_LEN 12
#define MAVLINK_MSG_ID_LEAF_RACER_GPS_HOME_MIN_LEN 12
#define MAVLINK_MSG_ID_77061_LEN 12
#define MAVLINK_MSG_ID_77061_MIN_LEN 12

#define MAVLINK_MSG_ID_LEAF_RACER_GPS_HOME_CRC 109
#define MAVLINK_MSG_ID_77061_CRC 109



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_LEAF_RACER_GPS_HOME { \
    77061, \
    "LEAF_RACER_GPS_HOME", \
    3, \
    {  { "home_lat_1e7", NULL, MAVLINK_TYPE_INT32_T, 0, 0, offsetof(mavlink_leaf_racer_gps_home_t, home_lat_1e7) }, \
         { "home_lon_1e7", NULL, MAVLINK_TYPE_INT32_T, 0, 4, offsetof(mavlink_leaf_racer_gps_home_t, home_lon_1e7) }, \
         { "home_alt_m", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_leaf_racer_gps_home_t, home_alt_m) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_LEAF_RACER_GPS_HOME { \
    "LEAF_RACER_GPS_HOME", \
    3, \
    {  { "home_lat_1e7", NULL, MAVLINK_TYPE_INT32_T, 0, 0, offsetof(mavlink_leaf_racer_gps_home_t, home_lat_1e7) }, \
         { "home_lon_1e7", NULL, MAVLINK_TYPE_INT32_T, 0, 4, offsetof(mavlink_leaf_racer_gps_home_t, home_lon_1e7) }, \
         { "home_alt_m", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_leaf_racer_gps_home_t, home_alt_m) }, \
         } \
}
#endif

/**
 * @brief Pack a leaf_racer_gps_home message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param home_lat_1e7  Home latitude, degrees * 1e7
 * @param home_lon_1e7  Home longitude, degrees * 1e7
 * @param home_alt_m [m] Home altitude, in the GPS receiver altitude reference
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_racer_gps_home_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               int32_t home_lat_1e7, int32_t home_lon_1e7, float home_alt_m)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_RACER_GPS_HOME_LEN];
    _mav_put_int32_t(buf, 0, home_lat_1e7);
    _mav_put_int32_t(buf, 4, home_lon_1e7);
    _mav_put_float(buf, 8, home_alt_m);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_RACER_GPS_HOME_LEN);
#else
    mavlink_leaf_racer_gps_home_t packet;
    packet.home_lat_1e7 = home_lat_1e7;
    packet.home_lon_1e7 = home_lon_1e7;
    packet.home_alt_m = home_alt_m;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_RACER_GPS_HOME_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_RACER_GPS_HOME;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_LEAF_RACER_GPS_HOME_MIN_LEN, MAVLINK_MSG_ID_LEAF_RACER_GPS_HOME_LEN, MAVLINK_MSG_ID_LEAF_RACER_GPS_HOME_CRC);
}

/**
 * @brief Pack a leaf_racer_gps_home message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param home_lat_1e7  Home latitude, degrees * 1e7
 * @param home_lon_1e7  Home longitude, degrees * 1e7
 * @param home_alt_m [m] Home altitude, in the GPS receiver altitude reference
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_racer_gps_home_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               int32_t home_lat_1e7, int32_t home_lon_1e7, float home_alt_m)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_RACER_GPS_HOME_LEN];
    _mav_put_int32_t(buf, 0, home_lat_1e7);
    _mav_put_int32_t(buf, 4, home_lon_1e7);
    _mav_put_float(buf, 8, home_alt_m);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_RACER_GPS_HOME_LEN);
#else
    mavlink_leaf_racer_gps_home_t packet;
    packet.home_lat_1e7 = home_lat_1e7;
    packet.home_lon_1e7 = home_lon_1e7;
    packet.home_alt_m = home_alt_m;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_RACER_GPS_HOME_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_RACER_GPS_HOME;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_RACER_GPS_HOME_MIN_LEN, MAVLINK_MSG_ID_LEAF_RACER_GPS_HOME_LEN, MAVLINK_MSG_ID_LEAF_RACER_GPS_HOME_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_RACER_GPS_HOME_MIN_LEN, MAVLINK_MSG_ID_LEAF_RACER_GPS_HOME_LEN);
#endif
}

/**
 * @brief Pack a leaf_racer_gps_home message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param home_lat_1e7  Home latitude, degrees * 1e7
 * @param home_lon_1e7  Home longitude, degrees * 1e7
 * @param home_alt_m [m] Home altitude, in the GPS receiver altitude reference
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_racer_gps_home_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   int32_t home_lat_1e7,int32_t home_lon_1e7,float home_alt_m)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_RACER_GPS_HOME_LEN];
    _mav_put_int32_t(buf, 0, home_lat_1e7);
    _mav_put_int32_t(buf, 4, home_lon_1e7);
    _mav_put_float(buf, 8, home_alt_m);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_RACER_GPS_HOME_LEN);
#else
    mavlink_leaf_racer_gps_home_t packet;
    packet.home_lat_1e7 = home_lat_1e7;
    packet.home_lon_1e7 = home_lon_1e7;
    packet.home_alt_m = home_alt_m;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_RACER_GPS_HOME_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_RACER_GPS_HOME;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_LEAF_RACER_GPS_HOME_MIN_LEN, MAVLINK_MSG_ID_LEAF_RACER_GPS_HOME_LEN, MAVLINK_MSG_ID_LEAF_RACER_GPS_HOME_CRC);
}

/**
 * @brief Encode a leaf_racer_gps_home struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param leaf_racer_gps_home C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_racer_gps_home_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_leaf_racer_gps_home_t* leaf_racer_gps_home)
{
    return mavlink_msg_leaf_racer_gps_home_pack(system_id, component_id, msg, leaf_racer_gps_home->home_lat_1e7, leaf_racer_gps_home->home_lon_1e7, leaf_racer_gps_home->home_alt_m);
}

/**
 * @brief Encode a leaf_racer_gps_home struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param leaf_racer_gps_home C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_racer_gps_home_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_leaf_racer_gps_home_t* leaf_racer_gps_home)
{
    return mavlink_msg_leaf_racer_gps_home_pack_chan(system_id, component_id, chan, msg, leaf_racer_gps_home->home_lat_1e7, leaf_racer_gps_home->home_lon_1e7, leaf_racer_gps_home->home_alt_m);
}

/**
 * @brief Encode a leaf_racer_gps_home struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param leaf_racer_gps_home C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_racer_gps_home_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_leaf_racer_gps_home_t* leaf_racer_gps_home)
{
    return mavlink_msg_leaf_racer_gps_home_pack_status(system_id, component_id, _status, msg,  leaf_racer_gps_home->home_lat_1e7, leaf_racer_gps_home->home_lon_1e7, leaf_racer_gps_home->home_alt_m);
}

/**
 * @brief Send a leaf_racer_gps_home message
 * @param chan MAVLink channel to send the message
 *
 * @param home_lat_1e7  Home latitude, degrees * 1e7
 * @param home_lon_1e7  Home longitude, degrees * 1e7
 * @param home_alt_m [m] Home altitude, in the GPS receiver altitude reference
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_leaf_racer_gps_home_send(mavlink_channel_t chan, int32_t home_lat_1e7, int32_t home_lon_1e7, float home_alt_m)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_RACER_GPS_HOME_LEN];
    _mav_put_int32_t(buf, 0, home_lat_1e7);
    _mav_put_int32_t(buf, 4, home_lon_1e7);
    _mav_put_float(buf, 8, home_alt_m);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_RACER_GPS_HOME, buf, MAVLINK_MSG_ID_LEAF_RACER_GPS_HOME_MIN_LEN, MAVLINK_MSG_ID_LEAF_RACER_GPS_HOME_LEN, MAVLINK_MSG_ID_LEAF_RACER_GPS_HOME_CRC);
#else
    mavlink_leaf_racer_gps_home_t packet;
    packet.home_lat_1e7 = home_lat_1e7;
    packet.home_lon_1e7 = home_lon_1e7;
    packet.home_alt_m = home_alt_m;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_RACER_GPS_HOME, (const char *)&packet, MAVLINK_MSG_ID_LEAF_RACER_GPS_HOME_MIN_LEN, MAVLINK_MSG_ID_LEAF_RACER_GPS_HOME_LEN, MAVLINK_MSG_ID_LEAF_RACER_GPS_HOME_CRC);
#endif
}

/**
 * @brief Send a leaf_racer_gps_home message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_leaf_racer_gps_home_send_struct(mavlink_channel_t chan, const mavlink_leaf_racer_gps_home_t* leaf_racer_gps_home)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_leaf_racer_gps_home_send(chan, leaf_racer_gps_home->home_lat_1e7, leaf_racer_gps_home->home_lon_1e7, leaf_racer_gps_home->home_alt_m);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_RACER_GPS_HOME, (const char *)leaf_racer_gps_home, MAVLINK_MSG_ID_LEAF_RACER_GPS_HOME_MIN_LEN, MAVLINK_MSG_ID_LEAF_RACER_GPS_HOME_LEN, MAVLINK_MSG_ID_LEAF_RACER_GPS_HOME_CRC);
#endif
}

#if MAVLINK_MSG_ID_LEAF_RACER_GPS_HOME_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_leaf_racer_gps_home_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  int32_t home_lat_1e7, int32_t home_lon_1e7, float home_alt_m)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_int32_t(buf, 0, home_lat_1e7);
    _mav_put_int32_t(buf, 4, home_lon_1e7);
    _mav_put_float(buf, 8, home_alt_m);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_RACER_GPS_HOME, buf, MAVLINK_MSG_ID_LEAF_RACER_GPS_HOME_MIN_LEN, MAVLINK_MSG_ID_LEAF_RACER_GPS_HOME_LEN, MAVLINK_MSG_ID_LEAF_RACER_GPS_HOME_CRC);
#else
    mavlink_leaf_racer_gps_home_t *packet = (mavlink_leaf_racer_gps_home_t *)msgbuf;
    packet->home_lat_1e7 = home_lat_1e7;
    packet->home_lon_1e7 = home_lon_1e7;
    packet->home_alt_m = home_alt_m;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_RACER_GPS_HOME, (const char *)packet, MAVLINK_MSG_ID_LEAF_RACER_GPS_HOME_MIN_LEN, MAVLINK_MSG_ID_LEAF_RACER_GPS_HOME_LEN, MAVLINK_MSG_ID_LEAF_RACER_GPS_HOME_CRC);
#endif
}
#endif

#endif

// MESSAGE LEAF_RACER_GPS_HOME UNPACKING


/**
 * @brief Get field home_lat_1e7 from leaf_racer_gps_home message
 *
 * @return  Home latitude, degrees * 1e7
 */
static inline int32_t mavlink_msg_leaf_racer_gps_home_get_home_lat_1e7(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  0);
}

/**
 * @brief Get field home_lon_1e7 from leaf_racer_gps_home message
 *
 * @return  Home longitude, degrees * 1e7
 */
static inline int32_t mavlink_msg_leaf_racer_gps_home_get_home_lon_1e7(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  4);
}

/**
 * @brief Get field home_alt_m from leaf_racer_gps_home message
 *
 * @return [m] Home altitude, in the GPS receiver altitude reference
 */
static inline float mavlink_msg_leaf_racer_gps_home_get_home_alt_m(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Decode a leaf_racer_gps_home message into a struct
 *
 * @param msg The message to decode
 * @param leaf_racer_gps_home C-struct to decode the message contents into
 */
static inline void mavlink_msg_leaf_racer_gps_home_decode(const mavlink_message_t* msg, mavlink_leaf_racer_gps_home_t* leaf_racer_gps_home)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    leaf_racer_gps_home->home_lat_1e7 = mavlink_msg_leaf_racer_gps_home_get_home_lat_1e7(msg);
    leaf_racer_gps_home->home_lon_1e7 = mavlink_msg_leaf_racer_gps_home_get_home_lon_1e7(msg);
    leaf_racer_gps_home->home_alt_m = mavlink_msg_leaf_racer_gps_home_get_home_alt_m(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_LEAF_RACER_GPS_HOME_LEN? msg->len : MAVLINK_MSG_ID_LEAF_RACER_GPS_HOME_LEN;
        memset(leaf_racer_gps_home, 0, MAVLINK_MSG_ID_LEAF_RACER_GPS_HOME_LEN);
    memcpy(leaf_racer_gps_home, _MAV_PAYLOAD(msg), len);
#endif
}
