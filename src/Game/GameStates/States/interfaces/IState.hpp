#pragma once

#include <SFML/Graphics.hpp>


class IState {

public:
	virtual void init() = 0;
	virtual void update(double deltaTime) = 0;
	virtual void render(sf::RenderWindow &window) = 0;
	virtual void processWindowEvents(sf::RenderWindow &window) = 0;
	virtual void processGameObjects() = 0;
	virtual void renderGameObjects(sf::RenderWindow& window) = 0;
	virtual void processGuiElements() = 0;
	virtual void renderGuiElements(sf::RenderWindow& window) = 0;
};
