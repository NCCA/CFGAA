cmake_minimum_required(VERSION 3.12)
#-------------------------------------------------------------------------------------------
# I'm going to use vcpk in most cases for our install of 3rd party libs
# this is going to check the environment variable for CMAKE_TOOLCHAIN_FILE and this must point to where
# vcpkg.cmake is in the University this is set in your .bash_profile to
# export CMAKE_TOOLCHAIN_FILE=/public/devel/2020/vcpkg/scripts/buildsystems/vcpkg.cmake
#-------------------------------------------------------------------------------------------
if(NOT DEFINED CMAKE_TOOLCHAIN_FILE AND DEFINED ENV{CMAKE_TOOLCHAIN_FILE})
   set(CMAKE_TOOLCHAIN_FILE $ENV{CMAKE_TOOLCHAIN_FILE})
endif()

#-------------------------------------------------------------------------------------------
project(ColourBuild)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS ON)
find_package(GTest CONFIG REQUIRED)
include(GoogleTest)
enable_testing()
include_directories(${CMAKE_SOURCE_DIR}/include)

add_executable(Automatic)
target_sources(Automatic PRIVATE ${CMAKE_SOURCE_DIR}/Automatic/main.cpp ${CMAKE_SOURCE_DIR}/src/Colour.cpp ${CMAKE_SOURCE_DIR}/include/Colour.h)

add_executable(Dynamic)
target_sources(Dynamic PRIVATE ${CMAKE_SOURCE_DIR}/Dynamic/main.cpp ${CMAKE_SOURCE_DIR}/src/Colour.cpp ${CMAKE_SOURCE_DIR}/include/Colour.h)

add_executable(ColourTests)
target_sources(ColourTests PRIVATE ${CMAKE_SOURCE_DIR}/tests/tests.cpp ${CMAKE_SOURCE_DIR}/src/Colour.cpp ${CMAKE_SOURCE_DIR}/include/Colour.h)
target_link_libraries(ColourTests GTest::gtest GTest::gtest_main )
