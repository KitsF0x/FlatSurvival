#pragma once

#include "IGameObject.hpp"

namespace gameobjects
{
class Rectangle : public gameobjects::IGameObject, public sf::RectangleShape
{
  public:
    virtual void init() override;
    virtual void update(double deltaTime) override;
    virtual void render(sf::RenderWindow &window) override;
};
} // namespace gameobjects