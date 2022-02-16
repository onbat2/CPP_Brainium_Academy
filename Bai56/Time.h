#ifndef UNTITLED_TIME_H
#define UNTITLED_TIME_H

#include <iostream>

class Time {
private:
    int hour;
    int minute;
    int second;
public:
    Time();
    Time(int,int,int);
    void showTimeUniversal() const;
    int getHour() const;
    int getMinute() const;
    int getSecond() const;
    void setHour(int hour);
    void setMinute(int minute);
    void setSecond(int second);
};


#endif //UNTITLED_TIME_H
