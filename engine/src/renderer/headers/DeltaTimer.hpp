#pragma once

#include <SFML/System/Clock.hpp>

namespace renderer
{
class DeltaTimer
{
  private:
    sf::Clock m_clock;

  public:
    void startTimer();
    double getDelta();
};
} // namespace managers