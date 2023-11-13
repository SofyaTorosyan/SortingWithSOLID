#include "Timer.h"
#include <iostream>

Timer::Timer()
{
	start = std::chrono::steady_clock::now();
}

std::chrono::time_point<std::chrono::steady_clock> Timer::getStart() const
{
	return start;
}

std::chrono::time_point<std::chrono::steady_clock> Timer::getEnd() const
{
	return std::chrono::steady_clock::now();
}



