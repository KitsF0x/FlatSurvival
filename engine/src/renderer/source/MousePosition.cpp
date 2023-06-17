#include "MousePosition.hpp"

sf::Vector2f renderer::MousePosition::getMousePositionOnWindow(sf::RenderWindow &window)
{
    sf::Vector2i mousePosI = sf::Mouse::getPosition(window);
    return sf::Vector2f{static_cast<float>(mousePosI.x), static_cast<float>(mousePosI.y)};
}