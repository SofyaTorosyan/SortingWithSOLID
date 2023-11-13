#include "../include/SortAnalyzer.h"
#include "../include/Timer.h"

SortAnalyzer::SortAnalyzer(const std::vector<std::shared_ptr<ISorter>>& s) 
	: sorters(s)
{}

std::multimap<Duration, std::string> SortAnalyzer::analyze(std::vector<int>& arr, const int size)
{
	std::multimap<Duration, std::string> sorterToDuration;
	std::vector<int> arrCopy = arr;
	for (auto& sorter : sorters)
	{
		std::copy(std::begin(arrCopy), std::end(arrCopy), std::begin(arr));
		Timer t;
		sorter->sort(arr.data(), size);
		sorterToDuration.insert(std::make_pair(getDuration(t), sorter->getName()));
	}
	return sorterToDuration;
}
