cmake_minimum_required(VERSION 3.30)
project(C__)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(.idea)

add_executable(C__
    .idea/.gitignore
    .idea/C++.iml
    .idea/editor.xml
    .idea/modules.xml
        Code.cpp
        Code.h
        Add.cpp
        Add.h)
