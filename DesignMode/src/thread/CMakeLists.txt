
set(Thread Thread.cpp)


add_library(Thread STATIC ${Thread})

target_link_libraries(Thread pthread)






