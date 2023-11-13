#include "../include/sorting.h"
#include <algorithm>

void bubbleSort(int* arr, const int size)
{
	bool sorted = false;
	for (size_t i = 0; i < size; ++i)
	{
		sorted = false;
		for (size_t j = 0; j < size - 1; ++j)
		{
			if (arr[j] > arr[j + 1])
			{
				std::swap(arr[j], arr[j + 1]);
				sorted = true;
			}
		}
		if (!sorted)
		{
			break;
		}
	}
}

void insertionSort(int* arr, const int size)
{
	for (size_t i = 0; i < size; ++i)
	{
		for (size_t j = i; j > 0; --j)
		{
			while (arr[j] < arr[j - 1])
			{
				std::swap(arr[j], arr[j - 1]);
			}
		}
	}
}
