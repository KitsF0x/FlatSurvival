add_library(states_manager STATIC "source/StatesManager.cpp")
target_include_directories(states_manager PUBLIC "headers")
target_link_libraries(states_manager PRIVATE "sfml-graphics")