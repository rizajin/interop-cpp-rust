cmake_minimum_required(VERSION 3.20)
project(cpp-user-executable)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(RUST_LIB_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../rust-lib/target/debug) # sorry.. lazy.

link_directories(${RUST_LIB_DIR})

add_executable(cpp-user src/main.cpp)
target_link_libraries(cpp-user rust_lib)