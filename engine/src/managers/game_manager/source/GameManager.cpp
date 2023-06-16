#include "GameManager.hpp"

managers::GameManager::GameManager(sf::RenderWindow &window, managers::StatesManager &statesManager)
    : m_window(window), m_statesManager(statesManager)
{
}

void managers::GameManager::loop()
{
    while (m_window.isOpen())
    {
        m_deltaTimer.startTimer();
        detectWindowClose();
        actionsPerFrame();
        m_deltaTime = m_deltaTimer.getDelta();
    }
}

void managers::GameManager::detectWindowClose()
{
    sf::Event evn;
    if (m_window.pollEvent(evn) && evn.type == sf::Event::Closed)
    {
        m_window.close();
    }
}

void managers::GameManager::actionsPerFrame()
{
    m_window.clear();
    m_statesManager.processTopState(m_deltaTime, m_window);
    m_window.display();
}
