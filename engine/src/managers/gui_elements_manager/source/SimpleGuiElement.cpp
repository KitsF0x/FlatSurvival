#include "SimpleGuiElement.hpp"

managers::SimpleGuiElement::SimpleGuiElement()
{
    m_shape.setSize(sf::Vector2f{64.0f, 64.0f});
    m_shape.setFillColor(sf::Color::Blue);
}

void managers::SimpleGuiElement::onHover()
{
    m_shape.setFillColor(sf::Color::Yellow);
}

void managers::SimpleGuiElement::onClick()
{
    m_shape.setFillColor(sf::Color::Green);
}

void managers::SimpleGuiElement::onIdle()
{
    m_shape.setFillColor(sf::Color::Blue);
}

sf::FloatRect managers::SimpleGuiElement::getFloatRect()
{
    return m_shape.getGlobalBounds();
}

void managers::SimpleGuiElement::render(sf::RenderWindow &window)
{
    window.draw(m_shape);
}
