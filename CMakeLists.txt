cmake_minimum_required(VERSION 3.17)

project(Nordth)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_BUILD_TYPE Debug)

include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}/Gra/Code/
)

file(
    GLOB SourceFiles
    ${CMAKE_CURRENT_SOURCE_DIR}/Gra/Code/GeneralFunctions/*.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Gra/Code/Animations/*.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Gra/Code/Board/*.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Gra/Code/Element/*.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Gra/Code/Graphic/*.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Gra/Code/Engine/*.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Gra/Code/Event/*.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Gra/Code/Game/*.cpp
    )

set(
    SRC
    ${SourceFiles}
    ${CMAKE_CURRENT_SOURCE_DIR}/Gra/main.cpp
)

link_libraries(
    sfml-graphics
    sfml-window
    sfml-system
    pthread
)

add_executable(${PROJECT_NAME}.out ${SRC})