cmake_minimum_required(VERSION 3.20)

project(Course6 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB lesson_files CONFIGURE_DEPENDS
    "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp"
)

foreach(lesson_file IN LISTS lesson_files)
    get_filename_component(lesson_name "${lesson_file}" NAME_WE)
    add_executable("${lesson_name}" "${lesson_file}")
endforeach()
file(GLOB header_files CONFIGURE_DEPENDS
        "${CMAKE_CURRENT_SOURCE_DIR}/Header Files/*.h"
)

target_sources(lec8 PRIVATE ${header_files})
target_include_directories(lec8 PRIVATE
        "${CMAKE_CURRENT_SOURCE_DIR}/Header Files"
)