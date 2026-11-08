/** @file
 *    @brief MAVLink comm protocol testsuite generated from droneleaf_mav_msgs.xml
 *    @see https://mavlink.io/en/
 */
#pragma once
#ifndef DRONELEAF_MAV_MSGS_TESTSUITE_H
#define DRONELEAF_MAV_MSGS_TESTSUITE_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef MAVLINK_TEST_ALL
#define MAVLINK_TEST_ALL
static void mavlink_test_common(uint8_t, uint8_t, mavlink_message_t *last_msg);
static void mavlink_test_droneleaf_mav_msgs(uint8_t, uint8_t, mavlink_message_t *last_msg);

static void mavlink_test_all(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_common(system_id, component_id, last_msg);
    mavlink_test_droneleaf_mav_msgs(system_id, component_id, last_msg);
}
#endif

#include "../common/testsuite.h"


static void mavlink_test_leaf_mode(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_LEAF_MODE >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_leaf_mode_t packet_in = {
        5
    };
    mavlink_leaf_mode_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.mode = packet_in.mode;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_LEAF_MODE_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_LEAF_MODE_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_mode_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_leaf_mode_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_mode_pack(system_id, component_id, &msg , packet1.mode );
    mavlink_msg_leaf_mode_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_mode_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.mode );
    mavlink_msg_leaf_mode_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_leaf_mode_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_mode_send(MAVLINK_COMM_1 , packet1.mode );
    mavlink_msg_leaf_mode_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("LEAF_MODE") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_LEAF_MODE) != NULL);
#endif
}

static void mavlink_test_leaf_set_mode(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_LEAF_SET_MODE >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_leaf_set_mode_t packet_in = {
        5,72
    };
    mavlink_leaf_set_mode_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.target_system = packet_in.target_system;
        packet1.mode = packet_in.mode;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_LEAF_SET_MODE_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_LEAF_SET_MODE_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_set_mode_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_leaf_set_mode_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_set_mode_pack(system_id, component_id, &msg , packet1.target_system , packet1.mode );
    mavlink_msg_leaf_set_mode_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_set_mode_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.target_system , packet1.mode );
    mavlink_msg_leaf_set_mode_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_leaf_set_mode_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_set_mode_send(MAVLINK_COMM_1 , packet1.target_system , packet1.mode );
    mavlink_msg_leaf_set_mode_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("LEAF_SET_MODE") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_LEAF_SET_MODE) != NULL);
#endif
}

static void mavlink_test_leaf_status(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_LEAF_STATUS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_leaf_status_t packet_in = {
        5
    };
    mavlink_leaf_status_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.status = packet_in.status;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_LEAF_STATUS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_LEAF_STATUS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_status_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_leaf_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_status_pack(system_id, component_id, &msg , packet1.status );
    mavlink_msg_leaf_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_status_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.status );
    mavlink_msg_leaf_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_leaf_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_status_send(MAVLINK_COMM_1 , packet1.status );
    mavlink_msg_leaf_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("LEAF_STATUS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_LEAF_STATUS) != NULL);
#endif
}

static void mavlink_test_leaf_do_arm(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_LEAF_DO_ARM >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_leaf_do_arm_t packet_in = {
        5,72
    };
    mavlink_leaf_do_arm_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.target_system = packet_in.target_system;
        packet1.arm = packet_in.arm;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_LEAF_DO_ARM_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_LEAF_DO_ARM_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_do_arm_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_leaf_do_arm_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_do_arm_pack(system_id, component_id, &msg , packet1.target_system , packet1.arm );
    mavlink_msg_leaf_do_arm_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_do_arm_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.target_system , packet1.arm );
    mavlink_msg_leaf_do_arm_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_leaf_do_arm_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_do_arm_send(MAVLINK_COMM_1 , packet1.target_system , packet1.arm );
    mavlink_msg_leaf_do_arm_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("LEAF_DO_ARM") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_LEAF_DO_ARM) != NULL);
#endif
}

static void mavlink_test_leaf_do_takeoff(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_LEAF_DO_TAKEOFF >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_leaf_do_takeoff_t packet_in = {
        17.0,17
    };
    mavlink_leaf_do_takeoff_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.altitude = packet_in.altitude;
        packet1.target_system = packet_in.target_system;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_LEAF_DO_TAKEOFF_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_LEAF_DO_TAKEOFF_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_do_takeoff_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_leaf_do_takeoff_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_do_takeoff_pack(system_id, component_id, &msg , packet1.target_system , packet1.altitude );
    mavlink_msg_leaf_do_takeoff_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_do_takeoff_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.target_system , packet1.altitude );
    mavlink_msg_leaf_do_takeoff_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_leaf_do_takeoff_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_do_takeoff_send(MAVLINK_COMM_1 , packet1.target_system , packet1.altitude );
    mavlink_msg_leaf_do_takeoff_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("LEAF_DO_TAKEOFF") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_LEAF_DO_TAKEOFF) != NULL);
#endif
}

static void mavlink_test_leaf_do_land(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_LEAF_DO_LAND >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_leaf_do_land_t packet_in = {
        5
    };
    mavlink_leaf_do_land_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.target_system = packet_in.target_system;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_LEAF_DO_LAND_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_LEAF_DO_LAND_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_do_land_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_leaf_do_land_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_do_land_pack(system_id, component_id, &msg , packet1.target_system );
    mavlink_msg_leaf_do_land_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_do_land_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.target_system );
    mavlink_msg_leaf_do_land_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_leaf_do_land_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_do_land_send(MAVLINK_COMM_1 , packet1.target_system );
    mavlink_msg_leaf_do_land_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("LEAF_DO_LAND") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_LEAF_DO_LAND) != NULL);
#endif
}

static void mavlink_test_leaf_do_register_pos_offset_from_est_pos(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_LEAF_DO_REGISTER_POS_OFFSET_FROM_EST_POS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_leaf_do_register_pos_offset_from_est_pos_t packet_in = {
        5,72
    };
    mavlink_leaf_do_register_pos_offset_from_est_pos_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.target_system = packet_in.target_system;
        packet1.reg = packet_in.reg;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_LEAF_DO_REGISTER_POS_OFFSET_FROM_EST_POS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_LEAF_DO_REGISTER_POS_OFFSET_FROM_EST_POS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_do_register_pos_offset_from_est_pos_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_leaf_do_register_pos_offset_from_est_pos_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_do_register_pos_offset_from_est_pos_pack(system_id, component_id, &msg , packet1.target_system , packet1.reg );
    mavlink_msg_leaf_do_register_pos_offset_from_est_pos_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_do_register_pos_offset_from_est_pos_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.target_system , packet1.reg );
    mavlink_msg_leaf_do_register_pos_offset_from_est_pos_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_leaf_do_register_pos_offset_from_est_pos_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_do_register_pos_offset_from_est_pos_send(MAVLINK_COMM_1 , packet1.target_system , packet1.reg );
    mavlink_msg_leaf_do_register_pos_offset_from_est_pos_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("LEAF_DO_REGISTER_POS_OFFSET_FROM_EST_POS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_LEAF_DO_REGISTER_POS_OFFSET_FROM_EST_POS) != NULL);
#endif
}

static void mavlink_test_leaf_do_queue_traj_from_buffer_by_id(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_LEAF_DO_QUEUE_TRAJ_FROM_BUFFER_BY_ID >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_leaf_do_queue_traj_from_buffer_by_id_t packet_in = {
        5,"BCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKL"
    };
    mavlink_leaf_do_queue_traj_from_buffer_by_id_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.target_system = packet_in.target_system;
        
        mav_array_memcpy(packet1.traj_id, packet_in.traj_id, sizeof(char)*64);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_LEAF_DO_QUEUE_TRAJ_FROM_BUFFER_BY_ID_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_LEAF_DO_QUEUE_TRAJ_FROM_BUFFER_BY_ID_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_do_queue_traj_from_buffer_by_id_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_leaf_do_queue_traj_from_buffer_by_id_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_do_queue_traj_from_buffer_by_id_pack(system_id, component_id, &msg , packet1.target_system , packet1.traj_id );
    mavlink_msg_leaf_do_queue_traj_from_buffer_by_id_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_do_queue_traj_from_buffer_by_id_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.target_system , packet1.traj_id );
    mavlink_msg_leaf_do_queue_traj_from_buffer_by_id_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_leaf_do_queue_traj_from_buffer_by_id_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_do_queue_traj_from_buffer_by_id_send(MAVLINK_COMM_1 , packet1.target_system , packet1.traj_id );
    mavlink_msg_leaf_do_queue_traj_from_buffer_by_id_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("LEAF_DO_QUEUE_TRAJ_FROM_BUFFER_BY_ID") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_LEAF_DO_QUEUE_TRAJ_FROM_BUFFER_BY_ID) != NULL);
#endif
}

static void mavlink_test_leaf_do_switch_mrft_roll(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_ROLL >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_leaf_do_switch_mrft_roll_t packet_in = {
        5,72
    };
    mavlink_leaf_do_switch_mrft_roll_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.target_system = packet_in.target_system;
        packet1.enable = packet_in.enable;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_ROLL_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_ROLL_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_do_switch_mrft_roll_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_leaf_do_switch_mrft_roll_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_do_switch_mrft_roll_pack(system_id, component_id, &msg , packet1.target_system , packet1.enable );
    mavlink_msg_leaf_do_switch_mrft_roll_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_do_switch_mrft_roll_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.target_system , packet1.enable );
    mavlink_msg_leaf_do_switch_mrft_roll_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_leaf_do_switch_mrft_roll_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_do_switch_mrft_roll_send(MAVLINK_COMM_1 , packet1.target_system , packet1.enable );
    mavlink_msg_leaf_do_switch_mrft_roll_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("LEAF_DO_SWITCH_MRFT_ROLL") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_ROLL) != NULL);
#endif
}

static void mavlink_test_leaf_do_switch_mrft_pitch(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_PITCH >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_leaf_do_switch_mrft_pitch_t packet_in = {
        5,72
    };
    mavlink_leaf_do_switch_mrft_pitch_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.target_system = packet_in.target_system;
        packet1.enable = packet_in.enable;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_PITCH_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_PITCH_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_do_switch_mrft_pitch_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_leaf_do_switch_mrft_pitch_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_do_switch_mrft_pitch_pack(system_id, component_id, &msg , packet1.target_system , packet1.enable );
    mavlink_msg_leaf_do_switch_mrft_pitch_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_do_switch_mrft_pitch_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.target_system , packet1.enable );
    mavlink_msg_leaf_do_switch_mrft_pitch_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_leaf_do_switch_mrft_pitch_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_do_switch_mrft_pitch_send(MAVLINK_COMM_1 , packet1.target_system , packet1.enable );
    mavlink_msg_leaf_do_switch_mrft_pitch_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("LEAF_DO_SWITCH_MRFT_PITCH") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_PITCH) != NULL);
#endif
}

static void mavlink_test_leaf_do_switch_mrft_alt(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_ALT >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_leaf_do_switch_mrft_alt_t packet_in = {
        5,72
    };
    mavlink_leaf_do_switch_mrft_alt_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.target_system = packet_in.target_system;
        packet1.enable = packet_in.enable;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_ALT_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_ALT_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_do_switch_mrft_alt_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_leaf_do_switch_mrft_alt_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_do_switch_mrft_alt_pack(system_id, component_id, &msg , packet1.target_system , packet1.enable );
    mavlink_msg_leaf_do_switch_mrft_alt_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_do_switch_mrft_alt_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.target_system , packet1.enable );
    mavlink_msg_leaf_do_switch_mrft_alt_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_leaf_do_switch_mrft_alt_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_do_switch_mrft_alt_send(MAVLINK_COMM_1 , packet1.target_system , packet1.enable );
    mavlink_msg_leaf_do_switch_mrft_alt_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("LEAF_DO_SWITCH_MRFT_ALT") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_ALT) != NULL);
#endif
}

static void mavlink_test_leaf_do_switch_mrft_x(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_X >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_leaf_do_switch_mrft_x_t packet_in = {
        5,72
    };
    mavlink_leaf_do_switch_mrft_x_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.target_system = packet_in.target_system;
        packet1.enable = packet_in.enable;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_X_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_X_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_do_switch_mrft_x_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_leaf_do_switch_mrft_x_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_do_switch_mrft_x_pack(system_id, component_id, &msg , packet1.target_system , packet1.enable );
    mavlink_msg_leaf_do_switch_mrft_x_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_do_switch_mrft_x_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.target_system , packet1.enable );
    mavlink_msg_leaf_do_switch_mrft_x_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_leaf_do_switch_mrft_x_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_do_switch_mrft_x_send(MAVLINK_COMM_1 , packet1.target_system , packet1.enable );
    mavlink_msg_leaf_do_switch_mrft_x_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("LEAF_DO_SWITCH_MRFT_X") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_X) != NULL);
#endif
}

static void mavlink_test_leaf_do_switch_mrft_y(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_Y >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_leaf_do_switch_mrft_y_t packet_in = {
        5,72
    };
    mavlink_leaf_do_switch_mrft_y_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.target_system = packet_in.target_system;
        packet1.enable = packet_in.enable;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_Y_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_Y_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_do_switch_mrft_y_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_leaf_do_switch_mrft_y_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_do_switch_mrft_y_pack(system_id, component_id, &msg , packet1.target_system , packet1.enable );
    mavlink_msg_leaf_do_switch_mrft_y_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_do_switch_mrft_y_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.target_system , packet1.enable );
    mavlink_msg_leaf_do_switch_mrft_y_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_leaf_do_switch_mrft_y_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_do_switch_mrft_y_send(MAVLINK_COMM_1 , packet1.target_system , packet1.enable );
    mavlink_msg_leaf_do_switch_mrft_y_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("LEAF_DO_SWITCH_MRFT_Y") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_Y) != NULL);
#endif
}

static void mavlink_test_leaf_set_mission_state(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_LEAF_SET_MISSION_STATE >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_leaf_set_mission_state_t packet_in = {
        5,72,"CDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLM"
    };
    mavlink_leaf_set_mission_state_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.target_system = packet_in.target_system;
        packet1.state = packet_in.state;
        
        mav_array_memcpy(packet1.mission_id, packet_in.mission_id, sizeof(char)*64);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_LEAF_SET_MISSION_STATE_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_LEAF_SET_MISSION_STATE_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_set_mission_state_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_leaf_set_mission_state_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_set_mission_state_pack(system_id, component_id, &msg , packet1.target_system , packet1.state , packet1.mission_id );
    mavlink_msg_leaf_set_mission_state_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_set_mission_state_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.target_system , packet1.state , packet1.mission_id );
    mavlink_msg_leaf_set_mission_state_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_leaf_set_mission_state_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_set_mission_state_send(MAVLINK_COMM_1 , packet1.target_system , packet1.state , packet1.mission_id );
    mavlink_msg_leaf_set_mission_state_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("LEAF_SET_MISSION_STATE") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_LEAF_SET_MISSION_STATE) != NULL);
#endif
}

static void mavlink_test_leaf_say_to_qgc(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_LEAF_SAY_TO_QGC >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_leaf_say_to_qgc_t packet_in = {
        5,"BCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKL"
    };
    mavlink_leaf_say_to_qgc_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.target_system = packet_in.target_system;
        
        mav_array_memcpy(packet1.content, packet_in.content, sizeof(char)*64);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_LEAF_SAY_TO_QGC_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_LEAF_SAY_TO_QGC_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_say_to_qgc_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_leaf_say_to_qgc_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_say_to_qgc_pack(system_id, component_id, &msg , packet1.target_system , packet1.content );
    mavlink_msg_leaf_say_to_qgc_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_say_to_qgc_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.target_system , packet1.content );
    mavlink_msg_leaf_say_to_qgc_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_leaf_say_to_qgc_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_say_to_qgc_send(MAVLINK_COMM_1 , packet1.target_system , packet1.content );
    mavlink_msg_leaf_say_to_qgc_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("LEAF_SAY_TO_QGC") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_LEAF_SAY_TO_QGC) != NULL);
#endif
}

static void mavlink_test_leaf_do_arm_idle(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_LEAF_DO_ARM_IDLE >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_leaf_do_arm_idle_t packet_in = {
        5,72
    };
    mavlink_leaf_do_arm_idle_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.target_system = packet_in.target_system;
        packet1.enable = packet_in.enable;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_LEAF_DO_ARM_IDLE_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_LEAF_DO_ARM_IDLE_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_do_arm_idle_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_leaf_do_arm_idle_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_do_arm_idle_pack(system_id, component_id, &msg , packet1.target_system , packet1.enable );
    mavlink_msg_leaf_do_arm_idle_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_do_arm_idle_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.target_system , packet1.enable );
    mavlink_msg_leaf_do_arm_idle_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_leaf_do_arm_idle_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_do_arm_idle_send(MAVLINK_COMM_1 , packet1.target_system , packet1.enable );
    mavlink_msg_leaf_do_arm_idle_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("LEAF_DO_ARM_IDLE") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_LEAF_DO_ARM_IDLE) != NULL);
#endif
}

static void mavlink_test_leaf_client_tagname(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_LEAF_CLIENT_TAGNAME >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_leaf_client_tagname_t packet_in = {
        "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJK"
    };
    mavlink_leaf_client_tagname_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        
        mav_array_memcpy(packet1.tagname, packet_in.tagname, sizeof(char)*64);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_LEAF_CLIENT_TAGNAME_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_LEAF_CLIENT_TAGNAME_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_client_tagname_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_leaf_client_tagname_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_client_tagname_pack(system_id, component_id, &msg , packet1.tagname );
    mavlink_msg_leaf_client_tagname_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_client_tagname_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.tagname );
    mavlink_msg_leaf_client_tagname_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_leaf_client_tagname_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_client_tagname_send(MAVLINK_COMM_1 , packet1.tagname );
    mavlink_msg_leaf_client_tagname_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("LEAF_CLIENT_TAGNAME") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_LEAF_CLIENT_TAGNAME) != NULL);
#endif
}

static void mavlink_test_leaf_mrft_status(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_LEAF_MRFT_STATUS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_leaf_mrft_status_t packet_in = {
        5,72,139,206,17
    };
    mavlink_leaf_mrft_status_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.roll = packet_in.roll;
        packet1.pitch = packet_in.pitch;
        packet1.alt = packet_in.alt;
        packet1.x = packet_in.x;
        packet1.y = packet_in.y;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_LEAF_MRFT_STATUS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_LEAF_MRFT_STATUS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_mrft_status_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_leaf_mrft_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_mrft_status_pack(system_id, component_id, &msg , packet1.roll , packet1.pitch , packet1.alt , packet1.x , packet1.y );
    mavlink_msg_leaf_mrft_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_mrft_status_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.roll , packet1.pitch , packet1.alt , packet1.x , packet1.y );
    mavlink_msg_leaf_mrft_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_leaf_mrft_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_mrft_status_send(MAVLINK_COMM_1 , packet1.roll , packet1.pitch , packet1.alt , packet1.x , packet1.y );
    mavlink_msg_leaf_mrft_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("LEAF_MRFT_STATUS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_LEAF_MRFT_STATUS) != NULL);
#endif
}

static void mavlink_test_leaf_heartbeat(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_LEAF_HEARTBEAT >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_leaf_heartbeat_t packet_in = {
        5,72,"CDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLM","OPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXY"
    };
    mavlink_leaf_heartbeat_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.status = packet_in.status;
        packet1.mode = packet_in.mode;
        
        mav_array_memcpy(packet1.profile, packet_in.profile, sizeof(char)*64);
        mav_array_memcpy(packet1.version, packet_in.version, sizeof(char)*64);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_LEAF_HEARTBEAT_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_LEAF_HEARTBEAT_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_heartbeat_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_leaf_heartbeat_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_heartbeat_pack(system_id, component_id, &msg , packet1.status , packet1.mode , packet1.profile , packet1.version );
    mavlink_msg_leaf_heartbeat_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_heartbeat_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.status , packet1.mode , packet1.profile , packet1.version );
    mavlink_msg_leaf_heartbeat_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_leaf_heartbeat_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_heartbeat_send(MAVLINK_COMM_1 , packet1.status , packet1.mode , packet1.profile , packet1.version );
    mavlink_msg_leaf_heartbeat_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("LEAF_HEARTBEAT") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_LEAF_HEARTBEAT) != NULL);
#endif
}

static void mavlink_test_leaf_do_queue_external_trajectory(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_LEAF_DO_QUEUE_EXTERNAL_TRAJECTORY >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_leaf_do_queue_external_trajectory_t packet_in = {
        5,72,139
    };
    mavlink_leaf_do_queue_external_trajectory_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.target_system = packet_in.target_system;
        packet1.queue = packet_in.queue;
        packet1.traj_id = packet_in.traj_id;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_LEAF_DO_QUEUE_EXTERNAL_TRAJECTORY_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_LEAF_DO_QUEUE_EXTERNAL_TRAJECTORY_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_do_queue_external_trajectory_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_leaf_do_queue_external_trajectory_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_do_queue_external_trajectory_pack(system_id, component_id, &msg , packet1.target_system , packet1.queue , packet1.traj_id );
    mavlink_msg_leaf_do_queue_external_trajectory_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_do_queue_external_trajectory_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.target_system , packet1.queue , packet1.traj_id );
    mavlink_msg_leaf_do_queue_external_trajectory_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_leaf_do_queue_external_trajectory_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_do_queue_external_trajectory_send(MAVLINK_COMM_1 , packet1.target_system , packet1.queue , packet1.traj_id );
    mavlink_msg_leaf_do_queue_external_trajectory_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("LEAF_DO_QUEUE_EXTERNAL_TRAJECTORY") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_LEAF_DO_QUEUE_EXTERNAL_TRAJECTORY) != NULL);
#endif
}

static void mavlink_test_leaf_ack_queue_external_trajectory_pos(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_LEAF_ACK_QUEUE_EXTERNAL_TRAJECTORY_POS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_leaf_ack_queue_external_trajectory_pos_t packet_in = {
        5,72,139
    };
    mavlink_leaf_ack_queue_external_trajectory_pos_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.target_system = packet_in.target_system;
        packet1.status = packet_in.status;
        packet1.traj_id = packet_in.traj_id;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_LEAF_ACK_QUEUE_EXTERNAL_TRAJECTORY_POS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_LEAF_ACK_QUEUE_EXTERNAL_TRAJECTORY_POS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_ack_queue_external_trajectory_pos_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_leaf_ack_queue_external_trajectory_pos_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_ack_queue_external_trajectory_pos_pack(system_id, component_id, &msg , packet1.target_system , packet1.status , packet1.traj_id );
    mavlink_msg_leaf_ack_queue_external_trajectory_pos_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_ack_queue_external_trajectory_pos_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.target_system , packet1.status , packet1.traj_id );
    mavlink_msg_leaf_ack_queue_external_trajectory_pos_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_leaf_ack_queue_external_trajectory_pos_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_ack_queue_external_trajectory_pos_send(MAVLINK_COMM_1 , packet1.target_system , packet1.status , packet1.traj_id );
    mavlink_msg_leaf_ack_queue_external_trajectory_pos_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("LEAF_ACK_QUEUE_EXTERNAL_TRAJECTORY_POS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_LEAF_ACK_QUEUE_EXTERNAL_TRAJECTORY_POS) != NULL);
#endif
}

static void mavlink_test_leaf_ack_queue_external_trajectory_ori(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_LEAF_ACK_QUEUE_EXTERNAL_TRAJECTORY_ORI >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_leaf_ack_queue_external_trajectory_ori_t packet_in = {
        5,72,139
    };
    mavlink_leaf_ack_queue_external_trajectory_ori_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.target_system = packet_in.target_system;
        packet1.status = packet_in.status;
        packet1.traj_id = packet_in.traj_id;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_LEAF_ACK_QUEUE_EXTERNAL_TRAJECTORY_ORI_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_LEAF_ACK_QUEUE_EXTERNAL_TRAJECTORY_ORI_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_ack_queue_external_trajectory_ori_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_leaf_ack_queue_external_trajectory_ori_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_ack_queue_external_trajectory_ori_pack(system_id, component_id, &msg , packet1.target_system , packet1.status , packet1.traj_id );
    mavlink_msg_leaf_ack_queue_external_trajectory_ori_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_ack_queue_external_trajectory_ori_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.target_system , packet1.status , packet1.traj_id );
    mavlink_msg_leaf_ack_queue_external_trajectory_ori_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_leaf_ack_queue_external_trajectory_ori_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_ack_queue_external_trajectory_ori_send(MAVLINK_COMM_1 , packet1.target_system , packet1.status , packet1.traj_id );
    mavlink_msg_leaf_ack_queue_external_trajectory_ori_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("LEAF_ACK_QUEUE_EXTERNAL_TRAJECTORY_ORI") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_LEAF_ACK_QUEUE_EXTERNAL_TRAJECTORY_ORI) != NULL);
#endif
}

static void mavlink_test_leaf_external_trajectory_setpoint_enu(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_SETPOINT_ENU >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_leaf_external_trajectory_setpoint_enu_t packet_in = {
        17.0,45.0,73.0,101.0,129.0,157.0,185.0,213.0,241.0,269.0,297.0
    };
    mavlink_leaf_external_trajectory_setpoint_enu_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.x = packet_in.x;
        packet1.y = packet_in.y;
        packet1.z = packet_in.z;
        packet1.vx = packet_in.vx;
        packet1.vy = packet_in.vy;
        packet1.vz = packet_in.vz;
        packet1.afx = packet_in.afx;
        packet1.afy = packet_in.afy;
        packet1.afz = packet_in.afz;
        packet1.yaw = packet_in.yaw;
        packet1.yaw_rate = packet_in.yaw_rate;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_SETPOINT_ENU_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_SETPOINT_ENU_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_external_trajectory_setpoint_enu_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_leaf_external_trajectory_setpoint_enu_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_external_trajectory_setpoint_enu_pack(system_id, component_id, &msg , packet1.x , packet1.y , packet1.z , packet1.vx , packet1.vy , packet1.vz , packet1.afx , packet1.afy , packet1.afz , packet1.yaw , packet1.yaw_rate );
    mavlink_msg_leaf_external_trajectory_setpoint_enu_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_external_trajectory_setpoint_enu_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.x , packet1.y , packet1.z , packet1.vx , packet1.vy , packet1.vz , packet1.afx , packet1.afy , packet1.afz , packet1.yaw , packet1.yaw_rate );
    mavlink_msg_leaf_external_trajectory_setpoint_enu_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_leaf_external_trajectory_setpoint_enu_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_external_trajectory_setpoint_enu_send(MAVLINK_COMM_1 , packet1.x , packet1.y , packet1.z , packet1.vx , packet1.vy , packet1.vz , packet1.afx , packet1.afy , packet1.afz , packet1.yaw , packet1.yaw_rate );
    mavlink_msg_leaf_external_trajectory_setpoint_enu_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("LEAF_EXTERNAL_TRAJECTORY_SETPOINT_ENU") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_SETPOINT_ENU) != NULL);
#endif
}

static void mavlink_test_leaf_do_terminate_external_trajectory(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_LEAF_DO_TERMINATE_EXTERNAL_TRAJECTORY >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_leaf_do_terminate_external_trajectory_t packet_in = {
        5,72,139
    };
    mavlink_leaf_do_terminate_external_trajectory_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.target_system = packet_in.target_system;
        packet1.status = packet_in.status;
        packet1.traj_id = packet_in.traj_id;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_LEAF_DO_TERMINATE_EXTERNAL_TRAJECTORY_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_LEAF_DO_TERMINATE_EXTERNAL_TRAJECTORY_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_do_terminate_external_trajectory_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_leaf_do_terminate_external_trajectory_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_do_terminate_external_trajectory_pack(system_id, component_id, &msg , packet1.target_system , packet1.status , packet1.traj_id );
    mavlink_msg_leaf_do_terminate_external_trajectory_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_do_terminate_external_trajectory_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.target_system , packet1.status , packet1.traj_id );
    mavlink_msg_leaf_do_terminate_external_trajectory_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_leaf_do_terminate_external_trajectory_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_do_terminate_external_trajectory_send(MAVLINK_COMM_1 , packet1.target_system , packet1.status , packet1.traj_id );
    mavlink_msg_leaf_do_terminate_external_trajectory_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("LEAF_DO_TERMINATE_EXTERNAL_TRAJECTORY") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_LEAF_DO_TERMINATE_EXTERNAL_TRAJECTORY) != NULL);
#endif
}

static void mavlink_test_leaf_ack_terminate_external_trajectory_pos(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_LEAF_ACK_TERMINATE_EXTERNAL_TRAJECTORY_POS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_leaf_ack_terminate_external_trajectory_pos_t packet_in = {
        5,72,139
    };
    mavlink_leaf_ack_terminate_external_trajectory_pos_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.target_system = packet_in.target_system;
        packet1.status = packet_in.status;
        packet1.traj_id = packet_in.traj_id;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_LEAF_ACK_TERMINATE_EXTERNAL_TRAJECTORY_POS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_LEAF_ACK_TERMINATE_EXTERNAL_TRAJECTORY_POS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_ack_terminate_external_trajectory_pos_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_leaf_ack_terminate_external_trajectory_pos_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_ack_terminate_external_trajectory_pos_pack(system_id, component_id, &msg , packet1.target_system , packet1.status , packet1.traj_id );
    mavlink_msg_leaf_ack_terminate_external_trajectory_pos_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_ack_terminate_external_trajectory_pos_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.target_system , packet1.status , packet1.traj_id );
    mavlink_msg_leaf_ack_terminate_external_trajectory_pos_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_leaf_ack_terminate_external_trajectory_pos_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_ack_terminate_external_trajectory_pos_send(MAVLINK_COMM_1 , packet1.target_system , packet1.status , packet1.traj_id );
    mavlink_msg_leaf_ack_terminate_external_trajectory_pos_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("LEAF_ACK_TERMINATE_EXTERNAL_TRAJECTORY_POS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_LEAF_ACK_TERMINATE_EXTERNAL_TRAJECTORY_POS) != NULL);
#endif
}

static void mavlink_test_leaf_ack_terminate_external_trajectory_ori(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_LEAF_ACK_TERMINATE_EXTERNAL_TRAJECTORY_ORI >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_leaf_ack_terminate_external_trajectory_ori_t packet_in = {
        5,72,139
    };
    mavlink_leaf_ack_terminate_external_trajectory_ori_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.target_system = packet_in.target_system;
        packet1.status = packet_in.status;
        packet1.traj_id = packet_in.traj_id;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_LEAF_ACK_TERMINATE_EXTERNAL_TRAJECTORY_ORI_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_LEAF_ACK_TERMINATE_EXTERNAL_TRAJECTORY_ORI_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_ack_terminate_external_trajectory_ori_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_leaf_ack_terminate_external_trajectory_ori_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_ack_terminate_external_trajectory_ori_pack(system_id, component_id, &msg , packet1.target_system , packet1.status , packet1.traj_id );
    mavlink_msg_leaf_ack_terminate_external_trajectory_ori_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_ack_terminate_external_trajectory_ori_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.target_system , packet1.status , packet1.traj_id );
    mavlink_msg_leaf_ack_terminate_external_trajectory_ori_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_leaf_ack_terminate_external_trajectory_ori_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_ack_terminate_external_trajectory_ori_send(MAVLINK_COMM_1 , packet1.target_system , packet1.status , packet1.traj_id );
    mavlink_msg_leaf_ack_terminate_external_trajectory_ori_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("LEAF_ACK_TERMINATE_EXTERNAL_TRAJECTORY_ORI") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_LEAF_ACK_TERMINATE_EXTERNAL_TRAJECTORY_ORI) != NULL);
#endif
}

static void mavlink_test_leaf_external_trajectory_offset_enu_pos(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_POS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_leaf_external_trajectory_offset_enu_pos_t packet_in = {
        17.0,45.0,73.0
    };
    mavlink_leaf_external_trajectory_offset_enu_pos_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.x = packet_in.x;
        packet1.y = packet_in.y;
        packet1.z = packet_in.z;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_POS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_POS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_external_trajectory_offset_enu_pos_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_leaf_external_trajectory_offset_enu_pos_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_external_trajectory_offset_enu_pos_pack(system_id, component_id, &msg , packet1.x , packet1.y , packet1.z );
    mavlink_msg_leaf_external_trajectory_offset_enu_pos_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_external_trajectory_offset_enu_pos_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.x , packet1.y , packet1.z );
    mavlink_msg_leaf_external_trajectory_offset_enu_pos_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_leaf_external_trajectory_offset_enu_pos_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_external_trajectory_offset_enu_pos_send(MAVLINK_COMM_1 , packet1.x , packet1.y , packet1.z );
    mavlink_msg_leaf_external_trajectory_offset_enu_pos_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_POS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_POS) != NULL);
#endif
}

static void mavlink_test_leaf_external_trajectory_offset_enu_ori(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_ORI >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_leaf_external_trajectory_offset_enu_ori_t packet_in = {
        17.0,45.0,73.0
    };
    mavlink_leaf_external_trajectory_offset_enu_ori_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.x = packet_in.x;
        packet1.y = packet_in.y;
        packet1.z = packet_in.z;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_ORI_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_ORI_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_external_trajectory_offset_enu_ori_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_leaf_external_trajectory_offset_enu_ori_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_external_trajectory_offset_enu_ori_pack(system_id, component_id, &msg , packet1.x , packet1.y , packet1.z );
    mavlink_msg_leaf_external_trajectory_offset_enu_ori_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_external_trajectory_offset_enu_ori_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.x , packet1.y , packet1.z );
    mavlink_msg_leaf_external_trajectory_offset_enu_ori_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_leaf_external_trajectory_offset_enu_ori_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_external_trajectory_offset_enu_ori_send(MAVLINK_COMM_1 , packet1.x , packet1.y , packet1.z );
    mavlink_msg_leaf_external_trajectory_offset_enu_ori_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_ORI") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_LEAF_EXTERNAL_TRAJECTORY_OFFSET_ENU_ORI) != NULL);
#endif
}

static void mavlink_test_leaf_qgc_reserved_message_77032(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_LEAF_QGC_RESERVED_MESSAGE_77032 >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_leaf_qgc_reserved_message_77032_t packet_in = {
        5
    };
    mavlink_leaf_qgc_reserved_message_77032_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.reserved = packet_in.reserved;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_LEAF_QGC_RESERVED_MESSAGE_77032_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_LEAF_QGC_RESERVED_MESSAGE_77032_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_qgc_reserved_message_77032_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_leaf_qgc_reserved_message_77032_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_qgc_reserved_message_77032_pack(system_id, component_id, &msg , packet1.reserved );
    mavlink_msg_leaf_qgc_reserved_message_77032_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_qgc_reserved_message_77032_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.reserved );
    mavlink_msg_leaf_qgc_reserved_message_77032_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_leaf_qgc_reserved_message_77032_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_qgc_reserved_message_77032_send(MAVLINK_COMM_1 , packet1.reserved );
    mavlink_msg_leaf_qgc_reserved_message_77032_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("LEAF_QGC_RESERVED_MESSAGE_77032") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_LEAF_QGC_RESERVED_MESSAGE_77032) != NULL);
#endif
}

static void mavlink_test_leaf_ack_mission_run(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_LEAF_ACK_MISSION_RUN >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_leaf_ack_mission_run_t packet_in = {
        5,72,"CDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLM"
    };
    mavlink_leaf_ack_mission_run_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.target_system = packet_in.target_system;
        packet1.status = packet_in.status;
        
        mav_array_memcpy(packet1.mission_id, packet_in.mission_id, sizeof(char)*64);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_LEAF_ACK_MISSION_RUN_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_LEAF_ACK_MISSION_RUN_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_ack_mission_run_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_leaf_ack_mission_run_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_ack_mission_run_pack(system_id, component_id, &msg , packet1.target_system , packet1.status , packet1.mission_id );
    mavlink_msg_leaf_ack_mission_run_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_ack_mission_run_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.target_system , packet1.status , packet1.mission_id );
    mavlink_msg_leaf_ack_mission_run_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_leaf_ack_mission_run_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_ack_mission_run_send(MAVLINK_COMM_1 , packet1.target_system , packet1.status , packet1.mission_id );
    mavlink_msg_leaf_ack_mission_run_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("LEAF_ACK_MISSION_RUN") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_LEAF_ACK_MISSION_RUN) != NULL);
#endif
}

static void mavlink_test_leaf_ack_mission_complete(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_LEAF_ACK_MISSION_COMPLETE >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_leaf_ack_mission_complete_t packet_in = {
        5,"BCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKL"
    };
    mavlink_leaf_ack_mission_complete_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.target_system = packet_in.target_system;
        
        mav_array_memcpy(packet1.mission_id, packet_in.mission_id, sizeof(char)*64);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_LEAF_ACK_MISSION_COMPLETE_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_LEAF_ACK_MISSION_COMPLETE_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_ack_mission_complete_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_leaf_ack_mission_complete_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_ack_mission_complete_pack(system_id, component_id, &msg , packet1.target_system , packet1.mission_id );
    mavlink_msg_leaf_ack_mission_complete_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_ack_mission_complete_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.target_system , packet1.mission_id );
    mavlink_msg_leaf_ack_mission_complete_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_leaf_ack_mission_complete_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_ack_mission_complete_send(MAVLINK_COMM_1 , packet1.target_system , packet1.mission_id );
    mavlink_msg_leaf_ack_mission_complete_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("LEAF_ACK_MISSION_COMPLETE") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_LEAF_ACK_MISSION_COMPLETE) != NULL);
#endif
}

static void mavlink_test_leaf_mission_status(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_LEAF_MISSION_STATUS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_leaf_mission_status_t packet_in = {
        5,72
    };
    mavlink_leaf_mission_status_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.status = packet_in.status;
        packet1.joystick_mode = packet_in.joystick_mode;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_LEAF_MISSION_STATUS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_LEAF_MISSION_STATUS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_mission_status_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_leaf_mission_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_mission_status_pack(system_id, component_id, &msg , packet1.status , packet1.joystick_mode );
    mavlink_msg_leaf_mission_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_mission_status_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.status , packet1.joystick_mode );
    mavlink_msg_leaf_mission_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_leaf_mission_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_mission_status_send(MAVLINK_COMM_1 , packet1.status , packet1.joystick_mode );
    mavlink_msg_leaf_mission_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("LEAF_MISSION_STATUS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_LEAF_MISSION_STATUS) != NULL);
#endif
}

static void mavlink_test_leaf_do_qgc_mission_control_cmd(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_LEAF_DO_QGC_MISSION_CONTROL_CMD >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_leaf_do_qgc_mission_control_cmd_t packet_in = {
        5,72,"CDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLM"
    };
    mavlink_leaf_do_qgc_mission_control_cmd_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.target_system = packet_in.target_system;
        packet1.cmd = packet_in.cmd;
        
        mav_array_memcpy(packet1.mission_id, packet_in.mission_id, sizeof(char)*64);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_LEAF_DO_QGC_MISSION_CONTROL_CMD_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_LEAF_DO_QGC_MISSION_CONTROL_CMD_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_do_qgc_mission_control_cmd_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_leaf_do_qgc_mission_control_cmd_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_do_qgc_mission_control_cmd_pack(system_id, component_id, &msg , packet1.target_system , packet1.cmd , packet1.mission_id );
    mavlink_msg_leaf_do_qgc_mission_control_cmd_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_do_qgc_mission_control_cmd_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.target_system , packet1.cmd , packet1.mission_id );
    mavlink_msg_leaf_do_qgc_mission_control_cmd_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_leaf_do_qgc_mission_control_cmd_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_do_qgc_mission_control_cmd_send(MAVLINK_COMM_1 , packet1.target_system , packet1.cmd , packet1.mission_id );
    mavlink_msg_leaf_do_qgc_mission_control_cmd_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("LEAF_DO_QGC_MISSION_CONTROL_CMD") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_LEAF_DO_QGC_MISSION_CONTROL_CMD) != NULL);
#endif
}

static void mavlink_test_leaf_qgc_reserved_message_77037(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_LEAF_QGC_RESERVED_MESSAGE_77037 >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_leaf_qgc_reserved_message_77037_t packet_in = {
        5
    };
    mavlink_leaf_qgc_reserved_message_77037_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.reserved = packet_in.reserved;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_LEAF_QGC_RESERVED_MESSAGE_77037_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_LEAF_QGC_RESERVED_MESSAGE_77037_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_qgc_reserved_message_77037_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_leaf_qgc_reserved_message_77037_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_qgc_reserved_message_77037_pack(system_id, component_id, &msg , packet1.reserved );
    mavlink_msg_leaf_qgc_reserved_message_77037_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_qgc_reserved_message_77037_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.reserved );
    mavlink_msg_leaf_qgc_reserved_message_77037_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_leaf_qgc_reserved_message_77037_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_qgc_reserved_message_77037_send(MAVLINK_COMM_1 , packet1.reserved );
    mavlink_msg_leaf_qgc_reserved_message_77037_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("LEAF_QGC_RESERVED_MESSAGE_77037") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_LEAF_QGC_RESERVED_MESSAGE_77037) != NULL);
#endif
}

static void mavlink_test_leaf_do_emergency_rtl(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_LEAF_DO_EMERGENCY_RTL >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_leaf_do_emergency_rtl_t packet_in = {
        5
    };
    mavlink_leaf_do_emergency_rtl_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.target_system = packet_in.target_system;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_LEAF_DO_EMERGENCY_RTL_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_LEAF_DO_EMERGENCY_RTL_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_do_emergency_rtl_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_leaf_do_emergency_rtl_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_do_emergency_rtl_pack(system_id, component_id, &msg , packet1.target_system );
    mavlink_msg_leaf_do_emergency_rtl_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_do_emergency_rtl_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.target_system );
    mavlink_msg_leaf_do_emergency_rtl_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_leaf_do_emergency_rtl_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_do_emergency_rtl_send(MAVLINK_COMM_1 , packet1.target_system );
    mavlink_msg_leaf_do_emergency_rtl_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("LEAF_DO_EMERGENCY_RTL") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_LEAF_DO_EMERGENCY_RTL) != NULL);
#endif
}

static void mavlink_test_leaf_ack_mission_pause(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_LEAF_ACK_MISSION_PAUSE >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_leaf_ack_mission_pause_t packet_in = {
        5,72,"CDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLM"
    };
    mavlink_leaf_ack_mission_pause_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.target_system = packet_in.target_system;
        packet1.status = packet_in.status;
        
        mav_array_memcpy(packet1.mission_id, packet_in.mission_id, sizeof(char)*64);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_LEAF_ACK_MISSION_PAUSE_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_LEAF_ACK_MISSION_PAUSE_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_ack_mission_pause_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_leaf_ack_mission_pause_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_ack_mission_pause_pack(system_id, component_id, &msg , packet1.target_system , packet1.status , packet1.mission_id );
    mavlink_msg_leaf_ack_mission_pause_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_ack_mission_pause_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.target_system , packet1.status , packet1.mission_id );
    mavlink_msg_leaf_ack_mission_pause_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_leaf_ack_mission_pause_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_ack_mission_pause_send(MAVLINK_COMM_1 , packet1.target_system , packet1.status , packet1.mission_id );
    mavlink_msg_leaf_ack_mission_pause_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("LEAF_ACK_MISSION_PAUSE") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_LEAF_ACK_MISSION_PAUSE) != NULL);
#endif
}

static void mavlink_test_leaf_ack_mission_resume(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_LEAF_ACK_MISSION_RESUME >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_leaf_ack_mission_resume_t packet_in = {
        5,72,"CDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLM"
    };
    mavlink_leaf_ack_mission_resume_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.target_system = packet_in.target_system;
        packet1.status = packet_in.status;
        
        mav_array_memcpy(packet1.mission_id, packet_in.mission_id, sizeof(char)*64);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_LEAF_ACK_MISSION_RESUME_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_LEAF_ACK_MISSION_RESUME_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_ack_mission_resume_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_leaf_ack_mission_resume_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_ack_mission_resume_pack(system_id, component_id, &msg , packet1.target_system , packet1.status , packet1.mission_id );
    mavlink_msg_leaf_ack_mission_resume_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_ack_mission_resume_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.target_system , packet1.status , packet1.mission_id );
    mavlink_msg_leaf_ack_mission_resume_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_leaf_ack_mission_resume_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_ack_mission_resume_send(MAVLINK_COMM_1 , packet1.target_system , packet1.status , packet1.mission_id );
    mavlink_msg_leaf_ack_mission_resume_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("LEAF_ACK_MISSION_RESUME") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_LEAF_ACK_MISSION_RESUME) != NULL);
#endif
}

static void mavlink_test_leaf_ack_mission_abort(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_LEAF_ACK_MISSION_ABORT >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_leaf_ack_mission_abort_t packet_in = {
        5,72,"CDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLM"
    };
    mavlink_leaf_ack_mission_abort_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.target_system = packet_in.target_system;
        packet1.status = packet_in.status;
        
        mav_array_memcpy(packet1.mission_id, packet_in.mission_id, sizeof(char)*64);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_LEAF_ACK_MISSION_ABORT_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_LEAF_ACK_MISSION_ABORT_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_ack_mission_abort_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_leaf_ack_mission_abort_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_ack_mission_abort_pack(system_id, component_id, &msg , packet1.target_system , packet1.status , packet1.mission_id );
    mavlink_msg_leaf_ack_mission_abort_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_ack_mission_abort_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.target_system , packet1.status , packet1.mission_id );
    mavlink_msg_leaf_ack_mission_abort_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_leaf_ack_mission_abort_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_ack_mission_abort_send(MAVLINK_COMM_1 , packet1.target_system , packet1.status , packet1.mission_id );
    mavlink_msg_leaf_ack_mission_abort_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("LEAF_ACK_MISSION_ABORT") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_LEAF_ACK_MISSION_ABORT) != NULL);
#endif
}

static void mavlink_test_leaf_do_emergency_abort(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_LEAF_DO_EMERGENCY_ABORT >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_leaf_do_emergency_abort_t packet_in = {
        5
    };
    mavlink_leaf_do_emergency_abort_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.target_system = packet_in.target_system;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_LEAF_DO_EMERGENCY_ABORT_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_LEAF_DO_EMERGENCY_ABORT_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_do_emergency_abort_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_leaf_do_emergency_abort_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_do_emergency_abort_pack(system_id, component_id, &msg , packet1.target_system );
    mavlink_msg_leaf_do_emergency_abort_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_do_emergency_abort_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.target_system );
    mavlink_msg_leaf_do_emergency_abort_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_leaf_do_emergency_abort_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_do_emergency_abort_send(MAVLINK_COMM_1 , packet1.target_system );
    mavlink_msg_leaf_do_emergency_abort_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("LEAF_DO_EMERGENCY_ABORT") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_LEAF_DO_EMERGENCY_ABORT) != NULL);
#endif
}

static void mavlink_test_leaf_setpoint_offset(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_LEAF_SETPOINT_OFFSET >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_leaf_setpoint_offset_t packet_in = {
        17.0,45.0,73.0,101.0
    };
    mavlink_leaf_setpoint_offset_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.x = packet_in.x;
        packet1.y = packet_in.y;
        packet1.z = packet_in.z;
        packet1.yaw = packet_in.yaw;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_LEAF_SETPOINT_OFFSET_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_LEAF_SETPOINT_OFFSET_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_setpoint_offset_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_leaf_setpoint_offset_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_setpoint_offset_pack(system_id, component_id, &msg , packet1.x , packet1.y , packet1.z , packet1.yaw );
    mavlink_msg_leaf_setpoint_offset_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_setpoint_offset_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.x , packet1.y , packet1.z , packet1.yaw );
    mavlink_msg_leaf_setpoint_offset_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_leaf_setpoint_offset_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_setpoint_offset_send(MAVLINK_COMM_1 , packet1.x , packet1.y , packet1.z , packet1.yaw );
    mavlink_msg_leaf_setpoint_offset_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("LEAF_SETPOINT_OFFSET") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_LEAF_SETPOINT_OFFSET) != NULL);
#endif
}

static void mavlink_test_leaf_mission_heartbeat(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_leaf_mission_heartbeat_t packet_in = {
        5,72,"CDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLM",75,142
    };
    mavlink_leaf_mission_heartbeat_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.mission_status = packet_in.mission_status;
        packet1.joystick_mode = packet_in.joystick_mode;
        packet1.queue_count = packet_in.queue_count;
        packet1.predefined_actions_status = packet_in.predefined_actions_status;
        
        mav_array_memcpy(packet1.mission_id, packet_in.mission_id, sizeof(char)*64);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_mission_heartbeat_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_leaf_mission_heartbeat_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_mission_heartbeat_pack(system_id, component_id, &msg , packet1.mission_status , packet1.joystick_mode , packet1.mission_id , packet1.queue_count , packet1.predefined_actions_status );
    mavlink_msg_leaf_mission_heartbeat_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_mission_heartbeat_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.mission_status , packet1.joystick_mode , packet1.mission_id , packet1.queue_count , packet1.predefined_actions_status );
    mavlink_msg_leaf_mission_heartbeat_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_leaf_mission_heartbeat_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_mission_heartbeat_send(MAVLINK_COMM_1 , packet1.mission_status , packet1.joystick_mode , packet1.mission_id , packet1.queue_count , packet1.predefined_actions_status );
    mavlink_msg_leaf_mission_heartbeat_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("LEAF_MISSION_HEARTBEAT") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT) != NULL);
#endif
}

static void mavlink_test_leaf_sys_status(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_LEAF_SYS_STATUS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_leaf_sys_status_t packet_in = {
        5,72,139,206,17,84,151,218,29,96,163,230
    };
    mavlink_leaf_sys_status_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.airborne_status = packet_in.airborne_status;
        packet1.arm_stage = packet_in.arm_stage;
        packet1.alt_axis_learning_status = packet_in.alt_axis_learning_status;
        packet1.landing_status = packet_in.landing_status;
        packet1.learning_status = packet_in.learning_status;
        packet1.pitch_axis_learning_status = packet_in.pitch_axis_learning_status;
        packet1.pre_idle_check_status = packet_in.pre_idle_check_status;
        packet1.roll_axis_learning_status = packet_in.roll_axis_learning_status;
        packet1.takeoff_status = packet_in.takeoff_status;
        packet1.x_axis_learning_status = packet_in.x_axis_learning_status;
        packet1.y_axis_learning_status = packet_in.y_axis_learning_status;
        packet1.yaw_axis_learning_status = packet_in.yaw_axis_learning_status;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_LEAF_SYS_STATUS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_LEAF_SYS_STATUS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_sys_status_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_leaf_sys_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_sys_status_pack(system_id, component_id, &msg , packet1.airborne_status , packet1.arm_stage , packet1.alt_axis_learning_status , packet1.landing_status , packet1.learning_status , packet1.pitch_axis_learning_status , packet1.pre_idle_check_status , packet1.roll_axis_learning_status , packet1.takeoff_status , packet1.x_axis_learning_status , packet1.y_axis_learning_status , packet1.yaw_axis_learning_status );
    mavlink_msg_leaf_sys_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_sys_status_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.airborne_status , packet1.arm_stage , packet1.alt_axis_learning_status , packet1.landing_status , packet1.learning_status , packet1.pitch_axis_learning_status , packet1.pre_idle_check_status , packet1.roll_axis_learning_status , packet1.takeoff_status , packet1.x_axis_learning_status , packet1.y_axis_learning_status , packet1.yaw_axis_learning_status );
    mavlink_msg_leaf_sys_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_leaf_sys_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_sys_status_send(MAVLINK_COMM_1 , packet1.airborne_status , packet1.arm_stage , packet1.alt_axis_learning_status , packet1.landing_status , packet1.learning_status , packet1.pitch_axis_learning_status , packet1.pre_idle_check_status , packet1.roll_axis_learning_status , packet1.takeoff_status , packet1.x_axis_learning_status , packet1.y_axis_learning_status , packet1.yaw_axis_learning_status );
    mavlink_msg_leaf_sys_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("LEAF_SYS_STATUS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_LEAF_SYS_STATUS) != NULL);
#endif
}

static void mavlink_test_leaf_do_switch_mrft_yaw(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_YAW >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_leaf_do_switch_mrft_yaw_t packet_in = {
        5,72
    };
    mavlink_leaf_do_switch_mrft_yaw_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.target_system = packet_in.target_system;
        packet1.enable = packet_in.enable;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_YAW_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_YAW_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_do_switch_mrft_yaw_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_leaf_do_switch_mrft_yaw_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_do_switch_mrft_yaw_pack(system_id, component_id, &msg , packet1.target_system , packet1.enable );
    mavlink_msg_leaf_do_switch_mrft_yaw_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_do_switch_mrft_yaw_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.target_system , packet1.enable );
    mavlink_msg_leaf_do_switch_mrft_yaw_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_leaf_do_switch_mrft_yaw_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_do_switch_mrft_yaw_send(MAVLINK_COMM_1 , packet1.target_system , packet1.enable );
    mavlink_msg_leaf_do_switch_mrft_yaw_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("LEAF_DO_SWITCH_MRFT_YAW") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_LEAF_DO_SWITCH_MRFT_YAW) != NULL);
#endif
}

static void mavlink_test_leaf_mission_heartbeat_v2(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_V2 >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_leaf_mission_heartbeat_v2_t packet_in = {
        5,72,"CDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLM",75,142,209,"RSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZAB",212,"EFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNO"
    };
    mavlink_leaf_mission_heartbeat_v2_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.LeafFC_mission_status = packet_in.LeafFC_mission_status;
        packet1.joystick_mode = packet_in.joystick_mode;
        packet1.queue_count = packet_in.queue_count;
        packet1.predefined_actions_status = packet_in.predefined_actions_status;
        packet1.SDK_status = packet_in.SDK_status;
        packet1.step_type = packet_in.step_type;
        
        mav_array_memcpy(packet1.mission_id, packet_in.mission_id, sizeof(char)*64);
        mav_array_memcpy(packet1.mission_name, packet_in.mission_name, sizeof(char)*64);
        mav_array_memcpy(packet1.step_name, packet_in.step_name, sizeof(char)*64);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_V2_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_V2_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_mission_heartbeat_v2_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_leaf_mission_heartbeat_v2_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_mission_heartbeat_v2_pack(system_id, component_id, &msg , packet1.LeafFC_mission_status , packet1.joystick_mode , packet1.mission_id , packet1.queue_count , packet1.predefined_actions_status , packet1.SDK_status , packet1.mission_name , packet1.step_type , packet1.step_name );
    mavlink_msg_leaf_mission_heartbeat_v2_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_mission_heartbeat_v2_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.LeafFC_mission_status , packet1.joystick_mode , packet1.mission_id , packet1.queue_count , packet1.predefined_actions_status , packet1.SDK_status , packet1.mission_name , packet1.step_type , packet1.step_name );
    mavlink_msg_leaf_mission_heartbeat_v2_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_leaf_mission_heartbeat_v2_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_mission_heartbeat_v2_send(MAVLINK_COMM_1 , packet1.LeafFC_mission_status , packet1.joystick_mode , packet1.mission_id , packet1.queue_count , packet1.predefined_actions_status , packet1.SDK_status , packet1.mission_name , packet1.step_type , packet1.step_name );
    mavlink_msg_leaf_mission_heartbeat_v2_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("LEAF_MISSION_HEARTBEAT_V2") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_LEAF_MISSION_HEARTBEAT_V2) != NULL);
#endif
}

static void mavlink_test_leaf_do_refuel(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_LEAF_DO_REFUEL >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_leaf_do_refuel_t packet_in = {
        5,72
    };
    mavlink_leaf_do_refuel_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.target_system = packet_in.target_system;
        packet1.refuel = packet_in.refuel;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_LEAF_DO_REFUEL_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_LEAF_DO_REFUEL_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_do_refuel_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_leaf_do_refuel_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_do_refuel_pack(system_id, component_id, &msg , packet1.target_system , packet1.refuel );
    mavlink_msg_leaf_do_refuel_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_do_refuel_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.target_system , packet1.refuel );
    mavlink_msg_leaf_do_refuel_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_leaf_do_refuel_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_do_refuel_send(MAVLINK_COMM_1 , packet1.target_system , packet1.refuel );
    mavlink_msg_leaf_do_refuel_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("LEAF_DO_REFUEL") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_LEAF_DO_REFUEL) != NULL);
#endif
}

static void mavlink_test_leaf_do_track(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_LEAF_DO_TRACK >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_leaf_do_track_t packet_in = {
        17.0,45.0,73.0,41,108
    };
    mavlink_leaf_do_track_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.aim_x = packet_in.aim_x;
        packet1.aim_y = packet_in.aim_y;
        packet1.box_size = packet_in.box_size;
        packet1.target_system = packet_in.target_system;
        packet1.track = packet_in.track;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_LEAF_DO_TRACK_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_LEAF_DO_TRACK_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_do_track_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_leaf_do_track_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_do_track_pack(system_id, component_id, &msg , packet1.target_system , packet1.track , packet1.aim_x , packet1.aim_y , packet1.box_size );
    mavlink_msg_leaf_do_track_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_do_track_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.target_system , packet1.track , packet1.aim_x , packet1.aim_y , packet1.box_size );
    mavlink_msg_leaf_do_track_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_leaf_do_track_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_do_track_send(MAVLINK_COMM_1 , packet1.target_system , packet1.track , packet1.aim_x , packet1.aim_y , packet1.box_size );
    mavlink_msg_leaf_do_track_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("LEAF_DO_TRACK") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_LEAF_DO_TRACK) != NULL);
#endif
}

static void mavlink_test_leaf_bbox_telemetry(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_LEAF_BBOX_TELEMETRY >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_leaf_bbox_telemetry_t packet_in = {
        17.0,45.0,73.0,101.0,129.0,65,132,199,10
    };
    mavlink_leaf_bbox_telemetry_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.box_center_x_norm = packet_in.box_center_x_norm;
        packet1.box_center_y_norm = packet_in.box_center_y_norm;
        packet1.box_width_norm = packet_in.box_width_norm;
        packet1.box_height_norm = packet_in.box_height_norm;
        packet1.tracker_fps = packet_in.tracker_fps;
        packet1.is_healthy = packet_in.is_healthy;
        packet1.is_tracking = packet_in.is_tracking;
        packet1.estimator_valid = packet_in.estimator_valid;
        packet1.source_id = packet_in.source_id;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_LEAF_BBOX_TELEMETRY_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_LEAF_BBOX_TELEMETRY_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_bbox_telemetry_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_leaf_bbox_telemetry_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_bbox_telemetry_pack(system_id, component_id, &msg , packet1.box_center_x_norm , packet1.box_center_y_norm , packet1.box_width_norm , packet1.box_height_norm , packet1.tracker_fps , packet1.is_healthy , packet1.is_tracking , packet1.estimator_valid , packet1.source_id );
    mavlink_msg_leaf_bbox_telemetry_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_bbox_telemetry_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.box_center_x_norm , packet1.box_center_y_norm , packet1.box_width_norm , packet1.box_height_norm , packet1.tracker_fps , packet1.is_healthy , packet1.is_tracking , packet1.estimator_valid , packet1.source_id );
    mavlink_msg_leaf_bbox_telemetry_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_leaf_bbox_telemetry_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_bbox_telemetry_send(MAVLINK_COMM_1 , packet1.box_center_x_norm , packet1.box_center_y_norm , packet1.box_width_norm , packet1.box_height_norm , packet1.tracker_fps , packet1.is_healthy , packet1.is_tracking , packet1.estimator_valid , packet1.source_id );
    mavlink_msg_leaf_bbox_telemetry_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("LEAF_BBOX_TELEMETRY") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_LEAF_BBOX_TELEMETRY) != NULL);
#endif
}

static void mavlink_test_leaf_racer_status(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_LEAF_RACER_STATUS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_leaf_racer_status_t packet_in = {
        963497464,963497672,17651,17755,17859,175,242,53,120,187,254,65,132,199,10
    };
    mavlink_leaf_racer_status_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.gps_lat_1e7 = packet_in.gps_lat_1e7;
        packet1.gps_lon_1e7 = packet_in.gps_lon_1e7;
        packet1.gps_alt_m = packet_in.gps_alt_m;
        packet1.gps_ground_speed_cms = packet_in.gps_ground_speed_cms;
        packet1.gps_ground_course_decideg = packet_in.gps_ground_course_decideg;
        packet1.msp_status = packet_in.msp_status;
        packet1.current_racer_mode = packet_in.current_racer_mode;
        packet1.tracker_health_state = packet_in.tracker_health_state;
        packet1.estimator_health = packet_in.estimator_health;
        packet1.rc_connection = packet_in.rc_connection;
        packet1.refuel_switch_state = packet_in.refuel_switch_state;
        packet1.pilot_safety_takeover_state = packet_in.pilot_safety_takeover_state;
        packet1.auto_refuel = packet_in.auto_refuel;
        packet1.gps_num_sat = packet_in.gps_num_sat;
        packet1.gps_fix = packet_in.gps_fix;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_LEAF_RACER_STATUS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_LEAF_RACER_STATUS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_racer_status_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_leaf_racer_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_racer_status_pack(system_id, component_id, &msg , packet1.msp_status , packet1.current_racer_mode , packet1.tracker_health_state , packet1.estimator_health , packet1.rc_connection , packet1.refuel_switch_state , packet1.pilot_safety_takeover_state , packet1.auto_refuel , packet1.gps_lat_1e7 , packet1.gps_lon_1e7 , packet1.gps_alt_m , packet1.gps_num_sat , packet1.gps_fix , packet1.gps_ground_speed_cms , packet1.gps_ground_course_decideg );
    mavlink_msg_leaf_racer_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_racer_status_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.msp_status , packet1.current_racer_mode , packet1.tracker_health_state , packet1.estimator_health , packet1.rc_connection , packet1.refuel_switch_state , packet1.pilot_safety_takeover_state , packet1.auto_refuel , packet1.gps_lat_1e7 , packet1.gps_lon_1e7 , packet1.gps_alt_m , packet1.gps_num_sat , packet1.gps_fix , packet1.gps_ground_speed_cms , packet1.gps_ground_course_decideg );
    mavlink_msg_leaf_racer_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_leaf_racer_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_racer_status_send(MAVLINK_COMM_1 , packet1.msp_status , packet1.current_racer_mode , packet1.tracker_health_state , packet1.estimator_health , packet1.rc_connection , packet1.refuel_switch_state , packet1.pilot_safety_takeover_state , packet1.auto_refuel , packet1.gps_lat_1e7 , packet1.gps_lon_1e7 , packet1.gps_alt_m , packet1.gps_num_sat , packet1.gps_fix , packet1.gps_ground_speed_cms , packet1.gps_ground_course_decideg );
    mavlink_msg_leaf_racer_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("LEAF_RACER_STATUS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_LEAF_RACER_STATUS) != NULL);
#endif
}

static void mavlink_test_leaf_bf_status_ex(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_LEAF_BF_STATUS_EX >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_leaf_bf_status_ex_t packet_in = {
        963497464,963497672,17651,17755,17859,17963,18067,187,254,65,132
    };
    mavlink_leaf_bf_status_ex_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.flight_mode_flags = packet_in.flight_mode_flags;
        packet1.arming_disable_flags = packet_in.arming_disable_flags;
        packet1.cycle_time_us = packet_in.cycle_time_us;
        packet1.i2c_errors = packet_in.i2c_errors;
        packet1.sensor_mask = packet_in.sensor_mask;
        packet1.system_load = packet_in.system_load;
        packet1.gyro_cycle_time = packet_in.gyro_cycle_time;
        packet1.profile = packet_in.profile;
        packet1.flight_mode_count = packet_in.flight_mode_count;
        packet1.arming_disable_count = packet_in.arming_disable_count;
        packet1.config_state_flags = packet_in.config_state_flags;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_LEAF_BF_STATUS_EX_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_LEAF_BF_STATUS_EX_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_bf_status_ex_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_leaf_bf_status_ex_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_bf_status_ex_pack(system_id, component_id, &msg , packet1.cycle_time_us , packet1.i2c_errors , packet1.sensor_mask , packet1.flight_mode_flags , packet1.profile , packet1.system_load , packet1.gyro_cycle_time , packet1.flight_mode_count , packet1.arming_disable_count , packet1.arming_disable_flags , packet1.config_state_flags );
    mavlink_msg_leaf_bf_status_ex_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_bf_status_ex_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.cycle_time_us , packet1.i2c_errors , packet1.sensor_mask , packet1.flight_mode_flags , packet1.profile , packet1.system_load , packet1.gyro_cycle_time , packet1.flight_mode_count , packet1.arming_disable_count , packet1.arming_disable_flags , packet1.config_state_flags );
    mavlink_msg_leaf_bf_status_ex_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_leaf_bf_status_ex_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_bf_status_ex_send(MAVLINK_COMM_1 , packet1.cycle_time_us , packet1.i2c_errors , packet1.sensor_mask , packet1.flight_mode_flags , packet1.profile , packet1.system_load , packet1.gyro_cycle_time , packet1.flight_mode_count , packet1.arming_disable_count , packet1.arming_disable_flags , packet1.config_state_flags );
    mavlink_msg_leaf_bf_status_ex_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("LEAF_BF_STATUS_EX") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_LEAF_BF_STATUS_EX) != NULL);
#endif
}

static void mavlink_test_leaf_bf_box_names(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_LEAF_BF_BOX_NAMES >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_leaf_bf_box_names_t packet_in = {
        "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTU"
    };
    mavlink_leaf_bf_box_names_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        
        mav_array_memcpy(packet1.box_names, packet_in.box_names, sizeof(char)*230);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_LEAF_BF_BOX_NAMES_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_LEAF_BF_BOX_NAMES_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_bf_box_names_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_leaf_bf_box_names_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_bf_box_names_pack(system_id, component_id, &msg , packet1.box_names );
    mavlink_msg_leaf_bf_box_names_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_bf_box_names_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.box_names );
    mavlink_msg_leaf_bf_box_names_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_leaf_bf_box_names_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_bf_box_names_send(MAVLINK_COMM_1 , packet1.box_names );
    mavlink_msg_leaf_bf_box_names_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("LEAF_BF_BOX_NAMES") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_LEAF_BF_BOX_NAMES) != NULL);
#endif
}

static void mavlink_test_leaf_set_rc_loss_behavior(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_LEAF_SET_RC_LOSS_BEHAVIOR >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_leaf_set_rc_loss_behavior_t packet_in = {
        5,72
    };
    mavlink_leaf_set_rc_loss_behavior_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.target_system = packet_in.target_system;
        packet1.generate_frame = packet_in.generate_frame;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_LEAF_SET_RC_LOSS_BEHAVIOR_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_LEAF_SET_RC_LOSS_BEHAVIOR_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_set_rc_loss_behavior_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_leaf_set_rc_loss_behavior_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_set_rc_loss_behavior_pack(system_id, component_id, &msg , packet1.target_system , packet1.generate_frame );
    mavlink_msg_leaf_set_rc_loss_behavior_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_set_rc_loss_behavior_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.target_system , packet1.generate_frame );
    mavlink_msg_leaf_set_rc_loss_behavior_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_leaf_set_rc_loss_behavior_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_set_rc_loss_behavior_send(MAVLINK_COMM_1 , packet1.target_system , packet1.generate_frame );
    mavlink_msg_leaf_set_rc_loss_behavior_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("LEAF_SET_RC_LOSS_BEHAVIOR") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_LEAF_SET_RC_LOSS_BEHAVIOR) != NULL);
#endif
}

static void mavlink_test_leaf_pi_health(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_LEAF_PI_HEALTH >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_leaf_pi_health_t packet_in = {
        17235,17339,17443,17547,29,96,163,230,41
    };
    mavlink_leaf_pi_health_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.soc_temp_c_deci = packet_in.soc_temp_c_deci;
        packet1.core_volt_min_mv = packet_in.core_volt_min_mv;
        packet1.core_volt_mean_mv = packet_in.core_volt_mean_mv;
        packet1.arm_clock_mhz = packet_in.arm_clock_mhz;
        packet1.available = packet_in.available;
        packet1.stale = packet_in.stale;
        packet1.undervoltage = packet_in.undervoltage;
        packet1.volt_sample_count = packet_in.volt_sample_count;
        packet1.sample_age_s = packet_in.sample_age_s;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_LEAF_PI_HEALTH_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_LEAF_PI_HEALTH_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_pi_health_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_leaf_pi_health_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_pi_health_pack(system_id, component_id, &msg , packet1.soc_temp_c_deci , packet1.core_volt_min_mv , packet1.core_volt_mean_mv , packet1.arm_clock_mhz , packet1.available , packet1.stale , packet1.undervoltage , packet1.volt_sample_count , packet1.sample_age_s );
    mavlink_msg_leaf_pi_health_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_pi_health_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.soc_temp_c_deci , packet1.core_volt_min_mv , packet1.core_volt_mean_mv , packet1.arm_clock_mhz , packet1.available , packet1.stale , packet1.undervoltage , packet1.volt_sample_count , packet1.sample_age_s );
    mavlink_msg_leaf_pi_health_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_leaf_pi_health_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_pi_health_send(MAVLINK_COMM_1 , packet1.soc_temp_c_deci , packet1.core_volt_min_mv , packet1.core_volt_mean_mv , packet1.arm_clock_mhz , packet1.available , packet1.stale , packet1.undervoltage , packet1.volt_sample_count , packet1.sample_age_s );
    mavlink_msg_leaf_pi_health_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("LEAF_PI_HEALTH") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_LEAF_PI_HEALTH) != NULL);
#endif
}

static void mavlink_test_leaf_target_gps_vision_correlation_confirm(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_leaf_target_gps_vision_correlation_confirm_t packet_in = {
        5,72
    };
    mavlink_leaf_target_gps_vision_correlation_confirm_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.target_system = packet_in.target_system;
        packet1.correlation_between_target_gps_and_vision_confirmed = packet_in.correlation_between_target_gps_and_vision_confirmed;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_target_gps_vision_correlation_confirm_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_leaf_target_gps_vision_correlation_confirm_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_target_gps_vision_correlation_confirm_pack(system_id, component_id, &msg , packet1.target_system , packet1.correlation_between_target_gps_and_vision_confirmed );
    mavlink_msg_leaf_target_gps_vision_correlation_confirm_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_target_gps_vision_correlation_confirm_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.target_system , packet1.correlation_between_target_gps_and_vision_confirmed );
    mavlink_msg_leaf_target_gps_vision_correlation_confirm_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_leaf_target_gps_vision_correlation_confirm_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_target_gps_vision_correlation_confirm_send(MAVLINK_COMM_1 , packet1.target_system , packet1.correlation_between_target_gps_and_vision_confirmed );
    mavlink_msg_leaf_target_gps_vision_correlation_confirm_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM) != NULL);
#endif
}

static void mavlink_test_leaf_target_gps_vision_correlation_confirm_response(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_RESPONSE >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_leaf_target_gps_vision_correlation_confirm_response_t packet_in = {
        5,72,139,206
    };
    mavlink_leaf_target_gps_vision_correlation_confirm_response_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.correlation_confirmation_accepted = packet_in.correlation_confirmation_accepted;
        packet1.reason = packet_in.reason;
        packet1.correlation_between_target_gps_and_vision_confirmed = packet_in.correlation_between_target_gps_and_vision_confirmed;
        packet1.cv_tracker_state = packet_in.cv_tracker_state;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_RESPONSE_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_RESPONSE_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_target_gps_vision_correlation_confirm_response_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_leaf_target_gps_vision_correlation_confirm_response_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_target_gps_vision_correlation_confirm_response_pack(system_id, component_id, &msg , packet1.correlation_confirmation_accepted , packet1.reason , packet1.correlation_between_target_gps_and_vision_confirmed , packet1.cv_tracker_state );
    mavlink_msg_leaf_target_gps_vision_correlation_confirm_response_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_target_gps_vision_correlation_confirm_response_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.correlation_confirmation_accepted , packet1.reason , packet1.correlation_between_target_gps_and_vision_confirmed , packet1.cv_tracker_state );
    mavlink_msg_leaf_target_gps_vision_correlation_confirm_response_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_leaf_target_gps_vision_correlation_confirm_response_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_target_gps_vision_correlation_confirm_response_send(MAVLINK_COMM_1 , packet1.correlation_confirmation_accepted , packet1.reason , packet1.correlation_between_target_gps_and_vision_confirmed , packet1.cv_tracker_state );
    mavlink_msg_leaf_target_gps_vision_correlation_confirm_response_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_RESPONSE") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_LEAF_TARGET_GPS_VISION_CORRELATION_CONFIRM_RESPONSE) != NULL);
#endif
}

static void mavlink_test_leaf_cmd_leaf_tracker_source_id(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_LEAF_CMD_LEAF_TRACKER_SOURCE_ID >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_leaf_cmd_leaf_tracker_source_id_t packet_in = {
        5,72
    };
    mavlink_leaf_cmd_leaf_tracker_source_id_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.target_system = packet_in.target_system;
        packet1.source_id = packet_in.source_id;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_LEAF_CMD_LEAF_TRACKER_SOURCE_ID_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_LEAF_CMD_LEAF_TRACKER_SOURCE_ID_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_cmd_leaf_tracker_source_id_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_leaf_cmd_leaf_tracker_source_id_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_cmd_leaf_tracker_source_id_pack(system_id, component_id, &msg , packet1.target_system , packet1.source_id );
    mavlink_msg_leaf_cmd_leaf_tracker_source_id_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_cmd_leaf_tracker_source_id_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.target_system , packet1.source_id );
    mavlink_msg_leaf_cmd_leaf_tracker_source_id_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_leaf_cmd_leaf_tracker_source_id_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_cmd_leaf_tracker_source_id_send(MAVLINK_COMM_1 , packet1.target_system , packet1.source_id );
    mavlink_msg_leaf_cmd_leaf_tracker_source_id_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("LEAF_CMD_LEAF_TRACKER_SOURCE_ID") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_LEAF_CMD_LEAF_TRACKER_SOURCE_ID) != NULL);
#endif
}

static void mavlink_test_leaf_do_video_stream(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_LEAF_DO_VIDEO_STREAM >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_leaf_do_video_stream_t packet_in = {
        5,72
    };
    mavlink_leaf_do_video_stream_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.target_system = packet_in.target_system;
        packet1.stream_enabled = packet_in.stream_enabled;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_LEAF_DO_VIDEO_STREAM_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_LEAF_DO_VIDEO_STREAM_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_do_video_stream_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_leaf_do_video_stream_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_do_video_stream_pack(system_id, component_id, &msg , packet1.target_system , packet1.stream_enabled );
    mavlink_msg_leaf_do_video_stream_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_do_video_stream_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.target_system , packet1.stream_enabled );
    mavlink_msg_leaf_do_video_stream_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_leaf_do_video_stream_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_do_video_stream_send(MAVLINK_COMM_1 , packet1.target_system , packet1.stream_enabled );
    mavlink_msg_leaf_do_video_stream_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("LEAF_DO_VIDEO_STREAM") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_LEAF_DO_VIDEO_STREAM) != NULL);
#endif
}

static void mavlink_test_leaf_video_stream_response(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_LEAF_VIDEO_STREAM_RESPONSE >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_leaf_video_stream_response_t packet_in = {
        5,72,139,206,17
    };
    mavlink_leaf_video_stream_response_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.stream_enabled = packet_in.stream_enabled;
        packet1.accepted = packet_in.accepted;
        packet1.reason = packet_in.reason;
        packet1.streaming = packet_in.streaming;
        packet1.source_count = packet_in.source_count;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_LEAF_VIDEO_STREAM_RESPONSE_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_LEAF_VIDEO_STREAM_RESPONSE_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_video_stream_response_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_leaf_video_stream_response_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_video_stream_response_pack(system_id, component_id, &msg , packet1.stream_enabled , packet1.accepted , packet1.reason , packet1.streaming , packet1.source_count );
    mavlink_msg_leaf_video_stream_response_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_video_stream_response_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.stream_enabled , packet1.accepted , packet1.reason , packet1.streaming , packet1.source_count );
    mavlink_msg_leaf_video_stream_response_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_leaf_video_stream_response_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_video_stream_response_send(MAVLINK_COMM_1 , packet1.stream_enabled , packet1.accepted , packet1.reason , packet1.streaming , packet1.source_count );
    mavlink_msg_leaf_video_stream_response_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("LEAF_VIDEO_STREAM_RESPONSE") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_LEAF_VIDEO_STREAM_RESPONSE) != NULL);
#endif
}

static void mavlink_test_leaf_racer_gps_home(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_LEAF_RACER_GPS_HOME >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_leaf_racer_gps_home_t packet_in = {
        963497464,963497672,73.0
    };
    mavlink_leaf_racer_gps_home_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.home_lat_1e7 = packet_in.home_lat_1e7;
        packet1.home_lon_1e7 = packet_in.home_lon_1e7;
        packet1.home_alt_m = packet_in.home_alt_m;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_LEAF_RACER_GPS_HOME_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_LEAF_RACER_GPS_HOME_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_racer_gps_home_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_leaf_racer_gps_home_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_racer_gps_home_pack(system_id, component_id, &msg , packet1.home_lat_1e7 , packet1.home_lon_1e7 , packet1.home_alt_m );
    mavlink_msg_leaf_racer_gps_home_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_racer_gps_home_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.home_lat_1e7 , packet1.home_lon_1e7 , packet1.home_alt_m );
    mavlink_msg_leaf_racer_gps_home_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_leaf_racer_gps_home_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_racer_gps_home_send(MAVLINK_COMM_1 , packet1.home_lat_1e7 , packet1.home_lon_1e7 , packet1.home_alt_m );
    mavlink_msg_leaf_racer_gps_home_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("LEAF_RACER_GPS_HOME") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_LEAF_RACER_GPS_HOME) != NULL);
#endif
}

static void mavlink_test_leaf_racer_gps_guidance(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_LEAF_RACER_GPS_GUIDANCE >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_leaf_racer_gps_guidance_t packet_in = {
        963497464,963497672,963497880,963498088,129.0,963498504,963498712,213.0,963499128,963499336,297.0,325.0,353.0,381.0,409.0,185,252,63,93372036854779776ULL,93372036854780280ULL,93372036854780784ULL,93372036854781288ULL,93372036854781792ULL,250,745.0,773.0
    };
    mavlink_leaf_racer_gps_guidance_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.target_index = packet_in.target_index;
        packet1.mission_size = packet_in.mission_size;
        packet1.from_lat_1e7 = packet_in.from_lat_1e7;
        packet1.from_lon_1e7 = packet_in.from_lon_1e7;
        packet1.from_alt_m = packet_in.from_alt_m;
        packet1.to_lat_1e7 = packet_in.to_lat_1e7;
        packet1.to_lon_1e7 = packet_in.to_lon_1e7;
        packet1.to_alt_m = packet_in.to_alt_m;
        packet1.l1_aim_lat_1e7 = packet_in.l1_aim_lat_1e7;
        packet1.l1_aim_lon_1e7 = packet_in.l1_aim_lon_1e7;
        packet1.l1_distance_m = packet_in.l1_distance_m;
        packet1.cross_track_error_m = packet_in.cross_track_error_m;
        packet1.alt_error_m = packet_in.alt_error_m;
        packet1.track_heading_rad = packet_in.track_heading_rad;
        packet1.l1_eta_rad = packet_in.l1_eta_rad;
        packet1.l1_aim_valid = packet_in.l1_aim_valid;
        packet1.saturation_flags = packet_in.saturation_flags;
        packet1.route_mode = packet_in.route_mode;
        packet1.route_revision = packet_in.route_revision;
        packet1.boot_id = packet_in.boot_id;
        packet1.route_session = packet_in.route_session;
        packet1.plan_revision = packet_in.plan_revision;
        packet1.sample_time_us = packet_in.sample_time_us;
        packet1.controller_active = packet_in.controller_active;
        packet1.alt_setpoint_m = packet_in.alt_setpoint_m;
        packet1.speed_setpoint_m_s = packet_in.speed_setpoint_m_s;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_LEAF_RACER_GPS_GUIDANCE_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_LEAF_RACER_GPS_GUIDANCE_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_racer_gps_guidance_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_leaf_racer_gps_guidance_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_racer_gps_guidance_pack(system_id, component_id, &msg , packet1.target_index , packet1.mission_size , packet1.from_lat_1e7 , packet1.from_lon_1e7 , packet1.from_alt_m , packet1.to_lat_1e7 , packet1.to_lon_1e7 , packet1.to_alt_m , packet1.l1_aim_lat_1e7 , packet1.l1_aim_lon_1e7 , packet1.l1_aim_valid , packet1.l1_distance_m , packet1.cross_track_error_m , packet1.alt_error_m , packet1.track_heading_rad , packet1.l1_eta_rad , packet1.saturation_flags , packet1.route_mode , packet1.route_revision , packet1.boot_id , packet1.route_session , packet1.plan_revision , packet1.sample_time_us , packet1.controller_active , packet1.alt_setpoint_m , packet1.speed_setpoint_m_s );
    mavlink_msg_leaf_racer_gps_guidance_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_racer_gps_guidance_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.target_index , packet1.mission_size , packet1.from_lat_1e7 , packet1.from_lon_1e7 , packet1.from_alt_m , packet1.to_lat_1e7 , packet1.to_lon_1e7 , packet1.to_alt_m , packet1.l1_aim_lat_1e7 , packet1.l1_aim_lon_1e7 , packet1.l1_aim_valid , packet1.l1_distance_m , packet1.cross_track_error_m , packet1.alt_error_m , packet1.track_heading_rad , packet1.l1_eta_rad , packet1.saturation_flags , packet1.route_mode , packet1.route_revision , packet1.boot_id , packet1.route_session , packet1.plan_revision , packet1.sample_time_us , packet1.controller_active , packet1.alt_setpoint_m , packet1.speed_setpoint_m_s );
    mavlink_msg_leaf_racer_gps_guidance_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_leaf_racer_gps_guidance_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_racer_gps_guidance_send(MAVLINK_COMM_1 , packet1.target_index , packet1.mission_size , packet1.from_lat_1e7 , packet1.from_lon_1e7 , packet1.from_alt_m , packet1.to_lat_1e7 , packet1.to_lon_1e7 , packet1.to_alt_m , packet1.l1_aim_lat_1e7 , packet1.l1_aim_lon_1e7 , packet1.l1_aim_valid , packet1.l1_distance_m , packet1.cross_track_error_m , packet1.alt_error_m , packet1.track_heading_rad , packet1.l1_eta_rad , packet1.saturation_flags , packet1.route_mode , packet1.route_revision , packet1.boot_id , packet1.route_session , packet1.plan_revision , packet1.sample_time_us , packet1.controller_active , packet1.alt_setpoint_m , packet1.speed_setpoint_m_s );
    mavlink_msg_leaf_racer_gps_guidance_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("LEAF_RACER_GPS_GUIDANCE") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_LEAF_RACER_GPS_GUIDANCE) != NULL);
#endif
}

static void mavlink_test_leaf_pan_tilt_recommended_az_ele_deg(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_LEAF_PAN_TILT_RECOMMENDED_AZ_ELE_DEG >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_leaf_pan_tilt_recommended_az_ele_deg_t packet_in = {
        93372036854775807ULL,73.0,101.0,53
    };
    mavlink_leaf_pan_tilt_recommended_az_ele_deg_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.time_usec = packet_in.time_usec;
        packet1.azimuth_deg = packet_in.azimuth_deg;
        packet1.elevation_deg = packet_in.elevation_deg;
        packet1.valid = packet_in.valid;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_LEAF_PAN_TILT_RECOMMENDED_AZ_ELE_DEG_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_LEAF_PAN_TILT_RECOMMENDED_AZ_ELE_DEG_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_pan_tilt_recommended_az_ele_deg_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_leaf_pan_tilt_recommended_az_ele_deg_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_pan_tilt_recommended_az_ele_deg_pack(system_id, component_id, &msg , packet1.time_usec , packet1.azimuth_deg , packet1.elevation_deg , packet1.valid );
    mavlink_msg_leaf_pan_tilt_recommended_az_ele_deg_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_pan_tilt_recommended_az_ele_deg_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.time_usec , packet1.azimuth_deg , packet1.elevation_deg , packet1.valid );
    mavlink_msg_leaf_pan_tilt_recommended_az_ele_deg_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_leaf_pan_tilt_recommended_az_ele_deg_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_pan_tilt_recommended_az_ele_deg_send(MAVLINK_COMM_1 , packet1.time_usec , packet1.azimuth_deg , packet1.elevation_deg , packet1.valid );
    mavlink_msg_leaf_pan_tilt_recommended_az_ele_deg_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("LEAF_PAN_TILT_RECOMMENDED_AZ_ELE_DEG") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_LEAF_PAN_TILT_RECOMMENDED_AZ_ELE_DEG) != NULL);
#endif
}

static void mavlink_test_leaf_do_rth(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_LEAF_DO_RTH >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_leaf_do_rth_t packet_in = {
        5
    };
    mavlink_leaf_do_rth_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.target_system = packet_in.target_system;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_LEAF_DO_RTH_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_LEAF_DO_RTH_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_do_rth_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_leaf_do_rth_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_do_rth_pack(system_id, component_id, &msg , packet1.target_system );
    mavlink_msg_leaf_do_rth_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_do_rth_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.target_system );
    mavlink_msg_leaf_do_rth_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_leaf_do_rth_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_do_rth_send(MAVLINK_COMM_1 , packet1.target_system );
    mavlink_msg_leaf_do_rth_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("LEAF_DO_RTH") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_LEAF_DO_RTH) != NULL);
#endif
}

static void mavlink_test_leaf_gimbal_sine_control(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_CONTROL >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_leaf_gimbal_sine_control_t packet_in = {
        963497464,17,84,151,218
    };
    mavlink_leaf_gimbal_sine_control_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.request_id = packet_in.request_id;
        packet1.target_system = packet_in.target_system;
        packet1.target_component = packet_in.target_component;
        packet1.action = packet_in.action;
        packet1.axis_mask = packet_in.axis_mask;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_CONTROL_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_CONTROL_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_gimbal_sine_control_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_leaf_gimbal_sine_control_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_gimbal_sine_control_pack(system_id, component_id, &msg , packet1.request_id , packet1.target_system , packet1.target_component , packet1.action , packet1.axis_mask );
    mavlink_msg_leaf_gimbal_sine_control_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_gimbal_sine_control_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.request_id , packet1.target_system , packet1.target_component , packet1.action , packet1.axis_mask );
    mavlink_msg_leaf_gimbal_sine_control_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_leaf_gimbal_sine_control_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_gimbal_sine_control_send(MAVLINK_COMM_1 , packet1.request_id , packet1.target_system , packet1.target_component , packet1.action , packet1.axis_mask );
    mavlink_msg_leaf_gimbal_sine_control_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("LEAF_GIMBAL_SINE_CONTROL") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_CONTROL) != NULL);
#endif
}

static void mavlink_test_leaf_gimbal_sine_response(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_RESPONSE >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_leaf_gimbal_sine_response_t packet_in = {
        963497464,17,84,151
    };
    mavlink_leaf_gimbal_sine_response_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.request_id = packet_in.request_id;
        packet1.result = packet_in.result;
        packet1.active_axis_mask = packet_in.active_axis_mask;
        packet1.session_state = packet_in.session_state;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_RESPONSE_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_RESPONSE_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_gimbal_sine_response_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_leaf_gimbal_sine_response_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_gimbal_sine_response_pack(system_id, component_id, &msg , packet1.request_id , packet1.result , packet1.active_axis_mask , packet1.session_state );
    mavlink_msg_leaf_gimbal_sine_response_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_gimbal_sine_response_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.request_id , packet1.result , packet1.active_axis_mask , packet1.session_state );
    mavlink_msg_leaf_gimbal_sine_response_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_leaf_gimbal_sine_response_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_gimbal_sine_response_send(MAVLINK_COMM_1 , packet1.request_id , packet1.result , packet1.active_axis_mask , packet1.session_state );
    mavlink_msg_leaf_gimbal_sine_response_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("LEAF_GIMBAL_SINE_RESPONSE") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_LEAF_GIMBAL_SINE_RESPONSE) != NULL);
#endif
}

static void mavlink_test_leaf_gps_view_request(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_LEAF_GPS_VIEW_REQUEST >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_leaf_gps_view_request_t packet_in = {
        963497464,963497672,17651,17755,41,108,175,242
    };
    mavlink_leaf_gps_view_request_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.viewer_id = packet_in.viewer_id;
        packet1.transfer_id = packet_in.transfer_id;
        packet1.lease_s = packet_in.lease_s;
        packet1.offset = packet_in.offset;
        packet1.target_system = packet_in.target_system;
        packet1.target_component = packet_in.target_component;
        packet1.profile = packet_in.profile;
        packet1.snapshot = packet_in.snapshot;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_LEAF_GPS_VIEW_REQUEST_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_LEAF_GPS_VIEW_REQUEST_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_gps_view_request_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_leaf_gps_view_request_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_gps_view_request_pack(system_id, component_id, &msg , packet1.target_system , packet1.target_component , packet1.viewer_id , packet1.profile , packet1.lease_s , packet1.snapshot , packet1.transfer_id , packet1.offset );
    mavlink_msg_leaf_gps_view_request_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_gps_view_request_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.target_system , packet1.target_component , packet1.viewer_id , packet1.profile , packet1.lease_s , packet1.snapshot , packet1.transfer_id , packet1.offset );
    mavlink_msg_leaf_gps_view_request_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_leaf_gps_view_request_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_gps_view_request_send(MAVLINK_COMM_1 , packet1.target_system , packet1.target_component , packet1.viewer_id , packet1.profile , packet1.lease_s , packet1.snapshot , packet1.transfer_id , packet1.offset );
    mavlink_msg_leaf_gps_view_request_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("LEAF_GPS_VIEW_REQUEST") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_LEAF_GPS_VIEW_REQUEST) != NULL);
#endif
}

static void mavlink_test_leaf_gps_view_status(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_LEAF_GPS_VIEW_STATUS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_leaf_gps_view_status_t packet_in = {
        93372036854775807ULL,93372036854776311ULL,963498296,963498504,185.0,213.0,241.0,19107,247,58
    };
    mavlink_leaf_gps_view_status_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.boot_id = packet_in.boot_id;
        packet1.sample_time_us = packet_in.sample_time_us;
        packet1.viewer_id = packet_in.viewer_id;
        packet1.budget_bytes_s = packet_in.budget_bytes_s;
        packet1.guidance_rate_hz = packet_in.guidance_rate_hz;
        packet1.status_rate_hz = packet_in.status_rate_hz;
        packet1.diagnostics_rate_hz = packet_in.diagnostics_rate_hz;
        packet1.lease_remaining_s = packet_in.lease_remaining_s;
        packet1.profile = packet_in.profile;
        packet1.result = packet_in.result;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_LEAF_GPS_VIEW_STATUS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_LEAF_GPS_VIEW_STATUS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_gps_view_status_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_leaf_gps_view_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_gps_view_status_pack(system_id, component_id, &msg , packet1.boot_id , packet1.sample_time_us , packet1.viewer_id , packet1.profile , packet1.lease_remaining_s , packet1.budget_bytes_s , packet1.guidance_rate_hz , packet1.status_rate_hz , packet1.diagnostics_rate_hz , packet1.result );
    mavlink_msg_leaf_gps_view_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_gps_view_status_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.boot_id , packet1.sample_time_us , packet1.viewer_id , packet1.profile , packet1.lease_remaining_s , packet1.budget_bytes_s , packet1.guidance_rate_hz , packet1.status_rate_hz , packet1.diagnostics_rate_hz , packet1.result );
    mavlink_msg_leaf_gps_view_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_leaf_gps_view_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_gps_view_status_send(MAVLINK_COMM_1 , packet1.boot_id , packet1.sample_time_us , packet1.viewer_id , packet1.profile , packet1.lease_remaining_s , packet1.budget_bytes_s , packet1.guidance_rate_hz , packet1.status_rate_hz , packet1.diagnostics_rate_hz , packet1.result );
    mavlink_msg_leaf_gps_view_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("LEAF_GPS_VIEW_STATUS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_LEAF_GPS_VIEW_STATUS) != NULL);
#endif
}

static void mavlink_test_leaf_gps_mission_status(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_LEAF_GPS_MISSION_STATUS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_leaf_gps_mission_status_t packet_in = {
        93372036854775807ULL,93372036854776311ULL,93372036854776815ULL,93372036854777319ULL,93372036854777823ULL,93372036854778327ULL,93372036854778831ULL,93372036854779335ULL,963500792,963501000,963501208,963501416,963501624,605.0,633.0,22019,22123,22227,171,238,49,116,183,250,61,128,195
    };
    mavlink_leaf_gps_mission_status_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.boot_id = packet_in.boot_id;
        packet1.sample_time_us = packet_in.sample_time_us;
        packet1.route_session = packet_in.route_session;
        packet1.plan_revision = packet_in.plan_revision;
        packet1.segment_revision = packet_in.segment_revision;
        packet1.scheduled_revision = packet_in.scheduled_revision;
        packet1.planner_revision = packet_in.planner_revision;
        packet1.trim_revision = packet_in.trim_revision;
        packet1.event_sequence = packet_in.event_sequence;
        packet1.event_oldest = packet_in.event_oldest;
        packet1.target_index = packet_in.target_index;
        packet1.home_lat_1e7 = packet_in.home_lat_1e7;
        packet1.home_lon_1e7 = packet_in.home_lon_1e7;
        packet1.home_alt_m = packet_in.home_alt_m;
        packet1.loiter_radius_m = packet_in.loiter_radius_m;
        packet1.active_count = packet_in.active_count;
        packet1.scheduled_count = packet_in.scheduled_count;
        packet1.trim_count = packet_in.trim_count;
        packet1.mode = packet_in.mode;
        packet1.planner_state = packet_in.planner_state;
        packet1.ins_state = packet_in.ins_state;
        packet1.refuel_phase = packet_in.refuel_phase;
        packet1.home_state = packet_in.home_state;
        packet1.arm_state = packet_in.arm_state;
        packet1.safety_switch = packet_in.safety_switch;
        packet1.rc_stream = packet_in.rc_stream;
        packet1.flags = packet_in.flags;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_LEAF_GPS_MISSION_STATUS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_LEAF_GPS_MISSION_STATUS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_gps_mission_status_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_leaf_gps_mission_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_gps_mission_status_pack(system_id, component_id, &msg , packet1.boot_id , packet1.sample_time_us , packet1.route_session , packet1.plan_revision , packet1.segment_revision , packet1.scheduled_revision , packet1.planner_revision , packet1.event_sequence , packet1.event_oldest , packet1.target_index , packet1.active_count , packet1.scheduled_count , packet1.trim_count , packet1.trim_revision , packet1.home_lat_1e7 , packet1.home_lon_1e7 , packet1.home_alt_m , packet1.loiter_radius_m , packet1.mode , packet1.planner_state , packet1.ins_state , packet1.refuel_phase , packet1.home_state , packet1.arm_state , packet1.safety_switch , packet1.rc_stream , packet1.flags );
    mavlink_msg_leaf_gps_mission_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_gps_mission_status_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.boot_id , packet1.sample_time_us , packet1.route_session , packet1.plan_revision , packet1.segment_revision , packet1.scheduled_revision , packet1.planner_revision , packet1.event_sequence , packet1.event_oldest , packet1.target_index , packet1.active_count , packet1.scheduled_count , packet1.trim_count , packet1.trim_revision , packet1.home_lat_1e7 , packet1.home_lon_1e7 , packet1.home_alt_m , packet1.loiter_radius_m , packet1.mode , packet1.planner_state , packet1.ins_state , packet1.refuel_phase , packet1.home_state , packet1.arm_state , packet1.safety_switch , packet1.rc_stream , packet1.flags );
    mavlink_msg_leaf_gps_mission_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_leaf_gps_mission_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_gps_mission_status_send(MAVLINK_COMM_1 , packet1.boot_id , packet1.sample_time_us , packet1.route_session , packet1.plan_revision , packet1.segment_revision , packet1.scheduled_revision , packet1.planner_revision , packet1.event_sequence , packet1.event_oldest , packet1.target_index , packet1.active_count , packet1.scheduled_count , packet1.trim_count , packet1.trim_revision , packet1.home_lat_1e7 , packet1.home_lon_1e7 , packet1.home_alt_m , packet1.loiter_radius_m , packet1.mode , packet1.planner_state , packet1.ins_state , packet1.refuel_phase , packet1.home_state , packet1.arm_state , packet1.safety_switch , packet1.rc_stream , packet1.flags );
    mavlink_msg_leaf_gps_mission_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("LEAF_GPS_MISSION_STATUS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_LEAF_GPS_MISSION_STATUS) != NULL);
#endif
}

static void mavlink_test_leaf_planner_diagnostics(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_LEAF_PLANNER_DIAGNOSTICS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_leaf_planner_diagnostics_t packet_in = {
        93372036854775807ULL,93372036854776311ULL,93372036854776815ULL,93372036854777319ULL,93372036854777823ULL,93372036854778327ULL,963499960,963500168,963500376,437.0,465.0,493.0,521.0,549.0,577.0,605.0,633.0,661.0,689.0,717.0,745.0,773.0,801.0,829.0,857.0,121,188,255,66,133,200,11
    };
    mavlink_leaf_planner_diagnostics_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.boot_id = packet_in.boot_id;
        packet1.sample_time_us = packet_in.sample_time_us;
        packet1.solve_revision = packet_in.solve_revision;
        packet1.plan_revision = packet_in.plan_revision;
        packet1.solve_time_us = packet_in.solve_time_us;
        packet1.leader_time_us = packet_in.leader_time_us;
        packet1.candidates = packet_in.candidates;
        packet1.cache_hits = packet_in.cache_hits;
        packet1.search_nodes = packet_in.search_nodes;
        packet1.arrival_s = packet_in.arrival_s;
        packet1.residual_s = packet_in.residual_s;
        packet1.length_m = packet_in.length_m;
        packet1.capture_error_m = packet_in.capture_error_m;
        packet1.heading_error_deg = packet_in.heading_error_deg;
        packet1.capture_radius_m = packet_in.capture_radius_m;
        packet1.capture_heading_deg = packet_in.capture_heading_deg;
        packet1.separation_m = packet_in.separation_m;
        packet1.join_gap_m = packet_in.join_gap_m;
        packet1.join_distance_limit_m = packet_in.join_distance_limit_m;
        packet1.join_separation_error_m = packet_in.join_separation_error_m;
        packet1.join_separation_limit_m = packet_in.join_separation_limit_m;
        packet1.prediction_horizon_s = packet_in.prediction_horizon_s;
        packet1.leader_speed_mps = packet_in.leader_speed_mps;
        packet1.follower_speed_mps = packet_in.follower_speed_mps;
        packet1.route_progress_m = packet_in.route_progress_m;
        packet1.prediction_model = packet_in.prediction_model;
        packet1.outcome = packet_in.outcome;
        packet1.flags = packet_in.flags;
        packet1.family = packet_in.family;
        packet1.planner_state = packet_in.planner_state;
        packet1.leader_system = packet_in.leader_system;
        packet1.leader_component = packet_in.leader_component;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_LEAF_PLANNER_DIAGNOSTICS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_LEAF_PLANNER_DIAGNOSTICS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_planner_diagnostics_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_leaf_planner_diagnostics_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_planner_diagnostics_pack(system_id, component_id, &msg , packet1.boot_id , packet1.sample_time_us , packet1.solve_revision , packet1.plan_revision , packet1.solve_time_us , packet1.leader_time_us , packet1.candidates , packet1.cache_hits , packet1.search_nodes , packet1.arrival_s , packet1.residual_s , packet1.length_m , packet1.capture_error_m , packet1.heading_error_deg , packet1.capture_radius_m , packet1.capture_heading_deg , packet1.separation_m , packet1.join_gap_m , packet1.join_distance_limit_m , packet1.join_separation_error_m , packet1.join_separation_limit_m , packet1.prediction_horizon_s , packet1.leader_speed_mps , packet1.follower_speed_mps , packet1.route_progress_m , packet1.prediction_model , packet1.outcome , packet1.flags , packet1.family , packet1.planner_state , packet1.leader_system , packet1.leader_component );
    mavlink_msg_leaf_planner_diagnostics_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_planner_diagnostics_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.boot_id , packet1.sample_time_us , packet1.solve_revision , packet1.plan_revision , packet1.solve_time_us , packet1.leader_time_us , packet1.candidates , packet1.cache_hits , packet1.search_nodes , packet1.arrival_s , packet1.residual_s , packet1.length_m , packet1.capture_error_m , packet1.heading_error_deg , packet1.capture_radius_m , packet1.capture_heading_deg , packet1.separation_m , packet1.join_gap_m , packet1.join_distance_limit_m , packet1.join_separation_error_m , packet1.join_separation_limit_m , packet1.prediction_horizon_s , packet1.leader_speed_mps , packet1.follower_speed_mps , packet1.route_progress_m , packet1.prediction_model , packet1.outcome , packet1.flags , packet1.family , packet1.planner_state , packet1.leader_system , packet1.leader_component );
    mavlink_msg_leaf_planner_diagnostics_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_leaf_planner_diagnostics_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_planner_diagnostics_send(MAVLINK_COMM_1 , packet1.boot_id , packet1.sample_time_us , packet1.solve_revision , packet1.plan_revision , packet1.solve_time_us , packet1.leader_time_us , packet1.candidates , packet1.cache_hits , packet1.search_nodes , packet1.arrival_s , packet1.residual_s , packet1.length_m , packet1.capture_error_m , packet1.heading_error_deg , packet1.capture_radius_m , packet1.capture_heading_deg , packet1.separation_m , packet1.join_gap_m , packet1.join_distance_limit_m , packet1.join_separation_error_m , packet1.join_separation_limit_m , packet1.prediction_horizon_s , packet1.leader_speed_mps , packet1.follower_speed_mps , packet1.route_progress_m , packet1.prediction_model , packet1.outcome , packet1.flags , packet1.family , packet1.planner_state , packet1.leader_system , packet1.leader_component );
    mavlink_msg_leaf_planner_diagnostics_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("LEAF_PLANNER_DIAGNOSTICS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_LEAF_PLANNER_DIAGNOSTICS) != NULL);
#endif
}

static void mavlink_test_leaf_planner_path(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_LEAF_PLANNER_PATH >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_leaf_planner_path_t packet_in = {
        93372036854775807ULL,93372036854776311ULL,93372036854776815ULL,93372036854777319ULL,93372036854777823ULL,963499544,963499752,353.0,381.0,409.0,437.0,{ 465.0, 466.0, 467.0 },{ 549.0, 550.0, 551.0 },{ 633.0, 634.0, 635.0, 636.0, 637.0, 638.0, 639.0, 640.0, 641.0, 642.0 },913.0,941.0,969.0,997.0,181,248,59,126
    };
    mavlink_leaf_planner_path_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.boot_id = packet_in.boot_id;
        packet1.sample_time_us = packet_in.sample_time_us;
        packet1.solve_revision = packet_in.solve_revision;
        packet1.plan_revision = packet_in.plan_revision;
        packet1.solve_time_us = packet_in.solve_time_us;
        packet1.origin_lat_1e7 = packet_in.origin_lat_1e7;
        packet1.origin_lon_1e7 = packet_in.origin_lon_1e7;
        packet1.alt_m = packet_in.alt_m;
        packet1.start_east_m = packet_in.start_east_m;
        packet1.start_north_m = packet_in.start_north_m;
        packet1.start_heading_rad = packet_in.start_heading_rad;
        packet1.terminal_start_m = packet_in.terminal_start_m;
        packet1.capture_heading_rad = packet_in.capture_heading_rad;
        packet1.capture_radius_m = packet_in.capture_radius_m;
        packet1.capture_heading_deg = packet_in.capture_heading_deg;
        packet1.kind = packet_in.kind;
        packet1.count = packet_in.count;
        packet1.marker_flags = packet_in.marker_flags;
        packet1.family = packet_in.family;
        
        mav_array_memcpy(packet1.length_m, packet_in.length_m, sizeof(float)*3);
        mav_array_memcpy(packet1.curvature_inv_m, packet_in.curvature_inv_m, sizeof(float)*3);
        mav_array_memcpy(packet1.markers_en_m, packet_in.markers_en_m, sizeof(float)*10);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_LEAF_PLANNER_PATH_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_LEAF_PLANNER_PATH_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_planner_path_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_leaf_planner_path_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_planner_path_pack(system_id, component_id, &msg , packet1.boot_id , packet1.sample_time_us , packet1.solve_revision , packet1.plan_revision , packet1.solve_time_us , packet1.origin_lat_1e7 , packet1.origin_lon_1e7 , packet1.alt_m , packet1.start_east_m , packet1.start_north_m , packet1.start_heading_rad , packet1.length_m , packet1.curvature_inv_m , packet1.markers_en_m , packet1.terminal_start_m , packet1.capture_heading_rad , packet1.capture_radius_m , packet1.capture_heading_deg , packet1.kind , packet1.count , packet1.marker_flags , packet1.family );
    mavlink_msg_leaf_planner_path_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_planner_path_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.boot_id , packet1.sample_time_us , packet1.solve_revision , packet1.plan_revision , packet1.solve_time_us , packet1.origin_lat_1e7 , packet1.origin_lon_1e7 , packet1.alt_m , packet1.start_east_m , packet1.start_north_m , packet1.start_heading_rad , packet1.length_m , packet1.curvature_inv_m , packet1.markers_en_m , packet1.terminal_start_m , packet1.capture_heading_rad , packet1.capture_radius_m , packet1.capture_heading_deg , packet1.kind , packet1.count , packet1.marker_flags , packet1.family );
    mavlink_msg_leaf_planner_path_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_leaf_planner_path_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_planner_path_send(MAVLINK_COMM_1 , packet1.boot_id , packet1.sample_time_us , packet1.solve_revision , packet1.plan_revision , packet1.solve_time_us , packet1.origin_lat_1e7 , packet1.origin_lon_1e7 , packet1.alt_m , packet1.start_east_m , packet1.start_north_m , packet1.start_heading_rad , packet1.length_m , packet1.curvature_inv_m , packet1.markers_en_m , packet1.terminal_start_m , packet1.capture_heading_rad , packet1.capture_radius_m , packet1.capture_heading_deg , packet1.kind , packet1.count , packet1.marker_flags , packet1.family );
    mavlink_msg_leaf_planner_path_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("LEAF_PLANNER_PATH") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_LEAF_PLANNER_PATH) != NULL);
#endif
}

static void mavlink_test_leaf_gps_plan_chunk(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_LEAF_GPS_PLAN_CHUNK >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_leaf_gps_plan_chunk_t packet_in = {
        93372036854775807ULL,93372036854776311ULL,93372036854776815ULL,93372036854777319ULL,93372036854777823ULL,963499544,{ 963499752, 963499753, 963499754, 963499755, 963499756, 963499757, 963499758, 963499759, 963499760, 963499761, 963499762, 963499763, 963499764, 963499765, 963499766, 963499767 },{ 963503080, 963503081, 963503082, 963503083, 963503084, 963503085, 963503086, 963503087, 963503088, 963503089, 963503090, 963503091, 963503092, 963503093, 963503094, 963503095 },{ 1221.0, 1222.0, 1223.0, 1224.0, 1225.0, 1226.0, 1227.0, 1228.0, 1229.0, 1230.0, 1231.0, 1232.0, 1233.0, 1234.0, 1235.0, 1236.0 },29507,29611,29715,29819,225,36,103
    };
    mavlink_leaf_gps_plan_chunk_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.boot_id = packet_in.boot_id;
        packet1.sample_time_us = packet_in.sample_time_us;
        packet1.route_session = packet_in.route_session;
        packet1.plan_revision = packet_in.plan_revision;
        packet1.segment_revision = packet_in.segment_revision;
        packet1.transfer_id = packet_in.transfer_id;
        packet1.total_points = packet_in.total_points;
        packet1.window_start = packet_in.window_start;
        packet1.window_count = packet_in.window_count;
        packet1.offset = packet_in.offset;
        packet1.count = packet_in.count;
        packet1.kind = packet_in.kind;
        packet1.flags = packet_in.flags;
        
        mav_array_memcpy(packet1.lat_1e7, packet_in.lat_1e7, sizeof(int32_t)*16);
        mav_array_memcpy(packet1.lon_1e7, packet_in.lon_1e7, sizeof(int32_t)*16);
        mav_array_memcpy(packet1.alt_m, packet_in.alt_m, sizeof(float)*16);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_LEAF_GPS_PLAN_CHUNK_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_LEAF_GPS_PLAN_CHUNK_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_gps_plan_chunk_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_leaf_gps_plan_chunk_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_gps_plan_chunk_pack(system_id, component_id, &msg , packet1.boot_id , packet1.sample_time_us , packet1.route_session , packet1.plan_revision , packet1.segment_revision , packet1.transfer_id , packet1.total_points , packet1.window_start , packet1.window_count , packet1.offset , packet1.count , packet1.kind , packet1.flags , packet1.lat_1e7 , packet1.lon_1e7 , packet1.alt_m );
    mavlink_msg_leaf_gps_plan_chunk_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_gps_plan_chunk_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.boot_id , packet1.sample_time_us , packet1.route_session , packet1.plan_revision , packet1.segment_revision , packet1.transfer_id , packet1.total_points , packet1.window_start , packet1.window_count , packet1.offset , packet1.count , packet1.kind , packet1.flags , packet1.lat_1e7 , packet1.lon_1e7 , packet1.alt_m );
    mavlink_msg_leaf_gps_plan_chunk_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_leaf_gps_plan_chunk_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_gps_plan_chunk_send(MAVLINK_COMM_1 , packet1.boot_id , packet1.sample_time_us , packet1.route_session , packet1.plan_revision , packet1.segment_revision , packet1.transfer_id , packet1.total_points , packet1.window_start , packet1.window_count , packet1.offset , packet1.count , packet1.kind , packet1.flags , packet1.lat_1e7 , packet1.lon_1e7 , packet1.alt_m );
    mavlink_msg_leaf_gps_plan_chunk_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("LEAF_GPS_PLAN_CHUNK") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_LEAF_GPS_PLAN_CHUNK) != NULL);
#endif
}

static void mavlink_test_leaf_gps_mission_event(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_LEAF_GPS_MISSION_EVENT >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_leaf_gps_mission_event_t packet_in = {
        93372036854775807ULL,93372036854776311ULL,93372036854776815ULL,93372036854777319ULL,93372036854777823ULL,963499544,963499752,19731,27,94
    };
    mavlink_leaf_gps_mission_event_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.boot_id = packet_in.boot_id;
        packet1.sample_time_us = packet_in.sample_time_us;
        packet1.route_session = packet_in.route_session;
        packet1.plan_revision = packet_in.plan_revision;
        packet1.segment_revision = packet_in.segment_revision;
        packet1.sequence = packet_in.sequence;
        packet1.target_index = packet_in.target_index;
        packet1.detail = packet_in.detail;
        packet1.event = packet_in.event;
        packet1.state = packet_in.state;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_LEAF_GPS_MISSION_EVENT_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_LEAF_GPS_MISSION_EVENT_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_gps_mission_event_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_leaf_gps_mission_event_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_gps_mission_event_pack(system_id, component_id, &msg , packet1.boot_id , packet1.sample_time_us , packet1.route_session , packet1.plan_revision , packet1.sequence , packet1.segment_revision , packet1.target_index , packet1.detail , packet1.event , packet1.state );
    mavlink_msg_leaf_gps_mission_event_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_gps_mission_event_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.boot_id , packet1.sample_time_us , packet1.route_session , packet1.plan_revision , packet1.sequence , packet1.segment_revision , packet1.target_index , packet1.detail , packet1.event , packet1.state );
    mavlink_msg_leaf_gps_mission_event_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_leaf_gps_mission_event_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_gps_mission_event_send(MAVLINK_COMM_1 , packet1.boot_id , packet1.sample_time_us , packet1.route_session , packet1.plan_revision , packet1.sequence , packet1.segment_revision , packet1.target_index , packet1.detail , packet1.event , packet1.state );
    mavlink_msg_leaf_gps_mission_event_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("LEAF_GPS_MISSION_EVENT") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_LEAF_GPS_MISSION_EVENT) != NULL);
#endif
}

static void mavlink_test_leaf_gimbal_matched_attitude(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_LEAF_GIMBAL_MATCHED_ATTITUDE >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_leaf_gimbal_matched_attitude_t packet_in = {
        123.0,179.0,53
    };
    mavlink_leaf_gimbal_matched_attitude_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.pan_rad = packet_in.pan_rad;
        packet1.tilt_rad = packet_in.tilt_rad;
        packet1.valid = packet_in.valid;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_LEAF_GIMBAL_MATCHED_ATTITUDE_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_LEAF_GIMBAL_MATCHED_ATTITUDE_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_gimbal_matched_attitude_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_leaf_gimbal_matched_attitude_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_gimbal_matched_attitude_pack(system_id, component_id, &msg , packet1.pan_rad , packet1.tilt_rad , packet1.valid );
    mavlink_msg_leaf_gimbal_matched_attitude_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_gimbal_matched_attitude_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.pan_rad , packet1.tilt_rad , packet1.valid );
    mavlink_msg_leaf_gimbal_matched_attitude_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_leaf_gimbal_matched_attitude_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_gimbal_matched_attitude_send(MAVLINK_COMM_1 , packet1.pan_rad , packet1.tilt_rad , packet1.valid );
    mavlink_msg_leaf_gimbal_matched_attitude_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("LEAF_GIMBAL_MATCHED_ATTITUDE") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_LEAF_GIMBAL_MATCHED_ATTITUDE) != NULL);
#endif
}

static void mavlink_test_leaf_gimbal_manual_control(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_CONTROL >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_leaf_gimbal_manual_control_t packet_in = {
        963497464,45.0,73.0,41,108,175
    };
    mavlink_leaf_gimbal_manual_control_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.request_id = packet_in.request_id;
        packet1.pan_setpoint_deg = packet_in.pan_setpoint_deg;
        packet1.tilt_setpoint_deg = packet_in.tilt_setpoint_deg;
        packet1.target_system = packet_in.target_system;
        packet1.target_component = packet_in.target_component;
        packet1.action = packet_in.action;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_CONTROL_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_CONTROL_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_gimbal_manual_control_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_leaf_gimbal_manual_control_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_gimbal_manual_control_pack(system_id, component_id, &msg , packet1.request_id , packet1.target_system , packet1.target_component , packet1.action , packet1.pan_setpoint_deg , packet1.tilt_setpoint_deg );
    mavlink_msg_leaf_gimbal_manual_control_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_gimbal_manual_control_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.request_id , packet1.target_system , packet1.target_component , packet1.action , packet1.pan_setpoint_deg , packet1.tilt_setpoint_deg );
    mavlink_msg_leaf_gimbal_manual_control_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_leaf_gimbal_manual_control_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_gimbal_manual_control_send(MAVLINK_COMM_1 , packet1.request_id , packet1.target_system , packet1.target_component , packet1.action , packet1.pan_setpoint_deg , packet1.tilt_setpoint_deg );
    mavlink_msg_leaf_gimbal_manual_control_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("LEAF_GIMBAL_MANUAL_CONTROL") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_CONTROL) != NULL);
#endif
}

static void mavlink_test_leaf_gimbal_manual_status(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_STATUS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_leaf_gimbal_manual_status_t packet_in = {
        963497464,45.0,73.0,101.0,129.0,157.0,185.0,89,156
    };
    mavlink_leaf_gimbal_manual_status_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.request_id = packet_in.request_id;
        packet1.pan_min_deg = packet_in.pan_min_deg;
        packet1.pan_max_deg = packet_in.pan_max_deg;
        packet1.tilt_min_deg = packet_in.tilt_min_deg;
        packet1.tilt_max_deg = packet_in.tilt_max_deg;
        packet1.pan_command_deg = packet_in.pan_command_deg;
        packet1.tilt_command_deg = packet_in.tilt_command_deg;
        packet1.active = packet_in.active;
        packet1.session_state = packet_in.session_state;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_STATUS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_STATUS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_gimbal_manual_status_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_leaf_gimbal_manual_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_gimbal_manual_status_pack(system_id, component_id, &msg , packet1.request_id , packet1.active , packet1.session_state , packet1.pan_min_deg , packet1.pan_max_deg , packet1.tilt_min_deg , packet1.tilt_max_deg , packet1.pan_command_deg , packet1.tilt_command_deg );
    mavlink_msg_leaf_gimbal_manual_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_gimbal_manual_status_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.request_id , packet1.active , packet1.session_state , packet1.pan_min_deg , packet1.pan_max_deg , packet1.tilt_min_deg , packet1.tilt_max_deg , packet1.pan_command_deg , packet1.tilt_command_deg );
    mavlink_msg_leaf_gimbal_manual_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_leaf_gimbal_manual_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_leaf_gimbal_manual_status_send(MAVLINK_COMM_1 , packet1.request_id , packet1.active , packet1.session_state , packet1.pan_min_deg , packet1.pan_max_deg , packet1.tilt_min_deg , packet1.tilt_max_deg , packet1.pan_command_deg , packet1.tilt_command_deg );
    mavlink_msg_leaf_gimbal_manual_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("LEAF_GIMBAL_MANUAL_STATUS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_LEAF_GIMBAL_MANUAL_STATUS) != NULL);
#endif
}

static void mavlink_test_droneleaf_mav_msgs(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_leaf_mode(system_id, component_id, last_msg);
    mavlink_test_leaf_set_mode(system_id, component_id, last_msg);
    mavlink_test_leaf_status(system_id, component_id, last_msg);
    mavlink_test_leaf_do_arm(system_id, component_id, last_msg);
    mavlink_test_leaf_do_takeoff(system_id, component_id, last_msg);
    mavlink_test_leaf_do_land(system_id, component_id, last_msg);
    mavlink_test_leaf_do_register_pos_offset_from_est_pos(system_id, component_id, last_msg);
    mavlink_test_leaf_do_queue_traj_from_buffer_by_id(system_id, component_id, last_msg);
    mavlink_test_leaf_do_switch_mrft_roll(system_id, component_id, last_msg);
    mavlink_test_leaf_do_switch_mrft_pitch(system_id, component_id, last_msg);
    mavlink_test_leaf_do_switch_mrft_alt(system_id, component_id, last_msg);
    mavlink_test_leaf_do_switch_mrft_x(system_id, component_id, last_msg);
    mavlink_test_leaf_do_switch_mrft_y(system_id, component_id, last_msg);
    mavlink_test_leaf_set_mission_state(system_id, component_id, last_msg);
    mavlink_test_leaf_say_to_qgc(system_id, component_id, last_msg);
    mavlink_test_leaf_do_arm_idle(system_id, component_id, last_msg);
    mavlink_test_leaf_client_tagname(system_id, component_id, last_msg);
    mavlink_test_leaf_mrft_status(system_id, component_id, last_msg);
    mavlink_test_leaf_heartbeat(system_id, component_id, last_msg);
    mavlink_test_leaf_do_queue_external_trajectory(system_id, component_id, last_msg);
    mavlink_test_leaf_ack_queue_external_trajectory_pos(system_id, component_id, last_msg);
    mavlink_test_leaf_ack_queue_external_trajectory_ori(system_id, component_id, last_msg);
    mavlink_test_leaf_external_trajectory_setpoint_enu(system_id, component_id, last_msg);
    mavlink_test_leaf_do_terminate_external_trajectory(system_id, component_id, last_msg);
    mavlink_test_leaf_ack_terminate_external_trajectory_pos(system_id, component_id, last_msg);
    mavlink_test_leaf_ack_terminate_external_trajectory_ori(system_id, component_id, last_msg);
    mavlink_test_leaf_external_trajectory_offset_enu_pos(system_id, component_id, last_msg);
    mavlink_test_leaf_external_trajectory_offset_enu_ori(system_id, component_id, last_msg);
    mavlink_test_leaf_qgc_reserved_message_77032(system_id, component_id, last_msg);
    mavlink_test_leaf_ack_mission_run(system_id, component_id, last_msg);
    mavlink_test_leaf_ack_mission_complete(system_id, component_id, last_msg);
    mavlink_test_leaf_mission_status(system_id, component_id, last_msg);
    mavlink_test_leaf_do_qgc_mission_control_cmd(system_id, component_id, last_msg);
    mavlink_test_leaf_qgc_reserved_message_77037(system_id, component_id, last_msg);
    mavlink_test_leaf_do_emergency_rtl(system_id, component_id, last_msg);
    mavlink_test_leaf_ack_mission_pause(system_id, component_id, last_msg);
    mavlink_test_leaf_ack_mission_resume(system_id, component_id, last_msg);
    mavlink_test_leaf_ack_mission_abort(system_id, component_id, last_msg);
    mavlink_test_leaf_do_emergency_abort(system_id, component_id, last_msg);
    mavlink_test_leaf_setpoint_offset(system_id, component_id, last_msg);
    mavlink_test_leaf_mission_heartbeat(system_id, component_id, last_msg);
    mavlink_test_leaf_sys_status(system_id, component_id, last_msg);
    mavlink_test_leaf_do_switch_mrft_yaw(system_id, component_id, last_msg);
    mavlink_test_leaf_mission_heartbeat_v2(system_id, component_id, last_msg);
    mavlink_test_leaf_do_refuel(system_id, component_id, last_msg);
    mavlink_test_leaf_do_track(system_id, component_id, last_msg);
    mavlink_test_leaf_bbox_telemetry(system_id, component_id, last_msg);
    mavlink_test_leaf_racer_status(system_id, component_id, last_msg);
    mavlink_test_leaf_bf_status_ex(system_id, component_id, last_msg);
    mavlink_test_leaf_bf_box_names(system_id, component_id, last_msg);
    mavlink_test_leaf_set_rc_loss_behavior(system_id, component_id, last_msg);
    mavlink_test_leaf_pi_health(system_id, component_id, last_msg);
    mavlink_test_leaf_target_gps_vision_correlation_confirm(system_id, component_id, last_msg);
    mavlink_test_leaf_target_gps_vision_correlation_confirm_response(system_id, component_id, last_msg);
    mavlink_test_leaf_cmd_leaf_tracker_source_id(system_id, component_id, last_msg);
    mavlink_test_leaf_do_video_stream(system_id, component_id, last_msg);
    mavlink_test_leaf_video_stream_response(system_id, component_id, last_msg);
    mavlink_test_leaf_racer_gps_home(system_id, component_id, last_msg);
    mavlink_test_leaf_racer_gps_guidance(system_id, component_id, last_msg);
    mavlink_test_leaf_pan_tilt_recommended_az_ele_deg(system_id, component_id, last_msg);
    mavlink_test_leaf_do_rth(system_id, component_id, last_msg);
    mavlink_test_leaf_gimbal_sine_control(system_id, component_id, last_msg);
    mavlink_test_leaf_gimbal_sine_response(system_id, component_id, last_msg);
    mavlink_test_leaf_gps_view_request(system_id, component_id, last_msg);
    mavlink_test_leaf_gps_view_status(system_id, component_id, last_msg);
    mavlink_test_leaf_gps_mission_status(system_id, component_id, last_msg);
    mavlink_test_leaf_planner_diagnostics(system_id, component_id, last_msg);
    mavlink_test_leaf_planner_path(system_id, component_id, last_msg);
    mavlink_test_leaf_gps_plan_chunk(system_id, component_id, last_msg);
    mavlink_test_leaf_gps_mission_event(system_id, component_id, last_msg);
    mavlink_test_leaf_gimbal_matched_attitude(system_id, component_id, last_msg);
    mavlink_test_leaf_gimbal_manual_control(system_id, component_id, last_msg);
    mavlink_test_leaf_gimbal_manual_status(system_id, component_id, last_msg);
}

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // DRONELEAF_MAV_MSGS_TESTSUITE_H
