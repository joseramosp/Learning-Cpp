cmake_minimum_required(VERSION 3.15)
project(Project_2)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

#set(SOURCE_FILES main.cpp Card.cpp Deck.cpp)
set(SOURCE_FILES main.cpp)
add_executable(Project_2 ${SOURCE_FILES})
include_directories(/usr/local/include)

find_package(SFML 2.5 COMPONENTS system window graphics network audio REQUIRED)
include_directories(${SFML_INCLUDE_DIRS})
target_link_libraries(Project_2 sfml-system sfml-window sfml-graphics sfml-audio sfml-network)