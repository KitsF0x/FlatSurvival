add_executable(${PROJECT_NAME}_game main.cpp)
target_link_libraries(${PROJECT_NAME}_game PRIVATE 
    states_manager 
    game_states 
    game_objects_manager 
    game_game_objects
    renderer
    gui_elements_manager
)