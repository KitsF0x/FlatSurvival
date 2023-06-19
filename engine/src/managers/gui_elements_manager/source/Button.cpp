#include "Button.hpp"

gui::Button::Button(const sf::Vector2f &position, const sf::Vector2f &size)
{
    m_buttonShape.setSize(size);
    m_buttonShape.setPosition(position);
}

void gui::Button::onHover()
{
    m_onHover();
    m_buttonShape.setFillColor(BUTTON_BORDER_COLOR_HOVER);
    m_buttonShape.setOutlineColor(BUTTON_BORDER_COLOR_HOVER);
    m_buttonShape.setOutlineThickness(BUTTON_BORDER_THICKNESS_HOVER);
}

void gui::Button::onClick()
{
    m_onClick();
    m_buttonShape.setFillColor(BUTTON_BORDER_COLOR_CLICK);
    m_buttonShape.setOutlineColor(BUTTON_BORDER_COLOR_CLICK);
    m_buttonShape.setOutlineThickness(BUTTON_BORDER_THICKNESS_CLICK);
}

void gui::Button::onIdle()
{
    m_buttonShape.setFillColor(BUTTON_COLOR_IDLE);
    m_buttonShape.setOutlineColor(BUTTON_BORDER_COLOR_IDLE);
    m_buttonShape.setOutlineThickness(BUTTON_BORDER_THICKNESS_IDLE);
}

sf::FloatRect gui::Button::getFloatRect()
{
    return m_buttonShape.getGlobalBounds();
}

void gui::Button::render(sf::RenderWindow &window)
{
    window.draw(m_buttonShape);
}

void gui::Button::setOnClick(const std::function<void()> &onClick)
{
    m_onClick = onClick;
}

void gui::Button::setOnHover(const std::function<void()> &onHover)
{
    m_onHover = onHover;
}
