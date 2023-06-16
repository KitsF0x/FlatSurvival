#include "DeltaTimer.hpp"

void renderer::DeltaTimer::startTimer()
{
    m_clock.restart();
}

double renderer::DeltaTimer::getDelta()
{
    return m_clock.getElapsedTime().asSeconds();
}
