add_library(game_states STATIC "source/MainMenu.cpp")
target_include_directories(game_states PUBLIC "headers")
target_link_libraries(game_states PRIVATE game_objects_manager states_manager game_game_objects)