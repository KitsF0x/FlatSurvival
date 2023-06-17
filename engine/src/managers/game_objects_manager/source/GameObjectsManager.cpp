#include "GameObjectsManager.hpp"

void gameobjects::GameObjectsManager::add(std::shared_ptr<gameobjects::IGameObject> gameObject)
{
    m_gameObjects.push_back(gameObject);
    gameObject->init();
}

void gameobjects::GameObjectsManager::updateGameObjects(double deltaTime)
{
    for (auto &el : m_gameObjects)
    {
        el->update(deltaTime);
    }
}

void gameobjects::GameObjectsManager::renderGameObjects(sf::RenderWindow &window)
{
    for (auto &el : m_gameObjects)
    {
        el->render(window);
    }
}

bool gameobjects::GameObjectsManager::removeGameObject(std::shared_ptr<gameobjects::IGameObject> gameObject)
{
    auto it = std::find(m_gameObjects.begin(), m_gameObjects.end(), gameObject);
    if (it != m_gameObjects.end())
    {
        m_gameObjects.erase(it);
        return true;
    }

    return false;
}

std::size_t gameobjects::GameObjectsManager::size()
{
    m_gameObjects.size();
}
