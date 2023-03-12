#pragma once

#include "IGuiElement.hpp"

class GuiElementBase : public IGuiElement
{
protected:
	std::vector<std::shared_ptr<IGuiElement>> elements;
};