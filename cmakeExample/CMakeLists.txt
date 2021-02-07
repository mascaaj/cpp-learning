cmake_minimum_required(VERSION 2.8.3)
project(simple_calculator)

include_directories(
    include
)

add_library(operations SHARED src/ops.cpp)
add_executable(calculator src/sum.cpp)
target_link_libraries(calculator operations)