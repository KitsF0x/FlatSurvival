#include "Game.hpp"

void Game::start() {
  manager.push(std::make_shared<StateMainMenu>(window, manager));

  while (true) {
    manager.process();
    window.display();
  }
}

void Game::executeWindowConfigs() {
  window.create(sf::VideoMode{GlobalConfigTable::WINDOW_WIDTH,
                              GlobalConfigTable::WINDOW_HEIGHT},
                "");
  window.setFramerateLimit(GlobalConfigTable::WINDOW_FRAMERATE_LIMIT);
}
