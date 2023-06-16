add_library(game_manager STATIC "source/GameManager.cpp")
target_include_directories(game_manager PUBLIC "headers")
target_link_libraries(game_manager PRIVATE "states_manager")