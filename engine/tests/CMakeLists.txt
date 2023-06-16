add_executable(${PROJECT_NAME}-ut 
    "managers/states_manager/StatesManager_test.cpp"
    "managers/game_objects_manager/GameObjectsManager_test.cpp")
target_link_libraries(${PROJECT_NAME}-ut PRIVATE "GTest::GTest" "GTest::Main" "states_manager" "game_objects_manager")