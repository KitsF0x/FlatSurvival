#include <gtest/gtest.h>

#include "StatesManager.hpp"

class SimpleState : public states::IState
{
  public:
    SimpleState(bool &init_set, bool &update_set, bool &render_set)
        : init_set(init_set), update_set(update_set), render_set(render_set)
    {
    }
    bool &init_set;
    bool &update_set;
    bool &render_set;

    virtual void init() override
    {
        init_set = true;
    }
    virtual void update(double deltaTime) override
    {
        update_set = true;
    }
    virtual void render(sf::RenderWindow &window) override
    {
        render_set = true;
    }
};

TEST(StatesManager_test, Can_push_and_pop_state)
{
    states::StatesManager sm;
    bool a, b, c;
    sm.push(std::make_unique<SimpleState>(a, b, c));
    EXPECT_EQ(sm.size(), 1);
    EXPECT_TRUE(sm.pop());
}

TEST(StatesManager_test, Cannot_pop_when_size_is_zero)
{
    states::StatesManager sm;
    bool a, b, c;
    sm.push(std::make_unique<SimpleState>(a, b, c));
    EXPECT_EQ(sm.size(), 1);
    EXPECT_TRUE(sm.pop());
    EXPECT_FALSE(sm.pop());
}

TEST(StatesManager_test, Can_process_top_state)
{
    states::StatesManager sm;
    bool init = false, update = false, render = false;
    sf::RenderWindow wnd;
    sm.push(std::make_unique<SimpleState>(init, update, render));
    sm.processTopState(1, wnd);
    EXPECT_TRUE(init);
    EXPECT_TRUE(update);
    EXPECT_TRUE(render);
}
