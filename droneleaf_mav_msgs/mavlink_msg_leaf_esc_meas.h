#pragma once
// MESSAGE LEAF_ESC_MEAS PACKING

#define MAVLINK_MSG_ID_LEAF_ESC_MEAS 77077


typedef struct __mavlink_leaf_esc_meas_t {
 float battery_voltage_v; /*< [V] Battery voltage from the configured battery_meter. Ignore when flags bit 0 is clear.*/
 float battery_current_a; /*< [A] Battery current from the configured current_meter. Ignore when flags bit 1 is clear.*/
 float avg_motor_rpm; /*< [rpm] Average mechanical motor speed over all motors. Ignore when flags bit 2 is clear.*/
 uint8_t rpm_source; /*<  0 none, 1 bidirectional DShot telemetry, 2 ESC sensor.*/
 uint8_t flags; /*<  Bit 0 voltage valid, bit 1 current valid, bit 2 rpm valid.*/
} mavlink_leaf_esc_meas_t;

#define MAVLINK_MSG_ID_LEAF_ESC_MEAS_LEN 14
#define MAVLINK_MSG_ID_LEAF_ESC_MEAS_MIN_LEN 14
#define MAVLINK_MSG_ID_77077_LEN 14
#define MAVLINK_MSG_ID_77077_MIN_LEN 14

#define MAVLINK_MSG_ID_LEAF_ESC_MEAS_CRC 226
#define MAVLINK_MSG_ID_77077_CRC 226



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_LEAF_ESC_MEAS { \
    77077, \
    "LEAF_ESC_MEAS", \
    5, \
    {  { "battery_voltage_v", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_leaf_esc_meas_t, battery_voltage_v) }, \
         { "battery_current_a", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_leaf_esc_meas_t, battery_current_a) }, \
         { "avg_motor_rpm", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_leaf_esc_meas_t, avg_motor_rpm) }, \
         { "rpm_source", NULL, MAVLINK_TYPE_UINT8_T, 0, 12, offsetof(mavlink_leaf_esc_meas_t, rpm_source) }, \
         { "flags", NULL, MAVLINK_TYPE_UINT8_T, 0, 13, offsetof(mavlink_leaf_esc_meas_t, flags) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_LEAF_ESC_MEAS { \
    "LEAF_ESC_MEAS", \
    5, \
    {  { "battery_voltage_v", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_leaf_esc_meas_t, battery_voltage_v) }, \
         { "battery_current_a", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_leaf_esc_meas_t, battery_current_a) }, \
         { "avg_motor_rpm", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_leaf_esc_meas_t, avg_motor_rpm) }, \
         { "rpm_source", NULL, MAVLINK_TYPE_UINT8_T, 0, 12, offsetof(mavlink_leaf_esc_meas_t, rpm_source) }, \
         { "flags", NULL, MAVLINK_TYPE_UINT8_T, 0, 13, offsetof(mavlink_leaf_esc_meas_t, flags) }, \
         } \
}
#endif

/**
 * @brief Pack a leaf_esc_meas message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param battery_voltage_v [V] Battery voltage from the configured battery_meter. Ignore when flags bit 0 is clear.
 * @param battery_current_a [A] Battery current from the configured current_meter. Ignore when flags bit 1 is clear.
 * @param avg_motor_rpm [rpm] Average mechanical motor speed over all motors. Ignore when flags bit 2 is clear.
 * @param rpm_source  0 none, 1 bidirectional DShot telemetry, 2 ESC sensor.
 * @param flags  Bit 0 voltage valid, bit 1 current valid, bit 2 rpm valid.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_esc_meas_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               float battery_voltage_v, float battery_current_a, float avg_motor_rpm, uint8_t rpm_source, uint8_t flags)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_ESC_MEAS_LEN];
    _mav_put_float(buf, 0, battery_voltage_v);
    _mav_put_float(buf, 4, battery_current_a);
    _mav_put_float(buf, 8, avg_motor_rpm);
    _mav_put_uint8_t(buf, 12, rpm_source);
    _mav_put_uint8_t(buf, 13, flags);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_ESC_MEAS_LEN);
#else
    mavlink_leaf_esc_meas_t packet;
    packet.battery_voltage_v = battery_voltage_v;
    packet.battery_current_a = battery_current_a;
    packet.avg_motor_rpm = avg_motor_rpm;
    packet.rpm_source = rpm_source;
    packet.flags = flags;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_ESC_MEAS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_ESC_MEAS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_LEAF_ESC_MEAS_MIN_LEN, MAVLINK_MSG_ID_LEAF_ESC_MEAS_LEN, MAVLINK_MSG_ID_LEAF_ESC_MEAS_CRC);
}

/**
 * @brief Pack a leaf_esc_meas message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param battery_voltage_v [V] Battery voltage from the configured battery_meter. Ignore when flags bit 0 is clear.
 * @param battery_current_a [A] Battery current from the configured current_meter. Ignore when flags bit 1 is clear.
 * @param avg_motor_rpm [rpm] Average mechanical motor speed over all motors. Ignore when flags bit 2 is clear.
 * @param rpm_source  0 none, 1 bidirectional DShot telemetry, 2 ESC sensor.
 * @param flags  Bit 0 voltage valid, bit 1 current valid, bit 2 rpm valid.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_esc_meas_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               float battery_voltage_v, float battery_current_a, float avg_motor_rpm, uint8_t rpm_source, uint8_t flags)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_ESC_MEAS_LEN];
    _mav_put_float(buf, 0, battery_voltage_v);
    _mav_put_float(buf, 4, battery_current_a);
    _mav_put_float(buf, 8, avg_motor_rpm);
    _mav_put_uint8_t(buf, 12, rpm_source);
    _mav_put_uint8_t(buf, 13, flags);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_ESC_MEAS_LEN);
#else
    mavlink_leaf_esc_meas_t packet;
    packet.battery_voltage_v = battery_voltage_v;
    packet.battery_current_a = battery_current_a;
    packet.avg_motor_rpm = avg_motor_rpm;
    packet.rpm_source = rpm_source;
    packet.flags = flags;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_ESC_MEAS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_ESC_MEAS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_ESC_MEAS_MIN_LEN, MAVLINK_MSG_ID_LEAF_ESC_MEAS_LEN, MAVLINK_MSG_ID_LEAF_ESC_MEAS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_ESC_MEAS_MIN_LEN, MAVLINK_MSG_ID_LEAF_ESC_MEAS_LEN);
#endif
}

/**
 * @brief Pack a leaf_esc_meas message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param battery_voltage_v [V] Battery voltage from the configured battery_meter. Ignore when flags bit 0 is clear.
 * @param battery_current_a [A] Battery current from the configured current_meter. Ignore when flags bit 1 is clear.
 * @param avg_motor_rpm [rpm] Average mechanical motor speed over all motors. Ignore when flags bit 2 is clear.
 * @param rpm_source  0 none, 1 bidirectional DShot telemetry, 2 ESC sensor.
 * @param flags  Bit 0 voltage valid, bit 1 current valid, bit 2 rpm valid.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_esc_meas_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   float battery_voltage_v,float battery_current_a,float avg_motor_rpm,uint8_t rpm_source,uint8_t flags)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_ESC_MEAS_LEN];
    _mav_put_float(buf, 0, battery_voltage_v);
    _mav_put_float(buf, 4, battery_current_a);
    _mav_put_float(buf, 8, avg_motor_rpm);
    _mav_put_uint8_t(buf, 12, rpm_source);
    _mav_put_uint8_t(buf, 13, flags);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_ESC_MEAS_LEN);
#else
    mavlink_leaf_esc_meas_t packet;
    packet.battery_voltage_v = battery_voltage_v;
    packet.battery_current_a = battery_current_a;
    packet.avg_motor_rpm = avg_motor_rpm;
    packet.rpm_source = rpm_source;
    packet.flags = flags;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_ESC_MEAS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_ESC_MEAS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_LEAF_ESC_MEAS_MIN_LEN, MAVLINK_MSG_ID_LEAF_ESC_MEAS_LEN, MAVLINK_MSG_ID_LEAF_ESC_MEAS_CRC);
}

/**
 * @brief Encode a leaf_esc_meas struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param leaf_esc_meas C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_esc_meas_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_leaf_esc_meas_t* leaf_esc_meas)
{
    return mavlink_msg_leaf_esc_meas_pack(system_id, component_id, msg, leaf_esc_meas->battery_voltage_v, leaf_esc_meas->battery_current_a, leaf_esc_meas->avg_motor_rpm, leaf_esc_meas->rpm_source, leaf_esc_meas->flags);
}

/**
 * @brief Encode a leaf_esc_meas struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param leaf_esc_meas C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_esc_meas_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_leaf_esc_meas_t* leaf_esc_meas)
{
    return mavlink_msg_leaf_esc_meas_pack_chan(system_id, component_id, chan, msg, leaf_esc_meas->battery_voltage_v, leaf_esc_meas->battery_current_a, leaf_esc_meas->avg_motor_rpm, leaf_esc_meas->rpm_source, leaf_esc_meas->flags);
}

/**
 * @brief Encode a leaf_esc_meas struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param leaf_esc_meas C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_esc_meas_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_leaf_esc_meas_t* leaf_esc_meas)
{
    return mavlink_msg_leaf_esc_meas_pack_status(system_id, component_id, _status, msg,  leaf_esc_meas->battery_voltage_v, leaf_esc_meas->battery_current_a, leaf_esc_meas->avg_motor_rpm, leaf_esc_meas->rpm_source, leaf_esc_meas->flags);
}

/**
 * @brief Send a leaf_esc_meas message
 * @param chan MAVLink channel to send the message
 *
 * @param battery_voltage_v [V] Battery voltage from the configured battery_meter. Ignore when flags bit 0 is clear.
 * @param battery_current_a [A] Battery current from the configured current_meter. Ignore when flags bit 1 is clear.
 * @param avg_motor_rpm [rpm] Average mechanical motor speed over all motors. Ignore when flags bit 2 is clear.
 * @param rpm_source  0 none, 1 bidirectional DShot telemetry, 2 ESC sensor.
 * @param flags  Bit 0 voltage valid, bit 1 current valid, bit 2 rpm valid.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_leaf_esc_meas_send(mavlink_channel_t chan, float battery_voltage_v, float battery_current_a, float avg_motor_rpm, uint8_t rpm_source, uint8_t flags)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_ESC_MEAS_LEN];
    _mav_put_float(buf, 0, battery_voltage_v);
    _mav_put_float(buf, 4, battery_current_a);
    _mav_put_float(buf, 8, avg_motor_rpm);
    _mav_put_uint8_t(buf, 12, rpm_source);
    _mav_put_uint8_t(buf, 13, flags);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_ESC_MEAS, buf, MAVLINK_MSG_ID_LEAF_ESC_MEAS_MIN_LEN, MAVLINK_MSG_ID_LEAF_ESC_MEAS_LEN, MAVLINK_MSG_ID_LEAF_ESC_MEAS_CRC);
#else
    mavlink_leaf_esc_meas_t packet;
    packet.battery_voltage_v = battery_voltage_v;
    packet.battery_current_a = battery_current_a;
    packet.avg_motor_rpm = avg_motor_rpm;
    packet.rpm_source = rpm_source;
    packet.flags = flags;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_ESC_MEAS, (const char *)&packet, MAVLINK_MSG_ID_LEAF_ESC_MEAS_MIN_LEN, MAVLINK_MSG_ID_LEAF_ESC_MEAS_LEN, MAVLINK_MSG_ID_LEAF_ESC_MEAS_CRC);
#endif
}

/**
 * @brief Send a leaf_esc_meas message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_leaf_esc_meas_send_struct(mavlink_channel_t chan, const mavlink_leaf_esc_meas_t* leaf_esc_meas)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_leaf_esc_meas_send(chan, leaf_esc_meas->battery_voltage_v, leaf_esc_meas->battery_current_a, leaf_esc_meas->avg_motor_rpm, leaf_esc_meas->rpm_source, leaf_esc_meas->flags);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_ESC_MEAS, (const char *)leaf_esc_meas, MAVLINK_MSG_ID_LEAF_ESC_MEAS_MIN_LEN, MAVLINK_MSG_ID_LEAF_ESC_MEAS_LEN, MAVLINK_MSG_ID_LEAF_ESC_MEAS_CRC);
#endif
}

#if MAVLINK_MSG_ID_LEAF_ESC_MEAS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_leaf_esc_meas_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  float battery_voltage_v, float battery_current_a, float avg_motor_rpm, uint8_t rpm_source, uint8_t flags)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, battery_voltage_v);
    _mav_put_float(buf, 4, battery_current_a);
    _mav_put_float(buf, 8, avg_motor_rpm);
    _mav_put_uint8_t(buf, 12, rpm_source);
    _mav_put_uint8_t(buf, 13, flags);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_ESC_MEAS, buf, MAVLINK_MSG_ID_LEAF_ESC_MEAS_MIN_LEN, MAVLINK_MSG_ID_LEAF_ESC_MEAS_LEN, MAVLINK_MSG_ID_LEAF_ESC_MEAS_CRC);
#else
    mavlink_leaf_esc_meas_t *packet = (mavlink_leaf_esc_meas_t *)msgbuf;
    packet->battery_voltage_v = battery_voltage_v;
    packet->battery_current_a = battery_current_a;
    packet->avg_motor_rpm = avg_motor_rpm;
    packet->rpm_source = rpm_source;
    packet->flags = flags;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_ESC_MEAS, (const char *)packet, MAVLINK_MSG_ID_LEAF_ESC_MEAS_MIN_LEN, MAVLINK_MSG_ID_LEAF_ESC_MEAS_LEN, MAVLINK_MSG_ID_LEAF_ESC_MEAS_CRC);
#endif
}
#endif

#endif

// MESSAGE LEAF_ESC_MEAS UNPACKING


/**
 * @brief Get field battery_voltage_v from leaf_esc_meas message
 *
 * @return [V] Battery voltage from the configured battery_meter. Ignore when flags bit 0 is clear.
 */
static inline float mavlink_msg_leaf_esc_meas_get_battery_voltage_v(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field battery_current_a from leaf_esc_meas message
 *
 * @return [A] Battery current from the configured current_meter. Ignore when flags bit 1 is clear.
 */
static inline float mavlink_msg_leaf_esc_meas_get_battery_current_a(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field avg_motor_rpm from leaf_esc_meas message
 *
 * @return [rpm] Average mechanical motor speed over all motors. Ignore when flags bit 2 is clear.
 */
static inline float mavlink_msg_leaf_esc_meas_get_avg_motor_rpm(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field rpm_source from leaf_esc_meas message
 *
 * @return  0 none, 1 bidirectional DShot telemetry, 2 ESC sensor.
 */
static inline uint8_t mavlink_msg_leaf_esc_meas_get_rpm_source(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  12);
}

/**
 * @brief Get field flags from leaf_esc_meas message
 *
 * @return  Bit 0 voltage valid, bit 1 current valid, bit 2 rpm valid.
 */
static inline uint8_t mavlink_msg_leaf_esc_meas_get_flags(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  13);
}

/**
 * @brief Decode a leaf_esc_meas message into a struct
 *
 * @param msg The message to decode
 * @param leaf_esc_meas C-struct to decode the message contents into
 */
static inline void mavlink_msg_leaf_esc_meas_decode(const mavlink_message_t* msg, mavlink_leaf_esc_meas_t* leaf_esc_meas)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    leaf_esc_meas->battery_voltage_v = mavlink_msg_leaf_esc_meas_get_battery_voltage_v(msg);
    leaf_esc_meas->battery_current_a = mavlink_msg_leaf_esc_meas_get_battery_current_a(msg);
    leaf_esc_meas->avg_motor_rpm = mavlink_msg_leaf_esc_meas_get_avg_motor_rpm(msg);
    leaf_esc_meas->rpm_source = mavlink_msg_leaf_esc_meas_get_rpm_source(msg);
    leaf_esc_meas->flags = mavlink_msg_leaf_esc_meas_get_flags(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_LEAF_ESC_MEAS_LEN? msg->len : MAVLINK_MSG_ID_LEAF_ESC_MEAS_LEN;
        memset(leaf_esc_meas, 0, MAVLINK_MSG_ID_LEAF_ESC_MEAS_LEN);
    memcpy(leaf_esc_meas, _MAV_PAYLOAD(msg), len);
#endif
}
