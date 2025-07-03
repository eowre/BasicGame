cmake_minimum_required(VERSION 3.10)

project(DungeonGame)

add_executable(dungeon_game
    src/main.cpp
    src/character.cpp
)

target_include_directories(dungeon_game PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/src)