#pragma once

#include <stdint.h>

#include <string>

class GlobalConfigTable {
public:
	// Window
	static std::uint16_t WINDOW_FRAMERATE_LIMIT;
	static std::uint16_t WINDOW_WIDTH;
	static std::uint16_t WINDOW_HEIGHT;
	
	// Resources
	static std::string RESOURCES_DIR_PATH;
	static std::string RESOURCES_FONTS_DIRNAME;
	static std::string RESOURCES_IMGS_DIRNAME;
	static std::string RESOURCES_SOUNDS_DIRNAME;
	static std::string RESOURCES_MUSIC_DIRNAME;
};