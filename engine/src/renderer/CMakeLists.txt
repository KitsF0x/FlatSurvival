add_library(renderer STATIC "source/Renderer.cpp" "source/DeltaTimer.cpp" "source/MousePosition.cpp")
target_include_directories(renderer PUBLIC "headers")
target_link_libraries(renderer PRIVATE "states_manager")