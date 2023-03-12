#pragma once

#include "IStackManager.hpp"

template<typename T>
class StackManagerBase : public IStackManager<T>{
protected:
	std::stack<std::shared_ptr<T>> Ts;

public:
	void push(std::shared_ptr<T> obj) override
	{
		Ts.push(obj);
	}
	void pop() override
	{
		if(!Ts.empty()) { 
			Ts.pop(); 
		}
	}
	std::shared_ptr<T> getTop() override
	{
		if (!Ts.empty()) {
			return Ts.top();
		}
	}
};