#include "GamePlayState.hpp"

GamePlayState::GamePlayState(sf::RenderWindow& window, StatesManager& statesManager) : BaseState(window, statesManager)
{
}

void GamePlayState::init()
{
}

void GamePlayState::update(double deltaTime)
{
}

void GamePlayState::processWindowEvents(sf::RenderWindow& window)
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Enter)) 
	{
		statesManager.pop();
	}
}

void GamePlayState::render(sf::RenderWindow& window)
{
	window.clear(sf::Color::Red);
}
