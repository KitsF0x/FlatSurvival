add_library(GuiELementsManager STATIC
    "./StatesManager.cpp"
)

target_include_directories(GuiELementsManager PUBLIC "./")
target_link_libraries(GuiELementsManager PUBLIC ManagerBases GuiElements)