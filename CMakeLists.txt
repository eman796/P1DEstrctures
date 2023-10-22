cmake_minimum_required(VERSION 3.26)
project(Proyecto)

set(CMAKE_CXX_STANDARD 14)

include_directories(Proyecto)

add_executable(Proyecto
        Proyecto/ListaP.h
        Proyecto/ListaP.h.gch
        Proyecto/Main.cpp)
