cmake_minimum_required(VERSION 2.8)

aux_source_directory(. LIB_SOURCES)

add_library(Functions ${LIB_SOURCES})