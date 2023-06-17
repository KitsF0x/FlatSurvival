#include "GuiElementsManager.hpp"
#include "Renderer.hpp"
#include "SimpleGuiElement.hpp"
#include <iostream>

class SimpleState : public managers::IState
{
  private:
    managers::GuiElementsManager m_manager;

  public:
    virtual void init() override
    {
        m_manager.add(std::make_shared<managers::SimpleGuiElement>());
    }
    virtual void update(double deltaTime) override
    {
        std::cout << deltaTime << "\n";
    }
    virtual void render(sf::RenderWindow &window) override
    {
        m_manager.process(window);
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