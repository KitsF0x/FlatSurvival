add_library(game_objects_manager STATIC "source/GameObjectsManager.cpp")
target_include_directories(game_objects_manager PUBLIC "headers")
target_link_libraries(game_objects_manager PRIVATE "sfml-graphics")