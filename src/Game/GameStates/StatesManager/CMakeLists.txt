add_library(StatesManager STATIC
    "./StatesManager.cpp"
)

target_include_directories(StatesManager PUBLIC "./")
target_link_libraries(StatesManager PUBLIC States Resources ManagerBases)