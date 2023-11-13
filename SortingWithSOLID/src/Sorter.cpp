#include "../include/Sorter.h"
#include "Sorter.h"

Sorter::Sorter(int *arr, int size, void (*fnptr)(int *arr, int size), const std::string& name)
{
	alg = fnptr;
	algName = name;
}

void Sorter::sort(int *arr, const int size)
{
	alg(arr, size);
}

std::string Sorter::getName()
{
	return algName;
}
