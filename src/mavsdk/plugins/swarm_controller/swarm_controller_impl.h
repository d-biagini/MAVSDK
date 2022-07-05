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

    void set_rate(float period);
    void set_target_component_id(int32_t target_component_id);
    bool set_position_global(SwarmController::PositionGlobalYaw position_global_yaw);

private:
    std::unique_ptr<SwarmController::PositionGlobalYaw> cur_position;
    void* _call_every_cookie = nullptr;

    bool is_started = false;
    float _period = 0.05f;
    char _target_component_id = 0;

    void _send_position_global();
};

} // namespace mavsdk