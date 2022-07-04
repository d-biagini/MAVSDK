// WARNING: THIS FILE IS AUTOGENERATED! As such, it should not be edited.
// Edits need to be made to the proto files
// (see
// https://github.com/mavlink/MAVSDK-Proto/blob/main/protos/swarm_controller/swarm_controller.proto)

#pragma once

#include <array>
#include <cmath>
#include <functional>
#include <limits>
#include <memory>
#include <string>
#include <utility>
#include <vector>

#include "mavsdk/plugin_base.h"

namespace mavsdk {

class System;
class SwarmControllerImpl;

/**
 * @brief
 */
class SwarmController : public PluginBase {
public:
    /**
     * @brief Constructor. Creates the plugin for a specific System.
     *
     * The plugin is typically created as shown below:
     *
     *     ```cpp
     *     auto swarm_controller = SwarmController(system);
     *     ```
     *
     * @param system The specific system associated with this plugin.
     */
    explicit SwarmController(System& system); // deprecated

    /**
     * @brief Constructor. Creates the plugin for a specific System.
     *
     * The plugin is typically created as shown below:
     *
     *     ```cpp
     *     auto swarm_controller = SwarmController(system);
     *     ```
     *
     * @param system The specific system associated with this plugin.
     */
    explicit SwarmController(std::shared_ptr<System> system); // new

    /**
     * @brief Destructor (internal use only).
     */
    ~SwarmController() override;

    /**
     * @brief
     */
    struct PositionGlobalYaw {
        /**
         * @brief Possible altitude options
         */
        enum class AltitudeType {
            RelHome, /**< @brief Altitude relative to the Home position. */
            Amsl, /**< @brief Altitude above mean sea level (AMSL). */
            Agl, /**< @brief Altitude above ground level (AGL). */
        };

        /**
         * @brief Stream operator to print information about a `SwarmController::AltitudeType`.
         *
         * @return A reference to the stream.
         */
        friend std::ostream& operator<<(
            std::ostream& str,
            SwarmController::PositionGlobalYaw::AltitudeType const& altitude_type);

        double lat_deg{}; /**< @brief Latitude (in degrees) */
        double lon_deg{}; /**< @brief Longitude (in degrees) */
        float alt_m{}; /**< @brief altitude (in metres) */
        float yaw_deg{}; /**< @brief Yaw in degrees (0 North, positive is clock-wise looking from
                            above) */
        AltitudeType altitude_type{}; /**< @brief altitude type for this position */
    };

    /**
     * @brief Equal operator to compare two `SwarmController::PositionGlobalYaw` objects.
     *
     * @return `true` if items are equal.
     */
    friend bool operator==(
        const SwarmController::PositionGlobalYaw& lhs,
        const SwarmController::PositionGlobalYaw& rhs);

    /**
     * @brief Stream operator to print information about a `SwarmController::PositionGlobalYaw`.
     *
     * @return A reference to the stream.
     */
    friend std::ostream&
    operator<<(std::ostream& str, SwarmController::PositionGlobalYaw const& position_global_yaw);

    /**
     * @brief Start offboard control.
     *
     * This function is blocking.
     *
     * @return Result of request.
     */
    bool start() const;

    /**
     * @brief Stop offboard control.
     *
     * This function is blocking.
     *
     * @return Result of request.
     */
    bool stop() const;

    /**
     * @brief Check if offboard control is active.
     *
     * True means that the vehicle is in offboard mode and we are actively sending
     * setpoints.
     *
     * This function is blocking.
     *
     * @return Result of request.
     */
    bool is_active() const;

    /**
     * @brief
     *
     * This function is blocking.
     *
     * @return Result of request.
     */
    void set_rate(float frequency) const;

    /**
     * @brief Set the position in Global coordinates (latitude, longitude, altitude) and yaw
     *
     * This function is blocking.
     *
     * @return Result of request.
     */
    bool set_position_global(PositionGlobalYaw position_global_yaw) const;

    /**
     * @brief Copy constructor.
     */
    SwarmController(const SwarmController& other);

    /**
     * @brief Equality operator (object is not copyable).
     */
    const SwarmController& operator=(const SwarmController&) = delete;

private:
    /** @private Underlying implementation, set at instantiation */
    std::unique_ptr<SwarmControllerImpl> _impl;
};

} // namespace mavsdk