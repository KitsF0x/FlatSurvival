cmake_minimum_required(VERSION 3.0.0)

# Name of the game
project(FlatSurvival)

find_package(SFML REQUIRED COMPONENTS graphics system window audio)
find_package(GTest REQUIRED)

add_subdirectory(game)
add_subdirectory(engine)