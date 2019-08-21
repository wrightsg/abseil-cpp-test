cmake_minimum_required(VERSION 3.0)
project(abseil-cpp-test VERSION 0.0.1 LANGUAGES CXX)

# required by abseil-cpp
add_subdirectory(googletest)
add_subdirectory(abseil-cpp)

add_executable(abseil abseil.cpp)

target_link_libraries(abseil PRIVATE absl::base)
