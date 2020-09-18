cmake_minimum_required(VERSION 3.17)
project(PAT_Basic)

set(CMAKE_CXX_STANDARD 11)

include_directories(include)

FILE(GLOB RESOURCES "src/*.cpp")

add_executable(PAT_Basic main.cpp ${RESOURCES})