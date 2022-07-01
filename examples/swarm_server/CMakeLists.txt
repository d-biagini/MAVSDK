cmake_minimum_required(VERSION 3.10.2)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(swarm_server)

add_executable(swarm_server
    swarm_server.cpp
)

find_package(MAVSDK REQUIRED)

target_link_libraries(swarm_server
    MAVSDK::mavsdk
)

if(NOT MSVC)
    add_compile_options(swarm_server PRIVATE -Wall -Wextra)
else()
    add_compile_options(swarm_server PRIVATE -WX -W2)
endif()
