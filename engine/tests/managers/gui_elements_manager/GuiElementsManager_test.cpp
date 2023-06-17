#include "GuiElementsManager.hpp"
#include "IGuiElement.hpp"
#include "SimpleGuiElement.hpp"
#include <gtest/gtest.h>

TEST(GuiElementsManager_test, Can_add_new_element)
{
    managers::GuiElementsManager m{};
    EXPECT_NO_THROW(m.add(std::shared_ptr<managers::SimpleGuiElement>()));
    EXPECT_EQ(m.size(), 1);
}

TEST(GuiElementsManager_test, Can_remove_element)
{
    managers::GuiElementsManager m{};
    auto el = std::shared_ptr<managers::SimpleGuiElement>();
    EXPECT_NO_THROW(m.add(el));
    EXPECT_EQ(m.size(), 1);
    EXPECT_TRUE(m.remove(el));
    EXPECT_EQ(m.size(), 0);
}