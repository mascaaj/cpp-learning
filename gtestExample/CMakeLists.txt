cmake_minimum_required(VERSION 2.8.3)
project(gtest_example)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

add_executable(runTests src/tests.cpp)
target_link_libraries(runTests ${GTEST_LIBRARIES} pthread)