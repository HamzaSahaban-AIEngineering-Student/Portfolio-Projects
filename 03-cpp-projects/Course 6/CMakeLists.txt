cmake_minimum_required(VERSION 3.20)
project(Course6)

set(CMAKE_CXX_STANDARD 20)

file(GLOB SOURCES "*.cpp")

foreach(FILE ${SOURCES})
    get_filename_component(TARGET_NAME ${FILE} NAME_WE)
    add_executable(${TARGET_NAME} ${FILE})
endforeach()
