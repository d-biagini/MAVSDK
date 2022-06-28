#pragma once

#include "plugins/offboard_server/offboard_server.h"

#include "server_plugin_impl_base.h"


namespace mavsdk {


class OffboardServerImpl : public ServerPluginImplBase {
public:
    explicit OffboardServerImpl(std::shared_ptr<ServerComponent> server_component);

    ~OffboardServerImpl() override;

    void init() override;
    void deinit() override;

    void subscribe_position_target_global_setpoint(OffboardServer::PositionTargetGlobalSetpointCallback callback);
    void process_position_target_global_int(const mavlink_message_t& message);

private:
    OffboardServer::PositionTargetGlobalSetpointCallback _position_target_callback = nullptr;
};

} // namespace mavsdk