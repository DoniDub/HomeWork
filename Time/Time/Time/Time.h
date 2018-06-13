#pragma once
#include <iostream>
#include <ctime>

class Time
{
private:
	int hour;
	int minute;
	int second;
public:
	Time(int hour = 0, int minute = 0, int second = 0);

	//getter
	int getHour() const;
	int getMinute() const;
	int getSecond() const;
	//setter
	void setHour(int hour);
	void setMinute(int minute);
	void setSecond(int second);

	void printTime() const;
	static void printSystemTime();

	void addHour(int hour = 0);
	void addMinute(int minute = 0);
	void addSecond(int second = 0);
	void reduceHour(int hour = 0);
	void reduceMinute(int minute = 0);
	void reduceSecond(int second = 0);

	const Time& operator++();
	const Time& operator++(int);
	const Time& operator--();
	const Time& operator--(int);

	const Time& operator+=(const Time &a);
	const Time& operator-=(const Time &a);
};

std::ostream& operator<<(std::ostream &out, const Time &a);
std::istream& operator >> (std::istream &in, Time &a);

bool operator>(const Time &a, const Time &b);
bool operator<(const Time &a, const Time &b);
bool operator>=(const Time &a, const Time &b);
bool operator<=(const Time &a, const Time &b);
bool operator!=(const Time &a, const Time &b);
bool operator==(const Time &a, const Time &b);