#include "DeltaTimer.hpp"

void managers::DeltaTimer::startTimer()
{
    m_clock.restart();
}

double managers::DeltaTimer::getDelta()
{
    return m_clock.getElapsedTime().asSeconds();
}
