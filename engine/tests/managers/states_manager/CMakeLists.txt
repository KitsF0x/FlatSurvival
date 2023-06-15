add_executable(${PROJECT_NAME}-ut "StatesManager_test.cpp")
target_link_libraries(${PROJECT_NAME}-ut PRIVATE "GTest::GTest" "GTest::Main" "states_manager")