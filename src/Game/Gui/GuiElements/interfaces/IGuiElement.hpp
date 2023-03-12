#pragma once

#include <SFML/Graphics.hpp>
#include <vector>

class IGuiElement
{
public:
	virtual sf::FloatRect getBounds() = 0;
	virtual void render(sf::RenderWindow& window) = 0;
	virtual void update() = 0;
	virtual void onClick() = 0;
	virtual void onHover() = 0;
	virtual void onIdle() = 0;

	// virtual destructor???
};