project(ht)

set(ht main.cpp)

add_executable(ht ${ht})


target_link_libraries(ht singleton Account Strategy Observer Decorator Bridge Thread)






