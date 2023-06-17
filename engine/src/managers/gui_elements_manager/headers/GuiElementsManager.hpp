#pragma once

#include "IGuiElement.hpp"
#include <SFML/Graphics.hpp>
#include <algorithm>
#include <memory>
#include <vector>

namespace gui
{
class GuiElementsManager
{
  private:
    /// @brief Vector of gui elements.
    std::vector<std::shared_ptr<gui::IGuiElement>> m_guiElements;

  public:
    /// @brief Adds gui element to the manager.
    /// @param element Gui element to add.
    void add(std::shared_ptr<gui::IGuiElement> element);

    /// @brief Removes gui element from the manager.
    /// @param element Gui element to remove.
    bool remove(std::shared_ptr<gui::IGuiElement> element);

    /// @brief Processes gui elements from the manager.
    void process(sf::RenderWindow &window);

    /// @brief Returns number of gui elements in the manager.
    /// @return Number of the gui elements.
    std::size_t size();
};
} // namespace gui