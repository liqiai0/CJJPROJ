cmake_minimum_required(VERSION 3.0)
project(event)
IF(PROJECT_BINARY_DIR STREQUAL PROJECT_SOURCE_DIR)
    message(FATAL_ERROR "Do NOT support in-source build!!\n"
        "Please:\n"
        "    1. mkdir build;cd build\n"
        "    2. cmake ..\n"
        "    3. make\n"
        )
ENDIF()

set(PRO_INC ${PROJECT_SOURCE_DIR}/include)
set(PRO_BIN ${PROJECT_BINARY_DIR})
set(PRO_OBJ ${PROJECT_SOURCE_DIR}/obj)
set(PRO_EXE ${PROJECT_SOURCE_DIR}/exe)

#libevent include lib path
set(EVENT_INCLUDE_PATH ${PROJECT_SOURCE_DIR}/external/libevent/include)
set(EVENT_LIB_PATH ${PROJECT_SOURCE_DIR}/external/libevent/lib)

#include_directories(${PRO_INC} ${EVENT_INCLUDE_PATH})

#link_directories(${EVENT_LIB_PATH} ${PRO_OBJ} /usr/lib /usr/local/lib )

set(EXECUTABLE_OUTPUT_PATH ${PRO_EXE})
set(LIBRARY_OUTPUT_PATH ${PRO_OBJ})

set(CMAKE_C_FLAGS "-g -Wall")
set(CMAKE_CXX_FLAGS "-g -Wall")

add_subdirectory(src)



