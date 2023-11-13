#include "../include/SortAnalyzer.h"
#include "../include/Sorter.h"
#include "../include/Logger.h"
#include "../include/sorting.h"

int main()
{
	int size;
	std::cout << "Input array size: ";
	std::cin >> size;
	std::vector<int> arr(size, 0);
	std::vector<std::shared_ptr<ISorter>>  sorters;
	// keeping 3 rd and 5th SOLID principles
	sorters.push_back(std::make_shared<Sorter>(&bubbleSort, "bubbleSort"));
	sorters.push_back(std::make_shared<Sorter>(&insertionSort, "insertionSort"));

	std::map<std::string, Duration> sorterToDuration;
	SortAnalyzer analyzer(sorters);
	sorterToDuration = analyzer.analyze(arr, size);
	printDuration(sorterToDuration);
	
	return 0;
}
