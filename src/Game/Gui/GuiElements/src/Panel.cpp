#include "Panel.hpp"

Panel::Panel(const sf::Color& color, const sf::Vector2f& pos, const sf::Vector2f& size)
{
	panelShape.setFillColor(color);
	panelShape.setPosition(pos);
	panelShape.setSize(size);
}

sf::FloatRect Panel::getBounds()
{
	return panelShape.getGlobalBounds();
}

void Panel::render(sf::RenderWindow& window)
{
	window.draw(panelShape);
}

void Panel::update()
{
}

void Panel::onClick()
{
}

void Panel::onHover()
{
}

void Panel::onIdle()
{
}