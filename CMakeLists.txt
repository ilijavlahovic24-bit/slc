cmake_minimum_required(VERSION 3.15)
project(slc VERSION 0.1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Source files
file(GLOB_RECURSE SLC_SOURCES
    src/lexer/*.cpp
    src/parser/*.cpp
    src/semantic/*.cpp
    src/codegen/*.cpp
)

add_executable(slc ${SLC_SOURCES} src/main.cpp)

target_include_directories(slc PRIVATE src)

# Compiler warnings
target_compile_options(slc PRIVATE
    $<$<CXX_COMPILER_ID:GNU,Clang>:-Wall -Wextra -Wpedantic>
    $<$<CXX_COMPILER_ID:MSVC>:/W4>
)

# Build type default
if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Debug)
endif()