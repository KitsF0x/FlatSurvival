#pragma once

#include "GameObjectsManager.hpp"
#include "IState.hpp"
#include "Rectangle.hpp"
#include "StatesManager.hpp"

namespace states
{
class MainMenu : public states::IState
{
  private:
    gameobjects::GameObjectsManager m_gameObjectsManager;
    states::StatesManager &m_statesManager;

  public:
    MainMenu(states::StatesManager &statesManager);
    virtual void init() override;
    virtual void update(double deltaTime, sf::RenderWindow &window) override;
    virtual void render(sf::RenderWindow &window) override;
};
} // namespace states