#include "GameObjectsManager.hpp"

void GameObjectsManager::render(sf::RenderWindow& window) {
	for (auto& el : objs) {
		el.second->render(window);
	}
}
void GameObjectsManager::process() {
	for (auto& el : objs) {
		el.second->update();
	}
}