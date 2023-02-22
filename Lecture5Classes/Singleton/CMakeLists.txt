cmake_minimum_required(VERSION 3.12)
project(ShapeBuild)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS ON)

add_executable(Singleton)
include_directories(${CMAKE_SOURCE_DIR}/include)

target_sources(Singleton PRIVATE ${CMAKE_SOURCE_DIR}/src/Test.cpp 
                              ${CMAKE_SOURCE_DIR}/src/Global.cpp
                              ${CMAKE_SOURCE_DIR}/include/Global.h
)

# Note we need to copy the config file to our exe directory
add_custom_target(SingletoncopyConfig ALL
    COMMAND ${CMAKE_COMMAND} -E copy
    ${CMAKE_CURRENT_SOURCE_DIR}/config.txt
    ${CMAKE_CURRENT_BINARY_DIR}/config.txt
)


