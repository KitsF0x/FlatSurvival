#include "StatesManager.hpp"

void managers::StatesManager::push(std::unique_ptr<managers::IState> state)
{
    m_states.push(std::move(state));
    m_states.top()->init();
}

bool managers::StatesManager::pop()
{
    if (this->size() == 0)
    {
        return false;
    }
    m_states.pop();
    return true;
}

std::size_t managers::StatesManager::size()
{
    return m_states.size();
}

void managers::StatesManager::processTopState(double delta, sf::RenderWindow &window)
{
    m_states.top()->update(delta);
    m_states.top()->render(window);
}
