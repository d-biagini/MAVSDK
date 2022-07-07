//
// Simple example to demonstrate how takeoff and land using MAVSDK.
//

#include <chrono>
#include <cstdint>
#include <mavsdk/mavsdk.h>
#include <mavsdk/plugins/swarm_controller/swarm_controller.h>
#include <iostream>
#include <future>
#include <memory>
#include <thread>

using namespace mavsdk;
using std::chrono::seconds;
using std::this_thread::sleep_for;

void usage(const std::string& bin_name)
{
    std::cerr << "Usage : " << bin_name << " <connection_url>\n"
              << "Connection URL format should be :\n"
              << " For TCP : tcp://[server_host][:server_port]\n"
              << " For UDP : udp://[bind_host][:bind_port]\n"
              << " For Serial : serial:///path/to/serial/dev[:baudrate]\n"
              << "For example, to connect to the simulator use URL: udp://:14540\n";
}

std::shared_ptr<System> get_system(Mavsdk& mavsdk)
{
    std::cout << "Waiting to discover system...\n";
    auto prom = std::promise<std::shared_ptr<System>>{};
    auto fut = prom.get_future();

    // We wait for new systems to be discovered, once we find one that has an
    // autopilot, we decide to use it.
    mavsdk.subscribe_on_new_system([&mavsdk, &prom]() {
        auto system = mavsdk.systems().back();

        mavsdk.subscribe_on_new_system(nullptr);
        prom.set_value(system);
    });

    // We usually receive heartbeats at 1Hz, therefore we should find a
    // system after around 3 seconds max, surely.
    if (fut.wait_for(seconds(3)) == std::future_status::timeout) {
        std::cerr << "No sending system found.\n";
        return {};
    }

    // Get discovered system now.
    return fut.get();
}

int main(int argc, char** argv)
{
    if (argc != 2) {
        usage(argv[0]);
        return 1;
    }

    Mavsdk mavsdk;
    mavsdk.set_configuration(Mavsdk::Configuration(10, 190, true));

    ConnectionResult connection_result = mavsdk.add_any_connection(argv[1]);

    if (connection_result != ConnectionResult::Success) {
        std::cerr << "Connection failed: " << connection_result << '\n';
        return 1;
    }
    
    auto system = get_system(mavsdk);
    
    if(!system) {
        return -1;
    }

    auto swarm_controller = SwarmController{system};

    swarm_controller.set_target_component_id(190);
    swarm_controller.set_rate(0.05);
    
    SwarmController::PositionGlobalYaw position{0};

    position.lat_deg = 100.0f;
    position.lon_deg = 200.0f;
    position.altitude_type = SwarmController::PositionGlobalYaw::AltitudeType::RelHome;
    position.alt_m = 20;
    position.yaw_deg = 250.0f;

    swarm_controller.set_position_global(position);

    if(!swarm_controller.start()) {
        std::cerr << "Unable to start swarm controller (system id:" << system->get_system_id() << ")";
    }

    while (true) {
        sleep_for(std::chrono::milliseconds(100));
    }

    return 0;
}
