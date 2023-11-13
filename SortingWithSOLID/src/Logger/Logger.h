#pragma once

#include "./Duration/Duration.h"
#include <Windows.h>
#include <iostream>
#include <limits>
#include <map>

void printDuration(const std::multimap<Duration, std::string> durations)
{
	const std::string fastestSortingName = getFastestSortingName(durations);
	std::cout << "SortingName    -->   Duration(h : min : sec) \n";
	for (const auto& dur : durations)
	{
		const auto time = dur.first;
		if (dur.second == fastestSortingName)
		{
			HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(hConsole, 2);
			std::cout << dur.second << " : ( " << time.hour << "h " << time.min << "min " << time.sec << "sec ) " << std::endl;
			SetConsoleTextAttribute(hConsole, 0);
		}
		else
		{
			std::cout << dur.second << " : ( " << time.hour << "h " << time.min << "min " << time.sec << "sec ) " << std::endl;
		}
	}
}
