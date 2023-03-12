#include "TexturesManager.hpp"

void TexturesManager::load(const std::string& filename, const std::string& name)
{
    std::shared_ptr<sf::Texture> ptr = std::make_unique<sf::Texture>();
    std::string fullPath = GlobalConfigTable::RESOURCES_DIR_PATH + GlobalConfigTable::RESOURCES_IMGS_DIRNAME;
    if (!ptr->loadFromFile(fullPath + filename)) 
    {
        LOG("Cannot load: " + fullPath + filename + " as " + name);
    } else 
    {
        add(ptr, name);
        LOG("Added " + fullPath + filename + " texture as: " + name);
    }
}
