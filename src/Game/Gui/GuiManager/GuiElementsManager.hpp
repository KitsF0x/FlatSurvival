#pragma once

#include "MapManagerBase.hpp"
#include "IRenderable.hpp"
#include "IProcessable.hpp"

#include "IGuiElement.hpp"

#include <type_traits>

class Cursor;

class GuiElementsManager : public MapManagerBase<IGuiElement>, IRenderable, IProcessable 
{
private:
	sf::RenderWindow& window;
public:
	GuiElementsManager(sf::RenderWindow& window);
	void render(sf::RenderWindow& window) override;
	void process() override;
};