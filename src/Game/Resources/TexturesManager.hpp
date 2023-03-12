#pragma once

#include <SFML/Graphics.hpp>
#include <iostream>
#include <unordered_map>

#include "Log.hpp"
#include "MapManagerBase.hpp"

#include "GlobalConfigTable.hpp"


class TexturesManager : public MapManagerBase<sf::Texture> {
public:
	void load(const std::string& filename, const std::string& name);
};