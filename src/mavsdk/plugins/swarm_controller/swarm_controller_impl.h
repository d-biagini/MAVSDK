#pragma once

#include "plugins/swarm_controller/swarm_controller.h"

#include "plugin_impl_base.h"


namespace mavsdk {


class SwarmControllerImpl : public PluginImplBase {
public:
    explicit SwarmControllerImpl(System& system);
    explicit SwarmControllerImpl(std::shared_ptr<System> system);

    ~SwarmControllerImpl() override;

    void init() override;
    void deinit() override;

    bool start();
    bool stop();

    bool is_active();

    bool set_position_global(PositionGlobalYaw position_global_yaw);

private:
    std::unique_ptr<PositionGlobalYaw> cur_position;

    bool is_started;
};

} // namespace mavsdk