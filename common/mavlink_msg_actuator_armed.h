#pragma once
// MESSAGE ACTUATOR_ARMED PACKING

#define MAVLINK_MSG_ID_ACTUATOR_ARMED 207


typedef struct __mavlink_actuator_armed_t {
 uint8_t armed; /*<  Set to true if system is armed*/
 uint8_t prearmed; /*<  Set to true if the actuator safety is disabled but motors are not armed*/
 uint8_t ready_to_arm; /*<  Set to true if system is ready to be armed*/
 uint8_t lockdown; /*<  Set to true if actuators are forced to being disabled (due to emergency or HIL)*/
 uint8_t manual_lockdown; /*<  Set to true if manual throttle kill switch is engaged*/
 uint8_t force_failsafe; /*<  Set to true if the actuators are forced to the failsafe position*/
 uint8_t in_esc_calibration_mode; /*<  IO/FMU should ignore messages from the actuator controls topics*/
} mavlink_actuator_armed_t;

#define MAVLINK_MSG_ID_ACTUATOR_ARMED_LEN 7
#define MAVLINK_MSG_ID_ACTUATOR_ARMED_MIN_LEN 7
#define MAVLINK_MSG_ID_207_LEN 7
#define MAVLINK_MSG_ID_207_MIN_LEN 7

#define MAVLINK_MSG_ID_ACTUATOR_ARMED_CRC 94
#define MAVLINK_MSG_ID_207_CRC 94



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ACTUATOR_ARMED { \
    207, \
    "ACTUATOR_ARMED", \
    7, \
    {  { "armed", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_actuator_armed_t, armed) }, \
         { "prearmed", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_actuator_armed_t, prearmed) }, \
         { "ready_to_arm", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_actuator_armed_t, ready_to_arm) }, \
         { "lockdown", NULL, MAVLINK_TYPE_UINT8_T, 0, 3, offsetof(mavlink_actuator_armed_t, lockdown) }, \
         { "manual_lockdown", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_actuator_armed_t, manual_lockdown) }, \
         { "force_failsafe", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_actuator_armed_t, force_failsafe) }, \
         { "in_esc_calibration_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_actuator_armed_t, in_esc_calibration_mode) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ACTUATOR_ARMED { \
    "ACTUATOR_ARMED", \
    7, \
    {  { "armed", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_actuator_armed_t, armed) }, \
         { "prearmed", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_actuator_armed_t, prearmed) }, \
         { "ready_to_arm", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_actuator_armed_t, ready_to_arm) }, \
         { "lockdown", NULL, MAVLINK_TYPE_UINT8_T, 0, 3, offsetof(mavlink_actuator_armed_t, lockdown) }, \
         { "manual_lockdown", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_actuator_armed_t, manual_lockdown) }, \
         { "force_failsafe", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_actuator_armed_t, force_failsafe) }, \
         { "in_esc_calibration_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_actuator_armed_t, in_esc_calibration_mode) }, \
         } \
}
#endif

/**
 * @brief Pack a actuator_armed message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param armed  Set to true if system is armed
 * @param prearmed  Set to true if the actuator safety is disabled but motors are not armed
 * @param ready_to_arm  Set to true if system is ready to be armed
 * @param lockdown  Set to true if actuators are forced to being disabled (due to emergency or HIL)
 * @param manual_lockdown  Set to true if manual throttle kill switch is engaged
 * @param force_failsafe  Set to true if the actuators are forced to the failsafe position
 * @param in_esc_calibration_mode  IO/FMU should ignore messages from the actuator controls topics
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_actuator_armed_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t armed, uint8_t prearmed, uint8_t ready_to_arm, uint8_t lockdown, uint8_t manual_lockdown, uint8_t force_failsafe, uint8_t in_esc_calibration_mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ACTUATOR_ARMED_LEN];
    _mav_put_uint8_t(buf, 0, armed);
    _mav_put_uint8_t(buf, 1, prearmed);
    _mav_put_uint8_t(buf, 2, ready_to_arm);
    _mav_put_uint8_t(buf, 3, lockdown);
    _mav_put_uint8_t(buf, 4, manual_lockdown);
    _mav_put_uint8_t(buf, 5, force_failsafe);
    _mav_put_uint8_t(buf, 6, in_esc_calibration_mode);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ACTUATOR_ARMED_LEN);
#else
    mavlink_actuator_armed_t packet;
    packet.armed = armed;
    packet.prearmed = prearmed;
    packet.ready_to_arm = ready_to_arm;
    packet.lockdown = lockdown;
    packet.manual_lockdown = manual_lockdown;
    packet.force_failsafe = force_failsafe;
    packet.in_esc_calibration_mode = in_esc_calibration_mode;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ACTUATOR_ARMED_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ACTUATOR_ARMED;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ACTUATOR_ARMED_MIN_LEN, MAVLINK_MSG_ID_ACTUATOR_ARMED_LEN, MAVLINK_MSG_ID_ACTUATOR_ARMED_CRC);
}

/**
 * @brief Pack a actuator_armed message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param armed  Set to true if system is armed
 * @param prearmed  Set to true if the actuator safety is disabled but motors are not armed
 * @param ready_to_arm  Set to true if system is ready to be armed
 * @param lockdown  Set to true if actuators are forced to being disabled (due to emergency or HIL)
 * @param manual_lockdown  Set to true if manual throttle kill switch is engaged
 * @param force_failsafe  Set to true if the actuators are forced to the failsafe position
 * @param in_esc_calibration_mode  IO/FMU should ignore messages from the actuator controls topics
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_actuator_armed_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t armed, uint8_t prearmed, uint8_t ready_to_arm, uint8_t lockdown, uint8_t manual_lockdown, uint8_t force_failsafe, uint8_t in_esc_calibration_mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ACTUATOR_ARMED_LEN];
    _mav_put_uint8_t(buf, 0, armed);
    _mav_put_uint8_t(buf, 1, prearmed);
    _mav_put_uint8_t(buf, 2, ready_to_arm);
    _mav_put_uint8_t(buf, 3, lockdown);
    _mav_put_uint8_t(buf, 4, manual_lockdown);
    _mav_put_uint8_t(buf, 5, force_failsafe);
    _mav_put_uint8_t(buf, 6, in_esc_calibration_mode);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ACTUATOR_ARMED_LEN);
#else
    mavlink_actuator_armed_t packet;
    packet.armed = armed;
    packet.prearmed = prearmed;
    packet.ready_to_arm = ready_to_arm;
    packet.lockdown = lockdown;
    packet.manual_lockdown = manual_lockdown;
    packet.force_failsafe = force_failsafe;
    packet.in_esc_calibration_mode = in_esc_calibration_mode;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ACTUATOR_ARMED_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ACTUATOR_ARMED;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_ACTUATOR_ARMED_MIN_LEN, MAVLINK_MSG_ID_ACTUATOR_ARMED_LEN, MAVLINK_MSG_ID_ACTUATOR_ARMED_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_ACTUATOR_ARMED_MIN_LEN, MAVLINK_MSG_ID_ACTUATOR_ARMED_LEN);
#endif
}

/**
 * @brief Pack a actuator_armed message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param armed  Set to true if system is armed
 * @param prearmed  Set to true if the actuator safety is disabled but motors are not armed
 * @param ready_to_arm  Set to true if system is ready to be armed
 * @param lockdown  Set to true if actuators are forced to being disabled (due to emergency or HIL)
 * @param manual_lockdown  Set to true if manual throttle kill switch is engaged
 * @param force_failsafe  Set to true if the actuators are forced to the failsafe position
 * @param in_esc_calibration_mode  IO/FMU should ignore messages from the actuator controls topics
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_actuator_armed_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t armed,uint8_t prearmed,uint8_t ready_to_arm,uint8_t lockdown,uint8_t manual_lockdown,uint8_t force_failsafe,uint8_t in_esc_calibration_mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ACTUATOR_ARMED_LEN];
    _mav_put_uint8_t(buf, 0, armed);
    _mav_put_uint8_t(buf, 1, prearmed);
    _mav_put_uint8_t(buf, 2, ready_to_arm);
    _mav_put_uint8_t(buf, 3, lockdown);
    _mav_put_uint8_t(buf, 4, manual_lockdown);
    _mav_put_uint8_t(buf, 5, force_failsafe);
    _mav_put_uint8_t(buf, 6, in_esc_calibration_mode);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ACTUATOR_ARMED_LEN);
#else
    mavlink_actuator_armed_t packet;
    packet.armed = armed;
    packet.prearmed = prearmed;
    packet.ready_to_arm = ready_to_arm;
    packet.lockdown = lockdown;
    packet.manual_lockdown = manual_lockdown;
    packet.force_failsafe = force_failsafe;
    packet.in_esc_calibration_mode = in_esc_calibration_mode;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ACTUATOR_ARMED_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ACTUATOR_ARMED;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ACTUATOR_ARMED_MIN_LEN, MAVLINK_MSG_ID_ACTUATOR_ARMED_LEN, MAVLINK_MSG_ID_ACTUATOR_ARMED_CRC);
}

/**
 * @brief Encode a actuator_armed struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param actuator_armed C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_actuator_armed_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_actuator_armed_t* actuator_armed)
{
    return mavlink_msg_actuator_armed_pack(system_id, component_id, msg, actuator_armed->armed, actuator_armed->prearmed, actuator_armed->ready_to_arm, actuator_armed->lockdown, actuator_armed->manual_lockdown, actuator_armed->force_failsafe, actuator_armed->in_esc_calibration_mode);
}

/**
 * @brief Encode a actuator_armed struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param actuator_armed C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_actuator_armed_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_actuator_armed_t* actuator_armed)
{
    return mavlink_msg_actuator_armed_pack_chan(system_id, component_id, chan, msg, actuator_armed->armed, actuator_armed->prearmed, actuator_armed->ready_to_arm, actuator_armed->lockdown, actuator_armed->manual_lockdown, actuator_armed->force_failsafe, actuator_armed->in_esc_calibration_mode);
}

/**
 * @brief Encode a actuator_armed struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param actuator_armed C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_actuator_armed_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_actuator_armed_t* actuator_armed)
{
    return mavlink_msg_actuator_armed_pack_status(system_id, component_id, _status, msg,  actuator_armed->armed, actuator_armed->prearmed, actuator_armed->ready_to_arm, actuator_armed->lockdown, actuator_armed->manual_lockdown, actuator_armed->force_failsafe, actuator_armed->in_esc_calibration_mode);
}

/**
 * @brief Send a actuator_armed message
 * @param chan MAVLink channel to send the message
 *
 * @param armed  Set to true if system is armed
 * @param prearmed  Set to true if the actuator safety is disabled but motors are not armed
 * @param ready_to_arm  Set to true if system is ready to be armed
 * @param lockdown  Set to true if actuators are forced to being disabled (due to emergency or HIL)
 * @param manual_lockdown  Set to true if manual throttle kill switch is engaged
 * @param force_failsafe  Set to true if the actuators are forced to the failsafe position
 * @param in_esc_calibration_mode  IO/FMU should ignore messages from the actuator controls topics
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_actuator_armed_send(mavlink_channel_t chan, uint8_t armed, uint8_t prearmed, uint8_t ready_to_arm, uint8_t lockdown, uint8_t manual_lockdown, uint8_t force_failsafe, uint8_t in_esc_calibration_mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ACTUATOR_ARMED_LEN];
    _mav_put_uint8_t(buf, 0, armed);
    _mav_put_uint8_t(buf, 1, prearmed);
    _mav_put_uint8_t(buf, 2, ready_to_arm);
    _mav_put_uint8_t(buf, 3, lockdown);
    _mav_put_uint8_t(buf, 4, manual_lockdown);
    _mav_put_uint8_t(buf, 5, force_failsafe);
    _mav_put_uint8_t(buf, 6, in_esc_calibration_mode);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ACTUATOR_ARMED, buf, MAVLINK_MSG_ID_ACTUATOR_ARMED_MIN_LEN, MAVLINK_MSG_ID_ACTUATOR_ARMED_LEN, MAVLINK_MSG_ID_ACTUATOR_ARMED_CRC);
#else
    mavlink_actuator_armed_t packet;
    packet.armed = armed;
    packet.prearmed = prearmed;
    packet.ready_to_arm = ready_to_arm;
    packet.lockdown = lockdown;
    packet.manual_lockdown = manual_lockdown;
    packet.force_failsafe = force_failsafe;
    packet.in_esc_calibration_mode = in_esc_calibration_mode;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ACTUATOR_ARMED, (const char *)&packet, MAVLINK_MSG_ID_ACTUATOR_ARMED_MIN_LEN, MAVLINK_MSG_ID_ACTUATOR_ARMED_LEN, MAVLINK_MSG_ID_ACTUATOR_ARMED_CRC);
#endif
}

/**
 * @brief Send a actuator_armed message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_actuator_armed_send_struct(mavlink_channel_t chan, const mavlink_actuator_armed_t* actuator_armed)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_actuator_armed_send(chan, actuator_armed->armed, actuator_armed->prearmed, actuator_armed->ready_to_arm, actuator_armed->lockdown, actuator_armed->manual_lockdown, actuator_armed->force_failsafe, actuator_armed->in_esc_calibration_mode);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ACTUATOR_ARMED, (const char *)actuator_armed, MAVLINK_MSG_ID_ACTUATOR_ARMED_MIN_LEN, MAVLINK_MSG_ID_ACTUATOR_ARMED_LEN, MAVLINK_MSG_ID_ACTUATOR_ARMED_CRC);
#endif
}

#if MAVLINK_MSG_ID_ACTUATOR_ARMED_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_actuator_armed_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t armed, uint8_t prearmed, uint8_t ready_to_arm, uint8_t lockdown, uint8_t manual_lockdown, uint8_t force_failsafe, uint8_t in_esc_calibration_mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, armed);
    _mav_put_uint8_t(buf, 1, prearmed);
    _mav_put_uint8_t(buf, 2, ready_to_arm);
    _mav_put_uint8_t(buf, 3, lockdown);
    _mav_put_uint8_t(buf, 4, manual_lockdown);
    _mav_put_uint8_t(buf, 5, force_failsafe);
    _mav_put_uint8_t(buf, 6, in_esc_calibration_mode);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ACTUATOR_ARMED, buf, MAVLINK_MSG_ID_ACTUATOR_ARMED_MIN_LEN, MAVLINK_MSG_ID_ACTUATOR_ARMED_LEN, MAVLINK_MSG_ID_ACTUATOR_ARMED_CRC);
#else
    mavlink_actuator_armed_t *packet = (mavlink_actuator_armed_t *)msgbuf;
    packet->armed = armed;
    packet->prearmed = prearmed;
    packet->ready_to_arm = ready_to_arm;
    packet->lockdown = lockdown;
    packet->manual_lockdown = manual_lockdown;
    packet->force_failsafe = force_failsafe;
    packet->in_esc_calibration_mode = in_esc_calibration_mode;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ACTUATOR_ARMED, (const char *)packet, MAVLINK_MSG_ID_ACTUATOR_ARMED_MIN_LEN, MAVLINK_MSG_ID_ACTUATOR_ARMED_LEN, MAVLINK_MSG_ID_ACTUATOR_ARMED_CRC);
#endif
}
#endif

#endif

// MESSAGE ACTUATOR_ARMED UNPACKING


/**
 * @brief Get field armed from actuator_armed message
 *
 * @return  Set to true if system is armed
 */
static inline uint8_t mavlink_msg_actuator_armed_get_armed(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field prearmed from actuator_armed message
 *
 * @return  Set to true if the actuator safety is disabled but motors are not armed
 */
static inline uint8_t mavlink_msg_actuator_armed_get_prearmed(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Get field ready_to_arm from actuator_armed message
 *
 * @return  Set to true if system is ready to be armed
 */
static inline uint8_t mavlink_msg_actuator_armed_get_ready_to_arm(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  2);
}

/**
 * @brief Get field lockdown from actuator_armed message
 *
 * @return  Set to true if actuators are forced to being disabled (due to emergency or HIL)
 */
static inline uint8_t mavlink_msg_actuator_armed_get_lockdown(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  3);
}

/**
 * @brief Get field manual_lockdown from actuator_armed message
 *
 * @return  Set to true if manual throttle kill switch is engaged
 */
static inline uint8_t mavlink_msg_actuator_armed_get_manual_lockdown(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  4);
}

/**
 * @brief Get field force_failsafe from actuator_armed message
 *
 * @return  Set to true if the actuators are forced to the failsafe position
 */
static inline uint8_t mavlink_msg_actuator_armed_get_force_failsafe(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  5);
}

/**
 * @brief Get field in_esc_calibration_mode from actuator_armed message
 *
 * @return  IO/FMU should ignore messages from the actuator controls topics
 */
static inline uint8_t mavlink_msg_actuator_armed_get_in_esc_calibration_mode(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  6);
}

/**
 * @brief Decode a actuator_armed message into a struct
 *
 * @param msg The message to decode
 * @param actuator_armed C-struct to decode the message contents into
 */
static inline void mavlink_msg_actuator_armed_decode(const mavlink_message_t* msg, mavlink_actuator_armed_t* actuator_armed)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    actuator_armed->armed = mavlink_msg_actuator_armed_get_armed(msg);
    actuator_armed->prearmed = mavlink_msg_actuator_armed_get_prearmed(msg);
    actuator_armed->ready_to_arm = mavlink_msg_actuator_armed_get_ready_to_arm(msg);
    actuator_armed->lockdown = mavlink_msg_actuator_armed_get_lockdown(msg);
    actuator_armed->manual_lockdown = mavlink_msg_actuator_armed_get_manual_lockdown(msg);
    actuator_armed->force_failsafe = mavlink_msg_actuator_armed_get_force_failsafe(msg);
    actuator_armed->in_esc_calibration_mode = mavlink_msg_actuator_armed_get_in_esc_calibration_mode(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ACTUATOR_ARMED_LEN? msg->len : MAVLINK_MSG_ID_ACTUATOR_ARMED_LEN;
        memset(actuator_armed, 0, MAVLINK_MSG_ID_ACTUATOR_ARMED_LEN);
    memcpy(actuator_armed, _MAV_PAYLOAD(msg), len);
#endif
}
