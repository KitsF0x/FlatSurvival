#include "Image.hpp"


Image::Image(TexturesManager& texturesManager, const std::string& texture, const sf::Vector2f& pos, const sf::Vector2f& scale)
{
	if (texturesManager.get(texture).get() == nullptr)
	{
		isTexturePresent = false;
		missingTexture = std::make_unique<sf::RectangleShape>(sf::Vector2f{ 64, 64 });
		missingTexture->setFillColor(sf::Color(128, 0, 128));
		missingTexture->setPosition(pos);
	}
	else
	{
		sprite.setTexture(*texturesManager.get(texture).get());
		sprite.setPosition(pos);
		sprite.setScale(scale);
		
	}
}

sf::FloatRect Image::getBounds()
{
	return isTexturePresent ? sprite.getGlobalBounds() : missingTexture->getGlobalBounds();
}

void Image::render(sf::RenderWindow& window)
{
	isTexturePresent ? window.draw(sprite) : window.draw(*missingTexture.get());
}

void Image::update()
{
}

void Image::onClick()
{
}

void Image::onHover()
{
}

void Image::onIdle()
{
}
