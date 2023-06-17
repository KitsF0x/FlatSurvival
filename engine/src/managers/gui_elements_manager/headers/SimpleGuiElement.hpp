#include "IGuiElement.hpp"

namespace managers
{
class SimpleGuiElement : public managers::IGuiElement
{
  private:
    sf::RectangleShape m_shape;

  public:
    SimpleGuiElement();
    virtual void onHover() override;
    virtual void onClick() override;
    virtual void onIdle() override;
    virtual sf::FloatRect getFloatRect() override;
    virtual void render(sf::RenderWindow &window) override;
};
} // namespace managers