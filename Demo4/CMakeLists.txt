cmake_minimum_required(VERSION 2.8)
project(DEMO4)

configure_file (
    "${PROJECT_SOURCE_DIR}/config.h.in"
    "${PROJECT_BINARY_DIR}/config.h"
)

option(
    USE_MYMATH
    "use my math implementation" ON
)

if(USE_MYMATH)
    include_directories("${PROJECT_SOURCE_DIR}/math")
    add_subdirectory(math)
    set(EXTRA_LIBS ${EXTRA_LIBS} MathFunctions)
endif(USE_MYMATH)

aux_source_directory(. SRC_DIR)

add_executable(DEMO ${SRC_DIR})

target_link_libraries(DEMO ${EXTRA_LIBS})