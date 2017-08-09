cmake_minimum_required(VERSION 3.0)

project(ht)


set(PRO_INC ${PROJECT_SOURCE_DIR}/include)
set(PRO_BIN ${PROJECT_BINARY_DIR})
set(PRO_OBJ ${PROJECT_SOURCE_DIR}/obj)
set(PRO_EXE ${PROJECT_SOURCE_DIR}/exe)


include_directories(${PRO_INC})

#message(${PRO_INC})

link_directories(${PRO_OBJ} /usr/lib /usr/local/lib)

set(EXECUTABLE_OUTPUT_PATH ${PRO_EXE})
set(LIBRARY_OUTPUT_PATH ${PRO_OBJ})

add_subdirectory(src)




