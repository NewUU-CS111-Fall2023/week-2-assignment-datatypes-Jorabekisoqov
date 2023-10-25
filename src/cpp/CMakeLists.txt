cmake_minimum_required(VERSION 3.24)
project(cpp)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(cpp
        .idea/.gitignore
        .idea/cpp.iml
        .idea/modules.xml
        .idea/vcs.xml
        .idea/workspace.xml
        main.cpp
        task_2.h
        task_4.h
        task_5.h)
