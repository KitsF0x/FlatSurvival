#include "Renderer.hpp"

renderer::Renderer::Renderer(sf::RenderWindow &window, states::StatesManager &statesManager)
    : m_window(window), m_statesManager(statesManager)
{
}

void renderer::Renderer::loop()
{
    while (m_window.isOpen())
    {
        m_deltaTimer.startTimer();
        detectWindowClose();
        actionsPerFrame();
        m_deltaTime = m_deltaTimer.getDelta();
    }
}

void renderer::Renderer::detectWindowClose()
{
    sf::Event evn;
    if (m_window.pollEvent(evn) && evn.type == sf::Event::Closed)
    {
        m_window.close();
    }
}

void renderer::Renderer::actionsPerFrame()
{
    m_window.clear();
    m_statesManager.processTopState(m_deltaTime, m_window);
    m_window.display();
}
