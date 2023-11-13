cmake_minimum_required(VERSION 3.23.0)
project(Sorting)
set(SOURCES
    ./src/sorting.cpp
    ./src/Sorter.cpp
    ./src/Timer.cpp
    ./src/SortAnalyzer.cpp
    ./src/Duration.cpp
    ./src/main.cpp
    )

add_executable(${PROJECT_NAME} ${SOURCES})

target_include_directories(Sorting
    PRIVATE 
        ${PROJECT_SOURCE_DIR}/include
)