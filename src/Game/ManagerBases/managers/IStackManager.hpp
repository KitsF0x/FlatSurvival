#pragma once

#include <stack>
#include <memory>

template<typename T>
class IStackManager {
public:
	virtual void push(std::shared_ptr<T> obj) = 0;
	virtual void pop() = 0;
	virtual std::shared_ptr<T> getTop() = 0;
};