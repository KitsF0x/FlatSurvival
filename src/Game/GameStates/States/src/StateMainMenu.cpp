#include "StateMainMenu.hpp"


StateMainMenu::StateMainMenu(sf::RenderWindow& window, StatesManager& statesManager) :
    BaseState(window, statesManager)
{
}

void StateMainMenu::init() {
    shape.setRadius(50.0f);
    shape.setFillColor(sf::Color::Blue);
    texturesManager.load("dasddasa21.png", "okejka");
    guiElementsManager.add(std::make_shared<Panel>(sf::Color::Green,
        sf::Vector2f(10, 10), sf::Vector2f(100, 200)), "Panel");
    guiElementsManager.add(std::make_shared<Cursor>(window), "CURSOR");

}

void StateMainMenu::update(double deltaTime) {
}

void StateMainMenu::processWindowEvents(sf::RenderWindow& window) {
    sf::Event event;
    while (window.pollEvent(event)) {

    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
    {
        statesManager.push(std::make_shared<GamePlayState>(window, statesManager));
    }
    if (sf::Mouse::isButtonPressed(sf::Mouse::Right))
    {
        guiElementsManager.add(std::make_shared<Image>(texturesManager,
            "okejka",
            sf::Vector2f(sf::Mouse::getPosition(window).x, sf::Mouse::getPosition(window).y),
            sf::Vector2f{ 1, 1 }), "Image" + std::to_string(okejkaCounter++));

        //
        // ZROBIÆ VECTOR MANAGER I ZROBIÆ GAME OBJECTS MANAGER Z TEGO!!!
        //
    }
}

void StateMainMenu::render(sf::RenderWindow &window) {
    window.clear(sf::Color::Cyan);
    window.draw(shape);
    window.draw(spr);
}
