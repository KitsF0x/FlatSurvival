#include "GuiElementsManager.hpp"
#include "IGuiElement.hpp"
#include "SimpleGuiElement.hpp"
#include <gtest/gtest.h>

TEST(GuiElementsManager_test, Can_add_new_element)
{
    gui::GuiElementsManager m{};
    EXPECT_NO_THROW(m.add(std::shared_ptr<gui::SimpleGuiElement>()));
    EXPECT_EQ(m.size(), 1);
}

TEST(GuiElementsManager_test, Can_remove_element)
{
    gui::GuiElementsManager m{};
    auto el = std::shared_ptr<gui::SimpleGuiElement>();
    EXPECT_NO_THROW(m.add(el));
    EXPECT_EQ(m.size(), 1);
    EXPECT_TRUE(m.remove(el));
    EXPECT_EQ(m.size(), 0);
}