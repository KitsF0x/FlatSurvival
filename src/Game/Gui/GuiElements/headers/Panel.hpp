#pragma once

#include "GuiElementBase.hpp"

class Panel : public GuiElementBase
{
protected:
	sf::RectangleShape panelShape;
public:
	Panel(const sf::Color& color, const sf::Vector2f& pos, const sf::Vector2f& size);
	sf::FloatRect getBounds() override;
	void render(sf::RenderWindow& window) override;
	void update() override;
	void onClick() override;
	void onHover() override;
	void onIdle() override;
};