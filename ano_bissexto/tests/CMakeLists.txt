cmake_minimum_required(VERSION 3.5)

project(untitled3 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(tst_untitled tst_teste.cpp catch.hpp)
