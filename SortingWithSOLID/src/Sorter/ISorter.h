#pragma once

#include <string>

class ISorter
{
public:
	virtual ~ISorter() = default;
	virtual void sort(int* arr, const int size) const = 0;
	virtual const std::string& getName() const noexcept = 0;
};
