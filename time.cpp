#include <iostream>
#include <iomanip>
#include "time.h"

void printTime(Time time) {
    std::cout << time.h << ":" << std::setw(2) << std::setfill('0') << time.m << std::endl;
}

//task A
int minutesSinceMidnight(Time time) {
    return (time.h * 60) + time.m;
}

int minutesUntil(Time earlier, Time later) {
    int earlierMins = minutesSinceMidnight(earlier);
    int laterMins = minutesSinceMidnight(later);
    return laterMins - earlierMins;
}

//task B
Time addMinutes(Time time0, int min) {
    time0.m += min;
    if (time0.m > 60) {
        time0.h += time0.m / 60;
        time0.m = time0.m % 60;
    }
    return time0;
}
