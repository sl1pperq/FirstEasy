cmake_minimum_required(VERSION 3.26)
project(FirstEasy)

set(CMAKE_CXX_STANDARD 17)

add_executable(FirstEasy main.cpp
        easy.h
        сpp_files/1_itc_name.cpp
        сpp_files/2_itc_fio.cpp
        сpp_files/3_itc_abs.cpp
        сpp_files/6_itc_iseven.cpp
        сpp_files/7_itc_max.cpp
        сpp_files/11_itc_sqrt.cpp
        сpp_files/8_itc_min.cpp
        сpp_files/17_itc_ispositive.cpp
        сpp_files/9_itc_fmax.cpp)
