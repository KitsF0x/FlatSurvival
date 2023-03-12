add_library(GameObjectsManager STATIC
    "./GameObjectsManager.cpp"
)

target_include_directories(GameObjectsManager PUBLIC "./")
target_link_libraries(GameObjectsManager PUBLIC Utils ManagerBases IGameObject)