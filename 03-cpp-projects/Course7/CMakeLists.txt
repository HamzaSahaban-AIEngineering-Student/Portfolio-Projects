
cmake_minimum_required(VERSION 4.3)
project(Course7)

set(CMAKE_CXX_STANDARD 20)

file(GLOB PROBLEM_SOURCES CONFIGURE_DEPENDS
        "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp"
)

file(GLOB HEADER_FILES CONFIGURE_DEPENDS
        "${CMAKE_CURRENT_SOURCE_DIR}/Header Files/*.h"
)

foreach(PROBLEM_FILE IN LISTS PROBLEM_SOURCES)
    get_filename_component(PROBLEM_NAME "${PROBLEM_FILE}" NAME_WE)

    add_executable("${PROBLEM_NAME}" "${PROBLEM_FILE}")

    target_sources("${PROBLEM_NAME}" PRIVATE
            ${HEADER_FILES}
    )

    target_include_directories("${PROBLEM_NAME}" PRIVATE
            "${CMAKE_CURRENT_SOURCE_DIR}/Header Files"
    )
endforeach()