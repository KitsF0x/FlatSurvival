#pragma once

#include "IState.hpp"
#include <memory>
#include <stack>

namespace managers
{
/// @brief Managing states as stack.
class StatesManager
{
  private:
    /// @brief Stack of states.
    std::stack<std::unique_ptr<managers::IState>> m_states;

  public:
    /// @brief Pushes new state to the stack.
    /// @param state New state.
    void push(std::unique_ptr<managers::IState> state);

    /// @brief Pops top state from the stack.
    /// @return True if successfully popped state. False if not(stack size is 0).
    bool pop();

    /// @brief Returns size of the stack(number of states).
    /// @return Size of the stack.
    std::size_t size();

    /// @brief Executes methods of the top state.
    /// @param delta Delta time.
    /// @param window RenderWindow.
    void processTopState(double delta, sf::RenderWindow &window);
};
} // namespace managers