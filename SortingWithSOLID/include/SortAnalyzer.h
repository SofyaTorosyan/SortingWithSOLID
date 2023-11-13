#pragma once

#include "ISorter.h"
#include "Duration.h"
#include <map>
#include <vector>
#include <memory>
#include <chrono>
#include <iostream>
#include <algorithm>

using namespace std;

class SortAnalyzer
{

public:
	SortAnalyzer(const std::vector<std::shared_ptr<ISorter>>& s);
	std::map<std::string, Duration> analyze(std::vector<int>& arr, const int size);

private:
	std::vector<std::shared_ptr<ISorter>> sorters;
};