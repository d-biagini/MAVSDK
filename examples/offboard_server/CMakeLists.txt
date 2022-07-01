cmake_minimum_required(VERSION 3.10.2)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(offboard_server)

add_executable(offboard_server
    offboard_server.cpp
)

find_package(MAVSDK REQUIRED)

target_link_libraries(offboard_server
    MAVSDK::mavsdk
)

if(NOT MSVC)
    add_compile_options(offboard_server PRIVATE -Wall -Wextra)
else()
    add_compile_options(offboard_server PRIVATE -WX -W2)
endif()
