cmake_minimum_required(VERSION 3.10.2)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(swarm_controller)

add_executable(swarm_controller
    swarm_controller.cpp
)

find_package(MAVSDK REQUIRED)

target_link_libraries(swarm_controller
    MAVSDK::mavsdk
)

if(NOT MSVC)
    add_compile_options(swarm_controller PRIVATE -Wall -Wextra)
else()
    add_compile_options(swarm_controller PRIVATE -WX -W2)
endif()
