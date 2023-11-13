#pragma once

#include <map>
#include <string>
#include <limits>
#include <algorithm>
#include "Timer.h"

struct Duration
{
	double hour;
	double min;
	double sec;

	Duration();
	Duration(const double h, const double m, const double s);
	bool operator< (const Duration& dur) const;
	bool operator== (const Duration& dur) const;
};

Duration getDuration(const Timer& t);
std::string getFastestSortingName(const std::multimap<Duration, std::string>& durations);
