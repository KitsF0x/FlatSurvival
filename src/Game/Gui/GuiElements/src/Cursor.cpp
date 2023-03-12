#include "Cursor.hpp"

Cursor::Cursor(sf::RenderWindow& window) : window(window)
{
	shape.setSize(sf::Vector2f(32, 32));
	shape.setFillColor(sf::Color::White);
	shape.setOutlineColor(sf::Color::Black);
	shape.setOutlineThickness(3.0f);
}

sf::FloatRect Cursor::getBounds()
{
	return shape.getGlobalBounds();
}

void Cursor::render(sf::RenderWindow& window)
{
	window.draw(shape);
}

void Cursor::update()
{
	sf::Vector2i mousePos = sf::Mouse::getPosition(window);
	shape.setPosition(mousePos.x, mousePos.y);
}

void Cursor::onClick()
{
}

void Cursor::onHover()
{
}

void Cursor::onIdle()
{
}
