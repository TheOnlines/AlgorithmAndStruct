cmake_minimum_required(VERSION 3.16)
project(algorithm C)

set(CMAKE_C_STANDARD 11)

include_directories(library)

add_executable(algorithm
        library/LinkList/linkedList.c
        library/LinkList/linkedList.h
        main.c)
