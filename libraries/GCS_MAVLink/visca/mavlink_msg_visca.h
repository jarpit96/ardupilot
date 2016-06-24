// MESSAGE VISCA PACKING

#define MAVLINK_MSG_ID_VISCA 156

typedef struct __mavlink_visca_t
{
 int16_t OZOOM_VISCA; ///< 
 int16_t DZOOM_VISCA; ///< 
 int16_t SHUTTER_VISCA; ///< 
 int16_t APERTURE_VISCA; ///< 
 int16_t FOCUS_VISCA; ///< 
 int16_t EXPOSURE_VISCA; ///< 
 int16_t IRIS_VISCA; ///< 
} mavlink_visca_t;

#define MAVLINK_MSG_ID_VISCA_LEN 14
#define MAVLINK_MSG_ID_156_LEN 14

#define MAVLINK_MSG_ID_VISCA_CRC 125
#define MAVLINK_MSG_ID_156_CRC 125



#define MAVLINK_MESSAGE_INFO_VISCA { \
	"VISCA", \
	7, \
	{  { "OZOOM_VISCA", NULL, MAVLINK_TYPE_INT16_T, 0, 0, offsetof(mavlink_visca_t, OZOOM_VISCA) }, \
         { "DZOOM_VISCA", NULL, MAVLINK_TYPE_INT16_T, 0, 2, offsetof(mavlink_visca_t, DZOOM_VISCA) }, \
         { "SHUTTER_VISCA", NULL, MAVLINK_TYPE_INT16_T, 0, 4, offsetof(mavlink_visca_t, SHUTTER_VISCA) }, \
         { "APERTURE_VISCA", NULL, MAVLINK_TYPE_INT16_T, 0, 6, offsetof(mavlink_visca_t, APERTURE_VISCA) }, \
         { "FOCUS_VISCA", NULL, MAVLINK_TYPE_INT16_T, 0, 8, offsetof(mavlink_visca_t, FOCUS_VISCA) }, \
         { "EXPOSURE_VISCA", NULL, MAVLINK_TYPE_INT16_T, 0, 10, offsetof(mavlink_visca_t, EXPOSURE_VISCA) }, \
         { "IRIS_VISCA", NULL, MAVLINK_TYPE_INT16_T, 0, 12, offsetof(mavlink_visca_t, IRIS_VISCA) }, \
         } \
}


/**
 * @brief Pack a visca message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param OZOOM_VISCA 
 * @param DZOOM_VISCA 
 * @param SHUTTER_VISCA 
 * @param APERTURE_VISCA 
 * @param FOCUS_VISCA 
 * @param EXPOSURE_VISCA 
 * @param IRIS_VISCA 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_visca_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       int16_t OZOOM_VISCA, int16_t DZOOM_VISCA, int16_t SHUTTER_VISCA, int16_t APERTURE_VISCA, int16_t FOCUS_VISCA, int16_t EXPOSURE_VISCA, int16_t IRIS_VISCA)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_VISCA_LEN];
	_mav_put_int16_t(buf, 0, OZOOM_VISCA);
	_mav_put_int16_t(buf, 2, DZOOM_VISCA);
	_mav_put_int16_t(buf, 4, SHUTTER_VISCA);
	_mav_put_int16_t(buf, 6, APERTURE_VISCA);
	_mav_put_int16_t(buf, 8, FOCUS_VISCA);
	_mav_put_int16_t(buf, 10, EXPOSURE_VISCA);
	_mav_put_int16_t(buf, 12, IRIS_VISCA);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_VISCA_LEN);
#else
	mavlink_visca_t packet;
	packet.OZOOM_VISCA = OZOOM_VISCA;
	packet.DZOOM_VISCA = DZOOM_VISCA;
	packet.SHUTTER_VISCA = SHUTTER_VISCA;
	packet.APERTURE_VISCA = APERTURE_VISCA;
	packet.FOCUS_VISCA = FOCUS_VISCA;
	packet.EXPOSURE_VISCA = EXPOSURE_VISCA;
	packet.IRIS_VISCA = IRIS_VISCA;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_VISCA_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_VISCA;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_VISCA_LEN, MAVLINK_MSG_ID_VISCA_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_VISCA_LEN);
#endif
}

/**
 * @brief Pack a visca message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param OZOOM_VISCA 
 * @param DZOOM_VISCA 
 * @param SHUTTER_VISCA 
 * @param APERTURE_VISCA 
 * @param FOCUS_VISCA 
 * @param EXPOSURE_VISCA 
 * @param IRIS_VISCA 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_visca_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           int16_t OZOOM_VISCA,int16_t DZOOM_VISCA,int16_t SHUTTER_VISCA,int16_t APERTURE_VISCA,int16_t FOCUS_VISCA,int16_t EXPOSURE_VISCA,int16_t IRIS_VISCA)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_VISCA_LEN];
	_mav_put_int16_t(buf, 0, OZOOM_VISCA);
	_mav_put_int16_t(buf, 2, DZOOM_VISCA);
	_mav_put_int16_t(buf, 4, SHUTTER_VISCA);
	_mav_put_int16_t(buf, 6, APERTURE_VISCA);
	_mav_put_int16_t(buf, 8, FOCUS_VISCA);
	_mav_put_int16_t(buf, 10, EXPOSURE_VISCA);
	_mav_put_int16_t(buf, 12, IRIS_VISCA);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_VISCA_LEN);
#else
	mavlink_visca_t packet;
	packet.OZOOM_VISCA = OZOOM_VISCA;
	packet.DZOOM_VISCA = DZOOM_VISCA;
	packet.SHUTTER_VISCA = SHUTTER_VISCA;
	packet.APERTURE_VISCA = APERTURE_VISCA;
	packet.FOCUS_VISCA = FOCUS_VISCA;
	packet.EXPOSURE_VISCA = EXPOSURE_VISCA;
	packet.IRIS_VISCA = IRIS_VISCA;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_VISCA_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_VISCA;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_VISCA_LEN, MAVLINK_MSG_ID_VISCA_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_VISCA_LEN);
#endif
}

/**
 * @brief Encode a visca struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param visca C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_visca_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_visca_t* visca)
{
	return mavlink_msg_visca_pack(system_id, component_id, msg, visca->OZOOM_VISCA, visca->DZOOM_VISCA, visca->SHUTTER_VISCA, visca->APERTURE_VISCA, visca->FOCUS_VISCA, visca->EXPOSURE_VISCA, visca->IRIS_VISCA);
}

/**
 * @brief Encode a visca struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param visca C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_visca_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_visca_t* visca)
{
	return mavlink_msg_visca_pack_chan(system_id, component_id, chan, msg, visca->OZOOM_VISCA, visca->DZOOM_VISCA, visca->SHUTTER_VISCA, visca->APERTURE_VISCA, visca->FOCUS_VISCA, visca->EXPOSURE_VISCA, visca->IRIS_VISCA);
}

/**
 * @brief Send a visca message
 * @param chan MAVLink channel to send the message
 *
 * @param OZOOM_VISCA 
 * @param DZOOM_VISCA 
 * @param SHUTTER_VISCA 
 * @param APERTURE_VISCA 
 * @param FOCUS_VISCA 
 * @param EXPOSURE_VISCA 
 * @param IRIS_VISCA 
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_visca_send(mavlink_channel_t chan, int16_t OZOOM_VISCA, int16_t DZOOM_VISCA, int16_t SHUTTER_VISCA, int16_t APERTURE_VISCA, int16_t FOCUS_VISCA, int16_t EXPOSURE_VISCA, int16_t IRIS_VISCA)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_VISCA_LEN];
	_mav_put_int16_t(buf, 0, OZOOM_VISCA);
	_mav_put_int16_t(buf, 2, DZOOM_VISCA);
	_mav_put_int16_t(buf, 4, SHUTTER_VISCA);
	_mav_put_int16_t(buf, 6, APERTURE_VISCA);
	_mav_put_int16_t(buf, 8, FOCUS_VISCA);
	_mav_put_int16_t(buf, 10, EXPOSURE_VISCA);
	_mav_put_int16_t(buf, 12, IRIS_VISCA);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VISCA, buf, MAVLINK_MSG_ID_VISCA_LEN, MAVLINK_MSG_ID_VISCA_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VISCA, buf, MAVLINK_MSG_ID_VISCA_LEN);
#endif
#else
	mavlink_visca_t packet;
	packet.OZOOM_VISCA = OZOOM_VISCA;
	packet.DZOOM_VISCA = DZOOM_VISCA;
	packet.SHUTTER_VISCA = SHUTTER_VISCA;
	packet.APERTURE_VISCA = APERTURE_VISCA;
	packet.FOCUS_VISCA = FOCUS_VISCA;
	packet.EXPOSURE_VISCA = EXPOSURE_VISCA;
	packet.IRIS_VISCA = IRIS_VISCA;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VISCA, (const char *)&packet, MAVLINK_MSG_ID_VISCA_LEN, MAVLINK_MSG_ID_VISCA_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VISCA, (const char *)&packet, MAVLINK_MSG_ID_VISCA_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_VISCA_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_visca_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  int16_t OZOOM_VISCA, int16_t DZOOM_VISCA, int16_t SHUTTER_VISCA, int16_t APERTURE_VISCA, int16_t FOCUS_VISCA, int16_t EXPOSURE_VISCA, int16_t IRIS_VISCA)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_int16_t(buf, 0, OZOOM_VISCA);
	_mav_put_int16_t(buf, 2, DZOOM_VISCA);
	_mav_put_int16_t(buf, 4, SHUTTER_VISCA);
	_mav_put_int16_t(buf, 6, APERTURE_VISCA);
	_mav_put_int16_t(buf, 8, FOCUS_VISCA);
	_mav_put_int16_t(buf, 10, EXPOSURE_VISCA);
	_mav_put_int16_t(buf, 12, IRIS_VISCA);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VISCA, buf, MAVLINK_MSG_ID_VISCA_LEN, MAVLINK_MSG_ID_VISCA_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VISCA, buf, MAVLINK_MSG_ID_VISCA_LEN);
#endif
#else
	mavlink_visca_t *packet = (mavlink_visca_t *)msgbuf;
	packet->OZOOM_VISCA = OZOOM_VISCA;
	packet->DZOOM_VISCA = DZOOM_VISCA;
	packet->SHUTTER_VISCA = SHUTTER_VISCA;
	packet->APERTURE_VISCA = APERTURE_VISCA;
	packet->FOCUS_VISCA = FOCUS_VISCA;
	packet->EXPOSURE_VISCA = EXPOSURE_VISCA;
	packet->IRIS_VISCA = IRIS_VISCA;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VISCA, (const char *)packet, MAVLINK_MSG_ID_VISCA_LEN, MAVLINK_MSG_ID_VISCA_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VISCA, (const char *)packet, MAVLINK_MSG_ID_VISCA_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE VISCA UNPACKING


/**
 * @brief Get field OZOOM_VISCA from visca message
 *
 * @return 
 */
static inline int16_t mavlink_msg_visca_get_OZOOM_VISCA(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  0);
}

/**
 * @brief Get field DZOOM_VISCA from visca message
 *
 * @return 
 */
static inline int16_t mavlink_msg_visca_get_DZOOM_VISCA(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  2);
}

/**
 * @brief Get field SHUTTER_VISCA from visca message
 *
 * @return 
 */
static inline int16_t mavlink_msg_visca_get_SHUTTER_VISCA(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  4);
}

/**
 * @brief Get field APERTURE_VISCA from visca message
 *
 * @return 
 */
static inline int16_t mavlink_msg_visca_get_APERTURE_VISCA(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  6);
}

/**
 * @brief Get field FOCUS_VISCA from visca message
 *
 * @return 
 */
static inline int16_t mavlink_msg_visca_get_FOCUS_VISCA(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  8);
}

/**
 * @brief Get field EXPOSURE_VISCA from visca message
 *
 * @return 
 */
static inline int16_t mavlink_msg_visca_get_EXPOSURE_VISCA(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  10);
}

/**
 * @brief Get field IRIS_VISCA from visca message
 *
 * @return 
 */
static inline int16_t mavlink_msg_visca_get_IRIS_VISCA(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  12);
}

/**
 * @brief Decode a visca message into a struct
 *
 * @param msg The message to decode
 * @param visca C-struct to decode the message contents into
 */
static inline void mavlink_msg_visca_decode(const mavlink_message_t* msg, mavlink_visca_t* visca)
{
#if MAVLINK_NEED_BYTE_SWAP
	visca->OZOOM_VISCA = mavlink_msg_visca_get_OZOOM_VISCA(msg);
	visca->DZOOM_VISCA = mavlink_msg_visca_get_DZOOM_VISCA(msg);
	visca->SHUTTER_VISCA = mavlink_msg_visca_get_SHUTTER_VISCA(msg);
	visca->APERTURE_VISCA = mavlink_msg_visca_get_APERTURE_VISCA(msg);
	visca->FOCUS_VISCA = mavlink_msg_visca_get_FOCUS_VISCA(msg);
	visca->EXPOSURE_VISCA = mavlink_msg_visca_get_EXPOSURE_VISCA(msg);
	visca->IRIS_VISCA = mavlink_msg_visca_get_IRIS_VISCA(msg);
#else
	memcpy(visca, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_VISCA_LEN);
#endif
}
