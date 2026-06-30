cmake_minimum_required(VERSION 3.16)

project(tutorial LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(tutorial
    src/main.cpp
    src/module/parent.cpp
    src/module/child.cpp
)

target_include_directories(tutorial PRIVATE
    "${CMAKE_SOURCE_DIR}/src"
)

set_target_properties(tutorial PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/build"
)
