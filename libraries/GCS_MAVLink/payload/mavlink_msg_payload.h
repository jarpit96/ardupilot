// MESSAGE PAYLOAD PACKING

#define MAVLINK_MSG_ID_PAYLOAD 185

typedef struct __mavlink_payload_t
{
 int32_t pd_lat; ///< 
 int32_t pd_long; ///< 
 int8_t pd_rad; ///< 
} mavlink_payload_t;

#define MAVLINK_MSG_ID_PAYLOAD_LEN 9
#define MAVLINK_MSG_ID_185_LEN 9

#define MAVLINK_MSG_ID_PAYLOAD_CRC 46
#define MAVLINK_MSG_ID_185_CRC 46



#define MAVLINK_MESSAGE_INFO_PAYLOAD { \
	"PAYLOAD", \
	3, \
	{  { "pd_lat", NULL, MAVLINK_TYPE_INT32_T, 0, 0, offsetof(mavlink_payload_t, pd_lat) }, \
         { "pd_long", NULL, MAVLINK_TYPE_INT32_T, 0, 4, offsetof(mavlink_payload_t, pd_long) }, \
         { "pd_rad", NULL, MAVLINK_TYPE_INT8_T, 0, 8, offsetof(mavlink_payload_t, pd_rad) }, \
         } \
}


/**
 * @brief Pack a payload message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param pd_lat 
 * @param pd_long 
 * @param pd_rad 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_payload_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       int32_t pd_lat, int32_t pd_long, int8_t pd_rad)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_PAYLOAD_LEN];
	_mav_put_int32_t(buf, 0, pd_lat);
	_mav_put_int32_t(buf, 4, pd_long);
	_mav_put_int8_t(buf, 8, pd_rad);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_PAYLOAD_LEN);
#else
	mavlink_payload_t packet;
	packet.pd_lat = pd_lat;
	packet.pd_long = pd_long;
	packet.pd_rad = pd_rad;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_PAYLOAD_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_PAYLOAD;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_PAYLOAD_LEN, MAVLINK_MSG_ID_PAYLOAD_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_PAYLOAD_LEN);
#endif
}

/**
 * @brief Pack a payload message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param pd_lat 
 * @param pd_long 
 * @param pd_rad 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_payload_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           int32_t pd_lat,int32_t pd_long,int8_t pd_rad)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_PAYLOAD_LEN];
	_mav_put_int32_t(buf, 0, pd_lat);
	_mav_put_int32_t(buf, 4, pd_long);
	_mav_put_int8_t(buf, 8, pd_rad);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_PAYLOAD_LEN);
#else
	mavlink_payload_t packet;
	packet.pd_lat = pd_lat;
	packet.pd_long = pd_long;
	packet.pd_rad = pd_rad;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_PAYLOAD_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_PAYLOAD;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_PAYLOAD_LEN, MAVLINK_MSG_ID_PAYLOAD_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_PAYLOAD_LEN);
#endif
}

/**
 * @brief Encode a payload struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param payload C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_payload_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_payload_t* payload)
{
	return mavlink_msg_payload_pack(system_id, component_id, msg, payload->pd_lat, payload->pd_long, payload->pd_rad);
}

/**
 * @brief Encode a payload struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param payload C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_payload_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_payload_t* payload)
{
	return mavlink_msg_payload_pack_chan(system_id, component_id, chan, msg, payload->pd_lat, payload->pd_long, payload->pd_rad);
}

/**
 * @brief Send a payload message
 * @param chan MAVLink channel to send the message
 *
 * @param pd_lat 
 * @param pd_long 
 * @param pd_rad 
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_payload_send(mavlink_channel_t chan, int32_t pd_lat, int32_t pd_long, int8_t pd_rad)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_PAYLOAD_LEN];
	_mav_put_int32_t(buf, 0, pd_lat);
	_mav_put_int32_t(buf, 4, pd_long);
	_mav_put_int8_t(buf, 8, pd_rad);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PAYLOAD, buf, MAVLINK_MSG_ID_PAYLOAD_LEN, MAVLINK_MSG_ID_PAYLOAD_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PAYLOAD, buf, MAVLINK_MSG_ID_PAYLOAD_LEN);
#endif
#else
	mavlink_payload_t packet;
	packet.pd_lat = pd_lat;
	packet.pd_long = pd_long;
	packet.pd_rad = pd_rad;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PAYLOAD, (const char *)&packet, MAVLINK_MSG_ID_PAYLOAD_LEN, MAVLINK_MSG_ID_PAYLOAD_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PAYLOAD, (const char *)&packet, MAVLINK_MSG_ID_PAYLOAD_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_PAYLOAD_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_payload_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  int32_t pd_lat, int32_t pd_long, int8_t pd_rad)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_int32_t(buf, 0, pd_lat);
	_mav_put_int32_t(buf, 4, pd_long);
	_mav_put_int8_t(buf, 8, pd_rad);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PAYLOAD, buf, MAVLINK_MSG_ID_PAYLOAD_LEN, MAVLINK_MSG_ID_PAYLOAD_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PAYLOAD, buf, MAVLINK_MSG_ID_PAYLOAD_LEN);
#endif
#else
	mavlink_payload_t *packet = (mavlink_payload_t *)msgbuf;
	packet->pd_lat = pd_lat;
	packet->pd_long = pd_long;
	packet->pd_rad = pd_rad;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PAYLOAD, (const char *)packet, MAVLINK_MSG_ID_PAYLOAD_LEN, MAVLINK_MSG_ID_PAYLOAD_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PAYLOAD, (const char *)packet, MAVLINK_MSG_ID_PAYLOAD_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE PAYLOAD UNPACKING


/**
 * @brief Get field pd_lat from payload message
 *
 * @return 
 */
static inline int32_t mavlink_msg_payload_get_pd_lat(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int32_t(msg,  0);
}

/**
 * @brief Get field pd_long from payload message
 *
 * @return 
 */
static inline int32_t mavlink_msg_payload_get_pd_long(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int32_t(msg,  4);
}

/**
 * @brief Get field pd_rad from payload message
 *
 * @return 
 */
static inline int8_t mavlink_msg_payload_get_pd_rad(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int8_t(msg,  8);
}

/**
 * @brief Decode a payload message into a struct
 *
 * @param msg The message to decode
 * @param payload C-struct to decode the message contents into
 */
static inline void mavlink_msg_payload_decode(const mavlink_message_t* msg, mavlink_payload_t* payload)
{
#if MAVLINK_NEED_BYTE_SWAP
	payload->pd_lat = mavlink_msg_payload_get_pd_lat(msg);
	payload->pd_long = mavlink_msg_payload_get_pd_long(msg);
	payload->pd_rad = mavlink_msg_payload_get_pd_rad(msg);
#else
	memcpy(payload, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_PAYLOAD_LEN);
#endif
}
