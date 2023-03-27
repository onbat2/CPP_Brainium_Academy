cmake_minimum_required(VERSION 3.5)

project(first_last_position LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(first_last_position main.cpp)

install(TARGETS first_last_position
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
