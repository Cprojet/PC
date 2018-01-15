cmake_minimum_required(VERSION 3.8)
project(ProjetC1)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c detailants.c detailants.h fabricant.c fabricant.h supports.c supports.h)
add_executable(ProjetC1 ${SOURCE_FILES} detailants.c detailants.h fabricant.c fabricant.h supports.c supports.h)