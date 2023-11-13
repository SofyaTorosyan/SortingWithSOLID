#include "../include/Sorter.h"
#include "Sorter.h"

Sorter::Sorter(void (*fnptr)(int *arr, int size), const std::string& name) : alg {fnptr}, algName{name}
{
	
}

void Sorter::sort(int *arr, const int size) const
{
	alg(arr, size);
}

const std::string& Sorter::getName() const noexcept
{
	return algName;
}

