#pragma once

#include "IState.hpp"
#include "SFML/Graphics/CircleShape.hpp"
#include "TexturesManager.hpp"
#include "GameObjectsManager.hpp"
#include "BaseState.hpp"

#include "GamePlayState.hpp"

#include "Panel.hpp"
#include "Image.hpp"
#include "Cursor.hpp"

class StateMainMenu : public BaseState {
 private:
	sf::CircleShape shape;
	sf::Sprite spr;
	int okejkaCounter = 0;
 public:
	StateMainMenu(sf::RenderWindow& window, StatesManager& statesManager);
	void init() override;
	void update(double deltaTime) override;
	void processWindowEvents(sf::RenderWindow &window) override;
	void render(sf::RenderWindow &window) override;
};
