#include <gtest/gtest.h>

#include "GameObjectsManager.hpp"

class SimpleGameObject : public managers::IGameObject
{
  public:
    bool a = false, b = false, c = false;
    virtual void init() override
    {
        a = true;
    }

    virtual void update(double deltaTime) override
    {
        b = true;
    }

    virtual void render(sf::RenderWindow &window) override
    {
        c = true;
    }
};

TEST(GameObjectsManager, Can_add_and_manage_game_objects)
{
    managers::GameObjectsManager m;
    sf::RenderWindow wnd;
    auto go = std::make_shared<SimpleGameObject>();
    m.add(go);
    m.updateGameObjects(10);
    m.renderGameObjects(wnd);
    EXPECT_TRUE(go->a);
    EXPECT_TRUE(go->b);
    EXPECT_TRUE(go->c);
}
