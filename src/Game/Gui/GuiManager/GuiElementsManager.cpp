#include "GuiElementsManager.hpp"

GuiElementsManager::GuiElementsManager(sf::RenderWindow& window) : window(window)
{
}

void GuiElementsManager::render(sf::RenderWindow& window)
{
	bool cursor{false};
	for (auto& el : objs)
	{
		if (el.first == "CURSOR") {
			cursor = true;
			continue;
		}
		el.second->render(window);
	}
	if (cursor)
		objs.find("CURSOR")->second->render(window);
}

void GuiElementsManager::process()
{
	sf::Vector2i mousePosition = sf::Mouse::getPosition(window);
	for (auto& el : objs)
	{
		el.second->update();
		if (el.second->getBounds().contains(mousePosition.x, mousePosition.y))
		{
			if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
			{
				el.second->onClick();
			}
			else
			{
				el.second->onHover();
			}
		}
		else
		{
			el.second->onIdle();
		}
	}
}
