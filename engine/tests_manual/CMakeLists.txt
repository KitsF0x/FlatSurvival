add_executable(${PROJECT_NAME}-manual "GameManager_test.cpp")
target_link_libraries(${PROJECT_NAME}-manual PRIVATE game_manager states_manager)