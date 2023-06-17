#include "GuiElementsManager.hpp"
#include "MousePosition.hpp"
#include "Renderer.hpp"
#include "SimpleGuiElement.hpp"
#include <iostream>

class SimpleState : public states::IState
{
  private:
    gui::GuiElementsManager m_manager;

  public:
    virtual void init() override
    {
        m_manager.add(std::make_shared<gui::SimpleGuiElement>());
    }
    virtual void update(double deltaTime, sf::RenderWindow &window) override
    {
        std::cout << deltaTime << "\n";
        renderer::MousePosition mousePos;
        m_manager.process(mousePos.getMousePositionOnWindow(window));
    }
    virtual void render(sf::RenderWindow &window) override
    {
        m_manager.render(window);
    }
};

int main()
{
    states::StatesManager sm;
    sm.push(std::make_unique<SimpleState>());
    sf::RenderWindow wnd{sf::VideoMode{800, 600}, "Hello, world!"};
    renderer::Renderer gm{wnd, sm};
    gm.loop();
}