#include "GameObjectsManager.hpp"

void managers::GameObjectsManager::add(std::shared_ptr<managers::IGameObject> gameObject)
{
    m_gameObjects.push_back(gameObject);
    gameObject->init();
}

void managers::GameObjectsManager::updateGameObjects(double deltaTime)
{
    for (auto &el : m_gameObjects)
    {
        el->update(deltaTime);
    }
}

void managers::GameObjectsManager::renderGameObjects(sf::RenderWindow &window)
{
    for (auto &el : m_gameObjects)
    {
        el->render(window);
    }
}

bool managers::GameObjectsManager::removeGameObject(std::shared_ptr<managers::IGameObject> gameObject)
{
    auto it = std::find(m_gameObjects.begin(), m_gameObjects.end(), gameObject);
    if (it != m_gameObjects.end())
    {
        m_gameObjects.erase(it);
        return true;
    }

    return false;
}

std::size_t managers::GameObjectsManager::size()
{
    m_gameObjects.size();
}
