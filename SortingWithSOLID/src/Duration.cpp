#include "../include/Duration.h"

Duration::Duration() 
	: hour{ 0 }, min{ 0 }, sec{ 0 }
{ }

Duration::Duration(const double h, const double m, const double s) : hour{ h }, min{ m }, sec{ s }
{ }

bool Duration::operator== (const Duration& dur) const
{
	return hour == dur.hour && min == dur.min && sec == dur.sec;
}

bool Duration::operator< (const Duration& dur) const
{
	return ((hour < dur.hour) ||
		(hour == dur.hour && min < dur.min) ||
		(hour == dur.hour && min < dur.min && sec < dur.sec));
}

Duration getDuration(const Timer& t)
{
	const auto time = t.getEnd() - t.getStart();
	const auto hrs = std::chrono::duration_cast<std::chrono::hours>(time);
	const auto mins = std::chrono::duration_cast<std::chrono::minutes>(time - hrs);
	const auto secs = std::chrono::duration_cast<std::chrono::seconds>(time - hrs - mins);
	return Duration(hrs.count(), mins.count(), secs.count());
}

std::string getFastestSortingName(const std::map<std::string, Duration>& durations)
{
	std::string name("");
	// change DBL_MAX not in C++ , use std::numeric_limits
	Duration minimum(DBL_MAX, DBL_MAX, DBL_MAX);
	for (const auto& dur : durations)
	{
		minimum = dur.second < minimum ? dur.second : minimum;
		name = dur.first;
	}
	return name;
}