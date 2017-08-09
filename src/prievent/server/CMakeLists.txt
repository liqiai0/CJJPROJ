project(priserver)

include_directories(${PRO_INC} ${EVENT_INCLUDE_PATH} /usr/include /usr/local/include)
link_directories(${EVENT_LIB_PATH} /usr/lib /usr/local/lib)

#message(${EVENT_LIB_PATH})
set(EXECUTABLE_OUTPUT_PATH ${PRO_EXE})
set(LIBRARY_OUTPUT_PATH ${PRO_OBJ})

set(CMAKE_C_FLAGS "-g -Wall")
set(CMAKE_CXX_FLAGS "-g -Wall")

set(main main.cpp)

add_executable(priserver ${main})

target_link_libraries(priserver pthread event dl m)


