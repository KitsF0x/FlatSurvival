add_library(gui_elements_manager STATIC 
    "source/GuiElementsManager.cpp"
    "source/SimpleGuiElement.cpp"
    "source/Button.cpp"    
)
target_include_directories(gui_elements_manager PUBLIC "headers")
target_link_libraries(gui_elements_manager PRIVATE "sfml-graphics")
