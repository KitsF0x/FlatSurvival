#include "GameManager.hpp"

class SimpleState : public managers::IState
{
  public:
    virtual void init() override
    {
    }
    virtual void update(double deltaTime) override
    {
    }
    virtual void render(sf::RenderWindow &window) override
    {
    }
};

int main()
{
    managers::StatesManager sm;
    sf::RenderWindow wnd{sf::VideoMode{800, 600}, "Hello, world!"};
    managers::GameManager gm{wnd, sm};
    gm.loop();
}