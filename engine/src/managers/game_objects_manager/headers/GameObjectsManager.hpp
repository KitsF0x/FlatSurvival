#pragma once

#include "IGameObject.hpp"
#include <memory>
#include <vector>

namespace managers
{
/// @brief Managing game objects.
class GameObjectsManager
{
  private:
    /// @brief Vector of game objects to process.
    std::vector<std::shared_ptr<managers::IGameObject>> m_gameObjects;

  public:
    /// @brief Adds game object to manager.
    /// @param gameObject Game object.
    void add(std::shared_ptr<managers::IGameObject> gameObject);

    /// @brief Updates every game object.
    /// @param deltaTime Delta time.
    void updateGameObjects(double deltaTime);

    /// @brief Renders every game object.
    /// @param window RenderWindow reference.
    void renderGameObjects(sf::RenderWindow &window);

    /// @brief Removes game object from the manager.
    /// @param gameObject Game object.
    /// @return True if successfully deleted object. False if object is not present in manager.
    bool removeGameObject(std::shared_ptr<managers::IGameObject> gameObject);

    /// @brief Returns number of game objects in the manager.
    /// @return Number of the game objects in the manager.
    std::size_t size();
};
} // namespace managers