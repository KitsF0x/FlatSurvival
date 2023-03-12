#pragma once

#include <SFML/Graphics.hpp>

class IGameObject {
public:
	virtual void init() = 0;
	virtual void update() = 0;
	virtual void render(sf::RenderWindow& window) = 0;
	virtual std::string getName() = 0;
};