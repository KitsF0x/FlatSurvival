#include "SimpleGuiElement.hpp"

gui::SimpleGuiElement::SimpleGuiElement()
{
    m_shape.setSize(sf::Vector2f{64.0f, 64.0f});
    m_shape.setFillColor(sf::Color::Blue);
}

void gui::SimpleGuiElement::onHover()
{
    m_shape.setFillColor(sf::Color::Yellow);
}

void gui::SimpleGuiElement::onClick()
{
    m_shape.setFillColor(sf::Color::Green);
}

void gui::SimpleGuiElement::onIdle()
{
    m_shape.setFillColor(sf::Color::Blue);
}

sf::FloatRect gui::SimpleGuiElement::getFloatRect()
{
    return m_shape.getGlobalBounds();
}

void gui::SimpleGuiElement::render(sf::RenderWindow &window)
{
    window.draw(m_shape);
}
