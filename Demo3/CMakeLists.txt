cmake_minimum_required(VERSION 2.8)

Project(Demo3)

aux_source_directory(. SOURCES)

# Functions 目录
add_subdirectory(Functions)

add_executable(Demo main.cc)

target_link_libraries(Demo Functions)