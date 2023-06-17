#include "GuiElementsManager.hpp"

void gui::GuiElementsManager::add(std::shared_ptr<gui::IGuiElement> element)
{
    m_guiElements.push_back(element);
}

bool gui::GuiElementsManager::remove(std::shared_ptr<gui::IGuiElement> element)
{
    auto it = std::find(m_guiElements.begin(), m_guiElements.end(), element);
    if (it != m_guiElements.end())
    {
        m_guiElements.erase(it);
        return true;
    }

    return false;
}

void gui::GuiElementsManager::process(sf::RenderWindow &window)
{

    sf::RectangleShape cur{sf::Vector2f{1.0f, 1.0f}};
    cur.setPosition(sf::Vector2f{static_cast<float>(sf::Mouse::getPosition(window).x),
                                 static_cast<float>(sf::Mouse::getPosition(window).y)});
    for (auto &el : m_guiElements)
    {
        if (cur.getGlobalBounds().intersects(el->getFloatRect()))
        {
            if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
            {
                el->onClick();
            }
            else
            {
                el->onHover();
            }
        }
        else
        {
            el->onIdle();
        }
        el->render(window);
    }
}

std::size_t gui::GuiElementsManager::size()
{
    return m_guiElements.size();
}
