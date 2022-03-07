cmake_minimum_required(VERSION 3.22)
project(feral_compat C)

set(CMAKE_C_STANDARD 17)

add_library(feral_compat SHARED compatibility.c)
