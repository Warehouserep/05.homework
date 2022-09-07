cmake_minimum_required(VERSION 3.5)

project(05.homework)

SET(TARGET_H
    istatistics.h
    min.h
    max.h
    mean.h
    meandev.h
    percent90.h
    percent95.h
   )

SET(TARGET_SRC
    min.cpp
    max.cpp
    mean.cpp
    meandev.cpp
    percent90.cpp
    percent95.cpp
   )

add_executable(random_shuffle random_shuffle.cpp)
set_target_properties(random_shuffle PROPERTIES CXX_STANDARD 17 CXX_STANDARD_REQUIRED ON)

add_executable(chrono_example chrono_example.cpp)
set_target_properties(chrono_example PROPERTIES CXX_STANDARD 17 CXX_STANDARD_REQUIRED ON)

add_executable(statistics statistics.cpp ${TARGET_H} ${TARGET_SRC})
set_target_properties(statistics PROPERTIES CXX_STANDARD 17 CXX_STANDARD_REQUIRED ON)

