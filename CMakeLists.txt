cmake_minimum_required(VERSION 3.26)
project(untitled)

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled main.cpp
        Persona.cpp
        Persona.h
        Estudiante.cpp
        Estudiante.h
        nuevo.cpp
        Funciones.cpp
        Funciones.h)

include(FetchContent)
FetchContent_Declare(
        fmt
        GIT_REPOSITORY https://github.com/fmtlib/fmt.git
        GIT_TAG        7.1.3
)

FetchContent_MakeAvailable(fmt)

add_library(matematicas SHARED Funciones.cpp)