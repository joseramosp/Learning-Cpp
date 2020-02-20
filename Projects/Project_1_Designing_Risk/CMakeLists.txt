#cmake_minimum_required(VERSION 3.15)
#project(Project_1_Designing_Risk)

#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
#set(SOURCE_FILES DieTester.cpp)
#add_executable(Project_1_Designing_Risk DieTester.cpp Die.cpp ${SOURCE_FILES})

#set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake_modules")
#find_package(SFML REQUIRED system window graphics network audio)
#if (SFML_FOUND)
#    include_directories(${SFML_INCLUDE_DIRS})
#    #target_link_libraries(Project_1_Designing_Risk ${SFML_LIBRARIES})
#    target_link_libraries(Project_1_Designing_Risk sfml-system sfml-window sfml-graphics sfml-audio sfml-network})
#endif()

cmake_minimum_required(VERSION 3.14)
project(Project_1_Designing_Risk)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES DieTester.cpp)
add_executable(Project_1_Designing_Risk ${SOURCE_FILES})
include_directories(/usr/local/include)

find_package(SFML 2.5 COMPONENTS system window graphics network audio REQUIRED)
include_directories(${SFML_INCLUDE_DIRS})
target_link_libraries(Project_1_Designing_Risk sfml-system sfml-window sfml-graphics sfml-audio sfml-network)