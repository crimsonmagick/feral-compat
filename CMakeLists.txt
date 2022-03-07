cmake_minimum_required(VERSION 3.22)
project(feral_compat C)

set(CMAKE_C_STANDARD 17)

add_library(feral_compat32 SHARED compatibility.c)
add_library(feral_compat64 SHARED compatibility.c)

set_target_properties(feral_compat32 PROPERTIES COMPILE_OPTIONS "-m32" LINK_OPTIONS "-m32")
set_target_properties(feral_compat64 PROPERTIES COMPILE_OPTIONS "-m64" LINK_OPTIONS "-m64")

install(TARGETS feral_compat32 feral_compat64 DESTINATION /usr/local/include)