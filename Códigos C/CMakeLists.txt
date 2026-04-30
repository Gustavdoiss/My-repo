cmake_minimum_required(VERSION 3.5)
project(Códigos_C)

file(GLOB SOURCES "*.c")

add_executable(main ${SOURCES})