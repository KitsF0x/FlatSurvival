#include "Renderer.hpp"

#include <iostream>

class SimpleState : public managers::IState
{
  public:
    virtual void init() override
    {
    }
    virtual void update(double deltaTime) override
    {
        std::cout << deltaTime << "\n";
    }
    virtual void render(sf::RenderWindow &window) override
    {
    }
};

int main()
{
    managers::StatesManager sm;
    sm.push(std::make_unique<SimpleState>());
    sf::RenderWindow wnd{sf::VideoMode{800, 600}, "Hello, world!"};
    renderer::Renderer gm{wnd, sm};
    gm.loop();
}