#include "offboard_server_impl.h"

namespace mavsdk {

OffboardServerImpl::OffboardServerImpl(std::shared_ptr<ServerComponent> server_component) :
    ServerPluginImplBase(server_component)
{
    _server_component_impl->register_plugin(this);
}

OffboardServerImpl::~OffboardServerImpl()
{
    _server_component_impl->unregister_plugin(this);
}

void OffboardServerImpl::init()
{
    _server_component_impl->register_mavlink_message_handler(
        MAVLINK_MSG_ID_SET_POSITION_TARGET_GLOBAL_INT,
        [this](const mavlink_message_t& message) { process_position_target_global_int(message); },
        this);
}

void OffboardServerImpl::deinit() {}

void OffboardServerImpl::subscribe_position_target_global_setpoint(
    OffboardServer::PositionTargetGlobalSetpointCallback callback)
{
    _position_target_callback = callback;
}

void OffboardServerImpl::process_position_target_global_int(const mavlink_message_t& message)
{
    mavlink_set_position_target_global_int_t global_position_message;
    mavlink_msg_set_position_target_global_int_decode(&message, &global_position_message);

    OffboardServer::PositionGlobalYaw position{0};

    position.lat_deg = global_position_message.lat_int;
    position.lon_deg = global_position_message.lon_int;
    // position.altitude_type =
    // (OffboardServer::PositionGlobalYaw::AltitudeType)global_position_message.coordinate_frame;
    position.alt_m = global_position_message.alt;
    position.yaw_deg = global_position_message.yaw;

    if (_server_component_impl->get_own_system_id() == global_position_message.target_system &&
        _server_component_impl->get_own_component_id() == global_position_message.target_component &&
        _position_target_callback != nullptr) {
            
        _position_target_callback(position);
    }
}

} // namespace mavsdk