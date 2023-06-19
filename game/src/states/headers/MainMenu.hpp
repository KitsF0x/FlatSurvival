#pragma once

#include "BaseState.hpp"
#include "Button.hpp"
#include "GameObjectsManager.hpp"
#include "GuiElementsManager.hpp"
#include "IState.hpp"
#include "MousePosition.hpp"
#include "Rectangle.hpp"
#include "StatesManager.hpp"

namespace states
{
class MainMenu : public states::BaseState
{
    gui::GuiElementsManager m_guiManager;
    std::shared_ptr<gameobjects::Rectangle> m_rect;

  public:
    MainMenu(states::StatesManager &statesManager);
    virtual void init() override;
    virtual void update(double deltaTime, sf::RenderWindow &window) override;
    virtual void render(sf::RenderWindow &window) override;
};
} // namespace states