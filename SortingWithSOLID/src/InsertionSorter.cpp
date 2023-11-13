#include "../include/InsertionSorter.h"
#include "../include/sorting.h"

void InsertionSorter::sort(int* arr, const int size)
{
	insertionSort(arr, size);
}

std::string InsertionSorter::getName()
{
	return "InsertionSort";
}
