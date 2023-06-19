#pragma once

#include "GameObjectsManager.hpp"
#include "IState.hpp"
#include "StatesManager.hpp"

namespace states
{
class BaseState : public states::IState
{
  public:
    BaseState(states::StatesManager &statesManager);

  protected:
    gameobjects::GameObjectsManager m_gameObjectsManager;
    states::StatesManager &m_statesManager;
};
} // namespace states