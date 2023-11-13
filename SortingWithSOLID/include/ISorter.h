#pragma once

#include <string>

class ISorter
{
public:
	virtual void sort(int* arr, const int size) = 0;
	virtual std::string getName() = 0;
};