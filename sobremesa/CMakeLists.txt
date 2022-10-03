cmake_minimum_required(VERSION 3.5)

project(sobremesa LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

enable_testing()

if(CMAKE_TESTING_ENABLED)
    add_subdirectory(tests)
endif()

add_executable(sobremesa main.cpp funcoes.hpp)
