#pragma once
// MESSAGE LEAF_ARM_CLEARANCE_STATUS PACKING

#define MAVLINK_MSG_ID_LEAF_ARM_CLEARANCE_STATUS 77078


typedef struct __mavlink_leaf_arm_clearance_status_t {
 uint32_t withheld_reasons; /*<  Every check currently withholding the clearance; 0 when cleared.*/
 uint8_t cleared; /*<  1 when LeafFC grants Betaflight arming, 0 when it withholds it.*/
} mavlink_leaf_arm_clearance_status_t;

#define MAVLINK_MSG_ID_LEAF_ARM_CLEARANCE_STATUS_LEN 5
#define MAVLINK_MSG_ID_LEAF_ARM_CLEARANCE_STATUS_MIN_LEN 5
#define MAVLINK_MSG_ID_77078_LEN 5
#define MAVLINK_MSG_ID_77078_MIN_LEN 5

#define MAVLINK_MSG_ID_LEAF_ARM_CLEARANCE_STATUS_CRC 80
#define MAVLINK_MSG_ID_77078_CRC 80



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_LEAF_ARM_CLEARANCE_STATUS { \
    77078, \
    "LEAF_ARM_CLEARANCE_STATUS", \
    2, \
    {  { "withheld_reasons", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_leaf_arm_clearance_status_t, withheld_reasons) }, \
         { "cleared", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_leaf_arm_clearance_status_t, cleared) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_LEAF_ARM_CLEARANCE_STATUS { \
    "LEAF_ARM_CLEARANCE_STATUS", \
    2, \
    {  { "withheld_reasons", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_leaf_arm_clearance_status_t, withheld_reasons) }, \
         { "cleared", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_leaf_arm_clearance_status_t, cleared) }, \
         } \
}
#endif

/**
 * @brief Pack a leaf_arm_clearance_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param withheld_reasons  Every check currently withholding the clearance; 0 when cleared.
 * @param cleared  1 when LeafFC grants Betaflight arming, 0 when it withholds it.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_arm_clearance_status_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t withheld_reasons, uint8_t cleared)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_ARM_CLEARANCE_STATUS_LEN];
    _mav_put_uint32_t(buf, 0, withheld_reasons);
    _mav_put_uint8_t(buf, 4, cleared);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_ARM_CLEARANCE_STATUS_LEN);
#else
    mavlink_leaf_arm_clearance_status_t packet;
    packet.withheld_reasons = withheld_reasons;
    packet.cleared = cleared;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_ARM_CLEARANCE_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_ARM_CLEARANCE_STATUS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_LEAF_ARM_CLEARANCE_STATUS_MIN_LEN, MAVLINK_MSG_ID_LEAF_ARM_CLEARANCE_STATUS_LEN, MAVLINK_MSG_ID_LEAF_ARM_CLEARANCE_STATUS_CRC);
}

/**
 * @brief Pack a leaf_arm_clearance_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param withheld_reasons  Every check currently withholding the clearance; 0 when cleared.
 * @param cleared  1 when LeafFC grants Betaflight arming, 0 when it withholds it.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_arm_clearance_status_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint32_t withheld_reasons, uint8_t cleared)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_ARM_CLEARANCE_STATUS_LEN];
    _mav_put_uint32_t(buf, 0, withheld_reasons);
    _mav_put_uint8_t(buf, 4, cleared);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_ARM_CLEARANCE_STATUS_LEN);
#else
    mavlink_leaf_arm_clearance_status_t packet;
    packet.withheld_reasons = withheld_reasons;
    packet.cleared = cleared;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_ARM_CLEARANCE_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_ARM_CLEARANCE_STATUS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_ARM_CLEARANCE_STATUS_MIN_LEN, MAVLINK_MSG_ID_LEAF_ARM_CLEARANCE_STATUS_LEN, MAVLINK_MSG_ID_LEAF_ARM_CLEARANCE_STATUS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_ARM_CLEARANCE_STATUS_MIN_LEN, MAVLINK_MSG_ID_LEAF_ARM_CLEARANCE_STATUS_LEN);
#endif
}

/**
 * @brief Pack a leaf_arm_clearance_status message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param withheld_reasons  Every check currently withholding the clearance; 0 when cleared.
 * @param cleared  1 when LeafFC grants Betaflight arming, 0 when it withholds it.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_arm_clearance_status_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t withheld_reasons,uint8_t cleared)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_ARM_CLEARANCE_STATUS_LEN];
    _mav_put_uint32_t(buf, 0, withheld_reasons);
    _mav_put_uint8_t(buf, 4, cleared);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_ARM_CLEARANCE_STATUS_LEN);
#else
    mavlink_leaf_arm_clearance_status_t packet;
    packet.withheld_reasons = withheld_reasons;
    packet.cleared = cleared;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_ARM_CLEARANCE_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_ARM_CLEARANCE_STATUS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_LEAF_ARM_CLEARANCE_STATUS_MIN_LEN, MAVLINK_MSG_ID_LEAF_ARM_CLEARANCE_STATUS_LEN, MAVLINK_MSG_ID_LEAF_ARM_CLEARANCE_STATUS_CRC);
}

/**
 * @brief Encode a leaf_arm_clearance_status struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param leaf_arm_clearance_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_arm_clearance_status_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_leaf_arm_clearance_status_t* leaf_arm_clearance_status)
{
    return mavlink_msg_leaf_arm_clearance_status_pack(system_id, component_id, msg, leaf_arm_clearance_status->withheld_reasons, leaf_arm_clearance_status->cleared);
}

/**
 * @brief Encode a leaf_arm_clearance_status struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param leaf_arm_clearance_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_arm_clearance_status_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_leaf_arm_clearance_status_t* leaf_arm_clearance_status)
{
    return mavlink_msg_leaf_arm_clearance_status_pack_chan(system_id, component_id, chan, msg, leaf_arm_clearance_status->withheld_reasons, leaf_arm_clearance_status->cleared);
}

/**
 * @brief Encode a leaf_arm_clearance_status struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param leaf_arm_clearance_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_arm_clearance_status_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_leaf_arm_clearance_status_t* leaf_arm_clearance_status)
{
    return mavlink_msg_leaf_arm_clearance_status_pack_status(system_id, component_id, _status, msg,  leaf_arm_clearance_status->withheld_reasons, leaf_arm_clearance_status->cleared);
}

/**
 * @brief Send a leaf_arm_clearance_status message
 * @param chan MAVLink channel to send the message
 *
 * @param withheld_reasons  Every check currently withholding the clearance; 0 when cleared.
 * @param cleared  1 when LeafFC grants Betaflight arming, 0 when it withholds it.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_leaf_arm_clearance_status_send(mavlink_channel_t chan, uint32_t withheld_reasons, uint8_t cleared)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_ARM_CLEARANCE_STATUS_LEN];
    _mav_put_uint32_t(buf, 0, withheld_reasons);
    _mav_put_uint8_t(buf, 4, cleared);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_ARM_CLEARANCE_STATUS, buf, MAVLINK_MSG_ID_LEAF_ARM_CLEARANCE_STATUS_MIN_LEN, MAVLINK_MSG_ID_LEAF_ARM_CLEARANCE_STATUS_LEN, MAVLINK_MSG_ID_LEAF_ARM_CLEARANCE_STATUS_CRC);
#else
    mavlink_leaf_arm_clearance_status_t packet;
    packet.withheld_reasons = withheld_reasons;
    packet.cleared = cleared;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_ARM_CLEARANCE_STATUS, (const char *)&packet, MAVLINK_MSG_ID_LEAF_ARM_CLEARANCE_STATUS_MIN_LEN, MAVLINK_MSG_ID_LEAF_ARM_CLEARANCE_STATUS_LEN, MAVLINK_MSG_ID_LEAF_ARM_CLEARANCE_STATUS_CRC);
#endif
}

/**
 * @brief Send a leaf_arm_clearance_status message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_leaf_arm_clearance_status_send_struct(mavlink_channel_t chan, const mavlink_leaf_arm_clearance_status_t* leaf_arm_clearance_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_leaf_arm_clearance_status_send(chan, leaf_arm_clearance_status->withheld_reasons, leaf_arm_clearance_status->cleared);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_ARM_CLEARANCE_STATUS, (const char *)leaf_arm_clearance_status, MAVLINK_MSG_ID_LEAF_ARM_CLEARANCE_STATUS_MIN_LEN, MAVLINK_MSG_ID_LEAF_ARM_CLEARANCE_STATUS_LEN, MAVLINK_MSG_ID_LEAF_ARM_CLEARANCE_STATUS_CRC);
#endif
}

#if MAVLINK_MSG_ID_LEAF_ARM_CLEARANCE_STATUS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_leaf_arm_clearance_status_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t withheld_reasons, uint8_t cleared)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, withheld_reasons);
    _mav_put_uint8_t(buf, 4, cleared);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_ARM_CLEARANCE_STATUS, buf, MAVLINK_MSG_ID_LEAF_ARM_CLEARANCE_STATUS_MIN_LEN, MAVLINK_MSG_ID_LEAF_ARM_CLEARANCE_STATUS_LEN, MAVLINK_MSG_ID_LEAF_ARM_CLEARANCE_STATUS_CRC);
#else
    mavlink_leaf_arm_clearance_status_t *packet = (mavlink_leaf_arm_clearance_status_t *)msgbuf;
    packet->withheld_reasons = withheld_reasons;
    packet->cleared = cleared;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_ARM_CLEARANCE_STATUS, (const char *)packet, MAVLINK_MSG_ID_LEAF_ARM_CLEARANCE_STATUS_MIN_LEN, MAVLINK_MSG_ID_LEAF_ARM_CLEARANCE_STATUS_LEN, MAVLINK_MSG_ID_LEAF_ARM_CLEARANCE_STATUS_CRC);
#endif
}
#endif

#endif

// MESSAGE LEAF_ARM_CLEARANCE_STATUS UNPACKING


/**
 * @brief Get field withheld_reasons from leaf_arm_clearance_status message
 *
 * @return  Every check currently withholding the clearance; 0 when cleared.
 */
static inline uint32_t mavlink_msg_leaf_arm_clearance_status_get_withheld_reasons(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field cleared from leaf_arm_clearance_status message
 *
 * @return  1 when LeafFC grants Betaflight arming, 0 when it withholds it.
 */
static inline uint8_t mavlink_msg_leaf_arm_clearance_status_get_cleared(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  4);
}

/**
 * @brief Decode a leaf_arm_clearance_status message into a struct
 *
 * @param msg The message to decode
 * @param leaf_arm_clearance_status C-struct to decode the message contents into
 */
static inline void mavlink_msg_leaf_arm_clearance_status_decode(const mavlink_message_t* msg, mavlink_leaf_arm_clearance_status_t* leaf_arm_clearance_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    leaf_arm_clearance_status->withheld_reasons = mavlink_msg_leaf_arm_clearance_status_get_withheld_reasons(msg);
    leaf_arm_clearance_status->cleared = mavlink_msg_leaf_arm_clearance_status_get_cleared(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_LEAF_ARM_CLEARANCE_STATUS_LEN? msg->len : MAVLINK_MSG_ID_LEAF_ARM_CLEARANCE_STATUS_LEN;
        memset(leaf_arm_clearance_status, 0, MAVLINK_MSG_ID_LEAF_ARM_CLEARANCE_STATUS_LEN);
    memcpy(leaf_arm_clearance_status, _MAV_PAYLOAD(msg), len);
#endif
}
