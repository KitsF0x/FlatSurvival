add_library(Resources STATIC
    TexturesManager.cpp
)
target_include_directories(Resources PUBLIC "./")
target_link_libraries(Resources PUBLIC sfml-graphics Config Utils ManagerBases)
