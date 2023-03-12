#pragma once

#include "GuiElementBase.hpp"
#include "TexturesManager.hpp"

class Image : public GuiElementBase
{
protected:
	sf::Sprite sprite;
	std::unique_ptr<sf::RectangleShape> missingTexture;
	bool isTexturePresent;

public:
	Image(TexturesManager& texturesManager, const std::string& texture, const sf::Vector2f& pos, const sf::Vector2f& scale);
	sf::FloatRect getBounds() override;
	void render(sf::RenderWindow& window) override;
	void update() override;
	void onClick() override;
	void onHover() override;
	void onIdle() override;
};