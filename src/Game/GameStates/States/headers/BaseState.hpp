#pragma once

#include "IState.hpp"
#include "StatesManager.hpp"
#include "GameObjectsManager.hpp"
#include "GuiElementsManager.hpp"
#include "TexturesManager.hpp"

class IStatesManager;

class BaseState : public IState
{
protected:
	BaseState(sf::RenderWindow& window, StatesManager& stateManager);

	sf::RenderWindow& window;
	StatesManager& statesManager;
	GameObjectsManager gameObjectsManager;
	GuiElementsManager guiElementsManager;
	TexturesManager texturesManager;

	void processGameObjects() override;
	void renderGameObjects(sf::RenderWindow& window) override;
	void processGuiElements() override;
	void renderGuiElements(sf::RenderWindow& window) override;
};