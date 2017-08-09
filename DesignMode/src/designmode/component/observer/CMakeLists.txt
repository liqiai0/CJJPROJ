project(ht)

set(Watcher Watcher.cpp)
set(Watched Watched.cpp)

add_library(Observer SHARED  ${Watched} ${Watcher})

