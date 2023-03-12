#include "BaseState.hpp"

class GamePlayState : public BaseState {
private:

public:
	GamePlayState(sf::RenderWindow& window, StatesManager& statesManager);
	void init() override;
	void update(double deltaTime) override;
	void processWindowEvents(sf::RenderWindow& window) override;
	void render(sf::RenderWindow& window) override;
};