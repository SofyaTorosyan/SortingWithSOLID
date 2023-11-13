#include "../include/BubbleSorter.h"
#include "../include/sorting.h"

void BubbleSorter::sort(int* arr, const int size)
{
	bubbleSort(arr, size);
}

std::string BubbleSorter::getName()
{
	return "BubbleSort";
}
