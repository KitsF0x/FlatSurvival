#pragma once

#include <memory>
#include <map>
#include <string>

template<typename T>
class IMapManager {
public:
	virtual void add(std::shared_ptr<T> obj, const std::string& name) = 0;
	virtual void remove(const std::string& name) = 0;
	virtual std::shared_ptr<T> get(const std::string& name) = 0;
	virtual bool contains(const std::string& name) = 0;
};