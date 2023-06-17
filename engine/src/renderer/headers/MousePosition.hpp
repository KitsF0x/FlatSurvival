#pragma once

#include <SFML/Graphics.hpp>

namespace renderer
{
class MousePosition
{
  public:
    sf::Vector2f getMousePositionOnWindow(sf::RenderWindow &window);
};
} // namespace renderer