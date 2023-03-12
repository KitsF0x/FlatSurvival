#pragma once

#include "IMapManager.hpp"

template<typename T>
class MapManagerBase : public IMapManager<T> {
protected:
	std::map<std::string, std::shared_ptr<T>> objs;

public:
	void add(std::shared_ptr<T> obj, const std::string& name) override
	{
		if (!contains(name)) {
			objs.insert({ name, obj });
		}
	}
	void remove(const std::string& name) override
	{
		if (contains(name)) {
			objs.erase(name);
		}
	}
	std::shared_ptr<T> get(const std::string& name) override
	{
		if (contains(name)) {
			return objs.at(name);
		}
		return std::shared_ptr<T>(nullptr);
	}
	bool contains(const std::string& name) override
	{
		return (objs.find(name) != objs.end()) ? true : false;
	}
};

