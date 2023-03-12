#pragma once

#include "IGuiElement.hpp"

class Cursor : public IGuiElement
{
private:
	sf::RenderWindow& window;
	sf::RectangleShape shape;
public:
	Cursor(sf::RenderWindow& window);
	sf::FloatRect getBounds() override;
	void render(sf::RenderWindow& window) override;
	void update() override;
	void onClick() override;
	void onHover() override;
	void onIdle() override;
};