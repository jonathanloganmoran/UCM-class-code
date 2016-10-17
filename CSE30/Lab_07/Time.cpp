#include "Time.h"
Time::Time() {
	hour = 0;
	minutes = 0;
	seconds = 0;
}
Time::Time(int a, int b, int c) {
	hour = a;
	minutes = b;
	seconds = c;
}
Time::~Time() {};

void Time::setHour(int hr) {
	hour = hr;
}

void Time::setMinutes(int min) {
	minutes = min;
}

void Time::setSeconds(int sec) {
	seconds = sec;
}