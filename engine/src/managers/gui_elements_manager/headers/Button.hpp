#pragma once

#include "IGuiElement.hpp"
#include <functional>

namespace gui
{
class Button : public gui::IGuiElement
{
  private:
    std::function<void()> m_onHover{[]() {}};
    std::function<void()> m_onClick{[]() {}};
    sf::RectangleShape m_buttonShape;

    const sf::Color BUTTON_COLOR_IDLE{sf::Color::Green};
    const sf::Color BUTTON_BORDER_COLOR_IDLE{sf::Color::Blue};
    const float BUTTON_BORDER_THICKNESS_IDLE{1.0f};

    const sf::Color BUTTON_COLOR_CLICK{sf::Color::Red};
    const sf::Color BUTTON_BORDER_COLOR_CLICK{sf::Color::Cyan};
    const float BUTTON_BORDER_THICKNESS_CLICK{3.0f};

    const sf::Color BUTTON_COLOR_HOVER{sf::Color::Magenta};
    const sf::Color BUTTON_BORDER_COLOR_HOVER{sf::Color::Yellow};
    const float BUTTON_BORDER_THICKNESS_HOVER{2.0f};

  public:
    Button(const sf::Vector2f &position, const sf::Vector2f &size);
    virtual void onHover() override;
    virtual void onClick() override;
    virtual void onIdle() override;
    virtual sf::FloatRect getFloatRect() override;
    virtual void render(sf::RenderWindow &window) override;

    void setOnClick(const std::function<void()>& onClick);
    void setOnHover(const std::function<void()>& onHover);
};
} // namespace gui