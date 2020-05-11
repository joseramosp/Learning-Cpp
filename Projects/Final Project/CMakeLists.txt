cmake_minimum_required(VERSION 3.15)
project(Final_Project)

set(CMAKE_CXX_STANDARD 14)

add_executable(Final_Project main.cpp)

#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

find_package(SFML 2.5 COMPONENTS system window graphics network audio REQUIRED)
include_directories(${SFML_INCLUDE_DIRS})
target_link_libraries(Final_Project sfml-system sfml-window sfml-graphics sfml-audio sfml-network)