#include "swarm_controller_impl.h"
#include "mavsdk_math.h"

namespace mavsdk {

SwarmControllerImpl::SwarmControllerImpl(System& system) : PluginImplBase(system)
{
    _parent->register_plugin(this);

    is_started = false;
    cur_position = nullptr;
}

SwarmControllerImpl::SwarmControllerImpl(std::shared_ptr<System> system) :
    PluginImplBase(std::move(system))
{
    _parent->register_plugin(this);
}

SwarmControllerImpl::~SwarmControllerImpl()
{
    _parent->unregister_plugin(this);
}

void SwarmControllerImpl::init() {}

void SwarmControllerImpl::deinit() {
    if(_call_every_cookie != nullptr) {
        _parent->remove_call_every(_call_every_cookie);
        
        _call_every_cookie = nullptr;
        cur_position = nullptr;
    }
}

void SwarmControllerImpl::enable() {}

void SwarmControllerImpl::disable() {}

bool SwarmControllerImpl::start()
{
    if (cur_position && _target_component_id != 0) {
        is_started = true;

        _parent->add_call_every(
            [this]() { _send_position_global(); }, _period, &_call_every_cookie);
        return true;
    }

    return false;
}

bool SwarmControllerImpl::stop()
{
    is_started = false;

    _parent->remove_call_every(_call_every_cookie);

    _call_every_cookie = nullptr;
    cur_position = nullptr;

    return true;
}

bool SwarmControllerImpl::is_active()
{
    return is_started;
}

void SwarmControllerImpl::set_rate(float period)
{
    _period = period;

    if (is_started) {
        _parent->remove_call_every(_call_every_cookie);
        _call_every_cookie = nullptr;

        _parent->add_call_every(
            [this]() { _send_position_global(); }, _period, &_call_every_cookie);
    }
}

void SwarmControllerImpl::set_target_component_id(int32_t target_component_id)
{
    if (target_component_id != 0) {
        _target_component_id = target_component_id;
    }
}

bool SwarmControllerImpl::set_position_global(
    SwarmController::PositionGlobalYaw position_global_yaw)
{
    cur_position = std::make_unique<SwarmController::PositionGlobalYaw>(position_global_yaw);
    return true;
}

void SwarmControllerImpl::_send_position_global()
{
    const static uint16_t IGNORE_VX = (1 << 3);
    const static uint16_t IGNORE_VY = (1 << 4);
    const static uint16_t IGNORE_VZ = (1 << 5);
    const static uint16_t IGNORE_AX = (1 << 6);
    const static uint16_t IGNORE_AY = (1 << 7);
    const static uint16_t IGNORE_AZ = (1 << 8);
    const static uint16_t IGNORE_YAW_RATE = (1 << 11);

    // Se la posizione non è inizializzata, non inviare nulla
    if (!cur_position) {
        return;
    }

    mavlink_message_t message;
    mavlink_msg_set_position_target_global_int_pack(
        _parent->get_own_system_id(),
        _parent->get_own_component_id(),
        &message,
        static_cast<uint32_t>(_parent->get_time().elapsed_ms()),
        _parent->get_system_id(),
        _target_component_id,
        MAV_FRAME_GLOBAL_INT,
        IGNORE_VX | IGNORE_VY | IGNORE_VZ | IGNORE_AX | IGNORE_AY | IGNORE_AZ | IGNORE_YAW_RATE,
        (int32_t)(cur_position->lat_deg * 1.0e7),
        (int32_t)(cur_position->lon_deg * 1.0e7),
        cur_position->alt_m,
        0.0f, // vx
        0.0f, // vy
        0.0f, // vz
        0.0f, // afx
        0.0f, // afy
        0.0f, // afz
        to_rad_from_deg(cur_position->yaw_deg), // yaw
        0.0f); // yaw_rate

    _parent->send_message(message);
}

} // namespace mavsdk