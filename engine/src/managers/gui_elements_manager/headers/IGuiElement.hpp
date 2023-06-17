#pragma once

#include <SFML/Graphics.hpp>

namespace managers
{
/// @brief Gui element interface.
class IGuiElement
{
  public:
    /// @brief When mouse hovered.
    virtual void onHover() = 0;

    /// @brief When mouse clicked.
    virtual void onClick() = 0;

    /// @brief When nothing special is happening.
    virtual void onIdle() = 0;

    /// @brief Get sf::FloatRect of the element.
    /// @return sf::FloatRect of the element.
    virtual sf::FloatRect getFloatRect() = 0;

    /// @brief Render gui element.
    /// @param window RenderWindow.
    virtual void render(sf::RenderWindow &window) = 0;
};
} // namespace managers