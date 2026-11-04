#pragma once
// MESSAGE LEAF_PLANNER_DIAGNOSTICS PACKING

#define MAVLINK_MSG_ID_LEAF_PLANNER_DIAGNOSTICS 77070


typedef struct __mavlink_leaf_planner_diagnostics_t {
 uint64_t boot_id; /*<  Process incarnation.*/
 uint64_t sample_time_us; /*<  Monotonic sample time, microseconds.*/
 uint64_t solve_revision; /*<  Monotonic diagnostic revision.*/
 uint64_t plan_revision; /*<  Planner output revision.*/
 uint64_t solve_time_us; /*<  Monotonic solve epoch, microseconds.*/
 uint64_t leader_time_us; /*<  FC receipt time of consumed leader observation.*/
 uint32_t candidates; /*<  Solver candidates.*/
 uint32_t cache_hits; /*<  Solver cache hits.*/
 uint32_t search_nodes; /*<  Solver search nodes.*/
 float arrival_s; /*<  Candidate arrival time from solve epoch.*/
 float residual_s; /*<  Candidate timing residual.*/
 float length_m; /*<  Candidate path length.*/
 float capture_error_m; /*<  Current distance to following slot.*/
 float heading_error_deg; /*<  Current slot heading error.*/
 float capture_radius_m; /*<  Capture distance tolerance.*/
 float capture_heading_deg; /*<  Capture heading tolerance.*/
 float separation_m; /*<  Requested separation at solve epoch.*/
 float join_gap_m; /*<  Front join gap; NaN if unavailable.*/
 float join_distance_limit_m; /*<  Front join distance limit; NaN if unavailable.*/
 float join_separation_error_m; /*<  Front join separation error; NaN if unavailable.*/
 float join_separation_limit_m; /*<  Front join separation limit; NaN if unavailable.*/
 float prediction_horizon_s; /*<  Prediction horizon, seconds; prediction chunks contain the consumed observation then 32 evenly spaced forecast points from solve time.*/
 float leader_speed_mps; /*<  Prediction speed at solve time, metres per second.*/
 float follower_speed_mps; /*<  Horizontal follower speed at solve time, metres per second.*/
 float route_progress_m; /*<  Distance along the retained or accepted planner path, metres.*/
 uint8_t prediction_model; /*<  0 linear, 1 quadratic, 2 circular.*/
 uint8_t outcome; /*<  0 unavailable, 1 accepted, 2 retained, 3 rejected, 4 chasing.*/
 uint8_t flags; /*<  Bit 0 candidate feasible, bit 1 budget exceeded, bit 2 capacity exceeded, bit 3 front approach.*/
 uint8_t family; /*<  lfp Family.*/
 uint8_t planner_state; /*<  FollowingPlanState.*/
 uint8_t leader_system; /*<  Actual configured leader system.*/
 uint8_t leader_component; /*<  Actual configured leader component.*/
} mavlink_leaf_planner_diagnostics_t;

#define MAVLINK_MSG_ID_LEAF_PLANNER_DIAGNOSTICS_LEN 131
#define MAVLINK_MSG_ID_LEAF_PLANNER_DIAGNOSTICS_MIN_LEN 131
#define MAVLINK_MSG_ID_77070_LEN 131
#define MAVLINK_MSG_ID_77070_MIN_LEN 131

#define MAVLINK_MSG_ID_LEAF_PLANNER_DIAGNOSTICS_CRC 143
#define MAVLINK_MSG_ID_77070_CRC 143



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_LEAF_PLANNER_DIAGNOSTICS { \
    77070, \
    "LEAF_PLANNER_DIAGNOSTICS", \
    32, \
    {  { "boot_id", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_leaf_planner_diagnostics_t, boot_id) }, \
         { "sample_time_us", NULL, MAVLINK_TYPE_UINT64_T, 0, 8, offsetof(mavlink_leaf_planner_diagnostics_t, sample_time_us) }, \
         { "solve_revision", NULL, MAVLINK_TYPE_UINT64_T, 0, 16, offsetof(mavlink_leaf_planner_diagnostics_t, solve_revision) }, \
         { "plan_revision", NULL, MAVLINK_TYPE_UINT64_T, 0, 24, offsetof(mavlink_leaf_planner_diagnostics_t, plan_revision) }, \
         { "solve_time_us", NULL, MAVLINK_TYPE_UINT64_T, 0, 32, offsetof(mavlink_leaf_planner_diagnostics_t, solve_time_us) }, \
         { "leader_time_us", NULL, MAVLINK_TYPE_UINT64_T, 0, 40, offsetof(mavlink_leaf_planner_diagnostics_t, leader_time_us) }, \
         { "candidates", NULL, MAVLINK_TYPE_UINT32_T, 0, 48, offsetof(mavlink_leaf_planner_diagnostics_t, candidates) }, \
         { "cache_hits", NULL, MAVLINK_TYPE_UINT32_T, 0, 52, offsetof(mavlink_leaf_planner_diagnostics_t, cache_hits) }, \
         { "search_nodes", NULL, MAVLINK_TYPE_UINT32_T, 0, 56, offsetof(mavlink_leaf_planner_diagnostics_t, search_nodes) }, \
         { "arrival_s", NULL, MAVLINK_TYPE_FLOAT, 0, 60, offsetof(mavlink_leaf_planner_diagnostics_t, arrival_s) }, \
         { "residual_s", NULL, MAVLINK_TYPE_FLOAT, 0, 64, offsetof(mavlink_leaf_planner_diagnostics_t, residual_s) }, \
         { "length_m", NULL, MAVLINK_TYPE_FLOAT, 0, 68, offsetof(mavlink_leaf_planner_diagnostics_t, length_m) }, \
         { "capture_error_m", NULL, MAVLINK_TYPE_FLOAT, 0, 72, offsetof(mavlink_leaf_planner_diagnostics_t, capture_error_m) }, \
         { "heading_error_deg", NULL, MAVLINK_TYPE_FLOAT, 0, 76, offsetof(mavlink_leaf_planner_diagnostics_t, heading_error_deg) }, \
         { "capture_radius_m", NULL, MAVLINK_TYPE_FLOAT, 0, 80, offsetof(mavlink_leaf_planner_diagnostics_t, capture_radius_m) }, \
         { "capture_heading_deg", NULL, MAVLINK_TYPE_FLOAT, 0, 84, offsetof(mavlink_leaf_planner_diagnostics_t, capture_heading_deg) }, \
         { "separation_m", NULL, MAVLINK_TYPE_FLOAT, 0, 88, offsetof(mavlink_leaf_planner_diagnostics_t, separation_m) }, \
         { "join_gap_m", NULL, MAVLINK_TYPE_FLOAT, 0, 92, offsetof(mavlink_leaf_planner_diagnostics_t, join_gap_m) }, \
         { "join_distance_limit_m", NULL, MAVLINK_TYPE_FLOAT, 0, 96, offsetof(mavlink_leaf_planner_diagnostics_t, join_distance_limit_m) }, \
         { "join_separation_error_m", NULL, MAVLINK_TYPE_FLOAT, 0, 100, offsetof(mavlink_leaf_planner_diagnostics_t, join_separation_error_m) }, \
         { "join_separation_limit_m", NULL, MAVLINK_TYPE_FLOAT, 0, 104, offsetof(mavlink_leaf_planner_diagnostics_t, join_separation_limit_m) }, \
         { "prediction_horizon_s", NULL, MAVLINK_TYPE_FLOAT, 0, 108, offsetof(mavlink_leaf_planner_diagnostics_t, prediction_horizon_s) }, \
         { "leader_speed_mps", NULL, MAVLINK_TYPE_FLOAT, 0, 112, offsetof(mavlink_leaf_planner_diagnostics_t, leader_speed_mps) }, \
         { "follower_speed_mps", NULL, MAVLINK_TYPE_FLOAT, 0, 116, offsetof(mavlink_leaf_planner_diagnostics_t, follower_speed_mps) }, \
         { "route_progress_m", NULL, MAVLINK_TYPE_FLOAT, 0, 120, offsetof(mavlink_leaf_planner_diagnostics_t, route_progress_m) }, \
         { "prediction_model", NULL, MAVLINK_TYPE_UINT8_T, 0, 124, offsetof(mavlink_leaf_planner_diagnostics_t, prediction_model) }, \
         { "outcome", NULL, MAVLINK_TYPE_UINT8_T, 0, 125, offsetof(mavlink_leaf_planner_diagnostics_t, outcome) }, \
         { "flags", NULL, MAVLINK_TYPE_UINT8_T, 0, 126, offsetof(mavlink_leaf_planner_diagnostics_t, flags) }, \
         { "family", NULL, MAVLINK_TYPE_UINT8_T, 0, 127, offsetof(mavlink_leaf_planner_diagnostics_t, family) }, \
         { "planner_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 128, offsetof(mavlink_leaf_planner_diagnostics_t, planner_state) }, \
         { "leader_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 129, offsetof(mavlink_leaf_planner_diagnostics_t, leader_system) }, \
         { "leader_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 130, offsetof(mavlink_leaf_planner_diagnostics_t, leader_component) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_LEAF_PLANNER_DIAGNOSTICS { \
    "LEAF_PLANNER_DIAGNOSTICS", \
    32, \
    {  { "boot_id", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_leaf_planner_diagnostics_t, boot_id) }, \
         { "sample_time_us", NULL, MAVLINK_TYPE_UINT64_T, 0, 8, offsetof(mavlink_leaf_planner_diagnostics_t, sample_time_us) }, \
         { "solve_revision", NULL, MAVLINK_TYPE_UINT64_T, 0, 16, offsetof(mavlink_leaf_planner_diagnostics_t, solve_revision) }, \
         { "plan_revision", NULL, MAVLINK_TYPE_UINT64_T, 0, 24, offsetof(mavlink_leaf_planner_diagnostics_t, plan_revision) }, \
         { "solve_time_us", NULL, MAVLINK_TYPE_UINT64_T, 0, 32, offsetof(mavlink_leaf_planner_diagnostics_t, solve_time_us) }, \
         { "leader_time_us", NULL, MAVLINK_TYPE_UINT64_T, 0, 40, offsetof(mavlink_leaf_planner_diagnostics_t, leader_time_us) }, \
         { "candidates", NULL, MAVLINK_TYPE_UINT32_T, 0, 48, offsetof(mavlink_leaf_planner_diagnostics_t, candidates) }, \
         { "cache_hits", NULL, MAVLINK_TYPE_UINT32_T, 0, 52, offsetof(mavlink_leaf_planner_diagnostics_t, cache_hits) }, \
         { "search_nodes", NULL, MAVLINK_TYPE_UINT32_T, 0, 56, offsetof(mavlink_leaf_planner_diagnostics_t, search_nodes) }, \
         { "arrival_s", NULL, MAVLINK_TYPE_FLOAT, 0, 60, offsetof(mavlink_leaf_planner_diagnostics_t, arrival_s) }, \
         { "residual_s", NULL, MAVLINK_TYPE_FLOAT, 0, 64, offsetof(mavlink_leaf_planner_diagnostics_t, residual_s) }, \
         { "length_m", NULL, MAVLINK_TYPE_FLOAT, 0, 68, offsetof(mavlink_leaf_planner_diagnostics_t, length_m) }, \
         { "capture_error_m", NULL, MAVLINK_TYPE_FLOAT, 0, 72, offsetof(mavlink_leaf_planner_diagnostics_t, capture_error_m) }, \
         { "heading_error_deg", NULL, MAVLINK_TYPE_FLOAT, 0, 76, offsetof(mavlink_leaf_planner_diagnostics_t, heading_error_deg) }, \
         { "capture_radius_m", NULL, MAVLINK_TYPE_FLOAT, 0, 80, offsetof(mavlink_leaf_planner_diagnostics_t, capture_radius_m) }, \
         { "capture_heading_deg", NULL, MAVLINK_TYPE_FLOAT, 0, 84, offsetof(mavlink_leaf_planner_diagnostics_t, capture_heading_deg) }, \
         { "separation_m", NULL, MAVLINK_TYPE_FLOAT, 0, 88, offsetof(mavlink_leaf_planner_diagnostics_t, separation_m) }, \
         { "join_gap_m", NULL, MAVLINK_TYPE_FLOAT, 0, 92, offsetof(mavlink_leaf_planner_diagnostics_t, join_gap_m) }, \
         { "join_distance_limit_m", NULL, MAVLINK_TYPE_FLOAT, 0, 96, offsetof(mavlink_leaf_planner_diagnostics_t, join_distance_limit_m) }, \
         { "join_separation_error_m", NULL, MAVLINK_TYPE_FLOAT, 0, 100, offsetof(mavlink_leaf_planner_diagnostics_t, join_separation_error_m) }, \
         { "join_separation_limit_m", NULL, MAVLINK_TYPE_FLOAT, 0, 104, offsetof(mavlink_leaf_planner_diagnostics_t, join_separation_limit_m) }, \
         { "prediction_horizon_s", NULL, MAVLINK_TYPE_FLOAT, 0, 108, offsetof(mavlink_leaf_planner_diagnostics_t, prediction_horizon_s) }, \
         { "leader_speed_mps", NULL, MAVLINK_TYPE_FLOAT, 0, 112, offsetof(mavlink_leaf_planner_diagnostics_t, leader_speed_mps) }, \
         { "follower_speed_mps", NULL, MAVLINK_TYPE_FLOAT, 0, 116, offsetof(mavlink_leaf_planner_diagnostics_t, follower_speed_mps) }, \
         { "route_progress_m", NULL, MAVLINK_TYPE_FLOAT, 0, 120, offsetof(mavlink_leaf_planner_diagnostics_t, route_progress_m) }, \
         { "prediction_model", NULL, MAVLINK_TYPE_UINT8_T, 0, 124, offsetof(mavlink_leaf_planner_diagnostics_t, prediction_model) }, \
         { "outcome", NULL, MAVLINK_TYPE_UINT8_T, 0, 125, offsetof(mavlink_leaf_planner_diagnostics_t, outcome) }, \
         { "flags", NULL, MAVLINK_TYPE_UINT8_T, 0, 126, offsetof(mavlink_leaf_planner_diagnostics_t, flags) }, \
         { "family", NULL, MAVLINK_TYPE_UINT8_T, 0, 127, offsetof(mavlink_leaf_planner_diagnostics_t, family) }, \
         { "planner_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 128, offsetof(mavlink_leaf_planner_diagnostics_t, planner_state) }, \
         { "leader_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 129, offsetof(mavlink_leaf_planner_diagnostics_t, leader_system) }, \
         { "leader_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 130, offsetof(mavlink_leaf_planner_diagnostics_t, leader_component) }, \
         } \
}
#endif

/**
 * @brief Pack a leaf_planner_diagnostics message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param boot_id  Process incarnation.
 * @param sample_time_us  Monotonic sample time, microseconds.
 * @param solve_revision  Monotonic diagnostic revision.
 * @param plan_revision  Planner output revision.
 * @param solve_time_us  Monotonic solve epoch, microseconds.
 * @param leader_time_us  FC receipt time of consumed leader observation.
 * @param candidates  Solver candidates.
 * @param cache_hits  Solver cache hits.
 * @param search_nodes  Solver search nodes.
 * @param arrival_s  Candidate arrival time from solve epoch.
 * @param residual_s  Candidate timing residual.
 * @param length_m  Candidate path length.
 * @param capture_error_m  Current distance to following slot.
 * @param heading_error_deg  Current slot heading error.
 * @param capture_radius_m  Capture distance tolerance.
 * @param capture_heading_deg  Capture heading tolerance.
 * @param separation_m  Requested separation at solve epoch.
 * @param join_gap_m  Front join gap; NaN if unavailable.
 * @param join_distance_limit_m  Front join distance limit; NaN if unavailable.
 * @param join_separation_error_m  Front join separation error; NaN if unavailable.
 * @param join_separation_limit_m  Front join separation limit; NaN if unavailable.
 * @param prediction_horizon_s  Prediction horizon, seconds; prediction chunks contain the consumed observation then 32 evenly spaced forecast points from solve time.
 * @param leader_speed_mps  Prediction speed at solve time, metres per second.
 * @param follower_speed_mps  Horizontal follower speed at solve time, metres per second.
 * @param route_progress_m  Distance along the retained or accepted planner path, metres.
 * @param prediction_model  0 linear, 1 quadratic, 2 circular.
 * @param outcome  0 unavailable, 1 accepted, 2 retained, 3 rejected, 4 chasing.
 * @param flags  Bit 0 candidate feasible, bit 1 budget exceeded, bit 2 capacity exceeded, bit 3 front approach.
 * @param family  lfp Family.
 * @param planner_state  FollowingPlanState.
 * @param leader_system  Actual configured leader system.
 * @param leader_component  Actual configured leader component.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_planner_diagnostics_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t boot_id, uint64_t sample_time_us, uint64_t solve_revision, uint64_t plan_revision, uint64_t solve_time_us, uint64_t leader_time_us, uint32_t candidates, uint32_t cache_hits, uint32_t search_nodes, float arrival_s, float residual_s, float length_m, float capture_error_m, float heading_error_deg, float capture_radius_m, float capture_heading_deg, float separation_m, float join_gap_m, float join_distance_limit_m, float join_separation_error_m, float join_separation_limit_m, float prediction_horizon_s, float leader_speed_mps, float follower_speed_mps, float route_progress_m, uint8_t prediction_model, uint8_t outcome, uint8_t flags, uint8_t family, uint8_t planner_state, uint8_t leader_system, uint8_t leader_component)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_PLANNER_DIAGNOSTICS_LEN];
    _mav_put_uint64_t(buf, 0, boot_id);
    _mav_put_uint64_t(buf, 8, sample_time_us);
    _mav_put_uint64_t(buf, 16, solve_revision);
    _mav_put_uint64_t(buf, 24, plan_revision);
    _mav_put_uint64_t(buf, 32, solve_time_us);
    _mav_put_uint64_t(buf, 40, leader_time_us);
    _mav_put_uint32_t(buf, 48, candidates);
    _mav_put_uint32_t(buf, 52, cache_hits);
    _mav_put_uint32_t(buf, 56, search_nodes);
    _mav_put_float(buf, 60, arrival_s);
    _mav_put_float(buf, 64, residual_s);
    _mav_put_float(buf, 68, length_m);
    _mav_put_float(buf, 72, capture_error_m);
    _mav_put_float(buf, 76, heading_error_deg);
    _mav_put_float(buf, 80, capture_radius_m);
    _mav_put_float(buf, 84, capture_heading_deg);
    _mav_put_float(buf, 88, separation_m);
    _mav_put_float(buf, 92, join_gap_m);
    _mav_put_float(buf, 96, join_distance_limit_m);
    _mav_put_float(buf, 100, join_separation_error_m);
    _mav_put_float(buf, 104, join_separation_limit_m);
    _mav_put_float(buf, 108, prediction_horizon_s);
    _mav_put_float(buf, 112, leader_speed_mps);
    _mav_put_float(buf, 116, follower_speed_mps);
    _mav_put_float(buf, 120, route_progress_m);
    _mav_put_uint8_t(buf, 124, prediction_model);
    _mav_put_uint8_t(buf, 125, outcome);
    _mav_put_uint8_t(buf, 126, flags);
    _mav_put_uint8_t(buf, 127, family);
    _mav_put_uint8_t(buf, 128, planner_state);
    _mav_put_uint8_t(buf, 129, leader_system);
    _mav_put_uint8_t(buf, 130, leader_component);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_PLANNER_DIAGNOSTICS_LEN);
#else
    mavlink_leaf_planner_diagnostics_t packet;
    packet.boot_id = boot_id;
    packet.sample_time_us = sample_time_us;
    packet.solve_revision = solve_revision;
    packet.plan_revision = plan_revision;
    packet.solve_time_us = solve_time_us;
    packet.leader_time_us = leader_time_us;
    packet.candidates = candidates;
    packet.cache_hits = cache_hits;
    packet.search_nodes = search_nodes;
    packet.arrival_s = arrival_s;
    packet.residual_s = residual_s;
    packet.length_m = length_m;
    packet.capture_error_m = capture_error_m;
    packet.heading_error_deg = heading_error_deg;
    packet.capture_radius_m = capture_radius_m;
    packet.capture_heading_deg = capture_heading_deg;
    packet.separation_m = separation_m;
    packet.join_gap_m = join_gap_m;
    packet.join_distance_limit_m = join_distance_limit_m;
    packet.join_separation_error_m = join_separation_error_m;
    packet.join_separation_limit_m = join_separation_limit_m;
    packet.prediction_horizon_s = prediction_horizon_s;
    packet.leader_speed_mps = leader_speed_mps;
    packet.follower_speed_mps = follower_speed_mps;
    packet.route_progress_m = route_progress_m;
    packet.prediction_model = prediction_model;
    packet.outcome = outcome;
    packet.flags = flags;
    packet.family = family;
    packet.planner_state = planner_state;
    packet.leader_system = leader_system;
    packet.leader_component = leader_component;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_PLANNER_DIAGNOSTICS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_PLANNER_DIAGNOSTICS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_LEAF_PLANNER_DIAGNOSTICS_MIN_LEN, MAVLINK_MSG_ID_LEAF_PLANNER_DIAGNOSTICS_LEN, MAVLINK_MSG_ID_LEAF_PLANNER_DIAGNOSTICS_CRC);
}

/**
 * @brief Pack a leaf_planner_diagnostics message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param boot_id  Process incarnation.
 * @param sample_time_us  Monotonic sample time, microseconds.
 * @param solve_revision  Monotonic diagnostic revision.
 * @param plan_revision  Planner output revision.
 * @param solve_time_us  Monotonic solve epoch, microseconds.
 * @param leader_time_us  FC receipt time of consumed leader observation.
 * @param candidates  Solver candidates.
 * @param cache_hits  Solver cache hits.
 * @param search_nodes  Solver search nodes.
 * @param arrival_s  Candidate arrival time from solve epoch.
 * @param residual_s  Candidate timing residual.
 * @param length_m  Candidate path length.
 * @param capture_error_m  Current distance to following slot.
 * @param heading_error_deg  Current slot heading error.
 * @param capture_radius_m  Capture distance tolerance.
 * @param capture_heading_deg  Capture heading tolerance.
 * @param separation_m  Requested separation at solve epoch.
 * @param join_gap_m  Front join gap; NaN if unavailable.
 * @param join_distance_limit_m  Front join distance limit; NaN if unavailable.
 * @param join_separation_error_m  Front join separation error; NaN if unavailable.
 * @param join_separation_limit_m  Front join separation limit; NaN if unavailable.
 * @param prediction_horizon_s  Prediction horizon, seconds; prediction chunks contain the consumed observation then 32 evenly spaced forecast points from solve time.
 * @param leader_speed_mps  Prediction speed at solve time, metres per second.
 * @param follower_speed_mps  Horizontal follower speed at solve time, metres per second.
 * @param route_progress_m  Distance along the retained or accepted planner path, metres.
 * @param prediction_model  0 linear, 1 quadratic, 2 circular.
 * @param outcome  0 unavailable, 1 accepted, 2 retained, 3 rejected, 4 chasing.
 * @param flags  Bit 0 candidate feasible, bit 1 budget exceeded, bit 2 capacity exceeded, bit 3 front approach.
 * @param family  lfp Family.
 * @param planner_state  FollowingPlanState.
 * @param leader_system  Actual configured leader system.
 * @param leader_component  Actual configured leader component.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_planner_diagnostics_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint64_t boot_id, uint64_t sample_time_us, uint64_t solve_revision, uint64_t plan_revision, uint64_t solve_time_us, uint64_t leader_time_us, uint32_t candidates, uint32_t cache_hits, uint32_t search_nodes, float arrival_s, float residual_s, float length_m, float capture_error_m, float heading_error_deg, float capture_radius_m, float capture_heading_deg, float separation_m, float join_gap_m, float join_distance_limit_m, float join_separation_error_m, float join_separation_limit_m, float prediction_horizon_s, float leader_speed_mps, float follower_speed_mps, float route_progress_m, uint8_t prediction_model, uint8_t outcome, uint8_t flags, uint8_t family, uint8_t planner_state, uint8_t leader_system, uint8_t leader_component)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_PLANNER_DIAGNOSTICS_LEN];
    _mav_put_uint64_t(buf, 0, boot_id);
    _mav_put_uint64_t(buf, 8, sample_time_us);
    _mav_put_uint64_t(buf, 16, solve_revision);
    _mav_put_uint64_t(buf, 24, plan_revision);
    _mav_put_uint64_t(buf, 32, solve_time_us);
    _mav_put_uint64_t(buf, 40, leader_time_us);
    _mav_put_uint32_t(buf, 48, candidates);
    _mav_put_uint32_t(buf, 52, cache_hits);
    _mav_put_uint32_t(buf, 56, search_nodes);
    _mav_put_float(buf, 60, arrival_s);
    _mav_put_float(buf, 64, residual_s);
    _mav_put_float(buf, 68, length_m);
    _mav_put_float(buf, 72, capture_error_m);
    _mav_put_float(buf, 76, heading_error_deg);
    _mav_put_float(buf, 80, capture_radius_m);
    _mav_put_float(buf, 84, capture_heading_deg);
    _mav_put_float(buf, 88, separation_m);
    _mav_put_float(buf, 92, join_gap_m);
    _mav_put_float(buf, 96, join_distance_limit_m);
    _mav_put_float(buf, 100, join_separation_error_m);
    _mav_put_float(buf, 104, join_separation_limit_m);
    _mav_put_float(buf, 108, prediction_horizon_s);
    _mav_put_float(buf, 112, leader_speed_mps);
    _mav_put_float(buf, 116, follower_speed_mps);
    _mav_put_float(buf, 120, route_progress_m);
    _mav_put_uint8_t(buf, 124, prediction_model);
    _mav_put_uint8_t(buf, 125, outcome);
    _mav_put_uint8_t(buf, 126, flags);
    _mav_put_uint8_t(buf, 127, family);
    _mav_put_uint8_t(buf, 128, planner_state);
    _mav_put_uint8_t(buf, 129, leader_system);
    _mav_put_uint8_t(buf, 130, leader_component);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_PLANNER_DIAGNOSTICS_LEN);
#else
    mavlink_leaf_planner_diagnostics_t packet;
    packet.boot_id = boot_id;
    packet.sample_time_us = sample_time_us;
    packet.solve_revision = solve_revision;
    packet.plan_revision = plan_revision;
    packet.solve_time_us = solve_time_us;
    packet.leader_time_us = leader_time_us;
    packet.candidates = candidates;
    packet.cache_hits = cache_hits;
    packet.search_nodes = search_nodes;
    packet.arrival_s = arrival_s;
    packet.residual_s = residual_s;
    packet.length_m = length_m;
    packet.capture_error_m = capture_error_m;
    packet.heading_error_deg = heading_error_deg;
    packet.capture_radius_m = capture_radius_m;
    packet.capture_heading_deg = capture_heading_deg;
    packet.separation_m = separation_m;
    packet.join_gap_m = join_gap_m;
    packet.join_distance_limit_m = join_distance_limit_m;
    packet.join_separation_error_m = join_separation_error_m;
    packet.join_separation_limit_m = join_separation_limit_m;
    packet.prediction_horizon_s = prediction_horizon_s;
    packet.leader_speed_mps = leader_speed_mps;
    packet.follower_speed_mps = follower_speed_mps;
    packet.route_progress_m = route_progress_m;
    packet.prediction_model = prediction_model;
    packet.outcome = outcome;
    packet.flags = flags;
    packet.family = family;
    packet.planner_state = planner_state;
    packet.leader_system = leader_system;
    packet.leader_component = leader_component;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_PLANNER_DIAGNOSTICS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_PLANNER_DIAGNOSTICS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_PLANNER_DIAGNOSTICS_MIN_LEN, MAVLINK_MSG_ID_LEAF_PLANNER_DIAGNOSTICS_LEN, MAVLINK_MSG_ID_LEAF_PLANNER_DIAGNOSTICS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LEAF_PLANNER_DIAGNOSTICS_MIN_LEN, MAVLINK_MSG_ID_LEAF_PLANNER_DIAGNOSTICS_LEN);
#endif
}

/**
 * @brief Pack a leaf_planner_diagnostics message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param boot_id  Process incarnation.
 * @param sample_time_us  Monotonic sample time, microseconds.
 * @param solve_revision  Monotonic diagnostic revision.
 * @param plan_revision  Planner output revision.
 * @param solve_time_us  Monotonic solve epoch, microseconds.
 * @param leader_time_us  FC receipt time of consumed leader observation.
 * @param candidates  Solver candidates.
 * @param cache_hits  Solver cache hits.
 * @param search_nodes  Solver search nodes.
 * @param arrival_s  Candidate arrival time from solve epoch.
 * @param residual_s  Candidate timing residual.
 * @param length_m  Candidate path length.
 * @param capture_error_m  Current distance to following slot.
 * @param heading_error_deg  Current slot heading error.
 * @param capture_radius_m  Capture distance tolerance.
 * @param capture_heading_deg  Capture heading tolerance.
 * @param separation_m  Requested separation at solve epoch.
 * @param join_gap_m  Front join gap; NaN if unavailable.
 * @param join_distance_limit_m  Front join distance limit; NaN if unavailable.
 * @param join_separation_error_m  Front join separation error; NaN if unavailable.
 * @param join_separation_limit_m  Front join separation limit; NaN if unavailable.
 * @param prediction_horizon_s  Prediction horizon, seconds; prediction chunks contain the consumed observation then 32 evenly spaced forecast points from solve time.
 * @param leader_speed_mps  Prediction speed at solve time, metres per second.
 * @param follower_speed_mps  Horizontal follower speed at solve time, metres per second.
 * @param route_progress_m  Distance along the retained or accepted planner path, metres.
 * @param prediction_model  0 linear, 1 quadratic, 2 circular.
 * @param outcome  0 unavailable, 1 accepted, 2 retained, 3 rejected, 4 chasing.
 * @param flags  Bit 0 candidate feasible, bit 1 budget exceeded, bit 2 capacity exceeded, bit 3 front approach.
 * @param family  lfp Family.
 * @param planner_state  FollowingPlanState.
 * @param leader_system  Actual configured leader system.
 * @param leader_component  Actual configured leader component.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_leaf_planner_diagnostics_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t boot_id,uint64_t sample_time_us,uint64_t solve_revision,uint64_t plan_revision,uint64_t solve_time_us,uint64_t leader_time_us,uint32_t candidates,uint32_t cache_hits,uint32_t search_nodes,float arrival_s,float residual_s,float length_m,float capture_error_m,float heading_error_deg,float capture_radius_m,float capture_heading_deg,float separation_m,float join_gap_m,float join_distance_limit_m,float join_separation_error_m,float join_separation_limit_m,float prediction_horizon_s,float leader_speed_mps,float follower_speed_mps,float route_progress_m,uint8_t prediction_model,uint8_t outcome,uint8_t flags,uint8_t family,uint8_t planner_state,uint8_t leader_system,uint8_t leader_component)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_PLANNER_DIAGNOSTICS_LEN];
    _mav_put_uint64_t(buf, 0, boot_id);
    _mav_put_uint64_t(buf, 8, sample_time_us);
    _mav_put_uint64_t(buf, 16, solve_revision);
    _mav_put_uint64_t(buf, 24, plan_revision);
    _mav_put_uint64_t(buf, 32, solve_time_us);
    _mav_put_uint64_t(buf, 40, leader_time_us);
    _mav_put_uint32_t(buf, 48, candidates);
    _mav_put_uint32_t(buf, 52, cache_hits);
    _mav_put_uint32_t(buf, 56, search_nodes);
    _mav_put_float(buf, 60, arrival_s);
    _mav_put_float(buf, 64, residual_s);
    _mav_put_float(buf, 68, length_m);
    _mav_put_float(buf, 72, capture_error_m);
    _mav_put_float(buf, 76, heading_error_deg);
    _mav_put_float(buf, 80, capture_radius_m);
    _mav_put_float(buf, 84, capture_heading_deg);
    _mav_put_float(buf, 88, separation_m);
    _mav_put_float(buf, 92, join_gap_m);
    _mav_put_float(buf, 96, join_distance_limit_m);
    _mav_put_float(buf, 100, join_separation_error_m);
    _mav_put_float(buf, 104, join_separation_limit_m);
    _mav_put_float(buf, 108, prediction_horizon_s);
    _mav_put_float(buf, 112, leader_speed_mps);
    _mav_put_float(buf, 116, follower_speed_mps);
    _mav_put_float(buf, 120, route_progress_m);
    _mav_put_uint8_t(buf, 124, prediction_model);
    _mav_put_uint8_t(buf, 125, outcome);
    _mav_put_uint8_t(buf, 126, flags);
    _mav_put_uint8_t(buf, 127, family);
    _mav_put_uint8_t(buf, 128, planner_state);
    _mav_put_uint8_t(buf, 129, leader_system);
    _mav_put_uint8_t(buf, 130, leader_component);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LEAF_PLANNER_DIAGNOSTICS_LEN);
#else
    mavlink_leaf_planner_diagnostics_t packet;
    packet.boot_id = boot_id;
    packet.sample_time_us = sample_time_us;
    packet.solve_revision = solve_revision;
    packet.plan_revision = plan_revision;
    packet.solve_time_us = solve_time_us;
    packet.leader_time_us = leader_time_us;
    packet.candidates = candidates;
    packet.cache_hits = cache_hits;
    packet.search_nodes = search_nodes;
    packet.arrival_s = arrival_s;
    packet.residual_s = residual_s;
    packet.length_m = length_m;
    packet.capture_error_m = capture_error_m;
    packet.heading_error_deg = heading_error_deg;
    packet.capture_radius_m = capture_radius_m;
    packet.capture_heading_deg = capture_heading_deg;
    packet.separation_m = separation_m;
    packet.join_gap_m = join_gap_m;
    packet.join_distance_limit_m = join_distance_limit_m;
    packet.join_separation_error_m = join_separation_error_m;
    packet.join_separation_limit_m = join_separation_limit_m;
    packet.prediction_horizon_s = prediction_horizon_s;
    packet.leader_speed_mps = leader_speed_mps;
    packet.follower_speed_mps = follower_speed_mps;
    packet.route_progress_m = route_progress_m;
    packet.prediction_model = prediction_model;
    packet.outcome = outcome;
    packet.flags = flags;
    packet.family = family;
    packet.planner_state = planner_state;
    packet.leader_system = leader_system;
    packet.leader_component = leader_component;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LEAF_PLANNER_DIAGNOSTICS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LEAF_PLANNER_DIAGNOSTICS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_LEAF_PLANNER_DIAGNOSTICS_MIN_LEN, MAVLINK_MSG_ID_LEAF_PLANNER_DIAGNOSTICS_LEN, MAVLINK_MSG_ID_LEAF_PLANNER_DIAGNOSTICS_CRC);
}

/**
 * @brief Encode a leaf_planner_diagnostics struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param leaf_planner_diagnostics C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_planner_diagnostics_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_leaf_planner_diagnostics_t* leaf_planner_diagnostics)
{
    return mavlink_msg_leaf_planner_diagnostics_pack(system_id, component_id, msg, leaf_planner_diagnostics->boot_id, leaf_planner_diagnostics->sample_time_us, leaf_planner_diagnostics->solve_revision, leaf_planner_diagnostics->plan_revision, leaf_planner_diagnostics->solve_time_us, leaf_planner_diagnostics->leader_time_us, leaf_planner_diagnostics->candidates, leaf_planner_diagnostics->cache_hits, leaf_planner_diagnostics->search_nodes, leaf_planner_diagnostics->arrival_s, leaf_planner_diagnostics->residual_s, leaf_planner_diagnostics->length_m, leaf_planner_diagnostics->capture_error_m, leaf_planner_diagnostics->heading_error_deg, leaf_planner_diagnostics->capture_radius_m, leaf_planner_diagnostics->capture_heading_deg, leaf_planner_diagnostics->separation_m, leaf_planner_diagnostics->join_gap_m, leaf_planner_diagnostics->join_distance_limit_m, leaf_planner_diagnostics->join_separation_error_m, leaf_planner_diagnostics->join_separation_limit_m, leaf_planner_diagnostics->prediction_horizon_s, leaf_planner_diagnostics->leader_speed_mps, leaf_planner_diagnostics->follower_speed_mps, leaf_planner_diagnostics->route_progress_m, leaf_planner_diagnostics->prediction_model, leaf_planner_diagnostics->outcome, leaf_planner_diagnostics->flags, leaf_planner_diagnostics->family, leaf_planner_diagnostics->planner_state, leaf_planner_diagnostics->leader_system, leaf_planner_diagnostics->leader_component);
}

/**
 * @brief Encode a leaf_planner_diagnostics struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param leaf_planner_diagnostics C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_planner_diagnostics_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_leaf_planner_diagnostics_t* leaf_planner_diagnostics)
{
    return mavlink_msg_leaf_planner_diagnostics_pack_chan(system_id, component_id, chan, msg, leaf_planner_diagnostics->boot_id, leaf_planner_diagnostics->sample_time_us, leaf_planner_diagnostics->solve_revision, leaf_planner_diagnostics->plan_revision, leaf_planner_diagnostics->solve_time_us, leaf_planner_diagnostics->leader_time_us, leaf_planner_diagnostics->candidates, leaf_planner_diagnostics->cache_hits, leaf_planner_diagnostics->search_nodes, leaf_planner_diagnostics->arrival_s, leaf_planner_diagnostics->residual_s, leaf_planner_diagnostics->length_m, leaf_planner_diagnostics->capture_error_m, leaf_planner_diagnostics->heading_error_deg, leaf_planner_diagnostics->capture_radius_m, leaf_planner_diagnostics->capture_heading_deg, leaf_planner_diagnostics->separation_m, leaf_planner_diagnostics->join_gap_m, leaf_planner_diagnostics->join_distance_limit_m, leaf_planner_diagnostics->join_separation_error_m, leaf_planner_diagnostics->join_separation_limit_m, leaf_planner_diagnostics->prediction_horizon_s, leaf_planner_diagnostics->leader_speed_mps, leaf_planner_diagnostics->follower_speed_mps, leaf_planner_diagnostics->route_progress_m, leaf_planner_diagnostics->prediction_model, leaf_planner_diagnostics->outcome, leaf_planner_diagnostics->flags, leaf_planner_diagnostics->family, leaf_planner_diagnostics->planner_state, leaf_planner_diagnostics->leader_system, leaf_planner_diagnostics->leader_component);
}

/**
 * @brief Encode a leaf_planner_diagnostics struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param leaf_planner_diagnostics C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_leaf_planner_diagnostics_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_leaf_planner_diagnostics_t* leaf_planner_diagnostics)
{
    return mavlink_msg_leaf_planner_diagnostics_pack_status(system_id, component_id, _status, msg,  leaf_planner_diagnostics->boot_id, leaf_planner_diagnostics->sample_time_us, leaf_planner_diagnostics->solve_revision, leaf_planner_diagnostics->plan_revision, leaf_planner_diagnostics->solve_time_us, leaf_planner_diagnostics->leader_time_us, leaf_planner_diagnostics->candidates, leaf_planner_diagnostics->cache_hits, leaf_planner_diagnostics->search_nodes, leaf_planner_diagnostics->arrival_s, leaf_planner_diagnostics->residual_s, leaf_planner_diagnostics->length_m, leaf_planner_diagnostics->capture_error_m, leaf_planner_diagnostics->heading_error_deg, leaf_planner_diagnostics->capture_radius_m, leaf_planner_diagnostics->capture_heading_deg, leaf_planner_diagnostics->separation_m, leaf_planner_diagnostics->join_gap_m, leaf_planner_diagnostics->join_distance_limit_m, leaf_planner_diagnostics->join_separation_error_m, leaf_planner_diagnostics->join_separation_limit_m, leaf_planner_diagnostics->prediction_horizon_s, leaf_planner_diagnostics->leader_speed_mps, leaf_planner_diagnostics->follower_speed_mps, leaf_planner_diagnostics->route_progress_m, leaf_planner_diagnostics->prediction_model, leaf_planner_diagnostics->outcome, leaf_planner_diagnostics->flags, leaf_planner_diagnostics->family, leaf_planner_diagnostics->planner_state, leaf_planner_diagnostics->leader_system, leaf_planner_diagnostics->leader_component);
}

/**
 * @brief Send a leaf_planner_diagnostics message
 * @param chan MAVLink channel to send the message
 *
 * @param boot_id  Process incarnation.
 * @param sample_time_us  Monotonic sample time, microseconds.
 * @param solve_revision  Monotonic diagnostic revision.
 * @param plan_revision  Planner output revision.
 * @param solve_time_us  Monotonic solve epoch, microseconds.
 * @param leader_time_us  FC receipt time of consumed leader observation.
 * @param candidates  Solver candidates.
 * @param cache_hits  Solver cache hits.
 * @param search_nodes  Solver search nodes.
 * @param arrival_s  Candidate arrival time from solve epoch.
 * @param residual_s  Candidate timing residual.
 * @param length_m  Candidate path length.
 * @param capture_error_m  Current distance to following slot.
 * @param heading_error_deg  Current slot heading error.
 * @param capture_radius_m  Capture distance tolerance.
 * @param capture_heading_deg  Capture heading tolerance.
 * @param separation_m  Requested separation at solve epoch.
 * @param join_gap_m  Front join gap; NaN if unavailable.
 * @param join_distance_limit_m  Front join distance limit; NaN if unavailable.
 * @param join_separation_error_m  Front join separation error; NaN if unavailable.
 * @param join_separation_limit_m  Front join separation limit; NaN if unavailable.
 * @param prediction_horizon_s  Prediction horizon, seconds; prediction chunks contain the consumed observation then 32 evenly spaced forecast points from solve time.
 * @param leader_speed_mps  Prediction speed at solve time, metres per second.
 * @param follower_speed_mps  Horizontal follower speed at solve time, metres per second.
 * @param route_progress_m  Distance along the retained or accepted planner path, metres.
 * @param prediction_model  0 linear, 1 quadratic, 2 circular.
 * @param outcome  0 unavailable, 1 accepted, 2 retained, 3 rejected, 4 chasing.
 * @param flags  Bit 0 candidate feasible, bit 1 budget exceeded, bit 2 capacity exceeded, bit 3 front approach.
 * @param family  lfp Family.
 * @param planner_state  FollowingPlanState.
 * @param leader_system  Actual configured leader system.
 * @param leader_component  Actual configured leader component.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_leaf_planner_diagnostics_send(mavlink_channel_t chan, uint64_t boot_id, uint64_t sample_time_us, uint64_t solve_revision, uint64_t plan_revision, uint64_t solve_time_us, uint64_t leader_time_us, uint32_t candidates, uint32_t cache_hits, uint32_t search_nodes, float arrival_s, float residual_s, float length_m, float capture_error_m, float heading_error_deg, float capture_radius_m, float capture_heading_deg, float separation_m, float join_gap_m, float join_distance_limit_m, float join_separation_error_m, float join_separation_limit_m, float prediction_horizon_s, float leader_speed_mps, float follower_speed_mps, float route_progress_m, uint8_t prediction_model, uint8_t outcome, uint8_t flags, uint8_t family, uint8_t planner_state, uint8_t leader_system, uint8_t leader_component)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LEAF_PLANNER_DIAGNOSTICS_LEN];
    _mav_put_uint64_t(buf, 0, boot_id);
    _mav_put_uint64_t(buf, 8, sample_time_us);
    _mav_put_uint64_t(buf, 16, solve_revision);
    _mav_put_uint64_t(buf, 24, plan_revision);
    _mav_put_uint64_t(buf, 32, solve_time_us);
    _mav_put_uint64_t(buf, 40, leader_time_us);
    _mav_put_uint32_t(buf, 48, candidates);
    _mav_put_uint32_t(buf, 52, cache_hits);
    _mav_put_uint32_t(buf, 56, search_nodes);
    _mav_put_float(buf, 60, arrival_s);
    _mav_put_float(buf, 64, residual_s);
    _mav_put_float(buf, 68, length_m);
    _mav_put_float(buf, 72, capture_error_m);
    _mav_put_float(buf, 76, heading_error_deg);
    _mav_put_float(buf, 80, capture_radius_m);
    _mav_put_float(buf, 84, capture_heading_deg);
    _mav_put_float(buf, 88, separation_m);
    _mav_put_float(buf, 92, join_gap_m);
    _mav_put_float(buf, 96, join_distance_limit_m);
    _mav_put_float(buf, 100, join_separation_error_m);
    _mav_put_float(buf, 104, join_separation_limit_m);
    _mav_put_float(buf, 108, prediction_horizon_s);
    _mav_put_float(buf, 112, leader_speed_mps);
    _mav_put_float(buf, 116, follower_speed_mps);
    _mav_put_float(buf, 120, route_progress_m);
    _mav_put_uint8_t(buf, 124, prediction_model);
    _mav_put_uint8_t(buf, 125, outcome);
    _mav_put_uint8_t(buf, 126, flags);
    _mav_put_uint8_t(buf, 127, family);
    _mav_put_uint8_t(buf, 128, planner_state);
    _mav_put_uint8_t(buf, 129, leader_system);
    _mav_put_uint8_t(buf, 130, leader_component);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_PLANNER_DIAGNOSTICS, buf, MAVLINK_MSG_ID_LEAF_PLANNER_DIAGNOSTICS_MIN_LEN, MAVLINK_MSG_ID_LEAF_PLANNER_DIAGNOSTICS_LEN, MAVLINK_MSG_ID_LEAF_PLANNER_DIAGNOSTICS_CRC);
#else
    mavlink_leaf_planner_diagnostics_t packet;
    packet.boot_id = boot_id;
    packet.sample_time_us = sample_time_us;
    packet.solve_revision = solve_revision;
    packet.plan_revision = plan_revision;
    packet.solve_time_us = solve_time_us;
    packet.leader_time_us = leader_time_us;
    packet.candidates = candidates;
    packet.cache_hits = cache_hits;
    packet.search_nodes = search_nodes;
    packet.arrival_s = arrival_s;
    packet.residual_s = residual_s;
    packet.length_m = length_m;
    packet.capture_error_m = capture_error_m;
    packet.heading_error_deg = heading_error_deg;
    packet.capture_radius_m = capture_radius_m;
    packet.capture_heading_deg = capture_heading_deg;
    packet.separation_m = separation_m;
    packet.join_gap_m = join_gap_m;
    packet.join_distance_limit_m = join_distance_limit_m;
    packet.join_separation_error_m = join_separation_error_m;
    packet.join_separation_limit_m = join_separation_limit_m;
    packet.prediction_horizon_s = prediction_horizon_s;
    packet.leader_speed_mps = leader_speed_mps;
    packet.follower_speed_mps = follower_speed_mps;
    packet.route_progress_m = route_progress_m;
    packet.prediction_model = prediction_model;
    packet.outcome = outcome;
    packet.flags = flags;
    packet.family = family;
    packet.planner_state = planner_state;
    packet.leader_system = leader_system;
    packet.leader_component = leader_component;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_PLANNER_DIAGNOSTICS, (const char *)&packet, MAVLINK_MSG_ID_LEAF_PLANNER_DIAGNOSTICS_MIN_LEN, MAVLINK_MSG_ID_LEAF_PLANNER_DIAGNOSTICS_LEN, MAVLINK_MSG_ID_LEAF_PLANNER_DIAGNOSTICS_CRC);
#endif
}

/**
 * @brief Send a leaf_planner_diagnostics message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_leaf_planner_diagnostics_send_struct(mavlink_channel_t chan, const mavlink_leaf_planner_diagnostics_t* leaf_planner_diagnostics)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_leaf_planner_diagnostics_send(chan, leaf_planner_diagnostics->boot_id, leaf_planner_diagnostics->sample_time_us, leaf_planner_diagnostics->solve_revision, leaf_planner_diagnostics->plan_revision, leaf_planner_diagnostics->solve_time_us, leaf_planner_diagnostics->leader_time_us, leaf_planner_diagnostics->candidates, leaf_planner_diagnostics->cache_hits, leaf_planner_diagnostics->search_nodes, leaf_planner_diagnostics->arrival_s, leaf_planner_diagnostics->residual_s, leaf_planner_diagnostics->length_m, leaf_planner_diagnostics->capture_error_m, leaf_planner_diagnostics->heading_error_deg, leaf_planner_diagnostics->capture_radius_m, leaf_planner_diagnostics->capture_heading_deg, leaf_planner_diagnostics->separation_m, leaf_planner_diagnostics->join_gap_m, leaf_planner_diagnostics->join_distance_limit_m, leaf_planner_diagnostics->join_separation_error_m, leaf_planner_diagnostics->join_separation_limit_m, leaf_planner_diagnostics->prediction_horizon_s, leaf_planner_diagnostics->leader_speed_mps, leaf_planner_diagnostics->follower_speed_mps, leaf_planner_diagnostics->route_progress_m, leaf_planner_diagnostics->prediction_model, leaf_planner_diagnostics->outcome, leaf_planner_diagnostics->flags, leaf_planner_diagnostics->family, leaf_planner_diagnostics->planner_state, leaf_planner_diagnostics->leader_system, leaf_planner_diagnostics->leader_component);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_PLANNER_DIAGNOSTICS, (const char *)leaf_planner_diagnostics, MAVLINK_MSG_ID_LEAF_PLANNER_DIAGNOSTICS_MIN_LEN, MAVLINK_MSG_ID_LEAF_PLANNER_DIAGNOSTICS_LEN, MAVLINK_MSG_ID_LEAF_PLANNER_DIAGNOSTICS_CRC);
#endif
}

#if MAVLINK_MSG_ID_LEAF_PLANNER_DIAGNOSTICS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_leaf_planner_diagnostics_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t boot_id, uint64_t sample_time_us, uint64_t solve_revision, uint64_t plan_revision, uint64_t solve_time_us, uint64_t leader_time_us, uint32_t candidates, uint32_t cache_hits, uint32_t search_nodes, float arrival_s, float residual_s, float length_m, float capture_error_m, float heading_error_deg, float capture_radius_m, float capture_heading_deg, float separation_m, float join_gap_m, float join_distance_limit_m, float join_separation_error_m, float join_separation_limit_m, float prediction_horizon_s, float leader_speed_mps, float follower_speed_mps, float route_progress_m, uint8_t prediction_model, uint8_t outcome, uint8_t flags, uint8_t family, uint8_t planner_state, uint8_t leader_system, uint8_t leader_component)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, boot_id);
    _mav_put_uint64_t(buf, 8, sample_time_us);
    _mav_put_uint64_t(buf, 16, solve_revision);
    _mav_put_uint64_t(buf, 24, plan_revision);
    _mav_put_uint64_t(buf, 32, solve_time_us);
    _mav_put_uint64_t(buf, 40, leader_time_us);
    _mav_put_uint32_t(buf, 48, candidates);
    _mav_put_uint32_t(buf, 52, cache_hits);
    _mav_put_uint32_t(buf, 56, search_nodes);
    _mav_put_float(buf, 60, arrival_s);
    _mav_put_float(buf, 64, residual_s);
    _mav_put_float(buf, 68, length_m);
    _mav_put_float(buf, 72, capture_error_m);
    _mav_put_float(buf, 76, heading_error_deg);
    _mav_put_float(buf, 80, capture_radius_m);
    _mav_put_float(buf, 84, capture_heading_deg);
    _mav_put_float(buf, 88, separation_m);
    _mav_put_float(buf, 92, join_gap_m);
    _mav_put_float(buf, 96, join_distance_limit_m);
    _mav_put_float(buf, 100, join_separation_error_m);
    _mav_put_float(buf, 104, join_separation_limit_m);
    _mav_put_float(buf, 108, prediction_horizon_s);
    _mav_put_float(buf, 112, leader_speed_mps);
    _mav_put_float(buf, 116, follower_speed_mps);
    _mav_put_float(buf, 120, route_progress_m);
    _mav_put_uint8_t(buf, 124, prediction_model);
    _mav_put_uint8_t(buf, 125, outcome);
    _mav_put_uint8_t(buf, 126, flags);
    _mav_put_uint8_t(buf, 127, family);
    _mav_put_uint8_t(buf, 128, planner_state);
    _mav_put_uint8_t(buf, 129, leader_system);
    _mav_put_uint8_t(buf, 130, leader_component);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_PLANNER_DIAGNOSTICS, buf, MAVLINK_MSG_ID_LEAF_PLANNER_DIAGNOSTICS_MIN_LEN, MAVLINK_MSG_ID_LEAF_PLANNER_DIAGNOSTICS_LEN, MAVLINK_MSG_ID_LEAF_PLANNER_DIAGNOSTICS_CRC);
#else
    mavlink_leaf_planner_diagnostics_t *packet = (mavlink_leaf_planner_diagnostics_t *)msgbuf;
    packet->boot_id = boot_id;
    packet->sample_time_us = sample_time_us;
    packet->solve_revision = solve_revision;
    packet->plan_revision = plan_revision;
    packet->solve_time_us = solve_time_us;
    packet->leader_time_us = leader_time_us;
    packet->candidates = candidates;
    packet->cache_hits = cache_hits;
    packet->search_nodes = search_nodes;
    packet->arrival_s = arrival_s;
    packet->residual_s = residual_s;
    packet->length_m = length_m;
    packet->capture_error_m = capture_error_m;
    packet->heading_error_deg = heading_error_deg;
    packet->capture_radius_m = capture_radius_m;
    packet->capture_heading_deg = capture_heading_deg;
    packet->separation_m = separation_m;
    packet->join_gap_m = join_gap_m;
    packet->join_distance_limit_m = join_distance_limit_m;
    packet->join_separation_error_m = join_separation_error_m;
    packet->join_separation_limit_m = join_separation_limit_m;
    packet->prediction_horizon_s = prediction_horizon_s;
    packet->leader_speed_mps = leader_speed_mps;
    packet->follower_speed_mps = follower_speed_mps;
    packet->route_progress_m = route_progress_m;
    packet->prediction_model = prediction_model;
    packet->outcome = outcome;
    packet->flags = flags;
    packet->family = family;
    packet->planner_state = planner_state;
    packet->leader_system = leader_system;
    packet->leader_component = leader_component;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LEAF_PLANNER_DIAGNOSTICS, (const char *)packet, MAVLINK_MSG_ID_LEAF_PLANNER_DIAGNOSTICS_MIN_LEN, MAVLINK_MSG_ID_LEAF_PLANNER_DIAGNOSTICS_LEN, MAVLINK_MSG_ID_LEAF_PLANNER_DIAGNOSTICS_CRC);
#endif
}
#endif

#endif

// MESSAGE LEAF_PLANNER_DIAGNOSTICS UNPACKING


/**
 * @brief Get field boot_id from leaf_planner_diagnostics message
 *
 * @return  Process incarnation.
 */
static inline uint64_t mavlink_msg_leaf_planner_diagnostics_get_boot_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field sample_time_us from leaf_planner_diagnostics message
 *
 * @return  Monotonic sample time, microseconds.
 */
static inline uint64_t mavlink_msg_leaf_planner_diagnostics_get_sample_time_us(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  8);
}

/**
 * @brief Get field solve_revision from leaf_planner_diagnostics message
 *
 * @return  Monotonic diagnostic revision.
 */
static inline uint64_t mavlink_msg_leaf_planner_diagnostics_get_solve_revision(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  16);
}

/**
 * @brief Get field plan_revision from leaf_planner_diagnostics message
 *
 * @return  Planner output revision.
 */
static inline uint64_t mavlink_msg_leaf_planner_diagnostics_get_plan_revision(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  24);
}

/**
 * @brief Get field solve_time_us from leaf_planner_diagnostics message
 *
 * @return  Monotonic solve epoch, microseconds.
 */
static inline uint64_t mavlink_msg_leaf_planner_diagnostics_get_solve_time_us(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  32);
}

/**
 * @brief Get field leader_time_us from leaf_planner_diagnostics message
 *
 * @return  FC receipt time of consumed leader observation.
 */
static inline uint64_t mavlink_msg_leaf_planner_diagnostics_get_leader_time_us(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  40);
}

/**
 * @brief Get field candidates from leaf_planner_diagnostics message
 *
 * @return  Solver candidates.
 */
static inline uint32_t mavlink_msg_leaf_planner_diagnostics_get_candidates(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  48);
}

/**
 * @brief Get field cache_hits from leaf_planner_diagnostics message
 *
 * @return  Solver cache hits.
 */
static inline uint32_t mavlink_msg_leaf_planner_diagnostics_get_cache_hits(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  52);
}

/**
 * @brief Get field search_nodes from leaf_planner_diagnostics message
 *
 * @return  Solver search nodes.
 */
static inline uint32_t mavlink_msg_leaf_planner_diagnostics_get_search_nodes(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  56);
}

/**
 * @brief Get field arrival_s from leaf_planner_diagnostics message
 *
 * @return  Candidate arrival time from solve epoch.
 */
static inline float mavlink_msg_leaf_planner_diagnostics_get_arrival_s(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  60);
}

/**
 * @brief Get field residual_s from leaf_planner_diagnostics message
 *
 * @return  Candidate timing residual.
 */
static inline float mavlink_msg_leaf_planner_diagnostics_get_residual_s(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  64);
}

/**
 * @brief Get field length_m from leaf_planner_diagnostics message
 *
 * @return  Candidate path length.
 */
static inline float mavlink_msg_leaf_planner_diagnostics_get_length_m(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  68);
}

/**
 * @brief Get field capture_error_m from leaf_planner_diagnostics message
 *
 * @return  Current distance to following slot.
 */
static inline float mavlink_msg_leaf_planner_diagnostics_get_capture_error_m(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  72);
}

/**
 * @brief Get field heading_error_deg from leaf_planner_diagnostics message
 *
 * @return  Current slot heading error.
 */
static inline float mavlink_msg_leaf_planner_diagnostics_get_heading_error_deg(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  76);
}

/**
 * @brief Get field capture_radius_m from leaf_planner_diagnostics message
 *
 * @return  Capture distance tolerance.
 */
static inline float mavlink_msg_leaf_planner_diagnostics_get_capture_radius_m(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  80);
}

/**
 * @brief Get field capture_heading_deg from leaf_planner_diagnostics message
 *
 * @return  Capture heading tolerance.
 */
static inline float mavlink_msg_leaf_planner_diagnostics_get_capture_heading_deg(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  84);
}

/**
 * @brief Get field separation_m from leaf_planner_diagnostics message
 *
 * @return  Requested separation at solve epoch.
 */
static inline float mavlink_msg_leaf_planner_diagnostics_get_separation_m(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  88);
}

/**
 * @brief Get field join_gap_m from leaf_planner_diagnostics message
 *
 * @return  Front join gap; NaN if unavailable.
 */
static inline float mavlink_msg_leaf_planner_diagnostics_get_join_gap_m(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  92);
}

/**
 * @brief Get field join_distance_limit_m from leaf_planner_diagnostics message
 *
 * @return  Front join distance limit; NaN if unavailable.
 */
static inline float mavlink_msg_leaf_planner_diagnostics_get_join_distance_limit_m(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  96);
}

/**
 * @brief Get field join_separation_error_m from leaf_planner_diagnostics message
 *
 * @return  Front join separation error; NaN if unavailable.
 */
static inline float mavlink_msg_leaf_planner_diagnostics_get_join_separation_error_m(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  100);
}

/**
 * @brief Get field join_separation_limit_m from leaf_planner_diagnostics message
 *
 * @return  Front join separation limit; NaN if unavailable.
 */
static inline float mavlink_msg_leaf_planner_diagnostics_get_join_separation_limit_m(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  104);
}

/**
 * @brief Get field prediction_horizon_s from leaf_planner_diagnostics message
 *
 * @return  Prediction horizon, seconds; prediction chunks contain the consumed observation then 32 evenly spaced forecast points from solve time.
 */
static inline float mavlink_msg_leaf_planner_diagnostics_get_prediction_horizon_s(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  108);
}

/**
 * @brief Get field leader_speed_mps from leaf_planner_diagnostics message
 *
 * @return  Prediction speed at solve time, metres per second.
 */
static inline float mavlink_msg_leaf_planner_diagnostics_get_leader_speed_mps(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  112);
}

/**
 * @brief Get field follower_speed_mps from leaf_planner_diagnostics message
 *
 * @return  Horizontal follower speed at solve time, metres per second.
 */
static inline float mavlink_msg_leaf_planner_diagnostics_get_follower_speed_mps(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  116);
}

/**
 * @brief Get field route_progress_m from leaf_planner_diagnostics message
 *
 * @return  Distance along the retained or accepted planner path, metres.
 */
static inline float mavlink_msg_leaf_planner_diagnostics_get_route_progress_m(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  120);
}

/**
 * @brief Get field prediction_model from leaf_planner_diagnostics message
 *
 * @return  0 linear, 1 quadratic, 2 circular.
 */
static inline uint8_t mavlink_msg_leaf_planner_diagnostics_get_prediction_model(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  124);
}

/**
 * @brief Get field outcome from leaf_planner_diagnostics message
 *
 * @return  0 unavailable, 1 accepted, 2 retained, 3 rejected, 4 chasing.
 */
static inline uint8_t mavlink_msg_leaf_planner_diagnostics_get_outcome(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  125);
}

/**
 * @brief Get field flags from leaf_planner_diagnostics message
 *
 * @return  Bit 0 candidate feasible, bit 1 budget exceeded, bit 2 capacity exceeded, bit 3 front approach.
 */
static inline uint8_t mavlink_msg_leaf_planner_diagnostics_get_flags(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  126);
}

/**
 * @brief Get field family from leaf_planner_diagnostics message
 *
 * @return  lfp Family.
 */
static inline uint8_t mavlink_msg_leaf_planner_diagnostics_get_family(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  127);
}

/**
 * @brief Get field planner_state from leaf_planner_diagnostics message
 *
 * @return  FollowingPlanState.
 */
static inline uint8_t mavlink_msg_leaf_planner_diagnostics_get_planner_state(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  128);
}

/**
 * @brief Get field leader_system from leaf_planner_diagnostics message
 *
 * @return  Actual configured leader system.
 */
static inline uint8_t mavlink_msg_leaf_planner_diagnostics_get_leader_system(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  129);
}

/**
 * @brief Get field leader_component from leaf_planner_diagnostics message
 *
 * @return  Actual configured leader component.
 */
static inline uint8_t mavlink_msg_leaf_planner_diagnostics_get_leader_component(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  130);
}

/**
 * @brief Decode a leaf_planner_diagnostics message into a struct
 *
 * @param msg The message to decode
 * @param leaf_planner_diagnostics C-struct to decode the message contents into
 */
static inline void mavlink_msg_leaf_planner_diagnostics_decode(const mavlink_message_t* msg, mavlink_leaf_planner_diagnostics_t* leaf_planner_diagnostics)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    leaf_planner_diagnostics->boot_id = mavlink_msg_leaf_planner_diagnostics_get_boot_id(msg);
    leaf_planner_diagnostics->sample_time_us = mavlink_msg_leaf_planner_diagnostics_get_sample_time_us(msg);
    leaf_planner_diagnostics->solve_revision = mavlink_msg_leaf_planner_diagnostics_get_solve_revision(msg);
    leaf_planner_diagnostics->plan_revision = mavlink_msg_leaf_planner_diagnostics_get_plan_revision(msg);
    leaf_planner_diagnostics->solve_time_us = mavlink_msg_leaf_planner_diagnostics_get_solve_time_us(msg);
    leaf_planner_diagnostics->leader_time_us = mavlink_msg_leaf_planner_diagnostics_get_leader_time_us(msg);
    leaf_planner_diagnostics->candidates = mavlink_msg_leaf_planner_diagnostics_get_candidates(msg);
    leaf_planner_diagnostics->cache_hits = mavlink_msg_leaf_planner_diagnostics_get_cache_hits(msg);
    leaf_planner_diagnostics->search_nodes = mavlink_msg_leaf_planner_diagnostics_get_search_nodes(msg);
    leaf_planner_diagnostics->arrival_s = mavlink_msg_leaf_planner_diagnostics_get_arrival_s(msg);
    leaf_planner_diagnostics->residual_s = mavlink_msg_leaf_planner_diagnostics_get_residual_s(msg);
    leaf_planner_diagnostics->length_m = mavlink_msg_leaf_planner_diagnostics_get_length_m(msg);
    leaf_planner_diagnostics->capture_error_m = mavlink_msg_leaf_planner_diagnostics_get_capture_error_m(msg);
    leaf_planner_diagnostics->heading_error_deg = mavlink_msg_leaf_planner_diagnostics_get_heading_error_deg(msg);
    leaf_planner_diagnostics->capture_radius_m = mavlink_msg_leaf_planner_diagnostics_get_capture_radius_m(msg);
    leaf_planner_diagnostics->capture_heading_deg = mavlink_msg_leaf_planner_diagnostics_get_capture_heading_deg(msg);
    leaf_planner_diagnostics->separation_m = mavlink_msg_leaf_planner_diagnostics_get_separation_m(msg);
    leaf_planner_diagnostics->join_gap_m = mavlink_msg_leaf_planner_diagnostics_get_join_gap_m(msg);
    leaf_planner_diagnostics->join_distance_limit_m = mavlink_msg_leaf_planner_diagnostics_get_join_distance_limit_m(msg);
    leaf_planner_diagnostics->join_separation_error_m = mavlink_msg_leaf_planner_diagnostics_get_join_separation_error_m(msg);
    leaf_planner_diagnostics->join_separation_limit_m = mavlink_msg_leaf_planner_diagnostics_get_join_separation_limit_m(msg);
    leaf_planner_diagnostics->prediction_horizon_s = mavlink_msg_leaf_planner_diagnostics_get_prediction_horizon_s(msg);
    leaf_planner_diagnostics->leader_speed_mps = mavlink_msg_leaf_planner_diagnostics_get_leader_speed_mps(msg);
    leaf_planner_diagnostics->follower_speed_mps = mavlink_msg_leaf_planner_diagnostics_get_follower_speed_mps(msg);
    leaf_planner_diagnostics->route_progress_m = mavlink_msg_leaf_planner_diagnostics_get_route_progress_m(msg);
    leaf_planner_diagnostics->prediction_model = mavlink_msg_leaf_planner_diagnostics_get_prediction_model(msg);
    leaf_planner_diagnostics->outcome = mavlink_msg_leaf_planner_diagnostics_get_outcome(msg);
    leaf_planner_diagnostics->flags = mavlink_msg_leaf_planner_diagnostics_get_flags(msg);
    leaf_planner_diagnostics->family = mavlink_msg_leaf_planner_diagnostics_get_family(msg);
    leaf_planner_diagnostics->planner_state = mavlink_msg_leaf_planner_diagnostics_get_planner_state(msg);
    leaf_planner_diagnostics->leader_system = mavlink_msg_leaf_planner_diagnostics_get_leader_system(msg);
    leaf_planner_diagnostics->leader_component = mavlink_msg_leaf_planner_diagnostics_get_leader_component(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_LEAF_PLANNER_DIAGNOSTICS_LEN? msg->len : MAVLINK_MSG_ID_LEAF_PLANNER_DIAGNOSTICS_LEN;
        memset(leaf_planner_diagnostics, 0, MAVLINK_MSG_ID_LEAF_PLANNER_DIAGNOSTICS_LEN);
    memcpy(leaf_planner_diagnostics, _MAV_PAYLOAD(msg), len);
#endif
}
