cmake_minimum_required(VERSION 3.20)

project(Course6 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# يأخذ تلقائياً كل ملفات .cpp الموجودة داخل src
file(GLOB lesson_files CONFIGURE_DEPENDS
        "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp"
)

# ينشئ برنامجاً مستقلاً لكل ملف درس
foreach(lesson_file IN LISTS lesson_files)
    get_filename_component(lesson_name "${lesson_file}" NAME_WE)

    add_executable("${lesson_name}" "${lesson_file}")

    # حتى تستطيع استعمال ملفات الـ headers الموجودة في Header Files
    target_include_directories("${lesson_name}" PRIVATE
            "${CMAKE_CURRENT_SOURCE_DIR}/Header Files"
    )
endforeach()