add_library(Config STATIC
    GlobalConfigTable.cpp
)
target_include_directories(Config PUBLIC "./")