add_subdirectory(GuiElements)

add_library(Gui STATIC 
	"./GuiManager/GuiElementsManager.cpp"
)

target_include_directories(Gui PUBLIC "./" "./GuiManager/" "./Interfaces/")
target_link_libraries(Gui PRIVATE ManagerBases GuiElements)