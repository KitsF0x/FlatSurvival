#pragma once

#include "StatesManager.hpp"

class IGame {
 public:
  virtual void start() = 0;
  virtual void executeWindowConfigs() = 0;
};