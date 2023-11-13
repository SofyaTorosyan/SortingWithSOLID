#pragma once

#include <chrono>

class Timer
{
public:	
	Timer();
	std::chrono::time_point<std::chrono::steady_clock> getStart() const;
	std::chrono::time_point<std::chrono::steady_clock> getEnd() const;
private:
	std::chrono::time_point <std::chrono::steady_clock> start;
};

