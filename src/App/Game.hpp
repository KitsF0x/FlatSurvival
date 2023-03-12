#pragma once

#include "GlobalConfigTable.hpp"
#include "IGame.hpp"
#include "StateMainMenu.hpp"
#include "StatesManager.hpp"

class Game : public IGame {
 private:
  sf::RenderWindow window{sf::VideoMode{800, 600}, "H"};
  StatesManager manager{window};

 public:
  void start() override;
  void executeWindowConfigs() override;
};