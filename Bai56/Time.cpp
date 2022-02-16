#include <iostream>
#include <iomanip>
#include "Time.h"

using namespace std;

Time::Time(): hour(0), minute(0), second(0) {}

Time::Time(int hour, int minute, int second):
        hour(hour), minute(minute), second(second){}

void Time::showTimeUniversal() const {
    cout << setfill('0') << setw(2) << hour << ":"
         << setw(2) << minute << ":" << setw(2)
         << second << endl;
}

int Time::getHour() const{ return hour; }

int Time::getMinute() const{ return minute; }

int Time::getSecond() const{ return second; }

void Time::setHour(int hour) { this->hour = (hour >= 0 && hour <= 23) ? hour: 0; }

void Time::setMinute(int minute) { this->minute = (minute >= 0 && minute < 60) ? minute: 0; }

void Time::setSecond(int second) { this->second = (second >= 0 && second < 60) ? second: 0; }