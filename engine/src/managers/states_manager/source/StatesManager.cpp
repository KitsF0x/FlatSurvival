#include "StatesManager.hpp"

void states::StatesManager::push(std::unique_ptr<states::IState> state)
{
    m_states.push(std::move(state));
    m_states.top()->init();
}

bool states::StatesManager::pop()
{
    if (this->size() == 0)
    {
        return false;
    }
    m_states.pop();
    return true;
}

std::size_t states::StatesManager::size()
{
    return m_states.size();
}

void states::StatesManager::processTopState(double delta, sf::RenderWindow &window)
{
    if (!m_states.empty())
    {
        m_states.top()->update(delta);
        m_states.top()->render(window);
    }
}
