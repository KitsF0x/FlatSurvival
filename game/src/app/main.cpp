#include <iostream>

#include "MainMenu.hpp"
#include "Renderer.hpp"
#include "StatesManager.hpp"

int main()
{
    states::StatesManager statesManager;
    sf::RenderWindow window{sf::VideoMode{800, 600}, "Hello, world!"};
    window.setFramerateLimit(60);
    renderer::Renderer renderer{window, statesManager};
    statesManager.push(std::make_unique<states::MainMenu>(statesManager));
    renderer.loop();
}