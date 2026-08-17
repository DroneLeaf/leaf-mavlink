#pragma once
// MESSAGE LEAF_PI_HEALTH PACKING

#define MAVLINK_MSG_ID_LEAF_PI_HEALTH 77055


typedef struct __mavlink_leaf_pi_health_t {
 int16_t soc_temp_c_deci; /*<  SoC temperature, 0.1 degC (543 = 54.3 C)*/
 uint16_t core_volt_min_mv; /*<  Minimum core voltage over the sample burst, mV*/
 uint16_t core_volt_mean_mv; /*<  Mean core voltage over the sample burst, mV*/
 uint16_t arm_clock_mhz; /*<  ARM core clock, MHz (1500 = 1.50 GHz)*/
 uint8_t available; /*<  vcgencmd present and at least one probe succeeded (0/1)*/
 uint8_t stale; /*<  Sample is not live: armed, or the sampler is wedged (0/1)*/
 uint8_t undervoltage; /*<  Any core-voltage sample was <= 0.75 V (0/1)*/
 uint8_t volt_sample_count; /*<  Number of core-voltage samples in the burst*/
 uint8_t sample_age_s; /*<  Seconds since the last good sample, saturating at 255*/
} mavlink_leaf_pi_health_t;

#define MAVLINK_MSG_ID_LEAF_PI_HEALTH_LEN 13
#define MAVLINK_MSG_ID_LEAF_PI_HEALTH_MIN_LEN 13
#define MAVLINK_MSG_ID_77055_LEN 13
#define MAVLINK_MSG_ID_77055_MIN_LEN 13

#define MAVLINK_MSG_ID_LEAF_PI_HEALTH_CRC 139
#define MAVLINK_MSG_ID_77055_CRC 139



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_LEAF_PI_HEALTH { \
    77055, \
    "LEAF_PI_HEALTH", \
    9, \
    {  { "soc_temp_c_deci", NULL, MAVLINK_TYPE_INT16_T, 0, 0, offsetof(mavlink_leaf_pi_health_t, soc_temp_c_deci) }, \
         { "core_volt_min_mv", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_leaf_pi_health_t, core_volt_min_mv) }, \
         { "core_volt_mean_mv", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_leaf_pi_health_t, core_volt_mean_mv) }, \
         { "arm_clock_mhz", NULL, MAVLINK_TYPE_UINT16_T, 0, 6, offsetof(mavlink_leaf_pi_health_t, arm_clock_mhz) }, \
         { "available", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_leaf_pi_health_t, available) }, \
         { "stale", NULL, MAVLINK_TYPE_UINT8_T, 0, 9, offsetof(mavlink_leaf_pi_health_t, stale) }, \
         { "undervoltage", NULL, MAVLINK_TYPE_UINT8_T, 0, 10, offsetof(mavlink_leaf_pi_health_t, undervoltage) }, \
         { "volt_sample_count", NULL, MAVLINK_TYPE_UINT8_T, 0, 11, offsetof(mavlink_leaf_pi_health_t, volt_sample_count) }, \
         { "sample_age_s", NULL, MAVLINK_TYPE_UINT8_T, 0, 12, offsetof(mavlink_leaf_pi_health_t, sample_age_s) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_LEAF_PI_HEALTH { \
    "LEAF_PI_HEALTH", \
    9, \
    {  { "soc_temp_c_deci", NULL, MAVLINK_TYPE_INT16_T, 0, 0, offsetof(mavlink_leaf_pi_health_t, soc_temp_c_deci) }, \
         { "core_volt_min_mv", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_leaf_pi_health_t, core_volt_min_mv) }, \
         { "core_volt_mean_mv", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_leaf_pi_health_t, core_volt_mean_mv) }, \
         { "arm_clock_mhz", NULL, MAVLINK_TYPE_UINT16_T, 0, 6, offsetof(mavlink_leaf_pi_health_t, arm_clock_mhz) }, \
         { "available", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_leaf_pi_health_t, available) }, \
         { "stale", NULL, MAVLINK_TYPE_UINT8_T, 0, 9, offsetof(mavlink_leaf_pi_health_t, stale) }, \
         { "undervoltage", NULL, MAVLINK_TYPE_UINT8_T, 0, 10, offsetof(mavlink_leaf_pi_health_t, undervoltage) }, \
         { "volt_sample_count", NULL, MAVLINK_TYPE_UINT8_T, 0, 11, offsetof(mavlink_leaf_pi_health_t, volt_sample_count) }, \
         { "sample_age_s", NULL, MAVLINK_TYPE_UINT8_T, 0, 12, offsetof(mavlink_leaf_pi_health_t, sample_age_s) }, \
         } \
}
#endif

/**
 * @brief Pack a leaf_pi_health message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param soc_temp_c_deci  SoC temperature, 0.1 degC (543 = 54.3 C)
 * @param core_volt_min_mv  Minimum core voltage over the sample burst, mV
 * @param core_volt_mean_mv  Mean core voltage over the sample burst, mV
 * @param arm_clock_mhz  ARM core clock, MHz (1500 = 1.50 GHz)
 * @param available  vcgencmd present and at least one probe succeeded (0/1)
 * @param stale  Sample is not live: armed, or the sampler is wedged (0/1)
 * @param undervoltage  Any core-voltage sample was <= 0.75 V (0/1)
 * @param volt_sample_count  Number of core-voltage samples in the burst
 * @param sample_age_s  Seconds since the last good sample, saturating at 255
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_pi_health_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               int16_t soc_temp_c_deci, uint16_t core_volt_min_mv, uint16_t core_volt_mean_mv, uint16_t arm_clock_mhz, uint8_t available, uint8_t stale, uint8_t undervoltage, uint8_t volt_sample_count, uint8_t sample_age_s)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_PI_HEALTH_LEN];
    _mav_put_int16_t(buf, 0, soc_temp_c_deci);
    _mav_put_uint16_t(buf, 2, core_volt_min_mv);
    _mav_put_uint16_t(buf, 4, core_volt_mean_mv);
    _mav_put_uint16_t(buf, 6, arm_clock_mhz);
    _mav_put_uint8_t(buf, 8, available);
    _mav_put_uint8_t(buf, 9, stale);
    _mav_put_uint8_t(buf, 10, undervoltage);
    _mav_put_uint8_t(buf, 11, volt_sample_count);
    _mav_put_uint8_t(buf, 12, sample_age_s);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_PI_HEALTH_LEN);
#else
    mavlink_leaf_pi_health_t packet;
    packet.soc_temp_c_deci = soc_temp_c_deci;
    packet.core_volt_min_mv = core_volt_min_mv;
    packet.core_volt_mean_mv = core_volt_mean_mv;
    packet.arm_clock_mhz = arm_clock_mhz;
    packet.available = available;
    packet.stale = stale;
    packet.undervoltage = undervoltage;
    packet.volt_sample_count = volt_sample_count;
    packet.sample_age_s = sample_age_s;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_PI_HEALTH_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_PI_HEALTH;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_LEAF_PI_HEALTH_MIN_LEN, MAVLINK_MSG_ID_LEAF_PI_HEALTH_LEN, MAVLINK_MSG_ID_LEAF_PI_HEALTH_CRC);
}

/**
 * @brief Pack a leaf_pi_health message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param soc_temp_c_deci  SoC temperature, 0.1 degC (543 = 54.3 C)
 * @param core_volt_min_mv  Minimum core voltage over the sample burst, mV
 * @param core_volt_mean_mv  Mean core voltage over the sample burst, mV
 * @param arm_clock_mhz  ARM core clock, MHz (1500 = 1.50 GHz)
 * @param available  vcgencmd present and at least one probe succeeded (0/1)
 * @param stale  Sample is not live: armed, or the sampler is wedged (0/1)
 * @param undervoltage  Any core-voltage sample was <= 0.75 V (0/1)
 * @param volt_sample_count  Number of core-voltage samples in the burst
 * @param sample_age_s  Seconds since the last good sample, saturating at 255
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_pi_health_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               int16_t soc_temp_c_deci, uint16_t core_volt_min_mv, uint16_t core_volt_mean_mv, uint16_t arm_clock_mhz, uint8_t available, uint8_t stale, uint8_t undervoltage, uint8_t volt_sample_count, uint8_t sample_age_s)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_PI_HEALTH_LEN];
    _mav_put_int16_t(buf, 0, soc_temp_c_deci);
    _mav_put_uint16_t(buf, 2, core_volt_min_mv);
    _mav_put_uint16_t(buf, 4, core_volt_mean_mv);
    _mav_put_uint16_t(buf, 6, arm_clock_mhz);
    _mav_put_uint8_t(buf, 8, available);
    _mav_put_uint8_t(buf, 9, stale);
    _mav_put_uint8_t(buf, 10, undervoltage);
    _mav_put_uint8_t(buf, 11, volt_sample_count);
    _mav_put_uint8_t(buf, 12, sample_age_s);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_PI_HEALTH_LEN);
#else
    mavlink_leaf_pi_health_t packet;
    packet.soc_temp_c_deci = soc_temp_c_deci;
    packet.core_volt_min_mv = core_volt_min_mv;
    packet.core_volt_mean_mv = core_volt_mean_mv;
    packet.arm_clock_mhz = arm_clock_mhz;
    packet.available = available;
    packet.stale = stale;
    packet.undervoltage = undervoltage;
    packet.volt_sample_count = volt_sample_count;
    packet.sample_age_s = sample_age_s;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_PI_HEALTH_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_PI_HEALTH;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_PI_HEALTH_MIN_LEN, MAVLINK_MSG_ID_LEAF_PI_HEALTH_LEN, MAVLINK_MSG_ID_LEAF_PI_HEALTH_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_PI_HEALTH_MIN_LEN, MAVLINK_MSG_ID_LEAF_PI_HEALTH_LEN);
#endif
}

/**
 * @brief Pack a leaf_pi_health message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param soc_temp_c_deci  SoC temperature, 0.1 degC (543 = 54.3 C)
 * @param core_volt_min_mv  Minimum core voltage over the sample burst, mV
 * @param core_volt_mean_mv  Mean core voltage over the sample burst, mV
 * @param arm_clock_mhz  ARM core clock, MHz (1500 = 1.50 GHz)
 * @param available  vcgencmd present and at least one probe succeeded (0/1)
 * @param stale  Sample is not live: armed, or the sampler is wedged (0/1)
 * @param undervoltage  Any core-voltage sample was <= 0.75 V (0/1)
 * @param volt_sample_count  Number of core-voltage samples in the burst
 * @param sample_age_s  Seconds since the last good sample, saturating at 255
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_pi_health_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   int16_t soc_temp_c_deci,uint16_t core_volt_min_mv,uint16_t core_volt_mean_mv,uint16_t arm_clock_mhz,uint8_t available,uint8_t stale,uint8_t undervoltage,uint8_t volt_sample_count,uint8_t sample_age_s)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_PI_HEALTH_LEN];
    _mav_put_int16_t(buf, 0, soc_temp_c_deci);
    _mav_put_uint16_t(buf, 2, core_volt_min_mv);
    _mav_put_uint16_t(buf, 4, core_volt_mean_mv);
    _mav_put_uint16_t(buf, 6, arm_clock_mhz);
    _mav_put_uint8_t(buf, 8, available);
    _mav_put_uint8_t(buf, 9, stale);
    _mav_put_uint8_t(buf, 10, undervoltage);
    _mav_put_uint8_t(buf, 11, volt_sample_count);
    _mav_put_uint8_t(buf, 12, sample_age_s);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_PI_HEALTH_LEN);
#else
    mavlink_leaf_pi_health_t packet;
    packet.soc_temp_c_deci = soc_temp_c_deci;
    packet.core_volt_min_mv = core_volt_min_mv;
    packet.core_volt_mean_mv = core_volt_mean_mv;
    packet.arm_clock_mhz = arm_clock_mhz;
    packet.available = available;
    packet.stale = stale;
    packet.undervoltage = undervoltage;
    packet.volt_sample_count = volt_sample_count;
    packet.sample_age_s = sample_age_s;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_PI_HEALTH_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_PI_HEALTH;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_LEAF_PI_HEALTH_MIN_LEN, MAVLINK_MSG_ID_LEAF_PI_HEALTH_LEN, MAVLINK_MSG_ID_LEAF_PI_HEALTH_CRC);
}

/**
 * @brief Encode a leaf_pi_health struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param leaf_pi_health C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_pi_health_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_leaf_pi_health_t* leaf_pi_health)
{
    return mavlink_msg_leaf_pi_health_pack(system_id, component_id, msg, leaf_pi_health->soc_temp_c_deci, leaf_pi_health->core_volt_min_mv, leaf_pi_health->core_volt_mean_mv, leaf_pi_health->arm_clock_mhz, leaf_pi_health->available, leaf_pi_health->stale, leaf_pi_health->undervoltage, leaf_pi_health->volt_sample_count, leaf_pi_health->sample_age_s);
}

/**
 * @brief Encode a leaf_pi_health struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param leaf_pi_health C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_pi_health_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_leaf_pi_health_t* leaf_pi_health)
{
    return mavlink_msg_leaf_pi_health_pack_chan(system_id, component_id, chan, msg, leaf_pi_health->soc_temp_c_deci, leaf_pi_health->core_volt_min_mv, leaf_pi_health->core_volt_mean_mv, leaf_pi_health->arm_clock_mhz, leaf_pi_health->available, leaf_pi_health->stale, leaf_pi_health->undervoltage, leaf_pi_health->volt_sample_count, leaf_pi_health->sample_age_s);
}

/**
 * @brief Encode a leaf_pi_health struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param leaf_pi_health C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_pi_health_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_leaf_pi_health_t* leaf_pi_health)
{
    return mavlink_msg_leaf_pi_health_pack_status(system_id, component_id, _status, msg,  leaf_pi_health->soc_temp_c_deci, leaf_pi_health->core_volt_min_mv, leaf_pi_health->core_volt_mean_mv, leaf_pi_health->arm_clock_mhz, leaf_pi_health->available, leaf_pi_health->stale, leaf_pi_health->undervoltage, leaf_pi_health->volt_sample_count, leaf_pi_health->sample_age_s);
}

/**
 * @brief Send a leaf_pi_health message
 * @param chan MAVLink channel to send the message
 *
 * @param soc_temp_c_deci  SoC temperature, 0.1 degC (543 = 54.3 C)
 * @param core_volt_min_mv  Minimum core voltage over the sample burst, mV
 * @param core_volt_mean_mv  Mean core voltage over the sample burst, mV
 * @param arm_clock_mhz  ARM core clock, MHz (1500 = 1.50 GHz)
 * @param available  vcgencmd present and at least one probe succeeded (0/1)
 * @param stale  Sample is not live: armed, or the sampler is wedged (0/1)
 * @param undervoltage  Any core-voltage sample was <= 0.75 V (0/1)
 * @param volt_sample_count  Number of core-voltage samples in the burst
 * @param sample_age_s  Seconds since the last good sample, saturating at 255
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_leaf_pi_health_send(mavlink_channel_t chan, int16_t soc_temp_c_deci, uint16_t core_volt_min_mv, uint16_t core_volt_mean_mv, uint16_t arm_clock_mhz, uint8_t available, uint8_t stale, uint8_t undervoltage, uint8_t volt_sample_count, uint8_t sample_age_s)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_PI_HEALTH_LEN];
    _mav_put_int16_t(buf, 0, soc_temp_c_deci);
    _mav_put_uint16_t(buf, 2, core_volt_min_mv);
    _mav_put_uint16_t(buf, 4, core_volt_mean_mv);
    _mav_put_uint16_t(buf, 6, arm_clock_mhz);
    _mav_put_uint8_t(buf, 8, available);
    _mav_put_uint8_t(buf, 9, stale);
    _mav_put_uint8_t(buf, 10, undervoltage);
    _mav_put_uint8_t(buf, 11, volt_sample_count);
    _mav_put_uint8_t(buf, 12, sample_age_s);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_PI_HEALTH, buf, MAVLINK_MSG_ID_LEAF_PI_HEALTH_MIN_LEN, MAVLINK_MSG_ID_LEAF_PI_HEALTH_LEN, MAVLINK_MSG_ID_LEAF_PI_HEALTH_CRC);
#else
    mavlink_leaf_pi_health_t packet;
    packet.soc_temp_c_deci = soc_temp_c_deci;
    packet.core_volt_min_mv = core_volt_min_mv;
    packet.core_volt_mean_mv = core_volt_mean_mv;
    packet.arm_clock_mhz = arm_clock_mhz;
    packet.available = available;
    packet.stale = stale;
    packet.undervoltage = undervoltage;
    packet.volt_sample_count = volt_sample_count;
    packet.sample_age_s = sample_age_s;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_PI_HEALTH, (const char *)&packet, MAVLINK_MSG_ID_LEAF_PI_HEALTH_MIN_LEN, MAVLINK_MSG_ID_LEAF_PI_HEALTH_LEN, MAVLINK_MSG_ID_LEAF_PI_HEALTH_CRC);
#endif
}

/**
 * @brief Send a leaf_pi_health message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_leaf_pi_health_send_struct(mavlink_channel_t chan, const mavlink_leaf_pi_health_t* leaf_pi_health)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_leaf_pi_health_send(chan, leaf_pi_health->soc_temp_c_deci, leaf_pi_health->core_volt_min_mv, leaf_pi_health->core_volt_mean_mv, leaf_pi_health->arm_clock_mhz, leaf_pi_health->available, leaf_pi_health->stale, leaf_pi_health->undervoltage, leaf_pi_health->volt_sample_count, leaf_pi_health->sample_age_s);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_PI_HEALTH, (const char *)leaf_pi_health, MAVLINK_MSG_ID_LEAF_PI_HEALTH_MIN_LEN, MAVLINK_MSG_ID_LEAF_PI_HEALTH_LEN, MAVLINK_MSG_ID_LEAF_PI_HEALTH_CRC);
#endif
}

#if MAVLINK_MSG_ID_LEAF_PI_HEALTH_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_leaf_pi_health_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  int16_t soc_temp_c_deci, uint16_t core_volt_min_mv, uint16_t core_volt_mean_mv, uint16_t arm_clock_mhz, uint8_t available, uint8_t stale, uint8_t undervoltage, uint8_t volt_sample_count, uint8_t sample_age_s)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_int16_t(buf, 0, soc_temp_c_deci);
    _mav_put_uint16_t(buf, 2, core_volt_min_mv);
    _mav_put_uint16_t(buf, 4, core_volt_mean_mv);
    _mav_put_uint16_t(buf, 6, arm_clock_mhz);
    _mav_put_uint8_t(buf, 8, available);
    _mav_put_uint8_t(buf, 9, stale);
    _mav_put_uint8_t(buf, 10, undervoltage);
    _mav_put_uint8_t(buf, 11, volt_sample_count);
    _mav_put_uint8_t(buf, 12, sample_age_s);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_PI_HEALTH, buf, MAVLINK_MSG_ID_LEAF_PI_HEALTH_MIN_LEN, MAVLINK_MSG_ID_LEAF_PI_HEALTH_LEN, MAVLINK_MSG_ID_LEAF_PI_HEALTH_CRC);
#else
    mavlink_leaf_pi_health_t *packet = (mavlink_leaf_pi_health_t *)msgbuf;
    packet->soc_temp_c_deci = soc_temp_c_deci;
    packet->core_volt_min_mv = core_volt_min_mv;
    packet->core_volt_mean_mv = core_volt_mean_mv;
    packet->arm_clock_mhz = arm_clock_mhz;
    packet->available = available;
    packet->stale = stale;
    packet->undervoltage = undervoltage;
    packet->volt_sample_count = volt_sample_count;
    packet->sample_age_s = sample_age_s;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_PI_HEALTH, (const char *)packet, MAVLINK_MSG_ID_LEAF_PI_HEALTH_MIN_LEN, MAVLINK_MSG_ID_LEAF_PI_HEALTH_LEN, MAVLINK_MSG_ID_LEAF_PI_HEALTH_CRC);
#endif
}
#endif

#endif

// MESSAGE LEAF_PI_HEALTH UNPACKING


/**
 * @brief Get field soc_temp_c_deci from leaf_pi_health message
 *
 * @return  SoC temperature, 0.1 degC (543 = 54.3 C)
 */
static inline int16_t mavlink_msg_leaf_pi_health_get_soc_temp_c_deci(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  0);
}

/**
 * @brief Get field core_volt_min_mv from leaf_pi_health message
 *
 * @return  Minimum core voltage over the sample burst, mV
 */
static inline uint16_t mavlink_msg_leaf_pi_health_get_core_volt_min_mv(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  2);
}

/**
 * @brief Get field core_volt_mean_mv from leaf_pi_health message
 *
 * @return  Mean core voltage over the sample burst, mV
 */
static inline uint16_t mavlink_msg_leaf_pi_health_get_core_volt_mean_mv(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  4);
}

/**
 * @brief Get field arm_clock_mhz from leaf_pi_health message
 *
 * @return  ARM core clock, MHz (1500 = 1.50 GHz)
 */
static inline uint16_t mavlink_msg_leaf_pi_health_get_arm_clock_mhz(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  6);
}

/**
 * @brief Get field available from leaf_pi_health message
 *
 * @return  vcgencmd present and at least one probe succeeded (0/1)
 */
static inline uint8_t mavlink_msg_leaf_pi_health_get_available(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  8);
}

/**
 * @brief Get field stale from leaf_pi_health message
 *
 * @return  Sample is not live: armed, or the sampler is wedged (0/1)
 */
static inline uint8_t mavlink_msg_leaf_pi_health_get_stale(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  9);
}

/**
 * @brief Get field undervoltage from leaf_pi_health message
 *
 * @return  Any core-voltage sample was <= 0.75 V (0/1)
 */
static inline uint8_t mavlink_msg_leaf_pi_health_get_undervoltage(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  10);
}

/**
 * @brief Get field volt_sample_count from leaf_pi_health message
 *
 * @return  Number of core-voltage samples in the burst
 */
static inline uint8_t mavlink_msg_leaf_pi_health_get_volt_sample_count(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  11);
}

/**
 * @brief Get field sample_age_s from leaf_pi_health message
 *
 * @return  Seconds since the last good sample, saturating at 255
 */
static inline uint8_t mavlink_msg_leaf_pi_health_get_sample_age_s(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  12);
}

/**
 * @brief Decode a leaf_pi_health message into a struct
 *
 * @param msg The message to decode
 * @param leaf_pi_health C-struct to decode the message contents into
 */
static inline void mavlink_msg_leaf_pi_health_decode(const mavlink_message_t* msg, mavlink_leaf_pi_health_t* leaf_pi_health)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    leaf_pi_health->soc_temp_c_deci = mavlink_msg_leaf_pi_health_get_soc_temp_c_deci(msg);
    leaf_pi_health->core_volt_min_mv = mavlink_msg_leaf_pi_health_get_core_volt_min_mv(msg);
    leaf_pi_health->core_volt_mean_mv = mavlink_msg_leaf_pi_health_get_core_volt_mean_mv(msg);
    leaf_pi_health->arm_clock_mhz = mavlink_msg_leaf_pi_health_get_arm_clock_mhz(msg);
    leaf_pi_health->available = mavlink_msg_leaf_pi_health_get_available(msg);
    leaf_pi_health->stale = mavlink_msg_leaf_pi_health_get_stale(msg);
    leaf_pi_health->undervoltage = mavlink_msg_leaf_pi_health_get_undervoltage(msg);
    leaf_pi_health->volt_sample_count = mavlink_msg_leaf_pi_health_get_volt_sample_count(msg);
    leaf_pi_health->sample_age_s = mavlink_msg_leaf_pi_health_get_sample_age_s(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_LEAF_PI_HEALTH_LEN? msg->len : MAVLINK_MSG_ID_LEAF_PI_HEALTH_LEN;
        memset(leaf_pi_health, 0, MAVLINK_MSG_ID_LEAF_PI_HEALTH_LEN);
    memcpy(leaf_pi_health, _MAV_PAYLOAD(msg), len);
#endif
}
