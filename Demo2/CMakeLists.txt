cmake_minimum_required(VERSION 2.8)

project(Demo2)

# A
# add_executable(Demo main.cc MyFunctions.cc)

# B
## 1. find all source in dir
aux_source_directory(. SOURCES_IN_DIRECTORY)
## 2. all sources are stored in SOURCES_IN_DIRECTORY variable
add_executable(Demo ${SOURCES_IN_DIRECTORY})