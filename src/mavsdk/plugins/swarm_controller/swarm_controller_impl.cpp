#include "swarm_controller_impl.h"

namespace mavsdk {


SwarmControllerImpl::SwarmControllerImpl(System& system) : PluginImplBase(system)
{
    _parent->register_plugin(this);

    is_started = false;
    cur_position = nullptr;
}

SwarmControllerImpl::SwarmControllerImpl(std::shared_ptr<System> system) : PluginImplBase(std::move(system))
{
    _parent->register_plugin(this);
}


SwarmControllerImpl::~SwarmControllerImpl()
{

    _parent->unregister_plugin(this);

}

void SwarmControllerImpl::init() {}

void SwarmControllerImpl::deinit() {}

void SwarmControllerImpl::enable() {}

void SwarmControllerImpl::disable() {}

bool SwarmControllerImpl::start()
{
    if(cur_position) {
        is_started = true;
        return true;
    }

    return false;
}

bool SwarmControllerImpl::stop()
{
    is_started = false;
    cur_position = nullptr;

    return true;
}

bool SwarmControllerImpl::is_active()
{
    return is_started;
}

bool SwarmControllerImpl::set_position_global(PositionGlobalYaw position_global_yaw)
{
    cur_position = std::make_unique<PositionGlobalYaw>(position_global_yaw);
    return true;
}



} // namespace mavsdk