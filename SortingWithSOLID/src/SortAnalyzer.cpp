#include "../include/SortAnalyzer.h"
#include "../include/Timer.h"

SortAnalyzer::SortAnalyzer(const std::vector<std::shared_ptr<ISorter>>& s) 
	: sorters(s)
{}

std::map<std::string, Duration> SortAnalyzer::analyze(std::vector<int>& arr, const int size)
{
	std::map<std::string, Duration> sorterToDuration;
	std::vector<int> arrCopy = arr;
	for (auto& sorter : sorters)
	{
		std::copy(std::begin(arrCopy), std::end(arrCopy), std::begin(arr));
		Timer t;
		sorter->sort(arr.data(), size);
		sorterToDuration.insert(std::make_pair(sorter->getName(), getDuration(t)));
	}
	return sorterToDuration;
}
