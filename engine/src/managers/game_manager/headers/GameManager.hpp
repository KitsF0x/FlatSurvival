#pragma once

#include "StatesManager.hpp"
#include <SFML/Graphics.hpp>

namespace managers
{
/// @brief Main game loop class.
class GameManager
{
  private:
    /// @brief RenderWindow reference.
    sf::RenderWindow &m_window;

    /// @brief StatesManager reference.
    managers::StatesManager &m_statesManager;

  public:
    GameManager(sf::RenderWindow &window, managers::StatesManager &statesManager);
    /// @brief Main loop method. When called game starts.
    void loop();

    /// @brief Detects if the user clicked on X or performed any other action that closes the window.
    void detectWindowClose();

    /// @brief Executes a list of actions performed each frame.
    void actionsPerFrame();
};
} // namespace managers