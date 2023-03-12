add_library(GuiElements STATIC
	"./src/Cursor.cpp"
	"./src/Image.cpp"
	"./src/Panel.cpp"
)

target_include_directories(GuiElements PUBLIC "./headers/" "./interfaces/")
target_link_libraries(GuiElements PRIVATE ManagerBases Resources)