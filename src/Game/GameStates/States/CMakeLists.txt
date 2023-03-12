add_library(States STATIC
    "./src/StateMainMenu.cpp"
    "./src/BaseState.cpp"
    "./src/GamePlayState.cpp")

target_include_directories(States PUBLIC
    "./headers/"
    "./interfaces/"
)

target_link_libraries(States PUBLIC sfml-graphics Config GameObjectsManager StatesManager Gui GuiElements)
