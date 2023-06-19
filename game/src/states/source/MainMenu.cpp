#include "MainMenu.hpp"

states::MainMenu::MainMenu(states::StatesManager &statesManager) : m_statesManager(statesManager)
{
}

void states::MainMenu::init()
{
    m_gameObjectsManager.add(std::make_shared<gameobjects::Rectangle>());
}

void states::MainMenu::update(double deltaTime, sf::RenderWindow &window)
{
    m_gameObjectsManager.updateGameObjects(deltaTime);
}

void states::MainMenu::render(sf::RenderWindow &window)
{
    m_gameObjectsManager.renderGameObjects(window);
}
