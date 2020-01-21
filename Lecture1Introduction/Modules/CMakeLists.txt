cmake_minimum_required(VERSION 3.2)
# Name of the project
set(PROJECT_NAME MultiFile)
project(${PROJECT_NAME})

set(SOURCES external.cpp module1.cpp main.cpp external.h )
add_executable(${PROJECT_NAME} ${SOURCES})
