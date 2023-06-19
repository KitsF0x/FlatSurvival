#include "Rectangle.hpp"

void gameobjects::Rectangle::init()
{
    m_shape.setSize(sf::Vector2f{64, 64});
}

void gameobjects::Rectangle::update(double deltaTime)
{
    sf::Color rectColor = m_shape.getFillColor();
    if (rectColor.r < 255)
    {
        rectColor.r++;
    }
    else
    {
        rectColor.r = 0;
    }
    m_shape.setFillColor(rectColor);
}

void gameobjects::Rectangle::render(sf::RenderWindow &window)
{
    window.draw(m_shape);
}
