#include "StatesManager.hpp"

StatesManager::StatesManager(sf::RenderWindow &windowRef)
    : windowRef(windowRef) {}

void StatesManager::push(std::shared_ptr<IState> obj) {
    Ts.push(obj);
    obj->init();
}

void StatesManager::process() 
{
    sf::Event checkCloseEvent;
    while (windowRef.pollEvent(checkCloseEvent)) {
        if (checkCloseEvent.type == sf::Event::Closed) {
            // Add later shutdown mechanism
            windowRef.close();
            exit(0);
        }
    }
    if (!Ts.empty()) {
        getTop()->update(deltaTime);
        getTop()->processWindowEvents(windowRef);
        getTop()->processGameObjects();
        getTop()->processGuiElements();
        getTop()->render(windowRef);
        getTop()->renderGameObjects(windowRef);
        getTop()->renderGuiElements(windowRef);
    } 
    else 
    {
        windowRef.close();
    }
    deltaTime = deltaTimer.restart().asSeconds();
    windowRef.setTitle("FPS: " + std::to_string(static_cast<int>(1.0 / deltaTime)));
}