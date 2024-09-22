cmake_minimum_reguired(VERSION 3.10)
project(RobotMotorsControl)

set(CMAKE_CXX_STANDART 14)

include_directories(include)

file(GLOB SOURCES "src/*.cpp")

add_executable(program ${SOURCES})
