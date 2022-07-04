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

    void enable() override;
    void disable() override;

    bool start();

    bool stop();

    bool is_active();

    void set_rate(float frequency);

    bool set_position_global(SwarmController::PositionGlobalYaw position_global_yaw);

private:
    std::unique_ptr<SwarmController::PositionGlobalYaw> cur_position;

    bool is_started;
};

} // namespace mavsdk