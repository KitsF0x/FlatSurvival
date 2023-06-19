add_library(game_game_objects STATIC "source/Rectangle.cpp")
target_include_directories(game_game_objects PUBLIC "headers")
target_link_libraries(game_game_objects PRIVATE game_objects_manager)