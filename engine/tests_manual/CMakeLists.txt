add_executable(${PROJECT_NAME}-manual "GameManager_test.cpp")
target_link_libraries(${PROJECT_NAME}-manual PRIVATE renderer states_manager "gui_elements_manager")