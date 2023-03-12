add_library(ManagerBases INTERFACE)
target_include_directories(ManagerBases INTERFACE "./" "interfaces/" "managers/")
target_link_libraries(ManagerBases INTERFACE sfml-graphics)