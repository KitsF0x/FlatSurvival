
#include <SFML/Graphics.hpp>

#include "Game.hpp"


int main() {
	std::cout << "Hello, world!" << std::endl;
	Game game;
	game.executeWindowConfigs();
	game.start();
}
