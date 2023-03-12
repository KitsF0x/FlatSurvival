add_executable(${PROJECT_NAME}_exec
    App.cpp
    Game.cpp
)

target_link_libraries(${PROJECT_NAME}_exec PRIVATE sfml-graphics States StatesManager Config)