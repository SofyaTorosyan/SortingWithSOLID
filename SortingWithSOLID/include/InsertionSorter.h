#pragma once

#include "ISorter.h"

class InsertionSorter : public ISorter
{
public:
	void sort(int* arr, const int size) override;
	std::string getName() override;
};
