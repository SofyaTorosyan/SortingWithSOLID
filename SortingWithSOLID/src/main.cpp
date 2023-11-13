#include "./SortAnalyzer/SortAnalyzer.h"
#include "./Sorter/Sorter.h"
#include "./Logger/Logger.h"
#include "./Sorting/sorting.h"

const std::vector<int> randomGenerate(const int size)
{
	std::vector<int> vec;
	for (int i = 0; i < size; ++i)
	{
		vec.push_back(std::rand() % 100);
	}
	return vec;
}

int main()
{
	int size;
	std::cout << "Input array size: ";
	std::cin >> size;
	std::vector<int> arr = randomGenerate(size);
	std::vector<std::shared_ptr<ISorter>>  sorters;
	// keeping 3 rd and 5th SOLID principles
	sorters.push_back(std::make_shared<Sorter>(&bubbleSort, "bubbleSort"));
	sorters.push_back(std::make_shared<Sorter>(&insertionSort, "insertionSort"));
	
	SortAnalyzer analyzer(sorters);
	const std::multimap<Duration, std::string>& sorterToDuration = analyzer.analyze(arr, size);
	printDuration(sorterToDuration);
	
	return 0;
}

