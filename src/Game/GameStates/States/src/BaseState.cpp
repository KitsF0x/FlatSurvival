#include "BaseState.hpp"

BaseState::BaseState(sf::RenderWindow& window, StatesManager& statesManager) :
	window(window), 
	statesManager(statesManager),
	guiElementsManager(window)
{
}

void BaseState::processGameObjects()
{
	gameObjectsManager.process();
}
void BaseState::renderGameObjects(sf::RenderWindow& window)
{
	gameObjectsManager.render(window);
}
void BaseState::processGuiElements()
{
	guiElementsManager.process();
}
void BaseState::renderGuiElements(sf::RenderWindow& window)
{
	guiElementsManager.render(window);
}