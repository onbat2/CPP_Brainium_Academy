cmake_minimum_required(VERSION 3.5)

project(smallest_K LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(smallest_K main.cpp)

install(TARGETS smallest_K
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
