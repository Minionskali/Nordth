cmake_minimum_required(VERSION 3.17)

project(Nordth)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_BUILD_TYPE Debug)

include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}/Gra/Code/*
)
    
AUX_SOURCE_DIRECTORY(${CMAKE_CURRENT_SOURCE_DIR}/Gra/Code/* SourceFiles)

set(
    SRC
    ${CMAKE_CURRENT_SOURCE_DIR}/Gra/main.cpp
    ${SourceFiles}
)

link_libraries(
    sfml-graphics
    sfml-window
    sfml-system
)

add_executable(${PROJECT_NAME}.out ${SRC})