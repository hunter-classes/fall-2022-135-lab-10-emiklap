#pragma once

class Time {
public:
    int h;
    int m;
};

void printTime(Time time);
int minutesSinceMidnight(Time);
int minutesUntil(Time, Time);
