cmake_minimum_required(VERSION 3.20)
project(cpp-lib)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(cppLib SHARED src/lib.cpp)
