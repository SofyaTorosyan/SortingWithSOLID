cmake_minimum_required(VERSION 3.23.0)
project(Sorting)
set(SOURCES
    ./src/Sorting/sorting.cpp
    ./src/Sorter/Sorter.cpp
    ./src/Timer/Timer.cpp
    ./src/SortAnalyzer/SortAnalyzer.cpp
    ./src/Duration/Duration.cpp
    ./src/main.cpp
    )

add_executable(${PROJECT_NAME} ${SOURCES})

target_include_directories(Sorting
    PRIVATE 
        ${PROJECT_SOURCE_DIR}/include
)