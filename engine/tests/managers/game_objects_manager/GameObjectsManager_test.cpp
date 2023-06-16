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

class SimpleGameObject2 : public SimpleGameObject
{
};

class GameObjectsManager_test : public ::testing::Test
{
  public:
    managers::GameObjectsManager m;
    sf::RenderWindow wnd;
    std::shared_ptr<SimpleGameObject> go = std::make_shared<SimpleGameObject>();
};

TEST_F(GameObjectsManager_test, Can_add_and_manage_game_objects)
{

    m.add(go);
    m.updateGameObjects(10);
    m.renderGameObjects(wnd);
    EXPECT_EQ(m.size(), 1);
    EXPECT_TRUE(go->a);
    EXPECT_TRUE(go->b);
    EXPECT_TRUE(go->c);
}

TEST_F(GameObjectsManager_test, Can_remove_game_objects)
{
    m.add(go);
    auto go2 = std::make_shared<SimpleGameObject2>();
    m.add(go2);
    EXPECT_EQ(m.size(), 2);
    m.removeGameObject(go2);
    EXPECT_EQ(m.size(), 1);
}
