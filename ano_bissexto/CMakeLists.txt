cmake_minimum_required(VERSION 3.5)

project(ano_bissexto LANGUAGES CXX)

enable_testing()

if(CMAKE_TESTING_ENABLED)
    add_subdirectory(tests)
endif()

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(ano_bissexto main.cpp funcoes.hpp)
