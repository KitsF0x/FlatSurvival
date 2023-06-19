#include "Rectangle.hpp"

void gameobjects::Rectangle::init()
{
    setSize(sf::Vector2f{64, 64});
}

void gameobjects::Rectangle::update(double deltaTime)
{
    switch (rand() % 5)
    {
    case 0:
        move(sf::Vector2f{0, -4});
        break;
    case 1:
        move(sf::Vector2f{4, 0});
        break;
    case 2:
        move(sf::Vector2f{0, 4});
        break;
    case 3:
        move(sf::Vector2f{-4, 0});
        break;
    }
}

void gameobjects::Rectangle::render(sf::RenderWindow &window)
{
    window.draw(*this);
}
