#pragma once

#include <SFML/Graphics.hpp>

class IRenderable {
public:
	virtual void render(sf::RenderWindow& window) = 0;
};