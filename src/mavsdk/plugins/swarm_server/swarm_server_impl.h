#pragma once

#include "plugins/swarm_server/swarm_server.h"

#include "server_plugin_impl_base.h"


namespace mavsdk {


class SwarmServerImpl : public ServerPluginImplBase {
public:
    explicit SwarmServerImpl(std::shared_ptr<ServerComponent> server_component);

    ~SwarmServerImpl() override;

    void init() override;
    void deinit() override;

    void subscribe_position_target_global_setpoint(SwarmServer::PositionTargetGlobalSetpointCallback callback);
    void process_position_target_global_int(const mavlink_message_t& message);

private:
    SwarmServer::PositionTargetGlobalSetpointCallback _position_target_callback = nullptr;
};

} // namespace mavsdk