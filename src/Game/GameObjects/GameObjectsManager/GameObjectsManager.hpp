#pragma once

#include <map>

#include "MapManagerBase.hpp"
#include "IRenderable.hpp"
#include "IProcessable.hpp"

#include "IGameObject.hpp"
#include "Log.hpp"

class GameObjectsManager : public MapManagerBase<IGameObject>, IRenderable, IProcessable {
public:
	void render(sf::RenderWindow& window) override;
	void process() override;
};