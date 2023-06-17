#pragma once

#include <SFML/Graphics.hpp>

namespace states
{
class IState
{
  public:
    virtual void init() = 0;
    virtual void update(double deltaTime, sf::RenderWindow &window) = 0;
    virtual void render(sf::RenderWindow &window) = 0;
};
} // namespace states