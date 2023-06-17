#pragma once

#include <SFML/Graphics.hpp>

namespace gameobjects
{
/// @brief Interface for game objects.
class IGameObject
{
  public:
    /// @brief Executes when added to manager.
    virtual void init() = 0;

    /// @brief Executes each frame.
    /// @param deltaTime Delta time.
    virtual void update(double deltaTime) = 0;

    /// @brief Executes each frame. Used for rendering purposes.
    /// @param window RenderWindow reference.
    virtual void render(sf::RenderWindow &window) = 0;
};
} // namespace gameobjects