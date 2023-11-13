#pragma once

#include "ISorter.h"

class Sorter : public ISorter
{	
public:
	Sorter(void (*fnptr)(int* arr, int size), const std::string& name);
	void sort(int* arr, const int size) override;
	std::string getName() override;
private:
	void (*alg)(int* arr, int size);
	std::string algName;
};