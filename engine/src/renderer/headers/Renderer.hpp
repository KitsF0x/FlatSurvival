#pragma once

#include "DeltaTimer.hpp"
#include "StatesManager.hpp"
#include <SFML/Graphics.hpp>

namespace renderer
{
/// @brief Main game loop class.
class Renderer
{
  private:
    /// @brief RenderWindow reference.
    sf::RenderWindow &m_window;

    /// @brief StatesManager reference.
    states::StatesManager &m_statesManager;

    /// @brief Delta timer.
    renderer::DeltaTimer m_deltaTimer;

    /// @brief Delta time.
    double m_deltaTime;

  public:
    Renderer(sf::RenderWindow &window, states::StatesManager &statesManager);
    /// @brief Main loop method. When called game starts.
    void loop();

    /// @brief Detects if the user clicked on X or performed any other action that closes the window.
    void detectWindowClose();

    /// @brief Executes a list of actions performed each frame.
    void actionsPerFrame();
};
} // namespace renderer