#pragma once

#include <stack>
#include <string>

#include "IState.hpp"
#include "StackManagerBase.hpp"
#include "IProcessable.hpp"

class StatesManager : public StackManagerBase<IState>, IProcessable{
private:
	sf::RenderWindow &windowRef;

	sf::Clock deltaTimer;
	double deltaTime{0};

public:
	StatesManager(sf::RenderWindow &windowRef);
	void push(std::shared_ptr<IState> obj) override;
	void process() override;
};