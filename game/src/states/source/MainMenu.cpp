#include "MainMenu.hpp"

states::MainMenu::MainMenu(states::StatesManager &statesManager) : BaseState(statesManager)
{
}

void states::MainMenu::init()
{
    m_rect = std::make_shared<gameobjects::Rectangle>();
    m_rect->setPosition(sf::Vector2f{400, 300});
    m_gameObjectsManager.add(m_rect);
    gui::Button button{sf::Vector2f{10, 20}, sf::Vector2f{150, 75}};
    button.setOnClick([&]() { m_rect->setSize(m_rect->getSize() + sf::Vector2f{2, 2}); });

    m_guiManager.add(std::make_shared<gui::Button>(button));
}

void states::MainMenu::update(double deltaTime, sf::RenderWindow &window)
{
    renderer::MousePosition mousePos;
    m_guiManager.process(mousePos.getMousePositionOnWindow(window));
    m_gameObjectsManager.updateGameObjects(deltaTime);
}

void states::MainMenu::render(sf::RenderWindow &window)
{
    m_gameObjectsManager.renderGameObjects(window);
    m_guiManager.render(window);
}
