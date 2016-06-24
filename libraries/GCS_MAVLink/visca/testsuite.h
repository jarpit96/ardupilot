/** @file
 *	@brief MAVLink comm protocol testsuite generated from visca.xml
 *	@see http://qgroundcontrol.org/mavlink/
 */
#ifndef VISCA_TESTSUITE_H
#define VISCA_TESTSUITE_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef MAVLINK_TEST_ALL
#define MAVLINK_TEST_ALL
static void mavlink_test_common(uint8_t, uint8_t, mavlink_message_t *last_msg);
static void mavlink_test_visca(uint8_t, uint8_t, mavlink_message_t *last_msg);

static void mavlink_test_all(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_test_common(system_id, component_id, last_msg);
	mavlink_test_visca(system_id, component_id, last_msg);
}
#endif

#include "../common/testsuite.h"


static void mavlink_test_visca(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_visca_t packet_in = {
		17235,17339,17443,17547,17651,17755,17859
    };
	mavlink_visca_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.OZOOM_VISCA = packet_in.OZOOM_VISCA;
        	packet1.DZOOM_VISCA = packet_in.DZOOM_VISCA;
        	packet1.SHUTTER_VISCA = packet_in.SHUTTER_VISCA;
        	packet1.APERTURE_VISCA = packet_in.APERTURE_VISCA;
        	packet1.FOCUS_VISCA = packet_in.FOCUS_VISCA;
        	packet1.EXPOSURE_VISCA = packet_in.EXPOSURE_VISCA;
        	packet1.IRIS_VISCA = packet_in.IRIS_VISCA;
        
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_visca_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_visca_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_visca_pack(system_id, component_id, &msg , packet1.OZOOM_VISCA , packet1.DZOOM_VISCA , packet1.SHUTTER_VISCA , packet1.APERTURE_VISCA , packet1.FOCUS_VISCA , packet1.EXPOSURE_VISCA , packet1.IRIS_VISCA );
	mavlink_msg_visca_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_visca_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.OZOOM_VISCA , packet1.DZOOM_VISCA , packet1.SHUTTER_VISCA , packet1.APERTURE_VISCA , packet1.FOCUS_VISCA , packet1.EXPOSURE_VISCA , packet1.IRIS_VISCA );
	mavlink_msg_visca_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_visca_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_visca_send(MAVLINK_COMM_1 , packet1.OZOOM_VISCA , packet1.DZOOM_VISCA , packet1.SHUTTER_VISCA , packet1.APERTURE_VISCA , packet1.FOCUS_VISCA , packet1.EXPOSURE_VISCA , packet1.IRIS_VISCA );
	mavlink_msg_visca_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_visca(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_test_visca(system_id, component_id, last_msg);
}

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // VISCA_TESTSUITE_H
